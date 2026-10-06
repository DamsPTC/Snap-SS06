/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e4187c; end: 106e41883; -[SCFeatureSettingsService notification_topic_chats_i_follow_enabled_client_value:] */

undefined * FUN_106e4187c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e41884; end: 106e4188b; -[SCFeatureSettingsService notification_topic_chats_i_follow_enabled_server_value:] */

void FUN_106e41884(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106e4188c; end: 106e4189b; -[SCFeatureSettingsService topicChatsIFollowEnabled] */

void FUN_106e4188c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e882b8,1);
  return;
}



/* Entry: 106e4189c; end: 106e418a7; -[SCFeatureSettingsService isSuggestedTopicChatsEnabledAvailable] */

void FUN_106e4189c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e882d8);
  return;
}



/* Entry: 106e418a8; end: 106e418b3; -[SCFeatureSettingsService suggestedTopicChatsEnabledServerParam] */

undefined ** FUN_106e418a8(void)

{
  return &PTR____CFConstantStringClassReference_110e882d8;
}



/* Entry: 106e418b4; end: 106e418c3; -[SCFeatureSettingsService setSuggestedTopicChatsEnabled:] */

void FUN_106e418b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e882d8,param_3);
  return;
}



/* Entry: 106e418c4; end: 106e418cb; -[SCFeatureSettingsService notification_suggested_topic_chats_enabled_client_value:] */

undefined * FUN_106e418c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e418cc; end: 106e418d3; -[SCFeatureSettingsService notification_suggested_topic_chats_enabled_server_value:] */

void FUN_106e418cc(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106e418d4; end: 106e418e3; -[SCFeatureSettingsService suggestedTopicChatsEnabled] */

void FUN_106e418d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e882d8,1);
  return;
}



/* Entry: 106e418e4; end: 106e418ef; -[SCFeatureSettingsService isFamilyCenterUpdatesEnabledAvailable] */

void FUN_106e418e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e882f8);
  return;
}



/* Entry: 106e418f0; end: 106e418fb; -[SCFeatureSettingsService familyCenterUpdatesEnabledServerParam] */

undefined ** FUN_106e418f0(void)

{
  return &PTR____CFConstantStringClassReference_110e882f8;
}



/* Entry: 106e418fc; end: 106e4190b; -[SCFeatureSettingsService setFamilyCenterUpdatesEnabled:] */

void FUN_106e418fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e882f8,param_3);
  return;
}



/* Entry: 106e4190c; end: 106e41913; -[SCFeatureSettingsService family_center_proactive_notifications_client_value:] */

undefined * FUN_106e4190c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e41914; end: 106e4191b; -[SCFeatureSettingsService family_center_proactive_notifications_server_value:] */

void FUN_106e41914(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106e4191c; end: 106e4192b; -[SCFeatureSettingsService familyCenterUpdatesEnabled] */

void FUN_106e4191c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e882f8,1);
  return;
}



/* Entry: 106e4192c; end: 106e41937; -[SCFeatureSettingsService isNotificationGameActivityAvailable] */

void FUN_106e4192c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e88318);
  return;
}



/* Entry: 106e41938; end: 106e41943; -[SCFeatureSettingsService notificationGameActivityServerParam] */

undefined ** FUN_106e41938(void)

{
  return &PTR____CFConstantStringClassReference_110e88318;
}



/* Entry: 106e41944; end: 106e41953; -[SCFeatureSettingsService setNotificationGameActivity:] */

void FUN_106e41944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e88318,param_3);
  return;
}



/* Entry: 106e41954; end: 106e4195b; -[SCFeatureSettingsService notification_game_activity_client_value:] */

undefined * FUN_106e41954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e4195c; end: 106e41963; -[SCFeatureSettingsService notification_game_activity_server_value:] */

void FUN_106e4195c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106e41964; end: 106e41973; -[SCFeatureSettingsService notificationGameActivity] */

void FUN_106e41964(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e88318,1);
  return;
}



/* Entry: 106e41974; end: 106e419e7; -[SCNotificationSettingsLogger initWithUserTrackedLogger:] */

undefined1 * FUN_106e41974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7290;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e419e8; end: 106e41bc7; -[SCNotificationSettingsLogger logNotificationsSettingPanelExit:] */

