/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10babf79c; end: 10babf7b3; -[SCASnapshotsOperaAction setSnapshotsOperaSessionId:] */

void FUN_10babf79c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fed678,6,param_3,0);
  return;
}



/* Entry: 10babf7b4; end: 10babf7b7; -[SCASnapshotsOperaAction getFieldNumberToFieldDict] */

void FUN_10babf7b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babf7b8; end: 10babf7c3; -[SCASnapshotsOperaAction toProtoWithAllowedFields:] */

void FUN_10babf7b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10babf7c4; end: 10babf7cb; -[SCASnapshotsOperaAction getPayloadIdentifier] */

undefined8 FUN_10babf7c4(void)

{
  return 0xcbb;
}



/* Entry: 10babf7cc; end: 10babf7d7; -[SCASnapshotsOperaSession getEventName] */

undefined ** FUN_10babf7cc(void)

{
  return &PTR____CFConstantStringClassReference_110fed698;
}



/* Entry: 10babf7d8; end: 10babf7df; -[SCASnapshotsOperaSession getEventQoS] */

undefined8 FUN_10babf7d8(void)

{
  return 1;
}



/* Entry: 10babf7e0; end: 10babf833; -[SCASnapshotsOperaSession setDurationMs:] */

void FUN_10babf7e0(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10babf834; end: 10babf8b3; -[SCASnapshotsOperaSession setSnapshotType:] */

void FUN_10babf834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010babd074(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fed658,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babf8b4; end: 10babf8cb; -[SCASnapshotsOperaSession setSnapshotsOperaSessionId:] */

void FUN_10babf8b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fed678,5,param_3,0);
  return;
}



/* Entry: 10babf8cc; end: 10babf8cf; -[SCASnapshotsOperaSession getFieldNumberToFieldDict] */

void FUN_10babf8cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babf8d0; end: 10babf8db; -[SCASnapshotsOperaSession toProtoWithAllowedFields:] */

void FUN_10babf8d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10babf8dc; end: 10babf8e3; -[SCASnapshotsOperaSession getPayloadIdentifier] */

undefined8 FUN_10babf8dc(void)

{
  return 0xcbd;
}



/* Entry: 10babf8e4; end: 10babf8ef; -[SCASnapshotsOperaSnapView getEventName] */

undefined ** FUN_10babf8e4(void)

{
  return &PTR____CFConstantStringClassReference_110fed6b8;
}



/* Entry: 10babf8f0; end: 10babf8f7; -[SCASnapshotsOperaSnapView getEventQoS] */

undefined8 FUN_10babf8f0(void)

{
  return 1;
}



/* Entry: 10babf8f8; end: 10babf94b; -[SCASnapshotsOperaSnapView setDurationMs:] */

void FUN_10babf8f8(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10babf94c; end: 10babf9cb; -[SCASnapshotsOperaSnapView setSnapType:] */

void FUN_10babf94c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010babd094(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fed638,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babf9cc; end: 10babfa4b; -[SCASnapshotsOperaSnapView setSnapshotType:] */

void FUN_10babf9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010babd074(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fed658,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babfa4c; end: 10babfa63; -[SCASnapshotsOperaSnapView setSnapshotsOperaSessionId:] */

void FUN_10babfa4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fed678,6,param_3,0);
  return;
}



/* Entry: 10babfa64; end: 10babfa67; -[SCASnapshotsOperaSnapView getFieldNumberToFieldDict] */

void FUN_10babfa64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babfa68; end: 10babfa73; -[SCASnapshotsOperaSnapView toProtoWithAllowedFields:] */

void FUN_10babfa68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10babfa74; end: 10babfa7b; -[SCASnapshotsOperaSnapView getPayloadIdentifier] */

undefined8 FUN_10babfa74(void)

{
  return 0xcbf;
}



/* Entry: 10babfa7c; end: 10babfa87; -[SCASnapshotsSnapDelete getEventName] */

undefined ** FUN_10babfa7c(void)

{
  return &PTR____CFConstantStringClassReference_110fed6d8;
}



/* Entry: 10babfa88; end: 10babfa8f; -[SCASnapshotsSnapDelete getEventQoS] */

undefined8 FUN_10babfa88(void)

{
  return 1;
}



/* Entry: 10babfa90; end: 10babfa9b; -[SCASnapshotsSnapDelete getPerUserSamplingRateV2] */

undefined8 FUN_10babfa90(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10babfa9c; end: 10babfaef; -[SCASnapshotsSnapDelete setSuccess:] */

void FUN_10babfa9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,3,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babfaf0; end: 10babfb07; -[SCASnapshotsSnapDelete setMySnapshotSessionId:] */

void FUN_10babfaf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fed5d8,4,param_3,0);
  return;
}



