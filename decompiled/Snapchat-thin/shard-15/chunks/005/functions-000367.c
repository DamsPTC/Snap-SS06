/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bab84bc; end: 10bab84c7; -[SCAScanSessionQueryBegin toProtoWithAllowedFields:] */

void FUN_10bab84bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab84c8; end: 10bab84cf; -[SCAScanSessionQueryBegin getPayloadIdentifier] */

undefined8 FUN_10bab84c8(void)

{
  return 0xb69;
}



/* Entry: 10bab84d0; end: 10bab84db; -[SCAScanSessionQueryEnd getEventName] */

undefined ** FUN_10bab84d0(void)

{
  return &PTR____CFConstantStringClassReference_110feb7b8;
}



/* Entry: 10bab84dc; end: 10bab84e3; -[SCAScanSessionQueryEnd getEventQoS] */

undefined8 FUN_10bab84dc(void)

{
  return 1;
}



/* Entry: 10bab84e4; end: 10bab84fb; -[SCAScanSessionQueryEnd setScanQueryId:] */

void FUN_10bab84e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed38,4,param_3,0);
  return;
}



/* Entry: 10bab84fc; end: 10bab8513; -[SCAScanSessionQueryEnd setScanSessionId:] */

void FUN_10bab84fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed18,5,param_3,0);
  return;
}



/* Entry: 10bab8514; end: 10bab8567; -[SCAScanSessionQueryEnd setStartTimestampMs:] */

void FUN_10bab8514(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fad978,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab8568; end: 10bab85bb; -[SCAScanSessionQueryEnd setTimestampMs:] */

void FUN_10bab8568(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2af8,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab85bc; end: 10bab863b; -[SCAScanSessionQueryEnd setReason:] */

void FUN_10bab85bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bab4df0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf558,8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab863c; end: 10bab8653; -[SCAScanSessionQueryEnd setErrorMessage:] */

void FUN_10bab863c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e0a338,9,param_3,0);
  return;
}



/* Entry: 10bab8654; end: 10bab86a7; -[SCAScanSessionQueryEnd setGRPCStatusCode:] */

void FUN_10bab8654(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110feb7d8,10,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab86a8; end: 10bab86ab; -[SCAScanSessionQueryEnd getFieldNumberToFieldDict] */

void FUN_10bab86a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab86ac; end: 10bab86b7; -[SCAScanSessionQueryEnd toProtoWithAllowedFields:] */

void FUN_10bab86ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10bab86b8; end: 10bab86bf; -[SCAScanSessionQueryEnd getPayloadIdentifier] */

undefined8 FUN_10bab86b8(void)

{
  return 0xb6c;
}



/* Entry: 10bab86c0; end: 10bab86cb; -[SCAScanSessionQueryImagecodeUsecaseDisplayed getEventName] */

undefined ** FUN_10bab86c0(void)

{
  return &PTR____CFConstantStringClassReference_110feb7f8;
}



/* Entry: 10bab86cc; end: 10bab86d3; -[SCAScanSessionQueryImagecodeUsecaseDisplayed getEventQoS] */

undefined8 FUN_10bab86cc(void)

{
  return 1;
}



/* Entry: 10bab86d4; end: 10bab86df; -[SCAScanSessionQueryImagecodeUsecaseDisplayed getPerUserSamplingRateV2] */

undefined8 FUN_10bab86d4(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bab86e0; end: 10bab86f7; -[SCAScanSessionQueryImagecodeUsecaseDisplayed setScanQueryId:] */

void FUN_10bab86e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed38,2,param_3,0);
  return;
}



/* Entry: 10bab86f8; end: 10bab870f; -[SCAScanSessionQueryImagecodeUsecaseDisplayed setScanSessionId:] */

void FUN_10bab86f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed18,3,param_3,0);
  return;
}



/* Entry: 10bab8710; end: 10bab878f; -[SCAScanSessionQueryImagecodeUsecaseDisplayed setSource:] */

