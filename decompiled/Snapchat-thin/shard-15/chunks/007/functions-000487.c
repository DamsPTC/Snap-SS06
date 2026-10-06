/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bbed830; end: 10bbed83b; -[SCAMapModalAction getEventName] */

undefined ** FUN_10bbed830(void)

{
  return &PTR____CFConstantStringClassReference_110fc7378;
}



/* Entry: 10bbed83c; end: 10bbed843; -[SCAMapModalAction getEventQoS] */

undefined8 FUN_10bbed83c(void)

{
  return 1;
}



/* Entry: 10bbed844; end: 10bbed85b; -[SCAMapModalAction setActionType:] */

void FUN_10bbed844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa2618,2,param_3,0);
  return;
}



/* Entry: 10bbed85c; end: 10bbed8af; -[SCAMapModalAction setMapSessionId:] */

void FUN_10bbed85c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110eb59b8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbed8b0; end: 10bbed903; -[SCAMapModalAction setModalSessionId:] */

void FUN_10bbed8b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101ddd8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbed904; end: 10bbed907; -[SCAMapModalAction getFieldNumberToFieldDict] */

void FUN_10bbed904(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbed908; end: 10bbed913; -[SCAMapModalAction toProtoWithAllowedFields:] */

void FUN_10bbed908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bbed914; end: 10bbed91b; -[SCAMapModalAction getPayloadIdentifier] */

undefined8 FUN_10bbed914(void)

{
  return 0x12a0;
}



/* Entry: 10bbed91c; end: 10bbedb43; -[SCAMapModalDisplay fromDictionary:] */

void FUN_10bbed91c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d710;
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
    func_0x00010c1c25a0(param_1);
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
    func_0x00010c1c8bc0(param_1);
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
    func_0x00010c1c8c20(param_1);
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
    func_0x00010c206c40(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbedb44; end: 10bbedb4f; -[SCAMapModalDisplay getEventName] */

undefined ** FUN_10bbedb44(void)

{
  return &PTR____CFConstantStringClassReference_110fc7398;
}



/* Entry: 10bbedb50; end: 10bbedb57; -[SCAMapModalDisplay getEventQoS] */

undefined8 FUN_10bbedb50(void)

{
  return 1;
}



/* Entry: 10bbedb58; end: 10bbedbab; -[SCAMapModalDisplay setMapSessionId:] */

void FUN_10bbedb58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110eb59b8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbedbac; end: 10bbedbff; -[SCAMapModalDisplay setModalSessionId:] */

void FUN_10bbedbac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101ddd8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbedc00; end: 10bbedc17; -[SCAMapModalDisplay setModalType:] */

void FUN_10bbedc00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fca918,4,param_3,0);
  return;
}



/* Entry: 10bbedc18; end: 10bbedc2f; -[SCAMapModalDisplay setSource:] */

void FUN_10bbedc18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dae8d8,5,param_3,0);
  return;
}



/* Entry: 10bbedc30; end: 10bbedc33; -[SCAMapModalDisplay getFieldNumberToFieldDict] */

void FUN_10bbedc30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbedc34; end: 10bbedc3f; -[SCAMapModalDisplay toProtoWithAllowedFields:] */

void FUN_10bbedc34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bbedc40; end: 10bbedc47; -[SCAMapModalDisplay getPayloadIdentifier] */

undefined8 FUN_10bbedc40(void)

{
  return 0x12a1;
}



/* Entry: 10bbedc48; end: 10bbedee3; -[SCAMapPinCardImpressions fromDictionary:] */

undefined ** FUN_10bbedc48(ulong param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uStack_f8;
  undefined *puStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_f0 = PTR_PTR_11270d718;
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
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1c23e0(param_1);
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
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    ppuVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppuVar2 != (undefined **)0x0) {
      ppuVar6 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar4);
        }
        uVar3 = param_1;
        func_0x00010be45600();
        if ((uVar3 & 1) == 0) {
          func_0x00010befa120(puVar5);
        }
        ppuVar6 = (undefined **)((long)ppuVar6 + 1);
      } while (ppuVar2 != ppuVar6);
      ppuVar2 = ppuVar4;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar4);
    func_0x00010c1cbb60(param_1);
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
    FUN_10bb0673c();
    func_0x00010c1f9160(param_1);
    _objc_release(ppuVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110fc73b8;
}



/* Entry: 10bbedee4; end: 10bbedeef; -[SCAMapPinCardImpressions getEventName] */

