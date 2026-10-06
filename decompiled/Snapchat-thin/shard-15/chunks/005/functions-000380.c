/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bac64cc; end: 10bac64d3; -[SCAFideliusAckRetry getPayloadIdentifier] */

undefined8 FUN_10bac64cc(void)

{
  return 0x365;
}



/* Entry: 10bac64d4; end: 10bac64df; -[SCAFideliusAppInvalidation getEventName] */

undefined ** FUN_10bac64d4(void)

{
  return &PTR____CFConstantStringClassReference_110fef4d8;
}



/* Entry: 10bac64e0; end: 10bac64e7; -[SCAFideliusAppInvalidation getEventQoS] */

undefined8 FUN_10bac64e0(void)

{
  return 2;
}



/* Entry: 10bac64e8; end: 10bac64f3; -[SCAFideliusAppInvalidation getPerUserSamplingRate] */

undefined8 FUN_10bac64e8(void)

{
  return 0x3fa999999999999a;
}



/* Entry: 10bac64f4; end: 10bac64ff; -[SCAFideliusAppInvalidation getPerUserSamplingRateV2] */

undefined8 FUN_10bac64f4(void)

{
  return 0x3fa999999999999a;
}



/* Entry: 10bac6500; end: 10bac6517; -[SCAFideliusAppInvalidation setSource:] */

void FUN_10bac6500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dae8d8,2,param_3,0);
  return;
}



/* Entry: 10bac6518; end: 10bac651b; -[SCAFideliusAppInvalidation getFieldNumberToFieldDict] */

void FUN_10bac6518(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac651c; end: 10bac6527; -[SCAFideliusAppInvalidation toProtoWithAllowedFields:] */

void FUN_10bac651c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bac6528; end: 10bac652f; -[SCAFideliusAppInvalidation getPayloadIdentifier] */

undefined8 FUN_10bac6528(void)

{
  return 0x367;
}



/* Entry: 10bac6530; end: 10bac6537; -[SCAFideliusAppOpen getEventQoS] */

undefined8 FUN_10bac6530(void)

{
  return 2;
}



/* Entry: 10bac6538; end: 10bac6543; -[SCAFideliusAppOpen getPerUserSamplingRate] */

undefined8 FUN_10bac6538(void)

{
  return 0x3fa999999999999a;
}



/* Entry: 10bac6544; end: 10bac655b; -[SCAFideliusAppOpen setAction:] */

void FUN_10bac6544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daf5b8,2,param_3,0);
  return;
}



/* Entry: 10bac655c; end: 10bac655f; -[SCAFideliusAppOpen getFieldNumberToFieldDict] */

void FUN_10bac655c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac6560; end: 10bac656b; -[SCAFideliusAppOpen toProtoWithAllowedFields:] */

void FUN_10bac6560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bac656c; end: 10bac6573; -[SCAFideliusAppOpen getPayloadIdentifier] */

undefined8 FUN_10bac656c(void)

{
  return 0x368;
}



/* Entry: 10bac6574; end: 10bac657f; -[SCAFideliusClientRetryInit getEventName] */

undefined ** FUN_10bac6574(void)

{
  return &PTR____CFConstantStringClassReference_110fef538;
}



/* Entry: 10bac6580; end: 10bac6587; -[SCAFideliusClientRetryInit getEventQoS] */

undefined8 FUN_10bac6580(void)

{
  return 1;
}



/* Entry: 10bac6588; end: 10bac659f; -[SCAFideliusClientRetryInit setConversationId:] */

void FUN_10bac6588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e0fcf8,2,param_3,0);
  return;
}



/* Entry: 10bac65a0; end: 10bac65b7; -[SCAFideliusClientRetryInit setMessageId:] */

void FUN_10bac65a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e0fd18,3,param_3,0);
  return;
}



/* Entry: 10bac65b8; end: 10bac65cf; -[SCAFideliusClientRetryInit setSource:] */

