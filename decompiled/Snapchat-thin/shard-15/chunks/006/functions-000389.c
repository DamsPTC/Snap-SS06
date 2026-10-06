/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bad0020; end: 10bad0027; -[SCABIPAAcceptedForSpectacles getEventQoS] */

undefined8 FUN_10bad0020(void)

{
  return 1;
}



/* Entry: 10bad0028; end: 10bad0033; -[SCABIPAAcceptedForSpectacles getPerUserSamplingRateV2] */

undefined8 FUN_10bad0028(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bad0034; end: 10bad0087; -[SCABIPAAcceptedForSpectacles setAccepted:] */

void FUN_10bad0034(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dad3f8,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad0088; end: 10bad009f; -[SCABIPAAcceptedForSpectacles setHardwareVersion:] */

void FUN_10bad0088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e155b8,3,param_3,0);
  return;
}



/* Entry: 10bad00a0; end: 10bad00a3; -[SCABIPAAcceptedForSpectacles getFieldNumberToFieldDict] */

void FUN_10bad00a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad00a4; end: 10bad00af; -[SCABIPAAcceptedForSpectacles toProtoWithAllowedFields:] */

void FUN_10bad00a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bad00b0; end: 10bad00b7; -[SCABIPAAcceptedForSpectacles getPayloadIdentifier] */

undefined8 FUN_10bad00b0(void)

{
  return 0xe6b;
}



/* Entry: 10bad00b8; end: 10bad00c3; -[SCACheeriosDeviceSettingsPageEvent getEventName] */

undefined ** FUN_10bad00b8(void)

{
  return &PTR____CFConstantStringClassReference_110ff3018;
}



/* Entry: 10bad00c4; end: 10bad00cb; -[SCACheeriosDeviceSettingsPageEvent getEventQoS] */

undefined8 FUN_10bad00c4(void)

{
  return 1;
}



/* Entry: 10bad00cc; end: 10bad00ef; -[SCACheeriosDeviceSettingsPageEvent getFieldNumberToFieldDict] */

