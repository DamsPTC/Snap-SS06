/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba39dd4; end: 10ba39ddb; -[SCASelfHarmResourcesActionTaken getEventQoS] */

undefined8 FUN_10ba39dd4(void)

{
  return 2;
}



/* Entry: 10ba39ddc; end: 10ba39df3; -[SCASelfHarmResourcesActionTaken setActionId:] */

void FUN_10ba39ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fca5b8,2,param_3,0);
  return;
}



/* Entry: 10ba39df4; end: 10ba39e73; -[SCASelfHarmResourcesActionTaken setActionKind:] */

void FUN_10ba39df4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10ba1cddc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fca5d8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba39e74; end: 10ba39ef3; -[SCASelfHarmResourcesActionTaken setActionType:] */

void FUN_10ba39e74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10ba1ce64(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2618,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba39ef4; end: 10ba39f17; -[SCASelfHarmResourcesActionTaken getFieldNumberToFieldDict] */

void FUN_10ba39ef4(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba39f18; end: 10ba39f4f; -[SCASelfHarmResourcesActionTaken addToProtoDictionary] */

void FUN_10ba39f18(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba39f50; end: 10ba39fa7; -[SCASelfHarmResourcesActionTaken toProtoWithAllowedFields:] */

void FUN_10ba39f50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba39fa8; end: 10ba39faf; -[SCASelfHarmResourcesActionTaken getPayloadIdentifier] */

undefined8 FUN_10ba39fa8(void)

{
  return 0x1678;
}



/* Entry: 10ba39fb0; end: 10ba3a0ff; -[SCASelfHarmResourcesBase fromDictionary:] */

void FUN_10ba39fb0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270c648;
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
    func_0x00010c184960(param_1);
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
    func_0x00010c1b74c0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10ba3a100; end: 10ba3a113; -[SCASelfHarmResourcesBase setCountryCode:] */

void FUN_10ba3a100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110de3598,param_3,0);
  return;
}



/* Entry: 10ba3a114; end: 10ba3a127; -[SCASelfHarmResourcesBase setLanguageCode:] */

void FUN_10ba3a114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110fca5f8,param_3,0);
  return;
}



/* Entry: 10ba3a128; end: 10ba3a3f3; -[SCASelfHarmResourcesViewed fromDictionary:] */

undefined ** FUN_10ba3a128(ulong param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ulong uStack_178;
  undefined *puStack_170;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_170 = PTR_PTR_11270c650;
  uStack_178 = param_1;
  _objc_msgSendSuper2(&uStack_178,PTR_s_fromDictionary__1125cc478,param_3);
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    ppuVar5 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppuVar2 != (undefined **)0x0) {
      ppuVar6 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar5);
        }
        uVar3 = param_1;
        func_0x00010be45600();
        if ((uVar3 & 1) == 0) {
          func_0x00010befa120(puVar4);
        }
        ppuVar6 = (undefined **)((long)ppuVar6 + 1);
      } while (ppuVar2 != ppuVar6);
      ppuVar2 = ppuVar5;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar5);
    func_0x00010c161a20(param_1);
    _objc_release(puVar4);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    ppuVar5 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppuVar2 != (undefined **)0x0) {
      ppuVar6 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar5);
        }
        uVar3 = param_1;
        func_0x00010be45600();
        if ((uVar3 & 1) == 0) {
          func_0x00010befa120(puVar4);
        }
        ppuVar6 = (undefined **)((long)ppuVar6 + 1);
      } while (ppuVar2 != ppuVar6);
      ppuVar2 = ppuVar5;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar5);
    func_0x00010c161ae0(param_1);
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110fc8778;
}



/* Entry: 10ba3a3f4; end: 10ba3a3ff; -[SCASelfHarmResourcesViewed getEventName] */

undefined ** FUN_10ba3a3f4(void)

{
  return &PTR____CFConstantStringClassReference_110fc8778;
}



