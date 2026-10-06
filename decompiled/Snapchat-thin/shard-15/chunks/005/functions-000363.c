/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bab52b8; end: 10bab52bb; -[SCACameraScanAction getFieldNumberToFieldDict] */

void FUN_10bab52b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab52bc; end: 10bab52c7; -[SCACameraScanAction toProtoWithAllowedFields:] */

void FUN_10bab52bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10bab52c8; end: 10bab52cf; -[SCACameraScanAction getPayloadIdentifier] */

undefined8 FUN_10bab52c8(void)

{
  return 0x1a9;
}



/* Entry: 10bab52d0; end: 10bab52db; -[SCACameraScanQuickAdd getEventName] */

undefined ** FUN_10bab52d0(void)

{
  return &PTR____CFConstantStringClassReference_110feae58;
}



/* Entry: 10bab52dc; end: 10bab52e3; -[SCACameraScanQuickAdd getEventQoS] */

undefined8 FUN_10bab52dc(void)

{
  return 1;
}



/* Entry: 10bab52e4; end: 10bab52ef; -[SCACameraScanQuickAdd getPerUserSamplingRateV2] */

undefined8 FUN_10bab52e4(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bab52f0; end: 10bab5343; -[SCACameraScanQuickAdd setQuickAddPosition:] */

void FUN_10bab52f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110feae78,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab5344; end: 10bab5397; -[SCACameraScanQuickAdd setQuickAddSize:] */

void FUN_10bab5344(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110feae98,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab5398; end: 10bab53af; -[SCACameraScanQuickAdd setScanData:] */

void FUN_10bab5398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fdd598,4,param_3,0);
  return;
}



/* Entry: 10bab53b0; end: 10bab53c7; -[SCACameraScanQuickAdd setUserQuickAdd:] */

void FUN_10bab53b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feaeb8,5,param_3,0);
  return;
}



/* Entry: 10bab53c8; end: 10bab53cb; -[SCACameraScanQuickAdd getFieldNumberToFieldDict] */

void FUN_10bab53c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab53cc; end: 10bab53d7; -[SCACameraScanQuickAdd toProtoWithAllowedFields:] */

void FUN_10bab53cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab53d8; end: 10bab53df; -[SCACameraScanQuickAdd getPayloadIdentifier] */

undefined8 FUN_10bab53d8(void)

{
  return 0x1aa;
}



/* Entry: 10bab53e0; end: 10bab53eb; -[SCALegacySnapcodeModalDisplayed getEventName] */

undefined ** FUN_10bab53e0(void)

{
  return &PTR____CFConstantStringClassReference_110feaed8;
}



/* Entry: 10bab53ec; end: 10bab53f3; -[SCALegacySnapcodeModalDisplayed getEventQoS] */

undefined8 FUN_10bab53ec(void)

{
  return 1;
}



/* Entry: 10bab53f4; end: 10bab5473; -[SCALegacySnapcodeModalDisplayed setSource:] */

void FUN_10bab53f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bab4c38(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab5474; end: 10bab54c7; -[SCALegacySnapcodeModalDisplayed setTimestampMs:] */

void FUN_10bab5474(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2af8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab54c8; end: 10bab5547; -[SCALegacySnapcodeModalDisplayed setUseCase:] */

void FUN_10bab54c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bab4f10(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e362d8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab5548; end: 10bab555f; -[SCALegacySnapcodeModalDisplayed setSnapcodeSessionId:] */

void FUN_10bab5548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fce418,5,param_3,0);
  return;
}



/* Entry: 10bab5560; end: 10bab5577; -[SCALegacySnapcodeModalDisplayed setDecodedId:] */

void FUN_10bab5560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feaef8,6,param_3,0);
  return;
}



/* Entry: 10bab5578; end: 10bab558f; -[SCALegacySnapcodeModalDisplayed setScannableId:] */

void FUN_10bab5578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc1378,7,param_3,0);
  return;
}



/* Entry: 10bab5590; end: 10bab55a7; -[SCALegacySnapcodeModalDisplayed setUseCaseId:] */

void FUN_10bab5590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feaf18,8,param_3,0);
  return;
}



/* Entry: 10bab55a8; end: 10bab55fb; -[SCALegacySnapcodeModalDisplayed setLatencyMs:] */

void FUN_10bab55a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2198,9,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab55fc; end: 10bab55ff; -[SCALegacySnapcodeModalDisplayed getFieldNumberToFieldDict] */

void FUN_10bab55fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab5600; end: 10bab560b; -[SCALegacySnapcodeModalDisplayed toProtoWithAllowedFields:] */

void FUN_10bab5600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab560c; end: 10bab5613; -[SCALegacySnapcodeModalDisplayed getPayloadIdentifier] */

