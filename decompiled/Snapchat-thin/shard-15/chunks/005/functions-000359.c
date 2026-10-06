/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10baaf3d4; end: 10baaf3df; -[SCAMemoriesDoubleEncryptionResolutionSuccess getEventName] */

undefined ** FUN_10baaf3d4(void)

{
  return &PTR____CFConstantStringClassReference_110fe8c58;
}



/* Entry: 10baaf3e0; end: 10baaf3e7; -[SCAMemoriesDoubleEncryptionResolutionSuccess getEventQoS] */

undefined8 FUN_10baaf3e0(void)

{
  return 1;
}



/* Entry: 10baaf3e8; end: 10baaf3ff; -[SCAMemoriesDoubleEncryptionResolutionSuccess setOutputSnapId:] */

void FUN_10baaf3e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe8c78,2,param_3,0);
  return;
}



/* Entry: 10baaf400; end: 10baaf417; -[SCAMemoriesDoubleEncryptionResolutionSuccess setRepresentation:] */

void FUN_10baaf400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ef6e98,3,param_3,0);
  return;
}



/* Entry: 10baaf418; end: 10baaf42f; -[SCAMemoriesDoubleEncryptionResolutionSuccess setSnapId:] */

void FUN_10baaf418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e06db8,4,param_3,0);
  return;
}



/* Entry: 10baaf430; end: 10baaf433; -[SCAMemoriesDoubleEncryptionResolutionSuccess getFieldNumberToFieldDict] */

void FUN_10baaf430(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10baaf434; end: 10baaf43f; -[SCAMemoriesDoubleEncryptionResolutionSuccess toProtoWithAllowedFields:] */

void FUN_10baaf434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10baaf440; end: 10baaf447; -[SCAMemoriesDoubleEncryptionResolutionSuccess getPayloadIdentifier] */

undefined8 FUN_10baaf440(void)

{
  return 0x14a9;
}



/* Entry: 10baaf448; end: 10baaf453; -[SCAMemoriesPurgeLocalData getEventName] */

undefined ** FUN_10baaf448(void)

{
  return &PTR____CFConstantStringClassReference_110fe8c98;
}



/* Entry: 10baaf454; end: 10baaf45b; -[SCAMemoriesPurgeLocalData getEventQoS] */

undefined8 FUN_10baaf454(void)

{
  return 1;
}



/* Entry: 10baaf45c; end: 10baaf4e3; -[SCAMemoriesPurgeLocalData setClientTimestamp:] */

/* WARNING: Possible PIC construction at 0x00010baaf4ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010baaf4b0) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10baaf45c(undefined8 param_1,undefined8 param_2,long param_3)

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
             &PTR____CFConstantStringClassReference_110fe8cb8,2,puVar1,5);
  return;
}



/* Entry: 10baaf4e4; end: 10baaf56b; -[SCAMemoriesPurgeLocalData setForceResyncTimestamp:] */

/* WARNING: Possible PIC construction at 0x00010baaf534: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010baaf538) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10baaf4e4(undefined8 param_1,undefined8 param_2,long param_3)

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
             &PTR____CFConstantStringClassReference_110fe8cd8,3,puVar1,5);
  return;
}



/* Entry: 10baaf56c; end: 10baaf5bf; -[SCAMemoriesPurgeLocalData setIsDryRun:] */

void FUN_10baaf56c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe8cf8,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baaf5c0; end: 10baaf63f; -[SCAMemoriesPurgeLocalData setPurgeSource:] */

void FUN_10baaf5c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baa2908(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fe8d18,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baaf640; end: 10baaf643; -[SCAMemoriesPurgeLocalData getFieldNumberToFieldDict] */

void FUN_10baaf640(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10baaf644; end: 10baaf64f; -[SCAMemoriesPurgeLocalData toProtoWithAllowedFields:] */

void FUN_10baaf644(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10baaf650; end: 10baaf657; -[SCAMemoriesPurgeLocalData getPayloadIdentifier] */

undefined8 FUN_10baaf650(void)

{
  return 0x16b6;
}



/* Entry: 10baaf658; end: 10baaf663; -[SCAOpportunisticRetranscodingEvent getEventName] */

undefined ** FUN_10baaf658(void)

{
  return &PTR____CFConstantStringClassReference_110fe8d38;
}



/* Entry: 10baaf664; end: 10baaf66b; -[SCAOpportunisticRetranscodingEvent getEventQoS] */

undefined8 FUN_10baaf664(void)

{
  return 1;
}



/* Entry: 10baaf66c; end: 10baaf683; -[SCAOpportunisticRetranscodingEvent setAssetIdentifier:] */

void FUN_10baaf66c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe8d58,2,param_3,0);
  return;
}



/* Entry: 10baaf684; end: 10baaf69b; -[SCAOpportunisticRetranscodingEvent setFailureReason:] */

void FUN_10baaf684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbdcd8,3,param_3,0);
  return;
}