/* Entry: 10ba3a400; end: 10ba3a407; -[SCASelfHarmResourcesViewed getEventQoS] */

undefined8 FUN_10ba3a400(void)

{
  return 2;
}



/* Entry: 10ba3a408; end: 10ba3a44f; -[SCASelfHarmResourcesViewed setActionIds:] */

void FUN_10ba3a408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca618,2,param_3,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba3a450; end: 10ba3a537; -[SCASelfHarmResourcesViewed setActionKinds:] */

void FUN_10ba3a450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10ba3a538;
  puStack_40 = &UNK_1108709c0;
  puStack_38 = puVar2;
  _objc_retain();
  func_0x00010bf97e80(param_3,param_2,&puStack_58);
  uVar1 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fca638,3,puVar2,10,
                      uVar1);
  _objc_release(uVar1);
  _objc_release(puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10ba3a538; end: 10ba3a58b;  */

void FUN_10ba3a538(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10ba1ce00(param_2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3a58c; end: 10ba3a5af; -[SCASelfHarmResourcesViewed getFieldNumberToFieldDict] */

void FUN_10ba3a58c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba3a5b0; end: 10ba3a5e7; -[SCASelfHarmResourcesViewed addToProtoDictionary] */

void FUN_10ba3a5b0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba3a5e8; end: 10ba3a63f; -[SCASelfHarmResourcesViewed toProtoWithAllowedFields:] */

void FUN_10ba3a5e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba3a640; end: 10ba3a647; -[SCASelfHarmResourcesViewed getPayloadIdentifier] */

undefined8 FUN_10ba3a640(void)

{
  return 0x167a;
}



/* Entry: 10ba3a648; end: 10ba3abff; -[SCASendToRankingComplete fromDictionary:] */

undefined ** FUN_10ba3a648(ulong param_1,undefined8 param_2,undefined **param_3)

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
  puStack_f0 = PTR_PTR_11270c658;
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
    func_0x00010c181f40(param_1);
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
    func_0x00010c1836c0(param_1);
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
    func_0x00010c1e7420(param_1);
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
    func_0x00010c1e7480(param_1);
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
      ppuVar7 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar4);
        }
        uVar3 = param_1;
        func_0x00010be45600();
        if ((uVar3 & 1) == 0) {
          puVar6 = PTR_PTR_1126e2b80;
          _objc_alloc(PTR_PTR_1126e2b80);
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
    func_0x00010c1e7500(param_1);
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
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1e7520(param_1);
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
    func_0x00010c1e87e0(param_1);
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
    FUN_10bb0e7b8();
    func_0x00010c1ec040(param_1);
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
    func_0x00010c1ec060(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  puVar5 = PTR_PTR_1126e2b88;
  _objc_alloc(PTR_PTR_1126e2b88);
  func_0x00010c00c560();
  func_0x00010c212ac0(param_1);
  _objc_release(puVar5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110fc87d8;
}



/* Entry: 10ba3ac00; end: 10ba3ac0b; -[SCASendToRankingComplete getEventName] */

undefined ** FUN_10ba3ac00(void)

{
  return &PTR____CFConstantStringClassReference_110fc87d8;
}



/* Entry: 10ba3ac0c; end: 10ba3ac13; -[SCASendToRankingComplete getEventQoS] */

undefined8 FUN_10ba3ac0c(void)

{
  return 1;
}



/* Entry: 10ba3ac14; end: 10ba3ac2b; -[SCASendToRankingComplete setContentId:] */

void FUN_10ba3ac14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dfe398,2,param_3,0);
  return;
}



/* Entry: 10ba3ac2c; end: 10ba3ac43; -[SCASendToRankingComplete setContextualServerSessionId:] */

void FUN_10ba3ac2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fca658,3,param_3,0);
  return;
}



/* Entry: 10ba3ac44; end: 10ba3ac5b; -[SCASendToRankingComplete setRankingModel:] */

void FUN_10ba3ac44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fca678,4,param_3,0);
  return;
}