undefined ** FUN_10bbedee4(void)

{
  return &PTR____CFConstantStringClassReference_110fc73b8;
}



/* Entry: 10bbedef0; end: 10bbedef7; -[SCAMapPinCardImpressions getEventQoS] */

undefined8 FUN_10bbedef0(void)

{
  return 1;
}



/* Entry: 10bbedef8; end: 10bbedf03; -[SCAMapPinCardImpressions getPerUserSamplingRateV2] */

undefined8 FUN_10bbedef8(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bbedf04; end: 10bbedf1b; -[SCAMapPinCardImpressions setMapPinId:] */

void FUN_10bbedf04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fca038,2,param_3,0);
  return;
}



/* Entry: 10bbedf1c; end: 10bbedf63; -[SCAMapPinCardImpressions setNearbyPlaceIdsShown:] */

void FUN_10bbedf1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101ddf8,3,param_3,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbedf64; end: 10bbedfe3; -[SCAMapPinCardImpressions setSection:] */

void FUN_10bbedf64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb0671c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e4c458,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbedfe4; end: 10bbedfe7; -[SCAMapPinCardImpressions getFieldNumberToFieldDict] */

void FUN_10bbedfe4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbedfe8; end: 10bbedff3; -[SCAMapPinCardImpressions toProtoWithAllowedFields:] */

void FUN_10bbedfe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bbedff4; end: 10bbedffb; -[SCAMapPinCardImpressions getPayloadIdentifier] */

undefined8 FUN_10bbedff4(void)

{
  return 0xf44;
}



/* Entry: 10bbedffc; end: 10bbee007; -[SCAMapStatusAction getEventName] */

undefined ** FUN_10bbedffc(void)

{
  return &PTR____CFConstantStringClassReference_11101de18;
}



/* Entry: 10bbee008; end: 10bbee00f; -[SCAMapStatusAction getEventQoS] */

undefined8 FUN_10bbee008(void)

{
  return 1;
}



/* Entry: 10bbee010; end: 10bbee08f; -[SCAMapStatusAction setAction:] */

void FUN_10bbee010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb01e70(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbee090; end: 10bbee0a7; -[SCAMapStatusAction setActionStatus:] */

void FUN_10bbee090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101de38,3,param_3,0);
  return;
}



/* Entry: 10bbee0a8; end: 10bbee0fb; -[SCAMapStatusAction setMapSessionId:] */

void FUN_10bbee0a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110eb59b8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbee0fc; end: 10bbee14f; -[SCAMapStatusAction setStatusSessionId:] */

void FUN_10bbee0fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe0ab8,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbee150; end: 10bbee167; -[SCAMapStatusAction setItemId:] */

void FUN_10bbee150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e02998,7,param_3,0);
  return;
}



/* Entry: 10bbee168; end: 10bbee17f; -[SCAMapStatusAction setItemType:] */

void FUN_10bbee168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea1ad8,8,param_3,0);
  return;
}



/* Entry: 10bbee180; end: 10bbee1c7; -[SCAMapStatusAction setItemGridIndex:] */

void FUN_10bbee180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101dd78,9,param_3,0xb
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbee1c8; end: 10bbee1cb; -[SCAMapStatusAction getFieldNumberToFieldDict] */

void FUN_10bbee1c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbee1cc; end: 10bbee1d7; -[SCAMapStatusAction toProtoWithAllowedFields:] */

void FUN_10bbee1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bbee1d8; end: 10bbee1df; -[SCAMapStatusAction getPayloadIdentifier] */

undefined8 FUN_10bbee1d8(void)

{
  return 0xfa7;
}



/* Entry: 10bbee1e0; end: 10bbee4d7; -[SCAMapsViewportPlacesAdsImpression fromDictionary:] */

