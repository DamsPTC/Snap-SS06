/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2577d0; end: 10b2577db; -[SCFeatureSettingsService getShouldSeeCognacVoiceButtonTooltip] */

void FUN_10b2577d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f6b8);
  return;
}



/* Entry: 10b2577dc; end: 10b2577e7; -[SCFeatureSettingsService shouldSeeCognacVoiceButtonTooltipServerParam] */

undefined ** FUN_10b2577dc(void)

{
  return &PTR____CFConstantStringClassReference_110f5f6b8;
}



/* Entry: 10b2577e8; end: 10b2577f7; -[SCFeatureSettingsService setShouldSeeCognacVoiceButtonTooltip:] */

void FUN_10b2577e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f6b8,param_3);
  return;
}



/* Entry: 10b2577f8; end: 10b2577ff; -[SCFeatureSettingsService should_see_cognac_voice_button_tooltip_client_value:] */

undefined * FUN_10b2577f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b257800; end: 10b257807; -[SCFeatureSettingsService should_see_cognac_voice_button_tooltip_server_value:] */

void FUN_10b257800(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b257808; end: 10b257817; -[SCFeatureSettingsService shouldSeeCognacVoiceButtonTooltip] */

void FUN_10b257808(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f6b8,1);
  return;
}



/* Entry: 10b257818; end: 10b257823; -[SCFeatureSettingsService getShouldSeeCognacRingButtonTooltip] */

void FUN_10b257818(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f6d8);
  return;
}



/* Entry: 10b257824; end: 10b25782f; -[SCFeatureSettingsService shouldSeeCognacRingButtonTooltipServerParam] */

undefined ** FUN_10b257824(void)

{
  return &PTR____CFConstantStringClassReference_110f5f6d8;
}



/* Entry: 10b257830; end: 10b25783f; -[SCFeatureSettingsService setShouldSeeCognacRingButtonTooltip:] */

void FUN_10b257830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f6d8,param_3);
  return;
}



/* Entry: 10b257840; end: 10b257847; -[SCFeatureSettingsService should_see_cognac_ring_button_tooltip_client_value:] */

undefined * FUN_10b257840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b257848; end: 10b25784f; -[SCFeatureSettingsService should_see_cognac_ring_button_tooltip_server_value:] */

void FUN_10b257848(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b257850; end: 10b25785f; -[SCFeatureSettingsService shouldSeeCognacRingButtonTooltip] */

void FUN_10b257850(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f6d8,1);
  return;
}



/* Entry: 10b257860; end: 10b25786b; -[SCFeatureSettingsService getShouldSeeCognacRocketButtonTooltip] */

void FUN_10b257860(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f6f8);
  return;
}



/* Entry: 10b25786c; end: 10b257877; -[SCFeatureSettingsService shouldSeeCognacRocketButtonTooltipServerParam] */

undefined ** FUN_10b25786c(void)

{
  return &PTR____CFConstantStringClassReference_110f5f6f8;
}



/* Entry: 10b257878; end: 10b257887; -[SCFeatureSettingsService setShouldSeeCognacRocketButtonTooltip:] */

void FUN_10b257878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f6f8,param_3);
  return;
}



/* Entry: 10b257888; end: 10b25788f; -[SCFeatureSettingsService should_see_cognac_rocket_button_tooltip_client_value:] */

undefined * FUN_10b257888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b257890; end: 10b257897; -[SCFeatureSettingsService should_see_cognac_rocket_button_tooltip_server_value:] */

void FUN_10b257890(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b257898; end: 10b2578a7; -[SCFeatureSettingsService shouldSeeCognacRocketButtonTooltip] */

void FUN_10b257898(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f6f8,1);
  return;
}



/* Entry: 10b2578a8; end: 10b2578b3; -[SCFeatureSettingsService getShouldSeeCognacChatDockTooltip] */

void FUN_10b2578a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f718);
  return;
}



/* Entry: 10b2578b4; end: 10b2578bf; -[SCFeatureSettingsService shouldSeeCognacChatDockTooltipServerParam] */

undefined ** FUN_10b2578b4(void)

{
  return &PTR____CFConstantStringClassReference_110f5f718;
}



