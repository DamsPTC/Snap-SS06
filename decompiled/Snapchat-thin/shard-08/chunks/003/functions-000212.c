/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105fb497c; end: 105fb4a2b; -[SCSaveMessageAccessoryPlugin _eligibilityObservableForMessage:] */

void FUN_105fb497c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_110903620);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9c380();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(uVar1);
    uVar2 = uVar1;
  }
  else {
    uVar2 = param_3;
    func_0x00010bf41860(param_3,param_2,param_1,&PTR___NSConcreteGlobalBlock_110903660);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105fb4a2c; end: 105fb4a5b;  */

void FUN_105fb4a2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_105fb43c4(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 105fb4a5c; end: 105fb4b07;  */

void FUN_105fb4a5c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  FUN_105fb43c4();
  puVar3 = PTR____kCFBooleanFalse_11034ab60;
  if ((int)lVar1 != 0) {
    lVar1 = param_2;
    func_0x000107d6aa4c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      func_0x00010c07d020(PTR_PTR_1126c6a40);
    }
    func_0x00010c0df760(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105fb4b08; end: 105fb4d87; -[SCSaveMessageAccessoryPlugin _contextParamsForMessage:messageObservable:conversationInformation:] */

void FUN_105fb4b08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c6b40;
  _objc_alloc(PTR_PTR_1126c6b40);
  func_0x00010bffa0e0();
  puVar2 = PTR_PTR_1126c6b48;
  _objc_opt_new(PTR_PTR_1126c6b48);
  uVar3 = param_4;
  func_0x00010c0b8600(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6f40(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar3 = param_5;
  func_0x00010c0b8600(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea9a0(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf80a80();
  _objc_release(uVar5);
  if ((int)uVar3 != 0) {
    _objc_initWeak(auStack_68,param_1);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    func_0x00010c1d3960(puVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  puVar6 = PTR_PTR_1126c67d8;
  _objc_alloc(PTR_PTR_1126c67d8);
  puVar7 = PTR_PTR_1126c6b50;
  func_0x00010bf44480(PTR_PTR_1126c6b50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000660(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105fb4d88; end: 105fb4e1b;  */

void FUN_105fb4d88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c07d080(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 105fb4e1c; end: 105fb4e9b; -[SCSaveMessageAccessoryPlugin _saveMessage:] */

void FUN_105fb4e1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf490e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c14a9c0(uVar3,param_2,uVar1,uVar2,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fb4e9c; end: 105fb4ed7; -[SCSaveMessageAccessoryPlugin .cxx_destruct] */

void FUN_105fb4e9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105fb4ed8; end: 105fb4ee3; -[SCFeatureSettingsService isSavedStoryMessageTooltipSeenCountAvailable] */

void FUN_105fb4ed8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e34d98);
  return;
}



/* Entry: 105fb4ee4; end: 105fb4eef; -[SCFeatureSettingsService savedStoryMessageTooltipSeenCountServerParam] */

undefined ** FUN_105fb4ee4(void)

{
  return &PTR____CFConstantStringClassReference_110e34d98;
}



/* Entry: 105fb4ef0; end: 105fb4eff; -[SCFeatureSettingsService setSavedStoryMessageTooltipSeenCount:] */

void FUN_105fb4ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e34d98,param_3);
  return;
}



/* Entry: 105fb4f00; end: 105fb4f07; -[SCFeatureSettingsService SAVED_STORY_MESSAGE_TOOLTIP_client_value:] */

void FUN_105fb4f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 105fb4f08; end: 105fb4f0f; -[SCFeatureSettingsService SAVED_STORY_MESSAGE_TOOLTIP_server_value:] */

void FUN_105fb4f08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 105fb4f10; end: 105fb4f1f; -[SCFeatureSettingsService savedStoryMessageTooltipSeenCount] */

void FUN_105fb4f10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e34d98,0);
  return;
}



/* Entry: 105fb4f20; end: 105fb5103; -[SCSavedFriendStoryMessagePlugin initWithCurrentUserId:featureSettingsService:userProvider:chatMediaFetcher:valdiRuntimeProvider:playerProvider:chatMessageDisplayStateLogger:messagingMessageProvider:] */

undefined1 *
FUN_105fb4f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126eeaa0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x58) = 0;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fb5104; end: 105fb58ef; -[SCSavedFriendStoryMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_105fb5104(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  ulong uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x40);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be436c0();
  if ((int)lVar2 == 0) {
    puVar22 = (undefined *)0x0;
  }
  else {
    uVar3 = uVar1;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c14bb40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c259640();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0c6c20();
    _objc_release(uVar4);
    puVar8 = PTR_PTR_1126c6b68;
    _objc_alloc();
    func_0x00010c007960();
    uVar4 = uVar1;
    func_0x00010bf490e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010be21140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010c0d9840(lVar2);
    uVar23 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar23);
    puVar22 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105fb58f0;
    puStack_88 = &UNK_1109029d0;
    _objc_retain(uVar23);
    lVar9 = lVar2;
    uStack_80 = uVar23;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_a8,param_1);
    lVar10 = lVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar22;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x105fb59b8;
    puStack_b8 = &UNK_110902af0;
    _objc_copyWeak(auStack_b0,auStack_a8);
    lVar11 = lVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14bc00();
    _objc_release(uVar12);
    puVar14 = PTR_PTR_1126ae6b8;
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    puVar13 = PTR_PTR_1126c6b70;
    _objc_alloc(PTR_PTR_1126c6b70);
    puStack_108 = puVar22;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_105fb5a34;
    puStack_f0 = &UNK_110903700;
    _objc_copyWeak(auStack_d8,auStack_a8);
    _objc_retain(param_3);
    uStack_e8 = param_3;
    _objc_retain(param_4);
    uStack_e0 = param_4;
    func_0x00010c031760(puVar13);
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21f040(puVar13);
    _objc_release(uVar12);
    lVar15 = lVar9;
    func_0x00010bf870a0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c70a0(puVar13);
    _objc_release(lVar16);
    _objc_release(lVar15);
    lVar15 = lVar10;
    func_0x00010bf870a0(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c7040(puVar13);
    _objc_release(lVar16);
    _objc_release(lVar15);
    lVar15 = lVar11;
    func_0x00010bf870a0(lVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d4a0(puVar13);
    _objc_release(lVar16);
    _objc_release(lVar15);
    puVar22 = puVar14;
    func_0x00010bf870a0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar22;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2021a0(puVar13);
    _objc_release(puVar17);
    _objc_release(puVar22);
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18ff00(puVar13);
    _objc_release(uVar12);
    uVar21 = *(undefined8 *)(param_1 + 0x78);
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_105fb5ab8;
    puStack_118 = &UNK_1108fe608;
    _objc_retain(uVar1);
    uStack_110 = uVar1;
    func_0x00010bfad7a0(uVar21);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar21;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar12;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar18;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c7240(puVar13);
    _objc_release(uVar20);
    _objc_release(uVar18);
    _objc_release(uVar12);
    _objc_release(uVar21);
    _objc_copyWeak(auStack_138,auStack_a8);
    func_0x00010c1d40e0(puVar13);
    _objc_retain(uVar23);
    lVar19 = lVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar19;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar16;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4c20(puVar13);
    _objc_release(lVar15);
    _objc_release(lVar16);
    _objc_release(lVar19);
    if (((uint)(uVar5 < 0x16) & 0x363f36U >> (ulong)((uint)uVar5 & 0x1f)) != 0) {
      uVar20 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar20);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar20;
      func_0x00010c142e00();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar12;
      FUN_1065c2f88();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      _objc_release(uVar20);
      func_0x00010c205000(puVar13);
      _objc_release(uVar18);
    }
    puVar22 = PTR_PTR_1126c67d8;
    _objc_alloc(PTR_PTR_1126c67d8);
    puVar17 = PTR_PTR_1126c6b78;
    func_0x00010bf44480(PTR_PTR_1126c6b78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000660(puVar22);
    _objc_release(puVar17);
    _objc_release(uVar23);
    _objc_destroyWeak(auStack_138);
    _objc_release(uStack_110);
    _objc_release(puVar13);
    _objc_release(uStack_e0);
    _objc_release(uStack_e8);
    _objc_destroyWeak(auStack_d8);
    _objc_release(puVar14);
    _objc_release(lVar11);
    _objc_destroyWeak(auStack_b0);
    _objc_release(lVar10);
    _objc_destroyWeak(auStack_a8);
    _objc_release(lVar9);
    _objc_release(uStack_80);
    _objc_release(uVar23);
    _objc_release(lVar2);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return;
}



/* Entry: 105fb58f0; end: 105fb594f;  */

void FUN_105fb58f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cbe00(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15dfc0();
  func_0x00010c0df6e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105fb5950; end: 105fb5a33;  */

void FUN_105fb5950(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0cc0c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c14b820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105fb5a34; end: 105fb5ab7;  */

void FUN_105fb5a34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be2e180(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fb5ab8; end: 105fb5b1f;  */

undefined8 FUN_105fb5ab8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf490e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x0001070b30c4(param_2,uVar2);
  _objc_release(param_2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 105fb5b20; end: 105fb5ba7;  */

void FUN_105fb5b20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfee140(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070b31f8();
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fb5ba8; end: 105fb5c83;  */

void FUN_105fb5ba8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cbe00(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf490e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf026e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf50280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c271b60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 105fb5c84; end: 105fb5c9f; -[SCSavedFriendStoryMessagePlugin quotedRenderingStyleForMessage:] */

uint FUN_105fb5c84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_105fb5ca0(param_3);
  return (uint)param_3 ^ 1;
}



/* Entry: 105fb5ca0; end: 105fb5d4f;  */

bool FUN_105fb5ca0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c11ec40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0cba20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c22ac40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c25a420();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar5 == 2;
}



/* Entry: 105fb5d50; end: 105fb618f; -[SCSavedFriendStoryMessagePlugin _valdiContextParamsForQuotedMessage:conversationParticipants:isPreview:] */

void FUN_105fb5d50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar1 = PTR_PTR_1126c6a48;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b38c0(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c6a50;
  _objc_opt_new(PTR_PTR_1126c6a50);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  FUN_1065c2f88();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar3);
  func_0x00010c205000(puVar2);
  uVar16 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar16);
  uVar9 = uVar16;
  func_0x00010c0cbe00(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be21140(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar9);
  func_0x00010c0d9840(lVar5);
  _objc_retain(uVar16);
  lVar6 = lVar5;
  func_0x00010c0b8600(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5760(puVar2);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18ff00(puVar2);
  _objc_release(uVar9);
  uVar9 = uVar16;
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar9;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar17 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar3);
  func_0x00010bfad7a0(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar17;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c7240(puVar2);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar17);
  puVar12 = PTR_PTR_1126c6b80;
  _objc_opt_new(PTR_PTR_1126c6b80);
  func_0x00010c1e6cc0();
  puVar13 = PTR_PTR_1126c6b88;
  _objc_opt_new(PTR_PTR_1126c6b88);
  func_0x00010c1e6ca0();
  lVar6 = lVar5;
  func_0x00010c0b8600(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d4a0(puVar13);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  puVar14 = PTR_PTR_1126c67d8;
  _objc_alloc(PTR_PTR_1126c67d8);
  puVar15 = PTR_PTR_1126c6b90;
  func_0x00010bf44480(PTR_PTR_1126c6b90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000660(puVar14);
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar16);
  _objc_release(uVar16);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 105fb6190; end: 105fb637b;  */

void FUN_105fb6190(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    func_0x00010c11ec20(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0c72c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = uVar1;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    func_0x00010bf37400();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf490e0();
    _objc_retainAutoreleasedReturnValue();
  }
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    uVar4 = param_2;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c11ec40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf026e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  else {
    uVar7 = uVar1;
    func_0x00010bf026e0();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105fb637c;
  puStack_88 = &UNK_110903780;
  uStack_68 = *(undefined1 *)(param_1 + 0x28);
  uStack_80 = uVar3;
  uStack_78 = uVar7;
  uStack_70 = uVar1;
  _objc_retain(uVar1);
  _objc_retain(uVar7);
  _objc_retain(uVar3);
  uVar4 = uVar2;
  func_0x000100504554(uVar2,&puStack_a0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105fb637c; end: 105fb640f;  */

void FUN_105fb637c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_2);
  func_0x00010bf50280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c271b60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fb6410; end: 105fb641f;  */

byte FUN_105fb6410(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  _objc_retain(uVar3);
  uVar1 = param_2;
  func_0x00010c0cb5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    bVar4 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    uVar1 = param_2;
    func_0x00010bfee140(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c16a0();
    _objc_release(uVar1);
    bVar4 = *(byte *)(puStack_48 + 3);
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(uVar3);
  _objc_release(param_2);
  return bVar4 & 1;
}



/* Entry: 105fb6420; end: 105fb64ab;  */

void FUN_105fb6420(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfee140(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070b31f8();
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fb64ac; end: 105fb64b3; -[SCSavedFriendStoryMessagePlugin valdiContextParamsForQuotedMessage:conversationParticipants:] */

void FUN_105fb64ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee7610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__valdiContextParamsForQuotedMess_112597728,param_3,param_4,0);
  return;
}



/* Entry: 105fb64b4; end: 105fb64bb; -[SCSavedFriendStoryMessagePlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:] */

void FUN_105fb64b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee7610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__valdiContextParamsForQuotedMess_112597728,param_3,param_4,1);
  return;
}



/* Entry: 105fb64bc; end: 105fb64eb; -[SCSavedFriendStoryMessagePlugin identifier] */

void FUN_105fb64bc(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e34dd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e34dd8);
  return;
}



/* Entry: 105fb64ec; end: 105fb64f3; -[SCSavedFriendStoryMessagePlugin pluginType] */

undefined8 FUN_105fb64ec(void)

{
  return 0;
}



/* Entry: 105fb64f4; end: 105fb660f; -[SCSavedFriendStoryMessagePlugin setActiveConversationIdObservable:] */

void FUN_105fb64f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
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



/* Entry: 105fb6610; end: 105fb663b;  */

void FUN_105fb6610(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fb663c; end: 105fb6763; -[SCSavedFriendStoryMessagePlugin savableDataModelsForMessage:] */

undefined * FUN_105fb663c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c0cbe00(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if ((lVar2 == 0) ||
     (lVar1 = param_1, func_0x00010be43720(param_1,param_2,param_3), (int)lVar1 == 0)) {
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c14b760();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_50 = uVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010c0cbe00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be436c0(param_3,param_2,uVar4);
  if ((param_3 & 1) == 0) {
    uVar3 = uVar4;
    func_0x00010c11ebc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c22ac80();
    puVar7 = (undefined *)(ulong)((int)uVar6 == 0x18);
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  else {
    puVar7 = (undefined *)0x1;
  }
  _objc_release(uVar4);
  return puVar7;
}



/* Entry: 105fb6764; end: 105fb67ff; -[SCSavedFriendStoryMessagePlugin shouldDisplayContextualHeaderForMessage:] */

bool FUN_105fb6764(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0cbe00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be436c0(param_1,param_2,uVar2);
  if ((param_1 & 1) == 0) {
    uVar3 = uVar2;
    func_0x00010c11ebc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c22ac80();
    bVar1 = (int)uVar5 == 0x18;
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    bVar1 = true;
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 105fb6800; end: 105fb6a7f; -[SCSavedFriendStoryMessagePlugin contextualHeaderForMessage:conversationParticipants:] */

void FUN_105fb6800(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_4);
  puVar1 = *(undefined **)(param_1 + 0x40);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010be9a5c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c11ebc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c22ac80();
  _objc_release(puVar4);
  _objc_release(puVar3);
  if ((int)puVar5 == 0x18) {
    func_0x000105fb7188();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = puVar2;
    func_0x00010c0720c0();
    if ((int)puVar4 == 0) {
      puVar4 = param_4;
      func_0x0001070b1d3c(param_4,*(undefined8 *)(param_1 + 8));
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010901d778();
      puVar5 = PTR_PTR_1126b2c18;
      puVar6 = puVar4;
      if (((ulong)puVar3 & 1) == 0) {
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar6;
      }
      else {
        func_0x00010bf85d80(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb1120();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
      }
      func_0x000105fb7170();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar7 = puVar6;
      func_0x000105fb7158();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      func_0x00010bcbeb70();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar6;
      func_0x00010c25ce40(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    else {
      func_0x000105fb7170();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x000105fb7140();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010c25ce40(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  puVar4 = PTR_PTR_1126c68c0;
  _objc_alloc(PTR_PTR_1126c68c0);
  func_0x00010c051540();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105fb6a80; end: 105fb6ae7; -[SCSavedFriendStoryMessagePlugin _incrementTooltipSeenCount] */

void FUN_105fb6a80(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14bc00();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fb6ae8; end: 105fb6c2b; -[SCSavedFriendStoryMessagePlugin _handlePlayMediaWithMessage:conversationParticipants:baseView:] */

void FUN_105fb6ae8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x0001070b1d3c(param_4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0cbe00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126c6a60;
  uVar5 = uVar1;
  func_0x00010bf490e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cb8c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c2923e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14bbe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10d960();
  _objc_release(param_5);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105fb6c2c; end: 105fb6cc7; -[SCSavedFriendStoryMessagePlugin _getOrCreateMessageSubjectForMessageId:] */

void FUN_105fb6c2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x58);
  puVar1 = *(undefined **)(param_1 + 0x48);
  func_0x00010c0e00e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new(PTR_PTR_1126ae820);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x48),param_2,puVar1,param_3);
  }
  _os_unfair_lock_unlock(param_1 + 0x58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fb6cc8; end: 105fb6d0b; -[SCSavedFriendStoryMessagePlugin _handleConversationChange] */

void FUN_105fb6cc8(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x58);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x58);
  return;
}



/* Entry: 105fb6d0c; end: 105fb6d6f; -[SCSavedFriendStoryMessagePlugin _isSavedFriendStoryMessage:] */

bool FUN_105fb6d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf4df40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22ac80();
  _objc_release(uVar1);
  _objc_release(param_3);
  return (int)uVar2 == 0x18;
}



/* Entry: 105fb6d70; end: 105fb6e3f; -[SCSavedFriendStoryMessagePlugin _savedStoryPosterIdForMessage:] */

void FUN_105fb6d70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  func_0x00010be436c0(param_1,param_2,param_3);
  if ((int)param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf4df40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c14bb40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c259640();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105fb6e40; end: 105fb6f0f; -[SCSavedFriendStoryMessagePlugin _isSavedStoryMediaDeletedForMessage:] */

ulong FUN_105fb6e40(ulong param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0cbe00(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be436c0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  if ((int)param_1 != 0) {
    lVar2 = param_3;
    func_0x00010c0cb340(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0cba20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c22ac40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c25a420();
    param_1 = (ulong)(lVar5 == 2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105fb6f10; end: 105fb6fdf; -[SCSavedFriendStoryMessagePlugin _isSavedStoryMediaPresentForMessage:] */

ulong FUN_105fb6f10(ulong param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0cbe00(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be436c0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  if ((int)param_1 != 0) {
    lVar2 = param_3;
    func_0x00010c0cb340(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0cba20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c22ac40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c25a420();
    param_1 = (ulong)(lVar5 == 1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105fb6fe0; end: 105fb6fe7; -[SCSavedFriendStoryMessagePlugin activeConversationIdObservable] */

undefined8 FUN_105fb6fe0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105fb6fe8; end: 105fb6fef; -[SCSavedFriendStoryMessagePlugin activeConversationInformationObservable] */

undefined8 FUN_105fb6fe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 105fb6ff0; end: 105fb701f; -[SCSavedFriendStoryMessagePlugin setActiveConversationInformationObservable:] */

void FUN_105fb6ff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fb7020; end: 105fb7037; -[SCSavedFriendStoryMessagePlugin playbackPresenter] */

void FUN_105fb7020(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fb7038; end: 105fb7043; -[SCSavedFriendStoryMessagePlugin setPlaybackPresenter:] */

void FUN_105fb7038(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 105fb7044; end: 105fb704b; -[SCSavedFriendStoryMessagePlugin messageViewEvents] */

undefined8 FUN_105fb7044(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 105fb704c; end: 105fb707b; -[SCSavedFriendStoryMessagePlugin setMessageViewEvents:] */

void FUN_105fb704c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fb707c; end: 105fb7137; -[SCSavedFriendStoryMessagePlugin .cxx_destruct] */

void FUN_105fb707c(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 105fb7138; end: 105fb719f;  */

void FUN_105fb7138(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_toString_11267a308);
  return;
}



/* Entry: 105fb71a0; end: 105fb71ab; +[SCCChatSavedStoryPlugin componentPath] */

undefined ** FUN_105fb71a0(void)

{
  return &PTR____CFConstantStringClassReference_110e34e58;
}



/* Entry: 105fb71ac; end: 105fb71cf; -[SCCChatSavedStoryPlugin initWithViewModel:componentContext:runtime:] */

void FUN_105fb71ac(void)

{
  FUN_105fb72f0(PTR_PTR_1126eeaa8);
  return;
}



/* Entry: 105fb71d0; end: 105fb7207; -[SCCChatSavedStoryPlugin setViewModel:] */

void FUN_105fb71d0(void)

{
  func_0x000105fb730c();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fb731c();
  func_0x000105fb7304();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fb7208; end: 105fb7247; -[SCCChatSavedStoryPlugin viewModel] */

void FUN_105fb7208(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fb7304();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105fb7248; end: 105fb7253; +[SCCQuotedChatSavedStoryView componentPath] */

undefined ** FUN_105fb7248(void)

{
  return &PTR____CFConstantStringClassReference_110e34e78;
}



/* Entry: 105fb7254; end: 105fb7277; -[SCCQuotedChatSavedStoryView initWithViewModel:componentContext:runtime:] */

void FUN_105fb7254(void)

{
  FUN_105fb72f0(PTR_PTR_1126eeab0);
  return;
}



/* Entry: 105fb7278; end: 105fb72af; -[SCCQuotedChatSavedStoryView setViewModel:] */

void FUN_105fb7278(void)

{
  func_0x000105fb730c();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fb731c();
  func_0x000105fb7304();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fb72b0; end: 105fb72ef; -[SCCQuotedChatSavedStoryView viewModel] */

void FUN_105fb72b0(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fb7304();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105fb72f0; end: 105fb7327;  */

void FUN_105fb72f0(undefined8 param_1,undefined8 param_2)

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



/* Entry: 105fb7328; end: 105fb73a7; -[SCCChatSavedStoryPluginContext initWithOnTap:] */

undefined8 * FUN_105fb7328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retainBlock();
  puStack_28 = PTR_PTR_1126eeab8;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105fb73a8; end: 105fb73bb; +[SCCChatSavedStoryPluginContext valdiMarshallableObjectDescriptor] */

void FUN_105fb73a8(undefined8 *param_1)

{
  *param_1 = &PTR_s_onTap_110903810;
  param_1[1] = &PTR_DAT_110903960;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fb73bc; end: 105fb73f7; -[SCCChatSavedStoryPluginViewModel initWithCurrentUserId:storyCreatorId:] */

void FUN_105fb73bc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eeac0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105fb73f8; end: 105fb740f; +[SCCChatSavedStoryPluginViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fb73f8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109039a0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fb7410; end: 105fb7433; -[SCCQuotedChatSavedStoryViewContext init] */

void FUN_105fb7410(void)

{
  func_0x000105fb7490(PTR_PTR_1126eeac8);
  return;
}



/* Entry: 105fb7434; end: 105fb7447; +[SCCQuotedChatSavedStoryViewContext valdiMarshallableObjectDescriptor] */

void FUN_105fb7434(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109039e8;
  param_1[1] = &PTR_DAT_110903a30;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fb7448; end: 105fb746b; -[SCCQuotedChatSavedStoryViewModel init] */

void FUN_105fb7448(void)

{
  func_0x000105fb7490(PTR_PTR_1126eead0);
  return;
}



/* Entry: 105fb746c; end: 105fb74a3; +[SCCQuotedChatSavedStoryViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fb746c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110903a48;
  param_1[1] = &PTR_DAT_110903a78;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fb74a4; end: 105fb763b; -[SCSnapchatterMessageFetcher initSnapchatterObservableRepository:snapchattersDataMutator:snapchatterPublicInfoFetcher:snapchatterFriendStatusManager:friendmojiPresenter:performer:] */

undefined1 *
FUN_105fb74a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126eead8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x38) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    func_0x00010befc780(*(undefined8 *)((long)puVar1 + 0x30));
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fb763c; end: 105fb7767; -[SCSnapchatterMessageFetcher initWithFriendStatusManagerCreator:snapchatterObservableRepository:snapchattersDataMutator:snapchatterPublicInfoFetcher:friendmojiPresenter:] */

undefined8
FUN_105fb763c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c021520();
  uVar2 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf562a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfef5a0(param_1,param_2,param_4,param_5,param_6,uVar3,param_7,puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 105fb7768; end: 105fb77bb; -[SCSnapchatterMessageFetcher clearCache] */

void FUN_105fb7768(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x38);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x48));
  func_0x00010c12b120(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x38);
  return;
}



/* Entry: 105fb77bc; end: 105fb7943; -[SCSnapchatterMessageFetcher addSnapchatterWithUserId:] */

void FUN_105fb77bc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_50 = param_3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_58;
  _objc_copyWeak(auStack_60);
  _objc_retain(param_3);
  func_0x00010c09d7c0(uVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume(param_3);
  _objc_retain(puVar5);
  puVar4 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 != (undefined1 *)0x0) {
    param_3 = param_3 + 0x28;
    _objc_loadWeakRetained(param_3);
    puVar4 = puVar5;
    func_0x00010bfb1920(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc84e0(param_3);
    _objc_release(puVar4);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105fb7944; end: 105fb79cf;  */

void FUN_105fb7944(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc84e0(param_1);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105fb79d0; end: 105fb7a5b; -[SCSnapchatterMessageFetcher _addSnapchatter:] */

void FUN_105fb79d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae5c0;
  func_0x00010befca80(PTR_PTR_1126ae5c0,param_2,param_3,0xfffffffff15f6d47,0xf,0,0,0,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8a80();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105fb7a5c; end: 105fb7c97; -[SCSnapchatterMessageFetcher snapchatterObservableForUserId:] */

void FUN_105fb7a5c(long param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined **unaff_x27;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x38);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x38);
  if (lVar1 == 0) {
    _objc_initWeak(auStack_78,param_1);
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c09dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105fb7c98;
    puStack_88 = &UNK_110903a88;
    param_2 = auStack_78;
    _objc_copyWeak(auStack_80);
    lVar6 = lVar5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010c11ac40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _os_unfair_lock_lock(param_1 + 0x38);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40));
    _os_unfair_lock_unlock(param_1 + 0x38);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    unaff_x27 = &puStack_a0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _os_unfair_lock_unlock(param_1 + 0x38);
    _objc_destroyWeak((undefined1 *)((long)unaff_x27 + 0x20));
    _objc_destroyWeak(auStack_78);
    __Unwind_Resume(param_3);
    _objc_retain(param_2);
    puVar7 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar7 == (undefined1 *)0x0) {
      lVar1 = 0;
    }
    else {
      param_3 = param_3 + 0x20;
      _objc_loadWeakRetained(param_3);
      puVar7 = param_2;
      func_0x00010bfb1920(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010bddd0e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(param_3);
    }
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105fb7c98; end: 105fb7d3f;  */

void FUN_105fb7c98(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bddd0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105fb7d40; end: 105fb7d43; -[SCSnapchatterMessageFetcher addButtonStatusForUserId:] */

void FUN_105fb7d40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc6250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addButtonStatusForUserId__11254f230);
  return;
}



/* Entry: 105fb7d44; end: 105fb7ddf; -[SCSnapchatterMessageFetcher _addButtonStatusForUserId:] */

void FUN_105fb7d44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x38);
  puVar1 = *(undefined **)(param_1 + 0x48);
  func_0x00010c0e00e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new(PTR_PTR_1126ae820);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x48),param_2,puVar1,param_3);
  }
  _os_unfair_lock_unlock(param_1 + 0x38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fb7de0; end: 105fb8077; -[SCSnapchatterMessageFetcher _chatSnapchatterDisplayInfoFromSnapchatter:] */

void FUN_105fb7de0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb740(uVar7,param_2,puVar1);
  _objc_release(puVar1);
  uVar8 = *(ulong *)(param_1 + 0x30);
  uVar7 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c253180(uVar8,param_2,uVar7);
  _objc_release(uVar7);
  uVar7 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed87e0(param_1,param_2,uVar7,uVar8);
  _objc_release(uVar7);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf86580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b28e0;
  _objc_retain(uVar7);
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010bf1bae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16da00(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf1bae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fbc60(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126c6b98;
  _objc_alloc(PTR_PTR_1126c6b98);
  uVar2 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c05c6c0(puVar4,param_2,uVar2,puVar1,
                      (uint)(0x10 < uVar8) | 0xc3U >> (ulong)((uint)uVar8 & 0x1f) & 1,0);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18fca0(puVar4,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1a06c0(puVar4,param_2,uVar7);
  _objc_release(uVar7);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(uVar7);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bdc6240();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 + -1 < (undefined *)0xb) {
    uVar5 = *(undefined4 *)(&UNK_10ddd1c90 + (long)(puVar6 + -1) * 4);
  }
  else {
    uVar5 = 0;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_3,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fb8078; end: 105fb80f3; -[SCSnapchatterMessageFetcher _updateFriendStatusForUserWithId:friendStatus:] */

void FUN_105fb8078(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  func_0x00010bdc6240();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 - 1U < 0xb) {
    uVar2 = *(undefined4 *)(&UNK_10ddd1c90 + (param_4 - 1U) * 4);
  }
  else {
    uVar2 = 0;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fb80f4; end: 105fb81ef; -[SCSnapchatterMessageFetcher didUpdateWithAnnouncerIdentifier:] */

void FUN_105fb80f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c2444a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf97ce0(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105fb81f0; end: 105fb8267;  */

void FUN_105fb81f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c067fc0(param_3);
  _objc_release(param_3);
  func_0x00010bed87e0(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fb8268; end: 105fb82df; -[SCSnapchatterMessageFetcher .cxx_destruct] */

void FUN_105fb8268(long param_1)

{
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



/* Entry: 105fb82e0; end: 105fb83f7; -[SCSnapchatterMessageRenderingPlugin initWithSnapchatterMessageFetcher:snapchatterShareSender:friendProfileScopeExposer:messagingMessageProvider:] */

undefined1 *
FUN_105fb82e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126eeae0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fb83f8; end: 105fb8427; -[SCSnapchatterMessageRenderingPlugin identifier] */

void FUN_105fb83f8(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110eeb858);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110eeb858);
  return;
}



/* Entry: 105fb8428; end: 105fb852f; -[SCSnapchatterMessageRenderingPlugin setActiveConversationIdObservable:] */

void FUN_105fb8428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
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



/* Entry: 105fb8530; end: 105fb855b;  */

void FUN_105fb8530(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde0540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fb855c; end: 105fb858f; -[SCSnapchatterMessageRenderingPlugin _clearFetcherCache] */

void FUN_105fb855c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ab80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fb8590; end: 105fb8597; -[SCSnapchatterMessageRenderingPlugin pluginType] */

undefined8 FUN_105fb8590(void)

{
  return 0;
}



/* Entry: 105fb8598; end: 105fb868f; -[SCSnapchatterMessageRenderingPlugin _handleTapForUserId:] */

void FUN_105fb8598(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b3fa0;
  _objc_alloc();
  uStack_80 = 0x2b;
  uStack_78 = 0;
  uStack_68 = 0x2f;
  uStack_70 = 0xfffffffff15f6d47;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  lVar2 = param_1;
  func_0x00010c27ece0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c015a00(puVar1,param_2,&uStack_80,lVar2,param_3,param_1);
  }
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105fb8690; end: 105fb86df; -[SCSnapchatterMessageRenderingPlugin _handleAddButtonTapForUserId:] */

void FUN_105fb8690(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb720();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fb86e0; end: 105fb87cf; -[SCSnapchatterMessageRenderingPlugin _snapchatterUserIdForMessage:] */

void FUN_105fb86e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c22ac80();
  _objc_release(uVar1);
  if ((int)uVar3 == 7) {
    uVar3 = uVar2;
    func_0x00010c22a700(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    uVar1 = 0;
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fb87d0; end: 105fb8a9f; -[SCSnapchatterMessageRenderingPlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_105fb87d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bebd720();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c6ba0;
    _objc_alloc();
    func_0x00010c05ac00();
    _objc_initWeak(auStack_78,param_1);
    puVar3 = PTR_PTR_1126c6ba8;
    _objc_alloc();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105fb8aa0;
    puStack_90 = &UNK_110841fb0;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(lVar1);
    lStack_88 = lVar1;
    _objc_copyWeak(auStack_b0,auStack_78);
    _objc_retain(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c244580();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bef7380();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c031780(puVar3);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar11 = PTR_PTR_1126c67d8;
    _objc_alloc(PTR_PTR_1126c67d8);
    puVar10 = PTR_PTR_1126c6bb0;
    func_0x00010bf44480(PTR_PTR_1126c6bb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000660(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_b0);
    _objc_release(lStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105fb8aa0; end: 105fb8b07;  */

void FUN_105fb8aa0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fb8b08; end: 105fb8b4f; -[SCSnapchatterMessageRenderingPlugin friendProfileDidDismiss:] */

void FUN_105fb8b08(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105fb8b50; end: 105fb8b57; -[SCSnapchatterMessageRenderingPlugin canForwardMessageFromActionMenu:focusedMessageContent:] */

undefined8 FUN_105fb8b50(void)

{
  return 1;
}



/* Entry: 105fb8b58; end: 105fb8b5f; -[SCSnapchatterMessageRenderingPlugin canForwardMessageFromCTA:] */

undefined8 FUN_105fb8b58(void)

{
  return 1;
}


