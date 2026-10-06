/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bbd48a8; end: 10bbd48b3; -[SCAGamesChatMessageViewTransition getEventName] */

undefined ** FUN_10bbd48a8(void)

{
  return &PTR____CFConstantStringClassReference_110fc6a38;
}



/* Entry: 10bbd48b4; end: 10bbd48bb; -[SCAGamesChatMessageViewTransition getEventQoS] */

undefined8 FUN_10bbd48b4(void)

{
  return 1;
}



/* Entry: 10bbd48bc; end: 10bbd493b; -[SCAGamesChatMessageViewTransition setTransition:] */

void FUN_10bbd48bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bafc59c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110ed3e78,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbd493c; end: 10bbd495f; -[SCAGamesChatMessageViewTransition getFieldNumberToFieldDict] */

void FUN_10bbd493c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbd4960; end: 10bbd4997; -[SCAGamesChatMessageViewTransition addToProtoDictionary] */

void FUN_10bbd4960(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bbd4998; end: 10bbd49ef; -[SCAGamesChatMessageViewTransition toProtoWithAllowedFields:] */

void FUN_10bbd4998(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bbd49f0; end: 10bbd49f7; -[SCAGamesChatMessageViewTransition getPayloadIdentifier] */

undefined8 FUN_10bbd49f0(void)

{
  return 0x185a;
}



/* Entry: 10bbd49f8; end: 10bbd4d7b; -[SCAGamesMessageCTAAction fromDictionary:] */

void FUN_10bbd49f8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d460;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__1125cc478,param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c183b80(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1a1f80(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1a1fe0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b18e0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b2d20(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1bbd60(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1c6f00(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbd4d7c; end: 10bbd4d87; -[SCAGamesMessageCTAAction getEventName] */

undefined ** FUN_10bbd4d7c(void)

{
  return &PTR____CFConstantStringClassReference_110fc6a58;
}



/* Entry: 10bbd4d88; end: 10bbd4d8f; -[SCAGamesMessageCTAAction getEventQoS] */

undefined8 FUN_10bbd4d88(void)

{
  return 1;
}



/* Entry: 10bbd4d90; end: 10bbd4da7; -[SCAGamesMessageCTAAction setConversationId:] */

void FUN_10bbd4d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e0fcf8,2,param_3,0);
  return;
}



/* Entry: 10bbd4da8; end: 10bbd4dfb; -[SCAGamesMessageCTAAction setGameParticipantCount:] */

void FUN_10bbd4da8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101ca38,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbd4dfc; end: 10bbd4e13; -[SCAGamesMessageCTAAction setGameSessionId:] */

void FUN_10bbd4dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101ca58,4,param_3,0);
  return;
}



/* Entry: 10bbd4e14; end: 10bbd4e67; -[SCAGamesMessageCTAAction setIsGroup:] */

void FUN_10bbd4e14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e204d8,5,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbd4e68; end: 10bbd4ebb; -[SCAGamesMessageCTAAction setIsNewGame:] */

void FUN_10bbd4e68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101cab8,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbd4ebc; end: 10bbd4ed3; -[SCAGamesMessageCTAAction setLensId:] */

void FUN_10bbd4ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110db19f8,7,param_3,0);
  return;
}



/* Entry: 10bbd4ed4; end: 10bbd4eeb; -[SCAGamesMessageCTAAction setMessageId:] */

void FUN_10bbd4ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e0fd18,8,param_3,0);
  return;
}



/* Entry: 10bbd4eec; end: 10bbd4eef; -[SCAGamesMessageCTAAction getFieldNumberToFieldDict] */

void FUN_10bbd4eec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbd4ef0; end: 10bbd4efb; -[SCAGamesMessageCTAAction toProtoWithAllowedFields:] */

void FUN_10bbd4ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bbd4efc; end: 10bbd4f03; -[SCAGamesMessageCTAAction getPayloadIdentifier] */

undefined8 FUN_10bbd4efc(void)

{
  return 0x1826;
}



/* Entry: 10bbd4f04; end: 10bbd5287; -[SCAGamesMessageImpression fromDictionary:] */

