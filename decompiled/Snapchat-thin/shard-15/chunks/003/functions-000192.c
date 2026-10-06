/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b9bbca4; end: 10b9bbcaf; -[SCADurableDeviceIdPreauthEvent toProtoWithAllowedFields:] */

void FUN_10b9bbca4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9bbcb0; end: 10b9bbcb7; -[SCADurableDeviceIdPreauthEvent getPayloadIdentifier] */

undefined8 FUN_10b9bbcb0(void)

{
  return 0x12f0;
}



/* Entry: 10b9bbcb8; end: 10b9bbcc3; -[SCAFindFriendsPermissionUpsellTrayDismissEvent getEventName] */

undefined ** FUN_10b9bbcb8(void)

{
  return &PTR____CFConstantStringClassReference_110fa3478;
}



/* Entry: 10b9bbcc4; end: 10b9bbccb; -[SCAFindFriendsPermissionUpsellTrayDismissEvent getEventQoS] */

undefined8 FUN_10b9bbcc4(void)

{
  return 1;
}



/* Entry: 10b9bbccc; end: 10b9bbd4b; -[SCAFindFriendsPermissionUpsellTrayDismissEvent setDismissSource:] */

void FUN_10b9bbccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b38f4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3498,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bbd4c; end: 10b9bbd9f; -[SCAFindFriendsPermissionUpsellTrayDismissEvent setDurationMillis:] */

void FUN_10b9bbd4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa34b8,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bbda0; end: 10b9bbdf3; -[SCAFindFriendsPermissionUpsellTrayDismissEvent setLearnMoreClickCount:] */

void FUN_10b9bbda0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa34d8,9,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bbdf4; end: 10b9bbe0b; -[SCAFindFriendsPermissionUpsellTrayDismissEvent setSource:] */

void FUN_10b9bbdf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dae8d8,0xf,param_3,0);
  return;
}



/* Entry: 10b9bbe0c; end: 10b9bbe23; -[SCAFindFriendsPermissionUpsellTrayDismissEvent setAddFriendsPageSessionId:] */

void FUN_10b9bbe0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa34f8,0x10,param_3,0);
  return;
}



/* Entry: 10b9bbe24; end: 10b9bbe47; -[SCAFindFriendsPermissionUpsellTrayDismissEvent getFieldNumberToFieldDict] */