void FUN_10bab8710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb0a320(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab8790; end: 10bab87e3; -[SCAScanSessionQueryImagecodeUsecaseDisplayed setTimestampMs:] */

void FUN_10bab8790(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2af8,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab87e4; end: 10bab8863; -[SCAScanSessionQueryImagecodeUsecaseDisplayed setUseCase:] */

void FUN_10bab87e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bab4c24(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e362d8,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab8864; end: 10bab8867; -[SCAScanSessionQueryImagecodeUsecaseDisplayed getFieldNumberToFieldDict] */

void FUN_10bab8864(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab8868; end: 10bab8873; -[SCAScanSessionQueryImagecodeUsecaseDisplayed toProtoWithAllowedFields:] */

void FUN_10bab8868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab8874; end: 10bab887b; -[SCAScanSessionQueryImagecodeUsecaseDisplayed getPayloadIdentifier] */

undefined8 FUN_10bab8874(void)

{
  return 0x110f;
}



/* Entry: 10bab887c; end: 10bab8887; -[SCAScanSessionQueryPillTapped getEventName] */

undefined ** FUN_10bab887c(void)

{
  return &PTR____CFConstantStringClassReference_110feb818;
}



/* Entry: 10bab8888; end: 10bab888f; -[SCAScanSessionQueryPillTapped getEventQoS] */

undefined8 FUN_10bab8888(void)

{
  return 1;
}



/* Entry: 10bab8890; end: 10bab889b; -[SCAScanSessionQueryPillTapped getPerUserSamplingRateV2] */

undefined8 FUN_10bab8890(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bab889c; end: 10bab88b3; -[SCAScanSessionQueryPillTapped setScanPillId:] */

void FUN_10bab889c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feb838,2,param_3,0);
  return;
}



/* Entry: 10bab88b4; end: 10bab8907; -[SCAScanSessionQueryPillTapped setScanPillIsLoading:] */

void FUN_10bab88b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110feb858,3,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab8908; end: 10bab891f; -[SCAScanSessionQueryPillTapped setScanQueryId:] */

void FUN_10bab8908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed38,4,param_3,0);
  return;
}



/* Entry: 10bab8920; end: 10bab8937; -[SCAScanSessionQueryPillTapped setScanSessionId:] */

void FUN_10bab8920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed18,5,param_3,0);
  return;
}



/* Entry: 10bab8938; end: 10bab898b; -[SCAScanSessionQueryPillTapped setTimestampMs:] */

void FUN_10bab8938(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2af8,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab898c; end: 10bab898f; -[SCAScanSessionQueryPillTapped getFieldNumberToFieldDict] */

void FUN_10bab898c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab8990; end: 10bab899b; -[SCAScanSessionQueryPillTapped toProtoWithAllowedFields:] */

void FUN_10bab8990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab899c; end: 10bab89a3; -[SCAScanSessionQueryPillTapped getPayloadIdentifier] */

undefined8 FUN_10bab899c(void)

{
  return 0x11fb;
}



/* Entry: 10bab89a4; end: 10bab89af; -[SCAScanSessionQueryQRCodeTextUseCase getEventName] */

undefined ** FUN_10bab89a4(void)

{
  return &PTR____CFConstantStringClassReference_110feb878;
}



/* Entry: 10bab89b0; end: 10bab89b7; -[SCAScanSessionQueryQRCodeTextUseCase getEventQoS] */

undefined8 FUN_10bab89b0(void)

{
  return 1;
}



/* Entry: 10bab89b8; end: 10bab89cf; -[SCAScanSessionQueryQRCodeTextUseCase setScanQueryId:] */

void FUN_10bab89b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed38,2,param_3,0);
  return;
}



/* Entry: 10bab89d0; end: 10bab89e7; -[SCAScanSessionQueryQRCodeTextUseCase setScanSessionId:] */

void FUN_10bab89d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed18,3,param_3,0);
  return;
}



/* Entry: 10bab89e8; end: 10bab89ff; -[SCAScanSessionQueryQRCodeTextUseCase setTextUseCasePrefix:] */

void FUN_10bab89e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feb898,4,param_3,0);
  return;
}



