/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 005a1c98; end: 005a1d17; -[SCAChatExtensionSend setStickerType:] */

void FUN_005a1c98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_005999cc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f340,0xb,puVar1,3,
                  param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a1d18; end: 005a1d97; -[SCAChatExtensionSend setChatExtensionMessageType:] */

void FUN_005a1d18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_005980c8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f240,0xc,puVar1,3,
                  param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a1d98; end: 005a1d9b; -[SCAChatExtensionSend getFieldNumberToFieldDict] */

void FUN_005a1d98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_constructFieldNumberToFieldDict_00abafc8);
  return;
}



/* Entry: 005a1d9c; end: 005a1da7; -[SCAChatExtensionSend toProtoWithAllowedFields:] */

void FUN_005a1d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00792ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_00abf7c0,2,param_3);
  return;
}



/* Entry: 005a1da8; end: 005a1daf; -[SCAChatExtensionSend getPayloadIdentifier] */

undefined8 FUN_005a1da8(void)

{
  return 0x16a4;
}



/* Entry: 005a1db0; end: 005a2043; -[SCAChatExtensionStickerSearch fromDictionary:] */

void FUN_005a1db0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac3fc0;
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
    FUN_005983e4();
    func_0x0078de80(param_1);
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
    func_0x0078ea60(param_1);
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
    func_0x0078f6e0(param_1);
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
    FUN_00599608();
    func_0x00790700(param_1);
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
    func_0x00790720(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 005a2044; end: 005a204f; -[SCAChatExtensionStickerSearch getEventName] */

undefined ** FUN_005a2044(void)

{
  return &PTR____CFConstantStringClassReference_00a31280;
}



/* Entry: 005a2050; end: 005a2057; -[SCAChatExtensionStickerSearch getEventQoS] */

undefined8 FUN_005a2050(void)

{
  return 1;
}



/* Entry: 005a2058; end: 005a20d7; -[SCAChatExtensionStickerSearch setExtensionType:] */

void FUN_005a2058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_005983c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f200,2,puVar1,3,param_3
                 );
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a20d8; end: 005a20ef; -[SCAChatExtensionStickerSearch setKeyboardSessionId:] */

void FUN_005a20d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f220,3,param_3,0);
  return;
}



/* Entry: 005a20f0; end: 005a2107; -[SCAChatExtensionStickerSearch setPillName:] */

void FUN_005a20f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f280,4,param_3,0);
  return;
}



/* Entry: 005a2108; end: 005a2187; -[SCAChatExtensionStickerSearch setStickerSearchCategory:] */

void FUN_005a2108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_005995e8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f360,5,puVar1,3,param_3
                 );
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a2188; end: 005a21db; -[SCAChatExtensionStickerSearch setStickerSearchResultCount:] */

void FUN_005a2188(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f380,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a21dc; end: 005a21df; -[SCAChatExtensionStickerSearch getFieldNumberToFieldDict] */

void FUN_005a21dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_constructFieldNumberToFieldDict_00abafc8);
  return;
}



/* Entry: 005a21e0; end: 005a21eb; -[SCAChatExtensionStickerSearch toProtoWithAllowedFields:] */

void FUN_005a21e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00792ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_00abf7c0,1,param_3);
  return;
}



/* Entry: 005a21ec; end: 005a21f3; -[SCAChatExtensionStickerSearch getPayloadIdentifier] */

undefined8 FUN_005a21ec(void)

{
  return 0x16a5;
}



/* Entry: 005a21f4; end: 005a25ef; -[SCAChatExtensionTabSession fromDictionary:] */

void FUN_005a21f4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac3fc8;
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
    FUN_005983e4();
    func_0x0078de80(param_1);
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
    func_0x0078ea60(param_1);
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
    func_0x007906a0(param_1);
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
    func_0x007906c0(param_1);
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
    func_0x007906e0(param_1);
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
    func_0x00790760(param_1);
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
    FUN_005998f8();
    func_0x007907a0(param_1);
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
    FUN_005998f8();
    func_0x007907c0(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 005a25f0; end: 005a25fb; -[SCAChatExtensionTabSession getEventName] */

undefined ** FUN_005a25f0(void)

{
  return &PTR____CFConstantStringClassReference_00a312a0;
}



/* Entry: 005a25fc; end: 005a2603; -[SCAChatExtensionTabSession getEventQoS] */

undefined8 FUN_005a25fc(void)

{
  return 1;
}



/* Entry: 005a2604; end: 005a2683; -[SCAChatExtensionTabSession setExtensionType:] */

void FUN_005a2604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_005983c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f200,2,puVar1,3,param_3
                 );
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a2684; end: 005a269b; -[SCAChatExtensionTabSession setKeyboardSessionId:] */

