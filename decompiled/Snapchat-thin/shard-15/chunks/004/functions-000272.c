/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba37510; end: 10ba375db; -[SCAPrivacySettingsPage fromDictionary:] */

void FUN_10ba37510(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270c600;
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



/* Entry: 10ba375dc; end: 10ba375e7; -[SCAPrivacySettingsPage getEventName] */

undefined ** FUN_10ba375dc(void)

{
  return &PTR____CFConstantStringClassReference_110fc8498;
}



/* Entry: 10ba375e8; end: 10ba375ef; -[SCAPrivacySettingsPage getEventQoS] */

undefined8 FUN_10ba375e8(void)

{
  return 1;
}



/* Entry: 10ba375f0; end: 10ba375fb; -[SCAPrivacySettingsPage getPerUserSamplingRateV2] */

undefined8 FUN_10ba375f0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba375fc; end: 10ba3767b; -[SCAPrivacySettingsPage setSource:] */

void FUN_10ba375fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3767c; end: 10ba3767f; -[SCAPrivacySettingsPage getFieldNumberToFieldDict] */

void FUN_10ba3767c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba37680; end: 10ba3768b; -[SCAPrivacySettingsPage toProtoWithAllowedFields:] */

void FUN_10ba37680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba3768c; end: 10ba37693; -[SCAPrivacySettingsPage getPayloadIdentifier] */

undefined8 FUN_10ba3768c(void)

{
  return 0x142a;
}



/* Entry: 10ba37694; end: 10ba37797; -[SCAPublicprofileManageInsightsAction fromDictionary:] */

void FUN_10ba37694(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270c608;
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
    func_0x00010c1e58a0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  puVar4 = PTR_PTR_1126e2b70;
  _objc_alloc(PTR_PTR_1126e2b70);
  func_0x00010c00c560();
  func_0x00010c21e7c0(param_1);
  _objc_release(puVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 10ba37798; end: 10ba377a3; -[SCAPublicprofileManageInsightsAction getEventName] */

undefined ** FUN_10ba37798(void)

{
  return &PTR____CFConstantStringClassReference_110fc8518;
}



/* Entry: 10ba377a4; end: 10ba377ab; -[SCAPublicprofileManageInsightsAction getEventQoS] */

undefined8 FUN_10ba377a4(void)

{
  return 1;
}



/* Entry: 10ba377ac; end: 10ba377b7; -[SCAPublicprofileManageInsightsAction getPerUserSamplingRateV2] */

undefined8 FUN_10ba377ac(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba377b8; end: 10ba377cf; -[SCAPublicprofileManageInsightsAction setPublicProfileId:] */

void FUN_10ba377b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fca2b8,7,param_3,0);
  return;
}



/* Entry: 10ba377d0; end: 10ba37817; -[SCAPublicprofileManageInsightsAction setUserInfo:] */

void FUN_10ba377d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca2d8,8,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba37818; end: 10ba378d7; -[SCAPublicprofileManageInsightsAction prepareDictionary:] */

void FUN_10ba37818(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_38 = PTR_PTR_11270c608;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10ba378d8; end: 10ba378fb; -[SCAPublicprofileManageInsightsAction getFieldNumberToFieldDict] */

void FUN_10ba378d8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba378fc; end: 10ba37933; -[SCAPublicprofileManageInsightsAction addToProtoDictionary] */

void FUN_10ba378fc(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba37934; end: 10ba3798b; -[SCAPublicprofileManageInsightsAction toProtoWithAllowedFields:] */

void FUN_10ba37934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba3798c; end: 10ba37993; -[SCAPublicprofileManageInsightsAction getPayloadIdentifier] */

undefined8 FUN_10ba3798c(void)

{
  return 0xdff;
}



/* Entry: 10ba37994; end: 10ba38347; -[SCAPublicprofileManageItemAction fromDictionary:] */

undefined ** FUN_10ba37994(ulong param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uStack_278;
  undefined *puStack_270;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_270 = PTR_PTR_11270c610;
  uStack_278 = param_1;
  _objc_msgSendSuper2(&uStack_278,PTR_s_fromDictionary__1125cc478,param_3);
  puVar2 = PTR_PTR_1126e2b70;
  _objc_alloc(PTR_PTR_1126e2b70);
  func_0x00010c00c560();
  func_0x00010c21e7c0(param_1);
  _objc_release(puVar2);
  ppuVar3 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar3);
  if ((uVar4 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    ppuVar5 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppuVar3 != (undefined **)0x0) {
      ppuVar7 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar5);
        }
        uVar4 = param_1;
        func_0x00010be45600();
        if ((uVar4 & 1) == 0) {
          func_0x00010befa120(puVar2);
        }
        ppuVar7 = (undefined **)((long)ppuVar7 + 1);
      } while (ppuVar3 != ppuVar7);
      ppuVar3 = ppuVar5;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar5);
    func_0x00010c1acdc0(param_1);
    _objc_release(puVar2);
  }
  ppuVar3 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar3);
  if ((uVar4 & 1) == 0) {
    ppuVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar3;
    func_0x00010bf51e00();
    func_0x00010c1acde0(param_1);
    _objc_release(ppuVar5);
    _objc_release(ppuVar3);
  }
  ppuVar3 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar3);
  if ((uVar4 & 1) == 0) {
    ppuVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1ceba0(param_1);
    _objc_release(ppuVar3);
  }
  ppuVar3 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar3);
  if ((uVar4 & 1) == 0) {
    ppuVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1cee40(param_1);
    _objc_release(ppuVar3);
  }
  ppuVar3 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar3);
  if ((uVar4 & 1) == 0) {
    ppuVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1cf4c0(param_1);
    _objc_release(ppuVar3);
  }
  ppuVar3 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar3);
  if ((uVar4 & 1) == 0) {
    ppuVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar3;
    func_0x00010bf51e00();
    func_0x00010c20d1a0(param_1);
    _objc_release(ppuVar5);
    _objc_release(ppuVar3);
  }
  ppuVar3 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar3);
  if ((uVar4 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    ppuVar5 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppuVar3 != (undefined **)0x0) {
      ppuVar7 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar5);
        }
        uVar4 = param_1;
        func_0x00010be45600();
        if ((uVar4 & 1) == 0) {
          func_0x00010befa120(puVar2);
        }
        ppuVar7 = (undefined **)((long)ppuVar7 + 1);
      } while (ppuVar3 != ppuVar7);
      ppuVar3 = ppuVar5;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar5);
    func_0x00010c20db20(param_1);
    _objc_release(puVar2);
  }
  ppuVar3 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar3);
  if ((uVar4 & 1) == 0) {
    ppuVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c20db40(param_1);
    _objc_release(ppuVar3);
  }
  ppuVar3 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar3);
  if ((uVar4 & 1) == 0) {
    ppuVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar3;
    func_0x00010bf51e00();
    func_0x00010c20dd80(param_1);
    _objc_release(ppuVar5);
    _objc_release(ppuVar3);
  }
  ppuVar3 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar3);
  if ((uVar4 & 1) == 0) {
    ppuVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c20dda0(param_1);
    _objc_release(ppuVar3);
  }
  ppuVar3 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar3);
  if ((uVar4 & 1) == 0) {
    ppuVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar3;
    func_0x00010bf51e00();
    func_0x00010c184c40(param_1);
    _objc_release(ppuVar5);
    _objc_release(ppuVar3);
  }
  ppuVar3 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar3);
  if ((uVar4 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    ppuVar5 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppuVar3 != (undefined **)0x0) {
      ppuVar7 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar5);
        }
        uVar4 = param_1;
        func_0x00010be45600();
        if ((uVar4 & 1) == 0) {
          puVar6 = PTR_PTR_1126e2b78;
          _objc_alloc(PTR_PTR_1126e2b78);
          func_0x00010c00c560();
          func_0x00010befa120(puVar2);
          _objc_release(puVar6);
        }
        ppuVar7 = (undefined **)((long)ppuVar7 + 1);
      } while (ppuVar3 != ppuVar7);
      ppuVar3 = ppuVar5;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar5);
    func_0x00010c204e80(param_1);
    _objc_release(puVar2);
  }
  ppuVar3 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar3);
  if ((uVar4 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    ppuVar5 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppuVar3 != (undefined **)0x0) {
      ppuVar7 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar5);
        }
        uVar4 = param_1;
        func_0x00010be45600();
        if ((uVar4 & 1) == 0) {
          func_0x00010befa120(puVar2);
        }
        ppuVar7 = (undefined **)((long)ppuVar7 + 1);
      } while (ppuVar3 != ppuVar7);
      ppuVar3 = ppuVar5;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar5);
    func_0x00010c1dbc80(param_1);
    _objc_release(puVar2);
  }
  ppuVar3 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar3);
  if ((uVar4 & 1) == 0) {
    ppuVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar3;
    func_0x00010bf51e00();
    func_0x00010c1cdf00(param_1);
    _objc_release(ppuVar5);
    _objc_release(ppuVar3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110fc8538;
}



/* Entry: 10ba38348; end: 10ba38353; -[SCAPublicprofileManageItemAction getEventName] */

undefined ** FUN_10ba38348(void)

{
  return &PTR____CFConstantStringClassReference_110fc8538;
}



/* Entry: 10ba38354; end: 10ba3835b; -[SCAPublicprofileManageItemAction getEventQoS] */

undefined8 FUN_10ba38354(void)

{
  return 1;
}



/* Entry: 10ba3835c; end: 10ba38367; -[SCAPublicprofileManageItemAction getPerUserSamplingRateV2] */

undefined8 FUN_10ba3835c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba38368; end: 10ba383af; -[SCAPublicprofileManageItemAction setUserInfo:] */

void FUN_10ba38368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca2d8,7,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba383b0; end: 10ba383f7; -[SCAPublicprofileManageItemAction setInitialStorySnapIds:] */

void FUN_10ba383b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca2f8,8,param_3,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba383f8; end: 10ba3840f; -[SCAPublicprofileManageItemAction setInitialStoryTitle:] */

void FUN_10ba383f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fca318,9,param_3,0);
  return;
}



