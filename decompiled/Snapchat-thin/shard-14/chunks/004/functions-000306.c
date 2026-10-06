/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b256d54; end: 10b256d5b; -[SCFeatureSettingsService notification_friends_birthday_server_value:] */

void FUN_10b256d54(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b256d5c; end: 10b256d6b; -[SCFeatureSettingsService notificationFriendsBirthday] */

void FUN_10b256d5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f258,1);
  return;
}



/* Entry: 10b256d6c; end: 10b256d77; -[SCFeatureSettingsService isNotificationMessageReminderAvailable] */

void FUN_10b256d6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f278);
  return;
}



/* Entry: 10b256d78; end: 10b256d83; -[SCFeatureSettingsService notificationMessageReminderServerParam] */

undefined ** FUN_10b256d78(void)

{
  return &PTR____CFConstantStringClassReference_110f5f278;
}



/* Entry: 10b256d84; end: 10b256d93; -[SCFeatureSettingsService setNotificationMessageReminder:] */

void FUN_10b256d84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f278,param_3);
  return;
}



/* Entry: 10b256d94; end: 10b256d9b; -[SCFeatureSettingsService notification_message_reminder_client_value:] */

undefined * FUN_10b256d94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b256d9c; end: 10b256da3; -[SCFeatureSettingsService notification_message_reminder_server_value:] */

void FUN_10b256d9c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b256da4; end: 10b256db3; -[SCFeatureSettingsService notificationMessageReminder] */

void FUN_10b256da4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f278,1);
  return;
}



/* Entry: 10b256db4; end: 10b256dbf; -[SCFeatureSettingsService isNotificationCreativeToolsAvailable] */

void FUN_10b256db4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f298);
  return;
}



/* Entry: 10b256dc0; end: 10b256dcb; -[SCFeatureSettingsService notificationCreativeToolsServerParam] */

undefined ** FUN_10b256dc0(void)

{
  return &PTR____CFConstantStringClassReference_110f5f298;
}



/* Entry: 10b256dcc; end: 10b256ddb; -[SCFeatureSettingsService setNotificationCreativeTools:] */

void FUN_10b256dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f298,param_3);
  return;
}



/* Entry: 10b256ddc; end: 10b256de3; -[SCFeatureSettingsService notification_creative_tools_client_value:] */

undefined * FUN_10b256ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b256de4; end: 10b256deb; -[SCFeatureSettingsService notification_creative_tools_server_value:] */

void FUN_10b256de4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b256dec; end: 10b256dfb; -[SCFeatureSettingsService notificationCreativeTools] */

void FUN_10b256dec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f298,1);
  return;
}



/* Entry: 10b256dfc; end: 10b256e07; -[SCFeatureSettingsService isNotificationBestFriendsSoundsAvailable] */

void FUN_10b256dfc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f2b8);
  return;
}



/* Entry: 10b256e08; end: 10b256e13; -[SCFeatureSettingsService notificationBestFriendsSoundsServerParam] */

undefined ** FUN_10b256e08(void)

{
  return &PTR____CFConstantStringClassReference_110f5f2b8;
}



/* Entry: 10b256e14; end: 10b256e23; -[SCFeatureSettingsService setNotificationBestFriendsSounds:] */

void FUN_10b256e14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f2b8,param_3);
  return;
}



/* Entry: 10b256e24; end: 10b256e2b; -[SCFeatureSettingsService notification_best_friends_sounds_client_value:] */

undefined * FUN_10b256e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b256e2c; end: 10b256e33; -[SCFeatureSettingsService notification_best_friends_sounds_server_value:] */

void FUN_10b256e2c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b256e34; end: 10b256e43; -[SCFeatureSettingsService notificationBestFriendsSounds] */

void FUN_10b256e34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f2b8,1);
  return;
}



/* Entry: 10b256e44; end: 10b256e4f; -[SCFeatureSettingsService isNotificationPMFWidgetDisabledAvailable] */

