/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba0e1b4; end: 10ba0e273; -[SCACognacActionStartWithFriendsPrompt prepareDictionary:] */

void FUN_10ba0e1b4(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_38 = PTR_PTR_11270c3c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10ba0e274; end: 10ba0e297; -[SCACognacActionStartWithFriendsPrompt getFieldNumberToFieldDict] */

void FUN_10ba0e274(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0e298; end: 10ba0e2cf; -[SCACognacActionStartWithFriendsPrompt addToProtoDictionary] */

void FUN_10ba0e298(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0e2d0; end: 10ba0e327; -[SCACognacActionStartWithFriendsPrompt toProtoWithAllowedFields:] */

void FUN_10ba0e2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0e328; end: 10ba0e32f; -[SCACognacActionStartWithFriendsPrompt getPayloadIdentifier] */

undefined8 FUN_10ba0e328(void)

{
  return 0x20b;
}



/* Entry: 10ba0e330; end: 10ba0e33b; -[SCACognacActionStartWithFriendsSelected getEventName] */

undefined ** FUN_10ba0e330(void)

{
  return &PTR____CFConstantStringClassReference_110fbf838;
}



/* Entry: 10ba0e33c; end: 10ba0e343; -[SCACognacActionStartWithFriendsSelected getEventQoS] */

undefined8 FUN_10ba0e33c(void)

{
  return 1;
}



/* Entry: 10ba0e344; end: 10ba0e38b; -[SCACognacActionStartWithFriendsSelected setCognacMetadata:] */

void FUN_10ba0e344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbf398,3,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba0e38c; end: 10ba0e3df; -[SCACognacActionStartWithFriendsSelected setSelectedFriendCount:] */

void FUN_10ba0e38c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbf858,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0e3e0; end: 10ba0e49f; -[SCACognacActionStartWithFriendsSelected prepareDictionary:] */

void FUN_10ba0e3e0(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_38 = PTR_PTR_11270c3d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10ba0e4a0; end: 10ba0e4c3; -[SCACognacActionStartWithFriendsSelected getFieldNumberToFieldDict] */

void FUN_10ba0e4a0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0e4c4; end: 10ba0e4fb; -[SCACognacActionStartWithFriendsSelected addToProtoDictionary] */

void FUN_10ba0e4c4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0e4fc; end: 10ba0e553; -[SCACognacActionStartWithFriendsSelected toProtoWithAllowedFields:] */

void FUN_10ba0e4fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0e554; end: 10ba0e55b; -[SCACognacActionStartWithFriendsSelected getPayloadIdentifier] */

undefined8 FUN_10ba0e554(void)

{
  return 0x20c;
}



/* Entry: 10ba0e55c; end: 10ba0e567; -[SCACognacActionVoicePartyEnd getEventName] */

undefined ** FUN_10ba0e55c(void)

{
  return &PTR____CFConstantStringClassReference_110fbf878;
}



/* Entry: 10ba0e568; end: 10ba0e56f; -[SCACognacActionVoicePartyEnd getEventQoS] */

undefined8 FUN_10ba0e568(void)

{
  return 1;
}



/* Entry: 10ba0e570; end: 10ba0e5c3; -[SCACognacActionVoicePartyEnd setVoiceTimeSec:] */

void FUN_10ba0e570(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbf898,6,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0e5c4; end: 10ba0e5e7; -[SCACognacActionVoicePartyEnd getFieldNumberToFieldDict] */

void FUN_10ba0e5c4(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0e5e8; end: 10ba0e61f; -[SCACognacActionVoicePartyEnd addToProtoDictionary] */

void FUN_10ba0e5e8(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0e620; end: 10ba0e677; -[SCACognacActionVoicePartyEnd toProtoWithAllowedFields:] */

void FUN_10ba0e620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0e678; end: 10ba0e67f; -[SCACognacActionVoicePartyEnd getPayloadIdentifier] */

undefined8 FUN_10ba0e678(void)

{
  return 0x20e;
}



/* Entry: 10ba0e680; end: 10ba0e68b; -[SCACognacActionVoicePartyStart getEventName] */

undefined ** FUN_10ba0e680(void)

{
  return &PTR____CFConstantStringClassReference_110fbf8b8;
}



/* Entry: 10ba0e68c; end: 10ba0e693; -[SCACognacActionVoicePartyStart getEventQoS] */

undefined8 FUN_10ba0e68c(void)

{
  return 1;
}



/* Entry: 10ba0e694; end: 10ba0e6b7; -[SCACognacActionVoicePartyStart getFieldNumberToFieldDict] */

void FUN_10ba0e694(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0e6b8; end: 10ba0e6ef; -[SCACognacActionVoicePartyStart addToProtoDictionary] */

void FUN_10ba0e6b8(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0e6f0; end: 10ba0e747; -[SCACognacActionVoicePartyStart toProtoWithAllowedFields:] */

void FUN_10ba0e6f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0e748; end: 10ba0e74f; -[SCACognacActionVoicePartyStart getPayloadIdentifier] */

undefined8 FUN_10ba0e748(void)

{
  return 0x20f;
}



/* Entry: 10ba0e750; end: 10ba0e75b; -[SCACognacAdConsume getEventName] */

undefined ** FUN_10ba0e750(void)

{
  return &PTR____CFConstantStringClassReference_110fbf8d8;
}



/* Entry: 10ba0e75c; end: 10ba0e763; -[SCACognacAdConsume getEventQoS] */

undefined8 FUN_10ba0e75c(void)

{
  return 1;
}



/* Entry: 10ba0e764; end: 10ba0e787; -[SCACognacAdConsume getFieldNumberToFieldDict] */

void FUN_10ba0e764(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0e788; end: 10ba0e7bf; -[SCACognacAdConsume addToProtoDictionary] */

void FUN_10ba0e788(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0e7c0; end: 10ba0e817; -[SCACognacAdConsume toProtoWithAllowedFields:] */

void FUN_10ba0e7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0e818; end: 10ba0e81f; -[SCACognacAdConsume getPayloadIdentifier] */

undefined8 FUN_10ba0e818(void)

{
  return 0x210;
}



/* Entry: 10ba0e820; end: 10ba0e82b; -[SCACognacAdEventBase getEventName] */

undefined ** FUN_10ba0e820(void)

{
  return &PTR____CFConstantStringClassReference_110fbf918;
}



/* Entry: 10ba0e82c; end: 10ba0e833; -[SCACognacAdEventBase getEventQoS] */

undefined8 FUN_10ba0e82c(void)

{
  return 1;
}



/* Entry: 10ba0e834; end: 10ba0e87b; -[SCACognacAdEventBase setCognacAdMetadata:] */

void FUN_10ba0e834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbf8f8,3,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba0e87c; end: 10ba0e8c3; -[SCACognacAdEventBase setCognacMetadata:] */

void FUN_10ba0e87c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbf398,4,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba0e8c4; end: 10ba0e9e3; -[SCACognacAdEventBase prepareDictionary:] */

void FUN_10ba0e8c4(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_38 = PTR_PTR_11270c3d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10ba0e9e4; end: 10ba0ea07; -[SCACognacAdEventBase getFieldNumberToFieldDict] */

void FUN_10ba0e9e4(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0ea08; end: 10ba0ea3f; -[SCACognacAdEventBase addToProtoDictionary] */

void FUN_10ba0ea08(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0ea40; end: 10ba0ea97; -[SCACognacAdEventBase toProtoWithAllowedFields:] */

void FUN_10ba0ea40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0ea98; end: 10ba0ea9f; -[SCACognacAdEventBase getPayloadIdentifier] */

undefined8 FUN_10ba0ea98(void)

{
  return 0x211;
}



/* Entry: 10ba0eaa0; end: 10ba0eaab; -[SCACognacAdInitialize getEventName] */

undefined ** FUN_10ba0eaa0(void)

{
  return &PTR____CFConstantStringClassReference_110fbf938;
}



/* Entry: 10ba0eaac; end: 10ba0eab3; -[SCACognacAdInitialize getEventQoS] */

undefined8 FUN_10ba0eaac(void)

{
  return 1;
}



/* Entry: 10ba0eab4; end: 10ba0eacb; -[SCACognacAdInitialize setSlotIds:] */

void FUN_10ba0eab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbf958,6,param_3,0);
  return;
}



/* Entry: 10ba0eacc; end: 10ba0eaef; -[SCACognacAdInitialize getFieldNumberToFieldDict] */

void FUN_10ba0eacc(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0eaf0; end: 10ba0eb27; -[SCACognacAdInitialize addToProtoDictionary] */

void FUN_10ba0eaf0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0eb28; end: 10ba0eb7f; -[SCACognacAdInitialize toProtoWithAllowedFields:] */

void FUN_10ba0eb28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0eb80; end: 10ba0eb87; -[SCACognacAdInitialize getPayloadIdentifier] */

undefined8 FUN_10ba0eb80(void)

{
  return 0x212;
}



/* Entry: 10ba0eb88; end: 10ba0eb9f; -[SCACognacAdMetadata setExternalRequestId:] */

void FUN_10ba0eb88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbf978,2,param_3,0);
  return;
}



/* Entry: 10ba0eba0; end: 10ba0ebb7; -[SCACognacAdMetadata setFailReasons:] */

void FUN_10ba0eba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbf998,3,param_3,0);
  return;
}



/* Entry: 10ba0ebb8; end: 10ba0ebcf; -[SCACognacAdMetadata setSlotId:] */

void FUN_10ba0ebb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbf9b8,4,param_3,0);
  return;
}



/* Entry: 10ba0ebd0; end: 10ba0ec4f; -[SCACognacAdMetadata setStatus:] */

void FUN_10ba0ebd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba0c41c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf4d8,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0ec50; end: 10ba0ec53; -[SCACognacAdMetadata getFieldNumberToFieldDict] */

void FUN_10ba0ec50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0ec54; end: 10ba0ec5f; -[SCACognacAdMetadata toProtoWithAllowedFields:] */

void FUN_10ba0ec54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10ba0ec60; end: 10ba0ec67; -[SCACognacAdMetadata getPayloadIdentifier] */

undefined8 FUN_10ba0ec60(void)

{
  return 0x213;
}



/* Entry: 10ba0ec68; end: 10ba0ec73; -[SCACognacAdPlayback getEventName] */

undefined ** FUN_10ba0ec68(void)

{
  return &PTR____CFConstantStringClassReference_110fbf9d8;
}



/* Entry: 10ba0ec74; end: 10ba0ec7b; -[SCACognacAdPlayback getEventQoS] */

undefined8 FUN_10ba0ec74(void)

{
  return 1;
}



/* Entry: 10ba0ec7c; end: 10ba0ec9f; -[SCACognacAdPlayback getFieldNumberToFieldDict] */

void FUN_10ba0ec7c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0eca0; end: 10ba0ecd7; -[SCACognacAdPlayback addToProtoDictionary] */

void FUN_10ba0eca0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0ecd8; end: 10ba0ed2f; -[SCACognacAdPlayback toProtoWithAllowedFields:] */

void FUN_10ba0ecd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0ed30; end: 10ba0ed37; -[SCACognacAdPlayback getPayloadIdentifier] */

undefined8 FUN_10ba0ed30(void)

{
  return 0x214;
}



/* Entry: 10ba0ed38; end: 10ba0ed43; -[SCACognacAdView getEventName] */

undefined ** FUN_10ba0ed38(void)

{
  return &PTR____CFConstantStringClassReference_110fbf9f8;
}



/* Entry: 10ba0ed44; end: 10ba0ed4b; -[SCACognacAdView getEventQoS] */

undefined8 FUN_10ba0ed44(void)

{
  return 1;
}



/* Entry: 10ba0ed4c; end: 10ba0ed6f; -[SCACognacAdView getFieldNumberToFieldDict] */

void FUN_10ba0ed4c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0ed70; end: 10ba0eda7; -[SCACognacAdView addToProtoDictionary] */

void FUN_10ba0ed70(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0eda8; end: 10ba0edff; -[SCACognacAdView toProtoWithAllowedFields:] */

void FUN_10ba0eda8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0ee00; end: 10ba0ee07; -[SCACognacAdView getPayloadIdentifier] */

undefined8 FUN_10ba0ee00(void)

{
  return 0x215;
}



/* Entry: 10ba0ee08; end: 10ba0ee13; -[SCACognacAlertDismiss getEventName] */

undefined ** FUN_10ba0ee08(void)

{
  return &PTR____CFConstantStringClassReference_110fbfa18;
}



/* Entry: 10ba0ee14; end: 10ba0ee1b; -[SCACognacAlertDismiss getEventQoS] */

undefined8 FUN_10ba0ee14(void)

{
  return 1;
}



/* Entry: 10ba0ee1c; end: 10ba0ee9b; -[SCACognacAlertDismiss setType:] */

void FUN_10ba0ee1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba0c43c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dad058,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0ee9c; end: 10ba0eeef; -[SCACognacAlertDismiss setWentThrough:] */

void FUN_10ba0ee9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfa38,7,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0eef0; end: 10ba0ef13; -[SCACognacAlertDismiss getFieldNumberToFieldDict] */

void FUN_10ba0eef0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0ef14; end: 10ba0ef4b; -[SCACognacAlertDismiss addToProtoDictionary] */

void FUN_10ba0ef14(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0ef4c; end: 10ba0efa3; -[SCACognacAlertDismiss toProtoWithAllowedFields:] */

void FUN_10ba0ef4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0efa4; end: 10ba0efab; -[SCACognacAlertDismiss getPayloadIdentifier] */

undefined8 FUN_10ba0efa4(void)

{
  return 0x216;
}



/* Entry: 10ba0efac; end: 10ba0efb7; -[SCACognacAlertOpen getEventName] */

undefined ** FUN_10ba0efac(void)

{
  return &PTR____CFConstantStringClassReference_110fbfa58;
}



/* Entry: 10ba0efb8; end: 10ba0efbf; -[SCACognacAlertOpen getEventQoS] */

undefined8 FUN_10ba0efb8(void)

{
  return 1;
}



/* Entry: 10ba0efc0; end: 10ba0f03f; -[SCACognacAlertOpen setType:] */

void FUN_10ba0efc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba0c43c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dad058,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0f040; end: 10ba0f0bf; -[SCACognacAlertOpen setSourceType:] */

void FUN_10ba0f040(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baefa44(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2a38,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0f0c0; end: 10ba0f0e3; -[SCACognacAlertOpen getFieldNumberToFieldDict] */

void FUN_10ba0f0c0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0f0e4; end: 10ba0f11b; -[SCACognacAlertOpen addToProtoDictionary] */

void FUN_10ba0f0e4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0f11c; end: 10ba0f173; -[SCACognacAlertOpen toProtoWithAllowedFields:] */

void FUN_10ba0f11c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0f174; end: 10ba0f17b; -[SCACognacAlertOpen getPayloadIdentifier] */

undefined8 FUN_10ba0f174(void)

{
  return 0x217;
}



/* Entry: 10ba0f17c; end: 10ba0f187; -[SCACognacChatDockClick getEventName] */

undefined ** FUN_10ba0f17c(void)

{
  return &PTR____CFConstantStringClassReference_110fbfa78;
}



/* Entry: 10ba0f188; end: 10ba0f18f; -[SCACognacChatDockClick getEventQoS] */

undefined8 FUN_10ba0f188(void)

{
  return 1;
}



/* Entry: 10ba0f190; end: 10ba0f1b3; -[SCACognacChatDockClick getFieldNumberToFieldDict] */

void FUN_10ba0f190(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0f1b4; end: 10ba0f1eb; -[SCACognacChatDockClick addToProtoDictionary] */

void FUN_10ba0f1b4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0f1ec; end: 10ba0f243; -[SCACognacChatDockClick toProtoWithAllowedFields:] */

void FUN_10ba0f1ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0f244; end: 10ba0f24b; -[SCACognacChatDockClick getPayloadIdentifier] */

undefined8 FUN_10ba0f244(void)

{
  return 0x21b;
}



/* Entry: 10ba0f24c; end: 10ba0f257; -[SCACognacChatDockEventBase getEventName] */

undefined ** FUN_10ba0f24c(void)

{
  return &PTR____CFConstantStringClassReference_110e6cc78;
}



/* Entry: 10ba0f258; end: 10ba0f25f; -[SCACognacChatDockEventBase getEventQoS] */

undefined8 FUN_10ba0f258(void)

{
  return 1;
}



/* Entry: 10ba0f260; end: 10ba0f2a7; -[SCACognacChatDockEventBase setChatDockMetadata:] */

void FUN_10ba0f260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbf378,3,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba0f2a8; end: 10ba0f2bf; -[SCACognacChatDockEventBase setCognacId:] */

void FUN_10ba0f2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbfa98,4,param_3,0);
  return;
}



/* Entry: 10ba0f2c0; end: 10ba0f37f; -[SCACognacChatDockEventBase prepareDictionary:] */

void FUN_10ba0f2c0(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_38 = PTR_PTR_11270c3e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10ba0f380; end: 10ba0f3a3; -[SCACognacChatDockEventBase getFieldNumberToFieldDict] */

void FUN_10ba0f380(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0f3a4; end: 10ba0f3db; -[SCACognacChatDockEventBase addToProtoDictionary] */

void FUN_10ba0f3a4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0f3dc; end: 10ba0f433; -[SCACognacChatDockEventBase toProtoWithAllowedFields:] */

void FUN_10ba0f3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0f434; end: 10ba0f43b; -[SCACognacChatDockEventBase getPayloadIdentifier] */

undefined8 FUN_10ba0f434(void)

{
  return 0x21c;
}



/* Entry: 10ba0f43c; end: 10ba0f447; -[SCACognacChatDockHide getEventName] */

undefined ** FUN_10ba0f43c(void)

{
  return &PTR____CFConstantStringClassReference_110fbfab8;
}