/* Entry: 10b2578c0; end: 10b2578cf; -[SCFeatureSettingsService setShouldSeeCognacChatDockTooltip:] */

void FUN_10b2578c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f718,param_3);
  return;
}



/* Entry: 10b2578d0; end: 10b2578d7; -[SCFeatureSettingsService should_see_cognac_chat_dock_tooltip_client_value:] */

undefined * FUN_10b2578d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b2578d8; end: 10b2578df; -[SCFeatureSettingsService should_see_cognac_chat_dock_tooltip_server_value:] */

void FUN_10b2578d8(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b2578e0; end: 10b2578ef; -[SCFeatureSettingsService shouldSeeCognacChatDockTooltip] */

void FUN_10b2578e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f718,1);
  return;
}



/* Entry: 10b2578f0; end: 10b2578fb; -[SCFeatureSettingsService getShouldSeeCognacChatDrawerAlert] */

void FUN_10b2578f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f738);
  return;
}



/* Entry: 10b2578fc; end: 10b257907; -[SCFeatureSettingsService shouldSeeCognacChatDrawerAlertServerParam] */

undefined ** FUN_10b2578fc(void)

{
  return &PTR____CFConstantStringClassReference_110f5f738;
}



/* Entry: 10b257908; end: 10b257917; -[SCFeatureSettingsService setShouldSeeCognacChatDrawerAlert:] */

void FUN_10b257908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f738,param_3);
  return;
}



/* Entry: 10b257918; end: 10b25791f; -[SCFeatureSettingsService should_see_cognac_chat_drawer_alert_client_value:] */

undefined * FUN_10b257918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b257920; end: 10b257927; -[SCFeatureSettingsService should_see_cognac_chat_drawer_alert_server_value:] */

void FUN_10b257920(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b257928; end: 10b257937; -[SCFeatureSettingsService shouldSeeCognacChatDrawerAlert] */

void FUN_10b257928(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f738,1);
  return;
}



/* Entry: 10b257938; end: 10b257943; -[SCFeatureSettingsService isSearchableByEmailAvailable] */

void FUN_10b257938(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f758);
  return;
}



/* Entry: 10b257944; end: 10b25794f; -[SCFeatureSettingsService searchableByEmailServerParam] */

undefined ** FUN_10b257944(void)

{
  return &PTR____CFConstantStringClassReference_110f5f758;
}



/* Entry: 10b257950; end: 10b25795f; -[SCFeatureSettingsService setSearchableByEmail:] */

void FUN_10b257950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f758,param_3);
  return;
}



/* Entry: 10b257960; end: 10b257967; -[SCFeatureSettingsService searchable_by_email_client_value:] */

undefined * FUN_10b257960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b257968; end: 10b25796f; -[SCFeatureSettingsService searchable_by_email_server_value:] */

void FUN_10b257968(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b257970; end: 10b25797f; -[SCFeatureSettingsService searchableByEmail] */

void FUN_10b257970(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f758,0);
  return;
}



/* Entry: 10b257980; end: 10b25798b; -[SCFeatureSettingsService getShouldShowSnapcodeStickerStyleTooltip] */

void FUN_10b257980(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f778);
  return;
}



/* Entry: 10b25798c; end: 10b257997; -[SCFeatureSettingsService shouldShowSnapcodeStickerStyleTooltipServerParam] */

undefined ** FUN_10b25798c(void)

{
  return &PTR____CFConstantStringClassReference_110f5f778;
}



/* Entry: 10b257998; end: 10b2579a7; -[SCFeatureSettingsService setShouldShowSnapcodeStickerStyleTooltip:] */

void FUN_10b257998(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f778,param_3);
  return;
}



/* Entry: 10b2579a8; end: 10b2579af; -[SCFeatureSettingsService should_show_snapcode_sticker_style_tooltip_client_value:] */

undefined * FUN_10b2579a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b2579b0; end: 10b2579b7; -[SCFeatureSettingsService should_show_snapcode_sticker_style_tooltip_server_value:] */

void FUN_10b2579b0(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b2579b8; end: 10b2579c7; -[SCFeatureSettingsService shouldShowSnapcodeStickerStyleTooltip] */

void FUN_10b2579b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f778,1);
  return;
}



