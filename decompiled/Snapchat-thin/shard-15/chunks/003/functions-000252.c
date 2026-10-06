/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba0f448; end: 10ba0f44f; -[SCACognacChatDockHide getEventQoS] */

undefined8 FUN_10ba0f448(void)

{
  return 1;
}



/* Entry: 10ba0f450; end: 10ba0f4cf; -[SCACognacChatDockHide setCognacHideSource:] */

void FUN_10ba0f450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baefa44(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfad8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0f4d0; end: 10ba0f54f; -[SCACognacChatDockHide setStatus:] */

void FUN_10ba0f4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba0c41c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf4d8,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0f550; end: 10ba0f573; -[SCACognacChatDockHide getFieldNumberToFieldDict] */

void FUN_10ba0f550(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0f574; end: 10ba0f5ab; -[SCACognacChatDockHide addToProtoDictionary] */

void FUN_10ba0f574(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0f5ac; end: 10ba0f603; -[SCACognacChatDockHide toProtoWithAllowedFields:] */

void FUN_10ba0f5ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0f604; end: 10ba0f60b; -[SCACognacChatDockHide getPayloadIdentifier] */

undefined8 FUN_10ba0f604(void)

{
  return 0x21d;
}



/* Entry: 10ba0f60c; end: 10ba0f617; -[SCACognacContextSwitchAttempt getEventName] */

undefined ** FUN_10ba0f60c(void)

{
  return &PTR____CFConstantStringClassReference_110fbfaf8;
}



/* Entry: 10ba0f618; end: 10ba0f61f; -[SCACognacContextSwitchAttempt getEventQoS] */

undefined8 FUN_10ba0f618(void)

{
  return 1;
}



/* Entry: 10ba0f620; end: 10ba0f637; -[SCACognacContextSwitchAttempt setChatDockIdTo:] */

void FUN_10ba0f620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbf498,3,param_3,0);
  return;
}



/* Entry: 10ba0f638; end: 10ba0f65b; -[SCACognacContextSwitchAttempt getFieldNumberToFieldDict] */

void FUN_10ba0f638(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0f65c; end: 10ba0f693; -[SCACognacContextSwitchAttempt addToProtoDictionary] */

void FUN_10ba0f65c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0f694; end: 10ba0f6eb; -[SCACognacContextSwitchAttempt toProtoWithAllowedFields:] */

void FUN_10ba0f694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0f6ec; end: 10ba0f6f3; -[SCACognacContextSwitchAttempt getPayloadIdentifier] */

undefined8 FUN_10ba0f6ec(void)

{
  return 0xb15;
}



/* Entry: 10ba0f6f4; end: 10ba0f6ff; -[SCACognacContextSwitchSuccess getEventName] */

undefined ** FUN_10ba0f6f4(void)

{
  return &PTR____CFConstantStringClassReference_110fbfb18;
}



/* Entry: 10ba0f700; end: 10ba0f707; -[SCACognacContextSwitchSuccess getEventQoS] */

undefined8 FUN_10ba0f700(void)

{
  return 1;
}



/* Entry: 10ba0f708; end: 10ba0f71f; -[SCACognacContextSwitchSuccess setChatDockIdFrom:] */

void FUN_10ba0f708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbf458,3,param_3,0);
  return;
}



/* Entry: 10ba0f720; end: 10ba0f743; -[SCACognacContextSwitchSuccess getFieldNumberToFieldDict] */

