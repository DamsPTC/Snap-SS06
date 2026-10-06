/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a2edec; end: 106a2ee73; -[SCChatInputScaleTextController .cxx_destruct] */

void FUN_106a2edec(long param_1)

{
  _objc_destroyWeak(param_1 + 0x68);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106a2ee74; end: 106a2ef6f; -[SCChatInputScaleTextPlugin initWithGraphene:featureSettingsService:messagingExperimentService:activeConversationInformation:] */

undefined1 *
FUN_106a2ee74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f4488;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a2ef70; end: 106a2f217; -[SCChatInputScaleTextPlugin configureInputItem:] */

void FUN_106a2ef70(double param_1,double param_2,long param_3,undefined8 param_4,undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  puVar1 = *(undefined **)(param_3 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf37520();
  _objc_release(puVar1);
  FUN_106a2f56c();
  _objc_retainAutoreleasedReturnValue();
  if ((int)puVar2 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0x400000cd);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0xffffffff800000cc);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa060(param_5,param_4,puVar1,puVar2,puVar3,0);
    _objc_release(puVar3);
    uVar4 = 0x403f000000000000;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0x49);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0x49);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa060(param_5,param_4,puVar1,puVar2,puVar3,0);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0x66);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_5;
    func_0x00010bfe90c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar1);
    _objc_release(puVar2);
    puVar2 = param_5;
    func_0x00010bfe90c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    _objc_release(puVar1);
    _objc_release(puVar2);
    puVar2 = param_5;
    func_0x00010bfe90c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    _objc_release(puVar1);
    _objc_release(puVar2);
    if (param_2 <= param_1) {
      param_1 = param_2;
    }
    puVar1 = param_5;
    func_0x00010bfe90c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(param_1 * 0.5);
    uVar4 = 0x4043000000000000;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c202c80(uVar4,0x4043000000000000,param_5);
  func_0x00010c1ba020(param_5,param_4,1000);
  func_0x00010c223c40(param_5,param_4,0xe);
  func_0x00010c1ad540(param_5,param_4,1);
  func_0x00010c160fc0(param_5,param_4,&PTR____CFConstantStringClassReference_110e67c98);
  func_0x00010c17e480(param_5,param_4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106a2f218; end: 106a2f21f; -[SCChatInputScaleTextPlugin position] */

undefined8 FUN_106a2f218(void)

{
  return 2;
}



/* Entry: 106a2f220; end: 106a2f227; -[SCChatInputScaleTextPlugin pluginType] */

undefined8 FUN_106a2f220(void)

{
  return 2;
}



/* Entry: 106a2f228; end: 106a2f22f; -[SCChatInputScaleTextPlugin createDrawer] */

undefined8 FUN_106a2f228(void)

{
  return 0;
}



/* Entry: 106a2f230; end: 106a2f263; -[SCChatInputScaleTextPlugin createItemController] */

void FUN_106a2f230(void)

{
  _objc_alloc(PTR_PTR_1126cfd28);
  func_0x00010c018180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a2f264; end: 106a2f26b; -[SCChatInputScaleTextPlugin inputItem] */

undefined8 FUN_106a2f264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106a2f26c; end: 106a2f29b; -[SCChatInputScaleTextPlugin setInputItem:] */

void FUN_106a2f26c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2f29c; end: 106a2f2b3; -[SCChatInputScaleTextPlugin inputContext] */

void FUN_106a2f29c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a2f2b4; end: 106a2f2bf; -[SCChatInputScaleTextPlugin setInputContext:] */

void FUN_106a2f2b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 106a2f2c0; end: 106a2f31b; -[SCChatInputScaleTextPlugin .cxx_destruct] */

void FUN_106a2f2c0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a2f31c; end: 106a2f3e7; -[SCChatInputScaleTextPluginProvider initWithGraphene:featureSettingsService:messagingExperimentService:] */

undefined1 *
FUN_106a2f31c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f4490;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a2f3e8; end: 106a2f3ef; -[SCChatInputScaleTextPluginProvider providerType] */

undefined8 FUN_106a2f3e8(void)

{
  return 1;
}



/* Entry: 106a2f3f0; end: 106a2f44f; -[SCChatInputScaleTextPluginProvider createPluginWithActiveConversationInformation:replyAllGroupId:] */

void FUN_106a2f3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cfd30;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c018180();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a2f450; end: 106a2f457; -[SCChatInputScaleTextPluginProvider createObserverWithActiveConversationInformation:replyAllGroupId:] */

undefined8 FUN_106a2f450(void)

{
  return 0;
}



/* Entry: 106a2f458; end: 106a2f493; -[SCChatInputScaleTextPluginProvider .cxx_destruct] */

void FUN_106a2f458(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a2f494; end: 106a2f49f; -[SCFeatureSettingsService getExpressiveTextSizeGrabberTooltipSeen] */

void FUN_106a2f494(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e67cb8);
  return;
}



/* Entry: 106a2f4a0; end: 106a2f4ab; -[SCFeatureSettingsService expressiveTextSizeGrabberTooltipSeenServerParam] */

undefined ** FUN_106a2f4a0(void)

{
  return &PTR____CFConstantStringClassReference_110e67cb8;
}



/* Entry: 106a2f4ac; end: 106a2f4bb; -[SCFeatureSettingsService setExpressiveTextSizeGrabberTooltipSeen:] */

void FUN_106a2f4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e67cb8,param_3);
  return;
}



