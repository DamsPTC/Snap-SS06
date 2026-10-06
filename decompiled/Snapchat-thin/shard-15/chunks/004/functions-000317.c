/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba78da4; end: 10ba78dbb; -[SCAContactFullSyncRpcResult setRpcAttemptId:] */

void FUN_10ba78da4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fda0f8,4,param_3,0);
  return;
}



/* Entry: 10ba78dbc; end: 10ba78dd3; -[SCAContactFullSyncRpcResult setTriggerSource:] */

void FUN_10ba78dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb6978,5,param_3,0);
  return;
}



/* Entry: 10ba78dd4; end: 10ba78dd7; -[SCAContactFullSyncRpcResult getFieldNumberToFieldDict] */

void FUN_10ba78dd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba78dd8; end: 10ba78de3; -[SCAContactFullSyncRpcResult toProtoWithAllowedFields:] */

void FUN_10ba78dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba78de4; end: 10ba78deb; -[SCAContactFullSyncRpcResult getPayloadIdentifier] */

undefined8 FUN_10ba78de4(void)

{
  return 0x19ed;
}



/* Entry: 10ba78dec; end: 10ba78df7; -[SCAContactsInvitesPageEnd getEventName] */

undefined ** FUN_10ba78dec(void)

{
  return &PTR____CFConstantStringClassReference_110fda158;
}



/* Entry: 10ba78df8; end: 10ba78dff; -[SCAContactsInvitesPageEnd getEventQoS] */

undefined8 FUN_10ba78df8(void)

{
  return 1;
}



/* Entry: 10ba78e00; end: 10ba78e53; -[SCAContactsInvitesPageEnd setContactsAvailable:] */

void FUN_10ba78e00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fda178,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba78e54; end: 10ba78ea7; -[SCAContactsInvitesPageEnd setContactsInviteShareAttempts:] */

void FUN_10ba78e54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fda198,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba78ea8; end: 10ba78efb; -[SCAContactsInvitesPageEnd setContactsSeen:] */

void FUN_10ba78ea8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fda1b8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba78efc; end: 10ba78f4f; -[SCAContactsInvitesPageEnd setContactsSelected:] */

void FUN_10ba78efc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fda1d8,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba78f50; end: 10ba78fcf; -[SCAContactsInvitesPageEnd setSource:] */

void FUN_10ba78f50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10ba77640(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba78fd0; end: 10ba79023; -[SCAContactsInvitesPageEnd setTimeSpentMs:] */

void FUN_10ba78fd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fda1f8,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba79024; end: 10ba79027; -[SCAContactsInvitesPageEnd getFieldNumberToFieldDict] */

void FUN_10ba79024(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba79028; end: 10ba79033; -[SCAContactsInvitesPageEnd toProtoWithAllowedFields:] */

void FUN_10ba79028(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba79034; end: 10ba7903b; -[SCAContactsInvitesPageEnd getPayloadIdentifier] */

undefined8 FUN_10ba79034(void)

{
  return 0xc53;
}



/* Entry: 10ba7903c; end: 10ba79047; -[SCAContactsInvitesPageView getEventName] */

undefined ** FUN_10ba7903c(void)

{
  return &PTR____CFConstantStringClassReference_110fda218;
}



/* Entry: 10ba79048; end: 10ba7904f; -[SCAContactsInvitesPageView getEventQoS] */

undefined8 FUN_10ba79048(void)

{
  return 1;
}



/* Entry: 10ba79050; end: 10ba790cf; -[SCAContactsInvitesPageView setSource:] */

void FUN_10ba79050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10ba77640(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba790d0; end: 10ba790d3; -[SCAContactsInvitesPageView getFieldNumberToFieldDict] */

void FUN_10ba790d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba790d4; end: 10ba790df; -[SCAContactsInvitesPageView toProtoWithAllowedFields:] */

void FUN_10ba790d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba790e0; end: 10ba790e7; -[SCAContactsInvitesPageView getPayloadIdentifier] */

undefined8 FUN_10ba790e0(void)

{
  return 0xc54;
}



/* Entry: 10ba790e8; end: 10ba790f3; -[SCAFriendActionEndEvent getEventName] */

undefined ** FUN_10ba790e8(void)

{
  return &PTR____CFConstantStringClassReference_110fda238;
}



/* Entry: 10ba790f4; end: 10ba790fb; -[SCAFriendActionEndEvent getEventQoS] */

undefined8 FUN_10ba790f4(void)

{
  return 1;
}



/* Entry: 10ba790fc; end: 10ba7914f; -[SCAFriendActionEndEvent setActionNetworkLatencyUs:] */

void FUN_10ba790fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fda258,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba79150; end: 10ba791a3; -[SCAFriendActionEndEvent setActionUiLatencyUs:] */

void FUN_10ba79150(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fda278,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba791a4; end: 10ba791bb; -[SCAFriendActionEndEvent setErrorMessage:] */

void FUN_10ba791a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e0a338,4,param_3,0);
  return;
}



/* Entry: 10ba791bc; end: 10ba7923b; -[SCAFriendActionEndEvent setFriendActionType:] */

void FUN_10ba791bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba77654(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fda298,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba7923c; end: 10ba7928f; -[SCAFriendActionEndEvent setIsCancelled:] */

void FUN_10ba7923c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fda2b8,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba79290; end: 10ba792e3; -[SCAFriendActionEndEvent setIndex:] */

void FUN_10ba79290(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110de1e58,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba792e4; end: 10ba792fb; -[SCAFriendActionEndEvent setPlacement:] */

void FUN_10ba792e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110df9a98,8,param_3,0);
  return;
}



/* Entry: 10ba792fc; end: 10ba79313; -[SCAFriendActionEndEvent setSource:] */

void FUN_10ba792fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dae8d8,9,param_3,0);
  return;
}



/* Entry: 10ba79314; end: 10ba79367; -[SCAFriendActionEndEvent setSucceeded:] */

void FUN_10ba79314(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dfaef8,10,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba79368; end: 10ba7937f; -[SCAFriendActionEndEvent setToFriendUserId:] */

void FUN_10ba79368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fda2d8,0xb,param_3,0);
  return;
}