undefined8 FUN_10bab560c(void)

{
  return 0xd42;
}



/* Entry: 10bab5614; end: 10bab561f; -[SCALegacySnapcodeModalMetadataFetched getEventName] */

undefined ** FUN_10bab5614(void)

{
  return &PTR____CFConstantStringClassReference_110feaf38;
}



/* Entry: 10bab5620; end: 10bab5627; -[SCALegacySnapcodeModalMetadataFetched getEventQoS] */

undefined8 FUN_10bab5620(void)

{
  return 1;
}



/* Entry: 10bab5628; end: 10bab56a7; -[SCALegacySnapcodeModalMetadataFetched setSource:] */

void FUN_10bab5628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bab4c38(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab56a8; end: 10bab56fb; -[SCALegacySnapcodeModalMetadataFetched setTimestampMs:] */

void FUN_10bab56a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2af8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab56fc; end: 10bab577b; -[SCALegacySnapcodeModalMetadataFetched setUseCase:] */

void FUN_10bab56fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bab4f10(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e362d8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab577c; end: 10bab5793; -[SCALegacySnapcodeModalMetadataFetched setUseCaseId:] */

void FUN_10bab577c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feaf18,5,param_3,0);
  return;
}



/* Entry: 10bab5794; end: 10bab57ab; -[SCALegacySnapcodeModalMetadataFetched setSnapcodeSessionId:] */

void FUN_10bab5794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fce418,6,param_3,0);
  return;
}



/* Entry: 10bab57ac; end: 10bab57c3; -[SCALegacySnapcodeModalMetadataFetched setDecodedId:] */

void FUN_10bab57ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feaef8,7,param_3,0);
  return;
}



/* Entry: 10bab57c4; end: 10bab57db; -[SCALegacySnapcodeModalMetadataFetched setScannableId:] */

void FUN_10bab57c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc1378,8,param_3,0);
  return;
}



/* Entry: 10bab57dc; end: 10bab57df; -[SCALegacySnapcodeModalMetadataFetched getFieldNumberToFieldDict] */

void FUN_10bab57dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab57e0; end: 10bab57eb; -[SCALegacySnapcodeModalMetadataFetched toProtoWithAllowedFields:] */

void FUN_10bab57e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab57ec; end: 10bab57f3; -[SCALegacySnapcodeModalMetadataFetched getPayloadIdentifier] */

undefined8 FUN_10bab57ec(void)

{
  return 0xd43;
}



/* Entry: 10bab57f4; end: 10bab57ff; -[SCALegacySnapcodeModalSnapcodeDetected getEventName] */

undefined ** FUN_10bab57f4(void)

{
  return &PTR____CFConstantStringClassReference_110feaf58;
}



/* Entry: 10bab5800; end: 10bab5807; -[SCALegacySnapcodeModalSnapcodeDetected getEventQoS] */

undefined8 FUN_10bab5800(void)

{
  return 1;
}



/* Entry: 10bab5808; end: 10bab5887; -[SCALegacySnapcodeModalSnapcodeDetected setSource:] */

void FUN_10bab5808(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bab4c38(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab5888; end: 10bab58db; -[SCALegacySnapcodeModalSnapcodeDetected setTimestampMs:] */

void FUN_10bab5888(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2af8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab58dc; end: 10bab58f3; -[SCALegacySnapcodeModalSnapcodeDetected setDecodedId:] */

void FUN_10bab58dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feaef8,4,param_3,0);
  return;
}



/* Entry: 10bab58f4; end: 10bab590b; -[SCALegacySnapcodeModalSnapcodeDetected setSnapcodeSessionId:] */

void FUN_10bab58f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fce418,5,param_3,0);
  return;
}



/* Entry: 10bab590c; end: 10bab595f; -[SCALegacySnapcodeModalSnapcodeDetected setIsValid:] */

void FUN_10bab590c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110feaf78,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab5960; end: 10bab5963; -[SCALegacySnapcodeModalSnapcodeDetected getFieldNumberToFieldDict] */

