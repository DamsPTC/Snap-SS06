/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba5140c; end: 10ba5145f; -[SCANotificationDisplaySuppressed setFromRecovery:] */

void FUN_10ba5140c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcde78,8,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51460; end: 10ba51477; -[SCANotificationDisplaySuppressed setNotificationSourceClient:] */

void FUN_10ba51460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fcdf38,9,param_3,0);
  return;
}



/* Entry: 10ba51478; end: 10ba514cb; -[SCANotificationDisplaySuppressed setRedriveAttempt:] */

void FUN_10ba51478(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fceff8,10,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba514cc; end: 10ba5151f; -[SCANotificationDisplaySuppressed setLoggedOutEligible:] */

void FUN_10ba514cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcf018,0xb,puVar1,1)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51520; end: 10ba51573; -[SCANotificationDisplaySuppressed setLoggedOutHandled:] */

void FUN_10ba51520(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcf038,0xc,puVar1,1)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51574; end: 10ba51577; -[SCANotificationDisplaySuppressed getFieldNumberToFieldDict] */

void FUN_10ba51574(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba51578; end: 10ba51583; -[SCANotificationDisplaySuppressed toProtoWithAllowedFields:] */

void FUN_10ba51578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10ba51584; end: 10ba5158b; -[SCANotificationDisplaySuppressed getPayloadIdentifier] */

undefined8 FUN_10ba51584(void)

{
  return 0x12c3;
}



/* Entry: 10ba5158c; end: 10ba51597; -[SCANotificationDisplayed getEventName] */

undefined ** FUN_10ba5158c(void)

{
  return &PTR____CFConstantStringClassReference_110fcf058;
}



/* Entry: 10ba51598; end: 10ba5159f; -[SCANotificationDisplayed getEventQoS] */

undefined8 FUN_10ba51598(void)

{
  return 1;
}



/* Entry: 10ba515a0; end: 10ba5161f; -[SCANotificationDisplayed setAction:] */

void FUN_10ba515a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bae7500(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51620; end: 10ba51673; -[SCANotificationDisplayed setIsSystem:] */

void FUN_10ba51620(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcdeb8,3,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51674; end: 10ba5168b; -[SCANotificationDisplayed setNotificationType:] */

void FUN_10ba51674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110de6ad8,4,param_3,0);
  return;
}



/* Entry: 10ba5168c; end: 10ba516df; -[SCANotificationDisplayed setView_time_sec:] */

void FUN_10ba5168c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fadb38,5,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba516e0; end: 10ba5175f; -[SCANotificationDisplayed setSource:] */

void FUN_10ba516e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31264(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51760; end: 10ba517b3; -[SCANotificationDisplayed setLatencyMs:] */

void FUN_10ba51760(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2198,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba517b4; end: 10ba517cb; -[SCANotificationDisplayed setNotificationId:] */

void FUN_10ba517b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f42398,8,param_3,0);
  return;
}



/* Entry: 10ba517cc; end: 10ba51853; -[SCANotificationDisplayed setReceivedClientTs:] */

/* WARNING: Possible PIC construction at 0x00010ba5181c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ba51820) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10ba517cc(undefined8 param_1,undefined8 param_2,long param_3)

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
             &PTR____CFConstantStringClassReference_110fcded8,9,puVar1,5);
  return;
}



/* Entry: 10ba51854; end: 10ba5186b; -[SCANotificationDisplayed setAppState:] */

void FUN_10ba51854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dd8018,10,param_3,0);
  return;
}



/* Entry: 10ba5186c; end: 10ba51883; -[SCANotificationDisplayed setContentId:] */

void FUN_10ba5186c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dfe398,0xb,param_3,0);
  return;
}



/* Entry: 10ba51884; end: 10ba518d7; -[SCANotificationDisplayed setConversationPrefetchAttempted:] */

void FUN_10ba51884(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcf078,0xc,puVar1,1)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba518d8; end: 10ba518ef; -[SCANotificationDisplayed setConversationPrefetchError:] */

void FUN_10ba518d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fcf098,0xd,param_3,0);
  return;
}



/* Entry: 10ba518f0; end: 10ba51943; -[SCANotificationDisplayed setConversationPrefetchLatencyMs:] */

void FUN_10ba518f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e6d4b8,0xe,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51944; end: 10ba51997; -[SCANotificationDisplayed setConversationPrefetchResponseSize:] */

void FUN_10ba51944(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e6d4d8,0xf,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51998; end: 10ba519af; -[SCANotificationDisplayed setMediaIdList:] */

void FUN_10ba51998(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fcf0b8,0x10,param_3,0);
  return;
}



/* Entry: 10ba519b0; end: 10ba519c7; -[SCANotificationDisplayed setDecryptionResult:] */