/* Entry: 10ba3ac5c; end: 10ba3ac73; -[SCASendToRankingComplete setRankingProfile:] */

void FUN_10ba3ac5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fca698,5,param_3,0);
  return;
}



/* Entry: 10ba3ac74; end: 10ba3acbb; -[SCASendToRankingComplete setRankingResult:] */

void FUN_10ba3ac74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca6b8,6,param_3,0xd
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba3acbc; end: 10ba3acd3; -[SCASendToRankingComplete setRankingResultsId:] */

void FUN_10ba3acbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f43578,7,param_3,0);
  return;
}



/* Entry: 10ba3acd4; end: 10ba3aceb; -[SCASendToRankingComplete setRecentsRankingSessionId:] */

void FUN_10ba3acd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fca6d8,8,param_3,0);
  return;
}



/* Entry: 10ba3acec; end: 10ba3ad6b; -[SCASendToRankingComplete setRequestSource:] */

void FUN_10ba3acec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb0e798(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110de3ef8,9,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3ad6c; end: 10ba3ad83; -[SCASendToRankingComplete setRequestSourceId:] */

void FUN_10ba3ad6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fca6f8,10,param_3,0);
  return;
}



/* Entry: 10ba3ad84; end: 10ba3adcb; -[SCASendToRankingComplete setTelemetry:] */

void FUN_10ba3ad84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca718,0xb,param_3,6
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba3adcc; end: 10ba3afd3; -[SCASendToRankingComplete prepareDictionary:] */

void FUN_10ba3adcc(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_138 = PTR_PTR_11270c658;
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



/* Entry: 10ba3afd4; end: 10ba3afd7; -[SCASendToRankingComplete getFieldNumberToFieldDict] */

void FUN_10ba3afd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba3afd8; end: 10ba3afe3; -[SCASendToRankingComplete toProtoWithAllowedFields:] */

void FUN_10ba3afd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10ba3afe4; end: 10ba3afeb; -[SCASendToRankingComplete getPayloadIdentifier] */

undefined8 FUN_10ba3afe4(void)

{
  return 0x18c7;
}



/* Entry: 10ba3afec; end: 10ba3b253; -[SCASendToRankingResult initWithDictionary:] */

undefined1 * FUN_10ba3afec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270c660;
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
      uVar4 = uVar2;
      func_0x00010bf51e00();
      func_0x00010c19aae0(puVar1);
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
      func_0x00010c0b4ca0();
      func_0x00010c1dee80(puVar1);
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
      func_0x00010c1e8900(puVar1);
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
      FUN_10ba1ccec();
      func_0x00010c1e8a40(puVar1);
      _objc_release(uVar2);
    }
  }
  puVar5 = (undefined1 *)puVar1;
  func_0x00010c119100();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf529e0();
  puVar3 = (undefined1 *)0x0;
  if (puVar6 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)puVar1;
  }
  _objc_retain(puVar3);
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 10ba3b254; end: 10ba3b26b; -[SCASendToRankingResult setFeaturePayload:] */

void FUN_10ba3b254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fca738,2,param_3,0);
  return;
}



/* Entry: 10ba3b26c; end: 10ba3b2bf; -[SCASendToRankingResult setPosition:] */

void FUN_10ba3b26c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110daf598,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3b2c0; end: 10ba3b2d7; -[SCASendToRankingResult setRecipientIdentifier:] */

void FUN_10ba3b2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fca758,4,param_3,0);
  return;
}



/* Entry: 10ba3b2d8; end: 10ba3b357; -[SCASendToRankingResult setRecipientType:] */

void FUN_10ba3b2d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10ba1cccc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fca778,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3b358; end: 10ba3b35b; -[SCASendToRankingResult getFieldNumberToFieldDict] */