void FUN_10bab5960(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab5964; end: 10bab596f; -[SCALegacySnapcodeModalSnapcodeDetected toProtoWithAllowedFields:] */

void FUN_10bab5964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab5970; end: 10bab5977; -[SCALegacySnapcodeModalSnapcodeDetected getPayloadIdentifier] */

undefined8 FUN_10bab5970(void)

{
  return 0xd44;
}



/* Entry: 10bab5978; end: 10bab5983; -[SCAPercMLModelInferenceLatency getEventName] */

undefined ** FUN_10bab5978(void)

{
  return &PTR____CFConstantStringClassReference_110feaf98;
}



/* Entry: 10bab5984; end: 10bab598b; -[SCAPercMLModelInferenceLatency getEventQoS] */

undefined8 FUN_10bab5984(void)

{
  return 1;
}



/* Entry: 10bab598c; end: 10bab5997; -[SCAPercMLModelInferenceLatency getPerUserSamplingRate] */

undefined8 FUN_10bab598c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bab5998; end: 10bab59a3; -[SCAPercMLModelInferenceLatency getPerUserSamplingRateV2] */

undefined8 FUN_10bab5998(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bab59a4; end: 10bab59f7; -[SCAPercMLModelInferenceLatency setLatencyMs:] */

void FUN_10bab59a4(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10bab59f8; end: 10bab5a0f; -[SCAPercMLModelInferenceLatency setModelId:] */

void FUN_10bab59f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd2718,3,param_3,0);
  return;
}



/* Entry: 10bab5a10; end: 10bab5a27; -[SCAPercMLModelInferenceLatency setModelKey:] */

void FUN_10bab5a10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feafb8,4,param_3,0);
  return;
}



/* Entry: 10bab5a28; end: 10bab5a3f; -[SCAPercMLModelInferenceLatency setTaskType:] */

void FUN_10bab5a28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feafd8,5,param_3,0);
  return;
}



/* Entry: 10bab5a40; end: 10bab5a43; -[SCAPercMLModelInferenceLatency getFieldNumberToFieldDict] */

void FUN_10bab5a40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab5a44; end: 10bab5a4f; -[SCAPercMLModelInferenceLatency toProtoWithAllowedFields:] */

void FUN_10bab5a44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab5a50; end: 10bab5a57; -[SCAPercMLModelInferenceLatency getPayloadIdentifier] */

undefined8 FUN_10bab5a50(void)

{
  return 0x630;
}



/* Entry: 10bab5a58; end: 10bab5a63; -[SCAPercMLModelWarmupLatency getEventName] */

undefined ** FUN_10bab5a58(void)

{
  return &PTR____CFConstantStringClassReference_110feaff8;
}



/* Entry: 10bab5a64; end: 10bab5a6b; -[SCAPercMLModelWarmupLatency getEventQoS] */

undefined8 FUN_10bab5a64(void)

{
  return 1;
}



/* Entry: 10bab5a6c; end: 10bab5a77; -[SCAPercMLModelWarmupLatency getPerUserSamplingRate] */

undefined8 FUN_10bab5a6c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bab5a78; end: 10bab5a83; -[SCAPercMLModelWarmupLatency getPerUserSamplingRateV2] */

undefined8 FUN_10bab5a78(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bab5a84; end: 10bab5ad7; -[SCAPercMLModelWarmupLatency setLatencyMs:] */

void FUN_10bab5a84(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10bab5ad8; end: 10bab5aef; -[SCAPercMLModelWarmupLatency setModelId:] */

void FUN_10bab5ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd2718,3,param_3,0);
  return;
}



/* Entry: 10bab5af0; end: 10bab5b07; -[SCAPercMLModelWarmupLatency setModelKey:] */

void FUN_10bab5af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feafb8,4,param_3,0);
  return;
}



/* Entry: 10bab5b08; end: 10bab5b0b; -[SCAPercMLModelWarmupLatency getFieldNumberToFieldDict] */

void FUN_10bab5b08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab5b0c; end: 10bab5b17; -[SCAPercMLModelWarmupLatency toProtoWithAllowedFields:] */

void FUN_10bab5b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab5b18; end: 10bab5b1f; -[SCAPercMLModelWarmupLatency getPayloadIdentifier] */

undefined8 FUN_10bab5b18(void)

{
  return 0x632;
}



/* Entry: 10bab5b20; end: 10bab5b2b; -[SCAPreviewScanBannerAction getEventName] */

undefined ** FUN_10bab5b20(void)

{
  return &PTR____CFConstantStringClassReference_110feb018;
}



/* Entry: 10bab5b2c; end: 10bab5b33; -[SCAPreviewScanBannerAction getEventQoS] */

undefined8 FUN_10bab5b2c(void)

{
  return 1;
}



/* Entry: 10bab5b34; end: 10bab5b4b; -[SCAPreviewScanBannerAction setActionType:] */

void FUN_10bab5b34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa2618,2,param_3,0);
  return;
}



/* Entry: 10bab5b4c; end: 10bab5b63; -[SCAPreviewScanBannerAction setBannerId:] */

void FUN_10bab5b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feb038,3,param_3,0);
  return;
}



/* Entry: 10bab5b64; end: 10bab5be3; -[SCAPreviewScanBannerAction setCodeType:] */

