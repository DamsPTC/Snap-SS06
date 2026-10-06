/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba16724; end: 10ba1677b; -[SCAGameSnippetSendSendTo toProtoWithAllowedFields:] */

void FUN_10ba16724(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba1677c; end: 10ba16783; -[SCAGameSnippetSendSendTo getPayloadIdentifier] */

undefined8 FUN_10ba1677c(void)

{
  return 0x425;
}



/* Entry: 10ba16784; end: 10ba1678f; -[SCAGameSnippetSent getEventName] */

undefined ** FUN_10ba16784(void)

{
  return &PTR____CFConstantStringClassReference_110fc0dd8;
}



/* Entry: 10ba16790; end: 10ba16797; -[SCAGameSnippetSent getEventQoS] */

undefined8 FUN_10ba16790(void)

{
  return 1;
}



/* Entry: 10ba16798; end: 10ba167eb; -[SCAGameSnippetSent setSuccess:] */

void FUN_10ba16798(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10ba167ec; end: 10ba1680f; -[SCAGameSnippetSent getFieldNumberToFieldDict] */

void FUN_10ba167ec(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba16810; end: 10ba16847; -[SCAGameSnippetSent addToProtoDictionary] */

void FUN_10ba16810(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba16848; end: 10ba1689f; -[SCAGameSnippetSent toProtoWithAllowedFields:] */

void FUN_10ba16848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba168a0; end: 10ba168a7; -[SCAGameSnippetSent getPayloadIdentifier] */

undefined8 FUN_10ba168a0(void)

{
  return 0x426;
}



/* Entry: 10ba168a8; end: 10ba168b3; -[SCAGameSnippetSentReturnToGame getEventName] */

undefined ** FUN_10ba168a8(void)

{
  return &PTR____CFConstantStringClassReference_110fc0df8;
}



/* Entry: 10ba168b4; end: 10ba168bb; -[SCAGameSnippetSentReturnToGame getEventQoS] */

undefined8 FUN_10ba168b4(void)

{
  return 1;
}



/* Entry: 10ba168bc; end: 10ba168df; -[SCAGameSnippetSentReturnToGame getFieldNumberToFieldDict] */

void FUN_10ba168bc(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba168e0; end: 10ba16917; -[SCAGameSnippetSentReturnToGame addToProtoDictionary] */

void FUN_10ba168e0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba16918; end: 10ba1696f; -[SCAGameSnippetSentReturnToGame toProtoWithAllowedFields:] */

void FUN_10ba16918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba16970; end: 10ba16977; -[SCAGameSnippetSentReturnToGame getPayloadIdentifier] */

undefined8 FUN_10ba16970(void)

{
  return 0x427;
}



/* Entry: 10ba16978; end: 10ba16983; -[SCAGameTilePressHold getEventName] */

undefined ** FUN_10ba16978(void)

{
  return &PTR____CFConstantStringClassReference_110fc0e18;
}



/* Entry: 10ba16984; end: 10ba1698b; -[SCAGameTilePressHold getEventQoS] */

undefined8 FUN_10ba16984(void)

{
  return 1;
}



/* Entry: 10ba1698c; end: 10ba169a3; -[SCAGameTilePressHold setCognacBuildId:] */

void FUN_10ba1698c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110faee58,3,param_3,0);
  return;
}



/* Entry: 10ba169a4; end: 10ba169bb; -[SCAGameTilePressHold setCognacId:] */

void FUN_10ba169a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbfa98,4,param_3,0);
  return;
}



/* Entry: 10ba169bc; end: 10ba16a0f; -[SCAGameTilePressHold setIsNew:] */

void FUN_10ba169bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfd58,7,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba16a10; end: 10ba16a63; -[SCAGameTilePressHold setIsUpdate:] */

void FUN_10ba16a10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfd78,8,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba16a64; end: 10ba16ab7; -[SCAGameTilePressHold setRank:] */

void FUN_10ba16a64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110de7b78,9,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba16ab8; end: 10ba16adb; -[SCAGameTilePressHold getFieldNumberToFieldDict] */

void FUN_10ba16ab8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba16adc; end: 10ba16b13; -[SCAGameTilePressHold addToProtoDictionary] */

void FUN_10ba16adc(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba16b14; end: 10ba16b6b; -[SCAGameTilePressHold toProtoWithAllowedFields:] */

void FUN_10ba16b14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba16b6c; end: 10ba16b73; -[SCAGameTilePressHold getPayloadIdentifier] */

undefined8 FUN_10ba16b6c(void)

{
  return 0x428;
}



/* Entry: 10ba16b74; end: 10ba16b7f; -[SCASnapCanvasMethodCall getEventName] */

undefined ** FUN_10ba16b74(void)

{
  return &PTR____CFConstantStringClassReference_110fc0e38;
}



/* Entry: 10ba16b80; end: 10ba16b87; -[SCASnapCanvasMethodCall getEventQoS] */

undefined8 FUN_10ba16b80(void)

{
  return 2;
}



/* Entry: 10ba16b88; end: 10ba16b93; -[SCASnapCanvasMethodCall getPerUserSamplingRate] */

undefined8 FUN_10ba16b88(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba16b94; end: 10ba16b9f; -[SCASnapCanvasMethodCall getPerUserSamplingRateV2] */

undefined8 FUN_10ba16b94(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba16ba0; end: 10ba16bb7; -[SCASnapCanvasMethodCall setCognacAppId:] */

void FUN_10ba16ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110faee38,2,param_3,0);
  return;
}



/* Entry: 10ba16bb8; end: 10ba16bcf; -[SCASnapCanvasMethodCall setCognacBuildId:] */

void FUN_10ba16bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110faee58,3,param_3,0);
  return;
}