void FUN_10ba3b358(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba3b35c; end: 10ba3b367; -[SCASendToRankingResult toProtoWithAllowedFields:] */

void FUN_10ba3b35c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10ba3b368; end: 10ba3b36f; -[SCASendToRankingResult getPayloadIdentifier] */

undefined8 FUN_10ba3b368(void)

{
  return 0x18c8;
}



/* Entry: 10ba3b370; end: 10ba3bc27; -[SCASendToRankingTelemetry initWithDictionary:] */

undefined8 * FUN_10ba3b370(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_1f0 = PTR_PTR_11270c668;
  puVar2 = &uStack_1f8;
  uStack_1f8 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010be45600();
    _objc_release(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      lVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c19ab00(puVar2);
      _objc_release(lVar3);
    }
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010be45600();
    _objc_release(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      lVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c19c840(puVar2);
      _objc_release(lVar3);
    }
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010be45600();
    _objc_release(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar6);
          }
          puVar4 = puVar2;
          func_0x00010be45600();
          if (((ulong)puVar4 & 1) == 0) {
            puVar7 = PTR_PTR_1126e2b90;
            _objc_alloc(PTR_PTR_1126e2b90);
            func_0x00010c00c560();
            func_0x00010befa120(puVar5);
            _objc_release(puVar7);
          }
          lVar10 = lVar10 + 1;
        } while (lVar3 != lVar10);
        lVar3 = lVar6;
        func_0x00010bf52a60();
      }
      _objc_release(lVar6);
      func_0x00010c19c860(puVar2);
      _objc_release(puVar5);
    }
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010be45600();
    _objc_release(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      lVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c19c8c0(puVar2);
      _objc_release(lVar3);
    }
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010be45600();
    _objc_release(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      lVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1e73e0(puVar2);
      _objc_release(lVar3);
    }
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010be45600();
    _objc_release(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      lVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1ec6a0(puVar2);
      _objc_release(lVar3);
    }
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010be45600();
    _objc_release(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar6);
          }
          puVar4 = puVar2;
          func_0x00010be45600();
          if (((ulong)puVar4 & 1) == 0) {
            puVar7 = PTR_PTR_1126e2b90;
            _objc_alloc(PTR_PTR_1126e2b90);
            func_0x00010c00c560();
            func_0x00010befa120(puVar5);
            _objc_release(puVar7);
          }
          lVar10 = lVar10 + 1;
        } while (lVar3 != lVar10);
        lVar3 = lVar6;
        func_0x00010bf52a60();
      }
      _objc_release(lVar6);
      func_0x00010c1ec6c0(puVar2);
      _objc_release(puVar5);
    }
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010be45600();
    _objc_release(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      lVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1ec700(puVar2);
      _objc_release(lVar3);
    }
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010be45600();
    _objc_release(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      lVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1f6de0(puVar2);
      _objc_release(lVar3);
    }
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010be45600();
    _objc_release(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      lVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c2068e0(puVar2);
      _objc_release(lVar3);
    }
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010be45600();
    _objc_release(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      lVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c218520(puVar2);
      _objc_release(lVar3);
    }
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010be45600();
    _objc_release(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      lVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c21b540(puVar2);
      _objc_release(lVar3);
    }
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010be45600();
    _objc_release(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar6);
          }
          puVar4 = puVar2;
          func_0x00010be45600();
          if (((ulong)puVar4 & 1) == 0) {
            puVar7 = PTR_PTR_1126e2b90;
            _objc_alloc(PTR_PTR_1126e2b90);
            func_0x00010c00c560();
            func_0x00010befa120(puVar5);
            _objc_release(puVar7);
          }
          lVar10 = lVar10 + 1;
        } while (lVar3 != lVar10);
        lVar3 = lVar6;
        func_0x00010bf52a60();
      }
      _objc_release(lVar6);
      func_0x00010c21b560(puVar2);
      _objc_release(puVar5);
    }
  }
  puVar8 = puVar2;
  func_0x00010c119100();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf529e0();
  puVar4 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    puVar4 = puVar2;
  }
  _objc_retain(puVar4);
  _objc_release(puVar8);
  _objc_release(param_3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar4;
  }
  ___stack_chk_fail();
  puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return puVar4;
}



