/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bab7818; end: 10bab786b; -[SCAScanHistoryScanResultSelected setTimestampMs:] */

void FUN_10bab7818(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10bab786c; end: 10bab78eb; -[SCAScanHistoryScanResultSelected setType:] */

void FUN_10bab786c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bab4d8c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dad058,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab78ec; end: 10bab78ef; -[SCAScanHistoryScanResultSelected getFieldNumberToFieldDict] */

void FUN_10bab78ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab78f0; end: 10bab78fb; -[SCAScanHistoryScanResultSelected toProtoWithAllowedFields:] */

void FUN_10bab78f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab78fc; end: 10bab7903; -[SCAScanHistoryScanResultSelected getPayloadIdentifier] */

undefined8 FUN_10bab78fc(void)

{
  return 0xd7f;
}



/* Entry: 10bab7904; end: 10bab790f; -[SCAScanHistoryScanResultTapped getEventName] */

undefined ** FUN_10bab7904(void)

{
  return &PTR____CFConstantStringClassReference_110feb5d8;
}



/* Entry: 10bab7910; end: 10bab7917; -[SCAScanHistoryScanResultTapped getEventQoS] */

undefined8 FUN_10bab7910(void)

{
  return 1;
}



/* Entry: 10bab7918; end: 10bab7997; -[SCAScanHistoryScanResultTapped setActionType:] */

void FUN_10bab7918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bab4d28(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2618,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab7998; end: 10bab79af; -[SCAScanHistoryScanResultTapped setScanHistorySessionId:] */

void FUN_10bab7998(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fce478,3,param_3,0);
  return;
}



/* Entry: 10bab79b0; end: 10bab79c7; -[SCAScanHistoryScanResultTapped setScanResultId:] */

void FUN_10bab79b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbbf78,4,param_3,0);
  return;
}



/* Entry: 10bab79c8; end: 10bab7a47; -[SCAScanHistoryScanResultTapped setScanResultType:] */

void FUN_10bab79c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bab4d8c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110feb5f8,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab7a48; end: 10bab7a9b; -[SCAScanHistoryScanResultTapped setTimestampMs:] */

void FUN_10bab7a48(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10bab7a9c; end: 10bab7a9f; -[SCAScanHistoryScanResultTapped getFieldNumberToFieldDict] */

void FUN_10bab7a9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab7aa0; end: 10bab7aab; -[SCAScanHistoryScanResultTapped toProtoWithAllowedFields:] */

void FUN_10bab7aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab7aac; end: 10bab7ab3; -[SCAScanHistoryScanResultTapped getPayloadIdentifier] */

undefined8 FUN_10bab7aac(void)

{
  return 0xd80;
}



/* Entry: 10bab7ab4; end: 10bab7abf; -[SCAScanHistoryScanSessionHeaderTapped getEventName] */

undefined ** FUN_10bab7ab4(void)

{
  return &PTR____CFConstantStringClassReference_110feb618;
}



/* Entry: 10bab7ac0; end: 10bab7ac7; -[SCAScanHistoryScanSessionHeaderTapped getEventQoS] */

undefined8 FUN_10bab7ac0(void)

{
  return 1;
}



/* Entry: 10bab7ac8; end: 10bab7ad3; -[SCAScanHistoryScanSessionHeaderTapped getPerUserSamplingRateV2] */

undefined8 FUN_10bab7ac8(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bab7ad4; end: 10bab7aeb; -[SCAScanHistoryScanSessionHeaderTapped setScanHistorySessionId:] */

void FUN_10bab7ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fce478,2,param_3,0);
  return;
}



/* Entry: 10bab7aec; end: 10bab7b03; -[SCAScanHistoryScanSessionHeaderTapped setScanSessionId:] */

void FUN_10bab7aec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed18,3,param_3,0);
  return;
}



/* Entry: 10bab7b04; end: 10bab7b57; -[SCAScanHistoryScanSessionHeaderTapped setTimestampMs:] */

void FUN_10bab7b04(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10bab7b58; end: 10bab7b5b; -[SCAScanHistoryScanSessionHeaderTapped getFieldNumberToFieldDict] */

void FUN_10bab7b58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab7b5c; end: 10bab7b67; -[SCAScanHistoryScanSessionHeaderTapped toProtoWithAllowedFields:] */

void FUN_10bab7b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab7b68; end: 10bab7b6f; -[SCAScanHistoryScanSessionHeaderTapped getPayloadIdentifier] */

undefined8 FUN_10bab7b68(void)

{
  return 0xd82;
}



/* Entry: 10bab7b70; end: 10bab7b7b; -[SCAScanHistoryScanSessionSelected getEventName] */

undefined ** FUN_10bab7b70(void)

{
  return &PTR____CFConstantStringClassReference_110feb638;
}



/* Entry: 10bab7b7c; end: 10bab7b83; -[SCAScanHistoryScanSessionSelected getEventQoS] */

undefined8 FUN_10bab7b7c(void)

{
  return 1;
}



/* Entry: 10bab7b84; end: 10bab7b8f; -[SCAScanHistoryScanSessionSelected getPerUserSamplingRateV2] */

undefined8 FUN_10bab7b84(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bab7b90; end: 10bab7ba7; -[SCAScanHistoryScanSessionSelected setScanHistorySessionId:] */

void FUN_10bab7b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fce478,2,param_3,0);
  return;
}



