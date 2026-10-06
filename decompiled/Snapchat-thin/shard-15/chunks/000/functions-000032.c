/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7929ec; end: 10b792a7b; +[SOJUSecurityFideliusClearRetryRequest registerMessageFields:] */

void FUN_10b7929ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10b792a7c();
  func_0x00010bf06b60();
  func_0x00010c19a460(param_3,param_2,0x9d14c8c73bfd91);
  _objc_opt_class(PTR_PTR_1126c0688);
  FUN_10b792a7c();
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b792a7c; end: 10b792a97;  */

void FUN_10b792a7c(void)

{
  return;
}



/* Entry: 10b792a98; end: 10b792abb; -[SOJUSecurityFideliusClientInit initWithHashedOutBetas:sojuNewOutBeta:sojuNewHashedOutBeta:sojuNewIwek:sojuNewFideliusVersion:] */

void FUN_10b792a98(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b792abc; end: 10b792b97; +[SOJUSecurityFideliusClientInit registerMessageFields:] */

void FUN_10b792abc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_hashedOutBetas_112547278;
  _objc_retain(param_3);
  func_0x00010b792bb0(param_3,param_2,puVar1,0,1,7,in_x6,in_x7,0,1);
  func_0x00010c19a460(param_3,param_2,0x1aa638693205c3);
  func_0x00010b792b98();
  func_0x00010b792b98();
  func_0x00010b792b98();
  func_0x00010b792bb0(param_3,param_2,PTR_s_sojuNewFideliusVersion_112547298,
                      &PTR____CFConstantStringClassReference_110f804d8,2,1,in_x6,in_x7,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b792b98; end: 10b792bbb;  */

void FUN_10b792b98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b792bbc; end: 10b792bc7; +[SOJUSecurityFideliusClientInitBuilder messageClass] */

void FUN_10b792bbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e11a8);
  return;
}



/* Entry: 10b792bc8; end: 10b792bcb; +[SOJUSecurityFideliusClientInitBuilder withJUSecurityFideliusClientInit:] */

void FUN_10b792bc8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b792bcc; end: 10b792beb; -[SOJUSecurityFideliusClientInitResponse initWithIwek:friends:hashedOutBeta:] */

void FUN_10b792bcc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b792bec; end: 10b792c7b; +[SOJUSecurityFideliusClientInitResponse registerMessageFields:] */

