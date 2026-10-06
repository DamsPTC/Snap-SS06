/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba056cc; end: 10ba056d3; -[SCACameraVideoRecordStickyFrames getPayloadIdentifier] */

undefined8 FUN_10ba056cc(void)

{
  return 0xf94;
}



/* Entry: 10ba056d4; end: 10ba056df; -[SCACameraVideoSnapNoAudioError getEventName] */

undefined ** FUN_10ba056d4(void)

{
  return &PTR____CFConstantStringClassReference_110fbcc98;
}



/* Entry: 10ba056e0; end: 10ba056e7; -[SCACameraVideoSnapNoAudioError getEventQoS] */

undefined8 FUN_10ba056e0(void)

{
  return 1;
}



/* Entry: 10ba056e8; end: 10ba056ff; -[SCACameraVideoSnapNoAudioError setAssetWriterErrorCode:] */

void FUN_10ba056e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbccb8,2,param_3,0);
  return;
}



/* Entry: 10ba05700; end: 10ba05717; -[SCACameraVideoSnapNoAudioError setAudioQueueErrorCode:] */

void FUN_10ba05700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbccd8,3,param_3,0);
  return;
}



/* Entry: 10ba05718; end: 10ba0572f; -[SCACameraVideoSnapNoAudioError setAudioSessionErrorCode:] */

void FUN_10ba05718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbccf8,4,param_3,0);
  return;
}



/* Entry: 10ba05730; end: 10ba05747; -[SCACameraVideoSnapNoAudioError setCaptureSessionId:] */

void FUN_10ba05730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea05f8,5,param_3,0);
  return;
}



/* Entry: 10ba05748; end: 10ba0575f; -[SCACameraVideoSnapNoAudioError setErrorMessage:] */

void FUN_10ba05748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e0a338,6,param_3,0);
  return;
}



/* Entry: 10ba05760; end: 10ba057df; -[SCACameraVideoSnapNoAudioError setFixedErrorType:] */

void FUN_10ba05760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9f908c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fbcd18,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba057e0; end: 10ba05833; -[SCACameraVideoSnapNoAudioError setIsFixed:] */

void FUN_10ba057e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbcd38,8,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba05834; end: 10ba0584b; -[SCACameraVideoSnapNoAudioError setMicInUse:] */

void FUN_10ba05834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbcd58,9,param_3,0);
  return;
}



/* Entry: 10ba0584c; end: 10ba058cb; -[SCACameraVideoSnapNoAudioError setUnfixableErrorType:] */

void FUN_10ba0584c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9f90ac(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fbcd78,10,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba058cc; end: 10ba0591f; -[SCACameraVideoSnapNoAudioError setMicInUseWarningShowed:] */

void FUN_10ba058cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbcd98,0xb,puVar1,1)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba05920; end: 10ba05923; -[SCACameraVideoSnapNoAudioError getFieldNumberToFieldDict] */

void FUN_10ba05920(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba05924; end: 10ba0592f; -[SCACameraVideoSnapNoAudioError toProtoWithAllowedFields:] */

void FUN_10ba05924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10ba05930; end: 10ba05937; -[SCACameraVideoSnapNoAudioError getPayloadIdentifier] */

undefined8 FUN_10ba05930(void)

{
  return 0x1b8;
}



/* Entry: 10ba05938; end: 10ba05943; -[SCACameraViewFinderFps getEventName] */

undefined ** FUN_10ba05938(void)

{
  return &PTR____CFConstantStringClassReference_110fbcdb8;
}



/* Entry: 10ba05944; end: 10ba0594b; -[SCACameraViewFinderFps getEventQoS] */

undefined8 FUN_10ba05944(void)

{
  return 2;
}



/* Entry: 10ba0594c; end: 10ba0599f; -[SCACameraViewFinderFps setSessionLength:] */

void FUN_10ba0594c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbcdd8,0xd,puVar1,2)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba059a0; end: 10ba05a1f; -[SCACameraViewFinderFps setLensActivation:] */

void FUN_10ba059a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b9f8b1c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fbcdf8,0x11,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba05a20; end: 10ba05a67; -[SCACameraViewFinderFps setLensIds:] */

void FUN_10ba05a20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110de5e58,0x12,param_3,
                      7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba05a68; end: 10ba05a8b; -[SCACameraViewFinderFps getFieldNumberToFieldDict] */