/* Entry: 106a2f4bc; end: 106a2f4c3; -[SCFeatureSettingsService expressive_text_size_grabber_tooltip_seen_client_value:] */

void FUN_106a2f4bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106a2f4c4; end: 106a2f4cb; -[SCFeatureSettingsService expressive_text_size_grabber_tooltip_seen_server_value:] */

void FUN_106a2f4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106a2f4cc; end: 106a2f4db; -[SCFeatureSettingsService expressiveTextSizeGrabberTooltipSeen] */

void FUN_106a2f4cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e67cb8,0);
  return;
}



/* Entry: 106a2f4dc; end: 106a2f4e7; -[SCFeatureSettingsService getExpressiveTextSizeGrabberTooltipSeenV2] */

void FUN_106a2f4dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e67cd8);
  return;
}



/* Entry: 106a2f4e8; end: 106a2f4f3; -[SCFeatureSettingsService expressiveTextSizeGrabberTooltipSeenV2ServerParam] */

undefined ** FUN_106a2f4e8(void)

{
  return &PTR____CFConstantStringClassReference_110e67cd8;
}



/* Entry: 106a2f4f4; end: 106a2f503; -[SCFeatureSettingsService setExpressiveTextSizeGrabberTooltipSeenV2:] */

void FUN_106a2f4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e67cd8,param_3);
  return;
}



/* Entry: 106a2f504; end: 106a2f50b; -[SCFeatureSettingsService expressive_text_size_grabber_tooltip_seen_v2_client_value:] */

void FUN_106a2f504(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106a2f50c; end: 106a2f513; -[SCFeatureSettingsService expressive_text_size_grabber_tooltip_seen_v2_server_value:] */

void FUN_106a2f50c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106a2f514; end: 106a2f56b; -[SCFeatureSettingsService expressiveTextSizeGrabberTooltipSeenV2] */

void FUN_106a2f514(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e67cd8,0);
  return;
}



/* Entry: 106a2f56c; end: 106a2f5e7;  */

void FUN_106a2f56c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR_PTR_1126cfd38;
  _objc_opt_class(PTR_PTR_1126cfd38);
  func_0x00010bf249e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar3,param_2,&PTR____CFConstantStringClassReference_110e67d78,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106a2f5e8; end: 106a2f5ef; -[SCChatInputTextInformationEvent info] */

undefined8 FUN_106a2f5e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106a2f5f0; end: 106a2f61f; -[SCChatInputTextInformationEvent setInfo:] */

void FUN_106a2f5f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2f620; end: 106a2f627; -[SCChatInputTextInformationEvent mentions] */