/* Entry: 10baaf69c; end: 10baaf71b; -[SCAOpportunisticRetranscodingEvent setSnapCategory:] */

void FUN_10baaf69c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baa2928(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fe8d78,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baaf71c; end: 10baaf76f; -[SCAOpportunisticRetranscodingEvent setSuccess:] */

void FUN_10baaf71c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,5,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baaf770; end: 10baaf7c3; -[SCAOpportunisticRetranscodingEvent setFileSizeReductionInBytes:] */

void FUN_10baaf770(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe8d98,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baaf7c4; end: 10baaf7db; -[SCAOpportunisticRetranscodingEvent setOutputSnapId:] */

void FUN_10baaf7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe8c78,7,param_3,0);
  return;
}



/* Entry: 10baaf7dc; end: 10baaf7df; -[SCAOpportunisticRetranscodingEvent getFieldNumberToFieldDict] */

void FUN_10baaf7dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10baaf7e0; end: 10baaf7eb; -[SCAOpportunisticRetranscodingEvent toProtoWithAllowedFields:] */

void FUN_10baaf7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10baaf7ec; end: 10baaf7f3; -[SCAOpportunisticRetranscodingEvent getPayloadIdentifier] */

undefined8 FUN_10baaf7ec(void)

{
  return 0x142e;
}



/* Entry: 10baaf7f4; end: 10baaf7ff; -[SCAOpportunisticRetranscodingScanningSessionEvent getEventName] */

undefined ** FUN_10baaf7f4(void)

{
  return &PTR____CFConstantStringClassReference_110fe8db8;
}



/* Entry: 10baaf800; end: 10baaf807; -[SCAOpportunisticRetranscodingScanningSessionEvent getEventQoS] */

undefined8 FUN_10baaf800(void)

{
  return 2;
}



/* Entry: 10baaf808; end: 10baaf813; -[SCAOpportunisticRetranscodingScanningSessionEvent getPerUserSamplingRate] */

undefined8 FUN_10baaf808(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10baaf814; end: 10baaf81f; -[SCAOpportunisticRetranscodingScanningSessionEvent getPerUserSamplingRateV2] */

undefined8 FUN_10baaf814(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10baaf820; end: 10baaf837; -[SCAOpportunisticRetranscodingScanningSessionEvent setFailureReason:] */

void FUN_10baaf820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbdcd8,2,param_3,0);
  return;
}



/* Entry: 10baaf838; end: 10baaf88b; -[SCAOpportunisticRetranscodingScanningSessionEvent setNumberOfRetranscodingJobsScheduled:] */

void FUN_10baaf838(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe8dd8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baaf88c; end: 10baaf8df; -[SCAOpportunisticRetranscodingScanningSessionEvent setNumberOfSnapsScanned:] */

void FUN_10baaf88c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe8df8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baaf8e0; end: 10baaf8f7; -[SCAOpportunisticRetranscodingScanningSessionEvent setScanningSessionId:] */

void FUN_10baaf8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe8e18,5,param_3,0);
  return;
}



/* Entry: 10baaf8f8; end: 10baaf94b; -[SCAOpportunisticRetranscodingScanningSessionEvent setSuccess:] */

void FUN_10baaf8f8(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10baaf94c; end: 10baaf94f; -[SCAOpportunisticRetranscodingScanningSessionEvent getFieldNumberToFieldDict] */

void FUN_10baaf94c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10baaf950; end: 10baaf95b; -[SCAOpportunisticRetranscodingScanningSessionEvent toProtoWithAllowedFields:] */

void FUN_10baaf950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10baaf95c; end: 10baaf963; -[SCAOpportunisticRetranscodingScanningSessionEvent getPayloadIdentifier] */

undefined8 FUN_10baaf95c(void)

{
  return 0x1430;
}



/* Entry: 10baaf964; end: 10baaf96f; -[SCAPreviewVisibleSaveLatency getEventName] */

undefined ** FUN_10baaf964(void)

{
  return &PTR____CFConstantStringClassReference_110fe8e38;
}



/* Entry: 10baaf970; end: 10baaf977; -[SCAPreviewVisibleSaveLatency getEventQoS] */

undefined8 FUN_10baaf970(void)

{
  return 2;
}



/* Entry: 10baaf978; end: 10baaf983; -[SCAPreviewVisibleSaveLatency getPerUserSamplingRate] */

undefined8 FUN_10baaf978(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10baaf984; end: 10baaf98f; -[SCAPreviewVisibleSaveLatency getPerUserSamplingRateV2] */

undefined8 FUN_10baaf984(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10baaf990; end: 10baaf9a7; -[SCAPreviewVisibleSaveLatency setAnalyticsVersion:] */

void FUN_10baaf990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb96d8,2,param_3,0);
  return;
}



/* Entry: 10baaf9a8; end: 10baaf9fb; -[SCAPreviewVisibleSaveLatency setContentDurationSec:] */

void FUN_10baaf9a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe8e58,3,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baaf9fc; end: 10baafa43; -[SCAPreviewVisibleSaveLatency setCreativeTools:] */

void FUN_10baaf9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbc158,4,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10baafa44; end: 10baafa97; -[SCAPreviewVisibleSaveLatency setIsBatchCapture:] */

void FUN_10baafa44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ea0618,5,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baafa98; end: 10baafb17; -[SCAPreviewVisibleSaveLatency setMediaType:] */

void FUN_10baafa98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc90ccc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110db9478,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baafb18; end: 10baafb97; -[SCAPreviewVisibleSaveLatency setSaveType:] */

void FUN_10baafb18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb0a2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fcc8d8,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baafb98; end: 10baafbaf; -[SCAPreviewVisibleSaveLatency setSplits:] */

void FUN_10baafb98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb9818,8,param_3,0);
  return;
}



