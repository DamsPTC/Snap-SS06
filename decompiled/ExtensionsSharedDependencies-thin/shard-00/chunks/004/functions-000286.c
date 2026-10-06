/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 005a444c; end: 005a449f; -[SCALiveLocationPushNotificationResult setUploadDurationMs:] */

void FUN_005a444c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f880,0xb,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a44a0; end: 005a44f3; -[SCALiveLocationPushNotificationResult setWaitingForLocationDurationMs:] */

void FUN_005a44a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f8a0,0xc,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a44f4; end: 005a4573; -[SCALiveLocationPushNotificationResult setExtensionType:] */

void FUN_005a44f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_005984e8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f200,0xd,puVar1,3,
                  param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a4574; end: 005a45c7; -[SCALiveLocationPushNotificationResult setTotalDurationMs:] */

void FUN_005a4574(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f860,0xe,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a45c8; end: 005a45cb; -[SCALiveLocationPushNotificationResult getFieldNumberToFieldDict] */

void FUN_005a45c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_constructFieldNumberToFieldDict_00abafc8);
  return;
}



/* Entry: 005a45cc; end: 005a45d7; -[SCALiveLocationPushNotificationResult toProtoWithAllowedFields:] */

void FUN_005a45cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00792ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_00abf7c0,2,param_3);
  return;
}



/* Entry: 005a45d8; end: 005a45df; -[SCALiveLocationPushNotificationResult getPayloadIdentifier] */

undefined8 FUN_005a45d8(void)

{
  return 0xf78;
}



/* Entry: 005a45e0; end: 005a4873; -[SCALiveLocationPushNotificationStreamingFailure fromDictionary:] */

void FUN_005a45e0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac4000;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__00ab7610,param_3);
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078dbe0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_005986d8();
    func_0x0078df00(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00780e20();
    func_0x0078f380(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x00790c60(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00780e20();
    func_0x0078e6a0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 005a4874; end: 005a487f; -[SCALiveLocationPushNotificationStreamingFailure getEventName] */

undefined ** FUN_005a4874(void)

{
  return &PTR____CFConstantStringClassReference_00a31340;
}



/* Entry: 005a4880; end: 005a4887; -[SCALiveLocationPushNotificationStreamingFailure getEventQoS] */

undefined8 FUN_005a4880(void)

{
  return 1;
}



/* Entry: 005a4888; end: 005a48db; -[SCALiveLocationPushNotificationStreamingFailure setElapsedTimeMs:] */

void FUN_005a4888(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f8c0,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a48dc; end: 005a495b; -[SCALiveLocationPushNotificationStreamingFailure setFailureType:] */

void FUN_005a48dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_005986b8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f8e0,3,puVar1,3,param_3
                 );
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a495c; end: 005a4973; -[SCALiveLocationPushNotificationStreamingFailure setNotificationId:] */

void FUN_005a495c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f760,4,param_3,0);
  return;
}



/* Entry: 005a4974; end: 005a49c7; -[SCALiveLocationPushNotificationStreamingFailure setTraySessionId:] */

void FUN_005a4974(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f920,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a49c8; end: 005a49df; -[SCALiveLocationPushNotificationStreamingFailure setInitiatingUserGuid:] */

void FUN_005a49c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f900,6,param_3,0);
  return;
}



/* Entry: 005a49e0; end: 005a49e3; -[SCALiveLocationPushNotificationStreamingFailure getFieldNumberToFieldDict] */

void FUN_005a49e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_constructFieldNumberToFieldDict_00abafc8);
  return;
}



/* Entry: 005a49e4; end: 005a49ef; -[SCALiveLocationPushNotificationStreamingFailure toProtoWithAllowedFields:] */

void FUN_005a49e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00792ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_00abf7c0,1,param_3);
  return;
}



/* Entry: 005a49f0; end: 005a49f7; -[SCALiveLocationPushNotificationStreamingFailure getPayloadIdentifier] */

undefined8 FUN_005a49f0(void)

{
  return 0x13d2;
}



/* Entry: 005a49f8; end: 005a4dc7; -[SCALiveLocationPushNotificationStreamingUpdate fromDictionary:] */

