/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba15580; end: 10ba15587; -[SCACognacTooltipDisplay getPayloadIdentifier] */

undefined8 FUN_10ba15580(void)

{
  return 0x246;
}



/* Entry: 10ba15588; end: 10ba15593; -[SCACognacUnconsumedGrant getEventName] */

undefined ** FUN_10ba15588(void)

{
  return &PTR____CFConstantStringClassReference_110fc0a98;
}



/* Entry: 10ba15594; end: 10ba1559b; -[SCACognacUnconsumedGrant getEventQoS] */

undefined8 FUN_10ba15594(void)

{
  return 1;
}



/* Entry: 10ba1559c; end: 10ba155ef; -[SCACognacUnconsumedGrant setTokenCount:] */

void FUN_10ba1559c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc0ab8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba155f0; end: 10ba15607; -[SCACognacUnconsumedGrant setTokenPackId:] */

void FUN_10ba155f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc0ad8,5,param_3,0);
  return;
}



/* Entry: 10ba15608; end: 10ba1561f; -[SCACognacUnconsumedGrant setTransactionId:] */

void FUN_10ba15608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc02b8,6,param_3,0);
  return;
}



/* Entry: 10ba15620; end: 10ba1569f; -[SCACognacUnconsumedGrant setTransactionStatus:] */