/* Entry: 10ba16bd0; end: 10ba16be7; -[SCASnapCanvasMethodCall setCognacSessionId:] */

void FUN_10ba16bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc0e58,4,param_3,0);
  return;
}



/* Entry: 10ba16be8; end: 10ba16bff; -[SCASnapCanvasMethodCall setError:] */

void FUN_10ba16be8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daeeb8,5,param_3,0);
  return;
}



/* Entry: 10ba16c00; end: 10ba16c17; -[SCASnapCanvasMethodCall setMethodName:] */

void FUN_10ba16c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc0e78,6,param_3,0);
  return;
}



/* Entry: 10ba16c18; end: 10ba16c2f; -[SCASnapCanvasMethodCall setWebViewUserAgent:] */

void FUN_10ba16c18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc0e98,7,param_3,0);
  return;
}



/* Entry: 10ba16c30; end: 10ba16c83; -[SCASnapCanvasMethodCall setRequestLatencyMs:] */

void FUN_10ba16c30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc0eb8,9,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba16c84; end: 10ba16c87; -[SCASnapCanvasMethodCall getFieldNumberToFieldDict] */

void FUN_10ba16c84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba16c88; end: 10ba16c93; -[SCASnapCanvasMethodCall toProtoWithAllowedFields:] */

void FUN_10ba16c88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba16c94; end: 10ba16dc3; -[SCASnapCanvasMethodCall getPayloadIdentifier] */

undefined8 FUN_10ba16c94(void)

{
  return 0x7ec;
}



/* Entry: 10ba16dc4; end: 10ba16dcf; -[SCACommerceAddAttachmentEvent getEventName] */

undefined ** FUN_10ba16dc4(void)

{
  return &PTR____CFConstantStringClassReference_110fc1078;
}



/* Entry: 10ba16dd0; end: 10ba16dd7; -[SCACommerceAddAttachmentEvent getEventQoS] */

undefined8 FUN_10ba16dd0(void)

{
  return 1;
}



/* Entry: 10ba16dd8; end: 10ba16de3; -[SCACommerceAddAttachmentEvent getPerUserSamplingRateV2] */

undefined8 FUN_10ba16dd8(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba16de4; end: 10ba16e07; -[SCACommerceAddAttachmentEvent getFieldNumberToFieldDict] */

void FUN_10ba16de4(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba16e08; end: 10ba16e3f; -[SCACommerceAddAttachmentEvent addToProtoDictionary] */

void FUN_10ba16e08(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba16e40; end: 10ba16e97; -[SCACommerceAddAttachmentEvent toProtoWithAllowedFields:] */

void FUN_10ba16e40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,7,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba16e98; end: 10ba16e9f; -[SCACommerceAddAttachmentEvent getPayloadIdentifier] */

undefined8 FUN_10ba16e98(void)

{
  return 0x24a;
}



/* Entry: 10ba16ea0; end: 10ba16eab; -[SCACommerceApiEventBase getEventName] */

undefined ** FUN_10ba16ea0(void)

{
  return &PTR____CFConstantStringClassReference_110fc1478;
}



/* Entry: 10ba16eac; end: 10ba16eb3; -[SCACommerceApiEventBase getEventQoS] */

undefined8 FUN_10ba16eac(void)

{
  return 1;
}



/* Entry: 10ba16eb4; end: 10ba16ebf; -[SCACommerceApiEventBase getPerUserSamplingRateV2] */

undefined8 FUN_10ba16eb4(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba16ec0; end: 10ba16f3f; -[SCACommerceApiEventBase setActionType:] */

void FUN_10ba16ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba16c9c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2618,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba16f40; end: 10ba16f57; -[SCACommerceApiEventBase setCheckoutId:] */

void FUN_10ba16f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc1498,7,param_3,0);
  return;
}



/* Entry: 10ba16f58; end: 10ba16f6f; -[SCACommerceApiEventBase setCommerceErrorCode:] */

void FUN_10ba16f58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc14b8,9,param_3,0);
  return;
}



