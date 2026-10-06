/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 005ac5bc; end: 005ac60f; -[SCANotificationServiceExtensionExecution setConversationPrefetchAttempted:] */

void FUN_005ac5bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30a80,8,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ac610; end: 005ac627; -[SCANotificationServiceExtensionExecution setConversationPrefetchError:] */

void FUN_005ac610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a30aa0,9,param_3,0);
  return;
}



/* Entry: 005ac628; end: 005ac67b; -[SCANotificationServiceExtensionExecution setConversationPrefetchLatencyMs:] */

void FUN_005ac628(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30ac0,10,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ac67c; end: 005ac6cf; -[SCANotificationServiceExtensionExecution setConversationPrefetchResponseSize:] */

void FUN_005ac67c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30ae0,0xb,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ac6d0; end: 005ac757; -[SCANotificationServiceExtensionExecution setExtensionClientTs:] */

/* WARNING: Possible PIC construction at 0x005ac720: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x005ac724) */
/* WARNING: Removing unreachable block (ram,0x0077aa60) */

void FUN_005ac6d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x007928e0(param_3);
    func_0x00789c20(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a30b40,0xc,puVar1,5);
  return;
}



/* Entry: 005ac758; end: 005ac7ab; -[SCANotificationServiceExtensionExecution setExtensionLatencyMs:] */

void FUN_005ac758(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30b60,0xd,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ac7ac; end: 005ac7ff; -[SCANotificationServiceExtensionExecution setExtensionTimedOut:] */

void FUN_005ac7ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30b80,0xe,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ac800; end: 005ac817; -[SCANotificationServiceExtensionExecution setMediaId:] */

void FUN_005ac800(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2fb00,0xf,param_3,0);
  return;
}



/* Entry: 005ac818; end: 005ac86b; -[SCANotificationServiceExtensionExecution setMediaPrefetchAttempted:] */

void FUN_005ac818(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30c40,0x10,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ac86c; end: 005ac883; -[SCANotificationServiceExtensionExecution setMediaPrefetchError:] */

void FUN_005ac86c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a30c60,0x11,param_3,0);
  return;
}



/* Entry: 005ac884; end: 005ac8d7; -[SCANotificationServiceExtensionExecution setMediaPrefetchLatencyMs:] */

void FUN_005ac884(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30c80,0x12,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ac8d8; end: 005ac92b; -[SCANotificationServiceExtensionExecution setMediaPrefetchResponseSize:] */

void FUN_005ac8d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30ca0,0x13,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ac92c; end: 005ac9ab; -[SCANotificationServiceExtensionExecution setMessagingStack:] */

void FUN_005ac92c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_005993cc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30ce0,0x14,puVar1,3,
                  param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ac9ac; end: 005ac9c3; -[SCANotificationServiceExtensionExecution setNotificationId:] */

void FUN_005ac9ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f760,0x15,param_3,0);
  return;
}



/* Entry: 005ac9c4; end: 005ac9db; -[SCANotificationServiceExtensionExecution setNotificationSuppressionReason:] */

void FUN_005ac9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a30d40,0x16,param_3,0);
  return;
}



/* Entry: 005ac9dc; end: 005ac9f3; -[SCANotificationServiceExtensionExecution setNotificationType:] */

void FUN_005ac9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a30d60,0x17,param_3,0);
  return;
}



/* Entry: 005ac9f4; end: 005aca0b; -[SCANotificationServiceExtensionExecution setPreprocessingError:] */

void FUN_005ac9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a30d80,0x18,param_3,0);
  return;
}



/* Entry: 005aca0c; end: 005aca23; -[SCANotificationServiceExtensionExecution setMessageId:] */

void FUN_005aca0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a30cc0,0x19,param_3,0);
  return;
}



/* Entry: 005aca24; end: 005aca3b; -[SCANotificationServiceExtensionExecution setDecryptionResult:] */

void FUN_005aca24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a30b00,0x1a,param_3,0);
  return;
}



/* Entry: 005aca3c; end: 005aca8f; -[SCANotificationServiceExtensionExecution setDecryptionTimeInMs:] */

void FUN_005aca3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30b20,0x1b,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005aca90; end: 005acae3; -[SCANotificationServiceExtensionExecution setFromRecovery:] */