void FUN_10ba05a68(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba05a8c; end: 10ba05ac3; -[SCACameraViewFinderFps addToProtoDictionary] */

void FUN_10ba05a8c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba05ac4; end: 10ba05b1b; -[SCACameraViewFinderFps toProtoWithAllowedFields:] */

void FUN_10ba05ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba05b1c; end: 10ba05b23; -[SCACameraViewFinderFps getPayloadIdentifier] */

undefined8 FUN_10ba05b1c(void)

{
  return 0xcdd;
}



/* Entry: 10ba05b24; end: 10ba05b2f; -[SCACaptureIntentEvent getEventName] */

undefined ** FUN_10ba05b24(void)

{
  return &PTR____CFConstantStringClassReference_110fbce18;
}



/* Entry: 10ba05b30; end: 10ba05b37; -[SCACaptureIntentEvent getEventQoS] */

undefined8 FUN_10ba05b30(void)

{
  return 2;
}



/* Entry: 10ba05b38; end: 10ba05b43; -[SCACaptureIntentEvent getPerUserSamplingRate] */

undefined8 FUN_10ba05b38(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba05b44; end: 10ba05b4f; -[SCACaptureIntentEvent getPerUserSamplingRateV2] */

undefined8 FUN_10ba05b44(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba05b50; end: 10ba05b67; -[SCACaptureIntentEvent setCaptureSessionId:] */

void FUN_10ba05b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea05f8,2,param_3,0);
  return;
}



/* Entry: 10ba05b68; end: 10ba05be7; -[SCACaptureIntentEvent setMediaType:] */

void FUN_10ba05b68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc90ccc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110db9478,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba05be8; end: 10ba05bff; -[SCACaptureIntentEvent setModelName:] */

void FUN_10ba05be8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbce38,4,param_3,0);
  return;
}



/* Entry: 10ba05c00; end: 10ba05c7f; -[SCACaptureIntentEvent setPredictedMediaType:] */

void FUN_10ba05c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc90ccc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fbce58,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba05c80; end: 10ba05c97; -[SCACaptureIntentEvent setPreviousCaptureSessionId:] */

void FUN_10ba05c80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbce78,6,param_3,0);
  return;
}



/* Entry: 10ba05c98; end: 10ba05d17; -[SCACaptureIntentEvent setPreviousMediaType:] */

void FUN_10ba05c98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc90ccc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fbce98,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba05d18; end: 10ba05d2f; -[SCACaptureIntentEvent setVideoConfirmDelayTier:] */

void FUN_10ba05d18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbceb8,8,param_3,0);
  return;
}



/* Entry: 10ba05d30; end: 10ba05d33; -[SCACaptureIntentEvent getFieldNumberToFieldDict] */

void FUN_10ba05d30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba05d34; end: 10ba05d3f; -[SCACaptureIntentEvent toProtoWithAllowedFields:] */

void FUN_10ba05d34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba05d40; end: 10ba05d47; -[SCACaptureIntentEvent getPayloadIdentifier] */

undefined8 FUN_10ba05d40(void)

{
  return 0xe47;
}



/* Entry: 10ba05d48; end: 10ba05dc7; -[SCADecisionConfiguration setProvider:] */

void FUN_10ba05d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9f8a58(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa4018,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba05dc8; end: 10ba05ddf; -[SCADecisionConfiguration setTitle:] */

void FUN_10ba05dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dad0b8,3,param_3,0);
  return;
}



/* Entry: 10ba05de0; end: 10ba05df7; -[SCADecisionConfiguration setValue:] */

void FUN_10ba05de0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ddd998,4,param_3,0);
  return;
}



/* Entry: 10ba05df8; end: 10ba05dfb; -[SCADecisionConfiguration getFieldNumberToFieldDict] */

void FUN_10ba05df8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba05dfc; end: 10ba05e07; -[SCADecisionConfiguration toProtoWithAllowedFields:] */

void FUN_10ba05dfc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10ba05e08; end: 10ba05e0f; -[SCADecisionConfiguration getPayloadIdentifier] */

undefined8 FUN_10ba05e08(void)

{
  return 0xa0e;
}



/* Entry: 10ba05e10; end: 10ba05e1b; -[SCADeviceUILayout getEventName] */

undefined ** FUN_10ba05e10(void)

{
  return &PTR____CFConstantStringClassReference_110fbced8;
}



/* Entry: 10ba05e1c; end: 10ba05e23; -[SCADeviceUILayout getEventQoS] */

undefined8 FUN_10ba05e1c(void)

{
  return 0;
}



/* Entry: 10ba05e24; end: 10ba05e77; -[SCADeviceUILayout setScreenHeightPixels:] */