void FUN_005a2684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f220,3,param_3,0);
  return;
}



/* Entry: 005a269c; end: 005a26b3; -[SCAChatExtensionTabSession setStickerLoadLatency:] */

void FUN_005a269c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f3a0,4,param_3,0);
  return;
}



/* Entry: 005a26b4; end: 005a26cb; -[SCAChatExtensionTabSession setStickerLoadedList:] */

void FUN_005a26b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f3c0,5,param_3,0);
  return;
}



/* Entry: 005a26cc; end: 005a26e3; -[SCAChatExtensionTabSession setStickerNotLoadedList:] */

void FUN_005a26cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f3e0,6,param_3,0);
  return;
}



/* Entry: 005a26e4; end: 005a26fb; -[SCAChatExtensionTabSession setStickerSendList:] */

void FUN_005a26e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f400,7,param_3,0);
  return;
}



/* Entry: 005a26fc; end: 005a277b; -[SCAChatExtensionTabSession setStickerTabSessionNextAction:] */

void FUN_005a26fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_005998d8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f420,8,puVar1,3,param_3
                 );
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a277c; end: 005a27fb; -[SCAChatExtensionTabSession setStickerTabSessionTabName:] */

void FUN_005a277c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_005998d8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f440,9,puVar1,3,param_3
                 );
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a27fc; end: 005a27ff; -[SCAChatExtensionTabSession getFieldNumberToFieldDict] */

void FUN_005a27fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_constructFieldNumberToFieldDict_00abafc8);
  return;
}



/* Entry: 005a2800; end: 005a280b; -[SCAChatExtensionTabSession toProtoWithAllowedFields:] */

void FUN_005a2800(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00792ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_00abf7c0,1,param_3);
  return;
}



/* Entry: 005a280c; end: 005a2813; -[SCAChatExtensionTabSession getPayloadIdentifier] */

undefined8 FUN_005a280c(void)

{
  return 0x16a6;
}



/* Entry: 005a2814; end: 005a2957; -[SCACustomKeyboardExtensionPageAction fromDictionary:] */

void FUN_005a2814(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac3fd0;
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
    FUN_005983e4();
    func_0x0078de80(param_1);
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
    func_0x0078ea60(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 005a2958; end: 005a2963; -[SCACustomKeyboardExtensionPageAction getEventName] */

undefined ** FUN_005a2958(void)

{
  return &PTR____CFConstantStringClassReference_00a312c0;
}



/* Entry: 005a2964; end: 005a296b; -[SCACustomKeyboardExtensionPageAction getEventQoS] */

undefined8 FUN_005a2964(void)

{
  return 1;
}



/* Entry: 005a296c; end: 005a29eb; -[SCACustomKeyboardExtensionPageAction setExtensionType:] */

void FUN_005a296c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_005983c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f200,2,puVar1,3,param_3
                 );
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a29ec; end: 005a2a03; -[SCACustomKeyboardExtensionPageAction setKeyboardSessionId:] */

void FUN_005a29ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f220,3,param_3,0);
  return;
}



/* Entry: 005a2a04; end: 005a2a07; -[SCACustomKeyboardExtensionPageAction getFieldNumberToFieldDict] */

void FUN_005a2a04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_constructFieldNumberToFieldDict_00abafc8);
  return;
}



/* Entry: 005a2a08; end: 005a2a13; -[SCACustomKeyboardExtensionPageAction toProtoWithAllowedFields:] */

void FUN_005a2a08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00792ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_00abf7c0,1,param_3);
  return;
}



/* Entry: 005a2a14; end: 005a2a1b; -[SCACustomKeyboardExtensionPageAction getPayloadIdentifier] */

undefined8 FUN_005a2a14(void)

{
  return 0x16a7;
}



/* Entry: 005a2a1c; end: 005a2b5f; -[SCACustomKeyboardExtensionPageView fromDictionary:] */