void FUN_10bac65b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dae8d8,4,param_3,0);
  return;
}



/* Entry: 10bac65d0; end: 10bac65d3; -[SCAFideliusClientRetryInit getFieldNumberToFieldDict] */

void FUN_10bac65d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac65d4; end: 10bac65df; -[SCAFideliusClientRetryInit toProtoWithAllowedFields:] */

void FUN_10bac65d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bac65e0; end: 10bac65e7; -[SCAFideliusClientRetryInit getPayloadIdentifier] */

undefined8 FUN_10bac65e0(void)

{
  return 0x36b;
}



/* Entry: 10bac65e8; end: 10bac65f3; -[SCAFideliusClientSnapSuppressed getEventName] */

undefined ** FUN_10bac65e8(void)

{
  return &PTR____CFConstantStringClassReference_110fef558;
}



/* Entry: 10bac65f4; end: 10bac65fb; -[SCAFideliusClientSnapSuppressed getEventQoS] */

undefined8 FUN_10bac65f4(void)

{
  return 2;
}



/* Entry: 10bac65fc; end: 10bac6607; -[SCAFideliusClientSnapSuppressed getPerUserSamplingRate] */

undefined8 FUN_10bac65fc(void)

{
  return 0x3fa999999999999a;
}



/* Entry: 10bac6608; end: 10bac6613; -[SCAFideliusClientSnapSuppressed getPerUserSamplingRateV2] */

undefined8 FUN_10bac6608(void)

{
  return 0x3fa999999999999a;
}



/* Entry: 10bac6614; end: 10bac662b; -[SCAFideliusClientSnapSuppressed setReason:] */

void FUN_10bac6614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daf558,2,param_3,0);
  return;
}



/* Entry: 10bac662c; end: 10bac6643; -[SCAFideliusClientSnapSuppressed setRecipientBeta:] */

void FUN_10bac662c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fef578,3,param_3,0);
  return;
}



/* Entry: 10bac6644; end: 10bac665b; -[SCAFideliusClientSnapSuppressed setSource:] */

void FUN_10bac6644(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dae8d8,4,param_3,0);
  return;
}



/* Entry: 10bac665c; end: 10bac66af; -[SCAFideliusClientSnapSuppressed setWithCleartextKey:] */

void FUN_10bac665c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fef598,5,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac66b0; end: 10bac66b3; -[SCAFideliusClientSnapSuppressed getFieldNumberToFieldDict] */

void FUN_10bac66b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac66b4; end: 10bac66bf; -[SCAFideliusClientSnapSuppressed toProtoWithAllowedFields:] */

void FUN_10bac66b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bac66c0; end: 10bac66c7; -[SCAFideliusClientSnapSuppressed getPayloadIdentifier] */

undefined8 FUN_10bac66c0(void)

{
  return 0x36c;
}



/* Entry: 10bac66c8; end: 10bac66d3; -[SCAFideliusDbMigrationCompare getEventName] */

undefined ** FUN_10bac66c8(void)

{
  return &PTR____CFConstantStringClassReference_110fef5b8;
}



/* Entry: 10bac66d4; end: 10bac66db; -[SCAFideliusDbMigrationCompare getEventQoS] */

undefined8 FUN_10bac66d4(void)

{
  return 2;
}



/* Entry: 10bac66dc; end: 10bac66e7; -[SCAFideliusDbMigrationCompare getPerUserSamplingRate] */

undefined8 FUN_10bac66dc(void)

{
  return 0x3fa999999999999a;
}



/* Entry: 10bac66e8; end: 10bac66f3; -[SCAFideliusDbMigrationCompare getPerUserSamplingRateV2] */

undefined8 FUN_10bac66e8(void)

{
  return 0x3fa999999999999a;
}



/* Entry: 10bac66f4; end: 10bac670b; -[SCAFideliusDbMigrationCompare setDatabaseTable:] */