void FUN_10ba05e24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbcef8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba05e78; end: 10ba05ecb; -[SCADeviceUILayout setScreenWidthPixels:] */

void FUN_10ba05e78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbcf18,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba05ecc; end: 10ba05f1f; -[SCADeviceUILayout setStatusBarHeightPixels:] */

void FUN_10ba05ecc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbcf38,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba05f20; end: 10ba05f73; -[SCADeviceUILayout setSystemNavBarHeightPixels:] */

void FUN_10ba05f20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbcf58,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba05f74; end: 10ba05ff3; -[SCADeviceUILayout setViewFinderAlignment:] */

void FUN_10ba05f74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9f90cc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fbcf78,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba05ff4; end: 10ba06047; -[SCADeviceUILayout setAppNavigationBarHeightDps:] */

void FUN_10ba05ff4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbcf98,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba06048; end: 10ba0609b; -[SCADeviceUILayout setBlackSpaceHeightDps:] */

void FUN_10ba06048(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbcfb8,8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0609c; end: 10ba060ef; -[SCADeviceUILayout setSystemNavBarHeightDps:] */

void FUN_10ba0609c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbcfd8,9,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba060f0; end: 10ba060f3; -[SCADeviceUILayout getFieldNumberToFieldDict] */

void FUN_10ba060f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba060f4; end: 10ba060ff; -[SCADeviceUILayout toProtoWithAllowedFields:] */

void FUN_10ba060f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba06100; end: 10ba06107; -[SCADeviceUILayout getPayloadIdentifier] */

undefined8 FUN_10ba06100(void)

{
  return 0x1090;
}



/* Entry: 10ba06108; end: 10ba06113; -[SCADirectSnapCaptureLoss getEventName] */

undefined ** FUN_10ba06108(void)

{
  return &PTR____CFConstantStringClassReference_110fbcff8;
}



/* Entry: 10ba06114; end: 10ba0611b; -[SCADirectSnapCaptureLoss getEventQoS] */

undefined8 FUN_10ba06114(void)

{
  return 1;
}



/* Entry: 10ba0611c; end: 10ba06127; -[SCADirectSnapCaptureLoss getPerUserSamplingRateV2] */

undefined8 FUN_10ba0611c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba06128; end: 10ba061a7; -[SCADirectSnapCaptureLoss setActionType:] */

void FUN_10ba06128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf6144(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2618,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba061a8; end: 10ba06227; -[SCADirectSnapCaptureLoss setButtonName:] */

void FUN_10ba061a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf60a4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fbd018,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba06228; end: 10ba0623f; -[SCADirectSnapCaptureLoss setCaptureSessionId:] */

void FUN_10ba06228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea05f8,4,param_3,0);
  return;
}



/* Entry: 10ba06240; end: 10ba06257; -[SCADirectSnapCaptureLoss setErrorMessage:] */

void FUN_10ba06240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e0a338,5,param_3,0);
  return;
}



/* Entry: 10ba06258; end: 10ba062ab; -[SCADirectSnapCaptureLoss setIsBatchCapture:] */

void FUN_10ba06258(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ea0618,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba062ac; end: 10ba062ff; -[SCADirectSnapCaptureLoss setIsEarlyInitRecorder:] */

void FUN_10ba062ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbd038,7,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba06300; end: 10ba06353; -[SCADirectSnapCaptureLoss setIsFingerDownCapture:] */

void FUN_10ba06300(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110f4c018,8,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba06354; end: 10ba063d3; -[SCADirectSnapCaptureLoss setMediaRecorderType:] */

void FUN_10ba06354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9f8bbc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fbd058,9,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba063d4; end: 10ba06453; -[SCADirectSnapCaptureLoss setMediaType:] */

void FUN_10ba063d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc90ccc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110db9478,10,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba06454; end: 10ba0646b; -[SCADirectSnapCaptureLoss setPage:] */

void FUN_10ba06454(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daedd8,0xb,param_3,0);
  return;
}



/* Entry: 10ba0646c; end: 10ba06483; -[SCADirectSnapCaptureLoss setStackTrace:] */

void FUN_10ba0646c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbd078,0xc,param_3,0);
  return;
}



/* Entry: 10ba06484; end: 10ba06487; -[SCADirectSnapCaptureLoss getFieldNumberToFieldDict] */