/* Entry: 10bab8a00; end: 10bab8a03; -[SCAScanSessionQueryQRCodeTextUseCase getFieldNumberToFieldDict] */

void FUN_10bab8a00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab8a04; end: 10bab8a0f; -[SCAScanSessionQueryQRCodeTextUseCase toProtoWithAllowedFields:] */

void FUN_10bab8a04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab8a10; end: 10bab8a17; -[SCAScanSessionQueryQRCodeTextUseCase getPayloadIdentifier] */

undefined8 FUN_10bab8a10(void)

{
  return 0x116d;
}



/* Entry: 10bab8a18; end: 10bab8a23; -[SCAScanSessionQueryQRCodeUsecaseDisplayed getEventName] */

undefined ** FUN_10bab8a18(void)

{
  return &PTR____CFConstantStringClassReference_110feb8b8;
}



/* Entry: 10bab8a24; end: 10bab8a2b; -[SCAScanSessionQueryQRCodeUsecaseDisplayed getEventQoS] */

undefined8 FUN_10bab8a24(void)

{
  return 1;
}



/* Entry: 10bab8a2c; end: 10bab8a43; -[SCAScanSessionQueryQRCodeUsecaseDisplayed setScanQueryId:] */

void FUN_10bab8a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed38,2,param_3,0);
  return;
}



/* Entry: 10bab8a44; end: 10bab8a5b; -[SCAScanSessionQueryQRCodeUsecaseDisplayed setScanSessionId:] */

void FUN_10bab8a44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed18,3,param_3,0);
  return;
}



/* Entry: 10bab8a5c; end: 10bab8adb; -[SCAScanSessionQueryQRCodeUsecaseDisplayed setSource:] */

void FUN_10bab8a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb0a320(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab8adc; end: 10bab8b2f; -[SCAScanSessionQueryQRCodeUsecaseDisplayed setTimestampMs:] */

void FUN_10bab8adc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2af8,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab8b30; end: 10bab8baf; -[SCAScanSessionQueryQRCodeUsecaseDisplayed setUseCase:] */

void FUN_10bab8b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bab4c58(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e362d8,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab8bb0; end: 10bab8bb3; -[SCAScanSessionQueryQRCodeUsecaseDisplayed getFieldNumberToFieldDict] */

void FUN_10bab8bb0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab8bb4; end: 10bab8bbf; -[SCAScanSessionQueryQRCodeUsecaseDisplayed toProtoWithAllowedFields:] */

void FUN_10bab8bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab8bc0; end: 10bab8bc7; -[SCAScanSessionQueryQRCodeUsecaseDisplayed getPayloadIdentifier] */

undefined8 FUN_10bab8bc0(void)

{
  return 0x10e8;
}



/* Entry: 10bab8bc8; end: 10bab8bd3; -[SCAScanSessionQueryResultAutoOpen getEventName] */

undefined ** FUN_10bab8bc8(void)

{
  return &PTR____CFConstantStringClassReference_110feb8d8;
}



/* Entry: 10bab8bd4; end: 10bab8bdb; -[SCAScanSessionQueryResultAutoOpen getEventQoS] */

undefined8 FUN_10bab8bd4(void)

{
  return 1;
}



/* Entry: 10bab8bdc; end: 10bab8bf3; -[SCAScanSessionQueryResultAutoOpen setScanQueryId:] */

void FUN_10bab8bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed38,3,param_3,0);
  return;
}



/* Entry: 10bab8bf4; end: 10bab8c73; -[SCAScanSessionQueryResultAutoOpen setScanResultType:] */

void FUN_10bab8bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bab4e30(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110feb5f8,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab8c74; end: 10bab8c8b; -[SCAScanSessionQueryResultAutoOpen setScanSessionId:] */

void FUN_10bab8c74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed18,6,param_3,0);
  return;
}



/* Entry: 10bab8c8c; end: 10bab8cdf; -[SCAScanSessionQueryResultAutoOpen setTimestampMs:] */

void FUN_10bab8c8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2af8,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab8ce0; end: 10bab8ce3; -[SCAScanSessionQueryResultAutoOpen getFieldNumberToFieldDict] */

