/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105fc5680; end: 105fc5713; -[SCConversationRetentionMessageUpdateTracker initWithConversationUpdatesPublisher:] */

undefined1 * FUN_105fc5680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eebf8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fc5714; end: 105fc5753; -[SCConversationRetentionMessageUpdateTracker setActiveConversationId:] */

void FUN_105fc5714(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x30);
  return;
}



/* Entry: 105fc5754; end: 105fc578f; -[SCConversationRetentionMessageUpdateTracker activeConversationId] */

void FUN_105fc5754(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fc5790; end: 105fc57f7; -[SCConversationRetentionMessageUpdateTracker clearCache] */

void FUN_105fc5790(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x30);
  return;
}



/* Entry: 105fc57f8; end: 105fc5973; -[SCConversationRetentionMessageUpdateTracker retentionStatusObservableForMessage:] */

void FUN_105fc57f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  puVar6 = *(undefined **)(param_1 + 0x18);
  uVar1 = param_3;
  func_0x00010bf490e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar6,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (puVar6 == (undefined *)0x0) {
    puVar6 = PTR_PTR_1126ae820;
    _objc_opt_new(PTR_PTR_1126ae820);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = param_3;
    func_0x00010bf490e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7,param_2,puVar6,uVar1);
    _objc_release(uVar1);
  }
  func_0x00010c0d9840(puVar6,param_2,param_3);
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bfa4cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(uVar2);
    lVar4 = *(long *)(param_1 + 0x28);
  }
  puVar3 = puVar6;
  func_0x00010bf41860(puVar6,param_2,lVar4,&PTR___NSConcreteGlobalBlock_110904660);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _os_unfair_lock_unlock(param_1 + 0x30);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105fc5974; end: 105fc597b;  */

void FUN_105fc5974(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf500d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_conversation_1125b19d8);
  return;
}



/* Entry: 105fc597c; end: 105fc5c23;  */

