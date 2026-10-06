/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba8bb7c; end: 10ba8bb87; -[SCARemoteApiResponseSucceeded getEventName] */

undefined ** FUN_10ba8bb7c(void)

{
  return &PTR____CFConstantStringClassReference_110fdeeb8;
}



/* Entry: 10ba8bb88; end: 10ba8bb8f; -[SCARemoteApiResponseSucceeded getEventQoS] */

undefined8 FUN_10ba8bb88(void)

{
  return 2;
}



/* Entry: 10ba8bb90; end: 10ba8bb9b; -[SCARemoteApiResponseSucceeded getPerUserSamplingRate] */

undefined8 FUN_10ba8bb90(void)

{
  return 0x3fa999999999999a;
}



/* Entry: 10ba8bb9c; end: 10ba8bba7; -[SCARemoteApiResponseSucceeded getPerUserSamplingRateV2] */

undefined8 FUN_10ba8bb9c(void)

{
  return 0x3fa999999999999a;
}



/* Entry: 10ba8bba8; end: 10ba8bbbf; -[SCARemoteApiResponseSucceeded setApiSpecSetId:] */

void FUN_10ba8bba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fdee18,2,param_3,0);
  return;
}



/* Entry: 10ba8bbc0; end: 10ba8bbd7; -[SCARemoteApiResponseSucceeded setEndpointId:] */

void FUN_10ba8bbc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fdee38,3,param_3,0);
  return;
}



/* Entry: 10ba8bbd8; end: 10ba8bc2b; -[SCARemoteApiResponseSucceeded setResponseCode:] */

void FUN_10ba8bbd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fdeed8,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8bc2c; end: 10ba8bc7f; -[SCARemoteApiResponseSucceeded setLatencyMs:] */

void FUN_10ba8bc2c(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10ba8bc80; end: 10ba8bcff; -[SCARemoteApiResponseSucceeded setFeatureType:] */

void FUN_10ba8bc80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7efb8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fdee98,9,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8bd00; end: 10ba8bd23; -[SCARemoteApiResponseSucceeded getFieldNumberToFieldDict] */

void FUN_10ba8bd00(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8bd24; end: 10ba8bd5b; -[SCARemoteApiResponseSucceeded addToProtoDictionary] */

void FUN_10ba8bd24(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba8bd5c; end: 10ba8bdb3; -[SCARemoteApiResponseSucceeded toProtoWithAllowedFields:] */

void FUN_10ba8bd5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba8bdb4; end: 10ba8bdbb; -[SCARemoteApiResponseSucceeded getPayloadIdentifier] */

undefined8 FUN_10ba8bdb4(void)

{
  return 0xd2d;
}



/* Entry: 10ba8bdbc; end: 10ba8bdcf; -[SCASnappableEventBase setSnappableFunnelId:] */

void FUN_10ba8bdbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110fce298,param_3,0);
  return;
}



/* Entry: 10ba8bdd0; end: 10ba8bde3; -[SCASnappableEventBase setSnappableSessionId:] */

void FUN_10ba8bdd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110fdeef8,param_3,0);
  return;
}



/* Entry: 10ba8bde4; end: 10ba8be5f; -[SCASnappableEventBase setSourceType:] */

void FUN_10ba8bde4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7f0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2a38,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8be60; end: 10ba8be6b; -[SCASnappableInviteShown getEventName] */

undefined ** FUN_10ba8be60(void)

{
  return &PTR____CFConstantStringClassReference_110fdef18;
}



/* Entry: 10ba8be6c; end: 10ba8be73; -[SCASnappableInviteShown getEventQoS] */

undefined8 FUN_10ba8be6c(void)

{
  return 1;
}



/* Entry: 10ba8be74; end: 10ba8be7f; -[SCASnappableInviteShown getPerUserSamplingRateV2] */