void FUN_10bab8ce0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab8ce4; end: 10bab8cef; -[SCAScanSessionQueryResultAutoOpen toProtoWithAllowedFields:] */

void FUN_10bab8ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab8cf0; end: 10bab8cf7; -[SCAScanSessionQueryResultAutoOpen getPayloadIdentifier] */

undefined8 FUN_10bab8cf0(void)

{
  return 0x11cd;
}



/* Entry: 10bab8cf8; end: 10bab8d03; -[SCAScanSessionQueryResultLensesCardMetadata getEventName] */

undefined ** FUN_10bab8cf8(void)

{
  return &PTR____CFConstantStringClassReference_110feb8f8;
}



/* Entry: 10bab8d04; end: 10bab8d0b; -[SCAScanSessionQueryResultLensesCardMetadata getEventQoS] */

undefined8 FUN_10bab8d04(void)

{
  return 1;
}



/* Entry: 10bab8d0c; end: 10bab8d53; -[SCAScanSessionQueryResultLensesCardMetadata setLensesDisplayed:] */

void FUN_10bab8d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110feb918,2,param_3,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bab8d54; end: 10bab8d6b; -[SCAScanSessionQueryResultLensesCardMetadata setScanCategoryId:] */

void FUN_10bab8d54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feb778,3,param_3,0);
  return;
}



/* Entry: 10bab8d6c; end: 10bab8d83; -[SCAScanSessionQueryResultLensesCardMetadata setScanResultId:] */

void FUN_10bab8d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbbf78,4,param_3,0);
  return;
}



/* Entry: 10bab8d84; end: 10bab8d87; -[SCAScanSessionQueryResultLensesCardMetadata getFieldNumberToFieldDict] */

void FUN_10bab8d84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab8d88; end: 10bab8d93; -[SCAScanSessionQueryResultLensesCardMetadata toProtoWithAllowedFields:] */

void FUN_10bab8d88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab8d94; end: 10bab8d9b; -[SCAScanSessionQueryResultLensesCardMetadata getPayloadIdentifier] */

undefined8 FUN_10bab8d94(void)

{
  return 0xb92;
}



/* Entry: 10bab8d9c; end: 10bab8da7; -[SCAScanSessionQueryResultScanCardAction getEventName] */

undefined ** FUN_10bab8d9c(void)

{
  return &PTR____CFConstantStringClassReference_110feb938;
}



/* Entry: 10bab8da8; end: 10bab8daf; -[SCAScanSessionQueryResultScanCardAction getEventQoS] */

undefined8 FUN_10bab8da8(void)

{
  return 1;
}



/* Entry: 10bab8db0; end: 10bab8dc7; -[SCAScanSessionQueryResultScanCardAction setActionId:] */

void FUN_10bab8db0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fca5b8,2,param_3,0);
  return;
}



/* Entry: 10bab8dc8; end: 10bab8ddf; -[SCAScanSessionQueryResultScanCardAction setScanQueryId:] */

void FUN_10bab8dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed38,3,param_3,0);
  return;
}



/* Entry: 10bab8de0; end: 10bab8df7; -[SCAScanSessionQueryResultScanCardAction setScanResultId:] */

void FUN_10bab8de0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbbf78,4,param_3,0);
  return;
}



/* Entry: 10bab8df8; end: 10bab8e0f; -[SCAScanSessionQueryResultScanCardAction setScanSessionId:] */

void FUN_10bab8df8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed18,5,param_3,0);
  return;
}



/* Entry: 10bab8e10; end: 10bab8e63; -[SCAScanSessionQueryResultScanCardAction setTimestampMs:] */

void FUN_10bab8e10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2af8,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab8e64; end: 10bab8e7b; -[SCAScanSessionQueryResultScanCardAction setScanResultType:] */

void FUN_10bab8e64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feb5f8,7,param_3,0);
  return;
}



/* Entry: 10bab8e7c; end: 10bab8ecf; -[SCAScanSessionQueryResultScanCardAction setIndex:] */

