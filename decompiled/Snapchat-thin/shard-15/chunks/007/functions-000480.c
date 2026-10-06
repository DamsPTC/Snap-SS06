/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bbde2cc; end: 10bbde397; -[SCAInAppReportingContextDropout fromDictionary:] */

void FUN_10bbde2cc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d528;
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
    func_0x00010c0b4ca0();
    func_0x00010c17ee60(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbde398; end: 10bbde3a3; -[SCAInAppReportingContextDropout getEventName] */

undefined ** FUN_10bbde398(void)

{
  return &PTR____CFConstantStringClassReference_110fc6cd8;
}



/* Entry: 10bbde3a4; end: 10bbde3ab; -[SCAInAppReportingContextDropout getEventQoS] */

undefined8 FUN_10bbde3a4(void)

{
  return 2;
}



/* Entry: 10bbde3ac; end: 10bbde3ff; -[SCAInAppReportingContextDropout setCommentLength:] */

void FUN_10bbde3ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101d218,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbde400; end: 10bbde423; -[SCAInAppReportingContextDropout getFieldNumberToFieldDict] */

void FUN_10bbde400(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbde424; end: 10bbde45b; -[SCAInAppReportingContextDropout addToProtoDictionary] */

void FUN_10bbde424(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bbde45c; end: 10bbde4b3; -[SCAInAppReportingContextDropout toProtoWithAllowedFields:] */

void FUN_10bbde45c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bbde4b4; end: 10bbde4bb; -[SCAInAppReportingContextDropout getPayloadIdentifier] */

undefined8 FUN_10bbde4b4(void)

{
  return 0xa80;
}



/* Entry: 10bbde4bc; end: 10bbde5ff; -[SCAInAppReportingContextView fromDictionary:] */

void FUN_10bbde4bc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d530;
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
    func_0x00010c1e80e0(param_1);
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
    func_0x00010c1ace80(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbde600; end: 10bbde60b; -[SCAInAppReportingContextView getEventName] */

undefined ** FUN_10bbde600(void)

{
  return &PTR____CFConstantStringClassReference_110fc6cf8;
}



/* Entry: 10bbde60c; end: 10bbde613; -[SCAInAppReportingContextView getEventQoS] */

undefined8 FUN_10bbde60c(void)

{
  return 2;
}



/* Entry: 10bbde614; end: 10bbde62b; -[SCAInAppReportingContextView setReasonId:] */

void FUN_10bbde614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101d238,2,param_3,0);
  return;
}



/* Entry: 10bbde62c; end: 10bbde67f; -[SCAInAppReportingContextView setInitialToggleState:] */

void FUN_10bbde62c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101d258,5,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbde680; end: 10bbde6a3; -[SCAInAppReportingContextView getFieldNumberToFieldDict] */

void FUN_10bbde680(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbde6a4; end: 10bbde6db; -[SCAInAppReportingContextView addToProtoDictionary] */

void FUN_10bbde6a4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bbde6dc; end: 10bbde733; -[SCAInAppReportingContextView toProtoWithAllowedFields:] */

void FUN_10bbde6dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bbde734; end: 10bbde73b; -[SCAInAppReportingContextView getPayloadIdentifier] */

undefined8 FUN_10bbde734(void)

{
  return 0xa81;
}



/* Entry: 10bbde73c; end: 10bbde903; -[SCAInAppReportingPostSubmitAction fromDictionary:] */

void FUN_10bbde73c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d538;
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
    func_0x00010c1df440(param_1);
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
    func_0x00010c1df460(param_1);
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
    func_0x00010c1e80e0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbde904; end: 10bbde90f; -[SCAInAppReportingPostSubmitAction getEventName] */

undefined ** FUN_10bbde904(void)

{
  return &PTR____CFConstantStringClassReference_110fc6d18;
}



/* Entry: 10bbde910; end: 10bbde917; -[SCAInAppReportingPostSubmitAction getEventQoS] */

undefined8 FUN_10bbde910(void)

{
  return 2;
}



/* Entry: 10bbde918; end: 10bbde92f; -[SCAInAppReportingPostSubmitAction setPostSubmitButton:] */

void FUN_10bbde918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101d278,2,param_3,0);
  return;
}



/* Entry: 10bbde930; end: 10bbde947; -[SCAInAppReportingPostSubmitAction setPostSubmitType:] */

void FUN_10bbde930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101d298,3,param_3,0);
  return;
}