void FUN_005a49f8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac4008;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__00ab7610,param_3);
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078dbe0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078ecc0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00780e20();
    func_0x0078f380(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x007903c0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x00790c60(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00782440();
    func_0x0078ec80(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00782440();
    func_0x00791220(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00780e20();
    func_0x0078e6a0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 005a4dc8; end: 005a4dd3; -[SCALiveLocationPushNotificationStreamingUpdate getEventName] */

undefined ** FUN_005a4dc8(void)

{
  return &PTR____CFConstantStringClassReference_00a31360;
}



/* Entry: 005a4dd4; end: 005a4ddb; -[SCALiveLocationPushNotificationStreamingUpdate getEventQoS] */

undefined8 FUN_005a4dd4(void)

{
  return 1;
}



/* Entry: 005a4ddc; end: 005a4e2f; -[SCALiveLocationPushNotificationStreamingUpdate setElapsedTimeMs:] */

void FUN_005a4ddc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f8c0,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a4e30; end: 005a4e83; -[SCALiveLocationPushNotificationStreamingUpdate setLocationAgeMs:] */

void FUN_005a4e30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f960,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a4e84; end: 005a4e9b; -[SCALiveLocationPushNotificationStreamingUpdate setNotificationId:] */

void FUN_005a4e84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f760,5,param_3,0);
  return;
}



/* Entry: 005a4e9c; end: 005a4eef; -[SCALiveLocationPushNotificationStreamingUpdate setSequenceNumber:] */

void FUN_005a4e9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f980,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a4ef0; end: 005a4f43; -[SCALiveLocationPushNotificationStreamingUpdate setTraySessionId:] */

void FUN_005a4ef0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f920,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a4f44; end: 005a4f97; -[SCALiveLocationPushNotificationStreamingUpdate setLocationAccuracy:] */

void FUN_005a4f44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f940,9,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a4f98; end: 005a4feb; -[SCALiveLocationPushNotificationStreamingUpdate setVelocity:] */

void FUN_005a4f98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f9a0,10,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a4fec; end: 005a5003; -[SCALiveLocationPushNotificationStreamingUpdate setInitiatingUserGuid:] */

void FUN_005a4fec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f900,0xb,param_3,0);
  return;
}



/* Entry: 005a5004; end: 005a5007; -[SCALiveLocationPushNotificationStreamingUpdate getFieldNumberToFieldDict] */

void FUN_005a5004(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_constructFieldNumberToFieldDict_00abafc8);
  return;
}



/* Entry: 005a5008; end: 005a5013; -[SCALiveLocationPushNotificationStreamingUpdate toProtoWithAllowedFields:] */

void FUN_005a5008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00792ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_00abf7c0,2,param_3);
  return;
}



/* Entry: 005a5014; end: 005a501b; -[SCALiveLocationPushNotificationStreamingUpdate getPayloadIdentifier] */

undefined8 FUN_005a5014(void)

{
  return 0x13d4;
}



/* Entry: 005a501c; end: 005a5c7b; -[SCANetworkEventBase fromDictionary:] */

