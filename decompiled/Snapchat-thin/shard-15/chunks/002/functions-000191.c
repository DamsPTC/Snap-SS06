/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b9bad84; end: 10b9bae03; -[SCABillboardNetworkRequestEvent setSurface:] */

void FUN_10b9bad84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b3750(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2e78,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bae04; end: 10b9bae07; -[SCABillboardNetworkRequestEvent getFieldNumberToFieldDict] */

void FUN_10b9bae04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bae08; end: 10b9bae13; -[SCABillboardNetworkRequestEvent toProtoWithAllowedFields:] */

void FUN_10b9bae08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9bae14; end: 10b9bae1b; -[SCABillboardNetworkRequestEvent getPayloadIdentifier] */

undefined8 FUN_10b9bae14(void)

{
  return 0x16c5;
}



/* Entry: 10b9bae1c; end: 10b9bae27; -[SCABillboardRankingRequestEvent getEventName] */

undefined ** FUN_10b9bae1c(void)

{
  return &PTR____CFConstantStringClassReference_110fa3038;
}



/* Entry: 10b9bae28; end: 10b9bae2f; -[SCABillboardRankingRequestEvent getEventQoS] */

undefined8 FUN_10b9bae28(void)

{
  return 1;
}



/* Entry: 10b9bae30; end: 10b9bae77; -[SCABillboardRankingRequestEvent setEligibleCampaigns:] */

void FUN_10b9bae30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3058,2,param_3,0xd
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b9bae78; end: 10b9bae8f; -[SCABillboardRankingRequestEvent setErrorReason:] */

void FUN_10b9bae78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f24978,3,param_3,0);
  return;
}



/* Entry: 10b9bae90; end: 10b9baed7; -[SCABillboardRankingRequestEvent setIneligibleCampaigns:] */

void FUN_10b9bae90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3078,4,param_3,0xd
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b9baed8; end: 10b9baeef; -[SCABillboardRankingRequestEvent setRequestID:] */

void FUN_10b9baed8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa2e58,5,param_3,0);
  return;
}



/* Entry: 10b9baef0; end: 10b9baf6f; -[SCABillboardRankingRequestEvent setSurface:] */

void FUN_10b9baef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b3750(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2e78,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9baf70; end: 10b9baf87; -[SCABillboardRankingRequestEvent setFriendsFeedSyncStatus:] */

void FUN_10b9baf70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa3098,7,param_3,0);
  return;
}



/* Entry: 10b9baf88; end: 10b9bb22f; -[SCABillboardRankingRequestEvent prepareDictionary:] */