void FUN_10bbee1e0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d720;
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
    func_0x00010c1c25a0(param_1);
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
    func_0x00010c1c2900(param_1);
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
    func_0x00010c1dc3a0(param_1);
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
    func_0x00010bf885a0();
    func_0x00010c222d20(param_1);
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
    func_0x00010bf885a0();
    func_0x00010c227aa0(param_1);
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
    func_0x00010c168480(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbee4d8; end: 10bbee4e3; -[SCAMapsViewportPlacesAdsImpression getEventName] */

undefined ** FUN_10bbee4d8(void)

{
  return &PTR____CFConstantStringClassReference_110fc7558;
}



/* Entry: 10bbee4e4; end: 10bbee4eb; -[SCAMapsViewportPlacesAdsImpression getEventQoS] */

undefined8 FUN_10bbee4e4(void)

{
  return 1;
}



/* Entry: 10bbee4ec; end: 10bbee53f; -[SCAMapsViewportPlacesAdsImpression setMapSessionId:] */

void FUN_10bbee4ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110eb59b8,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbee540; end: 10bbee593; -[SCAMapsViewportPlacesAdsImpression setMapViewportSessionId:] */

void FUN_10bbee540(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110eb59d8,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbee594; end: 10bbee5ab; -[SCAMapsViewportPlacesAdsImpression setPlaceId:] */

void FUN_10bbee594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e32618,8,param_3,0);
  return;
}



/* Entry: 10bbee5ac; end: 10bbee5ff; -[SCAMapsViewportPlacesAdsImpression setViewTimeSec:] */

void FUN_10bbee5ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fadb38,9,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbee600; end: 10bbee653; -[SCAMapsViewportPlacesAdsImpression setZoom:] */

void FUN_10bbee600(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e31858,10,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbee654; end: 10bbee66b; -[SCAMapsViewportPlacesAdsImpression setAnnotations:] */

void FUN_10bbee654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e30138,0xb,param_3,0);
  return;
}



/* Entry: 10bbee66c; end: 10bbee66f; -[SCAMapsViewportPlacesAdsImpression getFieldNumberToFieldDict] */

void FUN_10bbee66c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbee670; end: 10bbee67b; -[SCAMapsViewportPlacesAdsImpression toProtoWithAllowedFields:] */

void FUN_10bbee670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10bbee67c; end: 10bbee683; -[SCAMapsViewportPlacesAdsImpression getPayloadIdentifier] */

undefined8 FUN_10bbee67c(void)

{
  return 0xe7b;
}



/* Entry: 10bbee684; end: 10bbeebb3; -[SCAMediaLinkSlice initWithDictionary:] */

undefined1 * FUN_10bbee684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d728;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126e2c70;
    _objc_alloc(PTR_PTR_1126e2c70);
    func_0x00010c00c560();
    func_0x00010c191160(puVar1);
    _objc_release(puVar2);
    uVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar3);
    if (((ulong)puVar4 & 1) == 0) {
      uVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c192e60(puVar1);
      _objc_release(uVar3);
    }
    uVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar3);
    if (((ulong)puVar4 & 1) == 0) {
      uVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      FUN_10baf2960();
      func_0x00010c1b7a80(puVar1);
      _objc_release(uVar3);
    }
    uVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar3);
    if (((ulong)puVar4 & 1) == 0) {
      uVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1cf2c0(puVar1);
      _objc_release(uVar3);
    }
    uVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar3);
    if (((ulong)puVar4 & 1) == 0) {
      uVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c202960(puVar1);
      _objc_release(uVar3);
    }
    uVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar3);
    if (((ulong)puVar4 & 1) == 0) {
      uVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c202980(puVar1);
      _objc_release(uVar3);
    }
    uVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar3);
    if (((ulong)puVar4 & 1) == 0) {
      uVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c205ca0(puVar1);
      _objc_release(uVar3);
    }
    uVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar3);
    if (((ulong)puVar4 & 1) == 0) {
      uVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c205cc0(puVar1);
      _objc_release(uVar3);
    }
    uVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar3);
    if (((ulong)puVar4 & 1) == 0) {
      uVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c209a40(puVar1);
      _objc_release(uVar3);
    }
    uVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar3);
    if (((ulong)puVar4 & 1) == 0) {
      uVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c214c00(puVar1);
      _objc_release(uVar3);
    }
    uVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar3);
    if (((ulong)puVar4 & 1) == 0) {
      uVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      FUN_10bb16aac();
      func_0x00010c219c60(puVar1);
      _objc_release(uVar3);
    }
    puVar2 = PTR_PTR_1126e2c78;
    _objc_alloc(PTR_PTR_1126e2c78);
    func_0x00010c00c560();
    func_0x00010c21cb20(puVar1);
    _objc_release(puVar2);
  }
  puVar5 = (undefined1 *)puVar1;
  func_0x00010c119100();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf529e0();
  puVar4 = (undefined1 *)0x0;
  if (puVar6 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)puVar1;
  }
  _objc_retain(puVar4);
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 10bbeebb4; end: 10bbeebfb; -[SCAMediaLinkSlice setDownlink:] */