void FUN_10b9bbe24(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bbe48; end: 10b9bbe7f; -[SCAFindFriendsPermissionUpsellTrayDismissEvent addToProtoDictionary] */

void FUN_10b9bbe48(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9bbe80; end: 10b9bbed7; -[SCAFindFriendsPermissionUpsellTrayDismissEvent toProtoWithAllowedFields:] */

void FUN_10b9bbe80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9bbed8; end: 10b9bbedf; -[SCAFindFriendsPermissionUpsellTrayDismissEvent getPayloadIdentifier] */

undefined8 FUN_10b9bbed8(void)

{
  return 0x186a;
}



/* Entry: 10b9bbee0; end: 10b9bbeeb; -[SCAFollowCreatorsListView getEventName] */

undefined ** FUN_10b9bbee0(void)

{
  return &PTR____CFConstantStringClassReference_110fa3578;
}



/* Entry: 10b9bbeec; end: 10b9bbef3; -[SCAFollowCreatorsListView getEventQoS] */

undefined8 FUN_10b9bbeec(void)

{
  return 1;
}



/* Entry: 10b9bbef4; end: 10b9bbf73; -[SCAFollowCreatorsListView setFlow:] */

void FUN_10b9bbef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b3914(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dd9218,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bbf74; end: 10b9bbfc7; -[SCAFollowCreatorsListView setPreselectedCreatorsCount:] */

void FUN_10b9bbf74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3598,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bbfc8; end: 10b9bbfeb; -[SCAFollowCreatorsListView getFieldNumberToFieldDict] */

void FUN_10b9bbfc8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bbfec; end: 10b9bc023; -[SCAFollowCreatorsListView addToProtoDictionary] */

void FUN_10b9bbfec(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9bc024; end: 10b9bc07b; -[SCAFollowCreatorsListView toProtoWithAllowedFields:] */

void FUN_10b9bc024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9bc07c; end: 10b9bc083; -[SCAFollowCreatorsListView getPayloadIdentifier] */

undefined8 FUN_10b9bc07c(void)

{
  return 0x1529;
}



/* Entry: 10b9bc084; end: 10b9bc08f; -[SCAFollowCreatorsPrefetchFinish getEventName] */

undefined ** FUN_10b9bc084(void)

{
  return &PTR____CFConstantStringClassReference_110fa35b8;
}



/* Entry: 10b9bc090; end: 10b9bc097; -[SCAFollowCreatorsPrefetchFinish getEventQoS] */

undefined8 FUN_10b9bc090(void)

{
  return 1;
}



/* Entry: 10b9bc098; end: 10b9bc0eb; -[SCAFollowCreatorsPrefetchFinish setPrefetchFinished:] */

void FUN_10b9bc098(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa35d8,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bc0ec; end: 10b9bc10f; -[SCAFollowCreatorsPrefetchFinish getFieldNumberToFieldDict] */

void FUN_10b9bc0ec(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bc110; end: 10b9bc147; -[SCAFollowCreatorsPrefetchFinish addToProtoDictionary] */

void FUN_10b9bc110(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9bc148; end: 10b9bc19f; -[SCAFollowCreatorsPrefetchFinish toProtoWithAllowedFields:] */

void FUN_10b9bc148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9bc1a0; end: 10b9bc1a7; -[SCAFollowCreatorsPrefetchFinish getPayloadIdentifier] */

undefined8 FUN_10b9bc1a0(void)

{
  return 0x156d;
}



/* Entry: 10b9bc1a8; end: 10b9bc1b3; -[SCAFollowCreatorsSkip getEventName] */

undefined ** FUN_10b9bc1a8(void)

{
  return &PTR____CFConstantStringClassReference_110fa35f8;
}



/* Entry: 10b9bc1b4; end: 10b9bc1bb; -[SCAFollowCreatorsSkip getEventQoS] */

undefined8 FUN_10b9bc1b4(void)

{
  return 1;
}



/* Entry: 10b9bc1bc; end: 10b9bc20f; -[SCAFollowCreatorsSkip setAutoSkip:] */

void FUN_10b9bc1bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dd91d8,3,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bc210; end: 10b9bc28f; -[SCAFollowCreatorsSkip setFlow:] */

void FUN_10b9bc210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b3914(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dd9218,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bc290; end: 10b9bc2b3; -[SCAFollowCreatorsSkip getFieldNumberToFieldDict] */

void FUN_10b9bc290(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bc2b4; end: 10b9bc2eb; -[SCAFollowCreatorsSkip addToProtoDictionary] */

void FUN_10b9bc2b4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9bc2ec; end: 10b9bc343; -[SCAFollowCreatorsSkip toProtoWithAllowedFields:] */

void FUN_10b9bc2ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9bc344; end: 10b9bc34b; -[SCAFollowCreatorsSkip getPayloadIdentifier] */

undefined8 FUN_10b9bc344(void)

{
  return 0x152a;
}



/* Entry: 10b9bc34c; end: 10b9bc357; -[SCAFollowCreatorsSubscribe getEventName] */

undefined ** FUN_10b9bc34c(void)

{
  return &PTR____CFConstantStringClassReference_110fa3618;
}



/* Entry: 10b9bc358; end: 10b9bc35f; -[SCAFollowCreatorsSubscribe getEventQoS] */

undefined8 FUN_10b9bc358(void)

{
  return 1;
}



/* Entry: 10b9bc360; end: 10b9bc3df; -[SCAFollowCreatorsSubscribe setFlow:] */

void FUN_10b9bc360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b3914(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dd9218,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bc3e0; end: 10b9bc433; -[SCAFollowCreatorsSubscribe setSubscribedCreatorCount:] */

void FUN_10b9bc3e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3638,0xb,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bc434; end: 10b9bc457; -[SCAFollowCreatorsSubscribe getFieldNumberToFieldDict] */

void FUN_10b9bc434(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bc458; end: 10b9bc48f; -[SCAFollowCreatorsSubscribe addToProtoDictionary] */

void FUN_10b9bc458(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9bc490; end: 10b9bc4e7; -[SCAFollowCreatorsSubscribe toProtoWithAllowedFields:] */

void FUN_10b9bc490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9bc4e8; end: 10b9bc4ef; -[SCAFollowCreatorsSubscribe getPayloadIdentifier] */

undefined8 FUN_10b9bc4e8(void)

{
  return 0x152b;
}



/* Entry: 10b9bc4f0; end: 10b9bc4fb; -[SCAFpnvChallengeAnswerAttempt getEventName] */

undefined ** FUN_10b9bc4f0(void)

{
  return &PTR____CFConstantStringClassReference_110fa3658;
}



/* Entry: 10b9bc4fc; end: 10b9bc503; -[SCAFpnvChallengeAnswerAttempt getEventQoS] */

undefined8 FUN_10b9bc4fc(void)

{
  return 1;
}



/* Entry: 10b9bc504; end: 10b9bc527; -[SCAFpnvChallengeAnswerAttempt getFieldNumberToFieldDict] */

void FUN_10b9bc504(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bc528; end: 10b9bc55f; -[SCAFpnvChallengeAnswerAttempt addToProtoDictionary] */

void FUN_10b9bc528(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9bc560; end: 10b9bc5b7; -[SCAFpnvChallengeAnswerAttempt toProtoWithAllowedFields:] */

void FUN_10b9bc560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9bc5b8; end: 10b9bc5bf; -[SCAFpnvChallengeAnswerAttempt getPayloadIdentifier] */

undefined8 FUN_10b9bc5b8(void)

{
  return 0x1992;
}



/* Entry: 10b9bc5c0; end: 10b9bc5cb; -[SCAFpnvChallengeAnswerResult getEventName] */

undefined ** FUN_10b9bc5c0(void)

{
  return &PTR____CFConstantStringClassReference_110fa3678;
}



/* Entry: 10b9bc5cc; end: 10b9bc5d3; -[SCAFpnvChallengeAnswerResult getEventQoS] */

undefined8 FUN_10b9bc5cc(void)

{
  return 1;
}



/* Entry: 10b9bc5d4; end: 10b9bc627; -[SCAFpnvChallengeAnswerResult setGrpcStatusCode:] */

void FUN_10b9bc5d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2578,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bc628; end: 10b9bc6a7; -[SCAFpnvChallengeAnswerResult setResultType:] */

void FUN_10b9bc628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b395c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e362b8,0xb,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bc6a8; end: 10b9bc6fb; -[SCAFpnvChallengeAnswerResult setStatusCode:] */

void FUN_10b9bc6a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dde9d8,0xd,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bc6fc; end: 10b9bc71f; -[SCAFpnvChallengeAnswerResult getFieldNumberToFieldDict] */

void FUN_10b9bc6fc(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bc720; end: 10b9bc757; -[SCAFpnvChallengeAnswerResult addToProtoDictionary] */

void FUN_10b9bc720(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9bc758; end: 10b9bc7af; -[SCAFpnvChallengeAnswerResult toProtoWithAllowedFields:] */

void FUN_10b9bc758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9bc7b0; end: 10b9bc7b7; -[SCAFpnvChallengeAnswerResult getPayloadIdentifier] */

undefined8 FUN_10b9bc7b0(void)

{
  return 0x1993;
}



/* Entry: 10b9bc7b8; end: 10b9bc7c3; -[SCAFpnvPromptResult getEventName] */

undefined ** FUN_10b9bc7b8(void)

{
  return &PTR____CFConstantStringClassReference_110fa3698;
}



/* Entry: 10b9bc7c4; end: 10b9bc7cb; -[SCAFpnvPromptResult getEventQoS] */

undefined8 FUN_10b9bc7c4(void)

{
  return 1;
}



/* Entry: 10b9bc7cc; end: 10b9bc7e3; -[SCAFpnvPromptResult setCountryCode:] */

void FUN_10b9bc7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110de3598,5,param_3,0);
  return;
}



/* Entry: 10b9bc7e4; end: 10b9bc7fb; -[SCAFpnvPromptResult setReason:] */

void FUN_10b9bc7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daf558,8,param_3,0);
  return;
}



/* Entry: 10b9bc7fc; end: 10b9bc87b; -[SCAFpnvPromptResult setResultType:] */

void FUN_10b9bc7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b39a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e362b8,0xc,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bc87c; end: 10b9bc8fb; -[SCAFpnvPromptResult setFlowType:] */

void FUN_10b9bc87c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b397c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa36b8,0xf,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bc8fc; end: 10b9bc91f; -[SCAFpnvPromptResult getFieldNumberToFieldDict] */

void FUN_10b9bc8fc(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bc920; end: 10b9bc957; -[SCAFpnvPromptResult addToProtoDictionary] */

void FUN_10b9bc920(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9bc958; end: 10b9bc9af; -[SCAFpnvPromptResult toProtoWithAllowedFields:] */

void FUN_10b9bc958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9bc9b0; end: 10b9bc9b7; -[SCAFpnvPromptResult getPayloadIdentifier] */

undefined8 FUN_10b9bc9b0(void)

{
  return 0x192e;
}



/* Entry: 10b9bc9b8; end: 10b9bc9c3; -[SCAFpnvPromptStart getEventName] */

undefined ** FUN_10b9bc9b8(void)

{
  return &PTR____CFConstantStringClassReference_110fa36d8;
}



/* Entry: 10b9bc9c4; end: 10b9bc9cb; -[SCAFpnvPromptStart getEventQoS] */

undefined8 FUN_10b9bc9c4(void)

{
  return 1;
}



/* Entry: 10b9bc9cc; end: 10b9bca4b; -[SCAFpnvPromptStart setFlowType:] */

void FUN_10b9bc9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b397c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa36b8,0xc,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bca4c; end: 10b9bca6f; -[SCAFpnvPromptStart getFieldNumberToFieldDict] */

void FUN_10b9bca4c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bca70; end: 10b9bcaa7; -[SCAFpnvPromptStart addToProtoDictionary] */

void FUN_10b9bca70(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9bcaa8; end: 10b9bcaff; -[SCAFpnvPromptStart toProtoWithAllowedFields:] */

void FUN_10b9bcaa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9bcb00; end: 10b9bcb07; -[SCAFpnvPromptStart getPayloadIdentifier] */

undefined8 FUN_10b9bcb00(void)

{
  return 0x1930;
}



/* Entry: 10b9bcb08; end: 10b9bcb13; -[SCAFpnvSetPhoneAttempt getEventName] */

undefined ** FUN_10b9bcb08(void)

{
  return &PTR____CFConstantStringClassReference_110fa36f8;
}



/* Entry: 10b9bcb14; end: 10b9bcb1b; -[SCAFpnvSetPhoneAttempt getEventQoS] */

undefined8 FUN_10b9bcb14(void)

{
  return 1;
}



/* Entry: 10b9bcb1c; end: 10b9bcb3f; -[SCAFpnvSetPhoneAttempt getFieldNumberToFieldDict] */

void FUN_10b9bcb1c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bcb40; end: 10b9bcb77; -[SCAFpnvSetPhoneAttempt addToProtoDictionary] */

void FUN_10b9bcb40(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9bcb78; end: 10b9bcbcf; -[SCAFpnvSetPhoneAttempt toProtoWithAllowedFields:] */

void FUN_10b9bcb78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9bcbd0; end: 10b9bcbd7; -[SCAFpnvSetPhoneAttempt getPayloadIdentifier] */

undefined8 FUN_10b9bcbd0(void)

{
  return 0x1931;
}



/* Entry: 10b9bcbd8; end: 10b9bcbe3; -[SCAFpnvSetPhoneResult getEventName] */

undefined ** FUN_10b9bcbd8(void)

{
  return &PTR____CFConstantStringClassReference_110fa3718;
}



/* Entry: 10b9bcbe4; end: 10b9bcbeb; -[SCAFpnvSetPhoneResult getEventQoS] */

undefined8 FUN_10b9bcbe4(void)

{
  return 1;
}



/* Entry: 10b9bcbec; end: 10b9bcc6b; -[SCAFpnvSetPhoneResult setResultType:] */

void FUN_10b9bcbec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b39c4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e362b8,10,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bcc6c; end: 10b9bccbf; -[SCAFpnvSetPhoneResult setStatusCode:] */

void FUN_10b9bcc6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dde9d8,0xc,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bccc0; end: 10b9bcce3; -[SCAFpnvSetPhoneResult getFieldNumberToFieldDict] */

void FUN_10b9bccc0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bcce4; end: 10b9bcd1b; -[SCAFpnvSetPhoneResult addToProtoDictionary] */

void FUN_10b9bcce4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9bcd1c; end: 10b9bcd73; -[SCAFpnvSetPhoneResult toProtoWithAllowedFields:] */

void FUN_10b9bcd1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9bcd74; end: 10b9bcd7b; -[SCAFpnvSetPhoneResult getPayloadIdentifier] */

undefined8 FUN_10b9bcd74(void)

{
  return 0x1932;
}



/* Entry: 10b9bcd7c; end: 10b9bcd87; -[SCALoginStateTransition getEventName] */

undefined ** FUN_10b9bcd7c(void)

{
  return &PTR____CFConstantStringClassReference_110fa3738;
}



/* Entry: 10b9bcd88; end: 10b9bcd8f; -[SCALoginStateTransition getEventQoS] */

undefined8 FUN_10b9bcd88(void)

{
  return 1;
}



/* Entry: 10b9bcd90; end: 10b9bcdd7; -[SCALoginStateTransition setLoginMetadata:] */

void FUN_10b9bcd90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3758,2,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b9bcdd8; end: 10b9bce1f; -[SCALoginStateTransition setStateTransition:] */

void FUN_10b9bcdd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3778,3,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b9bce20; end: 10b9bcf3f; -[SCALoginStateTransition prepareDictionary:] */

void FUN_10b9bce20(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_38 = PTR_PTR_11270c200;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10b9bcf40; end: 10b9bcf43; -[SCALoginStateTransition getFieldNumberToFieldDict] */

void FUN_10b9bcf40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bcf44; end: 10b9bcf4f; -[SCALoginStateTransition toProtoWithAllowedFields:] */

void FUN_10b9bcf44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9bcf50; end: 10b9bcf57; -[SCALoginStateTransition getPayloadIdentifier] */

undefined8 FUN_10b9bcf50(void)

{
  return 0x51d;
}



/* Entry: 10b9bcf58; end: 10b9bcf63; -[SCAOnboardingTooltipCaptionComplete getEventName] */

undefined ** FUN_10b9bcf58(void)

{
  return &PTR____CFConstantStringClassReference_110e6cdf8;
}



/* Entry: 10b9bcf64; end: 10b9bcf6b; -[SCAOnboardingTooltipCaptionComplete getEventQoS] */

undefined8 FUN_10b9bcf64(void)

{
  return 1;
}