void FUN_10b256e44(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f2d8);
  return;
}



/* Entry: 10b256e50; end: 10b256e5b; -[SCFeatureSettingsService notificationPMFWidgetDisabledServerParam] */

undefined ** FUN_10b256e50(void)

{
  return &PTR____CFConstantStringClassReference_110f5f2d8;
}



/* Entry: 10b256e5c; end: 10b256e6b; -[SCFeatureSettingsService setNotificationPMFWidgetDisabled:] */

void FUN_10b256e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f2d8,param_3);
  return;
}



/* Entry: 10b256e6c; end: 10b256e73; -[SCFeatureSettingsService notification_pmf_widget_disabled_client_value:] */

undefined * FUN_10b256e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b256e74; end: 10b256e7b; -[SCFeatureSettingsService notification_pmf_widget_disabled_server_value:] */

void FUN_10b256e74(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b256e7c; end: 10b256e8b; -[SCFeatureSettingsService notificationPMFWidgetDisabled] */

void FUN_10b256e7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f2d8,0);
  return;
}



/* Entry: 10b256e8c; end: 10b256e97; -[SCFeatureSettingsService isDefaultEmojiSkinToneAvailable] */

void FUN_10b256e8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f2f8);
  return;
}



/* Entry: 10b256e98; end: 10b256ea3; -[SCFeatureSettingsService defaultEmojiSkinToneServerParam] */

undefined ** FUN_10b256e98(void)

{
  return &PTR____CFConstantStringClassReference_110f5f2f8;
}



/* Entry: 10b256ea4; end: 10b256eb3; -[SCFeatureSettingsService setDefaultEmojiSkinTone:] */

void FUN_10b256ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110f5f2f8,param_3);
  return;
}



/* Entry: 10b256eb4; end: 10b256edb; -[SCFeatureSettingsService default_emoji_skin_tone_client_value:] */

void FUN_10b256eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b256edc; end: 10b256f03; -[SCFeatureSettingsService default_emoji_skin_tone_server_value:] */

void FUN_10b256edc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b256f04; end: 10b256f63; -[SCFeatureSettingsService defaultEmojiSkinTone] */

void FUN_10b256f04(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x133fa9f6;
  func_0x00010b7727b0(0x133fa9f6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec55c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f5f2f8,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b256f64; end: 10b256f6f; -[SCFeatureSettingsService getLastSnapSince1970InMinutes] */

void FUN_10b256f64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f318);
  return;
}



/* Entry: 10b256f70; end: 10b256f7b; -[SCFeatureSettingsService lastSnapSince1970InMinutesServerParam] */

undefined ** FUN_10b256f70(void)

{
  return &PTR____CFConstantStringClassReference_110f5f318;
}



/* Entry: 10b256f7c; end: 10b256f8b; -[SCFeatureSettingsService setLastSnapSince1970InMinutes:] */

void FUN_10b256f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110f5f318,param_3);
  return;
}



/* Entry: 10b256f8c; end: 10b256f93; -[SCFeatureSettingsService last_snap_since_1970_in_minutes_client_value:] */

void FUN_10b256f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10b256f94; end: 10b256f9b; -[SCFeatureSettingsService last_snap_since_1970_in_minutes_server_value:] */

void FUN_10b256f94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10b256f9c; end: 10b256fab; -[SCFeatureSettingsService lastSnapSince1970InMinutes] */

void FUN_10b256f9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110f5f318,0);
  return;
}



/* Entry: 10b256fac; end: 10b256fb7; -[SCFeatureSettingsService isRegisteredInBarracudaAvailable] */

void FUN_10b256fac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f338);
  return;
}



/* Entry: 10b256fb8; end: 10b256fc3; -[SCFeatureSettingsService registeredInBarracudaServerParam] */

undefined ** FUN_10b256fb8(void)

{
  return &PTR____CFConstantStringClassReference_110f5f338;
}