/* Entry: 10ba79380; end: 10ba793c7; -[SCAFriendActionEndEvent setPlacementInfo:] */

void FUN_10ba79380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fda2f8,0xc,param_3,6
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba793c8; end: 10ba793df; -[SCAFriendActionEndEvent setSectionName:] */

void FUN_10ba793c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc1438,0xd,param_3,0);
  return;
}



/* Entry: 10ba793e0; end: 10ba793f7; -[SCAFriendActionEndEvent setShortcutId:] */

void FUN_10ba793e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e1f8d8,0xe,param_3,0);
  return;
}



/* Entry: 10ba793f8; end: 10ba7940f; -[SCAFriendActionEndEvent setAddFriendsPageSessionId:] */

void FUN_10ba793f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa34f8,0xf,param_3,0);
  return;
}



/* Entry: 10ba79410; end: 10ba79427; -[SCAFriendActionEndEvent setSuggestionFetchRequestId:] */

void FUN_10ba79410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd9ef8,0x10,param_3,0);
  return;
}



/* Entry: 10ba79428; end: 10ba7947b; -[SCAFriendActionEndEvent setErrorCode:] */

void FUN_10ba79428(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110db0dd8,0x11,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba7947c; end: 10ba79493; -[SCAFriendActionEndEvent setInAppNotificationId:] */

void FUN_10ba7947c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fda318,0x12,param_3,0);
  return;
}



/* Entry: 10ba79494; end: 10ba794ab; -[SCAFriendActionEndEvent setInAppNotificationTimeToAddFriendMs:] */

void FUN_10ba79494(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fda338,0x13,param_3,0);
  return;
}



/* Entry: 10ba794ac; end: 10ba7956b; -[SCAFriendActionEndEvent prepareDictionary:] */

void FUN_10ba794ac(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_38 = PTR_PTR_11270c7e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10ba7956c; end: 10ba7956f; -[SCAFriendActionEndEvent getFieldNumberToFieldDict] */

void FUN_10ba7956c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba79570; end: 10ba7957b; -[SCAFriendActionEndEvent toProtoWithAllowedFields:] */

void FUN_10ba79570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,3,param_3);
  return;
}



/* Entry: 10ba7957c; end: 10ba79583; -[SCAFriendActionEndEvent getPayloadIdentifier] */

undefined8 FUN_10ba7957c(void)

{
  return 0x3a8;
}



/* Entry: 10ba79584; end: 10ba7958f; -[SCAFriendAddFailure getEventName] */

undefined ** FUN_10ba79584(void)

{
  return &PTR____CFConstantStringClassReference_110fda358;
}



/* Entry: 10ba79590; end: 10ba79597; -[SCAFriendAddFailure getEventQoS] */

undefined8 FUN_10ba79590(void)

{
  return 1;
}



/* Entry: 10ba79598; end: 10ba79617; -[SCAFriendAddFailure setAddSource:] */

void FUN_10ba79598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10ba779c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fd9c38,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba79618; end: 10ba79697; -[SCAFriendAddFailure setSource:] */