void FUN_10ba06484(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba06488; end: 10ba06493; -[SCADirectSnapCaptureLoss toProtoWithAllowedFields:] */

void FUN_10ba06488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10ba06494; end: 10ba0649b; -[SCADirectSnapCaptureLoss getPayloadIdentifier] */

undefined8 FUN_10ba06494(void)

{
  return 0x2d0;
}



/* Entry: 10ba0649c; end: 10ba064a7; -[SCADualCamCarouselActivation getEventName] */

undefined ** FUN_10ba0649c(void)

{
  return &PTR____CFConstantStringClassReference_110fbd098;
}



/* Entry: 10ba064a8; end: 10ba064af; -[SCADualCamCarouselActivation getEventQoS] */

undefined8 FUN_10ba064a8(void)

{
  return 1;
}



/* Entry: 10ba064b0; end: 10ba064bb; -[SCADualCamCarouselActivation getPerUserSamplingRateV2] */

undefined8 FUN_10ba064b0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba064bc; end: 10ba064d3; -[SCADualCamCarouselActivation setLensId:] */

void FUN_10ba064bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110db19f8,2,param_3,0);
  return;
}



/* Entry: 10ba064d4; end: 10ba064d7; -[SCADualCamCarouselActivation getFieldNumberToFieldDict] */

void FUN_10ba064d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba064d8; end: 10ba064e3; -[SCADualCamCarouselActivation toProtoWithAllowedFields:] */

void FUN_10ba064d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba064e4; end: 10ba064eb; -[SCADualCamCarouselActivation getPayloadIdentifier] */

undefined8 FUN_10ba064e4(void)

{
  return 0x110b;
}



/* Entry: 10ba064ec; end: 10ba064f7; -[SCAImageProcessError getEventName] */

undefined ** FUN_10ba064ec(void)

{
  return &PTR____CFConstantStringClassReference_110f76c98;
}



/* Entry: 10ba064f8; end: 10ba064ff; -[SCAImageProcessError getEventQoS] */

undefined8 FUN_10ba064f8(void)

{
  return 2;
}



/* Entry: 10ba06500; end: 10ba0650b; -[SCAImageProcessError getPerUserSamplingRate] */

undefined8 FUN_10ba06500(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba0650c; end: 10ba06517; -[SCAImageProcessError getPerUserSamplingRateV2] */

undefined8 FUN_10ba0650c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba06518; end: 10ba0652f; -[SCAImageProcessError setAdditionalInfo:] */

void FUN_10ba06518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa48d8,2,param_3,0);
  return;
}



/* Entry: 10ba06530; end: 10ba065af; -[SCAImageProcessError setDeviceClass:] */

void FUN_10ba06530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baff43c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dedcf8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba065b0; end: 10ba065c7; -[SCAImageProcessError setProcessor:] */

void FUN_10ba065b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f1eed8,4,param_3,0);
  return;
}



/* Entry: 10ba065c8; end: 10ba065df; -[SCAImageProcessError setReason:] */

void FUN_10ba065c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daf558,5,param_3,0);
  return;
}



/* Entry: 10ba065e0; end: 10ba065f7; -[SCAImageProcessError setSource:] */

void FUN_10ba065e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dae8d8,6,param_3,0);
  return;
}



/* Entry: 10ba065f8; end: 10ba0660f; -[SCAImageProcessError setType:] */

void FUN_10ba065f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dad058,7,param_3,0);
  return;
}



/* Entry: 10ba06610; end: 10ba06613; -[SCAImageProcessError getFieldNumberToFieldDict] */

void FUN_10ba06610(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba06614; end: 10ba0661f; -[SCAImageProcessError toProtoWithAllowedFields:] */

void FUN_10ba06614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba06620; end: 10ba06627; -[SCAImageProcessError getPayloadIdentifier] */

undefined8 FUN_10ba06620(void)

{
  return 0x498;
}



/* Entry: 10ba06628; end: 10ba06633; -[SCAMediaPlayerEventBase getEventName] */

undefined ** FUN_10ba06628(void)

{
  return &PTR____CFConstantStringClassReference_110fbd0b8;
}



/* Entry: 10ba06634; end: 10ba0663b; -[SCAMediaPlayerEventBase getEventQoS] */

undefined8 FUN_10ba06634(void)

{
  return 1;
}



/* Entry: 10ba0663c; end: 10ba06647; -[SCAMediaPlayerEventBase getPerUserSamplingRateV2] */

undefined8 FUN_10ba0663c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba06648; end: 10ba0665f; -[SCAMediaPlayerEventBase setCaller:] */

void FUN_10ba06648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e38978,2,param_3,0);
  return;
}



/* Entry: 10ba06660; end: 10ba06677; -[SCAMediaPlayerEventBase setErrorCause:] */

void FUN_10ba06660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbd0d8,3,param_3,0);
  return;
}