void FUN_005a2a1c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac3fd8;
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
    FUN_005983e4();
    func_0x0078de80(param_1);
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
    func_0x0078ea60(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 005a2b60; end: 005a2b6b; -[SCACustomKeyboardExtensionPageView getEventName] */

undefined ** FUN_005a2b60(void)

{
  return &PTR____CFConstantStringClassReference_00a312e0;
}



/* Entry: 005a2b6c; end: 005a2b73; -[SCACustomKeyboardExtensionPageView getEventQoS] */

undefined8 FUN_005a2b6c(void)

{
  return 1;
}



/* Entry: 005a2b74; end: 005a2bf3; -[SCACustomKeyboardExtensionPageView setExtensionType:] */

void FUN_005a2b74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_005983c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f200,2,puVar1,3,param_3
                 );
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a2bf4; end: 005a2c0b; -[SCACustomKeyboardExtensionPageView setKeyboardSessionId:] */

void FUN_005a2bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f220,3,param_3,0);
  return;
}



/* Entry: 005a2c0c; end: 005a2c0f; -[SCACustomKeyboardExtensionPageView getFieldNumberToFieldDict] */

void FUN_005a2c0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_constructFieldNumberToFieldDict_00abafc8);
  return;
}



/* Entry: 005a2c10; end: 005a2c1b; -[SCACustomKeyboardExtensionPageView toProtoWithAllowedFields:] */

void FUN_005a2c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00792ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_00abf7c0,1,param_3);
  return;
}



/* Entry: 005a2c1c; end: 005a2c23; -[SCACustomKeyboardExtensionPageView getPayloadIdentifier] */

undefined8 FUN_005a2c1c(void)

{
  return 0x16a8;
}



/* Entry: 005a2c24; end: 005a2c3b; -[SCAInstallSessionMetadata setAdvertisingId:] */

void FUN_005a2c24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f480,2,param_3,0);
  return;
}



/* Entry: 005a2c3c; end: 005a2c53; -[SCAInstallSessionMetadata setAppleSearchDictionary:] */

void FUN_005a2c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f4c0,3,param_3,0);
  return;
}



/* Entry: 005a2c54; end: 005a2c6b; -[SCAInstallSessionMetadata setAppsScopeId:] */

void FUN_005a2c54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f4e0,4,param_3,0);
  return;
}



/* Entry: 005a2c6c; end: 005a2c83; -[SCAInstallSessionMetadata setDeepLinkUrl:] */

void FUN_005a2c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f520,5,param_3,0);
  return;
}



/* Entry: 005a2c84; end: 005a2cd7; -[SCAInstallSessionMetadata setEnableAdTracking:] */

void FUN_005a2c84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f540,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a2cd8; end: 005a2cef; -[SCAInstallSessionMetadata setEncryptedIpAddress:] */

void FUN_005a2cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f560,7,param_3,0);
  return;
}



/* Entry: 005a2cf0; end: 005a2d07; -[SCAInstallSessionMetadata setGoogleReferralUrl:] */

void FUN_005a2cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f5a0,8,param_3,0);
  return;
}



/* Entry: 005a2d08; end: 005a2d1f; -[SCAInstallSessionMetadata setHttpUserAgent:] */

void FUN_005a2d08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f5c0,9,param_3,0);
  return;
}



/* Entry: 005a2d20; end: 005a2d37; -[SCAInstallSessionMetadata setShortLinkUrl:] */

void FUN_005a2d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f600,10,param_3,0);
  return;
}



/* Entry: 005a2d38; end: 005a2db7; -[SCAInstallSessionMetadata setAttStatus:] */

void FUN_005a2d38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_0059800c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f500,0xb,puVar1,3,
                  param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a2db8; end: 005a2dcf; -[SCAInstallSessionMetadata setAdServicesToken:] */

void FUN_005a2db8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f460,0xc,param_3,0);
  return;
}



/* Entry: 005a2dd0; end: 005a2de7; -[SCAInstallSessionMetadata setFirebaseAnalyticsAppInstanceId:] */

void FUN_005a2dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f580,0xd,param_3,0);
  return;
}



/* Entry: 005a2de8; end: 005a2e2f; -[SCAInstallSessionMetadata setPlayInstallReferrerMetadata:] */

void FUN_005a2de8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00780e20(param_3);
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f5e0,0xe,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 005a2e30; end: 005a2e83; -[SCAInstallSessionMetadata setAppInstalledTimeMs:] */

void FUN_005a2e30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f4a0,0xf,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a2e84; end: 005a2f43; -[SCAInstallSessionMetadata prepareDictionary:] */