void FUN_10bab8e7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110de1e58,9,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab8ed0; end: 10bab8f4f; -[SCAScanSessionQueryResultScanCardAction setSource:] */

void FUN_10bab8ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb0a320(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,10,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab8f50; end: 10bab8f67; -[SCAScanSessionQueryResultScanCardAction setScanPillId:] */

void FUN_10bab8f50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feb838,0xc,param_3,0);
  return;
}



/* Entry: 10bab8f68; end: 10bab8f6b; -[SCAScanSessionQueryResultScanCardAction getFieldNumberToFieldDict] */

void FUN_10bab8f68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab8f6c; end: 10bab8f77; -[SCAScanSessionQueryResultScanCardAction toProtoWithAllowedFields:] */

void FUN_10bab8f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10bab8f78; end: 10bab8f7f; -[SCAScanSessionQueryResultScanCardAction getPayloadIdentifier] */

undefined8 FUN_10bab8f78(void)

{
  return 0xb6e;
}



/* Entry: 10bab8f80; end: 10bab8f8b; -[SCAScanSessionQueryResultScanCardDisplayed getEventName] */

undefined ** FUN_10bab8f80(void)

{
  return &PTR____CFConstantStringClassReference_110feb958;
}



/* Entry: 10bab8f8c; end: 10bab8f93; -[SCAScanSessionQueryResultScanCardDisplayed getEventQoS] */

undefined8 FUN_10bab8f8c(void)

{
  return 1;
}



/* Entry: 10bab8f94; end: 10bab8fab; -[SCAScanSessionQueryResultScanCardDisplayed setScanQueryId:] */

void FUN_10bab8f94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed38,2,param_3,0);
  return;
}



/* Entry: 10bab8fac; end: 10bab8fc3; -[SCAScanSessionQueryResultScanCardDisplayed setScanResultId:] */

void FUN_10bab8fac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbbf78,3,param_3,0);
  return;
}



/* Entry: 10bab8fc4; end: 10bab8fdb; -[SCAScanSessionQueryResultScanCardDisplayed setScanSessionId:] */

void FUN_10bab8fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed18,4,param_3,0);
  return;
}



/* Entry: 10bab8fdc; end: 10bab902f; -[SCAScanSessionQueryResultScanCardDisplayed setTimestampMs:] */

void FUN_10bab8fdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2af8,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab9030; end: 10bab9047; -[SCAScanSessionQueryResultScanCardDisplayed setScanResultType:] */

void FUN_10bab9030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feb5f8,6,param_3,0);
  return;
}



/* Entry: 10bab9048; end: 10bab909b; -[SCAScanSessionQueryResultScanCardDisplayed setHasShareCTA:] */

void FUN_10bab9048(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110feb978,7,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab909c; end: 10bab911b; -[SCAScanSessionQueryResultScanCardDisplayed setSource:] */

void FUN_10bab909c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb0a320(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,10,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab911c; end: 10bab911f; -[SCAScanSessionQueryResultScanCardDisplayed getFieldNumberToFieldDict] */

void FUN_10bab911c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab9120; end: 10bab912b; -[SCAScanSessionQueryResultScanCardDisplayed toProtoWithAllowedFields:] */

void FUN_10bab9120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10bab912c; end: 10bab9133; -[SCAScanSessionQueryResultScanCardDisplayed getPayloadIdentifier] */

undefined8 FUN_10bab912c(void)

{
  return 0xb6f;
}



/* Entry: 10bab9134; end: 10bab913f; -[SCAScanSessionQueryResultTrayAction getEventName] */

undefined ** FUN_10bab9134(void)

{
  return &PTR____CFConstantStringClassReference_110feb998;
}



/* Entry: 10bab9140; end: 10bab9147; -[SCAScanSessionQueryResultTrayAction getEventQoS] */

undefined8 FUN_10bab9140(void)

{
  return 1;
}



/* Entry: 10bab9148; end: 10bab91c7; -[SCAScanSessionQueryResultTrayAction setAction:] */

void FUN_10bab9148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bab4e10(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