/* Entry: 10baafbb0; end: 10baafc03; -[SCAPreviewVisibleSaveLatency setTotalLatencyMs:] */

void FUN_10baafbb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbd818,9,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baafc04; end: 10baafcc3; -[SCAPreviewVisibleSaveLatency prepareDictionary:] */

void FUN_10baafc04(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_38 = PTR_PTR_11270c908;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10baafcc4; end: 10baafcc7; -[SCAPreviewVisibleSaveLatency getFieldNumberToFieldDict] */

void FUN_10baafcc4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10baafcc8; end: 10baafcd3; -[SCAPreviewVisibleSaveLatency toProtoWithAllowedFields:] */

void FUN_10baafcc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10baafcd4; end: 10baafcdb; -[SCAPreviewVisibleSaveLatency getPayloadIdentifier] */

undefined8 FUN_10baafcd4(void)

{
  return 0x683;
}



/* Entry: 10baafcdc; end: 10baafce7; -[SCAQuickEditBarImpression getEventName] */

undefined ** FUN_10baafcdc(void)

{
  return &PTR____CFConstantStringClassReference_110fe8e78;
}



/* Entry: 10baafce8; end: 10baafcef; -[SCAQuickEditBarImpression getEventQoS] */

undefined8 FUN_10baafce8(void)

{
  return 1;
}



/* Entry: 10baafcf0; end: 10baafd07; -[SCAQuickEditBarImpression setMemSessionId:] */

void FUN_10baafcf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe8e98,2,param_3,0);
  return;
}



/* Entry: 10baafd08; end: 10baafd87; -[SCAQuickEditBarImpression setSource:] */

void FUN_10baafd08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baa294c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baafd88; end: 10baafd8b; -[SCAQuickEditBarImpression getFieldNumberToFieldDict] */

void FUN_10baafd88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10baafd8c; end: 10baafd97; -[SCAQuickEditBarImpression toProtoWithAllowedFields:] */

void FUN_10baafd8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10baafd98; end: 10baafd9f; -[SCAQuickEditBarImpression getPayloadIdentifier] */

undefined8 FUN_10baafd98(void)

{
  return 0x1185;
}



/* Entry: 10baafda0; end: 10baafdb7; -[SCAServerGeneratedProcessingInfo setLensId:] */

void FUN_10baafda0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110db19f8,2,param_3,0);
  return;
}



/* Entry: 10baafdb8; end: 10baafe37; -[SCAServerGeneratedProcessingInfo setServerGeneratedSnapType:] */

void FUN_10baafdb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baa2970(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fe8eb8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baafe38; end: 10baafe4f; -[SCAServerGeneratedProcessingInfo setTemplateId:] */

void FUN_10baafe38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe7798,4,param_3,0);
  return;
}



/* Entry: 10baafe50; end: 10baafe53; -[SCAServerGeneratedProcessingInfo getFieldNumberToFieldDict] */

void FUN_10baafe50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10baafe54; end: 10baafe5f; -[SCAServerGeneratedProcessingInfo toProtoWithAllowedFields:] */

void FUN_10baafe54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10baafe60; end: 10baafe67; -[SCAServerGeneratedProcessingInfo getPayloadIdentifier] */

undefined8 FUN_10baafe60(void)

{
  return 0x148d;
}



/* Entry: 10baafe68; end: 10baafe73; -[SCAStoryScrubBegan getEventName] */

undefined ** FUN_10baafe68(void)

{
  return &PTR____CFConstantStringClassReference_110fe8ed8;
}



/* Entry: 10baafe74; end: 10baafe7b; -[SCAStoryScrubBegan getEventQoS] */

undefined8 FUN_10baafe74(void)

{
  return 1;
}



