/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba83b9c; end: 10ba83c1b; -[SCAIlcLensCustomizationSet setType:] */

void FUN_10ba83b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bafea40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dad058,10,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba83c1c; end: 10ba83c3f; -[SCAIlcLensCustomizationSet getFieldNumberToFieldDict] */

void FUN_10ba83c1c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba83c40; end: 10ba83c77; -[SCAIlcLensCustomizationSet addToProtoDictionary] */

void FUN_10ba83c40(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba83c78; end: 10ba83ccf; -[SCAIlcLensCustomizationSet toProtoWithAllowedFields:] */

void FUN_10ba83c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba83cd0; end: 10ba83cd7; -[SCAIlcLensCustomizationSet getPayloadIdentifier] */

undefined8 FUN_10ba83cd0(void)

{
  return 0x1368;
}



/* Entry: 10ba83cd8; end: 10ba83ce3; -[SCAIlcLensCustomizationUnlocked getEventName] */

undefined ** FUN_10ba83cd8(void)

{
  return &PTR____CFConstantStringClassReference_110fddaf8;
}



/* Entry: 10ba83ce4; end: 10ba83ceb; -[SCAIlcLensCustomizationUnlocked getEventQoS] */

undefined8 FUN_10ba83ce4(void)

{
  return 1;
}



/* Entry: 10ba83cec; end: 10ba83d03; -[SCAIlcLensCustomizationUnlocked setCustomizationId:] */

void FUN_10ba83cec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110eb5d98,2,param_3,0);
  return;
}



/* Entry: 10ba83d04; end: 10ba83d83; -[SCAIlcLensCustomizationUnlocked setLensSource:] */

void FUN_10ba83d04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb000e4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110f557f8,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba83d84; end: 10ba83dd7; -[SCAIlcLensCustomizationUnlocked setFriendMentionCount:] */

void FUN_10ba83d84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fddb18,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba83dd8; end: 10ba83dfb; -[SCAIlcLensCustomizationUnlocked getFieldNumberToFieldDict] */

void FUN_10ba83dd8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba83dfc; end: 10ba83e33; -[SCAIlcLensCustomizationUnlocked addToProtoDictionary] */

void FUN_10ba83dfc(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba83e34; end: 10ba83e8b; -[SCAIlcLensCustomizationUnlocked toProtoWithAllowedFields:] */

void FUN_10ba83e34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba83e8c; end: 10ba83e93; -[SCAIlcLensCustomizationUnlocked getPayloadIdentifier] */

undefined8 FUN_10ba83e8c(void)

{
  return 0x1369;
}



/* Entry: 10ba83e94; end: 10ba83e9f; -[SCALeaderboardOptInUpdate getEventName] */

undefined ** FUN_10ba83e94(void)

{
  return &PTR____CFConstantStringClassReference_110fddb38;
}



/* Entry: 10ba83ea0; end: 10ba83ea7; -[SCALeaderboardOptInUpdate getEventQoS] */

undefined8 FUN_10ba83ea0(void)

{
  return 1;
}



/* Entry: 10ba83ea8; end: 10ba83eb3; -[SCALeaderboardOptInUpdate getPerUserSamplingRateV2] */

undefined8 FUN_10ba83ea8(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba83eb4; end: 10ba83f07; -[SCALeaderboardOptInUpdate setIsInitial:] */

void FUN_10ba83eb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fddb58,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba83f08; end: 10ba83f87; -[SCALeaderboardOptInUpdate setMethod:] */

void FUN_10ba83f08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7e840(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dc1798,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba83f88; end: 10ba83fdb; -[SCALeaderboardOptInUpdate setOptedIn:] */

void FUN_10ba83f88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fddb78,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba83fdc; end: 10ba8402f; -[SCALeaderboardOptInUpdate setPromptedTsMicros:] */

void FUN_10ba83fdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fddb98,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba84030; end: 10ba84047; -[SCALeaderboardOptInUpdate setReason:] */

void FUN_10ba84030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daf558,6,param_3,0);
  return;
}



/* Entry: 10ba84048; end: 10ba8409b; -[SCALeaderboardOptInUpdate setResultTsMicros:] */

void FUN_10ba84048(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fddbb8,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8409c; end: 10ba840b3; -[SCALeaderboardOptInUpdate setScoreSubmitId:] */

void FUN_10ba8409c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fddbd8,8,param_3,0);
  return;
}