void FUN_10bac66f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fef5d8,2,param_3,0);
  return;
}



/* Entry: 10bac670c; end: 10bac6723; -[SCAFideliusDbMigrationCompare setErrorMessage:] */

void FUN_10bac670c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e0a338,3,param_3,0);
  return;
}



/* Entry: 10bac6724; end: 10bac6777; -[SCAFideliusDbMigrationCompare setMismatchCount:] */

void FUN_10bac6724(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e0fcb8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac6778; end: 10bac678f; -[SCAFideliusDbMigrationCompare setSource:] */

void FUN_10bac6778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dae8d8,5,param_3,0);
  return;
}



/* Entry: 10bac6790; end: 10bac67e3; -[SCAFideliusDbMigrationCompare setWithSuccess:] */

void FUN_10bac6790(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe7f58,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac67e4; end: 10bac6837; -[SCAFideliusDbMigrationCompare setBackfillCompleted:] */

void FUN_10bac67e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fef5f8,7,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac6838; end: 10bac687f; -[SCAFideliusDbMigrationCompare setRecipientUserIds:] */

void FUN_10bac6838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fef618,8,param_3,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bac6880; end: 10bac68d3; -[SCAFideliusDbMigrationCompare setRepeatCount:] */

void FUN_10bac6880(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fef638,9,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac68d4; end: 10bac6927; -[SCAFideliusDbMigrationCompare setRecordCount:] */

void FUN_10bac68d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fef658,10,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac6928; end: 10bac692b; -[SCAFideliusDbMigrationCompare getFieldNumberToFieldDict] */

void FUN_10bac6928(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac692c; end: 10bac6937; -[SCAFideliusDbMigrationCompare toProtoWithAllowedFields:] */

void FUN_10bac692c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10bac6938; end: 10bac693f; -[SCAFideliusDbMigrationCompare getPayloadIdentifier] */

undefined8 FUN_10bac6938(void)

{
  return 0x146a;
}



/* Entry: 10bac6940; end: 10bac694b; -[SCAFideliusDbMigrationUpdate getEventName] */

undefined ** FUN_10bac6940(void)

{
  return &PTR____CFConstantStringClassReference_110fef678;
}



/* Entry: 10bac694c; end: 10bac6953; -[SCAFideliusDbMigrationUpdate getEventQoS] */

undefined8 FUN_10bac694c(void)

{
  return 1;
}



/* Entry: 10bac6954; end: 10bac696b; -[SCAFideliusDbMigrationUpdate setDatabaseTable:] */

void FUN_10bac6954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fef5d8,2,param_3,0);
  return;
}



/* Entry: 10bac696c; end: 10bac6983; -[SCAFideliusDbMigrationUpdate setErrorMessage:] */

void FUN_10bac696c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e0a338,3,param_3,0);
  return;
}



/* Entry: 10bac6984; end: 10bac69d7; -[SCAFideliusDbMigrationUpdate setRecordCount:] */

void FUN_10bac6984(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fef658,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac69d8; end: 10bac69ef; -[SCAFideliusDbMigrationUpdate setSource:] */

void FUN_10bac69d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dae8d8,5,param_3,0);
  return;
}



/* Entry: 10bac69f0; end: 10bac6a43; -[SCAFideliusDbMigrationUpdate setWithSuccess:] */

void FUN_10bac69f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe7f58,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac6a44; end: 10bac6a97; -[SCAFideliusDbMigrationUpdate setBackfillCompleted:] */

void FUN_10bac6a44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fef5f8,7,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac6a98; end: 10bac6adf; -[SCAFideliusDbMigrationUpdate setRecipientUserIds:] */

void FUN_10bac6a98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fef618,8,param_3,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bac6ae0; end: 10bac6ae3; -[SCAFideliusDbMigrationUpdate getFieldNumberToFieldDict] */

void FUN_10bac6ae0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac6ae4; end: 10bac6aef; -[SCAFideliusDbMigrationUpdate toProtoWithAllowedFields:] */