void FUN_10ba519b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fcf0d8,0x11,param_3,0);
  return;
}



/* Entry: 10ba519c8; end: 10ba51a1b; -[SCANotificationDisplayed setDecryptionTimeInMs:] */

void FUN_10ba519c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcf0f8,0x12,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51a1c; end: 10ba51a6f; -[SCANotificationDisplayed setFromRecovery:] */

void FUN_10ba51a1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcde78,0x13,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51a70; end: 10ba51ac3; -[SCANotificationDisplayed setFromNseWorkaround:] */

void FUN_10ba51a70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcf118,0x14,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51ac4; end: 10ba51adb; -[SCANotificationDisplayed setNotificationSourceClient:] */

void FUN_10ba51ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fcdf38,0x15,param_3,0);
  return;
}



/* Entry: 10ba51adc; end: 10ba51b2f; -[SCANotificationDisplayed setRedriveAttempt:] */

void FUN_10ba51adc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fceff8,0x16,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51b30; end: 10ba51b47; -[SCANotificationDisplayed setFilterLensId:] */

void FUN_10ba51b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110eb5d58,0x17,param_3,0);
  return;
}



/* Entry: 10ba51b48; end: 10ba51b9b; -[SCANotificationDisplayed setConcurrentPrefetchCount:] */

void FUN_10ba51b48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcf138,0x18,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51b9c; end: 10ba51bef; -[SCANotificationDisplayed setDestinationRoutingLatencyMs:] */

void FUN_10ba51b9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcf158,0x19,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51bf0; end: 10ba51c43; -[SCANotificationDisplayed setInAppDisplayPreparationLatencyMs:] */

void FUN_10ba51bf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcf178,0x1a,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51c44; end: 10ba51c97; -[SCANotificationDisplayed setPayloadDeserializationLatencyMs:] */

void FUN_10ba51c44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcf198,0x1b,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51c98; end: 10ba51ceb; -[SCANotificationDisplayed setPayloadProcessingLatencyMs:] */

void FUN_10ba51c98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcf1b8,0x1c,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51cec; end: 10ba51d3f; -[SCANotificationDisplayed setReceiveToHandlerLatencyMs:] */

void FUN_10ba51cec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcf1d8,0x1d,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51d40; end: 10ba51d93; -[SCANotificationDisplayed setSystemDisplayPreparationLatencyMs:] */

void FUN_10ba51d40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcf1f8,0x1e,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51d94; end: 10ba51dab; -[SCANotificationDisplayed setCampaignEventType:] */

void FUN_10ba51d94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fcf218,0x1f,param_3,0);
  return;
}



/* Entry: 10ba51dac; end: 10ba51dff; -[SCANotificationDisplayed setFromDurableJob:] */

void FUN_10ba51dac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcf238,0x20,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51e00; end: 10ba51e53; -[SCANotificationDisplayed setLoggedOutEligible:] */

void FUN_10ba51e00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcf018,0x21,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51e54; end: 10ba51ea7; -[SCANotificationDisplayed setLoggedOutHandled:] */

void FUN_10ba51e54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcf038,0x22,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51ea8; end: 10ba51f27; -[SCANotificationDisplayed setNotificationAvatarType:] */

void FUN_10ba51ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc9a3c4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fcf258,0x23,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51f28; end: 10ba51f2b; -[SCANotificationDisplayed getFieldNumberToFieldDict] */

void FUN_10ba51f28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba51f2c; end: 10ba51f37; -[SCANotificationDisplayed toProtoWithAllowedFields:] */

void FUN_10ba51f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,5,param_3);
  return;
}



/* Entry: 10ba51f38; end: 10ba51f3f; -[SCANotificationDisplayed getPayloadIdentifier] */

undefined8 FUN_10ba51f38(void)

{
  return 0x5cd;
}



/* Entry: 10ba51f40; end: 10ba51f4b; -[SCANotificationRegistrationPreference getEventName] */

undefined ** FUN_10ba51f40(void)

{
  return &PTR____CFConstantStringClassReference_110e6cdd8;
}



/* Entry: 10ba51f4c; end: 10ba51f53; -[SCANotificationRegistrationPreference getEventQoS] */

undefined8 FUN_10ba51f4c(void)

{
  return 1;
}



/* Entry: 10ba51f54; end: 10ba51f5f; -[SCANotificationRegistrationPreference getPerUserSamplingRateV2] */