/* Entry: 10ba840b4; end: 10ba84107; -[SCALeaderboardOptInUpdate setSubmitTsMicros:] */

void FUN_10ba840b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fddbf8,9,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba84108; end: 10ba8415b; -[SCALeaderboardOptInUpdate setSuccess:] */

void FUN_10ba84108(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,10,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8415c; end: 10ba84173; -[SCALeaderboardOptInUpdate setLensId:] */

void FUN_10ba8415c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110db19f8,0xb,param_3,0);
  return;
}



/* Entry: 10ba84174; end: 10ba84177; -[SCALeaderboardOptInUpdate getFieldNumberToFieldDict] */

void FUN_10ba84174(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba84178; end: 10ba84183; -[SCALeaderboardOptInUpdate toProtoWithAllowedFields:] */

void FUN_10ba84178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10ba84184; end: 10ba8418b; -[SCALeaderboardOptInUpdate getPayloadIdentifier] */

undefined8 FUN_10ba84184(void)

{
  return 0x176b;
}



/* Entry: 10ba8418c; end: 10ba84197; -[SCALeaderboardScoreSubmit getEventName] */

undefined ** FUN_10ba8418c(void)

{
  return &PTR____CFConstantStringClassReference_110fddc18;
}



/* Entry: 10ba84198; end: 10ba8419f; -[SCALeaderboardScoreSubmit getEventQoS] */

undefined8 FUN_10ba84198(void)

{
  return 1;
}



/* Entry: 10ba841a0; end: 10ba841ab; -[SCALeaderboardScoreSubmit getPerUserSamplingRateV2] */

undefined8 FUN_10ba841a0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba841ac; end: 10ba841c3; -[SCALeaderboardScoreSubmit setLensApplySessionId:] */

void FUN_10ba841ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fddc38,3,param_3,0);
  return;
}



/* Entry: 10ba841c4; end: 10ba841db; -[SCALeaderboardScoreSubmit setLensId:] */

void FUN_10ba841c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110db19f8,4,param_3,0);
  return;
}



/* Entry: 10ba841dc; end: 10ba8425b; -[SCALeaderboardScoreSubmit setLensSource:] */

void FUN_10ba841dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb000e4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110f557f8,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8425c; end: 10ba842db; -[SCALeaderboardScoreSubmit setMethod:] */

void FUN_10ba8425c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10ba7e950(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dc1798,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba842dc; end: 10ba842f3; -[SCALeaderboardScoreSubmit setReason:] */

void FUN_10ba842dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daf558,7,param_3,0);
  return;
}



/* Entry: 10ba842f4; end: 10ba84347; -[SCALeaderboardScoreSubmit setResultTsMicros:] */

void FUN_10ba842f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fddbb8,8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba84348; end: 10ba843c7; -[SCALeaderboardScoreSubmit setScoreDiff:] */

void FUN_10ba84348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7effc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fddc58,9,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba843c8; end: 10ba843df; -[SCALeaderboardScoreSubmit setScoreSubmitId:] */

void FUN_10ba843c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fddbd8,10,param_3,0);
  return;
}



/* Entry: 10ba843e0; end: 10ba8445f; -[SCALeaderboardScoreSubmit setSource:] */

void FUN_10ba843e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c311ec(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,0xb,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba84460; end: 10ba844b3; -[SCALeaderboardScoreSubmit setSubmitRequestedTsMicros:] */

void FUN_10ba84460(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fddc78,0xc,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba844b4; end: 10ba84507; -[SCALeaderboardScoreSubmit setSuccess:] */

void FUN_10ba844b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,0xd,puVar1,1)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba84508; end: 10ba8455b; -[SCALeaderboardScoreSubmit setWasOptedIn:] */

void FUN_10ba84508(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fddc98,0xe,puVar1,1)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8455c; end: 10ba84573; -[SCALeaderboardScoreSubmit setLeaderboardId:] */

void FUN_10ba8455c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc0b98,0xf,param_3,0);
  return;
}



/* Entry: 10ba84574; end: 10ba84577; -[SCALeaderboardScoreSubmit getFieldNumberToFieldDict] */

void FUN_10ba84574(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba84578; end: 10ba84583; -[SCALeaderboardScoreSubmit toProtoWithAllowedFields:] */

void FUN_10ba84578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10ba84584; end: 10ba8458b; -[SCALeaderboardScoreSubmit getPayloadIdentifier] */

undefined8 FUN_10ba84584(void)

{
  return 0x176c;
}



/* Entry: 10ba8458c; end: 10ba84607; -[SCALensAnalyticsEventBase setEventType:] */

void FUN_10ba8458c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7e9f8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_110e795d8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba84608; end: 10ba8461b; -[SCALensAnalyticsEventBase setLensId:] */

void FUN_10ba84608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110db19f8,param_3,0);
  return;
}



