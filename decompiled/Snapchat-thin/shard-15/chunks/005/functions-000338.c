/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba9301c; end: 10ba93023; -[SCAMapRemoveAllPlacesVisits getPayloadIdentifier] */

undefined8 FUN_10ba9301c(void)

{
  return 0x149e;
}



/* Entry: 10ba93024; end: 10ba9302f; -[SCAMapRemovePlaceVisit getEventName] */

undefined ** FUN_10ba93024(void)

{
  return &PTR____CFConstantStringClassReference_110fe1758;
}



/* Entry: 10ba93030; end: 10ba93037; -[SCAMapRemovePlaceVisit getEventQoS] */

undefined8 FUN_10ba93030(void)

{
  return 1;
}



/* Entry: 10ba93038; end: 10ba9304f; -[SCAMapRemovePlaceVisit setPlaceId:] */

void FUN_10ba93038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e32618,2,param_3,0);
  return;
}



/* Entry: 10ba93050; end: 10ba930cf; -[SCAMapRemovePlaceVisit setSource:] */

void FUN_10ba93050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31264(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba930d0; end: 10ba930d3; -[SCAMapRemovePlaceVisit getFieldNumberToFieldDict] */

void FUN_10ba930d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba930d4; end: 10ba930df; -[SCAMapRemovePlaceVisit toProtoWithAllowedFields:] */

void FUN_10ba930d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba930e0; end: 10ba930e7; -[SCAMapRemovePlaceVisit getPayloadIdentifier] */

undefined8 FUN_10ba930e0(void)

{
  return 0x149f;
}



/* Entry: 10ba930e8; end: 10ba930f3; -[SCAMapScreenshotCapture getEventName] */

undefined ** FUN_10ba930e8(void)

{
  return &PTR____CFConstantStringClassReference_110fe1778;
}



/* Entry: 10ba930f4; end: 10ba930fb; -[SCAMapScreenshotCapture getEventQoS] */

undefined8 FUN_10ba930f4(void)

{
  return 1;
}



/* Entry: 10ba930fc; end: 10ba9317b; -[SCAMapScreenshotCapture setAction:] */

void FUN_10ba930fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba9317c; end: 10ba931cf; -[SCAMapScreenshotCapture setMapSessionId:] */

void FUN_10ba9317c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110eb59b8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba931d0; end: 10ba93223; -[SCAMapScreenshotCapture setViewportFriendCount:] */

void FUN_10ba931d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe0a58,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba93224; end: 10ba93227; -[SCAMapScreenshotCapture getFieldNumberToFieldDict] */

void FUN_10ba93224(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba93228; end: 10ba93233; -[SCAMapScreenshotCapture toProtoWithAllowedFields:] */

void FUN_10ba93228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba93234; end: 10ba9323b; -[SCAMapScreenshotCapture getPayloadIdentifier] */

undefined8 FUN_10ba93234(void)

{
  return 0x553;
}



/* Entry: 10ba9323c; end: 10ba93247; -[SCAMapShareLocationChooseMoreTapped getEventName] */

undefined ** FUN_10ba9323c(void)

{
  return &PTR____CFConstantStringClassReference_110fe1798;
}



/* Entry: 10ba93248; end: 10ba9324f; -[SCAMapShareLocationChooseMoreTapped getEventQoS] */

undefined8 FUN_10ba93248(void)

{
  return 1;
}



/* Entry: 10ba93250; end: 10ba9325b; -[SCAMapShareLocationChooseMoreTapped getPerUserSamplingRateV2] */

undefined8 FUN_10ba93250(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba9325c; end: 10ba932af; -[SCAMapShareLocationChooseMoreTapped setDidTapChooseMore:] */

void FUN_10ba9325c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe17b8,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba932b0; end: 10ba93303; -[SCAMapShareLocationChooseMoreTapped setNumberOfFriendsChosen:] */

void FUN_10ba932b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe17d8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba93304; end: 10ba93383; -[SCAMapShareLocationChooseMoreTapped setSource:] */

void FUN_10ba93304(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31264(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba93384; end: 10ba93387; -[SCAMapShareLocationChooseMoreTapped getFieldNumberToFieldDict] */

void FUN_10ba93384(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba93388; end: 10ba93393; -[SCAMapShareLocationChooseMoreTapped toProtoWithAllowedFields:] */

void FUN_10ba93388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba93394; end: 10ba9339b; -[SCAMapShareLocationChooseMoreTapped getPayloadIdentifier] */

undefined8 FUN_10ba93394(void)

{
  return 0x554;
}



/* Entry: 10ba9339c; end: 10ba933a7; -[SCAMapShareLocationPromptAction getEventName] */

undefined ** FUN_10ba9339c(void)

{
  return &PTR____CFConstantStringClassReference_110fe17f8;
}



/* Entry: 10ba933a8; end: 10ba933af; -[SCAMapShareLocationPromptAction getEventQoS] */

undefined8 FUN_10ba933a8(void)

{
  return 1;
}



/* Entry: 10ba933b0; end: 10ba9342f; -[SCAMapShareLocationPromptAction setAction:] */

void FUN_10ba933b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba8c73c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba93430; end: 10ba934af; -[SCAMapShareLocationPromptAction setLocationSharingSetting:] */

void FUN_10ba93430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb00c50(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb1518,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba934b0; end: 10ba93503; -[SCAMapShareLocationPromptAction setMapBestFriendBitmojiDisplayCount:] */

void FUN_10ba934b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe1818,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba93504; end: 10ba93557; -[SCAMapShareLocationPromptAction setMapBestFriendCount:] */

void FUN_10ba93504(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe1058,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba93558; end: 10ba935ab; -[SCAMapShareLocationPromptAction setMapFriendCount:] */

void FUN_10ba93558(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe0a38,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba935ac; end: 10ba935ff; -[SCAMapShareLocationPromptAction setMapSessionId:] */

void FUN_10ba935ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110eb59b8,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba93600; end: 10ba9367f; -[SCAMapShareLocationPromptAction setPromptType:] */

void FUN_10ba93600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba8c71c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110f24d38,8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba93680; end: 10ba936d3; -[SCAMapShareLocationPromptAction setViewTimeSec:] */

void FUN_10ba93680(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fadb38,9,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba936d4; end: 10ba936d7; -[SCAMapShareLocationPromptAction getFieldNumberToFieldDict] */

void FUN_10ba936d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba936d8; end: 10ba936e3; -[SCAMapShareLocationPromptAction toProtoWithAllowedFields:] */

void FUN_10ba936d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba936e4; end: 10ba936eb; -[SCAMapShareLocationPromptAction getPayloadIdentifier] */

undefined8 FUN_10ba936e4(void)

{
  return 0x555;
}



/* Entry: 10ba936ec; end: 10ba936f7; -[SCAMapShareLocationPromptOpen getEventName] */

undefined ** FUN_10ba936ec(void)

{
  return &PTR____CFConstantStringClassReference_110fe1838;
}



/* Entry: 10ba936f8; end: 10ba936ff; -[SCAMapShareLocationPromptOpen getEventQoS] */

undefined8 FUN_10ba936f8(void)

{
  return 1;
}



/* Entry: 10ba93700; end: 10ba9377f; -[SCAMapShareLocationPromptOpen setLocationSharingSetting:] */

void FUN_10ba93700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb00c50(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb1518,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba93780; end: 10ba937d3; -[SCAMapShareLocationPromptOpen setMapBestFriendCount:] */

void FUN_10ba93780(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe1058,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba937d4; end: 10ba93827; -[SCAMapShareLocationPromptOpen setMapFriendCount:] */

void FUN_10ba937d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe0a38,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba93828; end: 10ba9387b; -[SCAMapShareLocationPromptOpen setMapSessionId:] */

void FUN_10ba93828(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110eb59b8,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba9387c; end: 10ba938fb; -[SCAMapShareLocationPromptOpen setPromptType:] */

void FUN_10ba9387c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba8c71c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110f24d38,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba938fc; end: 10ba938ff; -[SCAMapShareLocationPromptOpen getFieldNumberToFieldDict] */

void FUN_10ba938fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba93900; end: 10ba9390b; -[SCAMapShareLocationPromptOpen toProtoWithAllowedFields:] */

void FUN_10ba93900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba9390c; end: 10ba93913; -[SCAMapShareLocationPromptOpen getPayloadIdentifier] */

undefined8 FUN_10ba9390c(void)

{
  return 0x556;
}



/* Entry: 10ba93914; end: 10ba9391f; -[SCAMapShareLocationTapped getEventName] */

undefined ** FUN_10ba93914(void)

{
  return &PTR____CFConstantStringClassReference_110fe1858;
}



/* Entry: 10ba93920; end: 10ba93927; -[SCAMapShareLocationTapped getEventQoS] */

undefined8 FUN_10ba93920(void)

{
  return 1;
}



/* Entry: 10ba93928; end: 10ba9397b; -[SCAMapShareLocationTapped setIsMischief:] */

void FUN_10ba93928(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe1878,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba9397c; end: 10ba939cf; -[SCAMapShareLocationTapped setIsSuccess:] */

void FUN_10ba9397c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fabe38,3,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba939d0; end: 10ba939e7; -[SCAMapShareLocationTapped setResultSharingAudience:] */

void FUN_10ba939d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe1898,4,param_3,0);
  return;
}



/* Entry: 10ba939e8; end: 10ba939ff; -[SCAMapShareLocationTapped setShareDialogType:] */

void FUN_10ba939e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe18b8,5,param_3,0);
  return;
}



/* Entry: 10ba93a00; end: 10ba93a7f; -[SCAMapShareLocationTapped setSource:] */

void FUN_10ba93a00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba93a80; end: 10ba93a83; -[SCAMapShareLocationTapped getFieldNumberToFieldDict] */

void FUN_10ba93a80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba93a84; end: 10ba93a8f; -[SCAMapShareLocationTapped toProtoWithAllowedFields:] */

void FUN_10ba93a84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba93a90; end: 10ba93a97; -[SCAMapShareLocationTapped getPayloadIdentifier] */

undefined8 FUN_10ba93a90(void)

{
  return 0x559;
}



/* Entry: 10ba93a98; end: 10ba93aa3; -[SCAMapShareRequestLocationResponse getEventName] */

undefined ** FUN_10ba93a98(void)

{
  return &PTR____CFConstantStringClassReference_110fe18d8;
}



/* Entry: 10ba93aa4; end: 10ba93aab; -[SCAMapShareRequestLocationResponse getEventQoS] */

undefined8 FUN_10ba93aa4(void)

{
  return 2;
}



/* Entry: 10ba93aac; end: 10ba93ab7; -[SCAMapShareRequestLocationResponse getPerUserSamplingRate] */

undefined8 FUN_10ba93aac(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba93ab8; end: 10ba93ac3; -[SCAMapShareRequestLocationResponse getPerUserSamplingRateV2] */

undefined8 FUN_10ba93ab8(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba93ac4; end: 10ba93b17; -[SCAMapShareRequestLocationResponse setDidShareBack:] */

void FUN_10ba93ac4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe18f8,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba93b18; end: 10ba93b2f; -[SCAMapShareRequestLocationResponse setShareMessageType:] */

void FUN_10ba93b18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe1918,3,param_3,0);
  return;
}



/* Entry: 10ba93b30; end: 10ba93b33; -[SCAMapShareRequestLocationResponse getFieldNumberToFieldDict] */

void FUN_10ba93b30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba93b34; end: 10ba93b3f; -[SCAMapShareRequestLocationResponse toProtoWithAllowedFields:] */

void FUN_10ba93b34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba93b40; end: 10ba93b47; -[SCAMapShareRequestLocationResponse getPayloadIdentifier] */

undefined8 FUN_10ba93b40(void)

{
  return 0x55a;
}



/* Entry: 10ba93b48; end: 10ba93b53; -[SCAMapShareRequestLocationSeen getEventName] */

undefined ** FUN_10ba93b48(void)

{
  return &PTR____CFConstantStringClassReference_110fe1938;
}



/* Entry: 10ba93b54; end: 10ba93b5b; -[SCAMapShareRequestLocationSeen getEventQoS] */

undefined8 FUN_10ba93b54(void)

{
  return 2;
}



/* Entry: 10ba93b5c; end: 10ba93b67; -[SCAMapShareRequestLocationSeen getPerUserSamplingRate] */

undefined8 FUN_10ba93b5c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba93b68; end: 10ba93b73; -[SCAMapShareRequestLocationSeen getPerUserSamplingRateV2] */

undefined8 FUN_10ba93b68(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba93b74; end: 10ba93bc7; -[SCAMapShareRequestLocationSeen setCanShareBack:] */

void FUN_10ba93b74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe1958,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba93bc8; end: 10ba93bdf; -[SCAMapShareRequestLocationSeen setShareMessageType:] */

void FUN_10ba93bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe1918,3,param_3,0);
  return;
}



/* Entry: 10ba93be0; end: 10ba93c33; -[SCAMapShareRequestLocationSeen setWasAlreadySharing:] */

void FUN_10ba93be0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe1978,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba93c34; end: 10ba93c37; -[SCAMapShareRequestLocationSeen getFieldNumberToFieldDict] */

void FUN_10ba93c34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba93c38; end: 10ba93c43; -[SCAMapShareRequestLocationSeen toProtoWithAllowedFields:] */

void FUN_10ba93c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba93c44; end: 10ba93c4b; -[SCAMapShareRequestLocationSeen getPayloadIdentifier] */

undefined8 FUN_10ba93c44(void)

{
  return 0x55b;
}



/* Entry: 10ba93c4c; end: 10ba93c57; -[SCAMapShareRequestLocationShown getEventName] */

undefined ** FUN_10ba93c4c(void)

{
  return &PTR____CFConstantStringClassReference_110fe1998;
}



/* Entry: 10ba93c58; end: 10ba93c5f; -[SCAMapShareRequestLocationShown getEventQoS] */

undefined8 FUN_10ba93c58(void)

{
  return 2;
}



/* Entry: 10ba93c60; end: 10ba93c6b; -[SCAMapShareRequestLocationShown getPerUserSamplingRate] */

undefined8 FUN_10ba93c60(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba93c6c; end: 10ba93c77; -[SCAMapShareRequestLocationShown getPerUserSamplingRateV2] */

undefined8 FUN_10ba93c6c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba93c78; end: 10ba93ccb; -[SCAMapShareRequestLocationShown setIsMischief:] */

void FUN_10ba93c78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe1878,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba93ccc; end: 10ba93ce3; -[SCAMapShareRequestLocationShown setShareMessageType:] */

void FUN_10ba93ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe1918,3,param_3,0);
  return;
}



/* Entry: 10ba93ce4; end: 10ba93d63; -[SCAMapShareRequestLocationShown setSource:] */

void FUN_10ba93ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31264(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba93d64; end: 10ba93d67; -[SCAMapShareRequestLocationShown getFieldNumberToFieldDict] */

void FUN_10ba93d64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba93d68; end: 10ba93d73; -[SCAMapShareRequestLocationShown toProtoWithAllowedFields:] */

void FUN_10ba93d68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba93d74; end: 10ba93d7b; -[SCAMapShareRequestLocationShown getPayloadIdentifier] */

undefined8 FUN_10ba93d74(void)

{
  return 0x55c;
}



/* Entry: 10ba93d7c; end: 10ba93d87; -[SCAMapStatusClose getEventName] */

undefined ** FUN_10ba93d7c(void)

{
  return &PTR____CFConstantStringClassReference_110fe19b8;
}



/* Entry: 10ba93d88; end: 10ba93d8f; -[SCAMapStatusClose getEventQoS] */

undefined8 FUN_10ba93d88(void)

{
  return 1;
}



/* Entry: 10ba93d90; end: 10ba93de3; -[SCAMapStatusClose setCurrentStatusCount:] */

void FUN_10ba93d90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe19d8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba93de4; end: 10ba93e37; -[SCAMapStatusClose setMapSessionId:] */

void FUN_10ba93de4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110eb59b8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba93e38; end: 10ba93e8b; -[SCAMapStatusClose setStatusOptionsCount:] */

void FUN_10ba93e38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe19f8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba93e8c; end: 10ba93edf; -[SCAMapStatusClose setStatusSessionId:] */

void FUN_10ba93e8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe0ab8,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba93ee0; end: 10ba93f33; -[SCAMapStatusClose setViewTimeSec:] */

void FUN_10ba93ee0(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10ba93f34; end: 10ba93f4b; -[SCAMapStatusClose setActionmojiStickerId:] */

void FUN_10ba93f34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe1a18,7,param_3,0);
  return;
}



/* Entry: 10ba93f4c; end: 10ba93f9f; -[SCAMapStatusClose setNumBrowseActions:] */

void FUN_10ba93f4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe1a38,8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba93fa0; end: 10ba93ff3; -[SCAMapStatusClose setZoomLevel:] */

void FUN_10ba93fa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbe198,9,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba93ff4; end: 10ba9400b; -[SCAMapStatusClose setCarId:] */

void FUN_10ba93ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe1a58,10,param_3,0);
  return;
}



/* Entry: 10ba9400c; end: 10ba94023; -[SCAMapStatusClose setPetId:] */

void FUN_10ba9400c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe1a78,0xb,param_3,0);
  return;
}



/* Entry: 10ba94024; end: 10ba9406b; -[SCAMapStatusClose setHomeGridIndex:] */

void FUN_10ba94024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe1a98,0xc,param_3,
                      0xb);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


