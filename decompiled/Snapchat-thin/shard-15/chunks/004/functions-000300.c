/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba5f608; end: 10ba5f61f; -[SCAAppLoginKitLoginSuccess setDeepLinkId:] */

void FUN_10ba5f608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa2438,2,param_3,0);
  return;
}



/* Entry: 10ba5f620; end: 10ba5f69f; -[SCAAppLoginKitLoginSuccess setDeepLinkSource:] */

void FUN_10ba5f620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc8ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e61438,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5f6a0; end: 10ba5f6a3; -[SCAAppLoginKitLoginSuccess getFieldNumberToFieldDict] */

void FUN_10ba5f6a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5f6a4; end: 10ba5f6af; -[SCAAppLoginKitLoginSuccess toProtoWithAllowedFields:] */

void FUN_10ba5f6a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba5f6b0; end: 10ba5f6b7; -[SCAAppLoginKitLoginSuccess getPayloadIdentifier] */

undefined8 FUN_10ba5f6b0(void)

{
  return 0x8c;
}



/* Entry: 10ba5f6b8; end: 10ba5f6ff; -[SCABlizzardStats setQueueStats:] */

void FUN_10ba5f6b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd32f8,2,param_3,0xd
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba5f700; end: 10ba5f8a7; -[SCABlizzardStats prepareDictionary:] */

void FUN_10ba5f700(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_138 = PTR_PTR_11270c768;
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



/* Entry: 10ba5f8a8; end: 10ba5f8ab; -[SCABlizzardStats getFieldNumberToFieldDict] */

void FUN_10ba5f8a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5f8ac; end: 10ba5f8b7; -[SCABlizzardStats toProtoWithAllowedFields:] */

void FUN_10ba5f8ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10ba5f8b8; end: 10ba5f8bf; -[SCABlizzardStats getPayloadIdentifier] */

undefined8 FUN_10ba5f8b8(void)

{
  return 0xc09;
}



/* Entry: 10ba5f8c0; end: 10ba5f8cb; -[SCADataPipelineHealth getEventName] */

undefined ** FUN_10ba5f8c0(void)

{
  return &PTR____CFConstantStringClassReference_110fd3318;
}



/* Entry: 10ba5f8cc; end: 10ba5f8d3; -[SCADataPipelineHealth getEventQoS] */

undefined8 FUN_10ba5f8cc(void)

{
  return 0;
}



/* Entry: 10ba5f8d4; end: 10ba5f91b; -[SCADataPipelineHealth setBlizzardStats:] */

void FUN_10ba5f8d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd3338,2,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba5f91c; end: 10ba5f933; -[SCADataPipelineHealth setStatsSessionId:] */

void FUN_10ba5f91c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd3358,3,param_3,0);
  return;
}



/* Entry: 10ba5f934; end: 10ba5f9f3; -[SCADataPipelineHealth prepareDictionary:] */

void FUN_10ba5f934(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_38 = PTR_PTR_11270c770;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10ba5f9f4; end: 10ba5f9f7; -[SCADataPipelineHealth getFieldNumberToFieldDict] */

void FUN_10ba5f9f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5f9f8; end: 10ba5fa03; -[SCADataPipelineHealth toProtoWithAllowedFields:] */

void FUN_10ba5f9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba5fa04; end: 10ba5fa0b; -[SCADataPipelineHealth getPayloadIdentifier] */

undefined8 FUN_10ba5fa04(void)

{
  return 0xc0a;
}



/* Entry: 10ba5fa0c; end: 10ba5fa5f; -[SCAQueueStats setMaxLogQueueSequenceId:] */

void FUN_10ba5fa0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd3378,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5fa60; end: 10ba5fab3; -[SCAQueueStats setMinLogQueueSequenceId:] */

void FUN_10ba5fa60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd3398,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5fab4; end: 10ba5facb; -[SCAQueueStats setQueueName:] */

void FUN_10ba5fab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd33b8,4,param_3,0);
  return;
}



/* Entry: 10ba5facc; end: 10ba5facf; -[SCAQueueStats getFieldNumberToFieldDict] */

void FUN_10ba5facc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5fad0; end: 10ba5fadb; -[SCAQueueStats toProtoWithAllowedFields:] */

void FUN_10ba5fad0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10ba5fadc; end: 10ba5fae3; -[SCAQueueStats getPayloadIdentifier] */

undefined8 FUN_10ba5fadc(void)

{
  return 0xc0b;
}



/* Entry: 10ba5fae4; end: 10ba5faef; -[SCADummyChildEvent getEventName] */

undefined ** FUN_10ba5fae4(void)

{
  return &PTR____CFConstantStringClassReference_110fd33d8;
}