/* Entry: 10baafe7c; end: 10baafecf; -[SCAStoryScrubBegan setScrubStartIndex:] */

void FUN_10baafe7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe8ef8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baafed0; end: 10baaff4f; -[SCAStoryScrubBegan setSurface:] */

void FUN_10baafed0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baa29a4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2e78,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baaff50; end: 10baaff53; -[SCAStoryScrubBegan getFieldNumberToFieldDict] */

void FUN_10baaff50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10baaff54; end: 10baaff5f; -[SCAStoryScrubBegan toProtoWithAllowedFields:] */

void FUN_10baaff54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10baaff60; end: 10baaff67; -[SCAStoryScrubBegan getPayloadIdentifier] */

undefined8 FUN_10baaff60(void)

{
  return 0x1871;
}



/* Entry: 10baaff68; end: 10baaff73; -[SCAStoryScrubEnded getEventName] */

undefined ** FUN_10baaff68(void)

{
  return &PTR____CFConstantStringClassReference_110fe8f18;
}



/* Entry: 10baaff74; end: 10baaff7b; -[SCAStoryScrubEnded getEventQoS] */

undefined8 FUN_10baaff74(void)

{
  return 1;
}



/* Entry: 10baaff7c; end: 10baaffcf; -[SCAStoryScrubEnded setScrubDurationMs:] */

void FUN_10baaff7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe8f38,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baaffd0; end: 10bab0023; -[SCAStoryScrubEnded setScrubIsVideoChapter:] */

void FUN_10baaffd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe8f58,3,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab0024; end: 10bab0077; -[SCAStoryScrubEnded setScrubSegmentCount:] */

void FUN_10bab0024(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe8f78,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab0078; end: 10bab00cb; -[SCAStoryScrubEnded setScrubSnapDelta:] */

void FUN_10bab0078(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe8f98,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab00cc; end: 10bab011f; -[SCAStoryScrubEnded setScrubStartIndex:] */

void FUN_10bab00cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe8ef8,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab0120; end: 10bab019f; -[SCAStoryScrubEnded setSurface:] */

void FUN_10bab0120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baa29a4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2e78,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab01a0; end: 10bab01f3; -[SCAStoryScrubEnded setTargetSnapIndex:] */

void FUN_10bab01a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe8fb8,8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab01f4; end: 10bab01f7; -[SCAStoryScrubEnded getFieldNumberToFieldDict] */

void FUN_10bab01f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab01f8; end: 10bab0203; -[SCAStoryScrubEnded toProtoWithAllowedFields:] */

void FUN_10bab01f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab0204; end: 10bab020b; -[SCAStoryScrubEnded getPayloadIdentifier] */

undefined8 FUN_10bab0204(void)

{
  return 0x1872;
}



/* Entry: 10bab020c; end: 10bab0217; -[SCAStoryStoryPost getEventName] */

undefined ** FUN_10bab020c(void)

{
  return &PTR____CFConstantStringClassReference_110fe8fd8;
}



/* Entry: 10bab0218; end: 10bab021f; -[SCAStoryStoryPost getEventQoS] */

undefined8 FUN_10bab0218(void)

{
  return 1;
}



/* Entry: 10bab0220; end: 10bab022b; -[SCAStoryStoryPost getPerUserSamplingRateV2] */

undefined8 FUN_10bab0220(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bab022c; end: 10bab0243; -[SCAStoryStoryPost setGalleryCollectionCategory:] */

void FUN_10bab022c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fcd158,2,param_3,0);
  return;
}



/* Entry: 10bab0244; end: 10bab025b; -[SCAStoryStoryPost setGalleryCollectionId:] */

void FUN_10bab0244(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe7398,3,param_3,0);
  return;
}



/* Entry: 10bab025c; end: 10bab02db; -[SCAStoryStoryPost setGalleryContextMenuSource:] */

void FUN_10bab025c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bafa2a4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb39d8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab02dc; end: 10bab032f; -[SCAStoryStoryPost setSnapCount:] */

void FUN_10bab02dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110eb5a78,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab0330; end: 10bab03af; -[SCAStoryStoryPost setSnapSource:] */

void FUN_10bab0330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c311ec(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110ea0638,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab03b0; end: 10bab0403; -[SCAStoryStoryPost setSnapTimeSec:] */

void FUN_10bab03b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e29758,7,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab0404; end: 10bab0483; -[SCAStoryStoryPost setStoryType:] */

void FUN_10bab0404(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb15538(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110ea1fd8,8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab0484; end: 10bab0503; -[SCAStoryStoryPost setStoryTypeSpecific:] */

void FUN_10bab0484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb1577c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110ea2198,9,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab0504; end: 10bab0557; -[SCAStoryStoryPost setWithSearch:] */

void FUN_10bab0504(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb30d8,10,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