/* Entry: 10b256fc4; end: 10b256fd3; -[SCFeatureSettingsService setRegisteredInBarracuda:] */

void FUN_10b256fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f338,param_3);
  return;
}



/* Entry: 10b256fd4; end: 10b256fdb; -[SCFeatureSettingsService registered_in_barracuda_client_value:] */

undefined * FUN_10b256fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b256fdc; end: 10b256fe3; -[SCFeatureSettingsService registered_in_barracuda_server_value:] */

void FUN_10b256fdc(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b256fe4; end: 10b256ff3; -[SCFeatureSettingsService registeredInBarracuda] */

void FUN_10b256fe4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f338,0);
  return;
}



/* Entry: 10b256ff4; end: 10b256fff; -[SCFeatureSettingsService isTravelModeEnabledAvailable] */

void FUN_10b256ff4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f358);
  return;
}



/* Entry: 10b257000; end: 10b25700f; -[SCFeatureSettingsService setTravelModeEnabled:] */

void FUN_10b257000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f358,param_3);
  return;
}



/* Entry: 10b257010; end: 10b257017; -[SCFeatureSettingsService travel_mode_client_value:] */

undefined * FUN_10b257010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b257018; end: 10b25701f; -[SCFeatureSettingsService travel_mode_server_value:] */

void FUN_10b257018(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b257020; end: 10b25702b; -[SCFeatureSettingsService isDataSaverExpirationMillisAvailable] */

void FUN_10b257020(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f378);
  return;
}



/* Entry: 10b25702c; end: 10b25703b; -[SCFeatureSettingsService setDataSaverExpirationMillis:] */

void FUN_10b25702c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110f5f378,param_3);
  return;
}



/* Entry: 10b25703c; end: 10b257043; -[SCFeatureSettingsService data_saver_expiration_millis_client_value:] */

void FUN_10b25703c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10b257044; end: 10b25704b; -[SCFeatureSettingsService data_saver_expiration_millis_server_value:] */

void FUN_10b257044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10b25704c; end: 10b257057; -[SCFeatureSettingsService isLastDataSaverModeIntroPromptMillisAvailable] */

void FUN_10b25704c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f398);
  return;
}



/* Entry: 10b257058; end: 10b257063; -[SCFeatureSettingsService lastDataSaverModeIntroPromptMillisServerParam] */

undefined ** FUN_10b257058(void)

{
  return &PTR____CFConstantStringClassReference_110f5f398;
}



/* Entry: 10b257064; end: 10b257073; -[SCFeatureSettingsService setLastDataSaverModeIntroPromptMillis:] */

void FUN_10b257064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110f5f398,param_3);
  return;
}



/* Entry: 10b257074; end: 10b25707b; -[SCFeatureSettingsService last_data_saver_mode_intro_prompt_millis_client_value:] */

void FUN_10b257074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10b25707c; end: 10b257083; -[SCFeatureSettingsService last_data_saver_mode_intro_prompt_millis_server_value:] */

void FUN_10b25707c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10b257084; end: 10b257093; -[SCFeatureSettingsService lastDataSaverModeIntroPromptMillis] */

void FUN_10b257084(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110f5f398,0);
  return;
}



/* Entry: 10b257094; end: 10b25709f; -[SCFeatureSettingsService isCompletedDiscoverFeedShowsPageOnboardingAvailable] */

void FUN_10b257094(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f3b8);
  return;
}



/* Entry: 10b2570a0; end: 10b2570ab; -[SCFeatureSettingsService completedDiscoverFeedShowsPageOnboardingServerParam] */

undefined ** FUN_10b2570a0(void)

{
  return &PTR____CFConstantStringClassReference_110f5f3b8;
}



/* Entry: 10b2570ac; end: 10b2570bb; -[SCFeatureSettingsService setCompletedDiscoverFeedShowsPageOnboarding:] */

void FUN_10b2570ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f3b8,param_3);
  return;
}