void FUN_10bbeebb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101df18,2,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbeebfc; end: 10bbeec4f; -[SCAMediaLinkSlice setDurationMs:] */

void FUN_10bbeebfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dcffb8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbeec50; end: 10bbeeccf; -[SCAMediaLinkSlice setLastConnectivityType:] */

void FUN_10bbeec50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf2940(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_111019618,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbeecd0; end: 10bbeed23; -[SCAMediaLinkSlice setNumReachabilityChanges:] */

void FUN_10bbeecd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111019638,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbeed24; end: 10bbeed77; -[SCAMediaLinkSlice setSignalingBytesReceived:] */

void FUN_10bbeed24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101de58,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbeed78; end: 10bbeedcb; -[SCAMediaLinkSlice setSignalingBytesSent:] */

void FUN_10bbeed78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101de78,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbeedcc; end: 10bbeee1f; -[SCAMediaLinkSlice setSnapchatBytesReceived:] */

void FUN_10bbeedcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101de98,8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbeee20; end: 10bbeee73; -[SCAMediaLinkSlice setSnapchatBytesSent:] */

void FUN_10bbeee20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101deb8,9,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbeee74; end: 10bbeeec7; -[SCAMediaLinkSlice setStartTimeMs:] */

void FUN_10bbeee74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110feb278,10,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbeeec8; end: 10bbeef1b; -[SCAMediaLinkSlice setTimeBackgroundedMs:] */

void FUN_10bbeeec8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101ded8,0xb,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbeef1c; end: 10bbeef9b; -[SCAMediaLinkSlice setTransport:] */

void FUN_10bbeef1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb16a8c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_11101def8,0xc,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbeef9c; end: 10bbeefe3; -[SCAMediaLinkSlice setUplink:] */

void FUN_10bbeef9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101df38,0xd,param_3,6
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbeefe4; end: 10bbef103; -[SCAMediaLinkSlice prepareDictionary:] */

void FUN_10bbeefe4(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_38 = PTR_PTR_11270d728;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10bbef104; end: 10bbef107; -[SCAMediaLinkSlice getFieldNumberToFieldDict] */

void FUN_10bbef104(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbef108; end: 10bbef113; -[SCAMediaLinkSlice toProtoWithAllowedFields:] */

void FUN_10bbef108(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,0);
  return;
}



/* Entry: 10bbef114; end: 10bbef11b; -[SCAMediaLinkSlice getPayloadIdentifier] */

undefined8 FUN_10bbef114(void)

{
  return 0xad1;
}



/* Entry: 10bbef11c; end: 10bbef5bb; -[SCAMediaMetaData initWithDictionary:] */

undefined1 * FUN_10bbef11c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d730;
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
      func_0x00010c16ba20(puVar1);
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
      FUN_10bb0239c();
      func_0x00010c1895a0(puVar1);
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
      func_0x00010c0b4ca0();
      func_0x00010c19bb40(puVar1);
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
      func_0x00010c0b4ca0();
      func_0x00010c1a3ec0(puVar1);
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
      uVar4 = uVar2;
      func_0x00010bf51e00();
      func_0x00010c1c4760(puVar1);
      _objc_release(uVar4);
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
      FUN_10bb05728();
      func_0x00010c1d6440(puVar1);
      _objc_release(uVar2);
    }
    puVar5 = PTR_PTR_1126c7760;
    _objc_alloc(PTR_PTR_1126c7760);
    func_0x00010c00c560();
    func_0x00010c1ec9a0(puVar1);
    _objc_release(puVar5);
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
      func_0x00010c2211a0(puVar1);
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
      func_0x00010c0b4ca0();
      func_0x00010c2215c0(puVar1);
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
      func_0x00010bf885a0();
      func_0x00010c221780(puVar1);
      _objc_release(uVar2);
    }
  }
  puVar6 = (undefined1 *)puVar1;
  func_0x00010c119100();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf529e0();
  puVar3 = (undefined1 *)0x0;
  if (puVar7 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)puVar1;
  }
  _objc_retain(puVar3);
  _objc_release(puVar6);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 10bbef5bc; end: 10bbef60f; -[SCAMediaMetaData setAudioBitrate:] */

void FUN_10bbef5bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ee3cf8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbef610; end: 10bbef68f; -[SCAMediaMetaData setDataFormat:] */

void FUN_10bbef610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb0237c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_11101df58,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbef690; end: 10bbef6e3; -[SCAMediaMetaData setFileSize:] */