void FUN_10b792bec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b792c8c();
  func_0x00010b792c7c();
  _objc_opt_class(PTR_PTR_1126c0680);
  func_0x00010b792c8c();
  func_0x00010bf06b60();
  func_0x00010b792c7c(param_3,param_2,PTR_s_hashedOutBeta_1125472b0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b792c7c; end: 10b792c9f;  */

void FUN_10b792c7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b792ca0; end: 10b792cbf; -[SOJUSecurityFideliusDeviceInfo initWithOutBeta:version:] */

void FUN_10b792ca0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b792cc0; end: 10b792d33; +[SOJUSecurityFideliusDeviceInfo registerMessageFields:] */

void FUN_10b792cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_outBeta_112619358;
  _objc_retain(param_3);
  FUN_10b792d34(param_3,param_2,puVar1,0,1,6,in_x6,in_x7,0,0);
  FUN_10b792d34(param_3,param_2,PTR_s_version_112683d20,0,0,1,in_x6,in_x7,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b792d34; end: 10b792d3f;  */

void FUN_10b792d34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b792d40; end: 10b792d7b; -[SOJUSecurityFideliusDeviceRecipientInfo initWithSenderOutDelta:senderOutDeltaCheck:counter:na:phi:tag:recipientOutDelta:recipientOutDeltaCheck:senderUserId:recipientUserId:recipientVersion:] */

void FUN_10b792d40(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b792d7c; end: 10b792e73; +[SOJUSecurityFideliusDeviceRecipientInfo registerMessageFields:] */

void FUN_10b792d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_senderOutDelta_1125472c0;
  _objc_retain(param_3);
  func_0x00010b792e94(param_3,param_2,puVar1,0,1);
  func_0x00010b792e74();
  func_0x00010b792eb0();
  func_0x00010b792ea4();
  func_0x00010b792eb0();
  func_0x00010b792e94();
  func_0x00010b792eb0();
  func_0x00010b792e94();
  func_0x00010b792eb0();
  func_0x00010b792e94();
  func_0x00010b792e74();
  func_0x00010b792e74();
  func_0x00010b792e74();
  func_0x00010b792e74();
  func_0x00010b792eb0();
  func_0x00010b792ea4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b792e74; end: 10b792ebf;  */

void FUN_10b792e74(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b792ec0; end: 10b792ecb; +[SOJUSecurityFideliusDeviceRecipientInfoBuilder messageClass] */

void FUN_10b792ec0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126c0690);
  return;
}



/* Entry: 10b792ecc; end: 10b792ecf; +[SOJUSecurityFideliusDeviceRecipientInfoBuilder withJUSecurityFideliusDeviceRecipientInfo:] */

void FUN_10b792ecc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b792ed0; end: 10b792ed3; -[SOJUSecurityFideliusFriendInfo initWithDevices:] */

void FUN_10b792ed0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b792ed4; end: 10b792f4b; +[SOJUSecurityFideliusFriendInfo registerMessageFields:] */

void FUN_10b792ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c0400;
  puVar1 = PTR_s_devices_1125b9e48;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b792f4c; end: 10b792f6f; -[SOJUSecurityFideliusFriendsKeysRequest initWithTimestamp:reqToken:username:snapchatUserId:friends:] */

void FUN_10b792f4c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b792f70; end: 10b793047; +[SOJUSecurityFideliusFriendsKeysRequest registerMessageFields:] */

void FUN_10b792f70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_timestamp_112679c98;
  _objc_retain(param_3);
  FUN_10b793048(param_3,param_2,puVar1,0,0);
  func_0x00010b793058();
  FUN_10b793048();
  func_0x00010b793058();
  FUN_10b793048();
  func_0x00010b793058();
  FUN_10b793048();
  func_0x00010b793058();
  func_0x00010bf06b60();
  func_0x00010c19a460(param_3,param_2,0xc3684d0b33f1fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b793048; end: 10b793063;  */

void FUN_10b793048(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b793064; end: 10b79306f; +[SOJUSecurityFideliusFriendsKeysRequestBuilder messageClass] */

void FUN_10b793064(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e11b0);
  return;
}



/* Entry: 10b793070; end: 10b793073; +[SOJUSecurityFideliusFriendsKeysRequestBuilder withJUSecurityFideliusFriendsKeysRequest:] */

void FUN_10b793070(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b793074; end: 10b793077; -[SOJUSecurityFideliusFriendsKeysResponse initWithFriends:] */

void FUN_10b793074(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b793078; end: 10b7930ef; +[SOJUSecurityFideliusFriendsKeysResponse registerMessageFields:] */

void FUN_10b793078(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c0680;
  puVar1 = PTR_s_friends_1125cc088;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7930f0; end: 10b79310f; -[SOJUSecurityFideliusInitRetryArroyoMessage initWithArroyoMessage:reset:] */

void FUN_10b7930f0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b793110; end: 10b7931ab; +[SOJUSecurityFideliusInitRetryArroyoMessage registerMessageFields:] */

void FUN_10b793110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c0688;
  puVar1 = PTR_s_arroyoMessage_112547300;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,puVar2,0,0,0);
  func_0x00010bf06b60(param_3,param_2,PTR_s_reset_11262ba18,0,0,0,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7931ac; end: 10b7931cb; -[SOJUSecurityFideliusInitRetryRequest initWithSnapIds:sojuInitRetrySnaps:arroyoMessages:] */

void FUN_10b7931ac(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7931cc; end: 10b79328b; +[SOJUSecurityFideliusInitRetryRequest registerMessageFields:] */

void FUN_10b7931cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x7;
  
  _objc_retain(param_3);
  FUN_10b79328c();
  func_0x00010b7932a8();
  func_0x00010c19a460(param_3,param_2,0x9d14c8c73bfd91);
  puVar1 = PTR_s_sojuInitRetrySnaps_112547310;
  puVar2 = PTR_PTR_1126e11b8;
  _objc_opt_class(PTR_PTR_1126e11b8);
  func_0x00010b7932a8(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110f804f8,2,7,
                      puVar2,in_x7,0,1);
  _objc_opt_class(PTR_PTR_1126e11c0);
  FUN_10b79328c();
  func_0x00010b7932a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79328c; end: 10b7932af;  */

void FUN_10b79328c(void)

{
  return;
}



/* Entry: 10b7932b0; end: 10b7932bb; +[SOJUSecurityFideliusInitRetryRequestBuilder messageClass] */

void FUN_10b7932b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e11c8);
  return;
}



/* Entry: 10b7932bc; end: 10b7932bf; +[SOJUSecurityFideliusInitRetryRequestBuilder withJUSecurityFideliusInitRetryRequest:] */

void FUN_10b7932bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b7932c0; end: 10b7932c3; -[SOJUSecurityFideliusInitRetryResponse initWithLatestKey:] */

void FUN_10b7932c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b7932c4; end: 10b793303; +[SOJUSecurityFideliusInitRetryResponse registerMessageFields:] */

void FUN_10b7932c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_latestKey_112547328,0,1,6,0,0,0,0);
  return;
}



/* Entry: 10b793304; end: 10b793323; -[SOJUSecurityFideliusInitRetrySnap initWithSnapId:reset:] */

void FUN_10b793304(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b793324; end: 10b793397; +[SOJUSecurityFideliusInitRetrySnap registerMessageFields:] */

void FUN_10b793324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_snapId_11266deb0;
  _objc_retain(param_3);
  FUN_10b793398(param_3,param_2,puVar1,0,1,2,in_x6,in_x7,0,0);
  FUN_10b793398(param_3,param_2,PTR_s_reset_11262ba18,0,0,0,in_x6,in_x7,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b793398; end: 10b7933a3;  */

void FUN_10b793398(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b7933a4; end: 10b7933a7; -[SOJUSecurityFideliusRecipientInfo initWithFideliusRecipientInfo:] */

void FUN_10b7933a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b7933a8; end: 10b79341f; +[SOJUSecurityFideliusRecipientInfo registerMessageFields:] */

void FUN_10b7933a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c0690;
  puVar1 = PTR_s_fideliusRecipientInfo_1125c8b18;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,puVar2,0,0,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b793420; end: 10b793423; -[SOJUSecurityFideliusUpdatesRequest initWithOutBeta:] */

void FUN_10b793420(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b793424; end: 10b793463; +[SOJUSecurityFideliusUpdatesRequest registerMessageFields:] */

void FUN_10b793424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_outBeta_112619358,0,1,6,0,0,0,0);
  return;
}



/* Entry: 10b793464; end: 10b793467; -[SOJUSecurityFideliusUpdatesResponse initWithUpdates:] */

void FUN_10b793464(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b793468; end: 10b7934df; +[SOJUSecurityFideliusUpdatesResponse registerMessageFields:] */

void FUN_10b793468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c0678;
  puVar1 = PTR_s_updates_112681000;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7934e0; end: 10b7934e3; -[SOJUSecurityGetAssertionRequest initWithPurpose:] */

void FUN_10b7934e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b7934e4; end: 10b79352f; +[SOJUSecurityGetAssertionRequest registerMessageFields:] */

void FUN_10b7934e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_purpose_1126249f8,0,0,6,0,FUN_10b793540,FUN_10b7935d8,0)
  ;
  return;
}



/* Entry: 10b793530; end: 10b79353b; +[SOJUSecurityGetAssertionRequestBuilder messageClass] */

void FUN_10b793530(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e11d0);
  return;
}



/* Entry: 10b79353c; end: 10b79353f; +[SOJUSecurityGetAssertionRequestBuilder withJUSecurityGetAssertionRequest:] */

void FUN_10b79353c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b793540; end: 10b7935d7;  */

ulong FUN_10b793540(undefined8 param_1)

{
  undefined **ppuVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ec6eb8;
  func_0x00010b79363c();
  if (ppuVar1 == (undefined **)0x0) {
    uVar3 = 0x8f56;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f80518;
    func_0x00010b79363c();
    if (ppuVar1 != (undefined **)0x0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f80538;
      func_0x00010b79363c();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xfffffffff1d0a59a;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f80558;
        func_0x00010b79363c();
        uVar2 = 0x72720053;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0;
        }
      }
      goto LAB_10b7935b4;
    }
    uVar3 = 0xb30f;
  }
  uVar2 = (ulong)(uVar3 | 0x10000);
LAB_10b7935b4:
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7935d8; end: 10b793643;  */

undefined ** FUN_10b7935d8(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x1b30f) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f80518;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f80558;
  if (param_1 != 0x72720053) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110ec6eb8;
  if (param_1 != 0x18f56) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f80538;
  if (param_1 != -0xe2f5a66) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b793644; end: 10b793667; -[SOJUSecurityGetAssertionResponse initWithAssertion:tag1:tag2:nonce:] */

void FUN_10b793644(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b793668; end: 10b7936db; +[SOJUSecurityGetAssertionResponse registerMessageFields:] */

void FUN_10b793668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b7936f4();
  func_0x00010b7936dc();
  func_0x00010b7936f4();
  func_0x00010b7936dc();
  func_0x00010b7936f4();
  func_0x00010b7936dc();
  func_0x00010b7936f4();
  func_0x00010b7936dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7936dc; end: 10b7936ff;  */

void FUN_10b7936dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,6,0,0);
  return;
}



/* Entry: 10b793700; end: 10b79371f; -[SOJUSecurityInAppWarningResponse initWithInAppWarningMessageId:inAppWarningMessage:] */

void FUN_10b793700(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b793720; end: 10b79377b; +[SOJUSecurityInAppWarningResponse registerMessageFields:] */

void FUN_10b793720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_inAppWarningMessageId_112547358;
  _objc_retain(param_3);
  FUN_10b79377c(param_3,param_2,puVar1);
  FUN_10b79377c(param_3,param_2,PTR_s_inAppWarningMessage_112547360);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79377c; end: 10b793793;  */

void FUN_10b79377c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b793794; end: 10b7937b3; -[SOJUSecurityOdlvRequestOtpResponse initWithStatus:message:] */

void FUN_10b793794(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7937b4; end: 10b79382b; +[SOJUSecurityOdlvRequestOtpResponse registerMessageFields:] */

void FUN_10b7937b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_status_112672580;
  _objc_retain(param_3);
  FUN_10b79382c(param_3,param_2,puVar1);
  func_0x00010bf06b60();
  FUN_10b79382c(param_3,param_2,PTR_s_message_112610668);
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79382c; end: 10b79383f;  */

void FUN_10b79382c(void)

{
  return;
}



/* Entry: 10b793840; end: 10b7938f7;  */

undefined8 FUN_10b793840(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db78d8;
  func_0x00010b79397c();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffffbb80cbe3;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f80578;
    func_0x00010b79397c();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xfffffffff36a83e9;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f80598;
      func_0x00010b79397c();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x458c9c7c;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f805b8;
        func_0x00010b79397c();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0xffffffffcdd36d9b;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f805d8;
          func_0x00010b79397c();
          uVar2 = 0xffffffffd77bfdfd;
          if (ppuVar1 != (undefined **)0x0) {
            uVar2 = 0;
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7938f8; end: 10b793983;  */

undefined ** FUN_10b7938f8(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0xc957c17) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f80578;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f80598;
  if (param_1 != 0x458c9c7c) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f805d8;
  if (param_1 != -0x28840203) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f805b8;
  if (param_1 != -0x322c9265) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110db78d8;
  if (param_1 != -0x447f341d) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b793984; end: 10b7939a7; -[SOJUSecurityRegisterKeyRequest initWithAssertion:auth:key:keyType:operation:] */

void FUN_10b793984(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7939a8; end: 10b793a6f; +[SOJUSecurityRegisterKeyRequest registerMessageFields:] */

void FUN_10b7939a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_assertion_1125a0558;
  _objc_retain(param_3);
  FUN_10b793a70(param_3,param_2,puVar1);
  FUN_10b793a70(param_3,param_2,PTR_s_auth_1125a1b30);
  FUN_10b793a70(param_3,param_2,PTR_s_key_1125ff368);
  func_0x00010b793a88(param_3,param_2,PTR_s_keyType_1125ff4c0,0,1,param_6,param_7,FUN_10b793a94,
                      FUN_10b793b00,0);
  func_0x00010b793a88(param_3,param_2,PTR_s_operation_112618880,0,0,param_6,param_7,FUN_10b793b38,
                      FUN_10b793ba4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b793a70; end: 10b793a93;  */

void FUN_10b793a70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,6,0,0);
  return;
}



/* Entry: 10b793a94; end: 10b793aff;  */

undefined8 FUN_10b793a94(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef8298;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ef8298,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x1b195;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e29bf8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e29bf8,param_2,param_1);
    uVar2 = 0x40b0f20a;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b793b00; end: 10b793b37;  */

undefined ** FUN_10b793b00(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e29bf8;
  if (param_1 != 0x40b0f20a) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef8298;
  if (param_1 != 0x1b195) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b793b38; end: 10b793ba3;  */

undefined8 FUN_10b793b38(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f805f8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f805f8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x6761d4f;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db32d8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db32d8,param_2,param_1);
    uVar2 = 0xffffffffce0038c9;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b793ba4; end: 10b793bdf;  */

undefined ** FUN_10b793ba4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db32d8;
  if (param_1 != -0x31ffc737) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f805f8;
  if (param_1 != 0x6761d4f) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b793be0; end: 10b793bff; -[SOJUSecurityRetrieveKeyRequest initWithAssertion:auth:signedNonce:] */

void FUN_10b793be0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b793c00; end: 10b793c87; +[SOJUSecurityRetrieveKeyRequest registerMessageFields:] */

void FUN_10b793c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_assertion_1125a0558;
  _objc_retain(param_3);
  FUN_10b793c88(param_3,param_2,puVar1,0,0);
  FUN_10b793c88(param_3,param_2,PTR_s_auth_1125a1b30,0,0);
  FUN_10b793c88(param_3,param_2,PTR_s_signedNonce_11266cb10,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b793c88; end: 10b793c97;  */

void FUN_10b793c88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b793c98; end: 10b793cb7; -[SOJUSecurityRetrieveKeyResponse initWithKey:rateLimitExpiration:currentTimestamp:] */

void FUN_10b793c98(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b793cb8; end: 10b793d2b; +[SOJUSecurityRetrieveKeyResponse registerMessageFields:] */

void FUN_10b793cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_key_1125ff368;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,6,0,0,0,0);
  FUN_10b793d2c();
  FUN_10b793d2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b793d2c; end: 10b793d4b;  */

void FUN_10b793d2c(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b793d4c; end: 10b793d6f; -[SOJUSecuritySecurityInfoResponse initWithCapricornNumber:capricornEndpoints:inAppReportMessageId:inAppReportMessage:capricornString:] */

void FUN_10b793d4c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b793d70; end: 10b793e2b; +[SOJUSecuritySecurityInfoResponse registerMessageFields:] */

void FUN_10b793d70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_capricornNumber_112547388;
  _objc_retain(param_3);
  func_0x00010b793e4c(param_3,param_2,puVar1,0,1,1,in_x6,in_x7,0,0);
  func_0x00010b793e4c(param_3,param_2,PTR_s_capricornEndpoints_112547390,0,1,7,in_x6,in_x7,0,1);
  func_0x00010c19a460(param_3,param_2,0x72ba240266dae9);
  func_0x00010b793e2c();
  func_0x00010b793e2c();
  func_0x00010b793e2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b793e2c; end: 10b793e57;  */

void FUN_10b793e2c(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b793e58; end: 10b793e77; -[SOJUServer initWithHostname:port:] */

void FUN_10b793e58(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b793e78; end: 10b793eeb; +[SOJUServer registerMessageFields:] */

void FUN_10b793e78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_hostname_1125d6b80;
  _objc_retain(param_3);
  FUN_10b793eec(param_3,param_2,puVar1,0,0,6,in_x6,in_x7,0,0);
  FUN_10b793eec(param_3,param_2,PTR_s_port_11261ea38,0,0,1,in_x6,in_x7,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b793eec; end: 10b793ef7;  */

void FUN_10b793eec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b793ef8; end: 10b793f1b; -[SOJUServerInfoResponse initWithServerLatency:responseChecksum:responseCompareResult:responseCompareResultsDict:] */

void FUN_10b793ef8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b793f1c; end: 10b793fbf; +[SOJUServerInfoResponse registerMessageFields:] */

void FUN_10b793f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_serverLatency_112635718;
  _objc_retain(param_3);
  FUN_10b793fc0(param_3,param_2,puVar1);
  FUN_10b793fc0(param_3,param_2,PTR_s_responseChecksum_1125473c0);
  func_0x00010bf06b60(param_3,param_2,PTR_s_responseCompareResult_1125473c8,0,1,6,0,FUN_10b793fd8,
                      FUN_10b794074,0);
  FUN_10b793fc0(param_3,param_2,PTR_s_responseCompareResultsDict_1125473d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b793fc0; end: 10b793fd7;  */

void FUN_10b793fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b793fd8; end: 10b794073;  */

undefined8 FUN_10b793fd8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f80618;
  func_0x00010b7940e0();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x3f26f14;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7f3b8;
    func_0x00010b7940e0();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x3dec398;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f80638;
      func_0x00010b7940e0();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x3cf0ee88;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f80658;
        func_0x00010b7940e0();
        uVar2 = 0xffffffffaf9a7e23;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b794074; end: 10b7940e7;  */

undefined ** FUN_10b794074(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x3dec398) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7f3b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f80618;
  if (param_1 != 0x3f26f14) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f80638;
  if (param_1 != 0x3cf0ee88) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f80658;
  if (param_1 != -0x506581dd) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b7940e8; end: 10b794107; -[SOJUSignedPayload initWithPayload:mac:type:] */

void FUN_10b7940e8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b794108; end: 10b794177; +[SOJUSignedPayload registerMessageFields:] */

void FUN_10b794108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_payload_11261b328;
  _objc_retain(param_3);
  FUN_10b794178(param_3,param_2,puVar1);
  FUN_10b794178(param_3,param_2,PTR_s_mac_1125473e0);
  FUN_10b794178(param_3,param_2,PTR_s_type_11267d188);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b794178; end: 10b79418f;  */

void FUN_10b794178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,6,0,0);
  return;
}



/* Entry: 10b794190; end: 10b79419b; +[SOJUSignedPayloadBuilder messageClass] */

void FUN_10b794190(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0a38);
  return;
}



/* Entry: 10b79419c; end: 10b79419f; +[SOJUSignedPayloadBuilder withJUSignedPayload:] */

void FUN_10b79419c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b7941a0; end: 10b7941bf; -[SOJUSize initWithWidth:height:] */

void FUN_10b7941a0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7941c0; end: 10b79421b; +[SOJUSize registerMessageFields:] */

void FUN_10b7941c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_width_112686e38;
  _objc_retain(param_3);
  FUN_10b79421c(param_3,param_2,puVar1);
  FUN_10b79421c(param_3,param_2,PTR_s_height_1125d5b50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b79421c; end: 10b794233;  */

void FUN_10b79421c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,1,0,0);
  return;
}



/* Entry: 10b794234; end: 10b794253; -[SOJUSkipUseCases initWithSkipUnlockables:skipVenues:] */

void FUN_10b794234(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b794254; end: 10b7942af; +[SOJUSkipUseCases registerMessageFields:] */

void FUN_10b794254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_skipUnlockables_1125473f8;
  _objc_retain(param_3);
  FUN_10b7942b0(param_3,param_2,puVar1);
  FUN_10b7942b0(param_3,param_2,PTR_s_skipVenues_112547400);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7942b0; end: 10b7942c7;  */

void FUN_10b7942b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,0,0,0);
  return;
}



/* Entry: 10b7942c8; end: 10b7942e7; -[SOJUSnapAttachment initWithAttachmentType:webAttachment:cognacAttachment:] */

void FUN_10b7942c8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7942e8; end: 10b79437f; +[SOJUSnapAttachment registerMessageFields:] */

void FUN_10b7942e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_attachmentType_1125a0f28;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,6,0,FUN_10b7943b4,FUN_10b794420,0);
  _objc_opt_class(PTR_PTR_1126bcd20);
  FUN_10b794380();
  _objc_opt_class(PTR_PTR_1126e11d8);
  FUN_10b794380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b794380; end: 10b7943a3;  */

void FUN_10b794380(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}