void FUN_10bbd4f04(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d468;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__1125cc478,param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c183b80(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1a1f80(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1a1fe0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b18e0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b2d20(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1bbd60(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1c6f00(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbd5288; end: 10bbd5293; -[SCAGamesMessageImpression getEventName] */

undefined ** FUN_10bbd5288(void)

{
  return &PTR____CFConstantStringClassReference_110fc6a78;
}



/* Entry: 10bbd5294; end: 10bbd529b; -[SCAGamesMessageImpression getEventQoS] */

undefined8 FUN_10bbd5294(void)

{
  return 1;
}



/* Entry: 10bbd529c; end: 10bbd52b3; -[SCAGamesMessageImpression setConversationId:] */

void FUN_10bbd529c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e0fcf8,2,param_3,0);
  return;
}



/* Entry: 10bbd52b4; end: 10bbd5307; -[SCAGamesMessageImpression setGameParticipantCount:] */

void FUN_10bbd52b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101ca38,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbd5308; end: 10bbd531f; -[SCAGamesMessageImpression setGameSessionId:] */

void FUN_10bbd5308(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101ca58,4,param_3,0);
  return;
}



/* Entry: 10bbd5320; end: 10bbd5373; -[SCAGamesMessageImpression setIsGroup:] */

void FUN_10bbd5320(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e204d8,5,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbd5374; end: 10bbd53c7; -[SCAGamesMessageImpression setIsNewGame:] */

void FUN_10bbd5374(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101cab8,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbd53c8; end: 10bbd53df; -[SCAGamesMessageImpression setLensId:] */

void FUN_10bbd53c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110db19f8,7,param_3,0);
  return;
}



/* Entry: 10bbd53e0; end: 10bbd53f7; -[SCAGamesMessageImpression setMessageId:] */

void FUN_10bbd53e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e0fd18,8,param_3,0);
  return;
}



/* Entry: 10bbd53f8; end: 10bbd53fb; -[SCAGamesMessageImpression getFieldNumberToFieldDict] */

void FUN_10bbd53f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbd53fc; end: 10bbd5407; -[SCAGamesMessageImpression toProtoWithAllowedFields:] */

void FUN_10bbd53fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bbd5408; end: 10bbd540f; -[SCAGamesMessageImpression getPayloadIdentifier] */

undefined8 FUN_10bbd5408(void)

{
  return 0x1827;
}



/* Entry: 10bbd5410; end: 10bbd577b; -[SCAGenAIOpen fromDictionary:] */

void FUN_10bbd5410(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d470;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__1125cc478,param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bafc65c();
    func_0x00010c196980(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c19c240(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1bcc00(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b1c00(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bb11f80();
    func_0x00010c206e60(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bb00104();
    func_0x00010c1bcca0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bae86f4();
    func_0x00010c206c40(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbd577c; end: 10bbd5787; -[SCAGenAIOpen getEventName] */

undefined ** FUN_10bbd577c(void)

{
  return &PTR____CFConstantStringClassReference_110fc6a98;
}



/* Entry: 10bbd5788; end: 10bbd578f; -[SCAGenAIOpen getEventQoS] */

undefined8 FUN_10bbd5788(void)

{
  return 1;
}



/* Entry: 10bbd5790; end: 10bbd580f; -[SCAGenAIOpen setEntryPoint:] */

void FUN_10bbd5790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bafc63c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110db16f8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbd5810; end: 10bbd5827; -[SCAGenAIOpen setFilterLensId:] */

void FUN_10bbd5810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110eb5d58,3,param_3,0);
  return;
}



/* Entry: 10bbd5828; end: 10bbd583f; -[SCAGenAIOpen setLensSessionId:] */

void FUN_10bbd5828(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fae358,4,param_3,0);
  return;
}



/* Entry: 10bbd5840; end: 10bbd5893; -[SCAGenAIOpen setIsInActiveMode:] */

void FUN_10bbd5840(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101cad8,5,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbd5894; end: 10bbd5913; -[SCAGenAIOpen setSourceFeatureType:] */

void FUN_10bbd5894(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb11f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_111014e58,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbd5914; end: 10bbd5993; -[SCAGenAIOpen setLensSource:] */

void FUN_10bbd5914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bbd5994; end: 10bbd5a13; -[SCAGenAIOpen setSource:] */

void FUN_10bbd5994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bae86d4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbd5a14; end: 10bbd5a17; -[SCAGenAIOpen getFieldNumberToFieldDict] */

void FUN_10bbd5a14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbd5a18; end: 10bbd5a23; -[SCAGenAIOpen toProtoWithAllowedFields:] */

void FUN_10bbd5a18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bbd5a24; end: 10bbd5a2b; -[SCAGenAIOpen getPayloadIdentifier] */

undefined8 FUN_10bbd5a24(void)

{
  return 0x1786;
}



/* Entry: 10bbd5a2c; end: 10bbd5e9f; -[SCAGenAiToolImpression fromDictionary:] */

void FUN_10bbd5a2c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d478;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__1125cc478,param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bafc904();
    func_0x00010c161620(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c179280(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c185a80(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10baf5044();
    func_0x00010c1939c0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c205660(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bafc828();
    func_0x00010c216e20(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1833c0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c20db00(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1d56e0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbd5ea0; end: 10bbd5eab; -[SCAGenAiToolImpression getEventName] */

undefined ** FUN_10bbd5ea0(void)

{
  return &PTR____CFConstantStringClassReference_110fc6ab8;
}



/* Entry: 10bbd5eac; end: 10bbd5eb3; -[SCAGenAiToolImpression getEventQoS] */

undefined8 FUN_10bbd5eac(void)

{
  return 1;
}



/* Entry: 10bbd5eb4; end: 10bbd5ebf; -[SCAGenAiToolImpression getPerUserSamplingRateV2] */

undefined8 FUN_10bbd5eb4(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bbd5ec0; end: 10bbd5f3f; -[SCAGenAiToolImpression setAction:] */

void FUN_10bbd5ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bafc8e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbd5f40; end: 10bbd5f57; -[SCAGenAiToolImpression setCaptureSessionId:] */

void FUN_10bbd5f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea05f8,3,param_3,0);
  return;
}



/* Entry: 10bbd5f58; end: 10bbd5f6f; -[SCAGenAiToolImpression setCreativeToolsEditSessionId:] */

void FUN_10bbd5f58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fce818,4,param_3,0);
  return;
}



/* Entry: 10bbd5f70; end: 10bbd5fef; -[SCAGenAiToolImpression setEditToolName:] */

void FUN_10bbd5f70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf5024(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_111019db8,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbd5ff0; end: 10bbd6007; -[SCAGenAiToolImpression setSnapSessionId:] */

void FUN_10bbd5ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e445d8,6,param_3,0);
  return;
}



/* Entry: 10bbd6008; end: 10bbd6087; -[SCAGenAiToolImpression setTool:] */

void FUN_10bbd6008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bafc808(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_11101caf8,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbd6088; end: 10bbd609f; -[SCAGenAiToolImpression setContextSessionId:] */

void FUN_10bbd6088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110eb5bf8,8,param_3,0);
  return;
}



/* Entry: 10bbd60a0; end: 10bbd60b7; -[SCAGenAiToolImpression setStorySnapId:] */

void FUN_10bbd60a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea2038,9,param_3,0);
  return;
}



/* Entry: 10bbd60b8; end: 10bbd60cf; -[SCAGenAiToolImpression setOperaSessionId:] */

void FUN_10bbd60b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f42e78,10,param_3,0);
  return;
}



/* Entry: 10bbd60d0; end: 10bbd60d3; -[SCAGenAiToolImpression getFieldNumberToFieldDict] */

void FUN_10bbd60d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbd60d4; end: 10bbd60df; -[SCAGenAiToolImpression toProtoWithAllowedFields:] */

void FUN_10bbd60d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10bbd60e0; end: 10bbd60e7; -[SCAGenAiToolImpression getPayloadIdentifier] */

undefined8 FUN_10bbd60e0(void)

{
  return 0x12d1;
}



/* Entry: 10bbd60e8; end: 10bbd68af; -[SCAGenAiToolInteraction fromDictionary:] */

undefined ** FUN_10bbd60e8(ulong param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uStack_f8;
  undefined *puStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_f0 = PTR_PTR_11270d480;
  uStack_f8 = param_1;
  _objc_msgSendSuper2(&uStack_f8,PTR_s_fromDictionary__1125cc478,param_3);
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bafc904();
    func_0x00010c161620(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c179280(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c185a80(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10baf5044();
    func_0x00010c1939c0(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c196fe0(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bafc788();
    func_0x00010c1a2520(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bafc988();
    func_0x00010c1a25c0(param_1);
    _objc_release(ppuVar2);
  }
  puVar5 = PTR_PTR_1126e2c60;
  _objc_alloc(PTR_PTR_1126e2c60);
  func_0x00010c00c560();
  func_0x00010c1c16c0(param_1);
  _objc_release(puVar5);
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c205660(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bafc828();
    func_0x00010c216e20(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    ppuVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppuVar2 != (undefined **)0x0) {
      ppuVar7 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar4);
        }
        uVar3 = param_1;
        func_0x00010be45600();
        if ((uVar3 & 1) == 0) {
          puVar6 = PTR_PTR_1126e2c68;
          _objc_alloc(PTR_PTR_1126e2c68);
          func_0x00010c00c560();
          func_0x00010befa120(puVar5);
          _objc_release(puVar6);
        }
        ppuVar7 = (undefined **)((long)ppuVar7 + 1);
      } while (ppuVar2 != ppuVar7);
      ppuVar2 = ppuVar4;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar4);
    func_0x00010c216e80(param_1);
    _objc_release(puVar5);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c218500(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1833c0(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c20db00(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1d56e0(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110fc6ad8;
}



/* Entry: 10bbd68b0; end: 10bbd68bb; -[SCAGenAiToolInteraction getEventName] */

undefined ** FUN_10bbd68b0(void)

{
  return &PTR____CFConstantStringClassReference_110fc6ad8;
}



/* Entry: 10bbd68bc; end: 10bbd68c3; -[SCAGenAiToolInteraction getEventQoS] */

undefined8 FUN_10bbd68bc(void)

{
  return 1;
}



/* Entry: 10bbd68c4; end: 10bbd6943; -[SCAGenAiToolInteraction setAction:] */

void FUN_10bbd68c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bafc8e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbd6944; end: 10bbd695b; -[SCAGenAiToolInteraction setCaptureSessionId:] */

void FUN_10bbd6944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea05f8,3,param_3,0);
  return;
}



/* Entry: 10bbd695c; end: 10bbd6973; -[SCAGenAiToolInteraction setCreativeToolsEditSessionId:] */

void FUN_10bbd695c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fce818,4,param_3,0);
  return;
}



/* Entry: 10bbd6974; end: 10bbd69f3; -[SCAGenAiToolInteraction setEditToolName:] */

void FUN_10bbd6974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf5024(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_111019db8,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbd69f4; end: 10bbd6a47; -[SCAGenAiToolInteraction setErrorCode:] */

void FUN_10bbd69f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110db0dd8,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbd6a48; end: 10bbd6ac7; -[SCAGenAiToolInteraction setGenAiExitEventType:] */

void FUN_10bbd6a48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bafc768(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_11101cb18,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbd6ac8; end: 10bbd6b47; -[SCAGenAiToolInteraction setGenAiToolInteractionResult:] */

void FUN_10bbd6ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bafc968(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_11101cb38,8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbd6b48; end: 10bbd6b8f; -[SCAGenAiToolInteraction setMagicCaptionData:] */

void FUN_10bbd6b48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce658,9,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbd6b90; end: 10bbd6ba7; -[SCAGenAiToolInteraction setSnapSessionId:] */

void FUN_10bbd6b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e445d8,10,param_3,0);
  return;
}



/* Entry: 10bbd6ba8; end: 10bbd6c27; -[SCAGenAiToolInteraction setTool:] */

void FUN_10bbd6ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bafc808(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_11101caf8,0xb,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbd6c28; end: 10bbd6c6f; -[SCAGenAiToolInteraction setToolLatency:] */

void FUN_10bbd6c28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101cb58,0xc,param_3,
                      0xd);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbd6c70; end: 10bbd6cc3; -[SCAGenAiToolInteraction setTotalLatency:] */

void FUN_10bbd6c70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcd418,0xd,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbd6cc4; end: 10bbd6cdb; -[SCAGenAiToolInteraction setContextSessionId:] */

void FUN_10bbd6cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110eb5bf8,0xe,param_3,0);
  return;
}



/* Entry: 10bbd6cdc; end: 10bbd6cf3; -[SCAGenAiToolInteraction setStorySnapId:] */

void FUN_10bbd6cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea2038,0xf,param_3,0);
  return;
}



/* Entry: 10bbd6cf4; end: 10bbd6d0b; -[SCAGenAiToolInteraction setOperaSessionId:] */

void FUN_10bbd6cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f42e78,0x10,param_3,0);
  return;
}



/* Entry: 10bbd6d0c; end: 10bbd6f13; -[SCAGenAiToolInteraction prepareDictionary:] */

void FUN_10bbd6d0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(lVar1);
    lVar3 = lVar1;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar5 = *plStack_120;
      do {
        lVar6 = 0;
        do {
          if (*plStack_120 != lVar5) {
            _objc_enumerationMutation(lVar1);
          }
          uVar4 = *(undefined8 *)(lStack_128 + lVar6 * 8);
          func_0x00010bf0a640(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(uVar4);
          lVar6 = lVar6 + 1;
        } while (lVar3 != lVar6);
        lVar3 = lVar1;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar1);
    func_0x00010c1d0640(param_3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar3 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  puStack_138 = PTR_PTR_11270d480;
  uStack_140 = param_1;
  _objc_msgSendSuper2(&uStack_140,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bbd6f14; end: 10bbd6f17; -[SCAGenAiToolInteraction getFieldNumberToFieldDict] */

void FUN_10bbd6f14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbd6f18; end: 10bbd6f23; -[SCAGenAiToolInteraction toProtoWithAllowedFields:] */

void FUN_10bbd6f18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10bbd6f24; end: 10bbd6f2b; -[SCAGenAiToolInteraction getPayloadIdentifier] */

undefined8 FUN_10bbd6f24(void)

{
  return 0x12d2;
}



/* Entry: 10bbd6f2c; end: 10bbd70a3; -[SCAGenAiToolLatency initWithDictionary:] */

undefined1 * FUN_10bbd6f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d488;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1b91e0(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      FUN_10bafca7c();
      func_0x00010c20a620(puVar1);
      _objc_release(uVar2);
    }
  }
  puVar4 = (undefined1 *)puVar1;
  func_0x00010c119100();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf529e0();
  puVar3 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)puVar1;
  }
  _objc_retain(puVar3);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 10bbd70a4; end: 10bbd70f7; -[SCAGenAiToolLatency setLatency:] */

void FUN_10bbd70a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110db8578,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbd70f8; end: 10bbd7177; -[SCAGenAiToolLatency setStep:] */

void FUN_10bbd70f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bafca5c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dbdaf8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbd7178; end: 10bbd717b; -[SCAGenAiToolLatency getFieldNumberToFieldDict] */

void FUN_10bbd7178(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbd717c; end: 10bbd7187; -[SCAGenAiToolLatency toProtoWithAllowedFields:] */

void FUN_10bbd717c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10bbd7188; end: 10bbd718f; -[SCAGenAiToolLatency getPayloadIdentifier] */

undefined8 FUN_10bbd7188(void)

{
  return 0x12d3;
}



/* Entry: 10bbd7190; end: 10bbd799f; -[SCAGenerationAttempt fromDictionary:] */

void FUN_10bbd7190(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d490;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__1125cc478,param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c191e80(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c191fa0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1a27e0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1a2800(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1d9da0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1fe120(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c206e60(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c226e20(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c19fd60(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c19c240(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c19f800(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c19f820(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b1220(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b1260(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b2580(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1bcc00(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bb11e84();
    func_0x00010c1de460(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbd79a0; end: 10bbd79ab; -[SCAGenerationAttempt getEventName] */

undefined ** FUN_10bbd79a0(void)

{
  return &PTR____CFConstantStringClassReference_110fc6af8;
}



/* Entry: 10bbd79ac; end: 10bbd79b3; -[SCAGenerationAttempt getEventQoS] */

undefined8 FUN_10bbd79ac(void)

{
  return 1;
}



/* Entry: 10bbd79b4; end: 10bbd79cb; -[SCAGenerationAttempt setDreamsSessionId:] */

void FUN_10bbd79b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe7758,2,param_3,0);
  return;
}



/* Entry: 10bbd79cc; end: 10bbd79e3; -[SCAGenerationAttempt setDreamsType:] */

void FUN_10bbd79cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101cb78,3,param_3,0);
  return;
}



/* Entry: 10bbd79e4; end: 10bbd79fb; -[SCAGenerationAttempt setGenerationAttemptResult:] */

void FUN_10bbd79e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101cb98,4,param_3,0);
  return;
}



/* Entry: 10bbd79fc; end: 10bbd7a13; -[SCAGenerationAttempt setGenerationAttemptSource:] */

void FUN_10bbd79fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101cbb8,5,param_3,0);
  return;
}



/* Entry: 10bbd7a14; end: 10bbd7a2b; -[SCAGenerationAttempt setPaymentType:] */

void FUN_10bbd7a14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc00d8,6,param_3,0);
  return;
}



/* Entry: 10bbd7a2c; end: 10bbd7a43; -[SCAGenerationAttempt setSetId:] */

void FUN_10bbd7a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe7778,7,param_3,0);
  return;
}



/* Entry: 10bbd7a44; end: 10bbd7a5b; -[SCAGenerationAttempt setSourceFeatureType:] */

void FUN_10bbd7a44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_111014e58,8,param_3,0);
  return;
}