/* Entry: 10ba38410; end: 10ba38463; -[SCAPublicprofileManageItemAction setNumDeletedStorySnaps:] */

void FUN_10ba38410(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca338,10,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba38464; end: 10ba384b7; -[SCAPublicprofileManageItemAction setNumNewStorySnaps:] */

void FUN_10ba38464(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca358,0xb,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba384b8; end: 10ba3850b; -[SCAPublicprofileManageItemAction setNumStorySnaps:] */

void FUN_10ba384b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca378,0xc,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3850c; end: 10ba38523; -[SCAPublicprofileManageItemAction setStoryId:] */

void FUN_10ba3850c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e5f1b8,0xd,param_3,0);
  return;
}



/* Entry: 10ba38524; end: 10ba3856b; -[SCAPublicprofileManageItemAction setStorySnapIds:] */

void FUN_10ba38524(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca398,0xe,param_3,7
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba3856c; end: 10ba385bf; -[SCAPublicprofileManageItemAction setStorySnapIdsChanged:] */

void FUN_10ba3856c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca3b8,0xf,puVar1,1)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba385c0; end: 10ba385d7; -[SCAPublicprofileManageItemAction setStoryTitle:] */

void FUN_10ba385c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fca3d8,0x10,param_3,0);
  return;
}