void FUN_10b9baf88(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    _objc_retain(lVar1);
    lVar3 = lVar1;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar5 = *plStack_1a0;
      do {
        lVar6 = 0;
        do {
          if (*plStack_1a0 != lVar5) {
            _objc_enumerationMutation(lVar1);
          }
          uVar4 = *(undefined8 *)(lStack_1a8 + lVar6 * 8);
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
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    _objc_retain(lVar1);
    lVar3 = lVar1;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar5 = *plStack_1e0;
      do {
        lVar6 = 0;
        do {
          if (*plStack_1e0 != lVar5) {
            _objc_enumerationMutation(lVar1);
          }
          uVar4 = *(undefined8 *)(lStack_1e8 + lVar6 * 8);
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
  puStack_1f8 = PTR_PTR_11270c1f8;
  uStack_200 = param_1;
  _objc_msgSendSuper2(&uStack_200,PTR_s_prepareDictionary__11261fec0,param_3);
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



/* Entry: 10b9bb230; end: 10b9bb233; -[SCABillboardRankingRequestEvent getFieldNumberToFieldDict] */

void FUN_10b9bb230(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bb234; end: 10b9bb23f; -[SCABillboardRankingRequestEvent toProtoWithAllowedFields:] */

void FUN_10b9bb234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9bb240; end: 10b9bb247; -[SCABillboardRankingRequestEvent getPayloadIdentifier] */

undefined8 FUN_10b9bb240(void)

{
  return 0x16c6;
}



/* Entry: 10b9bb248; end: 10b9bb253; -[SCAChangeUsernameFlowActionEvent getEventName] */

undefined ** FUN_10b9bb248(void)

{
  return &PTR____CFConstantStringClassReference_110fa30b8;
}



/* Entry: 10b9bb254; end: 10b9bb25b; -[SCAChangeUsernameFlowActionEvent getEventQoS] */

undefined8 FUN_10b9bb254(void)

{
  return 1;
}



/* Entry: 10b9bb25c; end: 10b9bb2db; -[SCAChangeUsernameFlowActionEvent setChangeUsernameFlowAction:] */

void FUN_10b9bb25c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b3794(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa30d8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bb2dc; end: 10b9bb2df; -[SCAChangeUsernameFlowActionEvent getFieldNumberToFieldDict] */

void FUN_10b9bb2dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bb2e0; end: 10b9bb2eb; -[SCAChangeUsernameFlowActionEvent toProtoWithAllowedFields:] */

void FUN_10b9bb2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9bb2ec; end: 10b9bb2f3; -[SCAChangeUsernameFlowActionEvent getPayloadIdentifier] */

undefined8 FUN_10b9bb2ec(void)

{
  return 0xd09;
}



/* Entry: 10b9bb2f4; end: 10b9bb2ff; -[SCAChangeUsernamePageViewEvent getEventName] */

undefined ** FUN_10b9bb2f4(void)

{
  return &PTR____CFConstantStringClassReference_110fa30f8;
}



/* Entry: 10b9bb300; end: 10b9bb307; -[SCAChangeUsernamePageViewEvent getEventQoS] */

undefined8 FUN_10b9bb300(void)

{
  return 1;
}



/* Entry: 10b9bb308; end: 10b9bb35b; -[SCAChangeUsernamePageViewEvent setIsUsernameChangeable:] */

void FUN_10b9bb308(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3118,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bb35c; end: 10b9bb35f; -[SCAChangeUsernamePageViewEvent getFieldNumberToFieldDict] */

void FUN_10b9bb35c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bb360; end: 10b9bb36b; -[SCAChangeUsernamePageViewEvent toProtoWithAllowedFields:] */

void FUN_10b9bb360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9bb36c; end: 10b9bb373; -[SCAChangeUsernamePageViewEvent getPayloadIdentifier] */

undefined8 FUN_10b9bb36c(void)

{
  return 0xd0a;
}



/* Entry: 10b9bb374; end: 10b9bb37f; -[SCAChangeUsernameResponseEvent getEventName] */

undefined ** FUN_10b9bb374(void)

{
  return &PTR____CFConstantStringClassReference_110fa3138;
}



/* Entry: 10b9bb380; end: 10b9bb387; -[SCAChangeUsernameResponseEvent getEventQoS] */

undefined8 FUN_10b9bb380(void)

{
  return 1;
}



/* Entry: 10b9bb388; end: 10b9bb407; -[SCAChangeUsernameResponseEvent setChangeUsernameResponse:] */

void FUN_10b9bb388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b37b4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3158,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bb408; end: 10b9bb40b; -[SCAChangeUsernameResponseEvent getFieldNumberToFieldDict] */

void FUN_10b9bb408(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bb40c; end: 10b9bb417; -[SCAChangeUsernameResponseEvent toProtoWithAllowedFields:] */

void FUN_10b9bb40c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9bb418; end: 10b9bb41f; -[SCAChangeUsernameResponseEvent getPayloadIdentifier] */

undefined8 FUN_10b9bb418(void)

{
  return 0xd0c;
}



/* Entry: 10b9bb420; end: 10b9bb42b; -[SCAConnectedAccountsLinkFlow getEventName] */

undefined ** FUN_10b9bb420(void)

{
  return &PTR____CFConstantStringClassReference_110fa3178;
}



/* Entry: 10b9bb42c; end: 10b9bb433; -[SCAConnectedAccountsLinkFlow getEventQoS] */

undefined8 FUN_10b9bb42c(void)

{
  return 1;
}



/* Entry: 10b9bb434; end: 10b9bb44b; -[SCAConnectedAccountsLinkFlow setErrorMessage:] */

void FUN_10b9bb434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e0a338,2,param_3,0);
  return;
}



/* Entry: 10b9bb44c; end: 10b9bb463; -[SCAConnectedAccountsLinkFlow setFailureCode:] */

void FUN_10b9bb44c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa3198,3,param_3,0);
  return;
}



/* Entry: 10b9bb464; end: 10b9bb4b7; -[SCAConnectedAccountsLinkFlow setLatencyMs:] */

void FUN_10b9bb464(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2198,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bb4b8; end: 10b9bb537; -[SCAConnectedAccountsLinkFlow setProviderType:] */

void FUN_10b9bb4b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b37f4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa31b8,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bb538; end: 10b9bb5b7; -[SCAConnectedAccountsLinkFlow setStep:] */

void FUN_10b9bb538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b37d4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dbdaf8,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bb5b8; end: 10b9bb5bb; -[SCAConnectedAccountsLinkFlow getFieldNumberToFieldDict] */

void FUN_10b9bb5b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bb5bc; end: 10b9bb5c7; -[SCAConnectedAccountsLinkFlow toProtoWithAllowedFields:] */

void FUN_10b9bb5bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9bb5c8; end: 10b9bb5cf; -[SCAConnectedAccountsLinkFlow getPayloadIdentifier] */

undefined8 FUN_10b9bb5c8(void)

{
  return 0x17ed;
}



/* Entry: 10b9bb5d0; end: 10b9bb5db; -[SCAConnectedAccountsPageView getEventName] */

undefined ** FUN_10b9bb5d0(void)

{
  return &PTR____CFConstantStringClassReference_110fa31d8;
}



/* Entry: 10b9bb5dc; end: 10b9bb5e3; -[SCAConnectedAccountsPageView getEventQoS] */

undefined8 FUN_10b9bb5dc(void)

{
  return 1;
}



/* Entry: 10b9bb5e4; end: 10b9bb637; -[SCAConnectedAccountsPageView setLinkedCount:] */

void FUN_10b9bb5e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa31f8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bb638; end: 10b9bb71f; -[SCAConnectedAccountsPageView setLinkedProviders:] */

void FUN_10b9bb638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_48 = FUN_10b9bb720;
  puStack_40 = &UNK_1108709c0;
  puStack_38 = puVar2;
  _objc_retain();
  func_0x00010bf97e80(param_3,param_2,&puStack_58);
  uVar1 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3218,3,puVar2,10,
                      uVar1);
  _objc_release(uVar1);
  _objc_release(puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b9bb720; end: 10b9bb773;  */

void FUN_10b9bb720(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10b9b3814(param_2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bb774; end: 10b9bb777; -[SCAConnectedAccountsPageView getFieldNumberToFieldDict] */

void FUN_10b9bb774(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bb778; end: 10b9bb783; -[SCAConnectedAccountsPageView toProtoWithAllowedFields:] */

void FUN_10b9bb778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9bb784; end: 10b9bb78b; -[SCAConnectedAccountsPageView getPayloadIdentifier] */

undefined8 FUN_10b9bb784(void)

{
  return 0x17ef;
}



/* Entry: 10b9bb78c; end: 10b9bb797; -[SCAConnectedAccountsSetupNavigation getEventName] */

undefined ** FUN_10b9bb78c(void)

{
  return &PTR____CFConstantStringClassReference_110fa3238;
}



/* Entry: 10b9bb798; end: 10b9bb79f; -[SCAConnectedAccountsSetupNavigation getEventQoS] */

undefined8 FUN_10b9bb798(void)

{
  return 1;
}



/* Entry: 10b9bb7a0; end: 10b9bb81f; -[SCAConnectedAccountsSetupNavigation setSetupType:] */

void FUN_10b9bb7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b9b3894(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3258,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bb820; end: 10b9bb89f; -[SCAConnectedAccountsSetupNavigation setTriggerProvider:] */

void FUN_10b9bb820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b37f4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3278,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bb8a0; end: 10b9bb8a3; -[SCAConnectedAccountsSetupNavigation getFieldNumberToFieldDict] */

void FUN_10b9bb8a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bb8a4; end: 10b9bb8af; -[SCAConnectedAccountsSetupNavigation toProtoWithAllowedFields:] */

void FUN_10b9bb8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9bb8b0; end: 10b9bb8b7; -[SCAConnectedAccountsSetupNavigation getPayloadIdentifier] */

undefined8 FUN_10b9bb8b0(void)

{
  return 0x17f1;
}



/* Entry: 10b9bb8b8; end: 10b9bb8c3; -[SCAConnectedAccountsUnlinkFlow getEventName] */

undefined ** FUN_10b9bb8b8(void)

{
  return &PTR____CFConstantStringClassReference_110fa3298;
}



/* Entry: 10b9bb8c4; end: 10b9bb8cb; -[SCAConnectedAccountsUnlinkFlow getEventQoS] */

undefined8 FUN_10b9bb8c4(void)

{
  return 1;
}



/* Entry: 10b9bb8cc; end: 10b9bb8e3; -[SCAConnectedAccountsUnlinkFlow setErrorMessage:] */

void FUN_10b9bb8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e0a338,2,param_3,0);
  return;
}



/* Entry: 10b9bb8e4; end: 10b9bb8fb; -[SCAConnectedAccountsUnlinkFlow setFailureCode:] */

void FUN_10b9bb8e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa3198,3,param_3,0);
  return;
}



/* Entry: 10b9bb8fc; end: 10b9bb94f; -[SCAConnectedAccountsUnlinkFlow setLatencyMs:] */

void FUN_10b9bb8fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2198,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bb950; end: 10b9bb9cf; -[SCAConnectedAccountsUnlinkFlow setProviderType:] */

void FUN_10b9bb950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b37f4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa31b8,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bb9d0; end: 10b9bba4f; -[SCAConnectedAccountsUnlinkFlow setStep:] */

void FUN_10b9bb9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b38b4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dbdaf8,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bba50; end: 10b9bba53; -[SCAConnectedAccountsUnlinkFlow getFieldNumberToFieldDict] */

void FUN_10b9bba50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bba54; end: 10b9bba5f; -[SCAConnectedAccountsUnlinkFlow toProtoWithAllowedFields:] */

void FUN_10b9bba54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9bba60; end: 10b9bba67; -[SCAConnectedAccountsUnlinkFlow getPayloadIdentifier] */

undefined8 FUN_10b9bba60(void)

{
  return 0x17f3;
}



/* Entry: 10b9bba68; end: 10b9bba73; -[SCADeviceIDSurveyClientEvent getEventName] */

undefined ** FUN_10b9bba68(void)

{
  return &PTR____CFConstantStringClassReference_110fa32b8;
}



/* Entry: 10b9bba74; end: 10b9bba7b; -[SCADeviceIDSurveyClientEvent getEventQoS] */

undefined8 FUN_10b9bba74(void)

{
  return 1;
}



/* Entry: 10b9bba7c; end: 10b9bba93; -[SCADeviceIDSurveyClientEvent setAdsID:] */

void FUN_10b9bba7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa32d8,2,param_3,0);
  return;
}



/* Entry: 10b9bba94; end: 10b9bbaab; -[SCADeviceIDSurveyClientEvent setAndroidID:] */

void FUN_10b9bba94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa32f8,3,param_3,0);
  return;
}



/* Entry: 10b9bbaac; end: 10b9bbac3; -[SCADeviceIDSurveyClientEvent setConfigDeviceID:] */

void FUN_10b9bbaac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa3318,4,param_3,0);
  return;
}