void FUN_005aca90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30ba0,0x1c,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005acae4; end: 005acb37; -[SCANotificationServiceExtensionExecution setLastAppExitImportance:] */

void FUN_005acae4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30bc0,0x1d,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005acb38; end: 005acb8b; -[SCANotificationServiceExtensionExecution setLastAppExitReason:] */

void FUN_005acb38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30be0,0x1e,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005acb8c; end: 005acbdf; -[SCANotificationServiceExtensionExecution setProcessedStepsBitmask:] */

void FUN_005acb8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30da0,0x1f,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005acbe0; end: 005acbf7; -[SCANotificationServiceExtensionExecution setNotificationSourceClient:] */

void FUN_005acbe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a30d20,0x20,param_3,0);
  return;
}



/* Entry: 005acbf8; end: 005acc4b; -[SCANotificationServiceExtensionExecution setProcessedStepsBitmaskDuplex:] */

void FUN_005acbf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30dc0,0x21,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005acc4c; end: 005acc9f; -[SCANotificationServiceExtensionExecution setProcessedStepsBitmaskDuplexResend:] */

void FUN_005acc4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30de0,0x22,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005acca0; end: 005accf3; -[SCANotificationServiceExtensionExecution setProcessedStepsBitmaskMainApp:] */

void FUN_005acca0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30e00,0x23,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005accf4; end: 005acd47; -[SCANotificationServiceExtensionExecution setProcessedStepsBitmaskMainAppResend:] */

void FUN_005accf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30e20,0x24,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005acd48; end: 005acd5f; -[SCANotificationServiceExtensionExecution setCampaignEventType:] */

void FUN_005acd48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a30a20,0x26,param_3,0);
  return;
}



/* Entry: 005acd60; end: 005acddf; -[SCANotificationServiceExtensionExecution setCategory:] */

void FUN_005acd60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_00599454(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30a40,0x27,puVar1,3,
                  param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005acde0; end: 005ace33; -[SCANotificationServiceExtensionExecution setLoggedOutEligible:] */

void FUN_005acde0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30c00,0x28,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ace34; end: 005ace87; -[SCANotificationServiceExtensionExecution setLoggedOutHandled:] */

void FUN_005ace34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30c20,0x29,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ace88; end: 005acf07; -[SCANotificationServiceExtensionExecution setNotificationAvatarType:] */

void FUN_005ace88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_005992d8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30d00,0x2a,puVar1,3,
                  param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005acf08; end: 005acf0b; -[SCANotificationServiceExtensionExecution getFieldNumberToFieldDict] */

void FUN_005acf08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_constructFieldNumberToFieldDict_00abafc8);
  return;
}



/* Entry: 005acf0c; end: 005acf17; -[SCANotificationServiceExtensionExecution toProtoWithAllowedFields:] */

void FUN_005acf0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00792ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_00abf7c0,6,param_3);
  return;
}



/* Entry: 005acf18; end: 005acf1f; -[SCANotificationServiceExtensionExecution getPayloadIdentifier] */

undefined8 FUN_005acf18(void)

{
  return 0x5d4;
}



/* Entry: 005acf20; end: 005acf73; -[SCAPlayInstallReferrerMetadata setGooglePlayInstant:] */

void FUN_005acf20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30e40,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005acf74; end: 005acfc7; -[SCAPlayInstallReferrerMetadata setInstallBeginTimestampSeconds:] */

void FUN_005acf74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30e60,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005acfc8; end: 005ad01b; -[SCAPlayInstallReferrerMetadata setInstallBeginTimestampServerSeconds:] */

void FUN_005acfc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30e80,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ad01c; end: 005ad033; -[SCAPlayInstallReferrerMetadata setInstallReferralUrl:] */

void FUN_005ad01c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a30ea0,5,param_3,0);
  return;
}



/* Entry: 005ad034; end: 005ad04b; -[SCAPlayInstallReferrerMetadata setInstallVersion:] */

void FUN_005ad034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a30ec0,6,param_3,0);
  return;
}



/* Entry: 005ad04c; end: 005ad09f; -[SCAPlayInstallReferrerMetadata setReferrerClickTimestampSeconds:] */

void FUN_005ad04c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30ee0,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ad0a0; end: 005ad0f3; -[SCAPlayInstallReferrerMetadata setReferrerClickTimestampServerSeconds:] */