void FUN_005a2e84(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x0078b4a0(param_3);
    lVar2 = lVar1;
    func_0x0077f240(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e4e0(param_3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_00ac3fe0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__00abd738,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 005a2f44; end: 005a2f47; -[SCAInstallSessionMetadata getFieldNumberToFieldDict] */

void FUN_005a2f44(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_constructFieldNumberToFieldDict_00abafc8);
  return;
}



/* Entry: 005a2f48; end: 005a2f53; -[SCAInstallSessionMetadata toProtoWithAllowedFields:] */

void FUN_005a2f48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00792ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_toProtoWithBitmapLength_allowedF_00abf7c0,2,0)
  ;
  return;
}



/* Entry: 005a2f54; end: 005a2f5b; -[SCAInstallSessionMetadata getPayloadIdentifier] */

undefined8 FUN_005a2f54(void)

{
  return 0x4a0;
}



/* Entry: 005a2f5c; end: 005a327f; -[SCALatencyEstimation initWithDictionary:] */

undefined1 * FUN_005a2f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  puStack_38 = PTR_PTR_00ac3fe8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x0077d0c0();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00789f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00788b40();
      func_0x0078e200(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x0077d0c0();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00789f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00788b40();
      func_0x0078eb60(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x0077d0c0();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00789f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00788b40();
      func_0x00790080(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x0077d0c0();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00789f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00788b40();
      func_0x007909c0(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x0077d0c0();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00789f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00788b40();
      func_0x0078dd20(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00789f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x0077d0c0();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00789f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00782440();
      func_0x007909e0(puVar1);
      _objc_release(uVar2);
    }
  }
  puVar4 = (undefined1 *)puVar1;
  func_0x0078ab60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00780e80();
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



/* Entry: 005a3280; end: 005a32d3; -[SCALatencyEstimation setFormulaVersion:] */

void FUN_005a3280(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f640,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a32d4; end: 005a3327; -[SCALatencyEstimation setLatencyPrediction:] */

void FUN_005a32d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f660,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a3328; end: 005a337b; -[SCALatencyEstimation setRtt:] */

void FUN_005a3328(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f680,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a337c; end: 005a33cf; -[SCALatencyEstimation setThroughput:] */

void FUN_005a337c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f6a0,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a33d0; end: 005a3423; -[SCALatencyEstimation setEstimatedContentLength:] */

void FUN_005a33d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f620,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a3424; end: 005a3477; -[SCALatencyEstimation setThroughputConfidence:] */

void FUN_005a3424(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f6c0,7,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a3478; end: 005a347b; -[SCALatencyEstimation getFieldNumberToFieldDict] */

void FUN_005a3478(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_constructFieldNumberToFieldDict_00abafc8);
  return;
}



/* Entry: 005a347c; end: 005a3487; -[SCALatencyEstimation toProtoWithAllowedFields:] */

void FUN_005a347c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00792ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_toProtoWithBitmapLength_allowedF_00abf7c0,1,0)
  ;
  return;
}



/* Entry: 005a3488; end: 005a348f; -[SCALatencyEstimation getPayloadIdentifier] */

undefined8 FUN_005a3488(void)

{
  return 0x175c;
}



/* Entry: 005a3490; end: 005a385b; -[SCALiveLocationPushNotificationAck fromDictionary:] */

void FUN_005a3490(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac3ff0;
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
    func_0x0078cf80(param_1);
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
    FUN_00598cd0();
    func_0x0078f2a0(param_1);
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
    func_0x0078f9a0(param_1);
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
    func_0x0078f9c0(param_1);
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
    FUN_00598280();
    func_0x0078da60(param_1);
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
    func_0x0078ed80(param_1);
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
    FUN_00598794();
    func_0x0078f9e0(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 005a385c; end: 005a3867; -[SCALiveLocationPushNotificationAck getEventName] */

undefined ** FUN_005a385c(void)

{
  return &PTR____CFConstantStringClassReference_00a31300;
}



/* Entry: 005a3868; end: 005a386f; -[SCALiveLocationPushNotificationAck getEventQoS] */

undefined8 FUN_005a3868(void)

{
  return 1;
}



/* Entry: 005a3870; end: 005a38c3; -[SCALiveLocationPushNotificationAck setBatteryPercentage:] */

void FUN_005a3870(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f6e0,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a38c4; end: 005a3943; -[SCALiveLocationPushNotificationAck setNetworkReachability:] */

void FUN_005a38c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_00598cb0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f740,3,puVar1,3,param_3
                 );
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a3944; end: 005a395b; -[SCALiveLocationPushNotificationAck setNotificationId:] */

void FUN_005a3944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f760,4,param_3,0);
  return;
}



/* Entry: 005a395c; end: 005a39af; -[SCALiveLocationPushNotificationAck setPushReceivedTimestamp:] */

void FUN_005a395c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f780,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a39b0; end: 005a3a03; -[SCALiveLocationPushNotificationAck setPushSentTimestamp:] */

void FUN_005a39b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f7a0,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a3a04; end: 005a3a83; -[SCALiveLocationPushNotificationAck setDeviceChargingState:] */

void FUN_005a3a04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_00598260(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f700,7,puVar1,3,param_3
                 );
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a3a84; end: 005a3ad7; -[SCALiveLocationPushNotificationAck setLowPowerModeEnabled:] */

void FUN_005a3a84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f720,8,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a3ad8; end: 005a3b57; -[SCALiveLocationPushNotificationAck setPushType:] */

void FUN_005a3ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_00598774(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f7c0,9,puVar1,3,param_3
                 );
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a3b58; end: 005a3b5b; -[SCALiveLocationPushNotificationAck getFieldNumberToFieldDict] */

void FUN_005a3b58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_constructFieldNumberToFieldDict_00abafc8);
  return;
}



/* Entry: 005a3b5c; end: 005a3b67; -[SCALiveLocationPushNotificationAck toProtoWithAllowedFields:] */

void FUN_005a3b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00792ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_00abf7c0,1,param_3);
  return;
}