/* Entry: 10b9bbac4; end: 10b9bbadb; -[SCADeviceIDSurveyClientEvent setDeviceID:] */

void FUN_10b9bbac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa3338,5,param_3,0);
  return;
}



/* Entry: 10b9bbadc; end: 10b9bbaf3; -[SCADeviceIDSurveyClientEvent setDeviceToken:] */

void FUN_10b9bbadc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ead678,6,param_3,0);
  return;
}



/* Entry: 10b9bbaf4; end: 10b9bbb0b; -[SCADeviceIDSurveyClientEvent setIdfv:] */

void FUN_10b9bbaf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa3358,7,param_3,0);
  return;
}



/* Entry: 10b9bbb0c; end: 10b9bbb23; -[SCADeviceIDSurveyClientEvent setPersistenceDeviceID:] */

void FUN_10b9bbb0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa3378,8,param_3,0);
  return;
}



/* Entry: 10b9bbb24; end: 10b9bbb3b; -[SCADeviceIDSurveyClientEvent setAppSetID:] */

void FUN_10b9bbb24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa3398,9,param_3,0);
  return;
}



/* Entry: 10b9bbb3c; end: 10b9bbb3f; -[SCADeviceIDSurveyClientEvent getFieldNumberToFieldDict] */

void FUN_10b9bbb3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bbb40; end: 10b9bbb4b; -[SCADeviceIDSurveyClientEvent toProtoWithAllowedFields:] */

