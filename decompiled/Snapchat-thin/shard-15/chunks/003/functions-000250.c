/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba0cf24; end: 10ba0cf3b; -[SCACanvasReportSubmitted setCognacReportReasonId:] */

void FUN_10ba0cf24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbf578,5,param_3,0);
  return;
}



/* Entry: 10ba0cf3c; end: 10ba0cf5f; -[SCACanvasReportSubmitted getFieldNumberToFieldDict] */

void FUN_10ba0cf3c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0cf60; end: 10ba0cf97; -[SCACanvasReportSubmitted addToProtoDictionary] */

void FUN_10ba0cf60(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0cf98; end: 10ba0cfef; -[SCACanvasReportSubmitted toProtoWithAllowedFields:] */

void FUN_10ba0cf98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0cff0; end: 10ba0cff7; -[SCACanvasReportSubmitted getPayloadIdentifier] */

undefined8 FUN_10ba0cff0(void)

{
  return 0x1c2;
}



/* Entry: 10ba0cff8; end: 10ba0d073; -[SCACanvasShareEventBase setCognacShareSourceType:] */

void FUN_10ba0cff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba0c564(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_110fbf598,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0d074; end: 10ba0d0ef; -[SCACanvasShareEventBase setContext:] */

void FUN_10ba0d074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baefa44(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_110dae878,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0d0f0; end: 10ba0d103; -[SCACanvasShareEventBase setShareIds:] */

void FUN_10ba0d0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110fbf5b8,param_3,0);
  return;
}



/* Entry: 10ba0d104; end: 10ba0d17f; -[SCACanvasShareEventBase setShareType:] */

void FUN_10ba0d104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baefa44(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_110e55278,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0d180; end: 10ba0d18b; -[SCACanvasShareSendAttempt getEventName] */

undefined ** FUN_10ba0d180(void)

{
  return &PTR____CFConstantStringClassReference_110fbf5d8;
}



/* Entry: 10ba0d18c; end: 10ba0d193; -[SCACanvasShareSendAttempt getEventQoS] */

undefined8 FUN_10ba0d18c(void)

{
  return 1;
}



/* Entry: 10ba0d194; end: 10ba0d19f; -[SCACanvasShareSendAttempt getPerUserSamplingRateV2] */

undefined8 FUN_10ba0d194(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba0d1a0; end: 10ba0d1f3; -[SCACanvasShareSendAttempt setScore:] */

void FUN_10ba0d1a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e88df8,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0d1f4; end: 10ba0d217; -[SCACanvasShareSendAttempt getFieldNumberToFieldDict] */

void FUN_10ba0d1f4(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0d218; end: 10ba0d24f; -[SCACanvasShareSendAttempt addToProtoDictionary] */

void FUN_10ba0d218(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0d250; end: 10ba0d2a7; -[SCACanvasShareSendAttempt toProtoWithAllowedFields:] */

void FUN_10ba0d250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0d2a8; end: 10ba0d2af; -[SCACanvasShareSendAttempt getPayloadIdentifier] */

undefined8 FUN_10ba0d2a8(void)

{
  return 0x1c3;
}



/* Entry: 10ba0d2b0; end: 10ba0d2bb; -[SCACanvasShareSendSendTo getEventName] */

undefined ** FUN_10ba0d2b0(void)

{
  return &PTR____CFConstantStringClassReference_110fbf5f8;
}



/* Entry: 10ba0d2bc; end: 10ba0d2c3; -[SCACanvasShareSendSendTo getEventQoS] */

undefined8 FUN_10ba0d2bc(void)

{
  return 1;
}



/* Entry: 10ba0d2c4; end: 10ba0d2cf; -[SCACanvasShareSendSendTo getPerUserSamplingRateV2] */

undefined8 FUN_10ba0d2c4(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba0d2d0; end: 10ba0d2f3; -[SCACanvasShareSendSendTo getFieldNumberToFieldDict] */

void FUN_10ba0d2d0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0d2f4; end: 10ba0d32b; -[SCACanvasShareSendSendTo addToProtoDictionary] */

void FUN_10ba0d2f4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0d32c; end: 10ba0d383; -[SCACanvasShareSendSendTo toProtoWithAllowedFields:] */

void FUN_10ba0d32c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0d384; end: 10ba0d38b; -[SCACanvasShareSendSendTo getPayloadIdentifier] */

undefined8 FUN_10ba0d384(void)

{
  return 0x1c4;
}



/* Entry: 10ba0d38c; end: 10ba0d397; -[SCACanvasShareSent getEventName] */

undefined ** FUN_10ba0d38c(void)

{
  return &PTR____CFConstantStringClassReference_110fbf618;
}



/* Entry: 10ba0d398; end: 10ba0d39f; -[SCACanvasShareSent getEventQoS] */

undefined8 FUN_10ba0d398(void)

{
  return 1;
}



/* Entry: 10ba0d3a0; end: 10ba0d3ab; -[SCACanvasShareSent getPerUserSamplingRateV2] */

undefined8 FUN_10ba0d3a0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba0d3ac; end: 10ba0d3ff; -[SCACanvasShareSent setSuccess:] */

void FUN_10ba0d3ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,9,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0d400; end: 10ba0d423; -[SCACanvasShareSent getFieldNumberToFieldDict] */

void FUN_10ba0d400(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0d424; end: 10ba0d45b; -[SCACanvasShareSent addToProtoDictionary] */

void FUN_10ba0d424(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0d45c; end: 10ba0d4b3; -[SCACanvasShareSent toProtoWithAllowedFields:] */

void FUN_10ba0d45c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0d4b4; end: 10ba0d4bb; -[SCACanvasShareSent getPayloadIdentifier] */

undefined8 FUN_10ba0d4b4(void)

{
  return 0x1c5;
}



/* Entry: 10ba0d4bc; end: 10ba0d4c7; -[SCACanvasShareSentReturnToApp getEventName] */

undefined ** FUN_10ba0d4bc(void)

{
  return &PTR____CFConstantStringClassReference_110fbf638;
}



/* Entry: 10ba0d4c8; end: 10ba0d4cf; -[SCACanvasShareSentReturnToApp getEventQoS] */

undefined8 FUN_10ba0d4c8(void)

{
  return 1;
}



/* Entry: 10ba0d4d0; end: 10ba0d4db; -[SCACanvasShareSentReturnToApp getPerUserSamplingRateV2] */

undefined8 FUN_10ba0d4d0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba0d4dc; end: 10ba0d4ff; -[SCACanvasShareSentReturnToApp getFieldNumberToFieldDict] */

void FUN_10ba0d4dc(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0d500; end: 10ba0d537; -[SCACanvasShareSentReturnToApp addToProtoDictionary] */

void FUN_10ba0d500(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0d538; end: 10ba0d58f; -[SCACanvasShareSentReturnToApp toProtoWithAllowedFields:] */

void FUN_10ba0d538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0d590; end: 10ba0d597; -[SCACanvasShareSentReturnToApp getPayloadIdentifier] */

undefined8 FUN_10ba0d590(void)

{
  return 0x1c6;
}



/* Entry: 10ba0d598; end: 10ba0d5a3; -[SCACanvasVisibilityPermissionAction getEventName] */

undefined ** FUN_10ba0d598(void)

{
  return &PTR____CFConstantStringClassReference_110fbf658;
}



/* Entry: 10ba0d5a4; end: 10ba0d5ab; -[SCACanvasVisibilityPermissionAction getEventQoS] */

undefined8 FUN_10ba0d5a4(void)

{
  return 1;
}



/* Entry: 10ba0d5ac; end: 10ba0d5b3; -[SCACanvasVisibilityPermissionAction getPerUserSamplingRateV2] */

undefined8 FUN_10ba0d5ac(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 10ba0d5b4; end: 10ba0d633; -[SCACanvasVisibilityPermissionAction setAction:] */

void FUN_10ba0d5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba0c524(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0d634; end: 10ba0d657; -[SCACanvasVisibilityPermissionAction getFieldNumberToFieldDict] */

void FUN_10ba0d634(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0d658; end: 10ba0d68f; -[SCACanvasVisibilityPermissionAction addToProtoDictionary] */

void FUN_10ba0d658(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0d690; end: 10ba0d6e7; -[SCACanvasVisibilityPermissionAction toProtoWithAllowedFields:] */

void FUN_10ba0d690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0d6e8; end: 10ba0d6ef; -[SCACanvasVisibilityPermissionAction getPayloadIdentifier] */

undefined8 FUN_10ba0d6e8(void)

{
  return 0xccd;
}



/* Entry: 10ba0d6f0; end: 10ba0d6fb; -[SCACanvasVisibilityPermissionPresent getEventName] */

undefined ** FUN_10ba0d6f0(void)

{
  return &PTR____CFConstantStringClassReference_110fbf678;
}



/* Entry: 10ba0d6fc; end: 10ba0d703; -[SCACanvasVisibilityPermissionPresent getEventQoS] */

undefined8 FUN_10ba0d6fc(void)

{
  return 1;
}



/* Entry: 10ba0d704; end: 10ba0d70b; -[SCACanvasVisibilityPermissionPresent getPerUserSamplingRateV2] */

undefined8 FUN_10ba0d704(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 10ba0d70c; end: 10ba0d72f; -[SCACanvasVisibilityPermissionPresent getFieldNumberToFieldDict] */

void FUN_10ba0d70c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0d730; end: 10ba0d767; -[SCACanvasVisibilityPermissionPresent addToProtoDictionary] */

void FUN_10ba0d730(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0d768; end: 10ba0d7bf; -[SCACanvasVisibilityPermissionPresent toProtoWithAllowedFields:] */

void FUN_10ba0d768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0d7c0; end: 10ba0d7c7; -[SCACanvasVisibilityPermissionPresent getPayloadIdentifier] */

undefined8 FUN_10ba0d7c0(void)

{
  return 0xcce;
}



/* Entry: 10ba0d7c8; end: 10ba0d7d3; -[SCACognacActionChatSent getEventName] */

undefined ** FUN_10ba0d7c8(void)

{
  return &PTR____CFConstantStringClassReference_110fbf698;
}



/* Entry: 10ba0d7d4; end: 10ba0d7db; -[SCACognacActionChatSent getEventQoS] */

undefined8 FUN_10ba0d7d4(void)

{
  return 1;
}



/* Entry: 10ba0d7dc; end: 10ba0d7ff; -[SCACognacActionChatSent getFieldNumberToFieldDict] */

void FUN_10ba0d7dc(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0d800; end: 10ba0d837; -[SCACognacActionChatSent addToProtoDictionary] */

void FUN_10ba0d800(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0d838; end: 10ba0d88f; -[SCACognacActionChatSent toProtoWithAllowedFields:] */

void FUN_10ba0d838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0d890; end: 10ba0d897; -[SCACognacActionChatSent getPayloadIdentifier] */

undefined8 FUN_10ba0d890(void)

{
  return 0x204;
}



/* Entry: 10ba0d898; end: 10ba0d8a3; -[SCACognacActionCloseAttempt getEventName] */

undefined ** FUN_10ba0d898(void)

{
  return &PTR____CFConstantStringClassReference_110fbf6b8;
}



/* Entry: 10ba0d8a4; end: 10ba0d8ab; -[SCACognacActionCloseAttempt getEventQoS] */

undefined8 FUN_10ba0d8a4(void)

{
  return 1;
}



/* Entry: 10ba0d8ac; end: 10ba0d92b; -[SCACognacActionCloseAttempt setStatus:] */

void FUN_10ba0d8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba0c41c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf4d8,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0d92c; end: 10ba0d94f; -[SCACognacActionCloseAttempt getFieldNumberToFieldDict] */

void FUN_10ba0d92c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0d950; end: 10ba0d987; -[SCACognacActionCloseAttempt addToProtoDictionary] */

void FUN_10ba0d950(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0d988; end: 10ba0d9df; -[SCACognacActionCloseAttempt toProtoWithAllowedFields:] */

void FUN_10ba0d988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0d9e0; end: 10ba0d9e7; -[SCACognacActionCloseAttempt getPayloadIdentifier] */

undefined8 FUN_10ba0d9e0(void)

{
  return 0x205;
}



/* Entry: 10ba0d9e8; end: 10ba0d9f3; -[SCACognacActionCloseSuccess getEventName] */

undefined ** FUN_10ba0d9e8(void)

{
  return &PTR____CFConstantStringClassReference_110fbf6d8;
}



/* Entry: 10ba0d9f4; end: 10ba0d9fb; -[SCACognacActionCloseSuccess getEventQoS] */

undefined8 FUN_10ba0d9f4(void)

{
  return 1;
}



/* Entry: 10ba0d9fc; end: 10ba0da4f; -[SCACognacActionCloseSuccess setCognacTimeSec:] */

void FUN_10ba0d9fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbf6f8,5,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0da50; end: 10ba0daa3; -[SCACognacActionCloseSuccess setCurrentParticipantCount:] */

void FUN_10ba0da50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbf718,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0daa4; end: 10ba0db23; -[SCACognacActionCloseSuccess setLoadingProgress:] */

void FUN_10ba0daa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba0c5e8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fbf738,8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0db24; end: 10ba0db77; -[SCACognacActionCloseSuccess setMaxParticipantCount:] */

void FUN_10ba0db24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbf758,9,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0db78; end: 10ba0dbf7; -[SCACognacActionCloseSuccess setSource:] */

void FUN_10ba0db78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba0c3fc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,10,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0dbf8; end: 10ba0dc77; -[SCACognacActionCloseSuccess setStatus:] */

void FUN_10ba0dbf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba0c41c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf4d8,0xb,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0dc78; end: 10ba0dccb; -[SCACognacActionCloseSuccess setContextSwitchCount:] */

void FUN_10ba0dc78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbf778,0xc,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0dccc; end: 10ba0dd1f; -[SCACognacActionCloseSuccess setQualityCognacTimeSec:] */

void FUN_10ba0dccc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbf798,0xd,puVar1,2)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0dd20; end: 10ba0dd43; -[SCACognacActionCloseSuccess getFieldNumberToFieldDict] */

void FUN_10ba0dd20(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0dd44; end: 10ba0dd7b; -[SCACognacActionCloseSuccess addToProtoDictionary] */

void FUN_10ba0dd44(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0dd7c; end: 10ba0ddd3; -[SCACognacActionCloseSuccess toProtoWithAllowedFields:] */

void FUN_10ba0dd7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0ddd4; end: 10ba0dddb; -[SCACognacActionCloseSuccess getPayloadIdentifier] */

undefined8 FUN_10ba0ddd4(void)

{
  return 0x207;
}



/* Entry: 10ba0dddc; end: 10ba0dde7; -[SCACognacActionInviteSent getEventName] */

undefined ** FUN_10ba0dddc(void)

{
  return &PTR____CFConstantStringClassReference_110fbf7b8;
}



/* Entry: 10ba0dde8; end: 10ba0ddef; -[SCACognacActionInviteSent getEventQoS] */

undefined8 FUN_10ba0dde8(void)

{
  return 1;
}



/* Entry: 10ba0ddf0; end: 10ba0de43; -[SCACognacActionInviteSent setInviteeCount:] */

void FUN_10ba0ddf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbf7d8,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0de44; end: 10ba0dec3; -[SCACognacActionInviteSent setSection:] */

void FUN_10ba0de44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba0c3b8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e4c458,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0dec4; end: 10ba0dee7; -[SCACognacActionInviteSent getFieldNumberToFieldDict] */

void FUN_10ba0dec4(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0dee8; end: 10ba0df1f; -[SCACognacActionInviteSent addToProtoDictionary] */

void FUN_10ba0dee8(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0df20; end: 10ba0df77; -[SCACognacActionInviteSent toProtoWithAllowedFields:] */

void FUN_10ba0df20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0df78; end: 10ba0df7f; -[SCACognacActionInviteSent getPayloadIdentifier] */

undefined8 FUN_10ba0df78(void)

{
  return 0x209;
}



/* Entry: 10ba0df80; end: 10ba0df8b; -[SCACognacActionStartSolo getEventName] */

undefined ** FUN_10ba0df80(void)

{
  return &PTR____CFConstantStringClassReference_110fbf7f8;
}



/* Entry: 10ba0df8c; end: 10ba0df93; -[SCACognacActionStartSolo getEventQoS] */

undefined8 FUN_10ba0df8c(void)

{
  return 1;
}



/* Entry: 10ba0df94; end: 10ba0dfdb; -[SCACognacActionStartSolo setCognacMetadata:] */

void FUN_10ba0df94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbf398,3,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba0dfdc; end: 10ba0e09b; -[SCACognacActionStartSolo prepareDictionary:] */

void FUN_10ba0dfdc(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_38 = PTR_PTR_11270c3c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10ba0e09c; end: 10ba0e0bf; -[SCACognacActionStartSolo getFieldNumberToFieldDict] */

void FUN_10ba0e09c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0e0c0; end: 10ba0e0f7; -[SCACognacActionStartSolo addToProtoDictionary] */

void FUN_10ba0e0c0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0e0f8; end: 10ba0e14f; -[SCACognacActionStartSolo toProtoWithAllowedFields:] */

void FUN_10ba0e0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0e150; end: 10ba0e157; -[SCACognacActionStartSolo getPayloadIdentifier] */

undefined8 FUN_10ba0e150(void)

{
  return 0x20a;
}



/* Entry: 10ba0e158; end: 10ba0e163; -[SCACognacActionStartWithFriendsPrompt getEventName] */

undefined ** FUN_10ba0e158(void)

{
  return &PTR____CFConstantStringClassReference_110fbf818;
}



/* Entry: 10ba0e164; end: 10ba0e16b; -[SCACognacActionStartWithFriendsPrompt getEventQoS] */

undefined8 FUN_10ba0e164(void)

{
  return 1;
}



/* Entry: 10ba0e16c; end: 10ba0e1b3; -[SCACognacActionStartWithFriendsPrompt setCognacMetadata:] */

void FUN_10ba0e16c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbf398,3,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


