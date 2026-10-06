/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b9eebe8; end: 10b9eebff; -[SCAScreenshotSnapSend setFilterLensId:] */

void FUN_10b9eebe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110eb5d58,0x2c,param_3,0);
  return;
}



/* Entry: 10b9eec00; end: 10b9eec17; -[SCAScreenshotSnapSend setLensOptionId:] */

void FUN_10b9eec00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f55758,0x42,param_3,0);
  return;
}



/* Entry: 10b9eec18; end: 10b9eec2f; -[SCAScreenshotSnapSend setPage:] */

void FUN_10b9eec18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daedd8,0x51,param_3,0);
  return;
}



/* Entry: 10b9eec30; end: 10b9eec47; -[SCAScreenshotSnapSend setSnapSessionId:] */

void FUN_10b9eec30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e445d8,0x5e,param_3,0);
  return;
}



/* Entry: 10b9eec48; end: 10b9eec5f; -[SCAScreenshotSnapSend setStorySessionId:] */

void FUN_10b9eec48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110eb5878,0x88,param_3,0);
  return;
}



/* Entry: 10b9eec60; end: 10b9eec83; -[SCAScreenshotSnapSend getFieldNumberToFieldDict] */

void FUN_10b9eec60(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9eec84; end: 10b9eecbb; -[SCAScreenshotSnapSend addToProtoDictionary] */

void FUN_10b9eec84(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9eecbc; end: 10b9eed13; -[SCAScreenshotSnapSend toProtoWithAllowedFields:] */

void FUN_10b9eecbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,0x1c,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b9eed14; end: 10b9eed1b; -[SCAScreenshotSnapSend getPayloadIdentifier] */

undefined8 FUN_10b9eed14(void)

{
  return 0x77d;
}



/* Entry: 10b9eed1c; end: 10b9eed27; -[SCAUserSearch getEventName] */

undefined ** FUN_10b9eed1c(void)

{
  return &PTR____CFConstantStringClassReference_110e6d218;
}



/* Entry: 10b9eed28; end: 10b9eed2f; -[SCAUserSearch getEventQoS] */

undefined8 FUN_10b9eed28(void)

{
  return 1;
}



/* Entry: 10b9eed30; end: 10b9eed3b; -[SCAUserSearch getPerUserSamplingRateV2] */

undefined8 FUN_10b9eed30(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10b9eed3c; end: 10b9eedbb; -[SCAUserSearch setExitEvent:] */

void FUN_10b9eed3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31194(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110ea1f58,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9eedbc; end: 10b9eee3b; -[SCAUserSearch setSource:] */

void FUN_10b9eedbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9eee3c; end: 10b9eee53; -[SCAUserSearch setUserSearchId:] */

void FUN_10b9eee3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb3ef8,4,param_3,0);
  return;
}



/* Entry: 10b9eee54; end: 10b9eee6b; -[SCAUserSearch setUserSearchQuery:] */

void FUN_10b9eee54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb3f18,5,param_3,0);
  return;
}



/* Entry: 10b9eee6c; end: 10b9eeebf; -[SCAUserSearch setViewTimeSec:] */

void FUN_10b9eee6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fadb38,6,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9eeec0; end: 10b9eeec3; -[SCAUserSearch getFieldNumberToFieldDict] */

void FUN_10b9eeec0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9eeec4; end: 10b9eeecf; -[SCAUserSearch toProtoWithAllowedFields:] */

void FUN_10b9eeec4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9eeed0; end: 10b9eeed7; -[SCAUserSearch getPayloadIdentifier] */

undefined8 FUN_10b9eeed0(void)

{
  return 0x9b3;
}



/* Entry: 10b9eeed8; end: 10b9eeee3; -[SCAUserSearchResult getEventName] */

undefined ** FUN_10b9eeed8(void)

{
  return &PTR____CFConstantStringClassReference_110e6d1f8;
}



/* Entry: 10b9eeee4; end: 10b9eeeeb; -[SCAUserSearchResult getEventQoS] */

undefined8 FUN_10b9eeee4(void)

{
  return 1;
}



/* Entry: 10b9eeeec; end: 10b9eef3f; -[SCAUserSearchResult setUserProfilePublicStory:] */

void FUN_10b9eeeec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb3f38,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9eef40; end: 10b9eefbf; -[SCAUserSearchResult setUserSearchResultAction:] */

void FUN_10b9eef40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9ea310(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb3f58,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9eefc0; end: 10b9eefd7; -[SCAUserSearchResult setUserSearchResultSource:] */

void FUN_10b9eefc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb3f78,8,param_3,0);
  return;
}