void FUN_10ba0f720(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0f744; end: 10ba0f77b; -[SCACognacContextSwitchSuccess addToProtoDictionary] */

void FUN_10ba0f744(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0f77c; end: 10ba0f7d3; -[SCACognacContextSwitchSuccess toProtoWithAllowedFields:] */

void FUN_10ba0f77c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0f7d4; end: 10ba0f7db; -[SCACognacContextSwitchSuccess getPayloadIdentifier] */

undefined8 FUN_10ba0f7d4(void)

{
  return 0xb16;
}



/* Entry: 10ba0f7dc; end: 10ba0f7e7; -[SCACognacCustomEvent1 getEventName] */

undefined ** FUN_10ba0f7dc(void)

{
  return &PTR____CFConstantStringClassReference_110fbfb38;
}



/* Entry: 10ba0f7e8; end: 10ba0f7ef; -[SCACognacCustomEvent1 getEventQoS] */

undefined8 FUN_10ba0f7e8(void)

{
  return 1;
}



/* Entry: 10ba0f7f0; end: 10ba0f813; -[SCACognacCustomEvent1 getFieldNumberToFieldDict] */

void FUN_10ba0f7f0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0f814; end: 10ba0f84b; -[SCACognacCustomEvent1 addToProtoDictionary] */

void FUN_10ba0f814(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0f84c; end: 10ba0f8a3; -[SCACognacCustomEvent1 toProtoWithAllowedFields:] */

void FUN_10ba0f84c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0f8a4; end: 10ba0f8ab; -[SCACognacCustomEvent1 getPayloadIdentifier] */

undefined8 FUN_10ba0f8a4(void)

{
  return 0xbd9;
}



/* Entry: 10ba0f8ac; end: 10ba0f8b7; -[SCACognacCustomEvent2 getEventName] */

undefined ** FUN_10ba0f8ac(void)

{
  return &PTR____CFConstantStringClassReference_110fbfb58;
}



/* Entry: 10ba0f8b8; end: 10ba0f8bf; -[SCACognacCustomEvent2 getEventQoS] */

undefined8 FUN_10ba0f8b8(void)

{
  return 1;
}



/* Entry: 10ba0f8c0; end: 10ba0f8e3; -[SCACognacCustomEvent2 getFieldNumberToFieldDict] */

void FUN_10ba0f8c0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0f8e4; end: 10ba0f91b; -[SCACognacCustomEvent2 addToProtoDictionary] */

void FUN_10ba0f8e4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0f91c; end: 10ba0f973; -[SCACognacCustomEvent2 toProtoWithAllowedFields:] */

void FUN_10ba0f91c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0f974; end: 10ba0f97b; -[SCACognacCustomEvent2 getPayloadIdentifier] */

undefined8 FUN_10ba0f974(void)

{
  return 0xbda;
}



/* Entry: 10ba0f97c; end: 10ba0f987; -[SCACognacCustomEvent3 getEventName] */

undefined ** FUN_10ba0f97c(void)

{
  return &PTR____CFConstantStringClassReference_110fbfb78;
}



/* Entry: 10ba0f988; end: 10ba0f98f; -[SCACognacCustomEvent3 getEventQoS] */

undefined8 FUN_10ba0f988(void)

{
  return 1;
}



/* Entry: 10ba0f990; end: 10ba0f9b3; -[SCACognacCustomEvent3 getFieldNumberToFieldDict] */

void FUN_10ba0f990(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0f9b4; end: 10ba0f9eb; -[SCACognacCustomEvent3 addToProtoDictionary] */

void FUN_10ba0f9b4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0f9ec; end: 10ba0fa43; -[SCACognacCustomEvent3 toProtoWithAllowedFields:] */

void FUN_10ba0f9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0fa44; end: 10ba0fa4b; -[SCACognacCustomEvent3 getPayloadIdentifier] */

undefined8 FUN_10ba0fa44(void)

{
  return 0xbdb;
}



/* Entry: 10ba0fa4c; end: 10ba0fa57; -[SCACognacCustomEvent4 getEventName] */

undefined ** FUN_10ba0fa4c(void)

{
  return &PTR____CFConstantStringClassReference_110fbfb98;
}



/* Entry: 10ba0fa58; end: 10ba0fa5f; -[SCACognacCustomEvent4 getEventQoS] */

undefined8 FUN_10ba0fa58(void)

{
  return 1;
}



/* Entry: 10ba0fa60; end: 10ba0fa83; -[SCACognacCustomEvent4 getFieldNumberToFieldDict] */

void FUN_10ba0fa60(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0fa84; end: 10ba0fabb; -[SCACognacCustomEvent4 addToProtoDictionary] */

void FUN_10ba0fa84(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0fabc; end: 10ba0fb13; -[SCACognacCustomEvent4 toProtoWithAllowedFields:] */

void FUN_10ba0fabc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0fb14; end: 10ba0fb1b; -[SCACognacCustomEvent4 getPayloadIdentifier] */

undefined8 FUN_10ba0fb14(void)

{
  return 0xbdc;
}



/* Entry: 10ba0fb1c; end: 10ba0fb27; -[SCACognacCustomEvent5 getEventName] */

undefined ** FUN_10ba0fb1c(void)

{
  return &PTR____CFConstantStringClassReference_110fbfbb8;
}



/* Entry: 10ba0fb28; end: 10ba0fb2f; -[SCACognacCustomEvent5 getEventQoS] */

undefined8 FUN_10ba0fb28(void)

{
  return 1;
}



/* Entry: 10ba0fb30; end: 10ba0fb53; -[SCACognacCustomEvent5 getFieldNumberToFieldDict] */

void FUN_10ba0fb30(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0fb54; end: 10ba0fb8b; -[SCACognacCustomEvent5 addToProtoDictionary] */

void FUN_10ba0fb54(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0fb8c; end: 10ba0fbe3; -[SCACognacCustomEvent5 toProtoWithAllowedFields:] */

void FUN_10ba0fb8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0fbe4; end: 10ba0fbeb; -[SCACognacCustomEvent5 getPayloadIdentifier] */

undefined8 FUN_10ba0fbe4(void)

{
  return 0xbdd;
}



/* Entry: 10ba0fbec; end: 10ba0fbf7; -[SCACognacDebugEvent getEventName] */

undefined ** FUN_10ba0fbec(void)

{
  return &PTR____CFConstantStringClassReference_110fbfbd8;
}



/* Entry: 10ba0fbf8; end: 10ba0fbff; -[SCACognacDebugEvent getEventQoS] */

undefined8 FUN_10ba0fbf8(void)

{
  return 1;
}



/* Entry: 10ba0fc00; end: 10ba0fc17; -[SCACognacDebugEvent setDetails:] */

void FUN_10ba0fc00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daf578,3,param_3,0);
  return;
}



/* Entry: 10ba0fc18; end: 10ba0fc3b; -[SCACognacDebugEvent getFieldNumberToFieldDict] */

void FUN_10ba0fc18(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0fc3c; end: 10ba0fc73; -[SCACognacDebugEvent addToProtoDictionary] */

void FUN_10ba0fc3c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0fc74; end: 10ba0fccb; -[SCACognacDebugEvent toProtoWithAllowedFields:] */

void FUN_10ba0fc74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0fccc; end: 10ba0fcd3; -[SCACognacDebugEvent getPayloadIdentifier] */

undefined8 FUN_10ba0fccc(void)

{
  return 3000;
}



/* Entry: 10ba0fcd4; end: 10ba0fcdf; -[SCACognacDeveloperOptionSelection getEventName] */

undefined ** FUN_10ba0fcd4(void)

{
  return &PTR____CFConstantStringClassReference_110fbfbf8;
}



/* Entry: 10ba0fce0; end: 10ba0fce7; -[SCACognacDeveloperOptionSelection getEventQoS] */

undefined8 FUN_10ba0fce0(void)

{
  return 1;
}



/* Entry: 10ba0fce8; end: 10ba0fd67; -[SCACognacDeveloperOptionSelection setSelection:] */

void FUN_10ba0fce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba0c480(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dcecf8,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0fd68; end: 10ba0fd8b; -[SCACognacDeveloperOptionSelection getFieldNumberToFieldDict] */

void FUN_10ba0fd68(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0fd8c; end: 10ba0fdc3; -[SCACognacDeveloperOptionSelection addToProtoDictionary] */

void FUN_10ba0fd8c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0fdc4; end: 10ba0fe1b; -[SCACognacDeveloperOptionSelection toProtoWithAllowedFields:] */

void FUN_10ba0fdc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0fe1c; end: 10ba0fe23; -[SCACognacDeveloperOptionSelection getPayloadIdentifier] */

undefined8 FUN_10ba0fe1c(void)

{
  return 0xe0a;
}



/* Entry: 10ba0fe24; end: 10ba0fe2f; -[SCACognacDrawerClose getEventName] */

undefined ** FUN_10ba0fe24(void)

{
  return &PTR____CFConstantStringClassReference_110fbfc18;
}



/* Entry: 10ba0fe30; end: 10ba0fe37; -[SCACognacDrawerClose getEventQoS] */

undefined8 FUN_10ba0fe30(void)

{
  return 1;
}



/* Entry: 10ba0fe38; end: 10ba0fe8b; -[SCACognacDrawerClose setDisplayTimeSec:] */

void FUN_10ba0fe38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfc38,5,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0fe8c; end: 10ba0fedf; -[SCACognacDrawerClose setIsBadgeCleared:] */

void FUN_10ba0fe8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfc58,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0fee0; end: 10ba0ff33; -[SCACognacDrawerClose setScrollCount:] */

void FUN_10ba0fee0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfc78,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba0ff34; end: 10ba0ff57; -[SCACognacDrawerClose getFieldNumberToFieldDict] */

void FUN_10ba0ff34(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba0ff58; end: 10ba0ff8f; -[SCACognacDrawerClose addToProtoDictionary] */

void FUN_10ba0ff58(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba0ff90; end: 10ba0ffe7; -[SCACognacDrawerClose toProtoWithAllowedFields:] */

void FUN_10ba0ff90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba0ffe8; end: 10ba0ffef; -[SCACognacDrawerClose getPayloadIdentifier] */

undefined8 FUN_10ba0ffe8(void)

{
  return 0x220;
}



/* Entry: 10ba0fff0; end: 10ba0fffb; -[SCACognacDrawerEventBase getEventName] */

undefined ** FUN_10ba0fff0(void)

{
  return &PTR____CFConstantStringClassReference_110e6cc98;
}



/* Entry: 10ba0fffc; end: 10ba10003; -[SCACognacDrawerEventBase getEventQoS] */

undefined8 FUN_10ba0fffc(void)

{
  return 1;
}



/* Entry: 10ba10004; end: 10ba10057; -[SCACognacDrawerEventBase setGroupSize:] */

void FUN_10ba10004(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa4b98,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba10058; end: 10ba1007b; -[SCACognacDrawerEventBase getFieldNumberToFieldDict] */

void FUN_10ba10058(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba1007c; end: 10ba100b3; -[SCACognacDrawerEventBase addToProtoDictionary] */

void FUN_10ba1007c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba100b4; end: 10ba1010b; -[SCACognacDrawerEventBase toProtoWithAllowedFields:] */

void FUN_10ba100b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba1010c; end: 10ba10113; -[SCACognacDrawerEventBase getPayloadIdentifier] */

undefined8 FUN_10ba1010c(void)

{
  return 0x221;
}



/* Entry: 10ba10114; end: 10ba1011f; -[SCACognacDrawerOpen getEventName] */

undefined ** FUN_10ba10114(void)

{
  return &PTR____CFConstantStringClassReference_110fbfc98;
}



/* Entry: 10ba10120; end: 10ba10127; -[SCACognacDrawerOpen getEventQoS] */

undefined8 FUN_10ba10120(void)

{
  return 1;
}



/* Entry: 10ba10128; end: 10ba1017b; -[SCACognacDrawerOpen setHasNewGame:] */

void FUN_10ba10128(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfcb8,5,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba1017c; end: 10ba101cf; -[SCACognacDrawerOpen setIsBadged:] */

void FUN_10ba1017c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e9d318,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba101d0; end: 10ba101e7; -[SCACognacDrawerOpen setCognacId:] */

void FUN_10ba101d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbfa98,7,param_3,0);
  return;
}



/* Entry: 10ba101e8; end: 10ba1020b; -[SCACognacDrawerOpen getFieldNumberToFieldDict] */

void FUN_10ba101e8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba1020c; end: 10ba10243; -[SCACognacDrawerOpen addToProtoDictionary] */

void FUN_10ba1020c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba10244; end: 10ba1029b; -[SCACognacDrawerOpen toProtoWithAllowedFields:] */

void FUN_10ba10244(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba1029c; end: 10ba102a3; -[SCACognacDrawerOpen getPayloadIdentifier] */

undefined8 FUN_10ba1029c(void)

{
  return 0x223;
}



/* Entry: 10ba102a4; end: 10ba102af; -[SCACognacDrawerTabTap getEventName] */

undefined ** FUN_10ba102a4(void)

{
  return &PTR____CFConstantStringClassReference_110fbfcd8;
}



/* Entry: 10ba102b0; end: 10ba102b7; -[SCACognacDrawerTabTap getEventQoS] */

undefined8 FUN_10ba102b0(void)

{
  return 1;
}



/* Entry: 10ba102b8; end: 10ba10337; -[SCACognacDrawerTabTap setCurrentTab:] */

void FUN_10ba102b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba0c4a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfcf8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba10338; end: 10ba103b7; -[SCACognacDrawerTabTap setPreviousTab:] */

void FUN_10ba10338(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba0c4a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfd18,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba103b8; end: 10ba103db; -[SCACognacDrawerTabTap getFieldNumberToFieldDict] */

void FUN_10ba103b8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba103dc; end: 10ba10413; -[SCACognacDrawerTabTap addToProtoDictionary] */

void FUN_10ba103dc(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba10414; end: 10ba1046b; -[SCACognacDrawerTabTap toProtoWithAllowedFields:] */

void FUN_10ba10414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba1046c; end: 10ba10473; -[SCACognacDrawerTabTap getPayloadIdentifier] */

undefined8 FUN_10ba1046c(void)

{
  return 0x224;
}



/* Entry: 10ba10474; end: 10ba1047f; -[SCACognacDrawerTileTap getEventName] */

undefined ** FUN_10ba10474(void)

{
  return &PTR____CFConstantStringClassReference_110fbfd38;
}



/* Entry: 10ba10480; end: 10ba10487; -[SCACognacDrawerTileTap getEventQoS] */

undefined8 FUN_10ba10480(void)

{
  return 1;
}