/* Entry: 10babfb08; end: 10babfb0b; -[SCASnapshotsSnapDelete getFieldNumberToFieldDict] */

void FUN_10babfb08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babfb0c; end: 10babfb17; -[SCASnapshotsSnapDelete toProtoWithAllowedFields:] */

void FUN_10babfb0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10babfb18; end: 10babfb1f; -[SCASnapshotsSnapDelete getPayloadIdentifier] */

undefined8 FUN_10babfb18(void)

{
  return 0xcc1;
}



/* Entry: 10babfb20; end: 10babfb2b; -[SCASnapshotsSnapUpload getEventName] */

undefined ** FUN_10babfb20(void)

{
  return &PTR____CFConstantStringClassReference_110fed6f8;
}



/* Entry: 10babfb2c; end: 10babfb33; -[SCASnapshotsSnapUpload getEventQoS] */

undefined8 FUN_10babfb2c(void)

{
  return 1;
}



/* Entry: 10babfb34; end: 10babfb3f; -[SCASnapshotsSnapUpload getPerUserSamplingRateV2] */

undefined8 FUN_10babfb34(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10babfb40; end: 10babfb93; -[SCASnapshotsSnapUpload setDurationMs:] */

void FUN_10babfb40(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10babfb94; end: 10babfc13; -[SCASnapshotsSnapUpload setMediaType:] */

void FUN_10babfb94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc90ccc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110db9478,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babfc14; end: 10babfc93; -[SCASnapshotsSnapUpload setOperation:] */

void FUN_10babfc14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010babd0b4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e04f38,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babfc94; end: 10babfcab; -[SCASnapshotsSnapUpload setMySnapshotSessionId:] */

void FUN_10babfc94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fed5d8,6,param_3,0);
  return;
}



/* Entry: 10babfcac; end: 10babfcff; -[SCASnapshotsSnapUpload setSuccess:] */

void FUN_10babfcac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,7,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babfd00; end: 10babfd03; -[SCASnapshotsSnapUpload getFieldNumberToFieldDict] */

void FUN_10babfd00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babfd04; end: 10babfd0f; -[SCASnapshotsSnapUpload toProtoWithAllowedFields:] */

void FUN_10babfd04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10babfd10; end: 10babfd17; -[SCASnapshotsSnapUpload getPayloadIdentifier] */

undefined8 FUN_10babfd10(void)

{
  return 0xcc2;
}



/* Entry: 10babfd18; end: 10babfd23; -[SCAUnifiedProfileActionMenuPageExit getEventName] */

undefined ** FUN_10babfd18(void)

{
  return &PTR____CFConstantStringClassReference_110fed718;
}



/* Entry: 10babfd24; end: 10babfd2b; -[SCAUnifiedProfileActionMenuPageExit getEventQoS] */

undefined8 FUN_10babfd24(void)

{
  return 2;
}



/* Entry: 10babfd2c; end: 10babfd37; -[SCAUnifiedProfileActionMenuPageExit getPerUserSamplingRate] */

undefined8 FUN_10babfd2c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10babfd38; end: 10babfd5b; -[SCAUnifiedProfileActionMenuPageExit getFieldNumberToFieldDict] */

void FUN_10babfd38(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babfd5c; end: 10babfd93; -[SCAUnifiedProfileActionMenuPageExit addToProtoDictionary] */

void FUN_10babfd5c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10babfd94; end: 10babfdeb; -[SCAUnifiedProfileActionMenuPageExit toProtoWithAllowedFields:] */

void FUN_10babfd94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10babfdec; end: 10babfdf3; -[SCAUnifiedProfileActionMenuPageExit getPayloadIdentifier] */

undefined8 FUN_10babfdec(void)

{
  return 0x97f;
}



/* Entry: 10babfdf4; end: 10babfdff; -[SCAUnifiedProfileActionMenuPageView getEventName] */

undefined ** FUN_10babfdf4(void)

{
  return &PTR____CFConstantStringClassReference_110fed778;
}



/* Entry: 10babfe00; end: 10babfe07; -[SCAUnifiedProfileActionMenuPageView getEventQoS] */

undefined8 FUN_10babfe00(void)

{
  return 1;
}



/* Entry: 10babfe08; end: 10babfe0f; -[SCAUnifiedProfileActionMenuPageView getPerUserSamplingRateV2] */

undefined8 FUN_10babfe08(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 10babfe10; end: 10babfe27; -[SCAUnifiedProfileActionMenuPageView setSourcePageType:] */

void FUN_10babfe10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ebcf98,6,param_3,0);
  return;
}