/* Entry: 10b9eefd8; end: 10b9eefef; -[SCAUserSearchResult setUserSearchResultUsername:] */

void FUN_10b9eefd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb3f98,9,param_3,0);
  return;
}



/* Entry: 10b9eeff0; end: 10b9ef013; -[SCAUserSearchResult getFieldNumberToFieldDict] */

void FUN_10b9eeff0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9ef014; end: 10b9ef04b; -[SCAUserSearchResult addToProtoDictionary] */

void FUN_10b9ef014(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9ef04c; end: 10b9ef0a3; -[SCAUserSearchResult toProtoWithAllowedFields:] */

void FUN_10b9ef04c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9ef0a4; end: 10b9ef0ab; -[SCAUserSearchResult getPayloadIdentifier] */

undefined8 FUN_10b9ef0a4(void)

{
  return 0x9b4;
}



/* Entry: 10b9ef0ac; end: 10b9ef0b7; -[SCADeadCodeDetectionEvent getEventName] */

undefined ** FUN_10b9ef0ac(void)

{
  return &PTR____CFConstantStringClassReference_110fb3fb8;
}



/* Entry: 10b9ef0b8; end: 10b9ef0bf; -[SCADeadCodeDetectionEvent getEventQoS] */

undefined8 FUN_10b9ef0b8(void)

{
  return 2;
}



/* Entry: 10b9ef0c0; end: 10b9ef0cb; -[SCADeadCodeDetectionEvent getPerUserSamplingRate] */

undefined8 FUN_10b9ef0c0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10b9ef0cc; end: 10b9ef0d7; -[SCADeadCodeDetectionEvent getPerUserSamplingRateV2] */

undefined8 FUN_10b9ef0cc(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10b9ef0d8; end: 10b9ef0ef; -[SCADeadCodeDetectionEvent setAppId:] */

void FUN_10b9ef0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fae058,2,param_3,0);
  return;
}



/* Entry: 10b9ef0f0; end: 10b9ef137; -[SCADeadCodeDetectionEvent setObjcClassNames:] */

void FUN_10b9ef0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb3fd8,3,param_3,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b9ef138; end: 10b9ef13b; -[SCADeadCodeDetectionEvent getFieldNumberToFieldDict] */