/* Entry: 10ba5faf0; end: 10ba5faf7; -[SCADummyChildEvent getEventQoS] */

undefined8 FUN_10ba5faf0(void)

{
  return 2;
}



/* Entry: 10ba5faf8; end: 10ba5fb4b; -[SCADummyChildEvent setDummyChildBoolField:] */

void FUN_10ba5faf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd33f8,3,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5fb4c; end: 10ba5fbd3; -[SCADummyChildEvent setDummyChildDateField:] */

/* WARNING: Possible PIC construction at 0x00010ba5fb9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ba5fba0) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10ba5fb4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x00010c26f320(param_3);
    func_0x00010c0df720(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd3418,4,puVar1,5);
  return;
}



/* Entry: 10ba5fbd4; end: 10ba5fc53; -[SCADummyChildEvent setDummyChildEnumField:] */

void FUN_10ba5fbd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bae99cc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fd3438,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5fc54; end: 10ba5fc9b; -[SCADummyChildEvent setDummyChildListStringField:] */

void FUN_10ba5fc54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd3458,6,param_3,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba5fc9c; end: 10ba5fcb3; -[SCADummyChildEvent setDummyChildStringField:] */

void FUN_10ba5fc9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd3478,7,param_3,0);
  return;
}



/* Entry: 10ba5fcb4; end: 10ba5fcfb; -[SCADummyChildEvent setDummyChildStructWithList:] */

void FUN_10ba5fcb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd3498,8,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba5fcfc; end: 10ba5fdbb; -[SCADummyChildEvent prepareDictionary:] */