/* Entry: 10b2570bc; end: 10b2570c3; -[SCFeatureSettingsService completed_discover_feed_shows_page_onboarding_client_value:] */

undefined * FUN_10b2570bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b2570c4; end: 10b2570cb; -[SCFeatureSettingsService completed_discover_feed_shows_page_onboarding_server_value:] */

void FUN_10b2570c4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b2570cc; end: 10b2570db; -[SCFeatureSettingsService completedDiscoverFeedShowsPageOnboarding] */

void FUN_10b2570cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f3b8,0);
  return;
}



/* Entry: 10b2570dc; end: 10b2570e7; -[SCFeatureSettingsService isDiscoverFeedManagementTooltipImpressionAvailable] */

void FUN_10b2570dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f3d8);
  return;
}



/* Entry: 10b2570e8; end: 10b2570f3; -[SCFeatureSettingsService discoverFeedManagementTooltipImpressionServerParam] */

undefined ** FUN_10b2570e8(void)

{
  return &PTR____CFConstantStringClassReference_110f5f3d8;
}



/* Entry: 10b2570f4; end: 10b257103; -[SCFeatureSettingsService setDiscoverFeedManagementTooltipImpression:] */

void FUN_10b2570f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110f5f3d8,param_3);
  return;
}



/* Entry: 10b257104; end: 10b25710b; -[SCFeatureSettingsService discover_feed_management_tooltip_impression_client_value:] */

void FUN_10b257104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10b25710c; end: 10b257113; -[SCFeatureSettingsService discover_feed_management_tooltip_impression_server_value:] */

void FUN_10b25710c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10b257114; end: 10b257123; -[SCFeatureSettingsService discoverFeedManagementTooltipImpression] */

void FUN_10b257114(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110f5f3d8,0);
  return;
}



/* Entry: 10b257124; end: 10b25712f; -[SCFeatureSettingsService isDiscoverFeedManagementTooltipLastSeenTimeAvailable] */

void FUN_10b257124(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f3f8);
  return;
}



/* Entry: 10b257130; end: 10b25713b; -[SCFeatureSettingsService discoverFeedManagementTooltipLastSeenTimeServerParam] */

undefined ** FUN_10b257130(void)

{
  return &PTR____CFConstantStringClassReference_110f5f3f8;
}



/* Entry: 10b25713c; end: 10b25714b; -[SCFeatureSettingsService setDiscoverFeedManagementTooltipLastSeenTime:] */

void FUN_10b25713c(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)param_3,param_1,PTR_s__setFeatureSetting_doubleValue__112586908,
             &PTR____CFConstantStringClassReference_110f5f3f8);
  return;
}



/* Entry: 10b25714c; end: 10b257153; -[SCFeatureSettingsService discover_feed_management_tooltip_last_seen_time_client_value:] */

void FUN_10b25714c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf885a0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithDouble__1126157e0);
  return;
}



/* Entry: 10b257154; end: 10b25715b; -[SCFeatureSettingsService discover_feed_management_tooltip_last_seen_time_server_value:] */

void FUN_10b257154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10b25715c; end: 10b25717f; -[SCFeatureSettingsService discoverFeedManagementTooltipLastSeenTime] */

long FUN_10b25715c(undefined8 param_1,undefined8 param_2)

{
  double dVar1;
  
  dVar1 = 0.0;
  func_0x00010be05bc0(0,param_1,param_2,&PTR____CFConstantStringClassReference_110f5f3f8);
  return (long)dVar1;
}



/* Entry: 10b257180; end: 10b25718b; -[SCFeatureSettingsService isHandsFreeEnabledCountAvailable] */

void FUN_10b257180(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f418);
  return;
}



/* Entry: 10b25718c; end: 10b257197; -[SCFeatureSettingsService handsFreeEnabledCountServerParam] */

undefined ** FUN_10b25718c(void)

{
  return &PTR____CFConstantStringClassReference_110f5f418;
}