void FUN_10b9ef138(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9ef13c; end: 10b9ef147; -[SCADeadCodeDetectionEvent toProtoWithAllowedFields:] */

void FUN_10b9ef13c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9ef148; end: 10b9ef233; -[SCADeadCodeDetectionEvent getPayloadIdentifier] */

undefined8 FUN_10b9ef148(void)

{
  return 0x11f1;
}



/* Entry: 10b9ef234; end: 10b9ef23f; -[SCAAuthActionEventBase getEventName] */

undefined ** FUN_10b9ef234(void)

{
  return &PTR____CFConstantStringClassReference_110fb4498;
}



/* Entry: 10b9ef240; end: 10b9ef247; -[SCAAuthActionEventBase getEventQoS] */

undefined8 FUN_10b9ef240(void)

{
  return 1;
}



/* Entry: 10b9ef248; end: 10b9ef253; -[SCAAuthActionEventBase getPerUserSamplingRateV2] */

undefined8 FUN_10b9ef248(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10b9ef254; end: 10b9ef2d3; -[SCAAuthActionEventBase setActionType:] */

void FUN_10b9ef254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bae7500(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2618,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9ef2d4; end: 10b9ef353; -[SCAAuthActionEventBase setCurrentPage:] */

void FUN_10b9ef2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9ef170(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb44b8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9ef354; end: 10b9ef357; -[SCAAuthActionEventBase getFieldNumberToFieldDict] */

void FUN_10b9ef354(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9ef358; end: 10b9ef363; -[SCAAuthActionEventBase toProtoWithAllowedFields:] */

void FUN_10b9ef358(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9ef364; end: 10b9ef36b; -[SCAAuthActionEventBase getPayloadIdentifier] */

undefined8 FUN_10b9ef364(void)

{
  return 0xda1;
}



/* Entry: 10b9ef36c; end: 10b9ef377; -[SCAAuthButtonActionEvent getEventName] */

undefined ** FUN_10b9ef36c(void)

{
  return &PTR____CFConstantStringClassReference_110fb44d8;
}



/* Entry: 10b9ef378; end: 10b9ef37f; -[SCAAuthButtonActionEvent getEventQoS] */

undefined8 FUN_10b9ef378(void)

{
  return 1;
}



/* Entry: 10b9ef380; end: 10b9ef387; -[SCAAuthButtonActionEvent getPerUserSamplingRateV2] */

undefined8 FUN_10b9ef380(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 10b9ef388; end: 10b9ef407; -[SCAAuthButtonActionEvent setButton:] */

void FUN_10b9ef388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9ef150(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb44f8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9ef408; end: 10b9ef42b; -[SCAAuthButtonActionEvent getFieldNumberToFieldDict] */

void FUN_10b9ef408(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9ef42c; end: 10b9ef463; -[SCAAuthButtonActionEvent addToProtoDictionary] */

void FUN_10b9ef42c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9ef464; end: 10b9ef4bb; -[SCAAuthButtonActionEvent toProtoWithAllowedFields:] */

void FUN_10b9ef464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9ef4bc; end: 10b9ef4c3; -[SCAAuthButtonActionEvent getPayloadIdentifier] */

undefined8 FUN_10b9ef4bc(void)

{
  return 0xe90;
}



/* Entry: 10b9ef4c4; end: 10b9ef4cf; -[SCAAuthPageImpression getEventName] */

undefined ** FUN_10b9ef4c4(void)

{
  return &PTR____CFConstantStringClassReference_110fb4518;
}



/* Entry: 10b9ef4d0; end: 10b9ef4d7; -[SCAAuthPageImpression getEventQoS] */

undefined8 FUN_10b9ef4d0(void)

{
  return 1;
}



/* Entry: 10b9ef4d8; end: 10b9ef4e3; -[SCAAuthPageImpression getPerUserSamplingRateV2] */

undefined8 FUN_10b9ef4d8(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10b9ef4e4; end: 10b9ef563; -[SCAAuthPageImpression setPage:] */

void FUN_10b9ef4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9ef170(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daedd8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9ef564; end: 10b9ef567; -[SCAAuthPageImpression getFieldNumberToFieldDict] */

void FUN_10b9ef564(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9ef568; end: 10b9ef573; -[SCAAuthPageImpression toProtoWithAllowedFields:] */

void FUN_10b9ef568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9ef574; end: 10b9ef57b; -[SCAAuthPageImpression getPayloadIdentifier] */

undefined8 FUN_10b9ef574(void)

{
  return 0xda5;
}



/* Entry: 10b9ef57c; end: 10b9ef587; -[SCAAutomationDetectionComplete getEventName] */

undefined ** FUN_10b9ef57c(void)

{
  return &PTR____CFConstantStringClassReference_110fb4538;
}



/* Entry: 10b9ef588; end: 10b9ef58f; -[SCAAutomationDetectionComplete getEventQoS] */

undefined8 FUN_10b9ef588(void)

{
  return 1;
}



/* Entry: 10b9ef590; end: 10b9ef60f; -[SCAAutomationDetectionComplete setChallengeMode:] */

void FUN_10b9ef590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9ef194(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb4558,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9ef610; end: 10b9ef68f; -[SCAAutomationDetectionComplete setContext:] */

void FUN_10b9ef610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9ef1b8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae878,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9ef690; end: 10b9ef6a7; -[SCAAutomationDetectionComplete setContextSessionId:] */

void FUN_10b9ef690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110eb5bf8,4,param_3,0);
  return;
}



/* Entry: 10b9ef6a8; end: 10b9ef6fb; -[SCAAutomationDetectionComplete setUiDurationMilliseconds:] */

void FUN_10b9ef6a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb4578,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9ef6fc; end: 10b9ef6ff; -[SCAAutomationDetectionComplete getFieldNumberToFieldDict] */

void FUN_10b9ef6fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9ef700; end: 10b9ef70b; -[SCAAutomationDetectionComplete toProtoWithAllowedFields:] */

void FUN_10b9ef700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9ef70c; end: 10b9ef713; -[SCAAutomationDetectionComplete getPayloadIdentifier] */

undefined8 FUN_10b9ef70c(void)

{
  return 0x10c3;
}



/* Entry: 10b9ef714; end: 10b9ef71f; -[SCAAutomationDetectionStatusChangeEvent getEventName] */

undefined ** FUN_10b9ef714(void)

{
  return &PTR____CFConstantStringClassReference_110fb4598;
}



/* Entry: 10b9ef720; end: 10b9ef727; -[SCAAutomationDetectionStatusChangeEvent getEventQoS] */

undefined8 FUN_10b9ef720(void)

{
  return 1;
}



/* Entry: 10b9ef728; end: 10b9ef7a7; -[SCAAutomationDetectionStatusChangeEvent setContext:] */

void FUN_10b9ef728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9ef1b8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae878,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9ef7a8; end: 10b9ef827; -[SCAAutomationDetectionStatusChangeEvent setStatus:] */

void FUN_10b9ef7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9ef1ec(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf4d8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9ef828; end: 10b9ef83f; -[SCAAutomationDetectionStatusChangeEvent setContextSessionId:] */

void FUN_10b9ef828(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110eb5bf8,4,param_3,0);
  return;
}



/* Entry: 10b9ef840; end: 10b9ef857; -[SCAAutomationDetectionStatusChangeEvent setAutomationDetectionSessionId:] */

void FUN_10b9ef840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb45b8,5,param_3,0);
  return;
}



/* Entry: 10b9ef858; end: 10b9ef8ab; -[SCAAutomationDetectionStatusChangeEvent setLatencyMs:] */

void FUN_10b9ef858(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2198,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9ef8ac; end: 10b9ef92b; -[SCAAutomationDetectionStatusChangeEvent setSessionTrigger:] */

void FUN_10b9ef8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9ef1cc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb45d8,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9ef92c; end: 10b9ef92f; -[SCAAutomationDetectionStatusChangeEvent getFieldNumberToFieldDict] */

void FUN_10b9ef92c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9ef930; end: 10b9ef93b; -[SCAAutomationDetectionStatusChangeEvent toProtoWithAllowedFields:] */

void FUN_10b9ef930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9ef93c; end: 10b9ef943; -[SCAAutomationDetectionStatusChangeEvent getPayloadIdentifier] */

undefined8 FUN_10b9ef93c(void)

{
  return 0x1084;
}



/* Entry: 10b9ef944; end: 10b9ef94f; -[SCASpamURLDisabledEvent getEventName] */

undefined ** FUN_10b9ef944(void)

{
  return &PTR____CFConstantStringClassReference_110fb45f8;
}



/* Entry: 10b9ef950; end: 10b9ef957; -[SCASpamURLDisabledEvent getEventQoS] */

undefined8 FUN_10b9ef950(void)

{
  return 1;
}



/* Entry: 10b9ef958; end: 10b9ef96f; -[SCASpamURLDisabledEvent setAnalyticsIdentifier:] */

void FUN_10b9ef958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb4618,2,param_3,0);
  return;
}



/* Entry: 10b9ef970; end: 10b9ef9ef; -[SCASpamURLDisabledEvent setRuleTriggered:] */

void FUN_10b9ef970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9ef20c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb4638,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9ef9f0; end: 10b9efa6f; -[SCASpamURLDisabledEvent setScreen:] */

void FUN_10b9ef9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9ef220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e13078,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9efa70; end: 10b9efa73; -[SCASpamURLDisabledEvent getFieldNumberToFieldDict] */

void FUN_10b9efa70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9efa74; end: 10b9efa7f; -[SCASpamURLDisabledEvent toProtoWithAllowedFields:] */

void FUN_10b9efa74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9efa80; end: 10b9efffb; -[SCASpamURLDisabledEvent getPayloadIdentifier] */

undefined8 FUN_10b9efa80(void)

{
  return 0xfcd;
}



/* Entry: 10b9efffc; end: 10b9f0007; -[SCAAccountRecoveryFlow getEventName] */

undefined ** FUN_10b9efffc(void)

{
  return &PTR____CFConstantStringClassReference_110e75618;
}



/* Entry: 10b9f0008; end: 10b9f000f; -[SCAAccountRecoveryFlow getEventQoS] */

undefined8 FUN_10b9f0008(void)

{
  return 1;
}



/* Entry: 10b9f0010; end: 10b9f008f; -[SCAAccountRecoveryFlow setAction:] */

void FUN_10b9f0010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efa88(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f0090; end: 10b9f010f; -[SCAAccountRecoveryFlow setContext:] */

void FUN_10b9f0090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efaa8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae878,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f0110; end: 10b9f018f; -[SCAAccountRecoveryFlow setCredential:] */

void FUN_10b9f0110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efc10(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e753f8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f0190; end: 10b9f01d7; -[SCAAccountRecoveryFlow setLoginMetadata:] */

void FUN_10b9f0190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3758,5,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b9f01d8; end: 10b9f0257; -[SCAAccountRecoveryFlow setPage:] */

void FUN_10b9f01d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daedd8,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f0258; end: 10b9f02d7; -[SCAAccountRecoveryFlow setStrategy:] */

void FUN_10b9f0258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efc50(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e753d8,8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f02d8; end: 10b9f02ef; -[SCAAccountRecoveryFlow setRequestId:] */

void FUN_10b9f02d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ec2278,9,param_3,0);
  return;
}



/* Entry: 10b9f02f0; end: 10b9f03af; -[SCAAccountRecoveryFlow prepareDictionary:] */

void FUN_10b9f02f0(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_38 = PTR_PTR_11270c340;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}