/* Entry: 10b2579c8; end: 10b257a0f; -[SCFeatureSettingsService _uintegerForFeatureSetting:defaultValue:] */

long FUN_10b2579c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010c296e80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    param_4 = param_1;
    func_0x00010c2827c0(param_1);
  }
  _objc_release(param_1);
  return param_4;
}



/* Entry: 10b257a10; end: 10b257a5f; -[SCFeatureSettingsService _doubleForFeatureSetting:defaultValue:] */

undefined8 FUN_10b257a10(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c296e80();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    func_0x00010bf885a0(param_2);
    param_1 = uVar1;
  }
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10b257a60; end: 10b257a93; -[SCFeatureSettingsService _hasFeatureSettingAvailable:] */

bool FUN_10b257a60(long param_1)

{
  func_0x00010c296e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 10b257a94; end: 10b257b03; -[SCFeatureSettingsService _setFeatureSetting:boolValue:] */

void FUN_10b257a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010c0df6e0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ab40(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b257b04; end: 10b257b7b; -[SCFeatureSettingsService _setFeatureSetting:doubleValue:] */

void FUN_10b257b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_4);
  func_0x00010c0df720(param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ab40(param_2,param_3,param_4,puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b257b7c; end: 10b257beb; -[SCFeatureSettingsService _setFeatureSetting:longValue:] */

void FUN_10b257b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010c0df7a0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ab40(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b257bec; end: 10b257c5b; -[SCFeatureSettingsService _setFeatureSetting:unsignedLongValue:] */

void FUN_10b257bec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010c0df860(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ab40(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b257c5c; end: 10b257c5f; -[SCFeatureSettingsService _setFeatureSetting:stringValue:] */

void FUN_10b257c5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19ab50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFeatureSetting_value__1126444f0);
  return;
}



/* Entry: 10b257c60; end: 10b257c93;  */

undefined * FUN_10b257c60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_1 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b257c94; end: 10b257d27;  */

void FUN_10b257c94(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf885a0();
                    /* WARNING: Could not recover jumptable at 0x00010c0df730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithDouble__1126157e0);
  return;
}



/* Entry: 10b257d28; end: 10b257d2b; -[SCFeatureSettingsService performChanges:queue:completionHandler:] */

void FUN_10b257d28(void)

{
  return;
}



/* Entry: 10b257d2c; end: 10b257d2f; -[SCFeatureSettingsService performChangesToServer:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_10b257d2c(void)

{
  return;
}



/* Entry: 10b257d30; end: 10b257d37; -[SCFeatureSettingsService observeKeys:queue:changeHandler:] */

undefined8 FUN_10b257d30(void)

{
  return 0;
}



/* Entry: 10b257d38; end: 10b257d3f; -[SCFeatureSettingsService observeItemIds:queue:changeHandler:] */

undefined8 FUN_10b257d38(void)

{
  return 0;
}



/* Entry: 10b257d40; end: 10b257d47; -[SCFeatureSettingsService hasSyncedLogInResponse] */

undefined8 FUN_10b257d40(void)

{
  return 0;
}



/* Entry: 10b257d48; end: 10b257d4f; -[SCFeatureSettingsService valueForFeatureSetting:] */

undefined8 FUN_10b257d48(void)

{
  return 0;
}



/* Entry: 10b257d50; end: 10b257d57; -[SCFeatureSettingsService valueForFeatureSettingItemId:] */

undefined8 FUN_10b257d50(void)

{
  return 0;
}



/* Entry: 10b257d58; end: 10b257d5b; -[SCFeatureSettingsService setFeatureSetting:value:] */

void FUN_10b257d58(void)

{
  return;
}



/* Entry: 10b257d5c; end: 10b257d5f; -[SCFeatureSettingsService setFeatureSettingWithItemId:value:] */

void FUN_10b257d5c(void)

{
  return;
}



/* Entry: 10b257d60; end: 10b257e2f; -[SCFeatureSettingsService setFeatureSettingWithItemId:value:queue:completionHandler:] */

void FUN_10b257d60(void)

{
  undefined8 in_x3;
  long in_x4;
  long in_x5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(in_x3);
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  if (in_x5 != 0) {
    if (in_x4 == 0) {
      (**(code **)(in_x5 + 0x10))(in_x5,0,0);
    }
    else {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_10b257e30;
      puStack_40 = &UNK_110849530;
      _objc_retain(in_x5);
      lStack_38 = in_x5;
      func_0x000107c27d8c(in_x4,&puStack_58);
      _objc_release(lStack_38);
    }
  }
  _objc_release(in_x5);
  _objc_release(in_x4);
  _objc_release(in_x3);
  return;
}



/* Entry: 10b257e30; end: 10b257e43;  */

void FUN_10b257e30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b257e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 10b257e44; end: 10b257e47; -[SCFeatureSettingsService setLargerValueFeatureSetting:value:] */

void FUN_10b257e44(void)

{
  return;
}



/* Entry: 10b257e48; end: 10b257e4b; -[SCFeatureSettingsService setLargerValueFeatureSettingWithItemId:value:] */

void FUN_10b257e48(void)

{
  return;
}



/* Entry: 10b257e4c; end: 10b257f1b; -[SCFeatureSettingsService setLargerValueFeatureSettingWithItemId:value:queue:completionHandler:] */

void FUN_10b257e4c(void)

{
  undefined8 in_x3;
  long in_x4;
  long in_x5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(in_x3);
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  if (in_x5 != 0) {
    if (in_x4 == 0) {
      (**(code **)(in_x5 + 0x10))(in_x5,0,0);
    }
    else {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_10b257f1c;
      puStack_40 = &UNK_110849530;
      _objc_retain(in_x5);
      lStack_38 = in_x5;
      func_0x000107c27d8c(in_x4,&puStack_58);
      _objc_release(lStack_38);
    }
  }
  _objc_release(in_x5);
  _objc_release(in_x4);
  _objc_release(in_x3);
  return;
}



/* Entry: 10b257f1c; end: 10b257f2f;  */

void FUN_10b257f1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b257f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 10b257f30; end: 10b257f33; -[SCFeatureSettingsService addFeatureSetting:withValue:] */

void FUN_10b257f30(void)

{
  return;
}



/* Entry: 10b257f34; end: 10b257f37; -[SCFeatureSettingsService addFeatureSettingWithItemId:withValue:] */

void FUN_10b257f34(void)

{
  return;
}



/* Entry: 10b257f38; end: 10b257feb; -[SCFeatureSettingsService addFeatureSettingWithItemId:withValue:queue:completionHandler:] */

void FUN_10b257f38(void)

{
  long in_x4;
  long in_x5;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  if (in_x5 != 0) {
    if (in_x4 == 0) {
      (**(code **)(in_x5 + 0x10))(in_x5,0,0);
    }
    else {
      puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_40 = 0xc2000000;
      pcStack_38 = FUN_10b257fec;
      puStack_30 = &UNK_110849530;
      _objc_retain(in_x5);
      lStack_28 = in_x5;
      func_0x000107c27d8c(in_x4,&puStack_48);
      _objc_release(lStack_28);
    }
  }
  _objc_release(in_x5);
  _objc_release(in_x4);
  return;
}



/* Entry: 10b257fec; end: 10b257fff;  */

void FUN_10b257fec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b257ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 10b258000; end: 10b258007; -[SCFeatureSettingsService observeLoginComplete] */

undefined8 FUN_10b258000(void)

{
  return 0;
}



/* Entry: 10b258008; end: 10b258043; -[SCFeatureSettingsServices .cxx_destruct] */

void FUN_10b258008(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b258044; end: 10b25806f; +[SCGrapheneSeamlessSnaptokenMetric error] */

void FUN_10b258044(void)

{
  _objc_alloc(PTR_PTR_1126dfd38);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b258070; end: 10b25810f; -[SCGrapheneSeamlessSnaptokenMetric description] */

void FUN_10b258070(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110f5f7b8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f5f7b8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_112705eb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10b258110; end: 10b25813b; +[SCGrapheneAuthtokenMetric authTokenDiskRead] */

void FUN_10b258110(void)

{
  _objc_alloc(PTR_PTR_1126dfd40);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b25813c; end: 10b2581db; -[SCGrapheneAuthtokenMetric description] */

void FUN_10b25813c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110f5f7f8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f5f7f8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_112705ec0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10b2581dc; end: 10b25831f; -[SCGrapheneRegistry authtokenGraphene] */

void FUN_10b2581dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10b258264;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001137f4410 != -1) {
    func_0x000107c27d9c(0x1137f4410,&puStack_48);
  }
  uVar1 = uRam00000001137f4408;
  _objc_retain(uRam00000001137f4408);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b258320; end: 10b25849b; -[SCRequestSchedulingStateListenerAnnouncer description] */

void FUN_10b258320(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  func_0x000107c2bf1c(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b25849c; end: 10b258747; -[SCRequestSchedulingStateListenerAnnouncer addListener:] */

undefined8 FUN_10b25849c(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110ccb9b0;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_10b258748(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_10b258888(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_10b258650:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_10b258670;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_10b258748(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_10b258748(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_10b258888(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_10b258650;
    }
  }
  uVar9 = 1;
LAB_10b258670:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 10b258748; end: 10b258887;  */

void FUN_10b258748(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_10b258b00();
LAB_10b258884:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_10b258884;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 10b258888; end: 10b2588cf;  */

void FUN_10b258888(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 10b2588d0; end: 10b258aff; -[SCRequestSchedulingStateListenerAnnouncer removeListener:] */

void FUN_10b2588d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_10b258a84;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_10b258938;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_10b258888(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10b258a84;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_10b258938:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110ccb9b0;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_10b258748(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_10b258888(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10b258a84;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_10b258a84:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b258b00; end: 10b258b13;  */

void FUN_10b258b00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar1 = &PTR_FUN_110ccb9b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b258b14; end: 10b258b23;  */

void FUN_10b258b14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ccb9b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b258b24; end: 10b258b43;  */

void FUN_10b258b24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ccb9b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b258b44; end: 10b258bab;  */

void FUN_10b258b44(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b258bac; end: 10b258baf;  */

void FUN_10b258bac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b258bb0; end: 10b258bb7; +[SCAutomatedTestNetworkInterceptor sharedInstance] */

undefined8 FUN_10b258bb0(void)

{
  return 0;
}



/* Entry: 10b258bb8; end: 10b258bbb; -[SCAutomatedTestNetworkInterceptor logRequest:] */

void FUN_10b258bb8(void)

{
  return;
}



/* Entry: 10b258bbc; end: 10b258bbf; -[SCAutomatedTestNetworkInterceptor logResponse:request:data:error:] */

void FUN_10b258bbc(void)

{
  return;
}



/* Entry: 10b258bc0; end: 10b258bc7; -[SCAutomatedTestNetworkInterceptor pullNetworkActivities] */

undefined8 FUN_10b258bc0(void)

{
  return 0;
}



/* Entry: 10b258bc8; end: 10b258bcf; -[SCAutomatedTestNetworkInterceptor pullNetworkActivitiesForUrl:] */

undefined8 FUN_10b258bc8(void)

{
  return 0;
}



/* Entry: 10b258bd0; end: 10b258bd7; -[SCNetworkActivity toDictionary] */

undefined8 FUN_10b258bd0(void)

{
  return 0;
}



/* Entry: 10b258bd8; end: 10b258bdf; -[SCNetworkActivity requestDictionary] */

undefined8 FUN_10b258bd8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b258be0; end: 10b258c0f; -[SCNetworkActivity setRequestDictionary:] */

void FUN_10b258be0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b258c10; end: 10b258c17; -[SCNetworkActivity responseDictionary] */

undefined8 FUN_10b258c10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b258c18; end: 10b258c47; -[SCNetworkActivity setResponseDictionary:] */

void FUN_10b258c18(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b258c48; end: 10b258c4f; -[SCNetworkActivity requestId] */

undefined8 FUN_10b258c48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b258c50; end: 10b258c7f; -[SCNetworkActivity setRequestId:] */

void FUN_10b258c50(long param_1,undefined8 param_2,undefined8 param_3)

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