void FUN_106e419e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d2c90;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c0e1f40(param_3);
  func_0x00010c1d0ec0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0d9340(param_3);
  func_0x00010c1cce00(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0e1f60(param_3);
  func_0x00010c1d0f40(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0d9360(param_3);
  func_0x00010c1cce80(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0e1fc0(param_3);
  func_0x00010c1d0fc0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0d93c0(param_3);
  func_0x00010c1ccf00(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0e1f80(param_3);
  func_0x00010c1d0f60(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0d9380(param_3);
  func_0x00010c1ccea0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0e1fe0(param_3);
  func_0x00010c1d10c0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0d93e0(param_3);
  func_0x00010c1cd000(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0e1f00(param_3);
  func_0x00010c1d0de0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0d9300(param_3);
  func_0x00010c1ccd20(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0e1ee0(param_3);
  func_0x00010c1d0d60(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0d92e0(param_3);
  func_0x00010c1ccca0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0e20c0(param_3);
  func_0x00010c1d1340(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0d94c0(param_3);
  func_0x00010c1cd280(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0e1fa0(param_3);
  func_0x00010c1d0fa0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0d93a0(param_3);
  _objc_release(param_3);
  func_0x00010c1ccee0(puVar1,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e41bc8; end: 106e41c9f; -[SCNotificationSettingsLogger logPageView:] */

void FUN_106e41bc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d2c98;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c247520(param_3);
  func_0x00010c206c40(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0dcb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ce740(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0dc140(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1ce180(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e41ca0; end: 106e41cab; -[SCNotificationSettingsLogger .cxx_destruct] */

void FUN_106e41ca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e41cac; end: 106e41cb7; -[SCLegacyNotificationSettingsServices .cxx_destruct] */

void FUN_106e41cac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e41cb8; end: 106e41d73;  */

void FUN_106e41cb8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c0b80(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106e41d74; end: 106e41d7b;  */

void FUN_106e41d74(void)

{
  return;
}



/* Entry: 106e41d7c; end: 106e41dc3;  */

void FUN_106e41d7c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d5c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e41dc4; end: 106e41dc7;  */

void FUN_106e41dc4(void)

{
  return;
}



/* Entry: 106e41dc8; end: 106e41dd7; -[SCNotificationSettingsWorkflow stopSubscribingToNotificationEvents] */

void FUN_106e41dc8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e41dd8; end: 106e41f1b; -[SCNotificationSettingsWorkflow _openSettingsForNotification:] */

void FUN_106e41dd8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_3 == 0) {
    puVar4 = PTR_PTR_1126ce118;
    _objc_alloc(PTR_PTR_1126ce118);
    func_0x00010c0302e0();
  }
  else {
    func_0x00010c134680(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(param_3);
    puVar4 = PTR_PTR_1126ce118;
    _objc_alloc(PTR_PTR_1126ce118);
    lVar1 = lVar2;
    func_0x00010c0e00e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110dad058);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e00e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110e12538);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0302e0(puVar4,param_2,lVar1,lVar3,2);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238bc0();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106e41f1c; end: 106e41f57; -[SCNotificationSettingsWorkflow .cxx_destruct] */

void FUN_106e41f1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e41f58; end: 106e42617;  */

void FUN_106e41f58(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e88338;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e88338,
                      &PTR____CFConstantStringClassReference_110e88358,0);
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



/* Entry: 106e42618; end: 106e42767; -[SCNotificationsSettingLogParameters initWithOldValueFriendSuggestions:newValueFriendSuggestions:oldValueFriendTags:newValueFriendTags:oldValueMemories:newValueMemories:oldValueDreamsSuggestions:newValueDreamsSuggestions:oldValueFriendsBirthday:newValueFriendsBirthday:oldValueMessageReminders:newValueMessageReminders:oldValueCreativeTools:newValueCreativeTools:oldValueBestFriendsSounds:newValueBestFriendsSounds:oldValueTrendingPublicContent:newValueTrendingPublicContent:oldValueSpotlightReplies:newValueSpotlightReplies:oldValueNotificationPMFWidgetDisabled:newValueNotificationPMFWidgetDisabled:oldValueNotificationSubmittedStory:newValueNotificationSubmittedStory:oldValueSmsTransactional:newValueSmsTransactional:oldValueSmsPromotional:newValueSmsPromotional:oldValueNotificationGroupCommunities:newValueNotificationsGroupCommunities:oldValueMapNotifications:newValueMapNotifications:] */

void FUN_106e42618(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                  undefined4 param_13,undefined4 param_14,undefined4 param_15)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f72a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined1 *)((long)puVar1 + 0xb) = param_6;
    *(undefined1 *)((long)puVar1 + 0xc) = param_7;
    *(undefined1 *)((long)puVar1 + 0xd) = param_8;
    *(undefined1 *)((long)puVar1 + 0xe) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0xf) = param_9._1_1_;
    *(undefined1 *)((long)puVar1 + 0x10) = param_9._2_1_;
    *(undefined1 *)((long)puVar1 + 0x11) = param_9._3_1_;
    *(undefined1 *)((long)puVar1 + 0x12) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 0x13) = param_10._1_1_;
    *(undefined1 *)((long)puVar1 + 0x14) = param_10._2_1_;
    *(undefined1 *)((long)puVar1 + 0x15) = param_10._3_1_;
    *(undefined1 *)((long)puVar1 + 0x16) = (undefined1)param_11;
    *(undefined1 *)((long)puVar1 + 0x17) = param_11._1_1_;
    *(undefined1 *)((long)puVar1 + 0x18) = param_11._2_1_;
    *(undefined1 *)((long)puVar1 + 0x19) = param_11._3_1_;
    *(undefined1 *)((long)puVar1 + 0x1a) = (undefined1)param_12;
    *(undefined1 *)((long)puVar1 + 0x1b) = param_12._1_1_;
    *(undefined1 *)((long)puVar1 + 0x1c) = param_12._2_1_;
    *(undefined1 *)((long)puVar1 + 0x1d) = param_12._3_1_;
    *(undefined1 *)((long)puVar1 + 0x1e) = (undefined1)param_13;
    *(undefined1 *)((long)puVar1 + 0x1f) = param_13._1_1_;
    *(undefined1 *)((long)puVar1 + 0x20) = param_13._2_1_;
    *(undefined1 *)((long)puVar1 + 0x21) = param_13._3_1_;
    *(undefined1 *)((long)puVar1 + 0x22) = (undefined1)param_14;
    *(undefined1 *)((long)puVar1 + 0x23) = param_14._1_1_;
    *(undefined1 *)((long)puVar1 + 0x24) = param_14._2_1_;
    *(undefined1 *)((long)puVar1 + 0x25) = param_14._3_1_;
    *(undefined1 *)((long)puVar1 + 0x26) = (undefined1)param_15;
    *(undefined1 *)((long)puVar1 + 0x27) = param_15._1_1_;
  }
  return;
}



/* Entry: 106e42768; end: 106e4278b; -[SCNotificationsSettingLogParameters copyWithZone:] */

undefined8 FUN_106e42768(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e4278c; end: 106e42927; -[SCNotificationsSettingLogParameters hash] */

ulong * FUN_106e4278c(long param_1,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  ulong uVar9;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined4 *)(param_1 + 8);
  uVar8 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar8);
  uVar9 = CONCAT44((int)(uVar8 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar9 = CONCAT26((short)(uVar9 >> 0x30),CONCAT24((short)(uVar8 >> 0x20),(int)uVar9)) &
          0xff01ff01ffffffff;
  uVar5 = (ushort)(uVar9 >> 0x30);
  uStack_128 = (ulong)uVar1 & 0xff;
  uStack_120 = uVar9 >> 0x10 & 0xff;
  uStack_118 = (ulong)CONCAT24(uVar5,(uint)(ushort)(uVar9 >> 0x20)) & 0xffffffff;
  uStack_110 = (ulong)uVar5;
  uVar7 = *(undefined4 *)(param_1 + 0xc);
  uVar9 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar9);
  uVar8 = CONCAT44((int)(uVar9 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar9 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar9 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar5 = (ushort)(uVar9 >> 0x30);
  uStack_108 = (ulong)uVar1 & 0xff;
  uStack_100 = uVar9 >> 0x10 & 0xff;
  uStack_f8 = (ulong)CONCAT24(uVar5,(uint)(ushort)(uVar9 >> 0x20)) & 0xffffffff;
  uStack_f0 = (ulong)uVar5;
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  uVar9 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar8 = CONCAT44((int)(uVar9 >> 0x20),(uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar9)) &
          0xffffffffff01ffff;
  uVar7 = (undefined4)uVar8;
  uVar9 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar9 >> 0x20),uVar7)) &
          0xff01ff01ffffffff;
  uVar5 = (ushort)(uVar9 >> 0x10);
  uVar6 = (ushort)(uVar9 >> 0x30);
  uStack_e8 = (ulong)(CONCAT24(uVar5,uVar7) & 0xffff0000ffff) & 0xffffffff;
  uStack_e0 = (ulong)uVar5;
  uStack_d8 = (ulong)CONCAT24(uVar6,(uint)(ushort)(uVar9 >> 0x20)) & 0xffffffff;
  uStack_d0 = (ulong)uVar6;
  uVar7 = *(undefined4 *)(param_1 + 0x14);
  uVar8 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar9 = CONCAT44((int)(uVar8 >> 0x20),(uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar8)) &
          0xffffffffff01ffff;
  uVar7 = (undefined4)uVar9;
  uVar9 = CONCAT26((short)(uVar9 >> 0x30),CONCAT24((short)(uVar8 >> 0x20),uVar7)) &
          0xff01ff01ffffffff;
  uVar5 = (ushort)(uVar9 >> 0x10);
  uVar6 = (ushort)(uVar9 >> 0x30);
  uStack_c8 = (ulong)(CONCAT24(uVar5,uVar7) & 0xffff0000ffff) & 0xffffffff;
  uStack_c0 = (ulong)uVar5;
  uStack_b8 = (ulong)CONCAT24(uVar6,(uint)(ushort)(uVar9 >> 0x20)) & 0xffffffff;
  uStack_b0 = (ulong)uVar6;
  uVar7 = *(undefined4 *)(param_1 + 0x18);
  uVar9 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar8 = CONCAT44((int)(uVar9 >> 0x20),(uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar9)) &
          0xffffffffff01ffff;
  uVar7 = (undefined4)uVar8;
  uVar9 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar9 >> 0x20),uVar7)) &
          0xff01ff01ffffffff;
  uVar5 = (ushort)(uVar9 >> 0x10);
  uVar6 = (ushort)(uVar9 >> 0x30);
  uStack_a8 = (ulong)(CONCAT24(uVar5,uVar7) & 0xffff0000ffff) & 0xffffffff;
  uStack_a0 = (ulong)uVar5;
  uStack_98 = (ulong)CONCAT24(uVar6,(uint)(ushort)(uVar9 >> 0x20)) & 0xffffffff;
  uStack_90 = (ulong)uVar6;
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  uVar9 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar8 = CONCAT44((int)(uVar9 >> 0x20),(uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar9)) &
          0xffffffffff01ffff;
  uVar7 = (undefined4)uVar8;
  uVar9 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar9 >> 0x20),uVar7)) &
          0xff01ff01ffffffff;
  uVar5 = (ushort)(uVar9 >> 0x10);
  uVar6 = (ushort)(uVar9 >> 0x30);
  uStack_88 = (ulong)(CONCAT24(uVar5,uVar7) & 0xffff0000ffff) & 0xffffffff;
  uStack_80 = (ulong)uVar5;
  uStack_78 = (ulong)CONCAT24(uVar6,(uint)(ushort)(uVar9 >> 0x20)) & 0xffffffff;
  uStack_70 = (ulong)uVar6;
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  uVar9 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar8 = CONCAT44((int)(uVar9 >> 0x20),(uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar9)) &
          0xffffffffff01ffff;
  uVar7 = (undefined4)uVar8;
  uVar9 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar9 >> 0x20),uVar7)) &
          0xff01ff01ffffffff;
  uVar5 = (ushort)(uVar9 >> 0x10);
  uVar6 = (ushort)(uVar9 >> 0x30);
  uStack_68 = (ulong)(CONCAT24(uVar5,uVar7) & 0xffff0000ffff) & 0xffffffff;
  uStack_60 = (ulong)uVar5;
  uStack_58 = (ulong)CONCAT24(uVar6,(uint)(ushort)(uVar9 >> 0x20)) & 0xffffffff;
  uStack_50 = (ulong)uVar6;
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  uVar9 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar8 = CONCAT44((int)(uVar9 >> 0x20),(uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar9)) &
          0xffffffffff01ffff;
  uVar7 = (undefined4)uVar8;
  uStack_30 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar9 >> 0x20),uVar7)) &
              0xff01ff01ffffffff;
  uVar5 = (ushort)(uStack_30 >> 0x10);
  uStack_38 = uStack_30 >> 0x20 & 0xffff;
  uStack_48 = (ulong)(CONCAT24(uVar5,uVar7) & 0xffff0000ffff) & 0xffffffff;
  uStack_40 = (ulong)uVar5;
  uStack_30 = uStack_30 >> 0x30;
  puVar2 = &uStack_128;
  func_0x000100505190(puVar2,0x20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    puVar4 = (ulong *)0x1;
  }
  else {
    puVar4 = (ulong *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar4 = puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((((ulong)puVar3 & 1) == 0) ||
           ((((char)puVar2[1] != (char)param_3[1] ||
             (*(char *)((long)puVar2 + 9) != *(char *)((long)param_3 + 9))) ||
            (*(char *)((long)puVar2 + 10) != *(char *)((long)param_3 + 10))))) ||
          (((*(char *)((long)puVar2 + 0xb) != *(char *)((long)param_3 + 0xb) ||
            (*(char *)((long)puVar2 + 0xc) != *(char *)((long)param_3 + 0xc))) ||
           (*(char *)((long)puVar2 + 0xd) != *(char *)((long)param_3 + 0xd))))) ||
         ((((*(char *)((long)puVar2 + 0xe) != *(char *)((long)param_3 + 0xe) ||
            (*(char *)((long)puVar2 + 0xf) != *(char *)((long)param_3 + 0xf))) ||
           (((char)puVar2[2] != (char)param_3[2] ||
            (((*(char *)((long)puVar2 + 0x11) != *(char *)((long)param_3 + 0x11) ||
              (*(char *)((long)puVar2 + 0x12) != *(char *)((long)param_3 + 0x12))) ||
             (*(char *)((long)puVar2 + 0x13) != *(char *)((long)param_3 + 0x13))))))) ||
          (((*(char *)((long)puVar2 + 0x14) != *(char *)((long)param_3 + 0x14) ||
            (*(char *)((long)puVar2 + 0x15) != *(char *)((long)param_3 + 0x15))) ||
           ((((*(char *)((long)puVar2 + 0x16) != *(char *)((long)param_3 + 0x16) ||
              (((*(char *)((long)puVar2 + 0x17) != *(char *)((long)param_3 + 0x17) ||
                ((char)puVar2[3] != (char)param_3[3])) ||
               ((*(char *)((long)puVar2 + 0x19) != *(char *)((long)param_3 + 0x19) ||
                ((((*(char *)((long)puVar2 + 0x1a) != *(char *)((long)param_3 + 0x1a) ||
                   (*(char *)((long)puVar2 + 0x1b) != *(char *)((long)param_3 + 0x1b))) ||
                  (*(char *)((long)puVar2 + 0x1c) != *(char *)((long)param_3 + 0x1c))) ||
                 ((*(char *)((long)puVar2 + 0x1d) != *(char *)((long)param_3 + 0x1d) ||
                  (*(char *)((long)puVar2 + 0x1e) != *(char *)((long)param_3 + 0x1e))))))))))) ||
             (*(char *)((long)puVar2 + 0x1f) != *(char *)((long)param_3 + 0x1f))) ||
            ((((char)puVar2[4] != (char)param_3[4] ||
              (*(char *)((long)puVar2 + 0x21) != *(char *)((long)param_3 + 0x21))) ||
             (((*(char *)((long)puVar2 + 0x22) != *(char *)((long)param_3 + 0x22) ||
               (((*(char *)((long)puVar2 + 0x23) != *(char *)((long)param_3 + 0x23) ||
                 (*(char *)((long)puVar2 + 0x24) != *(char *)((long)param_3 + 0x24))) ||
                (*(char *)((long)puVar2 + 0x25) != *(char *)((long)param_3 + 0x25))))) ||
              (*(char *)((long)puVar2 + 0x26) != *(char *)((long)param_3 + 0x26))))))))))))) {
        puVar4 = (ulong *)0x0;
      }
      else {
        puVar4 = (ulong *)(ulong)(*(char *)((long)puVar2 + 0x27) == *(char *)((long)param_3 + 0x27))
        ;
      }
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 106e42928; end: 106e42b9f; -[SCNotificationsSettingLogParameters isEqual:] */