void FUN_10ba15620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb11d08(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fc0af8,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba156a0; end: 10ba156c3; -[SCACognacUnconsumedGrant getFieldNumberToFieldDict] */

void FUN_10ba156a0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba156c4; end: 10ba156fb; -[SCACognacUnconsumedGrant addToProtoDictionary] */

void FUN_10ba156c4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba156fc; end: 10ba15753; -[SCACognacUnconsumedGrant toProtoWithAllowedFields:] */

void FUN_10ba156fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba15754; end: 10ba1575b; -[SCACognacUnconsumedGrant getPayloadIdentifier] */

undefined8 FUN_10ba15754(void)

{
  return 0xa07;
}



/* Entry: 10ba1575c; end: 10ba15767; -[SCACognacWebViewProcessTerminated getEventName] */

undefined ** FUN_10ba1575c(void)

{
  return &PTR____CFConstantStringClassReference_110fc0b18;
}



/* Entry: 10ba15768; end: 10ba1576f; -[SCACognacWebViewProcessTerminated getEventQoS] */

undefined8 FUN_10ba15768(void)

{
  return 1;
}



/* Entry: 10ba15770; end: 10ba15793; -[SCACognacWebViewProcessTerminated getFieldNumberToFieldDict] */

void FUN_10ba15770(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba15794; end: 10ba157cb; -[SCACognacWebViewProcessTerminated addToProtoDictionary] */

void FUN_10ba15794(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba157cc; end: 10ba15823; -[SCACognacWebViewProcessTerminated toProtoWithAllowedFields:] */

void FUN_10ba157cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba15824; end: 10ba1582b; -[SCACognacWebViewProcessTerminated getPayloadIdentifier] */

undefined8 FUN_10ba15824(void)

{
  return 0xe63;
}



/* Entry: 10ba1582c; end: 10ba15837; -[SCAGameLeaderboardEventBase getEventName] */

undefined ** FUN_10ba1582c(void)

{
  return &PTR____CFConstantStringClassReference_110fc0b38;
}



/* Entry: 10ba15838; end: 10ba1583f; -[SCAGameLeaderboardEventBase getEventQoS] */

undefined8 FUN_10ba15838(void)

{
  return 1;
}



/* Entry: 10ba15840; end: 10ba15893; -[SCAGameLeaderboardEventBase setFriendRank:] */

void FUN_10ba15840(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc0b58,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba15894; end: 10ba158e7; -[SCAGameLeaderboardEventBase setGlobalRank:] */

void FUN_10ba15894(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc0b78,7,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba158e8; end: 10ba158ff; -[SCAGameLeaderboardEventBase setLeaderboardId:] */

void FUN_10ba158e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc0b98,10,param_3,0);
  return;
}



/* Entry: 10ba15900; end: 10ba1597f; -[SCAGameLeaderboardEventBase setLeaderboardSourceType:] */

void FUN_10ba15900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba0c5c4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fc0bb8,0xb,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba15980; end: 10ba159a3; -[SCAGameLeaderboardEventBase getFieldNumberToFieldDict] */

void FUN_10ba15980(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba159a4; end: 10ba159db; -[SCAGameLeaderboardEventBase addToProtoDictionary] */

void FUN_10ba159a4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba159dc; end: 10ba15a33; -[SCAGameLeaderboardEventBase toProtoWithAllowedFields:] */

void FUN_10ba159dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba15a34; end: 10ba15a3b; -[SCAGameLeaderboardEventBase getPayloadIdentifier] */

undefined8 FUN_10ba15a34(void)

{
  return 0x419;
}



/* Entry: 10ba15a3c; end: 10ba15a47; -[SCAGameLeaderboardSessionEnd getEventName] */

undefined ** FUN_10ba15a3c(void)

{
  return &PTR____CFConstantStringClassReference_110fc0bd8;
}



/* Entry: 10ba15a48; end: 10ba15a4f; -[SCAGameLeaderboardSessionEnd getEventQoS] */

undefined8 FUN_10ba15a48(void)

{
  return 1;
}



/* Entry: 10ba15a50; end: 10ba15aa3; -[SCAGameLeaderboardSessionEnd setDidScroll:] */

void FUN_10ba15a50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc0bf8,5,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba15aa4; end: 10ba15af7; -[SCAGameLeaderboardSessionEnd setTimeSpentSecs:] */

void FUN_10ba15aa4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc0c18,0xd,puVar1,2)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba15af8; end: 10ba15b4b; -[SCAGameLeaderboardSessionEnd setTotalScores:] */

void FUN_10ba15af8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc0c38,0xe,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba15b4c; end: 10ba15b9f; -[SCAGameLeaderboardSessionEnd setTotalScoresViewed:] */

void FUN_10ba15b4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc0c58,0xf,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba15ba0; end: 10ba15bc3; -[SCAGameLeaderboardSessionEnd getFieldNumberToFieldDict] */

void FUN_10ba15ba0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba15bc4; end: 10ba15bfb; -[SCAGameLeaderboardSessionEnd addToProtoDictionary] */

void FUN_10ba15bc4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba15bfc; end: 10ba15c53; -[SCAGameLeaderboardSessionEnd toProtoWithAllowedFields:] */

void FUN_10ba15bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba15c54; end: 10ba15c5b; -[SCAGameLeaderboardSessionEnd getPayloadIdentifier] */

undefined8 FUN_10ba15c54(void)

{
  return 0x41a;
}



/* Entry: 10ba15c5c; end: 10ba15c67; -[SCAGameLeaderboardSessionStart getEventName] */

undefined ** FUN_10ba15c5c(void)

{
  return &PTR____CFConstantStringClassReference_110fc0c78;
}



/* Entry: 10ba15c68; end: 10ba15c6f; -[SCAGameLeaderboardSessionStart getEventQoS] */

undefined8 FUN_10ba15c68(void)

{
  return 1;
}



/* Entry: 10ba15c70; end: 10ba15c93; -[SCAGameLeaderboardSessionStart getFieldNumberToFieldDict] */

void FUN_10ba15c70(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba15c94; end: 10ba15ccb; -[SCAGameLeaderboardSessionStart addToProtoDictionary] */

void FUN_10ba15c94(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba15ccc; end: 10ba15d23; -[SCAGameLeaderboardSessionStart toProtoWithAllowedFields:] */

void FUN_10ba15ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba15d24; end: 10ba15d2b; -[SCAGameLeaderboardSessionStart getPayloadIdentifier] */

undefined8 FUN_10ba15d24(void)

{
  return 0x41b;
}



/* Entry: 10ba15d2c; end: 10ba15d37; -[SCAGameLoadingScreenDisplayed getEventName] */

undefined ** FUN_10ba15d2c(void)

{
  return &PTR____CFConstantStringClassReference_110fc0c98;
}



/* Entry: 10ba15d38; end: 10ba15d3f; -[SCAGameLoadingScreenDisplayed getEventQoS] */

undefined8 FUN_10ba15d38(void)

{
  return 1;
}



/* Entry: 10ba15d40; end: 10ba15d93; -[SCAGameLoadingScreenDisplayed setDisplayTime:] */

void FUN_10ba15d40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc0cb8,5,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba15d94; end: 10ba15e13; -[SCAGameLoadingScreenDisplayed setMediaType:] */

void FUN_10ba15d94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc90ccc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110db9478,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba15e14; end: 10ba15e93; -[SCAGameLoadingScreenDisplayed setSource:] */

void FUN_10ba15e14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31264(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba15e94; end: 10ba15ee7; -[SCAGameLoadingScreenDisplayed setSuccess:] */

void FUN_10ba15e94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,9,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba15ee8; end: 10ba15f0b; -[SCAGameLoadingScreenDisplayed getFieldNumberToFieldDict] */

void FUN_10ba15ee8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba15f0c; end: 10ba15f43; -[SCAGameLoadingScreenDisplayed addToProtoDictionary] */

void FUN_10ba15f0c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba15f44; end: 10ba15f9b; -[SCAGameLoadingScreenDisplayed toProtoWithAllowedFields:] */

void FUN_10ba15f44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba15f9c; end: 10ba15fa3; -[SCAGameLoadingScreenDisplayed getPayloadIdentifier] */

undefined8 FUN_10ba15f9c(void)

{
  return 0x41e;
}



/* Entry: 10ba15fa4; end: 10ba15faf; -[SCAGameNotificationMute getEventName] */

undefined ** FUN_10ba15fa4(void)

{
  return &PTR____CFConstantStringClassReference_110fc0cd8;
}



/* Entry: 10ba15fb0; end: 10ba15fb7; -[SCAGameNotificationMute getEventQoS] */

undefined8 FUN_10ba15fb0(void)

{
  return 1;
}



/* Entry: 10ba15fb8; end: 10ba15fc3; -[SCAGameNotificationMute getPerUserSamplingRateV2] */

undefined8 FUN_10ba15fb8(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba15fc4; end: 10ba16043; -[SCAGameNotificationMute setAction:] */

void FUN_10ba15fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb03f6c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba16044; end: 10ba16097; -[SCAGameNotificationMute setIsGroup:] */

void FUN_10ba16044(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e204d8,3,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba16098; end: 10ba160eb; -[SCAGameNotificationMute setSuccess:] */

void FUN_10ba16098(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba160ec; end: 10ba160ef; -[SCAGameNotificationMute getFieldNumberToFieldDict] */

void FUN_10ba160ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba160f0; end: 10ba160fb; -[SCAGameNotificationMute toProtoWithAllowedFields:] */

void FUN_10ba160f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba160fc; end: 10ba16103; -[SCAGameNotificationMute getPayloadIdentifier] */

undefined8 FUN_10ba160fc(void)

{
  return 0x41f;
}



/* Entry: 10ba16104; end: 10ba1610f; -[SCAGameSnippetEventBase getEventName] */

undefined ** FUN_10ba16104(void)

{
  return &PTR____CFConstantStringClassReference_110fc0cf8;
}



/* Entry: 10ba16110; end: 10ba16117; -[SCAGameSnippetEventBase getEventQoS] */

undefined8 FUN_10ba16110(void)

{
  return 1;
}



/* Entry: 10ba16118; end: 10ba1615f; -[SCAGameSnippetEventBase setCognacMetadata:] */

void FUN_10ba16118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbf398,3,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba16160; end: 10ba16177; -[SCAGameSnippetEventBase setSnippetIds:] */

void FUN_10ba16160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc0d18,5,param_3,0);
  return;
}



/* Entry: 10ba16178; end: 10ba161f7; -[SCAGameSnippetEventBase setAssetType:] */

void FUN_10ba16178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba0c45c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e60938,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba161f8; end: 10ba162b7; -[SCAGameSnippetEventBase prepareDictionary:] */

void FUN_10ba161f8(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_38 = PTR_PTR_11270c3f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10ba162b8; end: 10ba162db; -[SCAGameSnippetEventBase getFieldNumberToFieldDict] */

void FUN_10ba162b8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba162dc; end: 10ba16313; -[SCAGameSnippetEventBase addToProtoDictionary] */

void FUN_10ba162dc(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba16314; end: 10ba1636b; -[SCAGameSnippetEventBase toProtoWithAllowedFields:] */

void FUN_10ba16314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba1636c; end: 10ba16373; -[SCAGameSnippetEventBase getPayloadIdentifier] */

undefined8 FUN_10ba1636c(void)

{
  return 0x420;
}



/* Entry: 10ba16374; end: 10ba1637f; -[SCAGameSnippetSendAttempt getEventName] */

undefined ** FUN_10ba16374(void)

{
  return &PTR____CFConstantStringClassReference_110fc0d38;
}



/* Entry: 10ba16380; end: 10ba16387; -[SCAGameSnippetSendAttempt getEventQoS] */

undefined8 FUN_10ba16380(void)

{
  return 1;
}



/* Entry: 10ba16388; end: 10ba163ab; -[SCAGameSnippetSendAttempt getFieldNumberToFieldDict] */

void FUN_10ba16388(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba163ac; end: 10ba163e3; -[SCAGameSnippetSendAttempt addToProtoDictionary] */

void FUN_10ba163ac(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba163e4; end: 10ba1643b; -[SCAGameSnippetSendAttempt toProtoWithAllowedFields:] */

void FUN_10ba163e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba1643c; end: 10ba16443; -[SCAGameSnippetSendAttempt getPayloadIdentifier] */

undefined8 FUN_10ba1643c(void)

{
  return 0x421;
}



/* Entry: 10ba16444; end: 10ba1644f; -[SCAGameSnippetSendCamera getEventName] */

undefined ** FUN_10ba16444(void)

{
  return &PTR____CFConstantStringClassReference_110fc0d58;
}



/* Entry: 10ba16450; end: 10ba16457; -[SCAGameSnippetSendCamera getEventQoS] */

undefined8 FUN_10ba16450(void)

{
  return 1;
}



/* Entry: 10ba16458; end: 10ba1647b; -[SCAGameSnippetSendCamera getFieldNumberToFieldDict] */

void FUN_10ba16458(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba1647c; end: 10ba164b3; -[SCAGameSnippetSendCamera addToProtoDictionary] */

void FUN_10ba1647c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba164b4; end: 10ba1650b; -[SCAGameSnippetSendCamera toProtoWithAllowedFields:] */

void FUN_10ba164b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba1650c; end: 10ba16513; -[SCAGameSnippetSendCamera getPayloadIdentifier] */

undefined8 FUN_10ba1650c(void)

{
  return 0x422;
}



/* Entry: 10ba16514; end: 10ba1651f; -[SCAGameSnippetSendPreview getEventName] */

undefined ** FUN_10ba16514(void)

{
  return &PTR____CFConstantStringClassReference_110fc0d78;
}



/* Entry: 10ba16520; end: 10ba16527; -[SCAGameSnippetSendPreview getEventQoS] */

undefined8 FUN_10ba16520(void)

{
  return 1;
}



/* Entry: 10ba16528; end: 10ba1654b; -[SCAGameSnippetSendPreview getFieldNumberToFieldDict] */

void FUN_10ba16528(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba1654c; end: 10ba16583; -[SCAGameSnippetSendPreview addToProtoDictionary] */

void FUN_10ba1654c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba16584; end: 10ba165db; -[SCAGameSnippetSendPreview toProtoWithAllowedFields:] */

void FUN_10ba16584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba165dc; end: 10ba165e3; -[SCAGameSnippetSendPreview getPayloadIdentifier] */

undefined8 FUN_10ba165dc(void)

{
  return 0x423;
}



/* Entry: 10ba165e4; end: 10ba165ef; -[SCAGameSnippetSendPreviewSaved getEventName] */

undefined ** FUN_10ba165e4(void)

{
  return &PTR____CFConstantStringClassReference_110fc0d98;
}



/* Entry: 10ba165f0; end: 10ba165f7; -[SCAGameSnippetSendPreviewSaved getEventQoS] */

undefined8 FUN_10ba165f0(void)

{
  return 1;
}



/* Entry: 10ba165f8; end: 10ba1661b; -[SCAGameSnippetSendPreviewSaved getFieldNumberToFieldDict] */

void FUN_10ba165f8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba1661c; end: 10ba16653; -[SCAGameSnippetSendPreviewSaved addToProtoDictionary] */

void FUN_10ba1661c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba16654; end: 10ba166ab; -[SCAGameSnippetSendPreviewSaved toProtoWithAllowedFields:] */

void FUN_10ba16654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba166ac; end: 10ba166b3; -[SCAGameSnippetSendPreviewSaved getPayloadIdentifier] */

undefined8 FUN_10ba166ac(void)

{
  return 0x424;
}



/* Entry: 10ba166b4; end: 10ba166bf; -[SCAGameSnippetSendSendTo getEventName] */

undefined ** FUN_10ba166b4(void)

{
  return &PTR____CFConstantStringClassReference_110fc0db8;
}



/* Entry: 10ba166c0; end: 10ba166c7; -[SCAGameSnippetSendSendTo getEventQoS] */

undefined8 FUN_10ba166c0(void)

{
  return 1;
}



/* Entry: 10ba166c8; end: 10ba166eb; -[SCAGameSnippetSendSendTo getFieldNumberToFieldDict] */

void FUN_10ba166c8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba166ec; end: 10ba16723; -[SCAGameSnippetSendSendTo addToProtoDictionary] */

void FUN_10ba166ec(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


