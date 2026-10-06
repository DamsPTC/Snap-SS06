/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bab0558; end: 10bab055b; -[SCAStoryStoryPost getFieldNumberToFieldDict] */

void FUN_10bab0558(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab055c; end: 10bab0567; -[SCAStoryStoryPost toProtoWithAllowedFields:] */

void FUN_10bab055c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10bab0568; end: 10bab056f; -[SCAStoryStoryPost getPayloadIdentifier] */

undefined8 FUN_10bab0568(void)

{
  return 0x946;
}



/* Entry: 10bab0570; end: 10bab05bf; -[SCAWorkflowEvent setWorkflowAttemptId:] */

void FUN_10bab0570(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fe8558,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab05c0; end: 10bab060f; -[SCAWorkflowEvent setWorkflowEndTimeMs:] */

void FUN_10bab05c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fe8578,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab0610; end: 10bab068b; -[SCAWorkflowEvent setWorkflowName:] */

void FUN_10bab0610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baa29c4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_110fe8598,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab068c; end: 10bab069f; -[SCAWorkflowEvent setWorkflowSessionId:] */

void FUN_10bab068c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110fe85b8,param_3,0);
  return;
}



/* Entry: 10bab06a0; end: 10bab06ef; -[SCAWorkflowEvent setWorkflowStartTimeMs:] */

void FUN_10bab06a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fe85d8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab06f0; end: 10bab0733; -[SCAWorkflowEvent setWorkflowStatus:] */

void FUN_10bab06f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fe85f8,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bab0734; end: 10bab0777; -[SCAWorkflowEvent setWorkflowTasks:] */

void FUN_10bab0734(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fe8618,param_3,0xd);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bab0778; end: 10bab097f; -[SCAWorkflowEvent prepareDictionary:] */

void FUN_10bab0778(undefined8 param_1,undefined8 param_2,long param_3)

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
    _objc_opt_new();
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
    func_0x00010bf0a640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  puStack_138 = PTR_PTR_11270c910;
  lVar1 = param_3;
  uStack_140 = param_1;
  _objc_msgSendSuper2(&uStack_140,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baa29d8(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10bab0980; end: 10bab09ff; -[SCAWorkflowStatus setWorkflowStatusCause:] */

void FUN_10bab0980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baa29d8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fe8ff8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab0a00; end: 10bab0a7f; -[SCAWorkflowStatus setWorkflowStatusType:] */

void FUN_10bab0a00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baa29f8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fe9018,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab0a80; end: 10bab0a83; -[SCAWorkflowStatus getFieldNumberToFieldDict] */

void FUN_10bab0a80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab0a84; end: 10bab0a8f; -[SCAWorkflowStatus toProtoWithAllowedFields:] */

void FUN_10bab0a84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10bab0a90; end: 10bab0a97; -[SCAWorkflowStatus getPayloadIdentifier] */

undefined8 FUN_10bab0a90(void)

{
  return 0xcf2;
}



/* Entry: 10bab0a98; end: 10bab0aeb; -[SCAWorkflowTask setWorkflowTaskEndTimeMs:] */

void FUN_10bab0a98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe9038,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab0aec; end: 10bab0b03; -[SCAWorkflowTask setWorkflowTaskName:] */

void FUN_10bab0aec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe9058,3,param_3,0);
  return;
}



/* Entry: 10bab0b04; end: 10bab0b57; -[SCAWorkflowTask setWorkflowTaskStartTimeMs:] */

void FUN_10bab0b04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe9078,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab0b58; end: 10bab0b9f; -[SCAWorkflowTask setWorkflowTaskStatus:] */

void FUN_10bab0b58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe9098,5,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bab0ba0; end: 10bab0c5f; -[SCAWorkflowTask prepareDictionary:] */