/* Entry: 10bbde948; end: 10bbde95f; -[SCAInAppReportingPostSubmitAction setReasonId:] */

void FUN_10bbde948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101d238,4,param_3,0);
  return;
}



/* Entry: 10bbde960; end: 10bbde983; -[SCAInAppReportingPostSubmitAction getFieldNumberToFieldDict] */

void FUN_10bbde960(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbde984; end: 10bbde9bb; -[SCAInAppReportingPostSubmitAction addToProtoDictionary] */

void FUN_10bbde984(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bbde9bc; end: 10bbdea13; -[SCAInAppReportingPostSubmitAction toProtoWithAllowedFields:] */

void FUN_10bbde9bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bbdea14; end: 10bbdea1b; -[SCAInAppReportingPostSubmitAction getPayloadIdentifier] */

undefined8 FUN_10bbdea14(void)

{
  return 0x151f;
}



/* Entry: 10bbdea1c; end: 10bbdeb6b; -[SCAInAppReportingPostSubmitView fromDictionary:] */

void FUN_10bbdea1c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d540;
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
    func_0x00010c1df460(param_1);
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
    func_0x00010c1e80e0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbdeb6c; end: 10bbdeb77; -[SCAInAppReportingPostSubmitView getEventName] */

undefined ** FUN_10bbdeb6c(void)

{
  return &PTR____CFConstantStringClassReference_110fc6d38;
}



/* Entry: 10bbdeb78; end: 10bbdeb7f; -[SCAInAppReportingPostSubmitView getEventQoS] */

undefined8 FUN_10bbdeb78(void)

{
  return 2;
}



/* Entry: 10bbdeb80; end: 10bbdeb97; -[SCAInAppReportingPostSubmitView setPostSubmitType:] */

void FUN_10bbdeb80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101d298,2,param_3,0);
  return;
}



/* Entry: 10bbdeb98; end: 10bbdebaf; -[SCAInAppReportingPostSubmitView setReasonId:] */

void FUN_10bbdeb98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101d238,3,param_3,0);
  return;
}



/* Entry: 10bbdebb0; end: 10bbdebd3; -[SCAInAppReportingPostSubmitView getFieldNumberToFieldDict] */

void FUN_10bbdebb0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbdebd4; end: 10bbdec0b; -[SCAInAppReportingPostSubmitView addToProtoDictionary] */

void FUN_10bbdebd4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bbdec0c; end: 10bbdec63; -[SCAInAppReportingPostSubmitView toProtoWithAllowedFields:] */

void FUN_10bbdec0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bbdec64; end: 10bbdec6b; -[SCAInAppReportingPostSubmitView getPayloadIdentifier] */

undefined8 FUN_10bbdec64(void)

{
  return 0x1520;
}



/* Entry: 10bbdec6c; end: 10bbded43; -[SCAInAppReportingReasonSelect fromDictionary:] */

void FUN_10bbdec6c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d548;
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
    func_0x00010c1e80e0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbded44; end: 10bbded4f; -[SCAInAppReportingReasonSelect getEventName] */

undefined ** FUN_10bbded44(void)

{
  return &PTR____CFConstantStringClassReference_110fc6d58;
}



/* Entry: 10bbded50; end: 10bbded57; -[SCAInAppReportingReasonSelect getEventQoS] */

undefined8 FUN_10bbded50(void)

{
  return 2;
}



/* Entry: 10bbded58; end: 10bbded6f; -[SCAInAppReportingReasonSelect setReasonId:] */

void FUN_10bbded58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101d238,2,param_3,0);
  return;
}



/* Entry: 10bbded70; end: 10bbded93; -[SCAInAppReportingReasonSelect getFieldNumberToFieldDict] */