void FUN_10bac6ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bac6af0; end: 10bac6af7; -[SCAFideliusDbMigrationUpdate getPayloadIdentifier] */

undefined8 FUN_10bac6af0(void)

{
  return 0x146b;
}



/* Entry: 10bac6af8; end: 10bac6aff; -[SCAFideliusDbOperation getEventQoS] */

undefined8 FUN_10bac6af8(void)

{
  return 2;
}



/* Entry: 10bac6b00; end: 10bac6b0b; -[SCAFideliusDbOperation getPerUserSamplingRate] */

undefined8 FUN_10bac6b00(void)

{
  return 0x3fa999999999999a;
}



/* Entry: 10bac6b0c; end: 10bac6b5f; -[SCAFideliusDbOperation setOperationTimeMs:] */

void FUN_10bac6b0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fef438,0xd,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac6b60; end: 10bac6b63; -[SCAFideliusDbOperation getFieldNumberToFieldDict] */

void FUN_10bac6b60(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac6b64; end: 10bac6b6f; -[SCAFideliusDbOperation toProtoWithAllowedFields:] */

void FUN_10bac6b64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,3,param_3);
  return;
}



/* Entry: 10bac6b70; end: 10bac6b77; -[SCAFideliusDbOperation getPayloadIdentifier] */

undefined8 FUN_10bac6b70(void)

{
  return 0x36d;
}



/* Entry: 10bac6b78; end: 10bac6b83; -[SCAFideliusDeviceRemoved getEventName] */

undefined ** FUN_10bac6b78(void)

{
  return &PTR____CFConstantStringClassReference_110fef818;
}



/* Entry: 10bac6b84; end: 10bac6b8b; -[SCAFideliusDeviceRemoved getEventQoS] */

undefined8 FUN_10bac6b84(void)

{
  return 2;
}



/* Entry: 10bac6b8c; end: 10bac6b97; -[SCAFideliusDeviceRemoved getPerUserSamplingRate] */

undefined8 FUN_10bac6b8c(void)

{
  return 0x3fa999999999999a;
}



/* Entry: 10bac6b98; end: 10bac6ba3; -[SCAFideliusDeviceRemoved getPerUserSamplingRateV2] */

undefined8 FUN_10bac6b98(void)

{
  return 0x3fa999999999999a;
}



/* Entry: 10bac6ba4; end: 10bac6bbb; -[SCAFideliusDeviceRemoved setSource:] */

void FUN_10bac6ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dae8d8,2,param_3,0);
  return;
}



/* Entry: 10bac6bbc; end: 10bac6bbf; -[SCAFideliusDeviceRemoved getFieldNumberToFieldDict] */

void FUN_10bac6bbc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac6bc0; end: 10bac6bcb; -[SCAFideliusDeviceRemoved toProtoWithAllowedFields:] */

void FUN_10bac6bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bac6bcc; end: 10bac6bd3; -[SCAFideliusDeviceRemoved getPayloadIdentifier] */

undefined8 FUN_10bac6bcc(void)

{
  return 0x36f;
}



/* Entry: 10bac6bd4; end: 10bac6bdf; -[SCAFideliusFriendAdded getEventName] */

undefined ** FUN_10bac6bd4(void)

{
  return &PTR____CFConstantStringClassReference_110fef838;
}



/* Entry: 10bac6be0; end: 10bac6be7; -[SCAFideliusFriendAdded getEventQoS] */

undefined8 FUN_10bac6be0(void)

{
  return 2;
}



/* Entry: 10bac6be8; end: 10bac6bf3; -[SCAFideliusFriendAdded getPerUserSamplingRate] */

undefined8 FUN_10bac6be8(void)

{
  return 0x3fa999999999999a;
}



/* Entry: 10bac6bf4; end: 10bac6bff; -[SCAFideliusFriendAdded getPerUserSamplingRateV2] */