void FUN_10bab0ba0(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_38 = PTR_PTR_11270c918;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10bab0c60; end: 10bab0c63; -[SCAWorkflowTask getFieldNumberToFieldDict] */

void FUN_10bab0c60(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab0c64; end: 10bab0c6f; -[SCAWorkflowTask toProtoWithAllowedFields:] */

void FUN_10bab0c64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10bab0c70; end: 10bab0cb7; -[SCAWorkflowTask getPayloadIdentifier] */

undefined8 FUN_10bab0c70(void)

{
  return 0xcf3;
}



/* Entry: 10bab0cb8; end: 10bab0cc3; -[SCABandwidthAccuracy getEventName] */

undefined ** FUN_10bab0cb8(void)

{
  return &PTR____CFConstantStringClassReference_110fe9138;
}



/* Entry: 10bab0cc4; end: 10bab0ccb; -[SCABandwidthAccuracy getEventQoS] */

undefined8 FUN_10bab0cc4(void)

{
  return 2;
}



/* Entry: 10bab0ccc; end: 10bab0cd7; -[SCABandwidthAccuracy getPerUserSamplingRate] */

undefined8 FUN_10bab0ccc(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bab0cd8; end: 10bab0ce3; -[SCABandwidthAccuracy getPerUserSamplingRateV2] */

undefined8 FUN_10bab0cd8(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bab0ce4; end: 10bab0d37; -[SCABandwidthAccuracy setBytesTransmitted:] */

void FUN_10bab0ce4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe9158,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab0d38; end: 10bab0d8b; -[SCABandwidthAccuracy setContentLength:] */

void FUN_10bab0d38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe9178,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab0d8c; end: 10bab0ddf; -[SCABandwidthAccuracy setEstimationEndBitsPerSecond:] */

void FUN_10bab0d8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe9198,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab0de0; end: 10bab0e33; -[SCABandwidthAccuracy setEstimationStartBitsPerSecond:] */

void FUN_10bab0de0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe91b8,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab0e34; end: 10bab0e87; -[SCABandwidthAccuracy setIsDownloadSample:] */

void FUN_10bab0e34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe91d8,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab0e88; end: 10bab0f07; -[SCABandwidthAccuracy setReachability:] */

void FUN_10bab0e88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc99d9c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fe4778,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab0f08; end: 10bab0f5b; -[SCABandwidthAccuracy setRequestDurationMs:] */

void FUN_10bab0f08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe91f8,8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab0f5c; end: 10bab0f5f; -[SCABandwidthAccuracy getFieldNumberToFieldDict] */

void FUN_10bab0f5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab0f60; end: 10bab0f6b; -[SCABandwidthAccuracy toProtoWithAllowedFields:] */

void FUN_10bab0f60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab0f6c; end: 10bab0f73; -[SCABandwidthAccuracy getPayloadIdentifier] */

undefined8 FUN_10bab0f6c(void)

{
  return 0xb7;
}



/* Entry: 10bab0f74; end: 10bab0f7f; -[SCANetworkHealthBannerShown getEventName] */

undefined ** FUN_10bab0f74(void)

{
  return &PTR____CFConstantStringClassReference_110fe9218;
}



/* Entry: 10bab0f80; end: 10bab0f87; -[SCANetworkHealthBannerShown getEventQoS] */

undefined8 FUN_10bab0f80(void)

{
  return 2;
}



/* Entry: 10bab0f88; end: 10bab0f93; -[SCANetworkHealthBannerShown getPerUserSamplingRate] */

undefined8 FUN_10bab0f88(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bab0f94; end: 10bab0f9f; -[SCANetworkHealthBannerShown getPerUserSamplingRateV2] */

undefined8 FUN_10bab0f94(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bab0fa0; end: 10bab0fb7; -[SCANetworkHealthBannerShown setEpisodeId:] */

void FUN_10bab0fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe9238,2,param_3,0);
  return;
}



/* Entry: 10bab0fb8; end: 10bab1037; -[SCANetworkHealthBannerShown setState:] */

void FUN_10bab0fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bab0c78(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110db9618,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab1038; end: 10bab10b7; -[SCANetworkHealthBannerShown setSurface:] */

void FUN_10bab1038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bab0c98(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2e78,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab10b8; end: 10bab10bb; -[SCANetworkHealthBannerShown getFieldNumberToFieldDict] */

void FUN_10bab10b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab10bc; end: 10bab10c7; -[SCANetworkHealthBannerShown toProtoWithAllowedFields:] */

void FUN_10bab10bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab10c8; end: 10bab10cf; -[SCANetworkHealthBannerShown getPayloadIdentifier] */

undefined8 FUN_10bab10c8(void)

{
  return 0x1971;
}



/* Entry: 10bab10d0; end: 10bab10db; -[SCARequestConsumed getEventName] */

undefined ** FUN_10bab10d0(void)

{
  return &PTR____CFConstantStringClassReference_110fe9258;
}



/* Entry: 10bab10dc; end: 10bab10e3; -[SCARequestConsumed getEventQoS] */

undefined8 FUN_10bab10dc(void)

{
  return 2;
}



/* Entry: 10bab10e4; end: 10bab10ef; -[SCARequestConsumed getPerUserSamplingRate] */

undefined8 FUN_10bab10e4(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bab10f0; end: 10bab10fb; -[SCARequestConsumed getPerUserSamplingRateV2] */

undefined8 FUN_10bab10f0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bab10fc; end: 10bab114f; -[SCARequestConsumed setIsUnaggregated:] */

void FUN_10bab10fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe9278,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab1150; end: 10bab1167; -[SCARequestConsumed setRequestIds:] */

void FUN_10bab1150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe9298,3,param_3,0);
  return;
}



/* Entry: 10bab1168; end: 10bab116b; -[SCARequestConsumed getFieldNumberToFieldDict] */

void FUN_10bab1168(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab116c; end: 10bab1177; -[SCARequestConsumed toProtoWithAllowedFields:] */

void FUN_10bab116c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab1178; end: 10bab117f; -[SCARequestConsumed getPayloadIdentifier] */

undefined8 FUN_10bab1178(void)

{
  return 0x75e;
}



/* Entry: 10bab1180; end: 10bab118b; -[SCAThirdPartyPayloadCreate getEventName] */

undefined ** FUN_10bab1180(void)

{
  return &PTR____CFConstantStringClassReference_110fe92b8;
}



/* Entry: 10bab118c; end: 10bab1193; -[SCAThirdPartyPayloadCreate getEventQoS] */

undefined8 FUN_10bab118c(void)

{
  return 2;
}



/* Entry: 10bab1194; end: 10bab119f; -[SCAThirdPartyPayloadCreate getPerUserSamplingRate] */

undefined8 FUN_10bab1194(void)

{
  return 0x3f847ae147ae147b;
}



/* Entry: 10bab11a0; end: 10bab11ab; -[SCAThirdPartyPayloadCreate getPerUserSamplingRateV2] */

undefined8 FUN_10bab11a0(void)

{
  return 0x3f847ae147ae147b;
}



/* Entry: 10bab11ac; end: 10bab11ff; -[SCAThirdPartyPayloadCreate setPayloadCreationObfuscatedSec:] */

void FUN_10bab11ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe92d8,2,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab1200; end: 10bab1253; -[SCAThirdPartyPayloadCreate setPayloadCreationSec:] */

void FUN_10bab1200(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe92f8,3,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab1254; end: 10bab12a7; -[SCAThirdPartyPayloadCreate setRequestSignedCount:] */

void FUN_10bab1254(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe9318,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab12a8; end: 10bab12ab; -[SCAThirdPartyPayloadCreate getFieldNumberToFieldDict] */

void FUN_10bab12a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab12ac; end: 10bab12b7; -[SCAThirdPartyPayloadCreate toProtoWithAllowedFields:] */

void FUN_10bab12ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab12b8; end: 10bab12bf; -[SCAThirdPartyPayloadCreate getPayloadIdentifier] */

undefined8 FUN_10bab12b8(void)

{
  return 0x96c;
}



/* Entry: 10bab12c0; end: 10bab12cb; -[SCAInAppNotificationTap getEventName] */

undefined ** FUN_10bab12c0(void)

{
  return &PTR____CFConstantStringClassReference_110fe9338;
}



/* Entry: 10bab12cc; end: 10bab12d3; -[SCAInAppNotificationTap getEventQoS] */

undefined8 FUN_10bab12cc(void)

{
  return 1;
}



/* Entry: 10bab12d4; end: 10bab12eb; -[SCAInAppNotificationTap setArroyoConversationId:] */

void FUN_10bab12d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe9358,2,param_3,0);
  return;
}



/* Entry: 10bab12ec; end: 10bab1303; -[SCAInAppNotificationTap setNotificationId:] */

void FUN_10bab12ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f42398,3,param_3,0);
  return;
}



/* Entry: 10bab1304; end: 10bab131b; -[SCAInAppNotificationTap setNotificationType:] */

void FUN_10bab1304(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110de6ad8,4,param_3,0);
  return;
}



/* Entry: 10bab131c; end: 10bab1333; -[SCAInAppNotificationTap setTargetScreen:] */

void FUN_10bab131c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e12eb8,5,param_3,0);
  return;
}



/* Entry: 10bab1334; end: 10bab1387; -[SCAInAppNotificationTap setViewTimeMs:] */

void FUN_10bab1334(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbe478,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab1388; end: 10bab138b; -[SCAInAppNotificationTap getFieldNumberToFieldDict] */

void FUN_10bab1388(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab138c; end: 10bab1397; -[SCAInAppNotificationTap toProtoWithAllowedFields:] */

void FUN_10bab138c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab1398; end: 10bab139f; -[SCAInAppNotificationTap getPayloadIdentifier] */

undefined8 FUN_10bab1398(void)

{
  return 0x18ba;
}



/* Entry: 10bab13a0; end: 10bab13ab; -[SCANotifAppOpenBadgeCount getEventName] */

undefined ** FUN_10bab13a0(void)

{
  return &PTR____CFConstantStringClassReference_110fe9378;
}



/* Entry: 10bab13ac; end: 10bab13b3; -[SCANotifAppOpenBadgeCount getEventQoS] */

undefined8 FUN_10bab13ac(void)

{
  return 1;
}



/* Entry: 10bab13b4; end: 10bab13bf; -[SCANotifAppOpenBadgeCount getPerUserSamplingRateV2] */

undefined8 FUN_10bab13b4(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bab13c0; end: 10bab1413; -[SCANotifAppOpenBadgeCount setBadgeCount:] */

void FUN_10bab13c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e9f7b8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab1414; end: 10bab1467; -[SCANotifAppOpenBadgeCount setBadgeCountEnabled:] */

void FUN_10bab1414(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe9398,3,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab1468; end: 10bab146b; -[SCANotifAppOpenBadgeCount getFieldNumberToFieldDict] */

void FUN_10bab1468(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bab146c; end: 10bab1477; -[SCANotifAppOpenBadgeCount toProtoWithAllowedFields:] */

void FUN_10bab146c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bab1478; end: 10bab147f; -[SCANotifAppOpenBadgeCount getPayloadIdentifier] */

undefined8 FUN_10bab1478(void)

{
  return 0x157f;
}



/* Entry: 10bab1480; end: 10bab148b; -[SCANotificationTapToMessageReady getEventName] */

undefined ** FUN_10bab1480(void)

{
  return &PTR____CFConstantStringClassReference_110fe93b8;
}



/* Entry: 10bab148c; end: 10bab1493; -[SCANotificationTapToMessageReady getEventQoS] */

undefined8 FUN_10bab148c(void)

{
  return 1;
}



/* Entry: 10bab1494; end: 10bab14ab; -[SCANotificationTapToMessageReady setAppStartupStateType:] */

void FUN_10bab1494(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe93d8,2,param_3,0);
  return;
}



/* Entry: 10bab14ac; end: 10bab14ff; -[SCANotificationTapToMessageReady setConversationSyncNeeded:] */

void FUN_10bab14ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe93f8,3,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab1500; end: 10bab1553; -[SCANotificationTapToMessageReady setDataSaver:] */

void FUN_10bab1500(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe9418,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab1554; end: 10bab15a7; -[SCANotificationTapToMessageReady setEndTsMs:] */

void FUN_10bab1554(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe9438,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bab15a8; end: 10bab15bf; -[SCANotificationTapToMessageReady setFailedStep:] */

void FUN_10bab15a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110de7798,6,param_3,0);
  return;
}



/* Entry: 10bab15c0; end: 10bab15d7; -[SCANotificationTapToMessageReady setMediaPrefetch:] */

void FUN_10bab15c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe9458,8,param_3,0);
  return;
}



/* Entry: 10bab15d8; end: 10bab15ef; -[SCANotificationTapToMessageReady setMessageId:] */

void FUN_10bab15d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e0fd18,9,param_3,0);
  return;
}



/* Entry: 10bab15f0; end: 10bab1607; -[SCANotificationTapToMessageReady setNotificationDisplayType:] */

void FUN_10bab15f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe9478,10,param_3,0);
  return;
}



/* Entry: 10bab1608; end: 10bab161f; -[SCANotificationTapToMessageReady setNotificationId:] */

void FUN_10bab1608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f42398,0xb,param_3,0);
  return;
}



/* Entry: 10bab1620; end: 10bab1637; -[SCANotificationTapToMessageReady setNotificationType:] */

void FUN_10bab1620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110de6ad8,0xc,param_3,0);
  return;
}



/* Entry: 10bab1638; end: 10bab164f; -[SCANotificationTapToMessageReady setStepLatenciesMs:] */

void FUN_10bab1638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110de77b8,0xe,param_3,0);
  return;
}



/* Entry: 10bab1650; end: 10bab1667; -[SCANotificationTapToMessageReady setTargetScreen:] */

void FUN_10bab1650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e12eb8,0xf,param_3,0);
  return;
}



/* Entry: 10bab1668; end: 10bab16bb; -[SCANotificationTapToMessageReady setStartTsMs:] */

void FUN_10bab1668(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe9498,0x10,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