void FUN_10bad00cc(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad00f0; end: 10bad0127; -[SCACheeriosDeviceSettingsPageEvent addToProtoDictionary] */

void FUN_10bad00f0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad0128; end: 10bad017f; -[SCACheeriosDeviceSettingsPageEvent toProtoWithAllowedFields:] */

void FUN_10bad0128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad0180; end: 10bad0187; -[SCACheeriosDeviceSettingsPageEvent getPayloadIdentifier] */

undefined8 FUN_10bad0180(void)

{
  return 0xe48;
}



/* Entry: 10bad0188; end: 10bad0193; -[SCACheeriosFirmwareUpdateCheck getEventName] */

undefined ** FUN_10bad0188(void)

{
  return &PTR____CFConstantStringClassReference_110ff3118;
}



/* Entry: 10bad0194; end: 10bad019b; -[SCACheeriosFirmwareUpdateCheck getEventQoS] */

undefined8 FUN_10bad0194(void)

{
  return 1;
}



/* Entry: 10bad019c; end: 10bad01a7; -[SCACheeriosFirmwareUpdateCheck getPerUserSamplingRateV2] */

undefined8 FUN_10bad019c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bad01a8; end: 10bad01cb; -[SCACheeriosFirmwareUpdateCheck getFieldNumberToFieldDict] */

void FUN_10bad01a8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad01cc; end: 10bad0203; -[SCACheeriosFirmwareUpdateCheck addToProtoDictionary] */

void FUN_10bad01cc(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad0204; end: 10bad025b; -[SCACheeriosFirmwareUpdateCheck toProtoWithAllowedFields:] */

void FUN_10bad0204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad025c; end: 10bad0263; -[SCACheeriosFirmwareUpdateCheck getPayloadIdentifier] */

undefined8 FUN_10bad025c(void)

{
  return 0xed3;
}



/* Entry: 10bad0264; end: 10bad026f; -[SCACheeriosFirmwareUpdateDownloadStart getEventName] */

undefined ** FUN_10bad0264(void)

{
  return &PTR____CFConstantStringClassReference_110ff3138;
}



/* Entry: 10bad0270; end: 10bad0277; -[SCACheeriosFirmwareUpdateDownloadStart getEventQoS] */

undefined8 FUN_10bad0270(void)

{
  return 1;
}



/* Entry: 10bad0278; end: 10bad029b; -[SCACheeriosFirmwareUpdateDownloadStart getFieldNumberToFieldDict] */

void FUN_10bad0278(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad029c; end: 10bad02d3; -[SCACheeriosFirmwareUpdateDownloadStart addToProtoDictionary] */

void FUN_10bad029c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad02d4; end: 10bad032b; -[SCACheeriosFirmwareUpdateDownloadStart toProtoWithAllowedFields:] */

void FUN_10bad02d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad032c; end: 10bad0333; -[SCACheeriosFirmwareUpdateDownloadStart getPayloadIdentifier] */

undefined8 FUN_10bad032c(void)

{
  return 0xed4;
}



/* Entry: 10bad0334; end: 10bad033f; -[SCACheeriosFirmwareUpdateDownloaded getEventName] */

undefined ** FUN_10bad0334(void)

{
  return &PTR____CFConstantStringClassReference_110ff3198;
}



/* Entry: 10bad0340; end: 10bad0347; -[SCACheeriosFirmwareUpdateDownloaded getEventQoS] */

undefined8 FUN_10bad0340(void)

{
  return 1;
}



/* Entry: 10bad0348; end: 10bad036b; -[SCACheeriosFirmwareUpdateDownloaded getFieldNumberToFieldDict] */

void FUN_10bad0348(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad036c; end: 10bad03a3; -[SCACheeriosFirmwareUpdateDownloaded addToProtoDictionary] */

void FUN_10bad036c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad03a4; end: 10bad03fb; -[SCACheeriosFirmwareUpdateDownloaded toProtoWithAllowedFields:] */

void FUN_10bad03a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad03fc; end: 10bad0403; -[SCACheeriosFirmwareUpdateDownloaded getPayloadIdentifier] */

undefined8 FUN_10bad03fc(void)

{
  return 0xed5;
}



/* Entry: 10bad0404; end: 10bad040f; -[SCACheeriosFirmwareUpdateEnter getEventName] */

undefined ** FUN_10bad0404(void)

{
  return &PTR____CFConstantStringClassReference_110ff31b8;
}



/* Entry: 10bad0410; end: 10bad0417; -[SCACheeriosFirmwareUpdateEnter getEventQoS] */

undefined8 FUN_10bad0410(void)

{
  return 1;
}



/* Entry: 10bad0418; end: 10bad0423; -[SCACheeriosFirmwareUpdateEnter getPerUserSamplingRateV2] */

undefined8 FUN_10bad0418(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bad0424; end: 10bad0447; -[SCACheeriosFirmwareUpdateEnter getFieldNumberToFieldDict] */

void FUN_10bad0424(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad0448; end: 10bad047f; -[SCACheeriosFirmwareUpdateEnter addToProtoDictionary] */

void FUN_10bad0448(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad0480; end: 10bad04d7; -[SCACheeriosFirmwareUpdateEnter toProtoWithAllowedFields:] */

void FUN_10bad0480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad04d8; end: 10bad04df; -[SCACheeriosFirmwareUpdateEnter getPayloadIdentifier] */

undefined8 FUN_10bad04d8(void)

{
  return 0xed6;
}



/* Entry: 10bad04e0; end: 10bad04eb; -[SCACheeriosFirmwareUpdateFailure getEventName] */

undefined ** FUN_10bad04e0(void)

{
  return &PTR____CFConstantStringClassReference_110ff31d8;
}



/* Entry: 10bad04ec; end: 10bad04f3; -[SCACheeriosFirmwareUpdateFailure getEventQoS] */

undefined8 FUN_10bad04ec(void)

{
  return 1;
}



/* Entry: 10bad04f4; end: 10bad050b; -[SCACheeriosFirmwareUpdateFailure setFailureReason:] */

void FUN_10bad04f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbdcd8,4,param_3,0);
  return;
}



/* Entry: 10bad050c; end: 10bad052f; -[SCACheeriosFirmwareUpdateFailure getFieldNumberToFieldDict] */

void FUN_10bad050c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad0530; end: 10bad0567; -[SCACheeriosFirmwareUpdateFailure addToProtoDictionary] */

void FUN_10bad0530(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad0568; end: 10bad05bf; -[SCACheeriosFirmwareUpdateFailure toProtoWithAllowedFields:] */

void FUN_10bad0568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad05c0; end: 10bad05c7; -[SCACheeriosFirmwareUpdateFailure getPayloadIdentifier] */

undefined8 FUN_10bad05c0(void)

{
  return 0xed7;
}



/* Entry: 10bad05c8; end: 10bad0617; -[SCACheeriosFirmwareUpdateSessionEventBase setDurationSec:] */

void FUN_10bad05c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110f0d2d8,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad0618; end: 10bad062b; -[SCACheeriosFirmwareUpdateSessionEventBase setTargetFirmwareVersion:] */

void FUN_10bad0618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110ff3158,param_3,0);
  return;
}



/* Entry: 10bad062c; end: 10bad063f; -[SCACheeriosFirmwareUpdateSessionEventBase setUpdateSessionId:] */

void FUN_10bad062c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110ff3178,param_3,0);
  return;
}



/* Entry: 10bad0640; end: 10bad06bb; -[SCACheeriosFirmwareUpdateSessionEventBase setUpdateType:] */

void FUN_10bad0640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bacfc10(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_110fe5498,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad06bc; end: 10bad06c7; -[SCACheeriosFirmwareUpdateShow getEventName] */

undefined ** FUN_10bad06bc(void)

{
  return &PTR____CFConstantStringClassReference_110ff31f8;
}



/* Entry: 10bad06c8; end: 10bad06cf; -[SCACheeriosFirmwareUpdateShow getEventQoS] */

undefined8 FUN_10bad06c8(void)

{
  return 1;
}



/* Entry: 10bad06d0; end: 10bad06f3; -[SCACheeriosFirmwareUpdateShow getFieldNumberToFieldDict] */

void FUN_10bad06d0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad06f4; end: 10bad072b; -[SCACheeriosFirmwareUpdateShow addToProtoDictionary] */

void FUN_10bad06f4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad072c; end: 10bad0783; -[SCACheeriosFirmwareUpdateShow toProtoWithAllowedFields:] */

void FUN_10bad072c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad0784; end: 10bad078b; -[SCACheeriosFirmwareUpdateShow getPayloadIdentifier] */

undefined8 FUN_10bad0784(void)

{
  return 0xed8;
}



/* Entry: 10bad078c; end: 10bad0797; -[SCACheeriosFirmwareUpdateStart getEventName] */

undefined ** FUN_10bad078c(void)

{
  return &PTR____CFConstantStringClassReference_110ff3218;
}



/* Entry: 10bad0798; end: 10bad079f; -[SCACheeriosFirmwareUpdateStart getEventQoS] */

undefined8 FUN_10bad0798(void)

{
  return 1;
}



/* Entry: 10bad07a0; end: 10bad07c3; -[SCACheeriosFirmwareUpdateStart getFieldNumberToFieldDict] */

void FUN_10bad07a0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad07c4; end: 10bad07fb; -[SCACheeriosFirmwareUpdateStart addToProtoDictionary] */

void FUN_10bad07c4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad07fc; end: 10bad0853; -[SCACheeriosFirmwareUpdateStart toProtoWithAllowedFields:] */

void FUN_10bad07fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad0854; end: 10bad085b; -[SCACheeriosFirmwareUpdateStart getPayloadIdentifier] */

undefined8 FUN_10bad0854(void)

{
  return 0xed9;
}



/* Entry: 10bad085c; end: 10bad0867; -[SCACheeriosFirmwareUpdateSuccess getEventName] */

undefined ** FUN_10bad085c(void)

{
  return &PTR____CFConstantStringClassReference_110ff3238;
}



/* Entry: 10bad0868; end: 10bad086f; -[SCACheeriosFirmwareUpdateSuccess getEventQoS] */

undefined8 FUN_10bad0868(void)

{
  return 1;
}



/* Entry: 10bad0870; end: 10bad0893; -[SCACheeriosFirmwareUpdateSuccess getFieldNumberToFieldDict] */

void FUN_10bad0870(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad0894; end: 10bad08cb; -[SCACheeriosFirmwareUpdateSuccess addToProtoDictionary] */

void FUN_10bad0894(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad08cc; end: 10bad0923; -[SCACheeriosFirmwareUpdateSuccess toProtoWithAllowedFields:] */

void FUN_10bad08cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad0924; end: 10bad092b; -[SCACheeriosFirmwareUpdateSuccess getPayloadIdentifier] */

undefined8 FUN_10bad0924(void)

{
  return 0xeda;
}



/* Entry: 10bad092c; end: 10bad0937; -[SCACheeriosFirmwareUpdateTap getEventName] */

undefined ** FUN_10bad092c(void)

{
  return &PTR____CFConstantStringClassReference_110ff3258;
}



/* Entry: 10bad0938; end: 10bad093f; -[SCACheeriosFirmwareUpdateTap getEventQoS] */

undefined8 FUN_10bad0938(void)

{
  return 1;
}



/* Entry: 10bad0940; end: 10bad0963; -[SCACheeriosFirmwareUpdateTap getFieldNumberToFieldDict] */

void FUN_10bad0940(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad0964; end: 10bad099b; -[SCACheeriosFirmwareUpdateTap addToProtoDictionary] */

void FUN_10bad0964(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad099c; end: 10bad09f3; -[SCACheeriosFirmwareUpdateTap toProtoWithAllowedFields:] */

void FUN_10bad099c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad09f4; end: 10bad09fb; -[SCACheeriosFirmwareUpdateTap getPayloadIdentifier] */

undefined8 FUN_10bad09f4(void)

{
  return 0xedb;
}



/* Entry: 10bad09fc; end: 10bad0a07; -[SCACheeriosFirmwareUpdateTransferStart getEventName] */

undefined ** FUN_10bad09fc(void)

{
  return &PTR____CFConstantStringClassReference_110ff3278;
}



/* Entry: 10bad0a08; end: 10bad0a0f; -[SCACheeriosFirmwareUpdateTransferStart getEventQoS] */

undefined8 FUN_10bad0a08(void)

{
  return 1;
}



/* Entry: 10bad0a10; end: 10bad0a33; -[SCACheeriosFirmwareUpdateTransferStart getFieldNumberToFieldDict] */

void FUN_10bad0a10(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad0a34; end: 10bad0a6b; -[SCACheeriosFirmwareUpdateTransferStart addToProtoDictionary] */

void FUN_10bad0a34(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad0a6c; end: 10bad0ac3; -[SCACheeriosFirmwareUpdateTransferStart toProtoWithAllowedFields:] */

void FUN_10bad0a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad0ac4; end: 10bad0acb; -[SCACheeriosFirmwareUpdateTransferStart getPayloadIdentifier] */

undefined8 FUN_10bad0ac4(void)

{
  return 0xedc;
}



/* Entry: 10bad0acc; end: 10bad0ad7; -[SCACheeriosFirmwareUpdateTransferred getEventName] */

undefined ** FUN_10bad0acc(void)

{
  return &PTR____CFConstantStringClassReference_110ff3298;
}



/* Entry: 10bad0ad8; end: 10bad0adf; -[SCACheeriosFirmwareUpdateTransferred getEventQoS] */

undefined8 FUN_10bad0ad8(void)

{
  return 1;
}



/* Entry: 10bad0ae0; end: 10bad0b03; -[SCACheeriosFirmwareUpdateTransferred getFieldNumberToFieldDict] */

void FUN_10bad0ae0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad0b04; end: 10bad0b3b; -[SCACheeriosFirmwareUpdateTransferred addToProtoDictionary] */

void FUN_10bad0b04(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad0b3c; end: 10bad0b93; -[SCACheeriosFirmwareUpdateTransferred toProtoWithAllowedFields:] */

void FUN_10bad0b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad0b94; end: 10bad0b9b; -[SCACheeriosFirmwareUpdateTransferred getPayloadIdentifier] */

undefined8 FUN_10bad0b94(void)

{
  return 0xedd;
}



/* Entry: 10bad0b9c; end: 10bad0beb; -[SCACheeriosFlightImuCalibrationEventBase setCalibrationPhase:] */

void FUN_10bad0b9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110ff32b8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad0bec; end: 10bad0c3b; -[SCACheeriosFlightImuCalibrationEventBase setDurationSec:] */

void FUN_10bad0bec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110f0d2d8,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad0c3c; end: 10bad0c47; -[SCACheeriosFlightImuCalibrationExit getEventName] */

undefined ** FUN_10bad0c3c(void)

{
  return &PTR____CFConstantStringClassReference_110ff32d8;
}



/* Entry: 10bad0c48; end: 10bad0c4f; -[SCACheeriosFlightImuCalibrationExit getEventQoS] */

undefined8 FUN_10bad0c48(void)

{
  return 1;
}



/* Entry: 10bad0c50; end: 10bad0c5b; -[SCACheeriosFlightImuCalibrationExit getPerUserSamplingRateV2] */

undefined8 FUN_10bad0c50(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bad0c5c; end: 10bad0cdb; -[SCACheeriosFlightImuCalibrationExit setCalibrationExitSource:] */

void FUN_10bad0c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bacfc34(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110ff32f8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad0cdc; end: 10bad0cff; -[SCACheeriosFlightImuCalibrationExit getFieldNumberToFieldDict] */

void FUN_10bad0cdc(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad0d00; end: 10bad0d37; -[SCACheeriosFlightImuCalibrationExit addToProtoDictionary] */

void FUN_10bad0d00(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad0d38; end: 10bad0d8f; -[SCACheeriosFlightImuCalibrationExit toProtoWithAllowedFields:] */

void FUN_10bad0d38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad0d90; end: 10bad0d97; -[SCACheeriosFlightImuCalibrationExit getPayloadIdentifier] */

undefined8 FUN_10bad0d90(void)

{
  return 0xe93;
}



/* Entry: 10bad0d98; end: 10bad0da3; -[SCACheeriosFlightImuCalibrationStart getEventName] */

undefined ** FUN_10bad0d98(void)

{
  return &PTR____CFConstantStringClassReference_110ff3318;
}



/* Entry: 10bad0da4; end: 10bad0dab; -[SCACheeriosFlightImuCalibrationStart getEventQoS] */

undefined8 FUN_10bad0da4(void)

{
  return 1;
}



/* Entry: 10bad0dac; end: 10bad0db7; -[SCACheeriosFlightImuCalibrationStart getPerUserSamplingRateV2] */

undefined8 FUN_10bad0dac(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bad0db8; end: 10bad0ddb; -[SCACheeriosFlightImuCalibrationStart getFieldNumberToFieldDict] */

void FUN_10bad0db8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}