void FUN_10b9bbb40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9bbb4c; end: 10b9bbb53; -[SCADeviceIDSurveyClientEvent getPayloadIdentifier] */

undefined8 FUN_10b9bbb4c(void)

{
  return 0x1284;
}



/* Entry: 10b9bbb54; end: 10b9bbb5f; -[SCADurableDeviceIdAuthEvent getEventName] */

undefined ** FUN_10b9bbb54(void)

{
  return &PTR____CFConstantStringClassReference_110fa33b8;
}



/* Entry: 10b9bbb60; end: 10b9bbb67; -[SCADurableDeviceIdAuthEvent getEventQoS] */

undefined8 FUN_10b9bbb60(void)

{
  return 1;
}



/* Entry: 10b9bbb68; end: 10b9bbb7f; -[SCADurableDeviceIdAuthEvent setClientAuthenticationSessionId:] */

void FUN_10b9bbb68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa33d8,2,param_3,0);
  return;
}



/* Entry: 10b9bbb80; end: 10b9bbb97; -[SCADurableDeviceIdAuthEvent setDurableDeviceId:] */

void FUN_10b9bbb80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa33f8,3,param_3,0);
  return;
}



/* Entry: 10b9bbb98; end: 10b9bbb9b; -[SCADurableDeviceIdAuthEvent getFieldNumberToFieldDict] */