/* Entry: 10bab7ba8; end: 10bab7bbf; -[SCAScanHistoryScanSessionSelected setScanSessionId:] */

void FUN_10bab7ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed18,3,param_3,0);
  return;
}



/* Entry: 10bab7bc0; end: 10bab7c13; -[SCAScanHistoryScanSessionSelected setTimestampMs:] */

void FUN_10bab7bc0(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10bab7c14; end: 10bab7c17; -[SCAScanHistoryScanSessionSelected getFieldNumberToFieldDict] */

void FUN_10bab7c14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab7c18; end: 10bab7c23; -[SCAScanHistoryScanSessionSelected toProtoWithAllowedFields:] */

void FUN_10bab7c18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab7c24; end: 10bab7c2b; -[SCAScanHistoryScanSessionSelected getPayloadIdentifier] */

undefined8 FUN_10bab7c24(void)

{
  return 0xd83;
}



/* Entry: 10bab7c2c; end: 10bab7c37; -[SCAScanHistorySessionRuntimeException getEventName] */

undefined ** FUN_10bab7c2c(void)

{
  return &PTR____CFConstantStringClassReference_110feb658;
}



/* Entry: 10bab7c38; end: 10bab7c3f; -[SCAScanHistorySessionRuntimeException getEventQoS] */

undefined8 FUN_10bab7c38(void)

{
  return 1;
}



/* Entry: 10bab7c40; end: 10bab7c57; -[SCAScanHistorySessionRuntimeException setReason:] */

void FUN_10bab7c40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daf558,2,param_3,0);
  return;
}



/* Entry: 10bab7c58; end: 10bab7c6f; -[SCAScanHistorySessionRuntimeException setScanHistorySessionId:] */

void FUN_10bab7c58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fce478,3,param_3,0);
  return;
}



/* Entry: 10bab7c70; end: 10bab7cc3; -[SCAScanHistorySessionRuntimeException setTimestampMs:] */

void FUN_10bab7c70(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10bab7cc4; end: 10bab7cc7; -[SCAScanHistorySessionRuntimeException getFieldNumberToFieldDict] */

void FUN_10bab7cc4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab7cc8; end: 10bab7cd3; -[SCAScanHistorySessionRuntimeException toProtoWithAllowedFields:] */

void FUN_10bab7cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab7cd4; end: 10bab7cdb; -[SCAScanHistorySessionRuntimeException getPayloadIdentifier] */

undefined8 FUN_10bab7cd4(void)

{
  return 0xe00;
}



/* Entry: 10bab7cdc; end: 10bab7ce7; -[SCAScanModesSelectorTrayCategorySelected getEventName] */

undefined ** FUN_10bab7cdc(void)

{
  return &PTR____CFConstantStringClassReference_110feb678;
}



/* Entry: 10bab7ce8; end: 10bab7cef; -[SCAScanModesSelectorTrayCategorySelected getEventQoS] */

undefined8 FUN_10bab7ce8(void)

{
  return 1;
}



/* Entry: 10bab7cf0; end: 10bab7d07; -[SCAScanModesSelectorTrayCategorySelected setCategoryId:] */

void FUN_10bab7cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dcef58,2,param_3,0);
  return;
}



/* Entry: 10bab7d08; end: 10bab7d5b; -[SCAScanModesSelectorTrayCategorySelected setTimestampMs:] */

void FUN_10bab7d08(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10bab7d5c; end: 10bab7d73; -[SCAScanModesSelectorTrayCategorySelected setTrayId:] */

void FUN_10bab7d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feb698,4,param_3,0);
  return;
}



/* Entry: 10bab7d74; end: 10bab7d77; -[SCAScanModesSelectorTrayCategorySelected getFieldNumberToFieldDict] */

void FUN_10bab7d74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab7d78; end: 10bab7d83; -[SCAScanModesSelectorTrayCategorySelected toProtoWithAllowedFields:] */

void FUN_10bab7d78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab7d84; end: 10bab7d8b; -[SCAScanModesSelectorTrayCategorySelected getPayloadIdentifier] */

undefined8 FUN_10bab7d84(void)

{
  return 0x118b;
}