void FUN_10bbded70(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbded94; end: 10bbdedcb; -[SCAInAppReportingReasonSelect addToProtoDictionary] */

void FUN_10bbded94(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bbdedcc; end: 10bbdee23; -[SCAInAppReportingReasonSelect toProtoWithAllowedFields:] */

void FUN_10bbdedcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bbdee24; end: 10bbdee2b; -[SCAInAppReportingReasonSelect getPayloadIdentifier] */

undefined8 FUN_10bbdee24(void)

{
  return 0xa82;
}



/* Entry: 10bbdee2c; end: 10bbdefcf; -[SCAInAppReportingReasonSubmit fromDictionary:] */

void FUN_10bbdee2c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d550;
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
    func_0x00010c0b4ca0();
    func_0x00010c17ee60(param_1);
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
    FUN_10bb09bb8();
    func_0x00010c20f0a0(param_1);
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
    func_0x00010c19cb40(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbdefd0; end: 10bbdefdb; -[SCAInAppReportingReasonSubmit getEventName] */

undefined ** FUN_10bbdefd0(void)

{
  return &PTR____CFConstantStringClassReference_110fc6d78;
}



/* Entry: 10bbdefdc; end: 10bbdefe3; -[SCAInAppReportingReasonSubmit getEventQoS] */

undefined8 FUN_10bbdefdc(void)

{
  return 2;
}



/* Entry: 10bbdefe4; end: 10bbdf037; -[SCAInAppReportingReasonSubmit setCommentLength:] */

void FUN_10bbdefe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101d218,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbdf038; end: 10bbdf0b7; -[SCAInAppReportingReasonSubmit setSubmissionAction:] */

void FUN_10bbdf038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb09b94(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_11101d2b8,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbdf0b8; end: 10bbdf10b; -[SCAInAppReportingReasonSubmit setFinalToggleState:] */

void FUN_10bbdf0b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101d2d8,8,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbdf10c; end: 10bbdf12f; -[SCAInAppReportingReasonSubmit getFieldNumberToFieldDict] */

void FUN_10bbdf10c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbdf130; end: 10bbdf167; -[SCAInAppReportingReasonSubmit addToProtoDictionary] */

void FUN_10bbdf130(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bbdf168; end: 10bbdf1bf; -[SCAInAppReportingReasonSubmit toProtoWithAllowedFields:] */

void FUN_10bbdf168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bbdf1c0; end: 10bbdf1c7; -[SCAInAppReportingReasonSubmit getPayloadIdentifier] */

undefined8 FUN_10bbdf1c0(void)

{
  return 0xa83;
}



/* Entry: 10bbdf1c8; end: 10bbdf1fb; -[SCAInAppReportingReasonsDropout fromDictionary:] */

void FUN_10bbdf1c8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270d558;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_fromDictionary__1125cc478);
  return;
}



/* Entry: 10bbdf1fc; end: 10bbdf207; -[SCAInAppReportingReasonsDropout getEventName] */

undefined ** FUN_10bbdf1fc(void)

{
  return &PTR____CFConstantStringClassReference_110fc6d98;
}



/* Entry: 10bbdf208; end: 10bbdf20f; -[SCAInAppReportingReasonsDropout getEventQoS] */

undefined8 FUN_10bbdf208(void)

{
  return 2;
}



/* Entry: 10bbdf210; end: 10bbdf233; -[SCAInAppReportingReasonsDropout getFieldNumberToFieldDict] */

void FUN_10bbdf210(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbdf234; end: 10bbdf26b; -[SCAInAppReportingReasonsDropout addToProtoDictionary] */

void FUN_10bbdf234(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bbdf26c; end: 10bbdf2c3; -[SCAInAppReportingReasonsDropout toProtoWithAllowedFields:] */

void FUN_10bbdf26c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bbdf2c4; end: 10bbdf2cb; -[SCAInAppReportingReasonsDropout getPayloadIdentifier] */

undefined8 FUN_10bbdf2c4(void)

{
  return 0xa84;
}



/* Entry: 10bbdf2cc; end: 10bbdf3a3; -[SCAInAppReportingReasonsView fromDictionary:] */

void FUN_10bbdf2cc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d560;
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
    func_0x00010c1e80c0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbdf3a4; end: 10bbdf3af; -[SCAInAppReportingReasonsView getEventName] */

undefined ** FUN_10bbdf3a4(void)

{
  return &PTR____CFConstantStringClassReference_110fc6db8;
}



/* Entry: 10bbdf3b0; end: 10bbdf3b7; -[SCAInAppReportingReasonsView getEventQoS] */

undefined8 FUN_10bbdf3b0(void)

{
  return 2;
}



/* Entry: 10bbdf3b8; end: 10bbdf3cf; -[SCAInAppReportingReasonsView setReasonGroup:] */

void FUN_10bbdf3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101d2f8,2,param_3,0);
  return;
}



/* Entry: 10bbdf3d0; end: 10bbdf3f3; -[SCAInAppReportingReasonsView getFieldNumberToFieldDict] */

void FUN_10bbdf3d0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbdf3f4; end: 10bbdf42b; -[SCAInAppReportingReasonsView addToProtoDictionary] */

void FUN_10bbdf3f4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bbdf42c; end: 10bbdf483; -[SCAInAppReportingReasonsView toProtoWithAllowedFields:] */

void FUN_10bbdf42c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bbdf484; end: 10bbdf48b; -[SCAInAppReportingReasonsView getPayloadIdentifier] */

undefined8 FUN_10bbdf484(void)

{
  return 0xa85;
}



/* Entry: 10bbdf48c; end: 10bbdf62b; -[SCAInAppSupportLoginHelp fromDictionary:] */

void FUN_10bbdf48c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d568;
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
    func_0x00010bf885a0();
    func_0x00010c214e60(param_1);
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
    FUN_10bafeccc();
    func_0x00010c21b2a0(param_1);
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
    FUN_10bafedc0();
    func_0x00010c21dda0(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbdf62c; end: 10bbdf637; -[SCAInAppSupportLoginHelp getEventName] */

undefined ** FUN_10bbdf62c(void)

{
  return &PTR____CFConstantStringClassReference_110fc6dd8;
}



/* Entry: 10bbdf638; end: 10bbdf63f; -[SCAInAppSupportLoginHelp getEventQoS] */

undefined8 FUN_10bbdf638(void)

{
  return 1;
}



/* Entry: 10bbdf640; end: 10bbdf693; -[SCAInAppSupportLoginHelp setTimeOnPageSec:] */

void FUN_10bbdf640(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101d318,2,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbdf694; end: 10bbdf713; -[SCAInAppSupportLoginHelp setUiLocation:] */

void FUN_10bbdf694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bafecac(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_11101d338,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbdf714; end: 10bbdf793; -[SCAInAppSupportLoginHelp setUserAction:] */

void FUN_10bbdf714(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bafeda0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb9878,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbdf794; end: 10bbdf797; -[SCAInAppSupportLoginHelp getFieldNumberToFieldDict] */

void FUN_10bbdf794(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbdf798; end: 10bbdf7a3; -[SCAInAppSupportLoginHelp toProtoWithAllowedFields:] */

void FUN_10bbdf798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bbdf7a4; end: 10bbdf7ab; -[SCAInAppSupportLoginHelp getPayloadIdentifier] */

undefined8 FUN_10bbdf7a4(void)

{
  return 0xfe2;
}



/* Entry: 10bbdf7ac; end: 10bbdf7df; -[SCAInAppWarningAck fromDictionary:] */

void FUN_10bbdf7ac(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270d570;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_fromDictionary__1125cc478);
  return;
}



/* Entry: 10bbdf7e0; end: 10bbdf7eb; -[SCAInAppWarningAck getEventName] */

undefined ** FUN_10bbdf7e0(void)

{
  return &PTR____CFConstantStringClassReference_110fc6df8;
}



/* Entry: 10bbdf7ec; end: 10bbdf7f3; -[SCAInAppWarningAck getEventQoS] */

undefined8 FUN_10bbdf7ec(void)

{
  return 2;
}



/* Entry: 10bbdf7f4; end: 10bbdf817; -[SCAInAppWarningAck getFieldNumberToFieldDict] */

void FUN_10bbdf7f4(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbdf818; end: 10bbdf84f; -[SCAInAppWarningAck addToProtoDictionary] */

void FUN_10bbdf818(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bbdf850; end: 10bbdf8a7; -[SCAInAppWarningAck toProtoWithAllowedFields:] */

void FUN_10bbdf850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bbdf8a8; end: 10bbdf8af; -[SCAInAppWarningAck getPayloadIdentifier] */

undefined8 FUN_10bbdf8a8(void)

{
  return 0x17a8;
}



/* Entry: 10bbdf8b0; end: 10bbdf9ff; -[SCAInAppWarningBase fromDictionary:] */

void FUN_10bbdf8b0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d578;
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
    func_0x00010c224780(param_1);
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
    func_0x00010c2247a0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbdfa00; end: 10bbdfa13; -[SCAInAppWarningBase setWarningId:] */

void FUN_10bbdfa00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_11101d358,param_3,0);
  return;
}



/* Entry: 10bbdfa14; end: 10bbdfa27; -[SCAInAppWarningBase setWarningVersion:] */

void FUN_10bbdfa14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_11101d378,param_3,0);
  return;
}



/* Entry: 10bbdfa28; end: 10bbdfaff; -[SCAInAppWarningDialogButtonAction fromDictionary:] */

void FUN_10bbdfa28(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d580;
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
    func_0x00010c1617e0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbdfb00; end: 10bbdfb0b; -[SCAInAppWarningDialogButtonAction getEventName] */

undefined ** FUN_10bbdfb00(void)

{
  return &PTR____CFConstantStringClassReference_110fc6e18;
}



/* Entry: 10bbdfb0c; end: 10bbdfb13; -[SCAInAppWarningDialogButtonAction getEventQoS] */

undefined8 FUN_10bbdfb0c(void)

{
  return 2;
}



/* Entry: 10bbdfb14; end: 10bbdfb2b; -[SCAInAppWarningDialogButtonAction setActionButtonType:] */

void FUN_10bbdfb14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fcaa38,2,param_3,0);
  return;
}



/* Entry: 10bbdfb2c; end: 10bbdfb4f; -[SCAInAppWarningDialogButtonAction getFieldNumberToFieldDict] */

void FUN_10bbdfb2c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbdfb50; end: 10bbdfb87; -[SCAInAppWarningDialogButtonAction addToProtoDictionary] */

void FUN_10bbdfb50(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bbdfb88; end: 10bbdfbdf; -[SCAInAppWarningDialogButtonAction toProtoWithAllowedFields:] */

void FUN_10bbdfb88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bbdfbe0; end: 10bbdfbe7; -[SCAInAppWarningDialogButtonAction getPayloadIdentifier] */

undefined8 FUN_10bbdfbe0(void)

{
  return 0x1351;
}



/* Entry: 10bbdfbe8; end: 10bbdfc1b; -[SCAInAppWarningDialogDismiss fromDictionary:] */

void FUN_10bbdfbe8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270d588;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_fromDictionary__1125cc478);
  return;
}



/* Entry: 10bbdfc1c; end: 10bbdfc27; -[SCAInAppWarningDialogDismiss getEventName] */

undefined ** FUN_10bbdfc1c(void)

{
  return &PTR____CFConstantStringClassReference_110fc6e38;
}



/* Entry: 10bbdfc28; end: 10bbdfc2f; -[SCAInAppWarningDialogDismiss getEventQoS] */

undefined8 FUN_10bbdfc28(void)

{
  return 2;
}



/* Entry: 10bbdfc30; end: 10bbdfc53; -[SCAInAppWarningDialogDismiss getFieldNumberToFieldDict] */

void FUN_10bbdfc30(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}