/* Entry: 10ba3bc28; end: 10ba3bc7b; -[SCASendToRankingTelemetry setFeatureResolutionLatencyMs:] */

void FUN_10ba3bc28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca798,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3bc7c; end: 10ba3bccf; -[SCASendToRankingTelemetry setFilteredSubjectsCount:] */

void FUN_10ba3bc7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca7b8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3bcd0; end: 10ba3bd17; -[SCASendToRankingTelemetry setFilteredSubjectsCountByKind:] */

void FUN_10ba3bcd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca7d8,4,param_3,0xd
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba3bd18; end: 10ba3bd6b; -[SCASendToRankingTelemetry setFilteringLatencyMs:] */

void FUN_10ba3bd18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca7f8,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3bd6c; end: 10ba3bdbf; -[SCASendToRankingTelemetry setRankingLatencyMs:] */

void FUN_10ba3bd6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca818,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3bdc0; end: 10ba3be13; -[SCASendToRankingTelemetry setRerankSubjectsCount:] */

void FUN_10ba3bdc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca838,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3be14; end: 10ba3be5b; -[SCASendToRankingTelemetry setRerankSubjectsCountByKind:] */

void FUN_10ba3be14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca858,8,param_3,0xd
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba3be5c; end: 10ba3beaf; -[SCASendToRankingTelemetry setRerankingLatencyMs:] */

void FUN_10ba3be5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca878,9,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3beb0; end: 10ba3bf03; -[SCASendToRankingTelemetry setScoringLatencyMs:] */

void FUN_10ba3beb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca898,10,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3bf04; end: 10ba3bf57; -[SCASendToRankingTelemetry setSortingLatencyMs:] */

void FUN_10ba3bf04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca8b8,0xb,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3bf58; end: 10ba3bfab; -[SCASendToRankingTelemetry setTotalLatencyMs:] */

void FUN_10ba3bf58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbd818,0xc,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3bfac; end: 10ba3bfff; -[SCASendToRankingTelemetry setUnfilteredSubjectsCount:] */

void FUN_10ba3bfac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca8d8,0xd,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3c000; end: 10ba3c047; -[SCASendToRankingTelemetry setUnfilteredSubjectsCountByKind:] */

void FUN_10ba3c000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca8f8,0xe,param_3,
                      0xd);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba3c048; end: 10ba3c3ef; -[SCASendToRankingTelemetry prepareDictionary:] */