void FUN_10bbef690(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ee3058,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbef6e4; end: 10bbef737; -[SCAMediaMetaData setGopSize:] */

void FUN_10bbef6e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101df78,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbef738; end: 10bbef74f; -[SCAMediaMetaData setMediaFormat:] */

void FUN_10bbef738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ee3018,6,param_3,0);
  return;
}



/* Entry: 10bbef750; end: 10bbef7cf; -[SCAMediaMetaData setOrientation:] */

void FUN_10bbef750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb05708(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e29738,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbef7d0; end: 10bbef817; -[SCAMediaMetaData setResolution:] */

void FUN_10bbef7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e45378,8,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbef818; end: 10bbef86b; -[SCAMediaMetaData setVideoBitrate:] */

void FUN_10bbef818(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ee3078,9,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbef86c; end: 10bbef8bf; -[SCAMediaMetaData setVideoDurationMs:] */

void FUN_10bbef86c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ee2ff8,10,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbef8c0; end: 10bbef913; -[SCAMediaMetaData setVideoFrameRate:] */

void FUN_10bbef8c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101df98,0xb,puVar1,2)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbef914; end: 10bbef9d3; -[SCAMediaMetaData prepareDictionary:] */

void FUN_10bbef914(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_38 = PTR_PTR_11270d730;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10bbef9d4; end: 10bbef9d7; -[SCAMediaMetaData getFieldNumberToFieldDict] */

void FUN_10bbef9d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbef9d8; end: 10bbef9e3; -[SCAMediaMetaData toProtoWithAllowedFields:] */

void FUN_10bbef9d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,0);
  return;
}



/* Entry: 10bbef9e4; end: 10bbef9eb; -[SCAMediaMetaData getPayloadIdentifier] */

undefined8 FUN_10bbef9e4(void)

{
  return 0x57c;
}



/* Entry: 10bbef9ec; end: 10bbefa03; -[SCAMediaRenderer setMediaDecoder:] */

void FUN_10bbef9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101dfb8,2,param_3,0);
  return;
}



/* Entry: 10bbefa04; end: 10bbefa1b; -[SCAMediaRenderer setName:] */

void FUN_10bbefa04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbf1b8,3,param_3,0);
  return;
}



/* Entry: 10bbefa1c; end: 10bbefa9b; -[SCAMediaRenderer setType:] */

void FUN_10bbefa1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc90ccc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dad058,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbefa9c; end: 10bbefa9f; -[SCAMediaRenderer getFieldNumberToFieldDict] */

void FUN_10bbefa9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbefaa0; end: 10bbefaab; -[SCAMediaRenderer toProtoWithAllowedFields:] */

void FUN_10bbefaa0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10bbefaac; end: 10bbefab3; -[SCAMediaRenderer getPayloadIdentifier] */

undefined8 FUN_10bbefaac(void)

{
  return 0xaff;
}



/* Entry: 10bbefab4; end: 10bbefb07; -[SCAMediaVariant setElapsedTimeMs:] */

void FUN_10bbefab4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcf4b8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbefb08; end: 10bbefb5b; -[SCAMediaVariant setMediaTimeMs:] */

void FUN_10bbefb08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101dfd8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbefb5c; end: 10bbefbdb; -[SCAMediaVariant setMediaType:] */

void FUN_10bbefb5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc90ccc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110db9478,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbefbdc; end: 10bbefbf3; -[SCAMediaVariant setVariantName:] */

void FUN_10bbefbdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe9db8,5,param_3,0);
  return;
}



/* Entry: 10bbefbf4; end: 10bbefc47; -[SCAMediaVariant setBitrateKbps:] */

void FUN_10bbefbf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101dff8,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbefc48; end: 10bbefcc7; -[SCAMediaVariant setCodec:] */

void FUN_10bbefc48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb1a4f0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110ee3b78,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbefcc8; end: 10bbefd1b; -[SCAMediaVariant setHeight:] */

void FUN_10bbefcc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110db1258,8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbefd1c; end: 10bbefd33; -[SCAMediaVariant setVariantConfigId:] */

void FUN_10bbefd1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101e018,9,param_3,0);
  return;
}



/* Entry: 10bbefd34; end: 10bbefd87; -[SCAMediaVariant setVqa:] */

void FUN_10bbefd34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101e038,10,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbefd88; end: 10bbefddb; -[SCAMediaVariant setWidth:] */

void FUN_10bbefd88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110db1238,0xc,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