undefined8 FUN_10ba51f54(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba51f60; end: 10ba51fb3; -[SCANotificationRegistrationPreference setDialogAction:] */

void FUN_10ba51f60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa4358,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba51fb4; end: 10ba51fb7; -[SCANotificationRegistrationPreference getFieldNumberToFieldDict] */

void FUN_10ba51fb4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba51fb8; end: 10ba51fc3; -[SCANotificationRegistrationPreference toProtoWithAllowedFields:] */

void FUN_10ba51fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba51fc4; end: 10ba51fcb; -[SCANotificationRegistrationPreference getPayloadIdentifier] */

undefined8 FUN_10ba51fc4(void)

{
  return 0x5d2;
}



/* Entry: 10ba51fcc; end: 10ba51fd7; -[SCANotificationSettingsUponComplaint getEventName] */

undefined ** FUN_10ba51fcc(void)

{
  return &PTR____CFConstantStringClassReference_110fcf278;
}



/* Entry: 10ba51fd8; end: 10ba51fdf; -[SCANotificationSettingsUponComplaint getEventQoS] */

undefined8 FUN_10ba51fd8(void)

{
  return 1;
}



/* Entry: 10ba51fe0; end: 10ba51feb; -[SCANotificationSettingsUponComplaint getPerUserSamplingRateV2] */

undefined8 FUN_10ba51fe0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba51fec; end: 10ba52003; -[SCANotificationSettingsUponComplaint setDeviceId:] */

void FUN_10ba51fec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fcde38,2,param_3,0);
  return;
}



/* Entry: 10ba52004; end: 10ba5201b; -[SCANotificationSettingsUponComplaint setDeviceTokenHash:] */

void FUN_10ba52004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fcde58,3,param_3,0);
  return;
}



/* Entry: 10ba5201c; end: 10ba5201f; -[SCANotificationSettingsUponComplaint getFieldNumberToFieldDict] */

void FUN_10ba5201c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba52020; end: 10ba5202b; -[SCANotificationSettingsUponComplaint toProtoWithAllowedFields:] */

void FUN_10ba52020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba5202c; end: 10ba52033; -[SCANotificationSettingsUponComplaint getPayloadIdentifier] */

undefined8 FUN_10ba5202c(void)

{
  return 0x1364;
}



/* Entry: 10ba52034; end: 10ba5203f; -[SCAPasswordDetected getEventName] */

undefined ** FUN_10ba52034(void)

{
  return &PTR____CFConstantStringClassReference_110edc4f8;
}



/* Entry: 10ba52040; end: 10ba52047; -[SCAPasswordDetected getEventQoS] */

undefined8 FUN_10ba52040(void)

{
  return 2;
}



/* Entry: 10ba52048; end: 10ba5209b; -[SCAPasswordDetected setWithSendAnyways:] */

void FUN_10ba52048(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcf298,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5209c; end: 10ba5209f; -[SCAPasswordDetected getFieldNumberToFieldDict] */

void FUN_10ba5209c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba520a0; end: 10ba520ab; -[SCAPasswordDetected toProtoWithAllowedFields:] */

void FUN_10ba520a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba520ac; end: 10ba520b3; -[SCAPasswordDetected getPayloadIdentifier] */

undefined8 FUN_10ba520ac(void)

{
  return 0xbd4;
}



/* Entry: 10ba520b4; end: 10ba520bf; -[SCAPushNotificationDisplayAction getEventName] */

undefined ** FUN_10ba520b4(void)

{
  return &PTR____CFConstantStringClassReference_110fcf2b8;
}



/* Entry: 10ba520c0; end: 10ba520c7; -[SCAPushNotificationDisplayAction getEventQoS] */

undefined8 FUN_10ba520c0(void)

{
  return 1;
}



/* Entry: 10ba520c8; end: 10ba520df; -[SCAPushNotificationDisplayAction setCampaignEventType:] */

void FUN_10ba520c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fcf218,2,param_3,0);
  return;
}



/* Entry: 10ba520e0; end: 10ba520f7; -[SCAPushNotificationDisplayAction setNotificationId:] */

void FUN_10ba520e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f42398,3,param_3,0);
  return;
}



/* Entry: 10ba520f8; end: 10ba5217f; -[SCAPushNotificationDisplayAction setNotificationSendTs:] */

/* WARNING: Possible PIC construction at 0x00010ba52148: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ba5214c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10ba520f8(undefined8 param_1,undefined8 param_2,long param_3)

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
             &PTR____CFConstantStringClassReference_110fcf2d8,4,puVar1,5);
  return;
}



/* Entry: 10ba52180; end: 10ba52197; -[SCAPushNotificationDisplayAction setNotificationSource:] */

void FUN_10ba52180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fcf2f8,5,param_3,0);
  return;
}



/* Entry: 10ba52198; end: 10ba521af; -[SCAPushNotificationDisplayAction setNotificationTapAction:] */

void FUN_10ba52198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fcf318,6,param_3,0);
  return;
}