void FUN_10ba5fcfc(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_38 = PTR_PTR_11270c778;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10ba5fdbc; end: 10ba5fddf; -[SCADummyChildEvent getFieldNumberToFieldDict] */

void FUN_10ba5fdbc(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5fde0; end: 10ba5fe17; -[SCADummyChildEvent addToProtoDictionary] */

void FUN_10ba5fde0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba5fe18; end: 10ba5fe6f; -[SCADummyChildEvent toProtoWithAllowedFields:] */

void FUN_10ba5fe18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba5fe70; end: 10ba5fe77; -[SCADummyChildEvent getPayloadIdentifier] */

undefined8 FUN_10ba5fe70(void)

{
  return 0xbd1;
}



/* Entry: 10ba5fe78; end: 10ba5fe83; -[SCADummyEventWithRemovedFields getEventName] */

undefined ** FUN_10ba5fe78(void)

{
  return &PTR____CFConstantStringClassReference_110fd3538;
}



/* Entry: 10ba5fe84; end: 10ba5fe8b; -[SCADummyEventWithRemovedFields getEventQoS] */

undefined8 FUN_10ba5fe84(void)

{
  return 2;
}



/* Entry: 10ba5fe8c; end: 10ba5fe97; -[SCADummyEventWithRemovedFields getPerUserSamplingRate] */

undefined8 FUN_10ba5fe8c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba5fe98; end: 10ba5fea3; -[SCADummyEventWithRemovedFields getPerUserSamplingRateV2] */

undefined8 FUN_10ba5fe98(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba5fea4; end: 10ba5fef7; -[SCADummyEventWithRemovedFields setFieldA:] */

void FUN_10ba5fea4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd3558,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5fef8; end: 10ba5ff4b; -[SCADummyEventWithRemovedFields setFieldB:] */

void FUN_10ba5fef8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd3578,5,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5ff4c; end: 10ba5ff9f; -[SCADummyEventWithRemovedFields setFieldD:] */

void FUN_10ba5ff4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd3598,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5ffa0; end: 10ba5ffa3; -[SCADummyEventWithRemovedFields getFieldNumberToFieldDict] */

void FUN_10ba5ffa0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5ffa4; end: 10ba5ffaf; -[SCADummyEventWithRemovedFields toProtoWithAllowedFields:] */

void FUN_10ba5ffa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba5ffb0; end: 10ba5ffb7; -[SCADummyEventWithRemovedFields getPayloadIdentifier] */

undefined8 FUN_10ba5ffb0(void)

{
  return 0x334;
}



/* Entry: 10ba5ffb8; end: 10ba5ffc3; -[SCADummyUserTrackedEvent getEventName] */

undefined ** FUN_10ba5ffb8(void)

{
  return &PTR____CFConstantStringClassReference_110fd35b8;
}



/* Entry: 10ba5ffc4; end: 10ba5ffcb; -[SCADummyUserTrackedEvent getEventQoS] */

undefined8 FUN_10ba5ffc4(void)

{
  return 2;
}



/* Entry: 10ba5ffcc; end: 10ba5ffd7; -[SCADummyUserTrackedEvent getPerUserSamplingRate] */

undefined8 FUN_10ba5ffcc(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba5ffd8; end: 10ba5ffe3; -[SCADummyUserTrackedEvent getPerUserSamplingRateV2] */

undefined8 FUN_10ba5ffd8(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba5ffe4; end: 10ba60037; -[SCADummyUserTrackedEvent setDummyBoolField:] */

void FUN_10ba5ffe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd34b8,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba60038; end: 10ba600bf; -[SCADummyUserTrackedEvent setDummyDateField:] */

/* WARNING: Possible PIC construction at 0x00010ba60088: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ba6008c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10ba60038(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x00010c26f320(param_3);
    func_0x00010c0df720(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd34d8,3,puVar1,5);
  return;
}



/* Entry: 10ba600c0; end: 10ba60123; -[SCADummyUserTrackedEvent getActionTs] */

undefined8 FUN_10ba600c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10ba60124; end: 10ba601a3; -[SCADummyUserTrackedEvent setDummyEnumField:] */

void FUN_10ba60124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bae99cc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fd34f8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba601a4; end: 10ba601bb; -[SCADummyUserTrackedEvent setDummyStringField:] */

void FUN_10ba601a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd3518,5,param_3,0);
  return;
}



/* Entry: 10ba601bc; end: 10ba601bf; -[SCADummyUserTrackedEvent getFieldNumberToFieldDict] */

void FUN_10ba601bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba601c0; end: 10ba601cb; -[SCADummyUserTrackedEvent toProtoWithAllowedFields:] */

void FUN_10ba601c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba601cc; end: 10ba60257; -[SCADummyUserTrackedEvent getPayloadIdentifier] */

undefined8 FUN_10ba601cc(void)

{
  return 0x336;
}



/* Entry: 10ba60258; end: 10ba602f3;  */

undefined8 FUN_10ba60258(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110daf6b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f22cb8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f22cb8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dd6e38;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dd6e38,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e55098;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e55098,param_2,param_1);
        uVar2 = 3;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0xffffffffffffffff;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba602f4; end: 10ba603d7;  */

undefined * FUN_10ba602f4(ulong param_1)

{
  if (param_1 < 9) {
    return (&PTR_PTR_110d84770)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba603d8; end: 10ba60457;  */

undefined8 FUN_10ba603d8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dce918;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dce918,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fd3df8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fd3df8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fd3e18;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fd3e18,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba60458; end: 10ba6078f;  */

undefined ** FUN_10ba60458(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110df7a78;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e9c098;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10ba60790; end: 10ba6079b; -[SCAAppGhostToDiscoverFeedLatency getEventName] */

undefined ** FUN_10ba60790(void)

{
  return &PTR____CFConstantStringClassReference_110fd5b58;
}



/* Entry: 10ba6079c; end: 10ba607a3; -[SCAAppGhostToDiscoverFeedLatency getEventQoS] */

undefined8 FUN_10ba6079c(void)

{
  return 1;
}



/* Entry: 10ba607a4; end: 10ba607af; -[SCAAppGhostToDiscoverFeedLatency getPerUserSamplingRate] */

undefined8 FUN_10ba607a4(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba607b0; end: 10ba607bb; -[SCAAppGhostToDiscoverFeedLatency getPerUserSamplingRateV2] */

undefined8 FUN_10ba607b0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba607bc; end: 10ba6080f; -[SCAAppGhostToDiscoverFeedLatency setCacheLoadLatencyMillis:] */

void FUN_10ba607bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd5b78,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba60810; end: 10ba60863; -[SCAAppGhostToDiscoverFeedLatency setCacheOrNetworkResponseToDataReadyLatencyMillis:] */

void FUN_10ba60810(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd5b98,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba60864; end: 10ba608e3; -[SCAAppGhostToDiscoverFeedLatency setContentReadyType:] */

void FUN_10ba60864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10ba60458(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fd5bb8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba608e4; end: 10ba60937; -[SCAAppGhostToDiscoverFeedLatency setDataReadyToViewReadyLatencyMillis:] */

void FUN_10ba608e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd5bd8,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba60938; end: 10ba6098b; -[SCAAppGhostToDiscoverFeedLatency setLatencyMillis:] */

void FUN_10ba60938(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb9798,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba6098c; end: 10ba609df; -[SCAAppGhostToDiscoverFeedLatency setNetworkRequestLatencyMillis:] */

void FUN_10ba6098c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd5bf8,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba609e0; end: 10ba60a5f; -[SCAAppGhostToDiscoverFeedLatency setSourceType:] */

void FUN_10ba609e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba601d4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2a38,8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba60a60; end: 10ba60ab3; -[SCAAppGhostToDiscoverFeedLatency setStartUpToDataRequestLatencyMillis:] */

void FUN_10ba60a60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd5c18,9,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba60ab4; end: 10ba60b07; -[SCAAppGhostToDiscoverFeedLatency setUserWaitingTimeMillis:] */

void FUN_10ba60ab4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd5c38,10,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba60b08; end: 10ba60b0b; -[SCAAppGhostToDiscoverFeedLatency getFieldNumberToFieldDict] */

void FUN_10ba60b08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba60b0c; end: 10ba60b17; -[SCAAppGhostToDiscoverFeedLatency toProtoWithAllowedFields:] */

void FUN_10ba60b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10ba60b18; end: 10ba60b1f; -[SCAAppGhostToDiscoverFeedLatency getPayloadIdentifier] */

undefined8 FUN_10ba60b18(void)

{
  return 0x83;
}



/* Entry: 10ba60b20; end: 10ba60b73; -[SCABloopsDiscoverMetadata setBloopsFeatureOnboarded:] */

void FUN_10ba60b20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd5c58,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba60b74; end: 10ba60bc7; -[SCABloopsDiscoverMetadata setBloopsFeatureRestricted:] */

void FUN_10ba60b74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd5c78,3,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba60bc8; end: 10ba60c1b; -[SCABloopsDiscoverMetadata setBloopsInDiscoverKillSwitch:] */

void FUN_10ba60bc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd5c98,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba60c1c; end: 10ba60c1f; -[SCABloopsDiscoverMetadata getFieldNumberToFieldDict] */

void FUN_10ba60c1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba60c20; end: 10ba60c2b; -[SCABloopsDiscoverMetadata toProtoWithAllowedFields:] */

void FUN_10ba60c20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10ba60c2c; end: 10ba60c33; -[SCABloopsDiscoverMetadata getPayloadIdentifier] */

undefined8 FUN_10ba60c2c(void)

{
  return 0xdb9;
}



/* Entry: 10ba60c34; end: 10ba60c3f; -[SCAContentCommentLongImp getEventName] */

undefined ** FUN_10ba60c34(void)

{
  return &PTR____CFConstantStringClassReference_110f41738;
}



/* Entry: 10ba60c40; end: 10ba60c47; -[SCAContentCommentLongImp getEventQoS] */

undefined8 FUN_10ba60c40(void)

{
  return 2;
}



/* Entry: 10ba60c48; end: 10ba60c53; -[SCAContentCommentLongImp getPerUserSamplingRate] */

undefined8 FUN_10ba60c48(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba60c54; end: 10ba60c5f; -[SCAContentCommentLongImp getPerUserSamplingRateV2] */

undefined8 FUN_10ba60c54(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba60c60; end: 10ba60c77; -[SCAContentCommentLongImp setCommentId:] */

void FUN_10ba60c60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e69198,3,param_3,0);
  return;
}



/* Entry: 10ba60c78; end: 10ba60ccb; -[SCAContentCommentLongImp setImpStartTsInMs:] */

void FUN_10ba60c78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd5cb8,0xb,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba60ccc; end: 10ba60d1f; -[SCAContentCommentLongImp setImpTimeMs:] */

void FUN_10ba60ccc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd5cd8,0xc,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba60d20; end: 10ba60d37; -[SCAContentCommentLongImp setParentCommentId:] */

void FUN_10ba60d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e69178,0x12,param_3,0);
  return;
}



/* Entry: 10ba60d38; end: 10ba60d8b; -[SCAContentCommentLongImp setPosition:] */

void FUN_10ba60d38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110daf598,0x13,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba60d8c; end: 10ba60daf; -[SCAContentCommentLongImp getFieldNumberToFieldDict] */

void FUN_10ba60d8c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba60db0; end: 10ba60de7; -[SCAContentCommentLongImp addToProtoDictionary] */

void FUN_10ba60db0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba60de8; end: 10ba60e3f; -[SCAContentCommentLongImp toProtoWithAllowedFields:] */

void FUN_10ba60de8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba60e40; end: 10ba60e47; -[SCAContentCommentLongImp getPayloadIdentifier] */

undefined8 FUN_10ba60e40(void)

{
  return 0x154a;
}



/* Entry: 10ba60e48; end: 10ba60e53; -[SCAContentCommentsAction getEventName] */

undefined ** FUN_10ba60e48(void)

{
  return &PTR____CFConstantStringClassReference_110f41718;
}



/* Entry: 10ba60e54; end: 10ba60e5b; -[SCAContentCommentsAction getEventQoS] */

undefined8 FUN_10ba60e54(void)

{
  return 1;
}