void FUN_105fc597c(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c253320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf34dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
  uVar1 = uVar2;
  func_0x00010c0d8f20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf8b580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1218e0(uVar3);
  _objc_retain(uVar3);
  uVar1 = uVar3;
  func_0x00010bfed7a0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c1218e0();
  }
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126c6c90;
  _objc_alloc(PTR_PTR_1126c6c90);
  func_0x00010bf86760();
  func_0x00010c03fec0(puVar4);
  func_0x00010c2425e0(param_3);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0cb880();
  func_0x00010c0df760(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183ce0(puVar4);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2053a0(puVar4);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ed820(puVar4);
  _objc_release(puVar5);
  uVar6 = param_3;
  func_0x00010bf12980(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar7 = uVar6;
  func_0x000100504554(uVar6,&PTR___NSConcreteGlobalBlock_110904680);
  _objc_release(uVar6);
  func_0x00010c16d7e0(puVar4);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105fc5c24; end: 105fc5da3; -[SCConversationRetentionMessageUpdateTracker conversationParticipantObservableForParticipants:] */

void FUN_105fc5c24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  puVar3 = *(undefined **)(param_1 + 0x20);
  _objc_retain(puVar3);
  puVar1 = puVar3;
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new();
    _objc_release(puVar3);
    _objc_retain(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar2);
  }
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105fc5da4;
  uStack_40 = 0x105fc5db4;
  puStack_38 = PTR____NSArray0__struct_11034ab48;
  func_0x00010c0bf240(param_3);
  func_0x00010c0d9840(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 0x30);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105fc5da4; end: 105fc5dbb;  */

void FUN_105fc5da4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105fc5dbc; end: 105fc5e5b;  */

void FUN_105fc5dbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105fc5e5c; end: 105fc5eaf; -[SCConversationRetentionMessageUpdateTracker .cxx_destruct] */

void FUN_105fc5e5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105fc5eb0; end: 105fc5ef3;  */

void FUN_105fc5eb0(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  func_0x00010c067ec0();
  if (param_2 - 1U < 5) {
    uVar1 = *(undefined4 *)(&UNK_10ddd1d40 + (ulong)(param_2 - 1U) * 4);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithInt__1126157f0,uVar1);
  return;
}



/* Entry: 105fc5ef4; end: 105fc5f77;  */

bool FUN_105fc5ef4(int param_1)

{
  return param_1 == 1;
}



/* Entry: 105fc5f78; end: 105fc5f83; +[SCCConversationRetentionPresentActionSheet modulePath] */

undefined ** FUN_105fc5f78(void)

{
  return &PTR____CFConstantStringClassReference_110e35258;
}



/* Entry: 105fc5f84; end: 105fc5f8b; +[SCCConversationRetentionPresentActionSheet asyncStrictMode] */

undefined8 FUN_105fc5f84(void)

{
  return 0;
}



/* Entry: 105fc5f8c; end: 105fc5feb; -[SCCConversationRetentionPresentActionSheet presentActionSheetWithRetentionActionSheetParams:] */

void FUN_105fc5f8c(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_105fc62cc();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = unaff_x20;
  (**(code **)(unaff_x20 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fc62dc();
  _objc_release(unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105fc5fec; end: 105fc6157; +[SCCConversationRetentionPresentActionSheet invokeWithJSRuntimeProvider:retentionActionSheetParams:completionHandler:] */

void FUN_105fc5fec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105fc60cc;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(lStack_48);
  _objc_release(param_5);
  func_0x000105fc62dc();
  _objc_release(param_3);
  return;
}



/* Entry: 105fc6158; end: 105fc617b; +[SCCConversationRetentionPresentActionSheet valdiMarshallableObjectDescriptor] */

void FUN_105fc6158(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109046a0;
  param_1[1] = &PTR_DAT_1109046d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 105fc617c; end: 105fc6187; +[SCCConversationRetentionSnapViewabilityChangeStatusView componentPath] */

undefined ** FUN_105fc617c(void)

{
  return &PTR____CFConstantStringClassReference_110e35278;
}



/* Entry: 105fc6188; end: 105fc61ab; -[SCCConversationRetentionSnapViewabilityChangeStatusView initWithViewModel:componentContext:runtime:] */

void FUN_105fc6188(void)

{
  func_0x000105fc62e4(PTR_PTR_1126eec00);
  return;
}



/* Entry: 105fc61ac; end: 105fc61e3; -[SCCConversationRetentionSnapViewabilityChangeStatusView setViewModel:] */

void FUN_105fc61ac(void)

{
  FUN_105fc62cc();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fc62f8();
  func_0x000105fc62dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fc61e4; end: 105fc6223; -[SCCConversationRetentionSnapViewabilityChangeStatusView viewModel] */

void FUN_105fc61e4(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fc62dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105fc6224; end: 105fc622f; +[SCCConversationRetentionView componentPath] */

undefined ** FUN_105fc6224(void)

{
  return &PTR____CFConstantStringClassReference_110e35298;
}



/* Entry: 105fc6230; end: 105fc6253; -[SCCConversationRetentionView initWithViewModel:componentContext:runtime:] */

void FUN_105fc6230(void)

{
  func_0x000105fc62e4(PTR_PTR_1126eec08);
  return;
}



/* Entry: 105fc6254; end: 105fc628b; -[SCCConversationRetentionView setViewModel:] */

void FUN_105fc6254(void)

{
  FUN_105fc62cc();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fc62f8();
  func_0x000105fc62dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fc628c; end: 105fc62cb; -[SCCConversationRetentionView viewModel] */

void FUN_105fc628c(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fc62dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105fc62cc; end: 105fc6303;  */

void FUN_105fc62cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 105fc6304; end: 105fc630b; -[SCCConversationRetentionActionSheetType__Enum init] */

void FUN_105fc6304(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 105fc630c; end: 105fc6313; -[SCCConversationRetentionSnapViewabilityChangeStatusDisplayMode__Enum init] */

void FUN_105fc630c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 105fc6314; end: 105fc631b; -[SCCConversationRetentionSnapViewabilityMode__Enum init] */

void FUN_105fc6314(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 105fc631c; end: 105fc6323; -[SCCConversationRetentionType__Enum init] */

void FUN_105fc631c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,7);
  return;
}



/* Entry: 105fc6324; end: 105fc632b; -[SCCRetentionStatusType__Enum init] */

void FUN_105fc6324(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 105fc632c; end: 105fc634b; -[SCCConversationRetentionSnapViewabilityChangeStatusContext init] */

void FUN_105fc632c(void)

{
  FUN_105fc65f8(PTR_PTR_1126eec10);
  return;
}



/* Entry: 105fc634c; end: 105fc636f; +[SCCConversationRetentionSnapViewabilityChangeStatusContext valdiMarshallableObjectDescriptor] */

void FUN_105fc634c(undefined8 *param_1)

{
  *param_1 = &PTR_s_userProvider_110904718;
  param_1[1] = &PTR_s_SCComposerPeopleUserProviding_1109047d8;
  param_1[2] = &PTR_s_oi_v_1109046e8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fc6370; end: 105fc6393;  */

undefined8 FUN_105fc6370(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(undefined4 *)(param_2 + 1));
  return 0;
}



/* Entry: 105fc6394; end: 105fc6413;  */

void FUN_105fc6394(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105fc65c8;
  puStack_30 = &UNK_11085e0c0;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105fc6414; end: 105fc6433; -[SCCConversationRetentionSnapViewabilityChangeStatusViewModel init] */

void FUN_105fc6414(void)

{
  FUN_105fc65f8(PTR_PTR_1126eec18);
  return;
}



/* Entry: 105fc6434; end: 105fc6447; +[SCCConversationRetentionSnapViewabilityChangeStatusViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fc6434(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110904818;
  param_1[1] = &PTR_DAT_1109048c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fc6448; end: 105fc6467; -[SCCConversationRetentionSnapViewabilityRetentionPolicy init] */

void FUN_105fc6448(void)

{
  FUN_105fc65f8(PTR_PTR_1126eec20);
  return;
}



/* Entry: 105fc6468; end: 105fc647b; +[SCCConversationRetentionSnapViewabilityRetentionPolicy valdiMarshallableObjectDescriptor] */

void FUN_105fc6468(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109048d8;
  param_1[1] = &PTR_DAT_110904938;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fc647c; end: 105fc649b; -[SCCConversationRetentionViewContext init] */

void FUN_105fc647c(void)

{
  FUN_105fc65f8(PTR_PTR_1126eec28);
  return;
}



/* Entry: 105fc649c; end: 105fc64bf; +[SCCConversationRetentionViewContext valdiMarshallableObjectDescriptor] */

void FUN_105fc649c(undefined8 *param_1)

{
  *param_1 = &PTR_s_actionSheetPresenter_110904978;
  param_1[1] = &PTR_s_SCComposerFoundationActionSheetP_110904a50;
  param_1[2] = &PTR_s_oi_v_110904948;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fc64c0; end: 105fc64df; -[SCCConversationRetentionViewModel init] */

void FUN_105fc64c0(void)

{
  FUN_105fc65f8(PTR_PTR_1126eec30);
  return;
}



/* Entry: 105fc64e0; end: 105fc64f3; +[SCCConversationRetentionViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fc64e0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_displayName_110904a80;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fc64f4; end: 105fc6547; -[SCCRetentionActionSheetParams initWithDisplayName:useHide:chatRetention:snapRetention:actionSheetPresenter:actionSheetType:] */

void FUN_105fc64f4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eec38;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105fc6548; end: 105fc656b; +[SCCRetentionActionSheetParams valdiMarshallableObjectDescriptor] */

void FUN_105fc6548(undefined8 *param_1)

{
  *param_1 = &PTR_s_displayName_110904b40;
  param_1[1] = &PTR_DAT_110904c90;
  param_1[2] = &PTR_s_oi_v_110904b10;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fc656c; end: 105fc65b3; -[SCCRetentionStatusObservables initWithRetentionDuration:retentionStatusType:] */

void FUN_105fc656c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eec40;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105fc65b4; end: 105fc65c7; +[SCCRetentionStatusObservables valdiMarshallableObjectDescriptor] */

void FUN_105fc65b4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110904cb8;
  param_1[1] = &PTR_DAT_110904d90;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fc65c8; end: 105fc65f7;  */

void FUN_105fc65c8(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105fc65f8; end: 105fc662b;  */

void FUN_105fc65f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 105fc662c; end: 105fc6763; -[SCRemovedUserScreenCaptureMessagePlugin initWithUserId:alertPresenterFactory:userProvider:messagingMessageProvider:] */

undefined1 *
FUN_105fc662c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126eec48;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x38) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fc6764; end: 105fc6ab7; -[SCRemovedUserScreenCaptureMessagePlugin valdiContextParamsForMessages:conversationParticipants:] */

void FUN_105fc6764(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  uVar9 = param_3;
  func_0x00010bfb1920(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cbe00(uVar11,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar9 = uVar11;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010c253320();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010c150ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar9);
  uVar9 = uVar1;
  func_0x00010bf31900();
  if ((int)uVar9 == 2) {
    func_0x00010bf31460(uVar1);
    puVar2 = PTR_PTR_1126c6ca0;
    _objc_alloc();
    func_0x00010bffca20();
    uVar9 = uVar11;
    func_0x00010bf490e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be207c0(param_1,param_2,uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    func_0x00010c0d9840(lVar3,param_2,param_3);
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar13);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105fc6ab8;
    puStack_70 = &UNK_110854bd0;
    uStack_68 = uVar13;
    _objc_retain(uVar13);
    lVar4 = lVar3;
    func_0x00010c0b8600(lVar3,param_2,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0b8600(lVar3,param_2,&PTR___NSConcreteGlobalBlock_110904da8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c6ca8;
    _objc_opt_new(PTR_PTR_1126c6ca8);
    lVar7 = lVar4;
    func_0x00010c272120(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1daa60(puVar6,param_2,lVar7);
    _objc_release(lVar7);
    lVar7 = lVar5;
    func_0x00010c272120(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c217e80(puVar6,param_2,lVar7);
    _objc_release(lVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar7);
    uVar9 = uVar8;
    func_0x00010c0b7600(uVar8,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c166b20(puVar6,param_2,uVar9);
    _objc_release(uVar9);
    _objc_release(lVar7);
    _objc_release(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21f040(puVar6,param_2,uVar9);
    _objc_release(uVar9);
    puVar12 = PTR_PTR_1126c67d8;
    _objc_alloc(PTR_PTR_1126c67d8);
    puVar10 = PTR_PTR_1126c6cb0;
    func_0x00010bf44480(PTR_PTR_1126c6cb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000660(puVar12,param_2,puVar10,puVar2,puVar6);
    _objc_release(puVar10);
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uStack_68);
    _objc_release(uVar13);
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
  else {
    puVar12 = (undefined *)0x0;
  }
  _objc_release(uVar1);
  _objc_release(uVar11);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 105fc6ab8; end: 105fc6bc7;  */

void FUN_105fc6ab8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105fc6b4c;
  puStack_30 = &UNK_110903cb0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x000100817178(param_2,&puStack_48);
  uVar1 = param_2;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fc6bc8; end: 105fc6d37; -[SCRemovedUserScreenCaptureMessagePlugin canMergeMessage:withPreviousMessage:] */

bool FUN_105fc6bc8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0cbe00(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c253320();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c150ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(lVar2);
  if (param_4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x00010c0cbe00(lVar5,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c253320();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c150ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar5);
    bVar1 = false;
    if ((lVar4 == 0) || (lVar6 == 0)) goto LAB_105fc6d08;
    lVar3 = lVar4;
    func_0x00010bf31460();
    lVar2 = lVar6;
    func_0x00010bf31460();
    if (((int)lVar3 == (int)lVar2) && (lVar3 = lVar4, func_0x00010bf31900(), (int)lVar3 == 2)) {
      lVar3 = lVar6;
      func_0x00010bf31900(lVar6);
      bVar1 = (int)lVar3 == 2;
      goto LAB_105fc6d08;
    }
  }
  bVar1 = false;
LAB_105fc6d08:
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 105fc6d38; end: 105fc6e53; -[SCRemovedUserScreenCaptureMessagePlugin setActiveConversationIdObservable:] */

void FUN_105fc6d38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf870a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105fc6e54; end: 105fc6e7f;  */

void FUN_105fc6e54(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc6e80; end: 105fc6eaf; -[SCRemovedUserScreenCaptureMessagePlugin identifier] */

void FUN_105fc6e80(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110eebab8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110eebab8);
  return;
}



/* Entry: 105fc6eb0; end: 105fc6eb7; -[SCRemovedUserScreenCaptureMessagePlugin pluginType] */

undefined8 FUN_105fc6eb0(void)

{
  return 1;
}



/* Entry: 105fc6eb8; end: 105fc6f53; -[SCRemovedUserScreenCaptureMessagePlugin _getMessagesObservableForFirstMessageId:] */

void FUN_105fc6eb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x38);
  puVar1 = *(undefined **)(param_1 + 0x28);
  func_0x00010c0e00e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new(PTR_PTR_1126ae820);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,puVar1,param_3);
  }
  _os_unfair_lock_unlock(param_1 + 0x38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fc6f54; end: 105fc6f97; -[SCRemovedUserScreenCaptureMessagePlugin _handleConversationChange] */

void FUN_105fc6f54(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x38);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x38);
  return;
}



/* Entry: 105fc6f98; end: 105fc6f9f; -[SCRemovedUserScreenCaptureMessagePlugin activeConversationIdObservable] */

undefined8 FUN_105fc6f98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105fc6fa0; end: 105fc6fa7; -[SCRemovedUserScreenCaptureMessagePlugin activeConversationInformationObservable] */

undefined8 FUN_105fc6fa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105fc6fa8; end: 105fc6fd7; -[SCRemovedUserScreenCaptureMessagePlugin setActiveConversationInformationObservable:] */

void FUN_105fc6fa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fc6fd8; end: 105fc6fef; -[SCRemovedUserScreenCaptureMessagePlugin uiContainer] */

void FUN_105fc6fd8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fc6ff0; end: 105fc6ffb; -[SCRemovedUserScreenCaptureMessagePlugin setUiContainer:] */

void FUN_105fc6ff0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 105fc6ffc; end: 105fc707b; -[SCRemovedUserScreenCaptureMessagePlugin .cxx_destruct] */

void FUN_105fc6ffc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105fc707c; end: 105fc70ef; -[SCGrapheneConvoLiveActivityMetric2 init] */

undefined1 * FUN_105fc707c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eec50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105fc70f0; end: 105fc7167;  */

void FUN_105fc70f0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110904dc8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105fc7168; end: 105fc71df;  */

void FUN_105fc7168(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110904e18,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105fc71e0; end: 105fc7353;  */

void FUN_105fc71e0(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110904e68,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_105fc7354;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110904eb8,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 105fc7354; end: 105fc73cb;  */

void FUN_105fc7354(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110904eb8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105fc73cc; end: 105fc75c3; -[SCBlockedExceptionAlertEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc73cc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + _DAT_11273c0c8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273c0cc);
  *(long *)(param_1 + _DAT_11273c0cc) = lVar4;
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11273c0d0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf1d760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273c0d4);
  *(long *)(param_1 + _DAT_11273c0d4) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11273c0d8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11273c0dc;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11273c0e0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  func_0x00010bfc6120(uVar3);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105fc75c4; end: 105fc760b;  */

void FUN_105fc75c4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb80a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc760c; end: 105fc7a13; -[SCBlockedExceptionAlertEntryPoint _showBlockedExceptionAlertForGroup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc760c(long param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **unaff_x28;
  undefined1 auStack_168 [8];
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  lVar3 = lVar1;
  _objc_release();
  lVar5 = 0;
  if (lVar2 != 0) {
    FUN_105fc8368();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11273c0d4);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x000108ef2870(param_3,uVar4,*(undefined8 *)(param_1 + _DAT_11273c0cc));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar6 = auStack_a0;
    _objc_initWeak(puVar6,param_1);
    puVar7 = PTR_PTR_1126aed70;
    func_0x000105fc8380();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_105fc7a14;
    puStack_b8 = &UNK_110849410;
    _objc_copyWeak(auStack_a8,auStack_a0);
    _objc_retain(param_3);
    lStack_b0 = param_3;
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar8 = PTR_PTR_1126aed70;
    func_0x000105fc8398();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = puVar11;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_105fc7b28;
    puStack_e8 = &UNK_110849410;
    _objc_copyWeak(auStack_d8,auStack_a0);
    _objc_retain(param_3);
    lStack_e0 = param_3;
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar10 = PTR_PTR_1126aed70;
    ppuVar9 = &PTR____CFConstantStringClassReference_110daf8b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_128 = puVar11;
    uStack_120 = 0xc2000000;
    uStack_118 = 0x105fc7c5c;
    puStack_110 = &UNK_1108482a8;
    unaff_x28 = &puStack_128;
    param_2 = auStack_a0;
    _objc_copyWeak(auStack_108,param_2);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar9);
    puVar11 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar7;
    puStack_90 = puVar8;
    puStack_88 = puVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar11);
    _objc_release(puVar12);
    func_0x00010c18b5e0(puVar11);
    param_1 = param_1 + _DAT_11273c0e0;
    _objc_loadWeakRetained();
    lVar1 = param_1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_destroyWeak(auStack_108);
    _objc_release(puVar8);
    _objc_release(lStack_e0);
    _objc_destroyWeak(auStack_d8);
    _objc_release(puVar7);
    _objc_release(lStack_b0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_a0);
    _objc_release(lVar5);
    _objc_release(lVar3);
    lVar1 = lVar3;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x28 + 4);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  lVar2 = param_3;
  __Unwind_Resume();
  pcStack_138 = FUN_105fc7a14;
  lStack_160 = param_1;
  lStack_158 = lVar5;
  lStack_150 = lVar1;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  lVar5 = lVar2 + 0x28;
  _objc_loadWeakRetained(lVar5);
  func_0x00010be50d00();
  _objc_release(lVar5);
  _objc_copyWeak(auStack_168,lVar2 + 0x28);
  uVar4 = *(undefined8 *)(lVar2 + 0x20);
  _objc_retain(uVar4);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_168);
  _objc_release(param_2);
  return;
}



/* Entry: 105fc7a14; end: 105fc7af3;  */

void FUN_105fc7a14(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be50d00();
  _objc_release(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105fc7af4; end: 105fc7b27;  */

void FUN_105fc7af4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfee80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc7b28; end: 105fc7c07;  */

void FUN_105fc7b28(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be50d00();
  _objc_release(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105fc7c08; end: 105fc7cb7;  */

void FUN_105fc7c08(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfceb20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfeec0(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fc7cb8; end: 105fc7e6f; -[SCBlockedExceptionAlertEntryPoint _didPressGrantExceptionForGroup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc7cb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273c0d4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x000108ef3190(param_3,uVar1,*(undefined8 *)(param_1 + _DAT_11273c0cc));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_11273c0d8;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bfcf8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfceb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  func_0x00010bfcdac0(lVar4);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105fc7e70; end: 105fc7eb7;  */

void FUN_105fc7e70(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfeea0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc7eb8; end: 105fc7f27; -[SCBlockedExceptionAlertEntryPoint _didPressGrantExceptionForGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc7eb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11273c0e0;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77200();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc7f28; end: 105fc800b; -[SCBlockedExceptionAlertEntryPoint _didPressLeaveChatForGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc7f28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11273c0e4;
  lVar3 = *(long *)(param_1 + lVar4);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126b2ab8;
  _objc_alloc(PTR_PTR_1126b2ab8);
  lVar3 = param_1 + _DAT_11273c0e0;
  _objc_loadWeakRetained(lVar3);
  lVar2 = lVar3;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018ce0(puVar1,param_2,param_3,param_1,lVar2);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105fc800c; end: 105fc80fb; -[SCBlockedExceptionAlertEntryPoint _logBlockedParticipantAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc800c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b2950;
  _objc_retain(param_3);
  func_0x00010bf1d6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  param_1 = param_1 + _DAT_11273c0e8;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf366a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105fc80fc; end: 105fc81a3; -[SCBlockedExceptionAlertEntryPoint didLeaveGroup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc80fc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_11273c0e4;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar3 = (long)_DAT_11273c0e0;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1d660(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fc81a4; end: 105fc824b; -[SCBlockedExceptionAlertEntryPoint leaveGroupAlertScopeDidDimiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc81a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_11273c0e4;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar3 = (long)_DAT_11273c0e0;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1d660(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fc824c; end: 105fc82cb; -[SCBlockedExceptionAlertEntryPoint dialogDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc824c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010be50d00(param_1,param_2,&PTR____CFConstantStringClassReference_110dbe218);
  lVar3 = (long)_DAT_11273c0e0;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1d660(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fc82cc; end: 105fc8367; -[SCBlockedExceptionAlertEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc82cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273c0e4,0);
  _objc_destroyWeak(param_1 + _DAT_11273c0d0);
  _objc_destroyWeak(param_1 + _DAT_11273c0d8);
  _objc_destroyWeak(param_1 + _DAT_11273c0e8);
  _objc_destroyWeak(param_1 + _DAT_11273c0c8);
  _objc_destroyWeak(param_1 + _DAT_11273c0e0);
  _objc_storeStrong(param_1 + _DAT_11273c0dc,0);
  _objc_storeStrong(param_1 + _DAT_11273c0d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273c0cc,0);
  return;
}



/* Entry: 105fc8368; end: 105fc83af;  */

void FUN_105fc8368(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e352d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e352d8,
                      &PTR____CFConstantStringClassReference_110e352f8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105fc83b0; end: 105fc8473; -[SCLeaveGroupAlertScope initWithGroupId:delegate:uiContainer:] */

undefined1 *
FUN_105fc83b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126eec58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fc8474; end: 105fc847b; -[SCLeaveGroupAlertScope groupId] */

undefined8 FUN_105fc8474(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105fc847c; end: 105fc8493; -[SCLeaveGroupAlertScope delegate] */

void FUN_105fc847c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fc8494; end: 105fc849b; -[SCLeaveGroupAlertScope uiContainer] */

undefined8 FUN_105fc8494(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105fc849c; end: 105fc84d3; -[SCLeaveGroupAlertScope .cxx_destruct] */

void FUN_105fc849c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105fc84d4; end: 105fc85b3; +[SCChatReplyComposeBusinessLogic viewModelWith:messageId:vmFactory:] */

void FUN_105fc84d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  func_0x00010bf41860(param_3,param_2,param_4,&PTR___NSConcreteGlobalBlock_110904f18);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105fc88fc;
  puStack_40 = &UNK_1108eb220;
  uStack_38 = param_5;
  _objc_retain(param_5);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105fc85b4; end: 105fc8833;  */

void FUN_105fc85b4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puStack_78 = &uStack_80;
      uStack_80 = 0;
      uStack_70 = 0x3032000000;
      pcStack_68 = FUN_105fc8834;
      uStack_60 = 0x105fc8844;
      uStack_58 = 0;
      lVar1 = param_2;
      func_0x00010c0ec5e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0cbb20();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      func_0x00010bf97e80(lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (puStack_78[5] == 0) {
        puVar6 = PTR_PTR_1126ae750;
        func_0x00010c0db140(PTR_PTR_1126ae750);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar3 = PTR_PTR_1126c6cb8;
        _objc_alloc(PTR_PTR_1126c6cb8);
        lVar1 = param_2;
        func_0x00010c0ec5e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf507c0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_2;
        func_0x00010c0ec5e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c244980();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c02b340(puVar3);
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar2);
        _objc_release(lVar1);
        puVar6 = PTR_PTR_1126ae750;
        func_0x00010c0ec800(PTR_PTR_1126ae750);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
      }
      _objc_release(param_3);
      __Block_object_dispose(&uStack_80,8);
      _objc_release(uStack_58);
      goto LAB_105fc87e8;
    }
  }
  puVar6 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
LAB_105fc87e8:
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105fc8834; end: 105fc884b;  */

void FUN_105fc8834(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105fc884c; end: 105fc8a03;  */

void FUN_105fc884c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ec5e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(uVar3);
  if ((int)uVar2 != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = param_2;
    _objc_release(uVar3);
    *param_4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105fc8a04; end: 105fc8ccf; -[SCChatReplyComposeScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc8a04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126c6cc0;
  _objc_alloc(PTR_PTR_1126c6cc0);
  lVar10 = (long)_DAT_11273c0f8;
  lVar9 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar9);
  lVar2 = lVar9;
  func_0x00010bf60940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11273c0fc;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0cb800();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11273c100;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bfcf880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007820(puVar1,param_2,lVar2,lVar4,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar9);
  puVar7 = PTR_PTR_1126c6cc8;
  lVar9 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar9);
  lVar5 = lVar9;
  func_0x00010bf50140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar3);
  lVar2 = lVar3;
  func_0x00010c0cb5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29da20(puVar7,param_2,lVar5,lVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar9);
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11273c108;
    _objc_loadWeakRetained(lVar9);
  }
  lVar3 = lVar9;
  func_0x00010bf0c120(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar9);
  puVar8 = PTR_PTR_1126c6cd0;
  _objc_alloc(PTR_PTR_1126c6cd0);
  lVar9 = param_1 + _DAT_11273c104;
  _objc_loadWeakRetained(lVar9);
  lVar5 = lVar9;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061fc0(puVar8,param_2,puVar7,lVar5,lVar4,lVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar9);
  param_1 = param_1 + lVar10;
  _objc_loadWeakRetained(param_1);
  lVar9 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(puVar8);
  _objc_release(lVar2);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105fc8cd0; end: 105fc8d5b; -[SCChatReplyComposeScopeEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc8cd0(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_11273c0f8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126eec60;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fc8d5c; end: 105fc8db7; -[SCChatReplyComposeScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc8d5c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273c108);
  _objc_destroyWeak(param_1 + _DAT_11273c100);
  _objc_destroyWeak(param_1 + _DAT_11273c0fc);
  _objc_destroyWeak(param_1 + _DAT_11273c104);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273c0f8);
  return;
}