/* Entry: 10ba521b0; end: 10ba52237; -[SCAPushNotificationDisplayAction setNotificationTapActionTs:] */

/* WARNING: Possible PIC construction at 0x00010ba52200: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ba52204) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10ba521b0(undefined8 param_1,undefined8 param_2,long param_3)

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
             &PTR____CFConstantStringClassReference_110fcf338,7,puVar1,5);
  return;
}



/* Entry: 10ba52238; end: 10ba5224f; -[SCAPushNotificationDisplayAction setNotificationType:] */

void FUN_10ba52238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110de6ad8,8,param_3,0);
  return;
}



/* Entry: 10ba52250; end: 10ba522a3; -[SCAPushNotificationDisplayAction setWithReceivedInBackground:] */

void FUN_10ba52250(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcf358,9,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba522a4; end: 10ba522a7; -[SCAPushNotificationDisplayAction getFieldNumberToFieldDict] */

void FUN_10ba522a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba522a8; end: 10ba522b3; -[SCAPushNotificationDisplayAction toProtoWithAllowedFields:] */

void FUN_10ba522a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba522b4; end: 10ba522bb; -[SCAPushNotificationDisplayAction getPayloadIdentifier] */

undefined8 FUN_10ba522b4(void)

{
  return 0x177f;
}



/* Entry: 10ba522bc; end: 10ba522c7; -[SCASponsoredSnapChatPageView getEventName] */

undefined ** FUN_10ba522bc(void)

{
  return &PTR____CFConstantStringClassReference_110fcf378;
}



/* Entry: 10ba522c8; end: 10ba522cf; -[SCASponsoredSnapChatPageView getEventQoS] */

undefined8 FUN_10ba522c8(void)

{
  return 1;
}



/* Entry: 10ba522d0; end: 10ba522d7; -[SCASponsoredSnapChatPageView getPerUserSamplingRate] */

undefined8 FUN_10ba522d0(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 10ba522d8; end: 10ba522df; -[SCASponsoredSnapChatPageView getPerUserSamplingRateV2] */

undefined8 FUN_10ba522d8(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 10ba522e0; end: 10ba52327; -[SCASponsoredSnapChatPageView setSponsoredSnapChatMetadata:] */

void FUN_10ba522e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcd058,0x10,param_3,
                      6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba52328; end: 10ba5237b; -[SCASponsoredSnapChatPageView setIsAISponsoredSnap:] */

void FUN_10ba52328(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcf398,0x14,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5237c; end: 10ba5243b; -[SCASponsoredSnapChatPageView prepareDictionary:] */

void FUN_10ba5237c(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_38 = PTR_PTR_11270c710;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10ba5243c; end: 10ba5245f; -[SCASponsoredSnapChatPageView getFieldNumberToFieldDict] */

void FUN_10ba5243c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba52460; end: 10ba52497; -[SCASponsoredSnapChatPageView addToProtoDictionary] */

void FUN_10ba52460(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba52498; end: 10ba524ef; -[SCASponsoredSnapChatPageView toProtoWithAllowedFields:] */

void FUN_10ba52498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,5,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba524f0; end: 10ba524f7; -[SCASponsoredSnapChatPageView getPayloadIdentifier] */

undefined8 FUN_10ba524f0(void)

{
  return 0x1767;
}



/* Entry: 10ba524f8; end: 10ba52503; -[SCAStoryInChatDelete getEventName] */

undefined ** FUN_10ba524f8(void)

{
  return &PTR____CFConstantStringClassReference_110fcf3b8;
}



/* Entry: 10ba52504; end: 10ba5250b; -[SCAStoryInChatDelete getEventQoS] */

undefined8 FUN_10ba52504(void)

{
  return 1;
}



/* Entry: 10ba5250c; end: 10ba52523; -[SCAStoryInChatDelete setChatId:] */

void FUN_10ba5250c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb7878,2,param_3,0);
  return;
}



/* Entry: 10ba52524; end: 10ba52527; -[SCAStoryInChatDelete getFieldNumberToFieldDict] */

void FUN_10ba52524(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba52528; end: 10ba52533; -[SCAStoryInChatDelete toProtoWithAllowedFields:] */

void FUN_10ba52528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba52534; end: 10ba5253b; -[SCAStoryInChatDelete getPayloadIdentifier] */

undefined8 FUN_10ba52534(void)

{
  return 0x11e5;
}



/* Entry: 10ba5253c; end: 10ba52553; -[SCAStoryInChatMetadata setStoryId:] */

void FUN_10ba5253c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e5f1b8,2,param_3,0);
  return;
}



/* Entry: 10ba52554; end: 10ba5256b; -[SCAStoryInChatMetadata setStorySnapId:] */

void FUN_10ba52554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea2038,3,param_3,0);
  return;
}