/* Entry: 10ba8461c; end: 10ba8466b; -[SCALensAnalyticsEventBase setTotalCount:] */

void FUN_10ba8461c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fd9bd8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8466c; end: 10ba84677; -[SCALensAnalyticsStandardEvent getEventName] */

undefined ** FUN_10ba8466c(void)

{
  return &PTR____CFConstantStringClassReference_110fddcb8;
}



/* Entry: 10ba84678; end: 10ba8467f; -[SCALensAnalyticsStandardEvent getEventQoS] */

undefined8 FUN_10ba84678(void)

{
  return 1;
}



/* Entry: 10ba84680; end: 10ba8468b; -[SCALensAnalyticsStandardEvent getPerUserSamplingRateV2] */

undefined8 FUN_10ba84680(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba8468c; end: 10ba846af; -[SCALensAnalyticsStandardEvent getFieldNumberToFieldDict] */

void FUN_10ba8468c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba846b0; end: 10ba846e7; -[SCALensAnalyticsStandardEvent addToProtoDictionary] */

void FUN_10ba846b0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba846e8; end: 10ba8473f; -[SCALensAnalyticsStandardEvent toProtoWithAllowedFields:] */

void FUN_10ba846e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba84740; end: 10ba84747; -[SCALensAnalyticsStandardEvent getPayloadIdentifier] */

undefined8 FUN_10ba84740(void)

{
  return 0xdf4;
}



/* Entry: 10ba84748; end: 10ba84753; -[SCALensButtonBadgeShown getEventName] */

undefined ** FUN_10ba84748(void)

{
  return &PTR____CFConstantStringClassReference_110fddcd8;
}



/* Entry: 10ba84754; end: 10ba8475b; -[SCALensButtonBadgeShown getEventQoS] */

undefined8 FUN_10ba84754(void)

{
  return 2;
}



/* Entry: 10ba8475c; end: 10ba84767; -[SCALensButtonBadgeShown getPerUserSamplingRate] */

undefined8 FUN_10ba8475c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba84768; end: 10ba84773; -[SCALensButtonBadgeShown getPerUserSamplingRateV2] */

undefined8 FUN_10ba84768(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba84774; end: 10ba84777; -[SCALensButtonBadgeShown getFieldNumberToFieldDict] */

void FUN_10ba84774(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba84778; end: 10ba84783; -[SCALensButtonBadgeShown toProtoWithAllowedFields:] */

void FUN_10ba84778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,0,param_3);
  return;
}



/* Entry: 10ba84784; end: 10ba8478b; -[SCALensButtonBadgeShown getPayloadIdentifier] */

undefined8 FUN_10ba84784(void)

{
  return 0x4b6;
}



/* Entry: 10ba8478c; end: 10ba84797; -[SCALensButtonShown getEventName] */

undefined ** FUN_10ba8478c(void)

{
  return &PTR____CFConstantStringClassReference_110fddcf8;
}



/* Entry: 10ba84798; end: 10ba8479f; -[SCALensButtonShown getEventQoS] */

undefined8 FUN_10ba84798(void)

{
  return 2;
}



/* Entry: 10ba847a0; end: 10ba847ab; -[SCALensButtonShown getPerUserSamplingRate] */

undefined8 FUN_10ba847a0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba847ac; end: 10ba847b7; -[SCALensButtonShown getPerUserSamplingRateV2] */

undefined8 FUN_10ba847ac(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba847b8; end: 10ba84837; -[SCALensButtonShown setButtonType:] */

void FUN_10ba847b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7ed04(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfdd8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba84838; end: 10ba848b7; -[SCALensButtonShown setCameraType:] */

void FUN_10ba84838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10ba7ece4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110f4bd58,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba848b8; end: 10ba848cf; -[SCALensButtonShown setFilterLensId:] */

void FUN_10ba848b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110eb5d58,4,param_3,0);
  return;
}



/* Entry: 10ba848d0; end: 10ba848d3; -[SCALensButtonShown getFieldNumberToFieldDict] */

void FUN_10ba848d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba848d4; end: 10ba848df; -[SCALensButtonShown toProtoWithAllowedFields:] */

void FUN_10ba848d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba848e0; end: 10ba848e7; -[SCALensButtonShown getPayloadIdentifier] */

undefined8 FUN_10ba848e0(void)

{
  return 0x4b9;
}



/* Entry: 10ba848e8; end: 10ba848f3; -[SCALensButtonTapped getEventName] */

undefined ** FUN_10ba848e8(void)

{
  return &PTR____CFConstantStringClassReference_110fddd18;
}



/* Entry: 10ba848f4; end: 10ba848fb; -[SCALensButtonTapped getEventQoS] */

undefined8 FUN_10ba848f4(void)

{
  return 1;
}



/* Entry: 10ba848fc; end: 10ba84907; -[SCALensButtonTapped getPerUserSamplingRateV2] */

undefined8 FUN_10ba848fc(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba84908; end: 10ba84987; -[SCALensButtonTapped setButtonType:] */

void FUN_10ba84908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7ed04(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfdd8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba84988; end: 10ba84a07; -[SCALensButtonTapped setCameraType:] */

void FUN_10ba84988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10ba7ece4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110f4bd58,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba84a08; end: 10ba84a1f; -[SCALensButtonTapped setFilterLensId:] */

void FUN_10ba84a08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110eb5d58,4,param_3,0);
  return;
}



/* Entry: 10ba84a20; end: 10ba84a23; -[SCALensButtonTapped getFieldNumberToFieldDict] */

void FUN_10ba84a20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba84a24; end: 10ba84a2f; -[SCALensButtonTapped toProtoWithAllowedFields:] */

void FUN_10ba84a24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba84a30; end: 10ba84a37; -[SCALensButtonTapped getPayloadIdentifier] */

undefined8 FUN_10ba84a30(void)

{
  return 0x4ba;
}



/* Entry: 10ba84a38; end: 10ba84a43; -[SCALensCameraFlip getEventName] */

undefined ** FUN_10ba84a38(void)

{
  return &PTR____CFConstantStringClassReference_110fddd38;
}



/* Entry: 10ba84a44; end: 10ba84a4b; -[SCALensCameraFlip getEventQoS] */

undefined8 FUN_10ba84a44(void)

{
  return 2;
}



/* Entry: 10ba84a4c; end: 10ba84a57; -[SCALensCameraFlip getPerUserSamplingRate] */

undefined8 FUN_10ba84a4c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba84a58; end: 10ba84a63; -[SCALensCameraFlip getPerUserSamplingRateV2] */

undefined8 FUN_10ba84a58(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba84a64; end: 10ba84a7b; -[SCALensCameraFlip setFilterLensId:] */

void FUN_10ba84a64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110eb5d58,4,param_3,0);
  return;
}