undefined8 FUN_10bac6bf4(void)

{
  return 0x3fa999999999999a;
}



/* Entry: 10bac6c00; end: 10bac6c53; -[SCAFideliusFriendAdded setCurrentDeviceCount:] */

void FUN_10bac6c00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fef858,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac6c54; end: 10bac6c6b; -[SCAFideliusFriendAdded setOperationResult:] */

void FUN_10bac6c54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fef758,3,param_3,0);
  return;
}



/* Entry: 10bac6c6c; end: 10bac6cbf; -[SCAFideliusFriendAdded setPreviousDeviceCount:] */

void FUN_10bac6c6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fef878,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac6cc0; end: 10bac6cc3; -[SCAFideliusFriendAdded getFieldNumberToFieldDict] */

void FUN_10bac6cc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac6cc4; end: 10bac6ccf; -[SCAFideliusFriendAdded toProtoWithAllowedFields:] */

void FUN_10bac6cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bac6cd0; end: 10bac6cd7; -[SCAFideliusFriendAdded getPayloadIdentifier] */

undefined8 FUN_10bac6cd0(void)

{
  return 0x372;
}



/* Entry: 10bac6cd8; end: 10bac6ce3; -[SCAFideliusGeneralError getEventName] */

undefined ** FUN_10bac6cd8(void)

{
  return &PTR____CFConstantStringClassReference_110fef898;
}



/* Entry: 10bac6ce4; end: 10bac6ceb; -[SCAFideliusGeneralError getEventQoS] */

undefined8 FUN_10bac6ce4(void)

{
  return 1;
}



/* Entry: 10bac6cec; end: 10bac6d6b; -[SCAFideliusGeneralError setEventType:] */

void FUN_10bac6cec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bac5a48(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e795d8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac6d6c; end: 10bac6d83; -[SCAFideliusGeneralError setFailureReason:] */

void FUN_10bac6d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbdcd8,3,param_3,0);
  return;
}



/* Entry: 10bac6d84; end: 10bac6d9b; -[SCAFideliusGeneralError setFile:] */

void FUN_10bac6d84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110df29f8,4,param_3,0);
  return;
}



/* Entry: 10bac6d9c; end: 10bac6db3; -[SCAFideliusGeneralError setFreeDiskSpaceMb:] */

void FUN_10bac6d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e29c78,5,param_3,0);
  return;
}



/* Entry: 10bac6db4; end: 10bac6dcb; -[SCAFideliusGeneralError setFreeNodes:] */

void FUN_10bac6db4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fef738,6,param_3,0);
  return;
}



/* Entry: 10bac6dcc; end: 10bac6de3; -[SCAFideliusGeneralError setKeyLength:] */

void FUN_10bac6dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ef6858,7,param_3,0);
  return;
}



/* Entry: 10bac6de4; end: 10bac6dfb; -[SCAFideliusGeneralError setSource:] */

void FUN_10bac6de4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dae8d8,8,param_3,0);
  return;
}



/* Entry: 10bac6dfc; end: 10bac6e13; -[SCAFideliusGeneralError setTotalDiskSpaceMb:] */

void FUN_10bac6dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fef798,9,param_3,0);
  return;
}



/* Entry: 10bac6e14; end: 10bac6e2b; -[SCAFideliusGeneralError setTotalNodes:] */

void FUN_10bac6e14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fef7b8,10,param_3,0);
  return;
}



/* Entry: 10bac6e2c; end: 10bac6e2f; -[SCAFideliusGeneralError getFieldNumberToFieldDict] */

void FUN_10bac6e2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac6e30; end: 10bac6e3b; -[SCAFideliusGeneralError toProtoWithAllowedFields:] */

void FUN_10bac6e30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10bac6e3c; end: 10bac6e43; -[SCAFideliusGeneralError getPayloadIdentifier] */

undefined8 FUN_10bac6e3c(void)

{
  return 0x373;
}