/* Entry: 10babfe28; end: 10babfe3f; -[SCAUnifiedProfileActionMenuPageView setSourceSessionId:] */

void FUN_10babfe28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e85318,8,param_3,0);
  return;
}



/* Entry: 10babfe40; end: 10babfe87; -[SCAUnifiedProfileActionMenuPageView setAvailableActions:] */

void FUN_10babfe40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcc5f8,9,param_3,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10babfe88; end: 10babfeab; -[SCAUnifiedProfileActionMenuPageView getFieldNumberToFieldDict] */

void FUN_10babfe88(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babfeac; end: 10babfee3; -[SCAUnifiedProfileActionMenuPageView addToProtoDictionary] */

void FUN_10babfeac(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10babfee4; end: 10babff3b; -[SCAUnifiedProfileActionMenuPageView toProtoWithAllowedFields:] */

void FUN_10babfee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10babff3c; end: 10babff43; -[SCAUnifiedProfileActionMenuPageView getPayloadIdentifier] */

undefined8 FUN_10babff3c(void)

{
  return 0x980;
}



/* Entry: 10babff44; end: 10babff4f; -[SCAUnifiedProfileBaseCharmEvent getEventName] */

undefined ** FUN_10babff44(void)

{
  return &PTR____CFConstantStringClassReference_110fed798;
}



/* Entry: 10babff50; end: 10babff57; -[SCAUnifiedProfileBaseCharmEvent getEventQoS] */

undefined8 FUN_10babff50(void)

{
  return 1;
}



/* Entry: 10babff58; end: 10babffab; -[SCAUnifiedProfileBaseCharmEvent setCharmId:] */

void FUN_10babff58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed7b8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babffac; end: 10babffcf; -[SCAUnifiedProfileBaseCharmEvent getFieldNumberToFieldDict] */

void FUN_10babffac(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babffd0; end: 10bac0007; -[SCAUnifiedProfileBaseCharmEvent addToProtoDictionary] */

void FUN_10babffd0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bac0008; end: 10bac005f; -[SCAUnifiedProfileBaseCharmEvent toProtoWithAllowedFields:] */

void FUN_10bac0008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bac0060; end: 10bac0067; -[SCAUnifiedProfileBaseCharmEvent getPayloadIdentifier] */

undefined8 FUN_10bac0060(void)

{
  return 0x982;
}



/* Entry: 10bac0068; end: 10bac0073; -[SCAUnifiedProfileCharmAttain getEventName] */

undefined ** FUN_10bac0068(void)

{
  return &PTR____CFConstantStringClassReference_110fed7d8;
}



/* Entry: 10bac0074; end: 10bac007b; -[SCAUnifiedProfileCharmAttain getEventQoS] */

undefined8 FUN_10bac0074(void)

{
  return 1;
}



/* Entry: 10bac007c; end: 10bac009f; -[SCAUnifiedProfileCharmAttain getFieldNumberToFieldDict] */

void FUN_10bac007c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac00a0; end: 10bac00d7; -[SCAUnifiedProfileCharmAttain addToProtoDictionary] */

void FUN_10bac00a0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bac00d8; end: 10bac012f; -[SCAUnifiedProfileCharmAttain toProtoWithAllowedFields:] */

void FUN_10bac00d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bac0130; end: 10bac0137; -[SCAUnifiedProfileCharmAttain getPayloadIdentifier] */

undefined8 FUN_10bac0130(void)

{
  return 0x984;
}



/* Entry: 10bac0138; end: 10bac0143; -[SCAUnifiedProfileCharmCardImpression getEventName] */

undefined ** FUN_10bac0138(void)

{
  return &PTR____CFConstantStringClassReference_110fed7f8;
}



/* Entry: 10bac0144; end: 10bac014b; -[SCAUnifiedProfileCharmCardImpression getEventQoS] */

undefined8 FUN_10bac0144(void)

{
  return 1;
}



/* Entry: 10bac014c; end: 10bac019f; -[SCAUnifiedProfileCharmCardImpression setIsNew:] */

void FUN_10bac014c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfd58,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac01a0; end: 10bac01f3; -[SCAUnifiedProfileCharmCardImpression setMaxPos:] */

void FUN_10bac01a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed818,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac01f4; end: 10bac0247; -[SCAUnifiedProfileCharmCardImpression setPos:] */

void FUN_10bac01f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed838,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac0248; end: 10bac026b; -[SCAUnifiedProfileCharmCardImpression getFieldNumberToFieldDict] */

void FUN_10bac0248(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac026c; end: 10bac02a3; -[SCAUnifiedProfileCharmCardImpression addToProtoDictionary] */

void FUN_10bac026c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bac02a4; end: 10bac02fb; -[SCAUnifiedProfileCharmCardImpression toProtoWithAllowedFields:] */

void FUN_10bac02a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bac02fc; end: 10bac0303; -[SCAUnifiedProfileCharmCardImpression getPayloadIdentifier] */

undefined8 FUN_10bac02fc(void)

{
  return 0x985;
}



/* Entry: 10bac0304; end: 10bac030f; -[SCAUnifiedProfileCharmDetailImpression getEventName] */

undefined ** FUN_10bac0304(void)

{
  return &PTR____CFConstantStringClassReference_110fed858;
}



/* Entry: 10bac0310; end: 10bac0317; -[SCAUnifiedProfileCharmDetailImpression getEventQoS] */

undefined8 FUN_10bac0310(void)

{
  return 1;
}



/* Entry: 10bac0318; end: 10bac036b; -[SCAUnifiedProfileCharmDetailImpression setIsNew:] */

void FUN_10bac0318(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfd58,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac036c; end: 10bac03bf; -[SCAUnifiedProfileCharmDetailImpression setMaxPos:] */

void FUN_10bac036c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed818,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac03c0; end: 10bac0413; -[SCAUnifiedProfileCharmDetailImpression setPos:] */

void FUN_10bac03c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed838,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac0414; end: 10bac0493; -[SCAUnifiedProfileCharmDetailImpression setSource:] */

void FUN_10bac0414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bae7500(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,10,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac0494; end: 10bac04e7; -[SCAUnifiedProfileCharmDetailImpression setViewTimeMillis:] */

void FUN_10bac0494(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed878,0xb,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac04e8; end: 10bac050b; -[SCAUnifiedProfileCharmDetailImpression getFieldNumberToFieldDict] */

void FUN_10bac04e8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac050c; end: 10bac0543; -[SCAUnifiedProfileCharmDetailImpression addToProtoDictionary] */

void FUN_10bac050c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bac0544; end: 10bac059b; -[SCAUnifiedProfileCharmDetailImpression toProtoWithAllowedFields:] */

void FUN_10bac0544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bac059c; end: 10bac05a3; -[SCAUnifiedProfileCharmDetailImpression getPayloadIdentifier] */

undefined8 FUN_10bac059c(void)

{
  return 0x986;
}



/* Entry: 10bac05a4; end: 10bac05af; -[SCAUnifiedProfileCharmDetailView getEventName] */

undefined ** FUN_10bac05a4(void)

{
  return &PTR____CFConstantStringClassReference_110fed898;
}



/* Entry: 10bac05b0; end: 10bac05b7; -[SCAUnifiedProfileCharmDetailView getEventQoS] */

undefined8 FUN_10bac05b0(void)

{
  return 1;
}



/* Entry: 10bac05b8; end: 10bac05bf; -[SCAUnifiedProfileCharmDetailView getPerUserSamplingRateV2] */

undefined8 FUN_10bac05b8(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 10bac05c0; end: 10bac0613; -[SCAUnifiedProfileCharmDetailView setIsNew:] */

void FUN_10bac05c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfd58,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac0614; end: 10bac0667; -[SCAUnifiedProfileCharmDetailView setMaxPos:] */

void FUN_10bac0614(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed818,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac0668; end: 10bac06bb; -[SCAUnifiedProfileCharmDetailView setPos:] */

void FUN_10bac0668(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed838,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac06bc; end: 10bac073b; -[SCAUnifiedProfileCharmDetailView setSource:] */

void FUN_10bac06bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bae7500(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,10,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac073c; end: 10bac078f; -[SCAUnifiedProfileCharmDetailView setViewTimeMillis:] */

void FUN_10bac073c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed878,0xb,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac0790; end: 10bac07b3; -[SCAUnifiedProfileCharmDetailView getFieldNumberToFieldDict] */

void FUN_10bac0790(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac07b4; end: 10bac07eb; -[SCAUnifiedProfileCharmDetailView addToProtoDictionary] */

void FUN_10bac07b4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