/* Entry: 10bab7d8c; end: 10bab7d97; -[SCAScanModesSelectorTrayDismissed getEventName] */

undefined ** FUN_10bab7d8c(void)

{
  return &PTR____CFConstantStringClassReference_110feb6b8;
}



/* Entry: 10bab7d98; end: 10bab7d9f; -[SCAScanModesSelectorTrayDismissed getEventQoS] */

undefined8 FUN_10bab7d98(void)

{
  return 1;
}



/* Entry: 10bab7da0; end: 10bab7df3; -[SCAScanModesSelectorTrayDismissed setTimestampMs:] */

void FUN_10bab7da0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2af8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab7df4; end: 10bab7e0b; -[SCAScanModesSelectorTrayDismissed setTrayId:] */

void FUN_10bab7df4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feb698,3,param_3,0);
  return;
}



/* Entry: 10bab7e0c; end: 10bab7e0f; -[SCAScanModesSelectorTrayDismissed getFieldNumberToFieldDict] */

void FUN_10bab7e0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab7e10; end: 10bab7e1b; -[SCAScanModesSelectorTrayDismissed toProtoWithAllowedFields:] */

void FUN_10bab7e10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab7e1c; end: 10bab7e23; -[SCAScanModesSelectorTrayDismissed getPayloadIdentifier] */

undefined8 FUN_10bab7e1c(void)

{
  return 0x118c;
}



/* Entry: 10bab7e24; end: 10bab7e2f; -[SCAScanModesSelectorTrayDisplayed getEventName] */

undefined ** FUN_10bab7e24(void)

{
  return &PTR____CFConstantStringClassReference_110feb6d8;
}



/* Entry: 10bab7e30; end: 10bab7e37; -[SCAScanModesSelectorTrayDisplayed getEventQoS] */

undefined8 FUN_10bab7e30(void)

{
  return 1;
}



/* Entry: 10bab7e38; end: 10bab7e8b; -[SCAScanModesSelectorTrayDisplayed setTimestampMs:] */

void FUN_10bab7e38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2af8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab7e8c; end: 10bab7ea3; -[SCAScanModesSelectorTrayDisplayed setTrayId:] */

void FUN_10bab7e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feb698,3,param_3,0);
  return;
}



/* Entry: 10bab7ea4; end: 10bab7ea7; -[SCAScanModesSelectorTrayDisplayed getFieldNumberToFieldDict] */

void FUN_10bab7ea4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab7ea8; end: 10bab7eb3; -[SCAScanModesSelectorTrayDisplayed toProtoWithAllowedFields:] */

void FUN_10bab7ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab7eb4; end: 10bab7ebb; -[SCAScanModesSelectorTrayDisplayed getPayloadIdentifier] */

undefined8 FUN_10bab7eb4(void)

{
  return 0x118d;
}



/* Entry: 10bab7ebc; end: 10bab7ec7; -[SCAScanSessionBegin getEventName] */

undefined ** FUN_10bab7ebc(void)

{
  return &PTR____CFConstantStringClassReference_110feb6f8;
}



/* Entry: 10bab7ec8; end: 10bab7ecf; -[SCAScanSessionBegin getEventQoS] */

undefined8 FUN_10bab7ec8(void)

{
  return 1;
}



/* Entry: 10bab7ed0; end: 10bab7ee7; -[SCAScanSessionBegin setScanSessionId:] */

void FUN_10bab7ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed18,2,param_3,0);
  return;
}



/* Entry: 10bab7ee8; end: 10bab7f67; -[SCAScanSessionBegin setSource:] */

void FUN_10bab7ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb0a320(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab7f68; end: 10bab7fbb; -[SCAScanSessionBegin setTimestampMs:] */

void FUN_10bab7f68(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10bab7fbc; end: 10bab7fd3; -[SCAScanSessionBegin setSourceId:] */

void FUN_10bab7fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e852f8,5,param_3,0);
  return;
}



/* Entry: 10bab7fd4; end: 10bab7fd7; -[SCAScanSessionBegin getFieldNumberToFieldDict] */

void FUN_10bab7fd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab7fd8; end: 10bab7fe3; -[SCAScanSessionBegin toProtoWithAllowedFields:] */

void FUN_10bab7fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab7fe4; end: 10bab7feb; -[SCAScanSessionBegin getPayloadIdentifier] */

undefined8 FUN_10bab7fe4(void)

{
  return 0xb66;
}



/* Entry: 10bab7fec; end: 10bab7ff7; -[SCAScanSessionEnd getEventName] */

undefined ** FUN_10bab7fec(void)

{
  return &PTR____CFConstantStringClassReference_110feb718;
}



/* Entry: 10bab7ff8; end: 10bab7fff; -[SCAScanSessionEnd getEventQoS] */

undefined8 FUN_10bab7ff8(void)

{
  return 1;
}