/* Entry: 10ba16f70; end: 10ba16fc3; -[SCACommerceApiEventBase setSuccess:] */

void FUN_10ba16f70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,0x2d,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba16fc4; end: 10ba16fe7; -[SCACommerceApiEventBase getFieldNumberToFieldDict] */

void FUN_10ba16fc4(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba16fe8; end: 10ba1701f; -[SCACommerceApiEventBase addToProtoDictionary] */

void FUN_10ba16fe8(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba17020; end: 10ba17077; -[SCACommerceApiEventBase toProtoWithAllowedFields:] */

void FUN_10ba17020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba17078; end: 10ba1707f; -[SCACommerceApiEventBase getPayloadIdentifier] */

undefined8 FUN_10ba17078(void)

{
  return 0x24c;
}



/* Entry: 10ba17080; end: 10ba1708b; -[SCACommerceAttachCellActionEvent getEventName] */

undefined ** FUN_10ba17080(void)

{
  return &PTR____CFConstantStringClassReference_110fc14d8;
}



/* Entry: 10ba1708c; end: 10ba17093; -[SCACommerceAttachCellActionEvent getEventQoS] */

undefined8 FUN_10ba1708c(void)

{
  return 1;
}



/* Entry: 10ba17094; end: 10ba170e7; -[SCACommerceAttachCellActionEvent setIsSelecting:] */

void FUN_10ba17094(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc14f8,0x1b,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba170e8; end: 10ba1710b; -[SCACommerceAttachCellActionEvent getFieldNumberToFieldDict] */

void FUN_10ba170e8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba1710c; end: 10ba17143; -[SCACommerceAttachCellActionEvent addToProtoDictionary] */

void FUN_10ba1710c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba17144; end: 10ba1719b; -[SCACommerceAttachCellActionEvent toProtoWithAllowedFields:] */

void FUN_10ba17144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba1719c; end: 10ba171a3; -[SCACommerceAttachCellActionEvent getPayloadIdentifier] */

undefined8 FUN_10ba1719c(void)

{
  return 0x24d;
}



/* Entry: 10ba171a4; end: 10ba171af; -[SCACommerceAttachmentPostEvent getEventName] */

undefined ** FUN_10ba171a4(void)

{
  return &PTR____CFConstantStringClassReference_110fc1538;
}



/* Entry: 10ba171b0; end: 10ba171b7; -[SCACommerceAttachmentPostEvent getEventQoS] */

undefined8 FUN_10ba171b0(void)

{
  return 1;
}



/* Entry: 10ba171b8; end: 10ba171c3; -[SCACommerceAttachmentPostEvent getPerUserSamplingRateV2] */

undefined8 FUN_10ba171b8(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba171c4; end: 10ba17217; -[SCACommerceAttachmentPostEvent setSendToFriend:] */

void FUN_10ba171c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc1558,0x26,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba17218; end: 10ba1726b; -[SCACommerceAttachmentPostEvent setSendToGroup:] */

void FUN_10ba17218(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc1578,0x27,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba1726c; end: 10ba172bf; -[SCACommerceAttachmentPostEvent setSendToStory:] */

void FUN_10ba1726c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc1598,0x28,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba172c0; end: 10ba172e3; -[SCACommerceAttachmentPostEvent getFieldNumberToFieldDict] */

void FUN_10ba172c0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba172e4; end: 10ba1731b; -[SCACommerceAttachmentPostEvent addToProtoDictionary] */

void FUN_10ba172e4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba1731c; end: 10ba17373; -[SCACommerceAttachmentPostEvent toProtoWithAllowedFields:] */

void FUN_10ba1731c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,7,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba17374; end: 10ba1737b; -[SCACommerceAttachmentPostEvent getPayloadIdentifier] */

undefined8 FUN_10ba17374(void)

{
  return 0x24e;
}



/* Entry: 10ba1737c; end: 10ba17387; -[SCACommerceCardActionEvent getEventName] */

undefined ** FUN_10ba1737c(void)

{
  return &PTR____CFConstantStringClassReference_110fc15b8;
}



/* Entry: 10ba17388; end: 10ba1738f; -[SCACommerceCardActionEvent getEventQoS] */

undefined8 FUN_10ba17388(void)

{
  return 1;
}



/* Entry: 10ba17390; end: 10ba17397; -[SCACommerceCardActionEvent getPerUserSamplingRateV2] */

undefined8 FUN_10ba17390(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 10ba17398; end: 10ba17417; -[SCACommerceCardActionEvent setTarget:] */

void FUN_10ba17398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba16cbc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110de3f98,0x2d,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba17418; end: 10ba1743b; -[SCACommerceCardActionEvent getFieldNumberToFieldDict] */

void FUN_10ba17418(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba1743c; end: 10ba17473; -[SCACommerceCardActionEvent addToProtoDictionary] */

void FUN_10ba1743c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba17474; end: 10ba174cb; -[SCACommerceCardActionEvent toProtoWithAllowedFields:] */

void FUN_10ba17474(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba174cc; end: 10ba174d3; -[SCACommerceCardActionEvent getPayloadIdentifier] */

undefined8 FUN_10ba174cc(void)

{
  return 0x256;
}



/* Entry: 10ba174d4; end: 10ba174df; -[SCACommerceCardCloseEvent getEventName] */

undefined ** FUN_10ba174d4(void)

{
  return &PTR____CFConstantStringClassReference_110fc15d8;
}



/* Entry: 10ba174e0; end: 10ba174e7; -[SCACommerceCardCloseEvent getEventQoS] */

undefined8 FUN_10ba174e0(void)

{
  return 1;
}



/* Entry: 10ba174e8; end: 10ba174f3; -[SCACommerceCardCloseEvent getPerUserSamplingRateV2] */

undefined8 FUN_10ba174e8(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba174f4; end: 10ba17573; -[SCACommerceCardCloseEvent setCard:] */

void FUN_10ba174f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba16cbc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fc15f8,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba17574; end: 10ba175c7; -[SCACommerceCardCloseEvent setTimeSpent:] */

void FUN_10ba17574(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc1618,0x2c,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba175c8; end: 10ba175eb; -[SCACommerceCardCloseEvent getFieldNumberToFieldDict] */

void FUN_10ba175c8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba175ec; end: 10ba17623; -[SCACommerceCardCloseEvent addToProtoDictionary] */

void FUN_10ba175ec(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba17624; end: 10ba1767b; -[SCACommerceCardCloseEvent toProtoWithAllowedFields:] */

void FUN_10ba17624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,7,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba1767c; end: 10ba17683; -[SCACommerceCardCloseEvent getPayloadIdentifier] */

undefined8 FUN_10ba1767c(void)

{
  return 599;
}



/* Entry: 10ba17684; end: 10ba1768f; -[SCACommerceCardOpenEvent getEventName] */

undefined ** FUN_10ba17684(void)

{
  return &PTR____CFConstantStringClassReference_110fc1638;
}



/* Entry: 10ba17690; end: 10ba17697; -[SCACommerceCardOpenEvent getEventQoS] */

undefined8 FUN_10ba17690(void)

{
  return 1;
}



/* Entry: 10ba17698; end: 10ba17717; -[SCACommerceCardOpenEvent setCard:] */

void FUN_10ba17698(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba16cbc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fc15f8,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba17718; end: 10ba1773b; -[SCACommerceCardOpenEvent getFieldNumberToFieldDict] */

void FUN_10ba17718(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba1773c; end: 10ba17773; -[SCACommerceCardOpenEvent addToProtoDictionary] */

void FUN_10ba1773c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba17774; end: 10ba177cb; -[SCACommerceCardOpenEvent toProtoWithAllowedFields:] */

void FUN_10ba17774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,7,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba177cc; end: 10ba177d3; -[SCACommerceCardOpenEvent getPayloadIdentifier] */

undefined8 FUN_10ba177cc(void)

{
  return 0x25b;
}



/* Entry: 10ba177d4; end: 10ba177df; -[SCACommerceCheckoutApiEvent getEventName] */

undefined ** FUN_10ba177d4(void)

{
  return &PTR____CFConstantStringClassReference_110fc1658;
}