undefined8 FUN_10ba8be74(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba8be80; end: 10ba8bed3; -[SCASnappableInviteShown setDurationMs:] */

void FUN_10ba8be80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dcffb8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8bed4; end: 10ba8bf53; -[SCASnappableInviteShown setSnappableInviteAction:] */

void FUN_10ba8bed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7f100(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dbde38,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8bf54; end: 10ba8bf77; -[SCASnappableInviteShown getFieldNumberToFieldDict] */

void FUN_10ba8bf54(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8bf78; end: 10ba8bfaf; -[SCASnappableInviteShown addToProtoDictionary] */

void FUN_10ba8bf78(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba8bfb0; end: 10ba8c007; -[SCASnappableInviteShown toProtoWithAllowedFields:] */

void FUN_10ba8bfb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba8c008; end: 10ba8c00f; -[SCASnappableInviteShown getPayloadIdentifier] */

undefined8 FUN_10ba8c008(void)

{
  return 0x820;
}



/* Entry: 10ba8c010; end: 10ba8c01b; -[SCASnappableInviteView getEventName] */

undefined ** FUN_10ba8c010(void)

{
  return &PTR____CFConstantStringClassReference_110fdef38;
}



/* Entry: 10ba8c01c; end: 10ba8c023; -[SCASnappableInviteView getEventQoS] */

undefined8 FUN_10ba8c01c(void)

{
  return 1;
}



/* Entry: 10ba8c024; end: 10ba8c02f; -[SCASnappableInviteView getPerUserSamplingRateV2] */

undefined8 FUN_10ba8c024(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba8c030; end: 10ba8c0af; -[SCASnappableInviteView setSnappableInviteAction:] */

void FUN_10ba8c030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb11f3c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dbde38,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8c0b0; end: 10ba8c0d3; -[SCASnappableInviteView getFieldNumberToFieldDict] */

void FUN_10ba8c0b0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8c0d4; end: 10ba8c10b; -[SCASnappableInviteView addToProtoDictionary] */

void FUN_10ba8c0d4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba8c10c; end: 10ba8c163; -[SCASnappableInviteView toProtoWithAllowedFields:] */

void FUN_10ba8c10c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba8c164; end: 10ba8c16b; -[SCASnappableInviteView getPayloadIdentifier] */

undefined8 FUN_10ba8c164(void)

{
  return 0x821;
}



/* Entry: 10ba8c16c; end: 10ba8c177; -[SCASnappableLensAction getEventName] */

undefined ** FUN_10ba8c16c(void)

{
  return &PTR____CFConstantStringClassReference_110fdef58;
}



/* Entry: 10ba8c178; end: 10ba8c17f; -[SCASnappableLensAction getEventQoS] */

undefined8 FUN_10ba8c178(void)

{
  return 1;
}



/* Entry: 10ba8c180; end: 10ba8c18b; -[SCASnappableLensAction getPerUserSamplingRateV2] */

undefined8 FUN_10ba8c180(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba8c18c; end: 10ba8c20b; -[SCASnappableLensAction setActionSourceType:] */

void FUN_10ba8c18c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10ba7f09c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fdef78,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8c20c; end: 10ba8c25f; -[SCASnappableLensAction setDurationMs:] */

void FUN_10ba8c20c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dcffb8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8c260; end: 10ba8c2df; -[SCASnappableLensAction setSnappableActionType:] */

void FUN_10ba8c260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7f0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fdef98,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8c2e0; end: 10ba8c303; -[SCASnappableLensAction getFieldNumberToFieldDict] */

void FUN_10ba8c2e0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8c304; end: 10ba8c33b; -[SCASnappableLensAction addToProtoDictionary] */

void FUN_10ba8c304(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba8c33c; end: 10ba8c393; -[SCASnappableLensAction toProtoWithAllowedFields:] */

void FUN_10ba8c33c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba8c394; end: 10ba8c8df; -[SCASnappableLensAction getPayloadIdentifier] */

undefined8 FUN_10ba8c394(void)

{
  return 0x822;
}



/* Entry: 10ba8c8e0; end: 10ba8c8eb; -[SCAAddressTrayAction getEventName] */

undefined ** FUN_10ba8c8e0(void)

{
  return &PTR____CFConstantStringClassReference_110fe0198;
}



/* Entry: 10ba8c8ec; end: 10ba8c8f3; -[SCAAddressTrayAction getEventQoS] */

undefined8 FUN_10ba8c8ec(void)

{
  return 1;
}



/* Entry: 10ba8c8f4; end: 10ba8c973; -[SCAAddressTrayAction setAction:] */

void FUN_10ba8c8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba8c39c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8c974; end: 10ba8c9c7; -[SCAAddressTrayAction setAddressTraySessionId:] */

void FUN_10ba8c974(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe01b8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8c9c8; end: 10ba8ca1b; -[SCAAddressTrayAction setMapSessionId:] */

void FUN_10ba8c9c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110eb59b8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8ca1c; end: 10ba8ca6f; -[SCAAddressTrayAction setMapViewportSessionId:] */

void FUN_10ba8ca1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110eb59d8,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8ca70; end: 10ba8cac3; -[SCAAddressTrayAction setAddressIndex:] */

void FUN_10ba8ca70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe01d8,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8cac4; end: 10ba8cac7; -[SCAAddressTrayAction getFieldNumberToFieldDict] */

void FUN_10ba8cac4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8cac8; end: 10ba8cad3; -[SCAAddressTrayAction toProtoWithAllowedFields:] */

void FUN_10ba8cac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba8cad4; end: 10ba8cadb; -[SCAAddressTrayAction getPayloadIdentifier] */

undefined8 FUN_10ba8cad4(void)

{
  return 0x10af;
}



/* Entry: 10ba8cadc; end: 10ba8cae7; -[SCAAddressTrayClose getEventName] */

undefined ** FUN_10ba8cadc(void)

{
  return &PTR____CFConstantStringClassReference_110fe01f8;
}



/* Entry: 10ba8cae8; end: 10ba8caef; -[SCAAddressTrayClose getEventQoS] */

undefined8 FUN_10ba8cae8(void)

{
  return 1;
}



/* Entry: 10ba8caf0; end: 10ba8cb43; -[SCAAddressTrayClose setAddressTraySessionId:] */

void FUN_10ba8caf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe01b8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8cb44; end: 10ba8cb5b; -[SCAAddressTrayClose setCloseMethod:] */

void FUN_10ba8cb44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc9658,3,param_3,0);
  return;
}



/* Entry: 10ba8cb5c; end: 10ba8cbaf; -[SCAAddressTrayClose setMapSessionId:] */

void FUN_10ba8cb5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110eb59b8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8cbb0; end: 10ba8cc03; -[SCAAddressTrayClose setMapViewportSessionId:] */

void FUN_10ba8cbb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110eb59d8,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8cc04; end: 10ba8cc57; -[SCAAddressTrayClose setViewTimeSec:] */

void FUN_10ba8cc04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fadb38,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8cc58; end: 10ba8cc5b; -[SCAAddressTrayClose getFieldNumberToFieldDict] */

void FUN_10ba8cc58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8cc5c; end: 10ba8cc67; -[SCAAddressTrayClose toProtoWithAllowedFields:] */

void FUN_10ba8cc5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba8cc68; end: 10ba8cc6f; -[SCAAddressTrayClose getPayloadIdentifier] */

undefined8 FUN_10ba8cc68(void)

{
  return 0x10b1;
}



/* Entry: 10ba8cc70; end: 10ba8cc7b; -[SCAAddressTrayOpen getEventName] */

undefined ** FUN_10ba8cc70(void)

{
  return &PTR____CFConstantStringClassReference_110fe0218;
}



/* Entry: 10ba8cc7c; end: 10ba8cc83; -[SCAAddressTrayOpen getEventQoS] */

undefined8 FUN_10ba8cc7c(void)

{
  return 1;
}



/* Entry: 10ba8cc84; end: 10ba8ccd7; -[SCAAddressTrayOpen setAddressTraySessionId:] */

void FUN_10ba8cc84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe01b8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8ccd8; end: 10ba8cd2b; -[SCAAddressTrayOpen setMapSessionId:] */

void FUN_10ba8ccd8(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10ba8cd2c; end: 10ba8cd7f; -[SCAAddressTrayOpen setMapViewportSessionId:] */

void FUN_10ba8cd2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110eb59d8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8cd80; end: 10ba8cdd3; -[SCAAddressTrayOpen setMapZoomLevel:] */

void FUN_10ba8cd80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110faf138,5,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8cdd4; end: 10ba8ce27; -[SCAAddressTrayOpen setNumOfAddresses:] */

void FUN_10ba8cdd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe0238,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8ce28; end: 10ba8ce2b; -[SCAAddressTrayOpen getFieldNumberToFieldDict] */

void FUN_10ba8ce28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8ce2c; end: 10ba8ce37; -[SCAAddressTrayOpen toProtoWithAllowedFields:] */

void FUN_10ba8ce2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba8ce38; end: 10ba8ce3f; -[SCAAddressTrayOpen getPayloadIdentifier] */

undefined8 FUN_10ba8ce38(void)

{
  return 0x10b2;
}



/* Entry: 10ba8ce40; end: 10ba8ce4b; -[SCAAppOpenLocationSharingDevice getEventName] */

undefined ** FUN_10ba8ce40(void)

{
  return &PTR____CFConstantStringClassReference_110fe0258;
}



/* Entry: 10ba8ce4c; end: 10ba8ce53; -[SCAAppOpenLocationSharingDevice getEventQoS] */

undefined8 FUN_10ba8ce4c(void)

{
  return 1;
}



/* Entry: 10ba8ce54; end: 10ba8cea7; -[SCAAppOpenLocationSharingDevice setIsSecondaryLocationSharingDevice:] */

void FUN_10ba8ce54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe0278,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8cea8; end: 10ba8ceab; -[SCAAppOpenLocationSharingDevice getFieldNumberToFieldDict] */

void FUN_10ba8cea8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8ceac; end: 10ba8ceb7; -[SCAAppOpenLocationSharingDevice toProtoWithAllowedFields:] */

void FUN_10ba8ceac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba8ceb8; end: 10ba8cebf; -[SCAAppOpenLocationSharingDevice getPayloadIdentifier] */

undefined8 FUN_10ba8ceb8(void)

{
  return 0x140c;
}



/* Entry: 10ba8cec0; end: 10ba8cecb; -[SCAAppSettingsMap getEventName] */

undefined ** FUN_10ba8cec0(void)

{
  return &PTR____CFConstantStringClassReference_110fe0298;
}



/* Entry: 10ba8cecc; end: 10ba8ced3; -[SCAAppSettingsMap getEventQoS] */

undefined8 FUN_10ba8cecc(void)

{
  return 1;
}



/* Entry: 10ba8ced4; end: 10ba8ceeb; -[SCAAppSettingsMap setAction:] */

void FUN_10ba8ced4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daf5b8,2,param_3,0);
  return;
}



/* Entry: 10ba8ceec; end: 10ba8cf03; -[SCAAppSettingsMap setSection:] */

void FUN_10ba8ceec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e4c458,3,param_3,0);
  return;
}



/* Entry: 10ba8cf04; end: 10ba8cf57; -[SCAAppSettingsMap setAppSettingsMapPageSessionId:] */

void FUN_10ba8cf04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe02b8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8cf58; end: 10ba8cf5b; -[SCAAppSettingsMap getFieldNumberToFieldDict] */

void FUN_10ba8cf58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8cf5c; end: 10ba8cf67; -[SCAAppSettingsMap toProtoWithAllowedFields:] */

void FUN_10ba8cf5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba8cf68; end: 10ba8cf6f; -[SCAAppSettingsMap getPayloadIdentifier] */

undefined8 FUN_10ba8cf68(void)

{
  return 0x13eb;
}



/* Entry: 10ba8cf70; end: 10ba8cf7b; -[SCAAppSettingsMapPageClose getEventName] */

undefined ** FUN_10ba8cf70(void)

{
  return &PTR____CFConstantStringClassReference_110fe02d8;
}



/* Entry: 10ba8cf7c; end: 10ba8cf83; -[SCAAppSettingsMapPageClose getEventQoS] */

undefined8 FUN_10ba8cf7c(void)

{
  return 1;
}



/* Entry: 10ba8cf84; end: 10ba8cfd7; -[SCAAppSettingsMapPageClose setAppSettingsMapPageSessionId:] */

void FUN_10ba8cf84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe02b8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8cfd8; end: 10ba8d02b; -[SCAAppSettingsMapPageClose setFootstepsToggle:] */

void FUN_10ba8cfd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe02f8,3,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8d02c; end: 10ba8d07f; -[SCAAppSettingsMapPageClose setMyPlaceToRecommendToggle:] */

void FUN_10ba8d02c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe0318,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8d080; end: 10ba8d0d3; -[SCAAppSettingsMapPageClose setSnapMapUsernameToggle:] */

void FUN_10ba8d080(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe0338,5,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8d0d4; end: 10ba8d127; -[SCAAppSettingsMapPageClose setTravelStatusToggle:] */

void FUN_10ba8d0d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe0358,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8d128; end: 10ba8d12b; -[SCAAppSettingsMapPageClose getFieldNumberToFieldDict] */

void FUN_10ba8d128(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8d12c; end: 10ba8d137; -[SCAAppSettingsMapPageClose toProtoWithAllowedFields:] */

void FUN_10ba8d12c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba8d138; end: 10ba8d13f; -[SCAAppSettingsMapPageClose getPayloadIdentifier] */

undefined8 FUN_10ba8d138(void)

{
  return 0x1673;
}



/* Entry: 10ba8d140; end: 10ba8d14b; -[SCAAppSettingsMapPageOpen getEventName] */

undefined ** FUN_10ba8d140(void)

{
  return &PTR____CFConstantStringClassReference_110fe0378;
}



/* Entry: 10ba8d14c; end: 10ba8d153; -[SCAAppSettingsMapPageOpen getEventQoS] */

undefined8 FUN_10ba8d14c(void)

{
  return 1;
}



/* Entry: 10ba8d154; end: 10ba8d1a7; -[SCAAppSettingsMapPageOpen setAppSettingsMapPageSessionId:] */

void FUN_10ba8d154(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe02b8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