/* Entry: 10ba385d8; end: 10ba3862b; -[SCAPublicprofileManageItemAction setStoryTitleChanged:] */

void FUN_10ba385d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca3f8,0x11,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba3862c; end: 10ba38643; -[SCAPublicprofileManageItemAction setCoverSnapId:] */

void FUN_10ba3862c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fca418,0x12,param_3,0);
  return;
}



/* Entry: 10ba38644; end: 10ba3868b; -[SCAPublicprofileManageItemAction setSnapMetadata:] */

void FUN_10ba38644(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca438,0x13,param_3,
                      0xd);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba3868c; end: 10ba386d3; -[SCAPublicprofileManageItemAction setPinnedHighlightIds:] */

void FUN_10ba3868c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca458,0x14,param_3,
                      7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba386d4; end: 10ba386eb; -[SCAPublicprofileManageItemAction setNotificationCampaignId:] */

void FUN_10ba386d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fca478,0x15,param_3,0);
  return;
}



/* Entry: 10ba386ec; end: 10ba388f3; -[SCAPublicprofileManageItemAction prepareDictionary:] */

void FUN_10ba386ec(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_138 = PTR_PTR_11270c610;
  uStack_140 = param_1;
  _objc_msgSendSuper2(&uStack_140,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba388f4; end: 10ba38917; -[SCAPublicprofileManageItemAction getFieldNumberToFieldDict] */

void FUN_10ba388f4(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba38918; end: 10ba3894f; -[SCAPublicprofileManageItemAction addToProtoDictionary] */

void FUN_10ba38918(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba38950; end: 10ba389a7; -[SCAPublicprofileManageItemAction toProtoWithAllowedFields:] */

void FUN_10ba38950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,3,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba389a8; end: 10ba389af; -[SCAPublicprofileManageItemAction getPayloadIdentifier] */

undefined8 FUN_10ba389a8(void)

{
  return 0x6cb;
}



/* Entry: 10ba389b0; end: 10ba38c6b; -[SCAPublicprofileManagePageOpen fromDictionary:] */

void FUN_10ba389b0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270c618;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__1125cc478,param_3);
  puVar1 = PTR_PTR_1126e2b70;
  _objc_alloc(PTR_PTR_1126e2b70);
  func_0x00010c00c560();
  func_0x00010c21e7c0(param_1);
  _objc_release(puVar1);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1cc9c0(param_1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b2d40(param_1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf51e00();
    func_0x00010c204680(param_1);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1cff00(param_1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf51e00();
    func_0x00010c1ce180(param_1);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10ba38c6c; end: 10ba38c77; -[SCAPublicprofileManagePageOpen getEventName] */

undefined ** FUN_10ba38c6c(void)

{
  return &PTR____CFConstantStringClassReference_110fc8558;
}



/* Entry: 10ba38c78; end: 10ba38c7f; -[SCAPublicprofileManagePageOpen getEventQoS] */

undefined8 FUN_10ba38c78(void)

{
  return 1;
}



/* Entry: 10ba38c80; end: 10ba38c8b; -[SCAPublicprofileManagePageOpen getPerUserSamplingRateV2] */

undefined8 FUN_10ba38c80(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba38c8c; end: 10ba38cd3; -[SCAPublicprofileManagePageOpen setUserInfo:] */

void FUN_10ba38c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca2d8,4,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba38cd4; end: 10ba38d27; -[SCAPublicprofileManagePageOpen setNewBadgePresent:] */

void FUN_10ba38cd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca498,5,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba38d28; end: 10ba38d7b; -[SCAPublicprofileManagePageOpen setIsNewSession:] */

void FUN_10ba38d28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca4b8,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba38d7c; end: 10ba38d93; -[SCAPublicprofileManagePageOpen setSnapId:] */

void FUN_10ba38d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e06db8,8,param_3,0);
  return;
}



/* Entry: 10ba38d94; end: 10ba38de7; -[SCAPublicprofileManagePageOpen setNumberOfReplies:] */

void FUN_10ba38d94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca4d8,9,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba38de8; end: 10ba38dff; -[SCAPublicprofileManagePageOpen setNotificationId:] */

void FUN_10ba38de8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f42398,10,param_3,0);
  return;
}



/* Entry: 10ba38e00; end: 10ba38ebf; -[SCAPublicprofileManagePageOpen prepareDictionary:] */

void FUN_10ba38e00(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_38 = PTR_PTR_11270c618;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10ba38ec0; end: 10ba38ee3; -[SCAPublicprofileManagePageOpen getFieldNumberToFieldDict] */

void FUN_10ba38ec0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba38ee4; end: 10ba38f1b; -[SCAPublicprofileManagePageOpen addToProtoDictionary] */

void FUN_10ba38ee4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba38f1c; end: 10ba38f73; -[SCAPublicprofileManagePageOpen toProtoWithAllowedFields:] */

void FUN_10ba38f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba38f74; end: 10ba38f7b; -[SCAPublicprofileManagePageOpen getPayloadIdentifier] */

undefined8 FUN_10ba38f74(void)

{
  return 0x6cc;
}



/* Entry: 10ba38f7c; end: 10ba3900b; -[SCAPublicprofileManagePageView fromDictionary:] */

void FUN_10ba38f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_fromDictionary__1125cc478;
  puStack_38 = PTR_PTR_11270c620;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  puVar1 = PTR_PTR_1126e2b70;
  _objc_alloc(PTR_PTR_1126e2b70);
  func_0x00010c00c560();
  _objc_release(param_3);
  func_0x00010c21e7c0(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 10ba3900c; end: 10ba39017; -[SCAPublicprofileManagePageView getEventName] */

undefined ** FUN_10ba3900c(void)

{
  return &PTR____CFConstantStringClassReference_110fc8578;
}



/* Entry: 10ba39018; end: 10ba3901f; -[SCAPublicprofileManagePageView getEventQoS] */

undefined8 FUN_10ba39018(void)

{
  return 1;
}



/* Entry: 10ba39020; end: 10ba3902b; -[SCAPublicprofileManagePageView getPerUserSamplingRateV2] */

undefined8 FUN_10ba39020(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba3902c; end: 10ba39073; -[SCAPublicprofileManagePageView setUserInfo:] */

void FUN_10ba3902c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca2d8,4,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba39074; end: 10ba39133; -[SCAPublicprofileManagePageView prepareDictionary:] */

void FUN_10ba39074(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_38 = PTR_PTR_11270c620;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10ba39134; end: 10ba39157; -[SCAPublicprofileManagePageView getFieldNumberToFieldDict] */

void FUN_10ba39134(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba39158; end: 10ba3918f; -[SCAPublicprofileManagePageView addToProtoDictionary] */

void FUN_10ba39158(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba39190; end: 10ba391e7; -[SCAPublicprofileManagePageView toProtoWithAllowedFields:] */

void FUN_10ba39190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba391e8; end: 10ba391ef; -[SCAPublicprofileManagePageView getPayloadIdentifier] */

undefined8 FUN_10ba391e8(void)

{
  return 0x6cd;
}



/* Entry: 10ba391f0; end: 10ba394ff; -[SCAPublicprofileManageStoryReplyAction fromDictionary:] */

void FUN_10ba391f0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270c628;
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
    func_0x00010c1745a0(param_1);
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
    func_0x00010c1a3ae0(param_1);
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
    func_0x00010c1eb2e0(param_1);
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
    func_0x00010c204680(param_1);
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
    func_0x00010c1cff00(param_1);
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
    func_0x00010c1eb180(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10ba39500; end: 10ba3950b; -[SCAPublicprofileManageStoryReplyAction getEventName] */

undefined ** FUN_10ba39500(void)

{
  return &PTR____CFConstantStringClassReference_110fc8598;
}



/* Entry: 10ba3950c; end: 10ba39513; -[SCAPublicprofileManageStoryReplyAction getEventQoS] */

undefined8 FUN_10ba3950c(void)

{
  return 1;
}



/* Entry: 10ba39514; end: 10ba3951f; -[SCAPublicprofileManageStoryReplyAction getPerUserSamplingRateV2] */

undefined8 FUN_10ba39514(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba39520; end: 10ba39537; -[SCAPublicprofileManageStoryReplyAction setBusinessProfileId:] */

void FUN_10ba39520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ed2c38,4,param_3,0);
  return;
}



/* Entry: 10ba39538; end: 10ba3954f; -[SCAPublicprofileManageStoryReplyAction setGiftId:] */

void FUN_10ba39538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fca538,5,param_3,0);
  return;
}



/* Entry: 10ba39550; end: 10ba39567; -[SCAPublicprofileManageStoryReplyAction setReplyUserId:] */

void FUN_10ba39550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fca558,0xb,param_3,0);
  return;
}



/* Entry: 10ba39568; end: 10ba3957f; -[SCAPublicprofileManageStoryReplyAction setSnapId:] */

void FUN_10ba39568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e06db8,0xc,param_3,0);
  return;
}



/* Entry: 10ba39580; end: 10ba395d3; -[SCAPublicprofileManageStoryReplyAction setNumberOfReplies:] */

void FUN_10ba39580(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca4d8,0xd,puVar1,2)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba395d4; end: 10ba39627; -[SCAPublicprofileManageStoryReplyAction setReplyPosition:] */

void FUN_10ba395d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca578,0xe,puVar1,2)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba39628; end: 10ba3964b; -[SCAPublicprofileManageStoryReplyAction getFieldNumberToFieldDict] */

void FUN_10ba39628(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba3964c; end: 10ba39683; -[SCAPublicprofileManageStoryReplyAction addToProtoDictionary] */

void FUN_10ba3964c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba39684; end: 10ba396db; -[SCAPublicprofileManageStoryReplyAction toProtoWithAllowedFields:] */

void FUN_10ba39684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba396dc; end: 10ba396e3; -[SCAPublicprofileManageStoryReplyAction getPayloadIdentifier] */

undefined8 FUN_10ba396dc(void)

{
  return 0xcd8;
}



/* Entry: 10ba396e4; end: 10ba3993b; -[SCAPublicprofileSnapMetadata initWithDictionary:] */

undefined1 * FUN_10ba396e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  puStack_38 = PTR_PTR_11270c630;
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
      func_0x00010bf1f3c0();
      func_0x00010c1b5980(puVar1);
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
      func_0x00010c204200(puVar1);
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
      func_0x00010c204680(puVar1);
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
      FUN_10ba1cc4c();
      func_0x00010c206c40(puVar1);
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



/* Entry: 10ba3993c; end: 10ba3998f; -[SCAPublicprofileSnapMetadata setIsVideo:] */

void FUN_10ba3993c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110f42638,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba39990; end: 10ba399e3; -[SCAPublicprofileSnapMetadata setSnapDuration:] */

void FUN_10ba39990(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fca598,3,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba399e4; end: 10ba399fb; -[SCAPublicprofileSnapMetadata setSnapId:] */

void FUN_10ba399e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e06db8,4,param_3,0);
  return;
}



/* Entry: 10ba399fc; end: 10ba39a7b; -[SCAPublicprofileSnapMetadata setSource:] */

void FUN_10ba399fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10ba1cc2c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba39a7c; end: 10ba39a7f; -[SCAPublicprofileSnapMetadata getFieldNumberToFieldDict] */

void FUN_10ba39a7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba39a80; end: 10ba39a8b; -[SCAPublicprofileSnapMetadata toProtoWithAllowedFields:] */

void FUN_10ba39a80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10ba39a8c; end: 10ba39a93; -[SCAPublicprofileSnapMetadata getPayloadIdentifier] */

undefined8 FUN_10ba39a8c(void)

{
  return 0x1188;
}



/* Entry: 10ba39a94; end: 10ba39b5f; -[SCASafetyReportingSettingsPage fromDictionary:] */

void FUN_10ba39a94(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270c638;
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



/* Entry: 10ba39b60; end: 10ba39b6b; -[SCASafetyReportingSettingsPage getEventName] */

undefined ** FUN_10ba39b60(void)

{
  return &PTR____CFConstantStringClassReference_110fc8698;
}



/* Entry: 10ba39b6c; end: 10ba39b73; -[SCASafetyReportingSettingsPage getEventQoS] */

undefined8 FUN_10ba39b6c(void)

{
  return 1;
}



/* Entry: 10ba39b74; end: 10ba39b7f; -[SCASafetyReportingSettingsPage getPerUserSamplingRateV2] */

undefined8 FUN_10ba39b74(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba39b80; end: 10ba39bff; -[SCASafetyReportingSettingsPage setSource:] */

void FUN_10ba39b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba39c00; end: 10ba39c03; -[SCASafetyReportingSettingsPage getFieldNumberToFieldDict] */

void FUN_10ba39c00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba39c04; end: 10ba39c0f; -[SCASafetyReportingSettingsPage toProtoWithAllowedFields:] */

void FUN_10ba39c04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba39c10; end: 10ba39c17; -[SCASafetyReportingSettingsPage getPayloadIdentifier] */

undefined8 FUN_10ba39c10(void)

{
  return 0x142b;
}



/* Entry: 10ba39c18; end: 10ba39dc7; -[SCASelfHarmResourcesActionTaken fromDictionary:] */

void FUN_10ba39c18(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270c640;
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
    func_0x00010c1619e0(param_1);
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
    FUN_10ba1ce00();
    func_0x00010c161ac0(param_1);
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
    FUN_10ba1ce84();
    func_0x00010c161fe0(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10ba39dc8; end: 10ba39dd3; -[SCASelfHarmResourcesActionTaken getEventName] */

undefined ** FUN_10ba39dc8(void)

{
  return &PTR____CFConstantStringClassReference_110fc8758;
}