void FUN_005a501c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac4010;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__00ab7610,param_3);
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fbc0();
    func_0x0078cba0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00780e20();
    func_0x0078cbc0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_00597f54();
    func_0x0078cbe0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fbc0();
    func_0x0078d600(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078d620(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078d6a0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078db20(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078e5c0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_005988b4();
    func_0x0078ed20(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00780e20();
    func_0x0078ee40(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00780e20();
    func_0x0078ee60(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00780e20();
    func_0x0078ef00(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00780e20();
    func_0x0078f5c0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00780e20();
    func_0x0078f980(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00782440();
    func_0x00781920(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078fd00(param_1);
    _objc_release(puVar4);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078fd40(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00780e20();
    func_0x0078fde0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00780e20();
    func_0x0078ff80(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078ffc0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x00790360(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00780e20();
    func_0x007903e0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00780e20();
    func_0x00790940(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_00599178();
    func_0x00790960(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x00790a80(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x00790c40(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x00790cc0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x00790ce0(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 005a5c7c; end: 005a5ccb; -[SCANetworkEventBase setAppIsTravelMode:] */

void FUN_005a5c7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e020(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f9c0,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a5ccc; end: 005a5cdf; -[SCANetworkEventBase setAppSessionId:] */

void FUN_005a5ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078e030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_value_type__00abe518,
             &PTR____CFConstantStringClassReference_00a2f9e0,param_3,0);
  return;
}



/* Entry: 005a5ce0; end: 005a5d5b; -[SCANetworkEventBase setAppState:] */

void FUN_005a5ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_00597f34(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e000(param_1,param_2,&PTR____CFConstantStringClassReference_00a2fa00,puVar1,3,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a5d5c; end: 005a5dab; -[SCANetworkEventBase setConnectionReused:] */

void FUN_005a5d5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e020(param_1,param_2,&PTR____CFConstantStringClassReference_00a2fa20,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a5dac; end: 005a5dfb; -[SCANetworkEventBase setConnectionTime:] */

void FUN_005a5dac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e020(param_1,param_2,&PTR____CFConstantStringClassReference_00a2fa40,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a5dfc; end: 005a5e4b; -[SCANetworkEventBase setContentAttribution:] */

void FUN_005a5dfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e020(param_1,param_2,&PTR____CFConstantStringClassReference_00a2fa60,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a5e4c; end: 005a5e9b; -[SCANetworkEventBase setDnsLookupTime:] */

void FUN_005a5e4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e020(param_1,param_2,&PTR____CFConstantStringClassReference_00a2fa80,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a5e9c; end: 005a5eeb; -[SCANetworkEventBase setHttpRtt:] */

void FUN_005a5e9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e020(param_1,param_2,&PTR____CFConstantStringClassReference_00a2faa0,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a5eec; end: 005a5f67; -[SCANetworkEventBase setLogSource:] */

void FUN_005a5eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_005988a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e000(param_1,param_2,&PTR____CFConstantStringClassReference_00a2fac0,puVar1,3,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a5f68; end: 005a5f7b; -[SCANetworkEventBase setMediaContextType:] */

void FUN_005a5f68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078e030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_value_type__00abe518,
             &PTR____CFConstantStringClassReference_00a2fae0,param_3,0);
  return;
}



/* Entry: 005a5f7c; end: 005a5f8f; -[SCANetworkEventBase setMediaId:] */

void FUN_005a5f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078e030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_value_type__00abe518,
             &PTR____CFConstantStringClassReference_00a2fb00,param_3,0);
  return;
}



/* Entry: 005a5f90; end: 005a5fa3; -[SCANetworkEventBase setMediaType:] */

void FUN_005a5f90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078e030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_value_type__00abe518,
             &PTR____CFConstantStringClassReference_00a2fb20,param_3,0);
  return;
}



/* Entry: 005a5fa4; end: 005a5fb7; -[SCANetworkEventBase setOriginalHost:] */

void FUN_005a5fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078e030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_value_type__00abe518,
             &PTR____CFConstantStringClassReference_00a2fb40,param_3,0);
  return;
}



/* Entry: 005a5fb8; end: 005a5fcb; -[SCANetworkEventBase setProtocol:] */

void FUN_005a5fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078e030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_value_type__00abe518,
             &PTR____CFConstantStringClassReference_00a2fb60,param_3,0);
  return;
}



/* Entry: 005a5fcc; end: 005a604b; -[SCANetworkEventBase setReqTimestamp:] */

/* WARNING: Possible PIC construction at 0x005a6018: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x005a601c) */
/* WARNING: Removing unreachable block (ram,0x0077aa60) */

void FUN_005a5fcc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x007928e0(param_3);
    func_0x00789c20(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0078e030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_value_type__00abe518,
             &PTR____CFConstantStringClassReference_00a2fb80,puVar1,5);
  return;
}



/* Entry: 005a604c; end: 005a60af; -[SCANetworkEventBase getActionTs] */

undefined8 FUN_005a604c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00782440();
  _objc_release(uVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 005a60b0; end: 005a60ff; -[SCANetworkEventBase setReqWireSize:] */

void FUN_005a60b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e020(param_1,param_2,&PTR____CFConstantStringClassReference_00a2fba0,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a6100; end: 005a6113; -[SCANetworkEventBase setRequestId:] */

void FUN_005a6100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078e030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_value_type__00abe518,
             &PTR____CFConstantStringClassReference_00a2fbc0,param_3,0);
  return;
}



/* Entry: 005a6114; end: 005a6127; -[SCANetworkEventBase setRespContentType:] */

void FUN_005a6114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078e030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_value_type__00abe518,
             &PTR____CFConstantStringClassReference_00a2fbe0,param_3,0);
  return;
}



/* Entry: 005a6128; end: 005a6177; -[SCANetworkEventBase setRespWireSize:] */

void FUN_005a6128(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e020(param_1,param_2,&PTR____CFConstantStringClassReference_00a2fc00,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a6178; end: 005a61c7; -[SCANetworkEventBase setSecureConnectionTime:] */

void FUN_005a6178(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e020(param_1,param_2,&PTR____CFConstantStringClassReference_00a2fc20,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a61c8; end: 005a61db; -[SCANetworkEventBase setServerIp:] */

void FUN_005a61c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078e030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_value_type__00abe518,
             &PTR____CFConstantStringClassReference_00a2fc40,param_3,0);
  return;
}



/* Entry: 005a61dc; end: 005a61ef; -[SCANetworkEventBase setTaskId:] */

void FUN_005a61dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078e030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_value_type__00abe518,
             &PTR____CFConstantStringClassReference_00a2fc60,param_3,0);
  return;
}



/* Entry: 005a61f0; end: 005a626b; -[SCANetworkEventBase setTaskType:] */

void FUN_005a61f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_00599158(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e000(param_1,param_2,&PTR____CFConstantStringClassReference_00a2fc80,puVar1,3,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a626c; end: 005a62bb; -[SCANetworkEventBase setTimeSinceAppStateChange:] */

void FUN_005a626c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e020(param_1,param_2,&PTR____CFConstantStringClassReference_00a2fca0,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a62bc; end: 005a630b; -[SCANetworkEventBase setTransportRtt:] */

void FUN_005a62bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e020(param_1,param_2,&PTR____CFConstantStringClassReference_00a2fcc0,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a630c; end: 005a635b; -[SCANetworkEventBase setTtfb:] */

void FUN_005a630c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e020(param_1,param_2,&PTR____CFConstantStringClassReference_00a2fce0,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a635c; end: 005a63ab; -[SCANetworkEventBase setTtlb:] */

void FUN_005a635c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e020(param_1,param_2,&PTR____CFConstantStringClassReference_00a2fd00,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a63ac; end: 005a8d8b; -[SCANetworkRequest fromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x005a8aa4) */
/* WARNING: Removing unreachable block (ram,0x005a8bd8) */

undefined ** FUN_005a63ac(ulong param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uStack_178;
  undefined *puStack_170;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  puStack_170 = PTR_PTR_00ac4018;
  uStack_178 = param_1;
  _objc_msgSendSuper2(&uStack_178,PTR_s_fromDictionary__00ab7610,param_3);
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x0078cc80(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x0078ce60(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_00598170();
    func_0x0078ce80(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078cea0(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078cec0(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x0078cee0(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x0078d200(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x0078d320(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fbc0();
    func_0x0078d380(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x0078d3a0(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x0078d580(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00782440();
    func_0x0078d5a0(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00782440();
    func_0x0078d5c0(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x0078d640(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x0078d6e0(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078d700(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_00598eb8();
    func_0x0078dcc0(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078dce0(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x0078e120(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x0078e160(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x0078e180(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078e2a0(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x0078e560(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x0078e5a0(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078e700(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fbc0();
    func_0x0078e880(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fbc0();
    func_0x0078e8c0(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fbc0();
    func_0x0078e8e0(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fbc0();
    func_0x0078e900(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x0078edc0(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_00598fc8();
    func_0x0078f240(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078f260(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078f2e0(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078f300(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x0078f6c0(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x0078f720(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x0078fa40(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078fa60(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078fa80(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x0078fae0(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_00598cd0();
    func_0x0078fb00(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078fb60(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x0078fc40(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078fc60(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078fc80(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078fca0(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078fcc0(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078fce0(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078ff60(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078ffa0(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x00790000(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x007900a0(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x007900c0(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x00790400(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x00790440(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x00790660(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_00599aac();
    func_0x00790800(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fbc0();
    func_0x00790880(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x00790920(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x00790a60(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x00790bc0(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_005990a0();
    func_0x00790c80(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x00790f60(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x00790f80(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x00791040(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x00791060(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x00791080(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078cd20(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fbc0();
    func_0x0078cd40(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078dd40(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x007900e0(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_00598468();
    func_0x0078e340(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078e360(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078f280(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078cc00(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fbc0();
    func_0x0078cc20(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_00598c4c();
    func_0x0078d2e0(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078d300(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_00598da8();
    func_0x0078d2c0(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_00598b08();
    func_0x0078cc40(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_00598ba8();
    func_0x0078cd60(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_0059954c();
    func_0x0078fe80(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x0078d480(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x0078e760(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078fd20(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x0078fb80(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788b40();
    func_0x00790aa0(param_1);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
    ppuVar3 = param_3;
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar3;
    func_0x00780ea0();
    while (ppuVar1 != (undefined **)0x0) {
      ppuVar6 = (undefined **)0x0;
      do {
        uVar2 = param_1;
        func_0x0077d0c0();
        if ((uVar2 & 1) == 0) {
          puVar5 = PTR_PTR_00ac3148;
          _objc_alloc(PTR_PTR_00ac3148);
          func_0x00785300();
          func_0x0077e720(puVar4);
          _objc_release(puVar5);
        }
        ppuVar6 = (undefined **)((long)ppuVar6 + 1);
      } while (ppuVar1 != ppuVar6);
      ppuVar1 = ppuVar3;
      func_0x00780ea0();
    }
    _objc_release(ppuVar3);
    func_0x0078fdc0(param_1);
    _objc_release(puVar4);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
    ppuVar3 = param_3;
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar3;
    func_0x00780ea0();
    while (ppuVar1 != (undefined **)0x0) {
      ppuVar6 = (undefined **)0x0;
      do {
        uVar2 = param_1;
        func_0x0077d0c0();
        if ((uVar2 & 1) == 0) {
          puVar5 = PTR_PTR_00ac3150;
          _objc_alloc(PTR_PTR_00ac3150);
          func_0x00785300();
          func_0x0077e720(puVar4);
          _objc_release(puVar5);
        }
        ppuVar6 = (undefined **)((long)ppuVar6 + 1);
      } while (ppuVar1 != ppuVar6);
      ppuVar1 = ppuVar3;
      func_0x00780ea0();
    }
    _objc_release(ppuVar3);
    func_0x0078eb40(param_1);
    _objc_release(puVar4);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00780e20();
    func_0x0078df20(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0077d0c0();
  _objc_release(ppuVar1);
  if ((uVar2 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fbc0();
    func_0x0078e940(param_1);
    _objc_release(ppuVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_68) {
    ___stack_chk_fail();
    return &PTR____CFConstantStringClassReference_00a31380;
  }
  return param_3;
}



/* Entry: 005a8d8c; end: 005a8d97; -[SCANetworkRequest getEventName] */

undefined ** FUN_005a8d8c(void)

{
  return &PTR____CFConstantStringClassReference_00a31380;
}



/* Entry: 005a8d98; end: 005a8d9f; -[SCANetworkRequest getEventQoS] */

undefined8 FUN_005a8d98(void)

{
  return 2;
}



/* Entry: 005a8da0; end: 005a8dab; -[SCANetworkRequest getPerUserSamplingRate] */

undefined8 FUN_005a8da0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 005a8dac; end: 005a8db7; -[SCANetworkRequest getPerUserSamplingRateV2] */

undefined8 FUN_005a8dac(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 005a8db8; end: 005a8dcf; -[SCANetworkRequest setAsn:] */

void FUN_005a8db8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2fd80,5,param_3,0);
  return;
}



/* Entry: 005a8dd0; end: 005a8de7; -[SCANetworkRequest setBandwidthClassChanges:] */

void FUN_005a8dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2fe00,6,param_3,0);
  return;
}



/* Entry: 005a8de8; end: 005a8e67; -[SCANetworkRequest setBandwidthClassStart:] */

void FUN_005a8de8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_00598150(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2fe20,7,puVar1,3,param_3
                 );
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a8e68; end: 005a8ebb; -[SCANetworkRequest setBandwidthEstimationAverage:] */

void FUN_005a8e68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2fe40,8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a8ebc; end: 005a8f0f; -[SCANetworkRequest setBandwidthEstimationStart:] */

void FUN_005a8ebc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2fe60,9,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a8f10; end: 005a8f27; -[SCANetworkRequest setBandwidthRangeClassStart:] */

void FUN_005a8f10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2fe80,10,param_3,0);
  return;
}



/* Entry: 005a8f28; end: 005a8f3f; -[SCANetworkRequest setCacheControl:] */

void FUN_005a8f28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2fea0,0xb,param_3,0);
  return;
}



/* Entry: 005a8f40; end: 005a8f57; -[SCANetworkRequest setCarrierName:] */

void FUN_005a8f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2ff20,0xc,param_3,0);
  return;
}



/* Entry: 005a8f58; end: 005a8fab; -[SCANetworkRequest setCdnCacheHit:] */

void FUN_005a8f58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2ff40,0xd,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a8fac; end: 005a8fc3; -[SCANetworkRequest setCdnReqId:] */

void FUN_005a8fac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2ff60,0xe,param_3,0);
  return;
}



/* Entry: 005a8fc4; end: 005a8fdb; -[SCANetworkRequest setConcurrentRequestIds:] */

void FUN_005a8fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2ffa0,0xf,param_3,0);
  return;
}



/* Entry: 005a8fdc; end: 005a902f; -[SCANetworkRequest setConcurrentStreamNumAvg:] */

void FUN_005a8fdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2ffc0,0x10,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a9030; end: 005a9083; -[SCANetworkRequest setConcurrentUploadStreamNumAvg:] */

void FUN_005a9030(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2ffe0,0x11,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a9084; end: 005a909b; -[SCANetworkRequest setConnectionType:] */

void FUN_005a9084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a30000,0x14,param_3,0);
  return;
}



/* Entry: 005a909c; end: 005a90b3; -[SCANetworkRequest setContentResolveId:] */

void FUN_005a909c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a30020,0x15,param_3,0);
  return;
}



/* Entry: 005a90b4; end: 005a9107; -[SCANetworkRequest setContentResolveTime:] */

void FUN_005a90b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30040,0x16,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a9108; end: 005a9187; -[SCANetworkRequest setErrorCategory:] */

void FUN_005a9108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_00598e98(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30060,0x18,puVar1,3,
                  param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a9188; end: 005a91db; -[SCANetworkRequest setErrorCode:] */

void FUN_005a9188(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30080,0x19,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a91dc; end: 005a91f3; -[SCANetworkRequest setFinalRespondingHost:] */

void FUN_005a91dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a300e0,0x1a,param_3,0);
  return;
}



/* Entry: 005a91f4; end: 005a920b; -[SCANetworkRequest setFkMediaOrchestrationAttemptId:] */

void FUN_005a91f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a30100,0x1b,param_3,0);
  return;
}



/* Entry: 005a920c; end: 005a9223; -[SCANetworkRequest setFkSendMessageAttemptId:] */

void FUN_005a920c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a30120,0x1c,param_3,0);
  return;
}



/* Entry: 005a9224; end: 005a9277; -[SCANetworkRequest setFsToDnsLookupStart:] */

void FUN_005a9224(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30140,0x1d,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a9278; end: 005a928f; -[SCANetworkRequest setHost:] */

void FUN_005a9278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a301a0,0x1e,param_3,0);
  return;
}



/* Entry: 005a9290; end: 005a92a7; -[SCANetworkRequest setHttpMethod:] */

void FUN_005a9290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a301c0,0x1f,param_3,0);
  return;
}



/* Entry: 005a92a8; end: 005a92fb; -[SCANetworkRequest setInternalErrorCode:] */

void FUN_005a92a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a301e0,0x20,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a92fc; end: 005a934f; -[SCANetworkRequest setIsPaused:] */

void FUN_005a92fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30220,0x21,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a9350; end: 005a93a3; -[SCANetworkRequest setIsRedirected:] */

void FUN_005a9350(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30240,0x22,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a93a4; end: 005a93f7; -[SCANetworkRequest setIsResumable:] */

void FUN_005a93a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30260,0x23,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a93f8; end: 005a944b; -[SCANetworkRequest setIsResumed:] */

void FUN_005a93f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30280,0x24,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a944c; end: 005a9463; -[SCANetworkRequest setMaskedRemoteIp:] */

void FUN_005a944c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a302e0,0x25,param_3,0);
  return;
}



/* Entry: 005a9464; end: 005a94e3; -[SCANetworkRequest setNetworkInterface:] */

void FUN_005a9464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_00598fa8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30300,0x29,puVar1,3,
                  param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a94e4; end: 005a9537; -[SCANetworkRequest setNetworkLatency:] */

void FUN_005a94e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30320,0x2a,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a9538; end: 005a958b; -[SCANetworkRequest setNetworkTtfb:] */

void FUN_005a9538(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30360,0x2b,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a958c; end: 005a95df; -[SCANetworkRequest setNetworkTtlb:] */

void FUN_005a958c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a30380,0x2c,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}