bool FUN_106e42928(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((((uVar3 & 1) == 0) ||
           (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
             (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
            (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) ||
          (((*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb) ||
            (*(char *)(param_1 + 0xc) != *(char *)(param_3 + 0xc))) ||
           (*(char *)(param_1 + 0xd) != *(char *)(param_3 + 0xd))))) ||
         ((((*(char *)(param_1 + 0xe) != *(char *)(param_3 + 0xe) ||
            (*(char *)(param_1 + 0xf) != *(char *)(param_3 + 0xf))) ||
           ((*(char *)(param_1 + 0x10) != *(char *)(param_3 + 0x10) ||
            (((*(char *)(param_1 + 0x11) != *(char *)(param_3 + 0x11) ||
              (*(char *)(param_1 + 0x12) != *(char *)(param_3 + 0x12))) ||
             (*(char *)(param_1 + 0x13) != *(char *)(param_3 + 0x13))))))) ||
          (((*(char *)(param_1 + 0x14) != *(char *)(param_3 + 0x14) ||
            (*(char *)(param_1 + 0x15) != *(char *)(param_3 + 0x15))) ||
           ((((*(char *)(param_1 + 0x16) != *(char *)(param_3 + 0x16) ||
              (((*(char *)(param_1 + 0x17) != *(char *)(param_3 + 0x17) ||
                (*(char *)(param_1 + 0x18) != *(char *)(param_3 + 0x18))) ||
               ((*(char *)(param_1 + 0x19) != *(char *)(param_3 + 0x19) ||
                ((((*(char *)(param_1 + 0x1a) != *(char *)(param_3 + 0x1a) ||
                   (*(char *)(param_1 + 0x1b) != *(char *)(param_3 + 0x1b))) ||
                  (*(char *)(param_1 + 0x1c) != *(char *)(param_3 + 0x1c))) ||
                 ((*(char *)(param_1 + 0x1d) != *(char *)(param_3 + 0x1d) ||
                  (*(char *)(param_1 + 0x1e) != *(char *)(param_3 + 0x1e))))))))))) ||
             (*(char *)(param_1 + 0x1f) != *(char *)(param_3 + 0x1f))) ||
            (((*(char *)(param_1 + 0x20) != *(char *)(param_3 + 0x20) ||
              (*(char *)(param_1 + 0x21) != *(char *)(param_3 + 0x21))) ||
             (((*(char *)(param_1 + 0x22) != *(char *)(param_3 + 0x22) ||
               (((*(char *)(param_1 + 0x23) != *(char *)(param_3 + 0x23) ||
                 (*(char *)(param_1 + 0x24) != *(char *)(param_3 + 0x24))) ||
                (*(char *)(param_1 + 0x25) != *(char *)(param_3 + 0x25))))) ||
              (*(char *)(param_1 + 0x26) != *(char *)(param_3 + 0x26))))))))))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0x27) == *(char *)(param_3 + 0x27);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106e42ba0; end: 106e42ba7; -[SCNotificationsSettingLogParameters oldValueFriendSuggestions] */

undefined1 FUN_106e42ba0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e42ba8; end: 106e42baf; -[SCNotificationsSettingLogParameters newValueFriendSuggestions] */

undefined1 FUN_106e42ba8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106e42bb0; end: 106e42bb7; -[SCNotificationsSettingLogParameters oldValueFriendTags] */

undefined1 FUN_106e42bb0(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106e42bb8; end: 106e42bbf; -[SCNotificationsSettingLogParameters newValueFriendTags] */

undefined1 FUN_106e42bb8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 106e42bc0; end: 106e42bc7; -[SCNotificationsSettingLogParameters oldValueMemories] */

undefined1 FUN_106e42bc0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 106e42bc8; end: 106e42bcf; -[SCNotificationsSettingLogParameters newValueMemories] */

undefined1 FUN_106e42bc8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 106e42bd0; end: 106e42bd7; -[SCNotificationsSettingLogParameters oldValueDreamsSuggestions] */

undefined1 FUN_106e42bd0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 106e42bd8; end: 106e42bdf; -[SCNotificationsSettingLogParameters newValueDreamsSuggestions] */

undefined1 FUN_106e42bd8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 106e42be0; end: 106e42be7; -[SCNotificationsSettingLogParameters oldValueFriendsBirthday] */

undefined1 FUN_106e42be0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 106e42be8; end: 106e42bef; -[SCNotificationsSettingLogParameters newValueFriendsBirthday] */

undefined1 FUN_106e42be8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 106e42bf0; end: 106e42bf7; -[SCNotificationsSettingLogParameters oldValueMessageReminders] */

undefined1 FUN_106e42bf0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 106e42bf8; end: 106e42bff; -[SCNotificationsSettingLogParameters newValueMessageReminders] */

undefined1 FUN_106e42bf8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 106e42c00; end: 106e42c07; -[SCNotificationsSettingLogParameters oldValueCreativeTools] */

undefined1 FUN_106e42c00(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 106e42c08; end: 106e42c0f; -[SCNotificationsSettingLogParameters newValueCreativeTools] */

undefined1 FUN_106e42c08(long param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* Entry: 106e42c10; end: 106e42c17; -[SCNotificationsSettingLogParameters oldValueBestFriendsSounds] */

undefined1 FUN_106e42c10(long param_1)

{
  return *(undefined1 *)(param_1 + 0x16);
}



/* Entry: 106e42c18; end: 106e42c1f; -[SCNotificationsSettingLogParameters newValueBestFriendsSounds] */

undefined1 FUN_106e42c18(long param_1)

{
  return *(undefined1 *)(param_1 + 0x17);
}



/* Entry: 106e42c20; end: 106e42c27; -[SCNotificationsSettingLogParameters oldValueTrendingPublicContent] */

undefined1 FUN_106e42c20(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 106e42c28; end: 106e42c2f; -[SCNotificationsSettingLogParameters newValueTrendingPublicContent] */

undefined1 FUN_106e42c28(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 106e42c30; end: 106e42c37; -[SCNotificationsSettingLogParameters oldValueSpotlightReplies] */

undefined1 FUN_106e42c30(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a);
}



/* Entry: 106e42c38; end: 106e42c3f; -[SCNotificationsSettingLogParameters newValueSpotlightReplies] */

undefined1 FUN_106e42c38(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1b);
}



/* Entry: 106e42c40; end: 106e42c47; -[SCNotificationsSettingLogParameters oldValueNotificationPMFWidgetDisabled] */

undefined1 FUN_106e42c40(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1c);
}



/* Entry: 106e42c48; end: 106e42c4f; -[SCNotificationsSettingLogParameters newValueNotificationPMFWidgetDisabled] */

undefined1 FUN_106e42c48(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1d);
}



/* Entry: 106e42c50; end: 106e42c57; -[SCNotificationsSettingLogParameters oldValueNotificationSubmittedStory] */

undefined1 FUN_106e42c50(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1e);
}



/* Entry: 106e42c58; end: 106e42c5f; -[SCNotificationsSettingLogParameters newValueNotificationSubmittedStory] */

undefined1 FUN_106e42c58(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1f);
}



/* Entry: 106e42c60; end: 106e42c67; -[SCNotificationsSettingLogParameters oldValueSmsTransactional] */

undefined1 FUN_106e42c60(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 106e42c68; end: 106e42c6f; -[SCNotificationsSettingLogParameters newValueSmsTransactional] */

undefined1 FUN_106e42c68(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 106e42c70; end: 106e42c77; -[SCNotificationsSettingLogParameters oldValueSmsPromotional] */

undefined1 FUN_106e42c70(long param_1)

{
  return *(undefined1 *)(param_1 + 0x22);
}



/* Entry: 106e42c78; end: 106e42c7f; -[SCNotificationsSettingLogParameters newValueSmsPromotional] */

undefined1 FUN_106e42c78(long param_1)

{
  return *(undefined1 *)(param_1 + 0x23);
}



/* Entry: 106e42c80; end: 106e42c87; -[SCNotificationsSettingLogParameters oldValueNotificationGroupCommunities] */

undefined1 FUN_106e42c80(long param_1)

{
  return *(undefined1 *)(param_1 + 0x24);
}



/* Entry: 106e42c88; end: 106e42c8f; -[SCNotificationsSettingLogParameters newValueNotificationsGroupCommunities] */

undefined1 FUN_106e42c88(long param_1)

{
  return *(undefined1 *)(param_1 + 0x25);
}



/* Entry: 106e42c90; end: 106e42c97; -[SCNotificationsSettingLogParameters oldValueMapNotifications] */

undefined1 FUN_106e42c90(long param_1)

{
  return *(undefined1 *)(param_1 + 0x26);
}



/* Entry: 106e42c98; end: 106e42c9f; -[SCNotificationsSettingLogParameters newValueMapNotifications] */

undefined1 FUN_106e42c98(long param_1)

{
  return *(undefined1 *)(param_1 + 0x27);
}



/* Entry: 106e42ca0; end: 106e42cbb; +[SCNotificationsSettingLogParametersBuilder notificationsSettingLogParameters] */

void FUN_106e42ca0(void)

{
  _objc_alloc_init(PTR_PTR_1126ce0f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e42cbc; end: 106e43293; +[SCNotificationsSettingLogParametersBuilder notificationsSettingLogParametersFromExistingNotificationsSettingLogParameters:] */

void FUN_106e42cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  
  puVar1 = PTR_PTR_1126ce0f8;
  _objc_retain(param_3);
  func_0x00010c0dcd00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e1f40(param_3);
  puVar3 = puVar1;
  func_0x00010c2b4c20(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0d9340(param_3);
  puVar4 = puVar3;
  func_0x00010c2b46c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e1f60(param_3);
  puVar5 = puVar4;
  func_0x00010c2b4c40(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0d9360(param_3);
  puVar6 = puVar5;
  func_0x00010c2b46e0(puVar5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e1fc0(param_3);
  puVar7 = puVar6;
  func_0x00010c2b4ca0(puVar6,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0d93c0(param_3);
  puVar8 = puVar7;
  func_0x00010c2b4740(puVar7,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e1f20(param_3);
  puVar9 = puVar8;
  func_0x00010c2b4c00(puVar8,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0d9320(param_3);
  puVar10 = puVar9;
  func_0x00010c2b46a0(puVar9,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e1f80(param_3);
  puVar11 = puVar10;
  func_0x00010c2b4c60(puVar10,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0d9380(param_3);
  puVar12 = puVar11;
  func_0x00010c2b4700(puVar11,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e1fe0(param_3);
  puVar13 = puVar12;
  func_0x00010c2b4cc0(puVar12,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0d93e0(param_3);
  puVar14 = puVar13;
  func_0x00010c2b4760(puVar13,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e1f00(param_3);
  puVar15 = puVar14;
  func_0x00010c2b4be0(puVar14,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0d9300(param_3);
  puVar16 = puVar15;
  func_0x00010c2b4680(puVar15,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e1ee0(param_3);
  puVar17 = puVar16;
  func_0x00010c2b4bc0(puVar16,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0d92e0(param_3);
  puVar18 = puVar17;
  func_0x00010c2b4660(puVar17,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e20c0(param_3);
  puVar19 = puVar18;
  func_0x00010c2b4da0(puVar18,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0d94c0(param_3);
  puVar20 = puVar19;
  func_0x00010c2b4840(puVar19,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e20a0(param_3);
  puVar21 = puVar20;
  func_0x00010c2b4d80(puVar20,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0d94a0(param_3);
  puVar22 = puVar21;
  func_0x00010c2b4820(puVar21,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e2020(param_3);
  puVar23 = puVar22;
  func_0x00010c2b4d00(puVar22,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0d9400(param_3);
  puVar24 = puVar23;
  func_0x00010c2b4780(puVar23,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e2040(param_3);
  puVar25 = puVar24;
  func_0x00010c2b4d20(puVar24,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0d9420(param_3);
  puVar26 = puVar25;
  func_0x00010c2b47a0(puVar25,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e2080(param_3);
  puVar27 = puVar26;
  func_0x00010c2b4d60(puVar26,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0d9480(param_3);
  puVar28 = puVar27;
  func_0x00010c2b4800(puVar27,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e2060(param_3);
  puVar29 = puVar28;
  func_0x00010c2b4d40(puVar28,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0d9460(param_3);
  puVar30 = puVar29;
  func_0x00010c2b47e0(puVar29,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e2000(param_3);
  puVar31 = puVar30;
  func_0x00010c2b4ce0(puVar30,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0d9440(param_3);
  puVar32 = puVar31;
  func_0x00010c2b47c0(puVar31,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e1fa0(param_3);
  puVar33 = puVar32;
  func_0x00010c2b4c80(puVar32,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0d93a0(param_3);
  _objc_release(param_3);
  puVar34 = puVar33;
  func_0x00010c2b4720(puVar33,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar34);
  return;
}



/* Entry: 106e43294; end: 106e432f7; -[SCNotificationsSettingLogParametersBuilder build] */

void FUN_106e43294(void)

{
  _objc_alloc(PTR_PTR_1126d2ca0);
  func_0x00010c0310e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e432f8; end: 106e432ff; -[SCNotificationsSettingLogParametersBuilder withOldValueFriendSuggestions:] */

void FUN_106e432f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106e43300; end: 106e43307; -[SCNotificationsSettingLogParametersBuilder withNewValueFriendSuggestions:] */

void FUN_106e43300(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 106e43308; end: 106e4330f; -[SCNotificationsSettingLogParametersBuilder withOldValueFriendTags:] */

void FUN_106e43308(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 106e43310; end: 106e43317; -[SCNotificationsSettingLogParametersBuilder withNewValueFriendTags:] */

void FUN_106e43310(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 106e43318; end: 106e4331f; -[SCNotificationsSettingLogParametersBuilder withOldValueMemories:] */

void FUN_106e43318(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 106e43320; end: 106e43327; -[SCNotificationsSettingLogParametersBuilder withNewValueMemories:] */

void FUN_106e43320(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return;
}



/* Entry: 106e43328; end: 106e4332f; -[SCNotificationsSettingLogParametersBuilder withOldValueDreamsSuggestions:] */

void FUN_106e43328(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xe) = param_3;
  return;
}



/* Entry: 106e43330; end: 106e43337; -[SCNotificationsSettingLogParametersBuilder withNewValueDreamsSuggestions:] */

void FUN_106e43330(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xf) = param_3;
  return;
}



/* Entry: 106e43338; end: 106e4333f; -[SCNotificationsSettingLogParametersBuilder withOldValueFriendsBirthday:] */

void FUN_106e43338(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 106e43340; end: 106e43347; -[SCNotificationsSettingLogParametersBuilder withNewValueFriendsBirthday:] */

void FUN_106e43340(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 106e43348; end: 106e4334f; -[SCNotificationsSettingLogParametersBuilder withOldValueMessageReminders:] */

void FUN_106e43348(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x12) = param_3;
  return;
}



/* Entry: 106e43350; end: 106e43357; -[SCNotificationsSettingLogParametersBuilder withNewValueMessageReminders:] */

void FUN_106e43350(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x13) = param_3;
  return;
}



/* Entry: 106e43358; end: 106e4335f; -[SCNotificationsSettingLogParametersBuilder withOldValueCreativeTools:] */

void FUN_106e43358(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x14) = param_3;
  return;
}



/* Entry: 106e43360; end: 106e43367; -[SCNotificationsSettingLogParametersBuilder withNewValueCreativeTools:] */

void FUN_106e43360(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x15) = param_3;
  return;
}



/* Entry: 106e43368; end: 106e4336f; -[SCNotificationsSettingLogParametersBuilder withOldValueBestFriendsSounds:] */

void FUN_106e43368(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x16) = param_3;
  return;
}



/* Entry: 106e43370; end: 106e43377; -[SCNotificationsSettingLogParametersBuilder withNewValueBestFriendsSounds:] */

void FUN_106e43370(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x17) = param_3;
  return;
}



/* Entry: 106e43378; end: 106e4337f; -[SCNotificationsSettingLogParametersBuilder withOldValueTrendingPublicContent:] */

void FUN_106e43378(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 106e43380; end: 106e43387; -[SCNotificationsSettingLogParametersBuilder withNewValueTrendingPublicContent:] */

void FUN_106e43380(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x19) = param_3;
  return;
}



/* Entry: 106e43388; end: 106e4338f; -[SCNotificationsSettingLogParametersBuilder withOldValueSpotlightReplies:] */

void FUN_106e43388(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1a) = param_3;
  return;
}



/* Entry: 106e43390; end: 106e43397; -[SCNotificationsSettingLogParametersBuilder withNewValueSpotlightReplies:] */

void FUN_106e43390(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1b) = param_3;
  return;
}



/* Entry: 106e43398; end: 106e4339f; -[SCNotificationsSettingLogParametersBuilder withOldValueNotificationPMFWidgetDisabled:] */

void FUN_106e43398(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1c) = param_3;
  return;
}



/* Entry: 106e433a0; end: 106e433a7; -[SCNotificationsSettingLogParametersBuilder withNewValueNotificationPMFWidgetDisabled:] */

void FUN_106e433a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1d) = param_3;
  return;
}



/* Entry: 106e433a8; end: 106e433af; -[SCNotificationsSettingLogParametersBuilder withOldValueNotificationSubmittedStory:] */

void FUN_106e433a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1e) = param_3;
  return;
}



/* Entry: 106e433b0; end: 106e433b7; -[SCNotificationsSettingLogParametersBuilder withNewValueNotificationSubmittedStory:] */

void FUN_106e433b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1f) = param_3;
  return;
}



/* Entry: 106e433b8; end: 106e433bf; -[SCNotificationsSettingLogParametersBuilder withOldValueSmsTransactional:] */

void FUN_106e433b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 106e433c0; end: 106e433c7; -[SCNotificationsSettingLogParametersBuilder withNewValueSmsTransactional:] */

void FUN_106e433c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x21) = param_3;
  return;
}



/* Entry: 106e433c8; end: 106e433cf; -[SCNotificationsSettingLogParametersBuilder withOldValueSmsPromotional:] */

void FUN_106e433c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x22) = param_3;
  return;
}