void FUN_10bab5b64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bab4d08(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110feb058,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab5be4; end: 10bab5c37; -[SCAPreviewScanBannerAction setTimestampMs:] */

void FUN_10bab5be4(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10bab5c38; end: 10bab5c3b; -[SCAPreviewScanBannerAction getFieldNumberToFieldDict] */

void FUN_10bab5c38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab5c3c; end: 10bab5c47; -[SCAPreviewScanBannerAction toProtoWithAllowedFields:] */

void FUN_10bab5c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab5c48; end: 10bab5c4f; -[SCAPreviewScanBannerAction getPayloadIdentifier] */

undefined8 FUN_10bab5c48(void)

{
  return 0x1390;
}



/* Entry: 10bab5c50; end: 10bab5c5b; -[SCAPreviewScanBannerDisplayed getEventName] */

undefined ** FUN_10bab5c50(void)

{
  return &PTR____CFConstantStringClassReference_110feb078;
}



/* Entry: 10bab5c5c; end: 10bab5c63; -[SCAPreviewScanBannerDisplayed getEventQoS] */

undefined8 FUN_10bab5c5c(void)

{
  return 1;
}



/* Entry: 10bab5c64; end: 10bab5c7b; -[SCAPreviewScanBannerDisplayed setBannerId:] */

void FUN_10bab5c64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feb038,2,param_3,0);
  return;
}



/* Entry: 10bab5c7c; end: 10bab5cfb; -[SCAPreviewScanBannerDisplayed setCodeType:] */

void FUN_10bab5c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bab4d08(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110feb058,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab5cfc; end: 10bab5d4f; -[SCAPreviewScanBannerDisplayed setTimestampMs:] */

void FUN_10bab5cfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2af8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab5d50; end: 10bab5d53; -[SCAPreviewScanBannerDisplayed getFieldNumberToFieldDict] */

void FUN_10bab5d50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab5d54; end: 10bab5d5f; -[SCAPreviewScanBannerDisplayed toProtoWithAllowedFields:] */

void FUN_10bab5d54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab5d60; end: 10bab5d67; -[SCAPreviewScanBannerDisplayed getPayloadIdentifier] */

undefined8 FUN_10bab5d60(void)

{
  return 0x1391;
}



/* Entry: 10bab5d68; end: 10bab5d73; -[SCARealTimeScanBannerAction getEventName] */

undefined ** FUN_10bab5d68(void)

{
  return &PTR____CFConstantStringClassReference_110feb098;
}



/* Entry: 10bab5d74; end: 10bab5d7b; -[SCARealTimeScanBannerAction getEventQoS] */

undefined8 FUN_10bab5d74(void)

{
  return 1;
}



/* Entry: 10bab5d7c; end: 10bab5d93; -[SCARealTimeScanBannerAction setActionType:] */

void FUN_10bab5d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa2618,2,param_3,0);
  return;
}



/* Entry: 10bab5d94; end: 10bab5dab; -[SCARealTimeScanBannerAction setBannerId:] */

void FUN_10bab5d94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feb038,3,param_3,0);
  return;
}



/* Entry: 10bab5dac; end: 10bab5dff; -[SCARealTimeScanBannerAction setTimestampMs:] */

void FUN_10bab5dac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2af8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab5e00; end: 10bab5e17; -[SCARealTimeScanBannerAction setFrameId:] */

void FUN_10bab5e00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feb0b8,5,param_3,0);
  return;
}



/* Entry: 10bab5e18; end: 10bab5e97; -[SCARealTimeScanBannerAction setResultType:] */

void FUN_10bab5e18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bab4c7c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e362b8,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab5e98; end: 10bab5e9b; -[SCARealTimeScanBannerAction getFieldNumberToFieldDict] */

void FUN_10bab5e98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab5e9c; end: 10bab5ea7; -[SCARealTimeScanBannerAction toProtoWithAllowedFields:] */

void FUN_10bab5e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab5ea8; end: 10bab5eaf; -[SCARealTimeScanBannerAction getPayloadIdentifier] */

undefined8 FUN_10bab5ea8(void)

{
  return 0xd84;
}



/* Entry: 10bab5eb0; end: 10bab5ebb; -[SCARealTimeScanBannerDisplayed getEventName] */

undefined ** FUN_10bab5eb0(void)

{
  return &PTR____CFConstantStringClassReference_110feb0d8;
}



/* Entry: 10bab5ebc; end: 10bab5ec3; -[SCARealTimeScanBannerDisplayed getEventQoS] */

undefined8 FUN_10bab5ebc(void)

{
  return 1;
}



/* Entry: 10bab5ec4; end: 10bab5edb; -[SCARealTimeScanBannerDisplayed setBannerId:] */

void FUN_10bab5ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feb038,2,param_3,0);
  return;
}



/* Entry: 10bab5edc; end: 10bab5f2f; -[SCARealTimeScanBannerDisplayed setTimestampMs:] */

void FUN_10bab5edc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2af8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