/* Entry: 10bab8000; end: 10bab807f; -[SCAScanSessionEnd setDestination:] */

void FUN_10bab8000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bab4dd0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110ee2418,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab8080; end: 10bab8097; -[SCAScanSessionEnd setScanSessionId:] */

void FUN_10bab8080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed18,3,param_3,0);
  return;
}



/* Entry: 10bab8098; end: 10bab80eb; -[SCAScanSessionEnd setStartTimestampMs:] */

void FUN_10bab8098(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fad978,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab80ec; end: 10bab813f; -[SCAScanSessionEnd setTimestampMs:] */

void FUN_10bab80ec(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10bab8140; end: 10bab8143; -[SCAScanSessionEnd getFieldNumberToFieldDict] */

void FUN_10bab8140(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab8144; end: 10bab814f; -[SCAScanSessionEnd toProtoWithAllowedFields:] */

void FUN_10bab8144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab8150; end: 10bab8157; -[SCAScanSessionEnd getPayloadIdentifier] */

undefined8 FUN_10bab8150(void)

{
  return 0xb68;
}



/* Entry: 10bab8158; end: 10bab8163; -[SCAScanSessionQueryBarcodeUsecaseDisplayed getEventName] */

undefined ** FUN_10bab8158(void)

{
  return &PTR____CFConstantStringClassReference_110feb738;
}



/* Entry: 10bab8164; end: 10bab816b; -[SCAScanSessionQueryBarcodeUsecaseDisplayed getEventQoS] */

undefined8 FUN_10bab8164(void)

{
  return 1;
}



/* Entry: 10bab816c; end: 10bab8183; -[SCAScanSessionQueryBarcodeUsecaseDisplayed setScanQueryId:] */

void FUN_10bab816c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed38,2,param_3,0);
  return;
}



/* Entry: 10bab8184; end: 10bab819b; -[SCAScanSessionQueryBarcodeUsecaseDisplayed setScanSessionId:] */

void FUN_10bab8184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed18,3,param_3,0);
  return;
}



/* Entry: 10bab819c; end: 10bab821b; -[SCAScanSessionQueryBarcodeUsecaseDisplayed setSource:] */

void FUN_10bab819c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bab821c; end: 10bab826f; -[SCAScanSessionQueryBarcodeUsecaseDisplayed setTimestampMs:] */

void FUN_10bab821c(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10bab8270; end: 10bab82ef; -[SCAScanSessionQueryBarcodeUsecaseDisplayed setUseCase:] */

void FUN_10bab8270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bab4c04(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e362d8,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab82f0; end: 10bab82f3; -[SCAScanSessionQueryBarcodeUsecaseDisplayed getFieldNumberToFieldDict] */

void FUN_10bab82f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab82f4; end: 10bab82ff; -[SCAScanSessionQueryBarcodeUsecaseDisplayed toProtoWithAllowedFields:] */

void FUN_10bab82f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab8300; end: 10bab8307; -[SCAScanSessionQueryBarcodeUsecaseDisplayed getPayloadIdentifier] */

undefined8 FUN_10bab8300(void)

{
  return 0x10e7;
}



/* Entry: 10bab8308; end: 10bab8313; -[SCAScanSessionQueryBegin getEventName] */

undefined ** FUN_10bab8308(void)

{
  return &PTR____CFConstantStringClassReference_110feb758;
}



/* Entry: 10bab8314; end: 10bab831b; -[SCAScanSessionQueryBegin getEventQoS] */

undefined8 FUN_10bab8314(void)

{
  return 1;
}



/* Entry: 10bab831c; end: 10bab8333; -[SCAScanSessionQueryBegin setScanCategoryId:] */

void FUN_10bab831c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110feb778,2,param_3,0);
  return;
}



/* Entry: 10bab8334; end: 10bab834b; -[SCAScanSessionQueryBegin setScanQueryId:] */

void FUN_10bab8334(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed38,3,param_3,0);
  return;
}



/* Entry: 10bab834c; end: 10bab8363; -[SCAScanSessionQueryBegin setScanSessionId:] */

void FUN_10bab834c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed18,4,param_3,0);
  return;
}



/* Entry: 10bab8364; end: 10bab83e3; -[SCAScanSessionQueryBegin setSource:] */

void FUN_10bab8364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bab4e50(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab83e4; end: 10bab8437; -[SCAScanSessionQueryBegin setTimestampMs:] */

void FUN_10bab83e4(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10bab8438; end: 10bab84b7; -[SCAScanSessionQueryBegin setScanRequestCamera:] */

void FUN_10bab8438(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bab4dac(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110feb798,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab84b8; end: 10bab84bb; -[SCAScanSessionQueryBegin getFieldNumberToFieldDict] */

void FUN_10bab84b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}