void FUN_10ba3c048(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    _objc_retain(lVar1);
    lVar3 = lVar1;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar5 = *plStack_220;
      do {
        lVar6 = 0;
        do {
          if (*plStack_220 != lVar5) {
            _objc_enumerationMutation(lVar1);
          }
          uVar4 = *(undefined8 *)(lStack_228 + lVar6 * 8);
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
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    _objc_retain(lVar1);
    lVar3 = lVar1;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar5 = *plStack_260;
      do {
        lVar6 = 0;
        do {
          if (*plStack_260 != lVar5) {
            _objc_enumerationMutation(lVar1);
          }
          uVar4 = *(undefined8 *)(lStack_268 + lVar6 * 8);
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
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    _objc_retain(lVar1);
    lVar3 = lVar1;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar5 = *plStack_2a0;
      do {
        lVar6 = 0;
        do {
          if (*plStack_2a0 != lVar5) {
            _objc_enumerationMutation(lVar1);
          }
          uVar4 = *(undefined8 *)(lStack_2a8 + lVar6 * 8);
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
  puStack_2b8 = PTR_PTR_11270c668;
  uStack_2c0 = param_1;
  _objc_msgSendSuper2(&uStack_2c0,PTR_s_prepareDictionary__11261fec0,param_3);
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



/* Entry: 10ba3c3f0; end: 10ba3c3f3; -[SCASendToRankingTelemetry getFieldNumberToFieldDict] */

void FUN_10ba3c3f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba3c3f4; end: 10ba3c3ff; -[SCASendToRankingTelemetry toProtoWithAllowedFields:] */

void FUN_10ba3c3f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,0);
  return;
}



/* Entry: 10ba3c400; end: 10ba3c407; -[SCASendToRankingTelemetry getPayloadIdentifier] */

undefined8 FUN_10ba3c400(void)

{
  return 0x193a;
}



/* Entry: 10ba3c408; end: 10ba3c53f; -[SCASendtoPageModalOpen fromDictionary:] */

void FUN_10ba3c408(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270c670;
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
    FUN_10ba1cf18();
    func_0x00010c1c8c20(param_1);
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
    FUN_10ba1cf64();
    func_0x00010c1c8c40(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10ba3c540; end: 10ba3c54b; -[SCASendtoPageModalOpen getEventName] */

undefined ** FUN_10ba3c540(void)

{
  return &PTR____CFConstantStringClassReference_110fc8818;
}



/* Entry: 10ba3c54c; end: 10ba3c553; -[SCASendtoPageModalOpen getEventQoS] */

undefined8 FUN_10ba3c54c(void)

{
  return 1;
}



/* Entry: 10ba3c554; end: 10ba3c55f; -[SCASendtoPageModalOpen getPerUserSamplingRateV2] */

undefined8 FUN_10ba3c554(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba3c560; end: 10ba3c5df; -[SCASendtoPageModalOpen setModalType:] */

void FUN_10ba3c560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10ba1cf04(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fca918,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3c5e0; end: 10ba3c65f; -[SCASendtoPageModalOpen setModalTypeSpecific:] */

void FUN_10ba3c5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10ba1cf40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fca938,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3c660; end: 10ba3c683; -[SCASendtoPageModalOpen getFieldNumberToFieldDict] */

void FUN_10ba3c660(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba3c684; end: 10ba3c6bb; -[SCASendtoPageModalOpen addToProtoDictionary] */

void FUN_10ba3c684(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba3c6bc; end: 10ba3c713; -[SCASendtoPageModalOpen toProtoWithAllowedFields:] */

void FUN_10ba3c6bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba3c714; end: 10ba3c71b; -[SCASendtoPageModalOpen getPayloadIdentifier] */

undefined8 FUN_10ba3c714(void)

{
  return 0x14a0;
}



/* Entry: 10ba3c71c; end: 10ba3c853; -[SCASessionManagementCenterActiveSessionFetch fromDictionary:] */

void FUN_10ba3c71c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270c678;
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
    func_0x00010c162a80(param_1);
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
    func_0x00010c1fdf80(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10ba3c854; end: 10ba3c85f; -[SCASessionManagementCenterActiveSessionFetch getEventName] */

undefined ** FUN_10ba3c854(void)

{
  return &PTR____CFConstantStringClassReference_110fc8838;
}



/* Entry: 10ba3c860; end: 10ba3c867; -[SCASessionManagementCenterActiveSessionFetch getEventQoS] */

undefined8 FUN_10ba3c860(void)

{
  return 1;
}



/* Entry: 10ba3c868; end: 10ba3c8bb; -[SCASessionManagementCenterActiveSessionFetch setActiveSessionsFetchTimeMs:] */

void FUN_10ba3c868(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca958,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3c8bc; end: 10ba3c90f; -[SCASessionManagementCenterActiveSessionFetch setSessionsLoadIsSuccessful:] */

void FUN_10ba3c8bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca978,3,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3c910; end: 10ba3c913; -[SCASessionManagementCenterActiveSessionFetch getFieldNumberToFieldDict] */

void FUN_10ba3c910(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba3c914; end: 10ba3c91f; -[SCASessionManagementCenterActiveSessionFetch toProtoWithAllowedFields:] */

void FUN_10ba3c914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba3c920; end: 10ba3c927; -[SCASessionManagementCenterActiveSessionFetch getPayloadIdentifier] */

undefined8 FUN_10ba3c920(void)

{
  return 0x13e2;
}



/* Entry: 10ba3c928; end: 10ba3c9f3; -[SCASessionManagementCenterPage fromDictionary:] */

void FUN_10ba3c928(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270c680;
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
    func_0x00010c1fdb40(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10ba3c9f4; end: 10ba3c9ff; -[SCASessionManagementCenterPage getEventName] */

undefined ** FUN_10ba3c9f4(void)

{
  return &PTR____CFConstantStringClassReference_110fc8858;
}



/* Entry: 10ba3ca00; end: 10ba3ca07; -[SCASessionManagementCenterPage getEventQoS] */

undefined8 FUN_10ba3ca00(void)

{
  return 1;
}



/* Entry: 10ba3ca08; end: 10ba3ca5b; -[SCASessionManagementCenterPage setSessionManagementPageLoadLatencyMs:] */

void FUN_10ba3ca08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca998,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3ca5c; end: 10ba3ca5f; -[SCASessionManagementCenterPage getFieldNumberToFieldDict] */

void FUN_10ba3ca5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba3ca60; end: 10ba3ca6b; -[SCASessionManagementCenterPage toProtoWithAllowedFields:] */

void FUN_10ba3ca60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba3ca6c; end: 10ba3ca73; -[SCASessionManagementCenterPage getPayloadIdentifier] */

undefined8 FUN_10ba3ca6c(void)

{
  return 0x13e3;
}



/* Entry: 10ba3ca74; end: 10ba3cbab; -[SCASessionManagementCenterRevokeSession fromDictionary:] */

void FUN_10ba3ca74(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270c688;
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
    func_0x00010bf1f3c0();
    func_0x00010c1edf60(param_1);
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
    func_0x00010c1edf80(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10ba3cbac; end: 10ba3cbb7; -[SCASessionManagementCenterRevokeSession getEventName] */

undefined ** FUN_10ba3cbac(void)

{
  return &PTR____CFConstantStringClassReference_110fc8878;
}



/* Entry: 10ba3cbb8; end: 10ba3cbbf; -[SCASessionManagementCenterRevokeSession getEventQoS] */

undefined8 FUN_10ba3cbb8(void)

{
  return 1;
}



/* Entry: 10ba3cbc0; end: 10ba3cc13; -[SCASessionManagementCenterRevokeSession setRevokeSessionIsSuccessful:] */

void FUN_10ba3cbc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca9b8,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3cc14; end: 10ba3cc67; -[SCASessionManagementCenterRevokeSession setRevokeSessionTimeMs:] */

void FUN_10ba3cc14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca9d8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3cc68; end: 10ba3cc6b; -[SCASessionManagementCenterRevokeSession getFieldNumberToFieldDict] */

void FUN_10ba3cc68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba3cc6c; end: 10ba3cc77; -[SCASessionManagementCenterRevokeSession toProtoWithAllowedFields:] */

void FUN_10ba3cc6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba3cc78; end: 10ba3cc7f; -[SCASessionManagementCenterRevokeSession getPayloadIdentifier] */

undefined8 FUN_10ba3cc78(void)

{
  return 0x13e4;
}



/* Entry: 10ba3cc80; end: 10ba3cd4b; -[SCAShakeToReportPage fromDictionary:] */

void FUN_10ba3cc80(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270c690;
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
    FUN_10bc9109c();
    func_0x00010c206c40(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10ba3cd4c; end: 10ba3cd57; -[SCAShakeToReportPage getEventName] */

undefined ** FUN_10ba3cd4c(void)

{
  return &PTR____CFConstantStringClassReference_110fc8958;
}



/* Entry: 10ba3cd58; end: 10ba3cd5f; -[SCAShakeToReportPage getEventQoS] */

undefined8 FUN_10ba3cd58(void)

{
  return 1;
}