/* Entry: 10ba84a7c; end: 10ba84afb; -[SCALensCameraFlip setLensSource:] */

void FUN_10ba84a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb000e4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110f557f8,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba84afc; end: 10ba84b13; -[SCALensCameraFlip setSponsoredLensAdId:] */

void FUN_10ba84afc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbbc98,10,param_3,0);
  return;
}



/* Entry: 10ba84b14; end: 10ba84b93; -[SCALensCameraFlip setSponsoredType:] */

void FUN_10ba84b14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb13614(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fae338,0xb,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba84b94; end: 10ba84bb7; -[SCALensCameraFlip getFieldNumberToFieldDict] */

void FUN_10ba84b94(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba84bb8; end: 10ba84bef; -[SCALensCameraFlip addToProtoDictionary] */

void FUN_10ba84bb8(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba84bf0; end: 10ba84c47; -[SCALensCameraFlip toProtoWithAllowedFields:] */

void FUN_10ba84bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba84c48; end: 10ba84c4f; -[SCALensCameraFlip getPayloadIdentifier] */

undefined8 FUN_10ba84c48(void)

{
  return 0x4be;
}



/* Entry: 10ba84c50; end: 10ba84c63; -[SCALensCameraFlipBase setLensNamespace:] */

void FUN_10ba84c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110f55818,param_3,0);
  return;
}



/* Entry: 10ba84c64; end: 10ba84c77; -[SCALensCameraFlipBase setLensSessionId:] */

void FUN_10ba84c64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110fae358,param_3,0);
  return;
}



/* Entry: 10ba84c78; end: 10ba84c7b; -[SCALensCarouselActivationRequested getFieldNumberToFieldDict] */

void FUN_10ba84c78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}