void FUN_005ad0a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30f00,8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ad0f4; end: 005ad0f7; -[SCAPlayInstallReferrerMetadata getFieldNumberToFieldDict] */

void FUN_005ad0f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_constructFieldNumberToFieldDict_00abafc8);
  return;
}



/* Entry: 005ad0f8; end: 005ad103; -[SCAPlayInstallReferrerMetadata toProtoWithAllowedFields:] */

void FUN_005ad0f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00792ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_toProtoWithBitmapLength_allowedF_00abf7c0,1,0)
  ;
  return;
}



/* Entry: 005ad104; end: 005ad10b; -[SCAPlayInstallReferrerMetadata getPayloadIdentifier] */

undefined8 FUN_005ad104(void)

{
  return 0xea7;
}



/* Entry: 005ad10c; end: 005ad433; -[SCARequestContextUpdate initWithDictionary:] */

undefined1 * FUN_005ad10c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac4028;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x0077d0c0();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00789f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00788b40();
      func_0x00790e80(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x0077d0c0();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00789f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00788b40();
      func_0x00790ea0(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x0077d0c0();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00789f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00788b40();
      func_0x00790ec0(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x0077d0c0();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00789f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00788b40();
      func_0x00790ee0(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x0077d0c0();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00789f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00788b40();
      func_0x00790f20(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x0077d0c0();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00789f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      FUN_005990a0();
      func_0x00790f00(puVar1);
      _objc_release(uVar2);
    }
  }
  puVar4 = (undefined1 *)puVar1;
  func_0x0078ab60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00780e80();
  puVar3 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)puVar1;
  }
  _objc_retain(puVar3);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 005ad434; end: 005ad487; -[SCARequestContextUpdate setUpdateIndex:] */

void FUN_005ad434(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30f20,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ad488; end: 005ad4db; -[SCARequestContextUpdate setUpdateTimeMillis:] */

void FUN_005ad488(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30f40,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ad4dc; end: 005ad52f; -[SCARequestContextUpdate setUpdatedImportance:] */

void FUN_005ad4dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30f60,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ad530; end: 005ad583; -[SCARequestContextUpdate setUpdatedPageId:] */

void FUN_005ad530(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30f80,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ad584; end: 005ad5d7; -[SCARequestContextUpdate setUpdatedTrigger:] */

void FUN_005ad584(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30fc0,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ad5d8; end: 005ad657; -[SCARequestContextUpdate setUpdatedPriority:] */

void FUN_005ad5d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_00599080(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30fa0,8,puVar1,3,param_3
                 );
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ad658; end: 005ad65b; -[SCARequestContextUpdate getFieldNumberToFieldDict] */

void FUN_005ad658(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_constructFieldNumberToFieldDict_00abafc8);
  return;
}



/* Entry: 005ad65c; end: 005ad667; -[SCARequestContextUpdate toProtoWithAllowedFields:] */

void FUN_005ad65c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00792ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_toProtoWithBitmapLength_allowedF_00abf7c0,1,0)
  ;
  return;
}



/* Entry: 005ad668; end: 005ad66f; -[SCARequestContextUpdate getPayloadIdentifier] */

char * FUN_005ad668(void)

{
  return "k/UserNotifications";
}



/* Entry: 005ad670; end: 005ad813; -[SCAShareExtensionBase fromDictionary:] */

void FUN_005ad670(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac4030;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__00ab7610,param_3);
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_005996c4();
    func_0x0078ef00(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_0059979c();
    func_0x0078ef40(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_0059983c();
    func_0x00790500(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 005ad814; end: 005ad88f; -[SCAShareExtensionBase setMediaType:] */

void FUN_005ad814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_005996a4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e000(param_1,param_2,&PTR____CFConstantStringClassReference_00a2fb20,puVar1,3,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ad890; end: 005ad90b; -[SCAShareExtensionBase setMessageType:] */

void FUN_005ad890(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_0059977c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e000(param_1,param_2,&PTR____CFConstantStringClassReference_00a30fe0,puVar1,3,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ad90c; end: 005ad987; -[SCAShareExtensionBase setShareSheetType:] */

void FUN_005ad90c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_0059981c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e000(param_1,param_2,&PTR____CFConstantStringClassReference_00a31000,puVar1,3,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ad988; end: 005ad9bb; -[SCAShareExtensionOpen fromDictionary:] */

void FUN_005ad988(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_00ac4038;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_fromDictionary__00ab7610);
  return;
}



/* Entry: 005ad9bc; end: 005ad9c7; -[SCAShareExtensionOpen getEventName] */

undefined ** FUN_005ad9bc(void)

{
  return &PTR____CFConstantStringClassReference_00a313e0;
}



/* Entry: 005ad9c8; end: 005ad9cf; -[SCAShareExtensionOpen getEventQoS] */

undefined8 FUN_005ad9c8(void)

{
  return 1;
}



/* Entry: 005ad9d0; end: 005ad9f3; -[SCAShareExtensionOpen getFieldNumberToFieldDict] */

void FUN_005ad9d0(undefined8 param_1)

{
  func_0x0077e960();
                    /* WARNING: Could not recover jumptable at 0x00780b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_constructFieldNumberToFieldDict_00abafc8);
  return;
}



/* Entry: 005ad9f4; end: 005ada2b; -[SCAShareExtensionOpen addToProtoDictionary] */

void FUN_005ad9f4(undefined8 param_1)

{
  func_0x0078ab80();
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e4e0();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 005ada2c; end: 005ada83; -[SCAShareExtensionOpen toProtoWithAllowedFields:] */

void FUN_005ada2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x0077e960(param_1);
  func_0x00792ac0(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 005ada84; end: 005ada8b; -[SCAShareExtensionOpen getPayloadIdentifier] */

undefined8 FUN_005ada84(void)

{
  return 0xa6b;
}



/* Entry: 005ada8c; end: 005adc9b; -[SCAShareExtensionSend fromDictionary:] */

void FUN_005ada8c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac4040;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__00ab7610,param_3);
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078e320(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078f580(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fbc0();
    func_0x0078dac0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078f840(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 005adc9c; end: 005adca7; -[SCAShareExtensionSend getEventName] */

undefined ** FUN_005adc9c(void)

{
  return &PTR____CFConstantStringClassReference_00a31400;
}



/* Entry: 005adca8; end: 005adcaf; -[SCAShareExtensionSend getEventQoS] */

undefined8 FUN_005adca8(void)

{
  return 1;
}



/* Entry: 005adcb0; end: 005add03; -[SCAShareExtensionSend setGroupRecipientCount:] */

void FUN_005adcb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a31040,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005add04; end: 005add57; -[SCAShareExtensionSend setOneOnOneRecipientCount:] */

void FUN_005add04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a31060,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005add58; end: 005addab; -[SCAShareExtensionSend setDidPostToMyStory:] */

void FUN_005add58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a31020,8,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005addac; end: 005addff; -[SCAShareExtensionSend setPrivateStoryRecipientCount:] */

void FUN_005addac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a31080,9,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ade00; end: 005ade23; -[SCAShareExtensionSend getFieldNumberToFieldDict] */

void FUN_005ade00(undefined8 param_1)

{
  func_0x0077e960();
                    /* WARNING: Could not recover jumptable at 0x00780b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_constructFieldNumberToFieldDict_00abafc8);
  return;
}



/* Entry: 005ade24; end: 005ade5b; -[SCAShareExtensionSend addToProtoDictionary] */

void FUN_005ade24(undefined8 param_1)

{
  func_0x0078ab80();
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e4e0();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 005ade5c; end: 005adeb3; -[SCAShareExtensionSend toProtoWithAllowedFields:] */

void FUN_005ade5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x0077e960(param_1);
  func_0x00792ac0(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 005adeb4; end: 005adebb; -[SCAShareExtensionSend getPayloadIdentifier] */

undefined8 FUN_005adeb4(void)

{
  return 0xa6c;
}



/* Entry: 005adebc; end: 005ae383; -[SCASnapAccessTokenFetch fromDictionary:] */

void FUN_005adebc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac4048;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__00ab7610,param_3);
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fbc0();
    func_0x0078d220(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078df80(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00780e20();
    func_0x0078e300(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00780e20();
    func_0x00790280(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00780e20();
    func_0x0078fe60(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x007902a0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fbc0();
    func_0x007905c0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fbc0();
    func_0x00790ca0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fbc0();
    func_0x00791020(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00780e20();
    func_0x0078fde0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 005ae384; end: 005ae38f; -[SCASnapAccessTokenFetch getEventName] */

undefined ** FUN_005ae384(void)

{
  return &PTR____CFConstantStringClassReference_00a31420;
}



/* Entry: 005ae390; end: 005ae397; -[SCASnapAccessTokenFetch getEventQoS] */

undefined8 FUN_005ae390(void)

{
  return 2;
}



/* Entry: 005ae398; end: 005ae3a3; -[SCASnapAccessTokenFetch getPerUserSamplingRate] */

undefined8 FUN_005ae398(void)

{
  return 0x3f1a36e2eb1c432d;
}



/* Entry: 005ae3a4; end: 005ae3af; -[SCASnapAccessTokenFetch getPerUserSamplingRateV2] */

undefined8 FUN_005ae3a4(void)

{
  return 0x3f1a36e2eb1c432d;
}



/* Entry: 005ae3b0; end: 005ae3bb; -[SCASnapAccessTokenFetch getPerEventSamplingRate] */

undefined8 FUN_005ae3b0(void)

{
  return 0x3f1a36e2eb1c432d;
}



/* Entry: 005ae3bc; end: 005ae40f; -[SCASnapAccessTokenFetch setCacheHit:] */

void FUN_005ae3bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a310a0,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ae410; end: 005ae463; -[SCASnapAccessTokenFetch setFetchLatencyMs:] */

void FUN_005ae410(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a310c0,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ae464; end: 005ae47b; -[SCASnapAccessTokenFetch setGetMode:] */

void FUN_005ae464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a310e0,4,param_3,0);
  return;
}



/* Entry: 005ae47c; end: 005ae493; -[SCASnapAccessTokenFetch setScope:] */

void FUN_005ae47c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a31120,5,param_3,0);
  return;
}



/* Entry: 005ae494; end: 005ae4ab; -[SCASnapAccessTokenFetch setRequestPath:] */

void FUN_005ae494(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a31100,6,param_3,0);
  return;
}



/* Entry: 005ae4ac; end: 005ae4ff; -[SCASnapAccessTokenFetch setScopeSplitMethod:] */

void FUN_005ae4ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a31140,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ae500; end: 005ae553; -[SCASnapAccessTokenFetch setSlowFetch:] */

void FUN_005ae500(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a31160,8,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ae554; end: 005ae5a7; -[SCASnapAccessTokenFetch setTrySyncFirst:] */

void FUN_005ae554(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a31180,9,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ae5a8; end: 005ae5fb; -[SCASnapAccessTokenFetch setUserBlocking:] */

void FUN_005ae5a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a311a0,10,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005ae5fc; end: 005ae613; -[SCASnapAccessTokenFetch setRequestId:] */

void FUN_005ae5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2fbc0,0xb,param_3,0);
  return;
}



/* Entry: 005ae614; end: 005ae617; -[SCASnapAccessTokenFetch getFieldNumberToFieldDict] */

void FUN_005ae614(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_constructFieldNumberToFieldDict_00abafc8);
  return;
}



/* Entry: 005ae618; end: 005ae623; -[SCASnapAccessTokenFetch toProtoWithAllowedFields:] */

void FUN_005ae618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00792ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_00abf7c0,2,param_3);
  return;
}



/* Entry: 005ae624; end: 005ae62b; -[SCASnapAccessTokenFetch getPayloadIdentifier] */

undefined8 FUN_005ae624(void)

{
  return 0x7e3;
}



/* Entry: 005ae62c; end: 005aea1b; -[SCASnapAccessTokenNetworkFetch fromDictionary:] */

void FUN_005ae62c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac4050;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__00ab7610,param_3);
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00780e20();
    func_0x0078dca0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00780e20();
    func_0x00790280(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00780e20();
    func_0x0078fe60(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x007902a0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fbc0();
    func_0x007905c0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fbc0();
    func_0x00790ca0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fbc0();
    func_0x00791020(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00780e20();
    func_0x0078fde0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 005aea1c; end: 005aea27; -[SCASnapAccessTokenNetworkFetch getEventName] */

undefined ** FUN_005aea1c(void)

{
  return &PTR____CFConstantStringClassReference_00a31440;
}