/* Entry: 10b257198; end: 10b2571a7; -[SCFeatureSettingsService setHandsFreeEnabledCount:] */

void FUN_10b257198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110f5f418,param_3);
  return;
}



/* Entry: 10b2571a8; end: 10b2571af; -[SCFeatureSettingsService hands_free_enabled_count_client_value:] */

void FUN_10b2571a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10b2571b0; end: 10b2571b7; -[SCFeatureSettingsService hands_free_enabled_count_server_value:] */

void FUN_10b2571b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10b2571b8; end: 10b2571c7; -[SCFeatureSettingsService handsFreeEnabledCount] */

void FUN_10b2571b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110f5f418,0);
  return;
}



/* Entry: 10b2571c8; end: 10b2571d3; -[SCFeatureSettingsService isHandsFreeSeenCountAvailable] */

void FUN_10b2571c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f438);
  return;
}



/* Entry: 10b2571d4; end: 10b2571df; -[SCFeatureSettingsService handsFreeSeenCountServerParam] */

undefined ** FUN_10b2571d4(void)

{
  return &PTR____CFConstantStringClassReference_110f5f438;
}



/* Entry: 10b2571e0; end: 10b2571ef; -[SCFeatureSettingsService setHandsFreeSeenCount:] */

void FUN_10b2571e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110f5f438,param_3);
  return;
}



/* Entry: 10b2571f0; end: 10b2571f7; -[SCFeatureSettingsService hands_free_seen_count_client_value:] */

void FUN_10b2571f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10b2571f8; end: 10b2571ff; -[SCFeatureSettingsService hands_free_seen_count_server_value:] */

void FUN_10b2571f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10b257200; end: 10b25720f; -[SCFeatureSettingsService handsFreeSeenCount] */

void FUN_10b257200(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110f5f438,0);
  return;
}



/* Entry: 10b257210; end: 10b25721b; -[SCFeatureSettingsService isRegisterToVoteDismissed] */

void FUN_10b257210(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f458);
  return;
}



/* Entry: 10b25721c; end: 10b257227; -[SCFeatureSettingsService registerToVoteDismissedServerParam] */

undefined ** FUN_10b25721c(void)

{
  return &PTR____CFConstantStringClassReference_110f5f458;
}



/* Entry: 10b257228; end: 10b257237; -[SCFeatureSettingsService setRegisterToVoteDismissed:] */

void FUN_10b257228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f458,param_3);
  return;
}



/* Entry: 10b257238; end: 10b25723f; -[SCFeatureSettingsService register_to_vote_dismissed_client_value:] */

undefined * FUN_10b257238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b257240; end: 10b257247; -[SCFeatureSettingsService register_to_vote_dismissed_server_value:] */

void FUN_10b257240(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b257248; end: 10b257257; -[SCFeatureSettingsService registerToVoteDismissed] */

void FUN_10b257248(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f458,0);
  return;
}



/* Entry: 10b257258; end: 10b257263; -[SCFeatureSettingsService getRegisterToVotePageLink] */

void FUN_10b257258(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f478);
  return;
}



/* Entry: 10b257264; end: 10b25726f; -[SCFeatureSettingsService registerToVotePageLinkServerParam] */

undefined ** FUN_10b257264(void)

{
  return &PTR____CFConstantStringClassReference_110f5f478;
}



/* Entry: 10b257270; end: 10b25727f; -[SCFeatureSettingsService setRegisterToVotePageLink:] */

void FUN_10b257270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110f5f478,param_3);
  return;
}



/* Entry: 10b257280; end: 10b2572a7; -[SCFeatureSettingsService register_to_vote_page_link_client_value:] */

void FUN_10b257280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b2572a8; end: 10b2572cf; -[SCFeatureSettingsService register_to_vote_page_link_server_value:] */

void FUN_10b2572a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b2572d0; end: 10b2572e3; -[SCFeatureSettingsService registerToVotePageLink] */

void FUN_10b2572d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110f5f478,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}