/* Entry: 005a3b68; end: 005a3b6f; -[SCALiveLocationPushNotificationAck getPayloadIdentifier] */

undefined8 FUN_005a3b68(void)

{
  return 0xf77;
}



/* Entry: 005a3b70; end: 005a4163; -[SCALiveLocationPushNotificationResult fromDictionary:] */

void FUN_005a3b70(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac3ff8;
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
    func_0x0078cf80(param_1);
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
    func_0x0078dd00(param_1);
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
    func_0x0078e260(param_1);
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
    func_0x0078eca0(param_1);
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
    FUN_00598cd0();
    func_0x0078f2a0(param_1);
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
    FUN_00598590();
    func_0x0078f5e0(param_1);
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
    func_0x0078f9a0(param_1);
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
    func_0x0078f9c0(param_1);
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
    func_0x00790fa0(param_1);
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
    func_0x007912c0(param_1);
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
    FUN_0059850c();
    func_0x0078de80(param_1);
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
    func_0x00790b80(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 005a4164; end: 005a416f; -[SCALiveLocationPushNotificationResult getEventName] */

undefined ** FUN_005a4164(void)

{
  return &PTR____CFConstantStringClassReference_00a31320;
}



/* Entry: 005a4170; end: 005a4177; -[SCALiveLocationPushNotificationResult getEventQoS] */

undefined8 FUN_005a4170(void)

{
  return 1;
}



/* Entry: 005a4178; end: 005a41cb; -[SCALiveLocationPushNotificationResult setBatteryPercentage:] */

void FUN_005a4178(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f6e0,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a41cc; end: 005a41e3; -[SCALiveLocationPushNotificationResult setErrorMessage:] */

void FUN_005a41cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f7e0,3,param_3,0);
  return;
}



/* Entry: 005a41e4; end: 005a4237; -[SCALiveLocationPushNotificationResult setFromAckToQueryDurationMs:] */

void FUN_005a41e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f800,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a4238; end: 005a428b; -[SCALiveLocationPushNotificationResult setLocationAge:] */

void FUN_005a4238(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f820,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a428c; end: 005a430b; -[SCALiveLocationPushNotificationResult setNetworkReachability:] */

void FUN_005a428c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_00598cb0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f740,6,puVar1,3,param_3
                 );
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a430c; end: 005a4323; -[SCALiveLocationPushNotificationResult setNotificationId:] */

void FUN_005a430c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setField_fieldNumber_value_type__00abe508,
             &PTR____CFConstantStringClassReference_00a2f760,7,param_3,0);
  return;
}



/* Entry: 005a4324; end: 005a43a3; -[SCALiveLocationPushNotificationResult setOutcome:] */

void FUN_005a4324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_00598570(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfc0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f840,8,puVar1,3,param_3
                 );
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a43a4; end: 005a43f7; -[SCALiveLocationPushNotificationResult setPushReceivedTimestamp:] */

void FUN_005a43a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f780,9,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 005a43f8; end: 005a444b; -[SCALiveLocationPushNotificationResult setPushSentTimestamp:] */

void FUN_005a43f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078dfe0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2f7a0,10,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}