void FUN_10ba79618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba79698; end: 10ba7969b; -[SCAFriendAddFailure getFieldNumberToFieldDict] */

void FUN_10ba79698(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba7969c; end: 10ba796a7; -[SCAFriendAddFailure toProtoWithAllowedFields:] */

void FUN_10ba7969c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba796a8; end: 10ba796af; -[SCAFriendAddFailure getPayloadIdentifier] */

undefined8 FUN_10ba796a8(void)

{
  return 0x3ac;
}



/* Entry: 10ba796b0; end: 10ba796bb; -[SCAFriendAddSeen getEventName] */

undefined ** FUN_10ba796b0(void)

{
  return &PTR____CFConstantStringClassReference_110fda378;
}



/* Entry: 10ba796bc; end: 10ba796c3; -[SCAFriendAddSeen getEventQoS] */

undefined8 FUN_10ba796bc(void)

{
  return 1;
}



/* Entry: 10ba796c4; end: 10ba79717; -[SCAFriendAddSeen setFriendSeenCount:] */

void FUN_10ba796c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fda398,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba79718; end: 10ba79797; -[SCAFriendAddSeen setSource:] */

void FUN_10ba79718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba79798; end: 10ba7979b; -[SCAFriendAddSeen getFieldNumberToFieldDict] */

void FUN_10ba79798(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba7979c; end: 10ba797a7; -[SCAFriendAddSeen toProtoWithAllowedFields:] */

void FUN_10ba7979c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba797a8; end: 10ba797af; -[SCAFriendAddSeen getPayloadIdentifier] */

undefined8 FUN_10ba797a8(void)

{
  return 0x3ad;
}



/* Entry: 10ba797b0; end: 10ba797bb; -[SCAFriendAddSuccess getEventName] */

undefined ** FUN_10ba797b0(void)

{
  return &PTR____CFConstantStringClassReference_110fda3b8;
}



/* Entry: 10ba797bc; end: 10ba797c3; -[SCAFriendAddSuccess getEventQoS] */

undefined8 FUN_10ba797bc(void)

{
  return 1;
}



/* Entry: 10ba797c4; end: 10ba79843; -[SCAFriendAddSuccess setAddSource:] */

void FUN_10ba797c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10ba779c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fd9c38,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba79844; end: 10ba798c3; -[SCAFriendAddSuccess setSource:] */

void FUN_10ba79844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba798c4; end: 10ba798c7; -[SCAFriendAddSuccess getFieldNumberToFieldDict] */

void FUN_10ba798c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba798c8; end: 10ba798d3; -[SCAFriendAddSuccess toProtoWithAllowedFields:] */

void FUN_10ba798c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba798d4; end: 10ba798db; -[SCAFriendAddSuccess getPayloadIdentifier] */

undefined8 FUN_10ba798d4(void)

{
  return 0x3ae;
}



/* Entry: 10ba798dc; end: 10ba798e7; -[SCAFriendInviteButtonTap getEventName] */

undefined ** FUN_10ba798dc(void)

{
  return &PTR____CFConstantStringClassReference_110fda3d8;
}



/* Entry: 10ba798e8; end: 10ba798ef; -[SCAFriendInviteButtonTap getEventQoS] */

undefined8 FUN_10ba798e8(void)

{
  return 1;
}



/* Entry: 10ba798f0; end: 10ba7996f; -[SCAFriendInviteButtonTap setInviteFriendPageSource:] */

void FUN_10ba798f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba77920(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fda3f8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba79970; end: 10ba79973; -[SCAFriendInviteButtonTap getFieldNumberToFieldDict] */

void FUN_10ba79970(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba79974; end: 10ba7997f; -[SCAFriendInviteButtonTap toProtoWithAllowedFields:] */

void FUN_10ba79974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba79980; end: 10ba79987; -[SCAFriendInviteButtonTap getPayloadIdentifier] */

undefined8 FUN_10ba79980(void)

{
  return 0x3b5;
}



/* Entry: 10ba79988; end: 10ba79993; -[SCAFriendNearbyFriendSeenEvent getEventName] */

undefined ** FUN_10ba79988(void)

{
  return &PTR____CFConstantStringClassReference_110fda418;
}



/* Entry: 10ba79994; end: 10ba7999b; -[SCAFriendNearbyFriendSeenEvent getEventQoS] */

undefined8 FUN_10ba79994(void)

{
  return 1;
}



/* Entry: 10ba7999c; end: 10ba799a7; -[SCAFriendNearbyFriendSeenEvent getPerUserSamplingRateV2] */

undefined8 FUN_10ba7999c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba799a8; end: 10ba799fb; -[SCAFriendNearbyFriendSeenEvent setIndex:] */

void FUN_10ba799a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110de1e58,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba799fc; end: 10ba79a4f; -[SCAFriendNearbyFriendSeenEvent setIsFriend:] */

void FUN_10ba799fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e81c58,3,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba79a50; end: 10ba79a67; -[SCAFriendNearbyFriendSeenEvent setSeenFriendUserId:] */

void FUN_10ba79a50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fda438,4,param_3,0);
  return;
}



/* Entry: 10ba79a68; end: 10ba79a6b; -[SCAFriendNearbyFriendSeenEvent getFieldNumberToFieldDict] */

void FUN_10ba79a68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba79a6c; end: 10ba79a77; -[SCAFriendNearbyFriendSeenEvent toProtoWithAllowedFields:] */

void FUN_10ba79a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba79a78; end: 10ba79a7f; -[SCAFriendNearbyFriendSeenEvent getPayloadIdentifier] */

undefined8 FUN_10ba79a78(void)

{
  return 0x1304;
}



/* Entry: 10ba79a80; end: 10ba79a8b; -[SCAFriendNearbyFriendsSessionEndEvent getEventName] */

undefined ** FUN_10ba79a80(void)

{
  return &PTR____CFConstantStringClassReference_110fda458;
}



/* Entry: 10ba79a8c; end: 10ba79a93; -[SCAFriendNearbyFriendsSessionEndEvent getEventQoS] */

undefined8 FUN_10ba79a8c(void)

{
  return 1;
}



/* Entry: 10ba79a94; end: 10ba79a9f; -[SCAFriendNearbyFriendsSessionEndEvent getPerUserSamplingRateV2] */

undefined8 FUN_10ba79a94(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba79aa0; end: 10ba79af3; -[SCAFriendNearbyFriendsSessionEndEvent setChatIconClickCount:] */

void FUN_10ba79aa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fda478,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba79af4; end: 10ba79b47; -[SCAFriendNearbyFriendsSessionEndEvent setMaxNearbyFriendsCount:] */

void FUN_10ba79af4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fda498,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba79b48; end: 10ba79b9b; -[SCAFriendNearbyFriendsSessionEndEvent setSessionDurationSec:] */

void FUN_10ba79b48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fda4b8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba79b9c; end: 10ba79bef; -[SCAFriendNearbyFriendsSessionEndEvent setSnapIconClickCount:] */

void FUN_10ba79b9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fda4d8,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba79bf0; end: 10ba79c43; -[SCAFriendNearbyFriendsSessionEndEvent setFriendsAddedCount:] */

void FUN_10ba79bf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fda4f8,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba79c44; end: 10ba79c97; -[SCAFriendNearbyFriendsSessionEndEvent setProfilePageViewCount:] */

void FUN_10ba79c44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fda518,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba79c98; end: 10ba79c9b; -[SCAFriendNearbyFriendsSessionEndEvent getFieldNumberToFieldDict] */

void FUN_10ba79c98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba79c9c; end: 10ba79ca7; -[SCAFriendNearbyFriendsSessionEndEvent toProtoWithAllowedFields:] */

void FUN_10ba79c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba79ca8; end: 10ba79caf; -[SCAFriendNearbyFriendsSessionEndEvent getPayloadIdentifier] */

undefined8 FUN_10ba79ca8(void)

{
  return 0x12e8;
}



/* Entry: 10ba79cb0; end: 10ba79cbb; -[SCAFriendPageExit getEventName] */

undefined ** FUN_10ba79cb0(void)

{
  return &PTR____CFConstantStringClassReference_110fda538;
}



/* Entry: 10ba79cbc; end: 10ba79cc3; -[SCAFriendPageExit getEventQoS] */

undefined8 FUN_10ba79cbc(void)

{
  return 1;
}



/* Entry: 10ba79cc4; end: 10ba79dab; -[SCAFriendPageExit setFriendSections:] */

void FUN_10ba79cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10ba79dac;
  puStack_40 = &UNK_1108709c0;
  puStack_38 = puVar2;
  _objc_retain();
  func_0x00010bf97e80(param_3,param_2,&puStack_58);
  uVar1 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fda558,2,puVar2,10,
                      uVar1);
  _objc_release(uVar1);
  _objc_release(puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10ba79dac; end: 10ba79dff;  */

void FUN_10ba79dac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10ba776b4(param_2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba79e00; end: 10ba79e7f; -[SCAFriendPageExit setPage:] */

void FUN_10ba79e00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba77694(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daedd8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba79e80; end: 10ba79ed3; -[SCAFriendPageExit setViewTimeMs:] */

void FUN_10ba79e80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbe478,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