void FUN_10b9bbb98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bbb9c; end: 10b9bbba7; -[SCADurableDeviceIdAuthEvent toProtoWithAllowedFields:] */

void FUN_10b9bbb9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9bbba8; end: 10b9bbbaf; -[SCADurableDeviceIdAuthEvent getPayloadIdentifier] */

undefined8 FUN_10b9bbba8(void)

{
  return 0x12ee;
}



/* Entry: 10b9bbbb0; end: 10b9bbbbb; -[SCADurableDeviceIdPostAuthEvent getEventName] */

undefined ** FUN_10b9bbbb0(void)

{
  return &PTR____CFConstantStringClassReference_110fa3418;
}



/* Entry: 10b9bbbbc; end: 10b9bbbc3; -[SCADurableDeviceIdPostAuthEvent getEventQoS] */

undefined8 FUN_10b9bbbbc(void)

{
  return 1;
}



/* Entry: 10b9bbbc4; end: 10b9bbbdb; -[SCADurableDeviceIdPostAuthEvent setDurableDeviceId:] */

void FUN_10b9bbbc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa33f8,2,param_3,0);
  return;
}



/* Entry: 10b9bbbdc; end: 10b9bbbdf; -[SCADurableDeviceIdPostAuthEvent getFieldNumberToFieldDict] */

void FUN_10b9bbbdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bbbe0; end: 10b9bbbeb; -[SCADurableDeviceIdPostAuthEvent toProtoWithAllowedFields:] */

void FUN_10b9bbbe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9bbbec; end: 10b9bbbf3; -[SCADurableDeviceIdPostAuthEvent getPayloadIdentifier] */

undefined8 FUN_10b9bbbec(void)

{
  return 0x12ef;
}



/* Entry: 10b9bbbf4; end: 10b9bbbff; -[SCADurableDeviceIdPreauthEvent getEventName] */

undefined ** FUN_10b9bbbf4(void)

{
  return &PTR____CFConstantStringClassReference_110fa3438;
}



/* Entry: 10b9bbc00; end: 10b9bbc07; -[SCADurableDeviceIdPreauthEvent getEventQoS] */

undefined8 FUN_10b9bbc00(void)

{
  return 1;
}



/* Entry: 10b9bbc08; end: 10b9bbc1f; -[SCADurableDeviceIdPreauthEvent setDurableDeviceId:] */

void FUN_10b9bbc08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa33f8,2,param_3,0);
  return;
}



/* Entry: 10b9bbc20; end: 10b9bbc9f; -[SCADurableDeviceIdPreauthEvent setStorageAvailability:] */

void FUN_10b9bbc20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b3dfc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3458,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bbca0; end: 10b9bbca3; -[SCADurableDeviceIdPreauthEvent getFieldNumberToFieldDict] */

void FUN_10b9bbca0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}