undefined8 FUN_106a2f620(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106a2f628; end: 106a2f657; -[SCChatInputTextInformationEvent setMentions:] */

void FUN_106a2f628(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2f658; end: 106a2f65f; -[SCChatInputTextInformationEvent event] */

undefined8 FUN_106a2f658(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106a2f660; end: 106a2f68f; -[SCChatInputTextInformationEvent setEvent:] */

void FUN_106a2f660(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2f690; end: 106a2f697; -[SCChatInputTextInformationEvent replyAllGroupId] */

undefined8 FUN_106a2f690(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106a2f698; end: 106a2f6c7; -[SCChatInputTextInformationEvent setReplyAllGroupId:] */

void FUN_106a2f698(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2f6c8; end: 106a2f6cf; -[SCChatInputTextInformationEvent previousMessageId] */

undefined8 FUN_106a2f6c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106a2f6d0; end: 106a2f6ff; -[SCChatInputTextInformationEvent setPreviousMessageId:] */

void FUN_106a2f6d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2f700; end: 106a2f753; -[SCChatInputTextInformationEvent .cxx_destruct] */

void FUN_106a2f700(long param_1)

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



/* Entry: 106a2f754; end: 106a2f75b; -[SCChatInputChatDraftEvent conversationId] */

undefined8 FUN_106a2f754(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106a2f75c; end: 106a2f78b; -[SCChatInputChatDraftEvent setConversationId:] */

void FUN_106a2f75c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2f78c; end: 106a2f793; -[SCChatInputChatDraftEvent text] */

undefined8 FUN_106a2f78c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106a2f794; end: 106a2f7c3; -[SCChatInputChatDraftEvent setText:] */

void FUN_106a2f794(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2f7c4; end: 106a2f7cb; -[SCChatInputChatDraftEvent mentions] */

undefined8 FUN_106a2f7c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106a2f7cc; end: 106a2f7fb; -[SCChatInputChatDraftEvent setMentions:] */

void FUN_106a2f7cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2f7fc; end: 106a2f803; -[SCChatInputChatDraftEvent previousMessageId] */

undefined8 FUN_106a2f7fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106a2f804; end: 106a2f833; -[SCChatInputChatDraftEvent setPreviousMessageId:] */

void FUN_106a2f804(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2f834; end: 106a2f87b; -[SCChatInputChatDraftEvent .cxx_destruct] */

void FUN_106a2f834(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a2f87c; end: 106a2fd53; -[SCChatInputTextObserverPlugin initWithTextSender:storyReplySender:storyShareSender:groupFetcher:groupTracker:mentionBarScopeExposer:chatCommandMenuScopeExposer:circumstanceEngine:messagingExperimentService:activeConversationInformation:replyAllGroupId:chatDraftMutator:chatThreatsScanner:snapchatterObservableRepository:blizzardLogger:sendObservabilityLogger:grapheneRegistry:valdiRuntimeProvider:aiStoryReplyLoggingHelper:lifecycleEvent:spotlightShareSender:chatMediaPreviewDataManager:teamSnapchatSendGateWorkflow:] */

undefined8 *
FUN_106a2f87c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  puStack_70 = PTR_PTR_1126f4498;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[10];
    puVar1[10] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_25;
    _objc_release(uVar2);
  }
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106a2fd54; end: 106a2fe7b; -[SCChatInputTextObserverPlugin registerWithInputContext:] */

void FUN_106a2fd54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0xb8,param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar1;
  _objc_release(uVar2);
  func_0x00010beae160(param_1);
  func_0x00010beab7c0(param_1);
  func_0x00010bec71c0(param_1);
  func_0x00010bec8300(param_1);
  func_0x00010bec7d40(param_1);
  func_0x00010bec7440(param_1);
  func_0x00010bec86c0(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106a2fe7c; end: 106a2febb;  */

void FUN_106a2fe7c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bddd140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106a2febc; end: 106a2ff87; -[SCChatInputTextObserverPlugin _chatThreatsWorkflow] */

void FUN_106a2febc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126cb668;
  _objc_alloc(PTR_PTR_1126cb668);
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  lVar2 = param_1 + 0xb8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf366a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0345a0(puVar1,param_2,uVar6,lVar3,uVar7,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a2ff88; end: 106a30147; -[SCChatInputTextObserverPlugin _setupMentionBar] */

void FUN_106a2ff88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar1 = PTR_PTR_1126cfd40;
  _objc_alloc();
  lVar2 = param_1 + 0xb8;
  _objc_loadWeakRetained(lVar2);
  _objc_retain();
  lVar3 = lVar2;
  func_0x00010c26ccc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01e240(puVar1,param_2,lVar2,lVar3);
  uVar10 = *(undefined8 *)(param_1 + 200);
  *(undefined **)(param_1 + 200) = puVar1;
  _objc_release(uVar10);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126cfd48;
  _objc_alloc();
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  uVar11 = *(undefined8 *)(param_1 + 200);
  lVar2 = param_1 + 0xb8;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010c26bba0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0xb8;
  _objc_loadWeakRetained(lVar3);
  lVar5 = lVar3;
  func_0x00010c0660e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010be5f540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x88);
  lVar7 = param_1 + 0xb8;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c274160();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010be20ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042020(puVar1,param_2,uVar10,uVar11,lVar4,lVar5,lVar6,param_1,uVar12,lVar8,lVar9);
  uVar10 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined **)(param_1 + 0xc0) = puVar1;
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106a30148; end: 106a30223; -[SCChatInputTextObserverPlugin _setupChatCommandMenu] */

void FUN_106a30148(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126cfd50;
  _objc_alloc();
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  lVar2 = param_1 + 0xb8;
  _objc_loadWeakRetained(lVar2);
  _objc_retain();
  lVar3 = lVar2;
  func_0x00010c26bba0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0xb8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c274160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c041fe0(puVar1,param_2,uVar6,lVar2,lVar3,param_1,lVar5);
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined **)(param_1 + 0xd0) = puVar1;
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106a30224; end: 106a30407; -[SCChatInputTextObserverPlugin _subscribeToResignBackgroundForChatDrafts] */

void FUN_106a30224(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0xb8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c065fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x00010c04e820();
  lVar4 = lVar2;
  func_0x00010c2519e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 200);
  func_0x00010c0ca8c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf41860(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar8 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c2a6a00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x00010c2b2440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  uVar8 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar5);
  _objc_release(lVar7);
  return;
}



/* Entry: 106a30408; end: 106a3047b;  */

void FUN_106a30408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cfd58;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c212f20();
  _objc_release(param_2);
  func_0x00010c1c6ac0(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a3047c; end: 106a304eb;  */

void FUN_106a3047c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106a304ec; end: 106a3076f; -[SCChatInputTextObserverPlugin _subscribeToActiveConversationForChatDrafts] */

void FUN_106a304ec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0xb8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c065fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x00010c04e820();
  lVar4 = lVar2;
  func_0x00010c2519e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 200);
  func_0x00010c0ca8c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf41860(lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0xb8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0cb460();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c2519e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_58,param_1);
  uVar8 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c0b8600(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010c2b2440();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar10 = uVar9;
  func_0x00010c25ff60(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar7);
  _objc_release(lVar6);
  return;
}



/* Entry: 106a30770; end: 106a307e3;  */

void FUN_106a30770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cfd58;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c212f20();
  _objc_release(param_2);
  func_0x00010c1c6ac0(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a307e4; end: 106a308bb;  */

void FUN_106a307e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0bf0a0(param_2);
  _objc_retain(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106a308bc; end: 106a308c7;  */

void FUN_106a308bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e2630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setPreviousMessageId__1126563b0,0);
  return;
}



/* Entry: 106a308c8; end: 106a30907;  */

void FUN_106a308c8(long param_1,undefined8 param_2)

{
  func_0x00010c0cb5a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2620(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a30908; end: 106a3097f;  */

void FUN_106a30908(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec800(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106a30980; end: 106a309ff;  */

void FUN_106a30980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c183b80(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106a30a00; end: 106a30b57; -[SCChatInputTextObserverPlugin _subscribeToChatIdentifier] */

void FUN_106a30a00(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = auStack_58;
  _objc_initWeak(puVar1,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0ec0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106a30b58; end: 106a30bcf;  */

void FUN_106a30b58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf36840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec800(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106a30bd0; end: 106a30c17;  */

void FUN_106a30bd0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be253a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a30c18; end: 106a30ef3; -[SCChatInputTextObserverPlugin _subscribeToTextEvents] */

void FUN_106a30c18(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  uVar7 = *(undefined8 *)(param_1 + 0xa8);
  uVar1 = *(undefined8 *)(param_1 + 200);
  func_0x00010c0ca8c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf41860(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar2 = param_1 + 0xb8;
  _objc_loadWeakRetained(lVar2);
  lVar8 = lVar2;
  func_0x00010c0cb460();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar8;
  func_0x00010c2519e0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_initWeak(auStack_78,param_1);
  lVar2 = param_1 + 0xb8;
  _objc_loadWeakRetained(lVar2);
  lVar8 = lVar2;
  func_0x00010c0660e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar8;
  func_0x00010c2b2440();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106a310c4;
  puStack_88 = &UNK_1109541e0;
  _objc_copyWeak(auStack_80,auStack_78);
  lVar6 = lVar4;
  func_0x00010bfad7a0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar2);
  lVar8 = *(long *)(param_1 + 0xb0);
  lVar2 = lVar6;
  if (lVar8 != 0) {
    _objc_retain(lVar8);
    puStack_c8 = puVar3;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_106a312a8;
    puStack_b0 = &UNK_110954240;
    lStack_a8 = lVar8;
    func_0x00010bfb26a0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar8);
  }
  _objc_copyWeak(auStack_d0,auStack_78);
  lVar8 = lVar2;
  func_0x00010c25ff60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar8);
  _objc_destroyWeak(auStack_d0);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar5);
  _objc_release(uVar7);
  return;
}



/* Entry: 106a30ef4; end: 106a30f67;  */

void FUN_106a30ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cfd60;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c1ac320();
  _objc_release(param_2);
  func_0x00010c1c6ac0(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a30f68; end: 106a3103f;  */

void FUN_106a30f68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0bf0a0(param_2);
  _objc_retain(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106a31040; end: 106a3104b;  */

void FUN_106a31040(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e2630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setPreviousMessageId__1126563b0,0);
  return;
}



/* Entry: 106a3104c; end: 106a310c3;  */

void FUN_106a3104c(long param_1,undefined8 param_2)

{
  func_0x00010c0cb5a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2620(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a310c4; end: 106a312a7;  */

byte FUN_106a310c4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfed8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  bVar5 = 0;
  if (lVar2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0xf0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_2;
      func_0x00010bfed8e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0ec5e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf36840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071840();
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(uVar3);
    }
    lVar1 = param_2;
    func_0x00010bf99b20(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x2020000000;
    uStack_58 = 0;
    func_0x00010c0bd4c0(lVar1);
    bVar5 = *(byte *)(puStack_68 + 3);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(lVar1);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  _objc_release(param_2);
  return bVar5 & 1;
}



/* Entry: 106a312a8; end: 106a313bf;  */

void FUN_106a312a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a313c0; end: 106a3150b; -[SCChatInputTextObserverPlugin _subscribeToMessageEdit] */

void FUN_106a313c0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + 0xb8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0cb460();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c2519e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar4 = lVar3;
  func_0x00010c25ff60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106a3150c; end: 106a315f7;  */

void FUN_106a3150c(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106a315f8;
  puStack_50 = &UNK_110863ad8;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0bf0a0(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 106a315f8; end: 106a3166f;  */

void FUN_106a315f8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a31670; end: 106a3187f; -[SCChatInputTextObserverPlugin _handleMessageEdit:] */

void FUN_106a31670(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_138 = param_1;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_3;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        uVar7 = *(undefined8 *)(lStack_128 + lVar6 * 8);
        func_0x00010c11f2a0(uVar7);
        func_0x00010c11f2a0(uVar7);
        func_0x00010c297300(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar4);
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  lVar3 = param_3;
  func_0x00010c0cb240(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  func_0x00010c0ca820(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  lVar2 = lStack_138;
  func_0x00010be95460(lStack_138);
  _objc_release(puVar4);
  _objc_release(lVar8);
  _objc_release(lVar3);
  lVar2 = lVar2 + 0xb8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c14e120(param_3);
  func_0x00010c1f6040(lVar2);
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_190;
  pcStack_148 = FUN_106a31880;
  puStack_160 = puVar1;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_168,lVar2);
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  uStack_180 = 0x106a31908;
  puStack_178 = &UNK_110854530;
  _objc_copyWeak(auStack_170,auStack_168);
  _objc_retainBlock(&puStack_190);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_168);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 106a31880; end: 106a31947; -[SCChatInputTextObserverPlugin _getNonParticipantObservableCallback] */

void FUN_106a31880(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x106a31908;
  puStack_38 = &UNK_110854530;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106a31948; end: 106a31ac7; -[SCChatInputTextObserverPlugin _getNonParticipantObservable] */

void FUN_106a31948(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_1109542d0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106a31ac8;
  puStack_40 = &UNK_110862e08;
  uVar1 = uVar2;
  lStack_38 = param_1;
  func_0x00010bfb26a0(uVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a31ac8; end: 106a31bef;  */

void FUN_106a31ac8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106a31bf0;
  uStack_40 = 0x106a31c00;
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  puStack_38 = puVar1;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c11e0();
  _objc_release(uVar2);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106a31bf0; end: 106a31c07;  */

void FUN_106a31bf0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106a31c08; end: 106a31c4b;  */

void FUN_106a31c08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be20cc0(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106a31c4c; end: 106a31c4f;  */

void FUN_106a31c4c(void)

{
  return;
}



/* Entry: 106a31c50; end: 106a31d7b; -[SCChatInputTextObserverPlugin _getNonParticipantObservableForOneOnOneConversationWithoutRecipient:] */

void FUN_106a31c50(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  iVar1 = 0;
  uVar5 = param_3;
  func_0x000100bf0c60(0,param_3);
  if (iVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0d4340(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar2);
    func_0x00010c0b8600(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  else {
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    func_0x000100504554(uVar5,&PTR___NSConcreteGlobalBlock_110954330);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a31d7c; end: 106a31d9b;  */

void FUN_106a31d7c(undefined8 param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_110954330);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a31d9c; end: 106a31f1f;  */

void FUN_106a31d9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126b28d8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar9 = uVar8;
  func_0x00010bf1c0a0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c280(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a31f20; end: 106a320c3; -[SCChatInputTextObserverPlugin _mentionsPersonDataSource] */

void FUN_106a31f20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  uVar8 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(uVar7);
  _objc_retain(uVar6);
  func_0x00010c0b8600(uVar8,param_2,&PTR___NSConcreteGlobalBlock_110954350);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106a32190;
  puStack_70 = &UNK_110862e08;
  uVar8 = uVar2;
  uStack_68 = uVar6;
  func_0x00010bfb26a0(uVar2,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106a32544;
  puStack_98 = &UNK_110862e08;
  uVar3 = uVar2;
  uStack_90 = uVar7;
  func_0x00010bfb26a0(uVar2,param_2,&puStack_b0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = uVar5;
  func_0x00010bf41860(uVar5,param_2,uVar8,&PTR___NSConcreteGlobalBlock_110954450);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106a320c4; end: 106a3218f;  */

void FUN_106a320c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c122bc0();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ae750;
  if ((int)uVar2 == 0) {
    uVar1 = param_2;
    func_0x00010c0ec5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf36840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec800(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106a32190; end: 106a322d3;  */

void FUN_106a32190(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106a31bf0;
  uStack_40 = 0x106a31c00;
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  puStack_38 = puVar1;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c11e0();
  _objc_release(uVar2);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106a322d4; end: 106a3231f;  */

void FUN_106a322d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,PTR____NSArray0__struct_11034ab48);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106a32320; end: 106a323bf;  */

void FUN_106a32320(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bfcefc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 106a323c0; end: 106a32407;  */

void FUN_106a323c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0ecc20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000100504554();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a32408; end: 106a32543;  */

void FUN_106a32408(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b28d8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf40c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c0d5140(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010bf1acc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010bf1c0a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c05c280(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a32544; end: 106a3274f;  */

void FUN_106a32544(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    puVar4 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_106a31bf0;
    uStack_50 = 0x106a31c00;
    ppuStack_40 = &PTR____CFConstantStringClassReference_110e12b58;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    puStack_48 = puVar4;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c11e0();
    _objc_release(lVar2);
    lVar2 = puStack_68[5];
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      puVar4 = PTR_PTR_1126ae6b8;
      func_0x00010c0860a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = *(undefined **)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c09dce0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    __Block_object_dispose(&uStack_70,8);
    _objc_release(puStack_48);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  uVar5 = 8;
  __Block_object_dispose(&uStack_70);
  __Unwind_Resume();
  _objc_retain(uVar5);
  iVar1 = 0;
  func_0x000100bf0c60(0,uVar5);
  lVar2 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  uVar7 = *(undefined8 *)(lVar2 + 0x28);
  if (iVar1 == 0) {
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_106a32820;
    puStack_e0 = &UNK_110856a28;
    _objc_retain(uVar5);
    uStack_d8 = uVar5;
    func_0x0001006372a4(uVar7,&puStack_f8);
    lVar2 = *(long *)(*(long *)(param_2 + 0x20) + 8);
    uVar6 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = uVar7;
    _objc_release(uVar6);
    uVar7 = uStack_d8;
  }
  else {
    *(undefined **)(lVar2 + 0x28) = PTR____NSArray0__struct_11034ab48;
  }
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 106a32750; end: 106a3281f;  */

void FUN_106a32750(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  iVar1 = 0;
  func_0x000100bf0c60(0,param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar2 + 0x28);
  if (iVar1 == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106a32820;
    puStack_40 = &UNK_110856a28;
    _objc_retain(param_2);
    uStack_38 = param_2;
    func_0x0001006372a4(uVar4,&puStack_58);
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = uVar4;
    _objc_release(uVar3);
    uVar4 = uStack_38;
  }
  else {
    *(undefined **)(lVar2 + 0x28) = PTR____NSArray0__struct_11034ab48;
  }
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a32820; end: 106a3283f;  */

uint FUN_106a32820(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0720c0(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 106a32840; end: 106a32843;  */

void FUN_106a32840(void)

{
  return;
}


