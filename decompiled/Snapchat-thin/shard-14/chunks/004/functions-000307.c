/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2572e4; end: 10b2572ef; -[SCFeatureSettingsService isSnappablesSeenPrivacyAlertAvailable] */

void FUN_10b2572e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f498);
  return;
}



/* Entry: 10b2572f0; end: 10b2572fb; -[SCFeatureSettingsService snappablesSeenPrivacyAlertServerParam] */

undefined ** FUN_10b2572f0(void)

{
  return &PTR____CFConstantStringClassReference_110f5f498;
}



/* Entry: 10b2572fc; end: 10b25730b; -[SCFeatureSettingsService setSnappablesSeenPrivacyAlert:] */

void FUN_10b2572fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f498,param_3);
  return;
}



/* Entry: 10b25730c; end: 10b257313; -[SCFeatureSettingsService snappables_seen_privacy_alert_client_value:] */

undefined * FUN_10b25730c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b257314; end: 10b25731b; -[SCFeatureSettingsService snappables_seen_privacy_alert_server_value:] */

void FUN_10b257314(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b25731c; end: 10b25732b; -[SCFeatureSettingsService snappablesSeenPrivacyAlert] */

void FUN_10b25731c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f498,0);
  return;
}



/* Entry: 10b25732c; end: 10b257337; -[SCFeatureSettingsService isSnappablesSeenCreativeToolsBannerCount] */

void FUN_10b25732c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f4b8);
  return;
}



/* Entry: 10b257338; end: 10b257343; -[SCFeatureSettingsService snappablesSeenCreativeToolsBannerCountServerParam] */

undefined ** FUN_10b257338(void)

{
  return &PTR____CFConstantStringClassReference_110f5f4b8;
}



/* Entry: 10b257344; end: 10b257353; -[SCFeatureSettingsService setSnappablesSeenCreativeToolsBannerCount:] */

void FUN_10b257344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110f5f4b8,param_3);
  return;
}



/* Entry: 10b257354; end: 10b25735b; -[SCFeatureSettingsService snappables_seen_creative_tools_banner_count_client_value:] */

void FUN_10b257354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10b25735c; end: 10b257363; -[SCFeatureSettingsService snappables_seen_creative_tools_banner_count_server_value:] */

void FUN_10b25735c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10b257364; end: 10b257373; -[SCFeatureSettingsService snappablesSeenCreativeToolsBannerCount] */

void FUN_10b257364(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110f5f4b8,0);
  return;
}



/* Entry: 10b257374; end: 10b25737f; -[SCFeatureSettingsService isSnappablesSeenPlayButtonTooltipCount] */

void FUN_10b257374(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f4d8);
  return;
}



/* Entry: 10b257380; end: 10b25738b; -[SCFeatureSettingsService snappablesSeenPlayButtonTooltipCountServerParam] */

undefined ** FUN_10b257380(void)

{
  return &PTR____CFConstantStringClassReference_110f5f4d8;
}



/* Entry: 10b25738c; end: 10b25739b; -[SCFeatureSettingsService setSnappablesSeenPlayButtonTooltipCount:] */

void FUN_10b25738c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110f5f4d8,param_3);
  return;
}



/* Entry: 10b25739c; end: 10b2573a3; -[SCFeatureSettingsService snappables_seen_play_button_tooltip_count_client_value:] */

void FUN_10b25739c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10b2573a4; end: 10b2573ab; -[SCFeatureSettingsService snappables_seen_play_button_tooltip_count_server_value:] */

void FUN_10b2573a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10b2573ac; end: 10b2573bb; -[SCFeatureSettingsService snappablesSeenPlayButtonTooltipCount] */

void FUN_10b2573ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110f5f4d8,0);
  return;
}



/* Entry: 10b2573bc; end: 10b2573c7; -[SCFeatureSettingsService isSeenEagleOnboardingMessageAvailable] */

void FUN_10b2573bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f4f8);
  return;
}



/* Entry: 10b2573c8; end: 10b2573d3; -[SCFeatureSettingsService seenEagleOnboardingMessageServerParam] */

undefined ** FUN_10b2573c8(void)

{
  return &PTR____CFConstantStringClassReference_110f5f4f8;
}



/* Entry: 10b2573d4; end: 10b2573e3; -[SCFeatureSettingsService setSeenEagleOnboardingMessage:] */

void FUN_10b2573d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f4f8,param_3);
  return;
}



/* Entry: 10b2573e4; end: 10b2573eb; -[SCFeatureSettingsService seen_eagle_onboarding_message_client_value:] */

undefined * FUN_10b2573e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b2573ec; end: 10b2573f3; -[SCFeatureSettingsService seen_eagle_onboarding_message_server_value:] */

void FUN_10b2573ec(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b2573f4; end: 10b257403; -[SCFeatureSettingsService seenEagleOnboardingMessage] */

void FUN_10b2573f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f4f8,0);
  return;
}



/* Entry: 10b257404; end: 10b25740f; -[SCFeatureSettingsService isSpectaclesSnapStoreEnabled] */

void FUN_10b257404(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f518);
  return;
}



/* Entry: 10b257410; end: 10b25741b; -[SCFeatureSettingsService spectaclesSnapStoreEnabledServerParam] */

undefined ** FUN_10b257410(void)

{
  return &PTR____CFConstantStringClassReference_110f5f518;
}



/* Entry: 10b25741c; end: 10b257423; -[SCFeatureSettingsService spectacles_snap_store_enabled_client_value:] */

undefined * FUN_10b25741c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b257424; end: 10b25742b; -[SCFeatureSettingsService spectacles_snap_store_enabled_server_value:] */

void FUN_10b257424(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b25742c; end: 10b25743b; -[SCFeatureSettingsService spectaclesSnapStoreEnabled] */

void FUN_10b25742c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f518,0);
  return;
}



/* Entry: 10b25743c; end: 10b257447; -[SCFeatureSettingsService isSpectaclesSnapStoreDeeplinkURLAvailable] */

void FUN_10b25743c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f538);
  return;
}



/* Entry: 10b257448; end: 10b257453; -[SCFeatureSettingsService spectaclesSnapStoreDeeplinkURLServerParam] */

undefined ** FUN_10b257448(void)

{
  return &PTR____CFConstantStringClassReference_110f5f538;
}



/* Entry: 10b257454; end: 10b25747b; -[SCFeatureSettingsService spectacles_snap_store_deeplink_client_value:] */

void FUN_10b257454(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b25747c; end: 10b2574a3; -[SCFeatureSettingsService spectacles_snap_store_deeplink_server_value:] */

void FUN_10b25747c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b2574a4; end: 10b2574b7; -[SCFeatureSettingsService spectaclesSnapStoreDeeplinkURL] */

void FUN_10b2574a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110f5f538,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 10b2574b8; end: 10b2574c3; -[SCFeatureSettingsService isSpectaclesSeenNewportFiltersTooltipAvailable] */

void FUN_10b2574b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f558);
  return;
}



/* Entry: 10b2574c4; end: 10b2574cf; -[SCFeatureSettingsService spectaclesSeenNewportFiltersTooltipServerParam] */

undefined ** FUN_10b2574c4(void)

{
  return &PTR____CFConstantStringClassReference_110f5f558;
}



/* Entry: 10b2574d0; end: 10b2574df; -[SCFeatureSettingsService setSpectaclesSeenNewportFiltersTooltip:] */

void FUN_10b2574d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f558,param_3);
  return;
}



/* Entry: 10b2574e0; end: 10b2574e7; -[SCFeatureSettingsService spectacles_seen_newport_filters_tooltip_client_value:] */

undefined * FUN_10b2574e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b2574e8; end: 10b2574ef; -[SCFeatureSettingsService spectacles_seen_newport_filters_tooltip_server_value:] */

void FUN_10b2574e8(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b2574f0; end: 10b2574ff; -[SCFeatureSettingsService spectaclesSeenNewportFiltersTooltip] */

void FUN_10b2574f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f558,0);
  return;
}



/* Entry: 10b257500; end: 10b25750b; -[SCFeatureSettingsService hasSeenMultiSnapTeachingTooltipInSpecSnap] */

void FUN_10b257500(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f578);
  return;
}



/* Entry: 10b25750c; end: 10b257517; -[SCFeatureSettingsService seenMultiSnapTeachingTooltipInSpecSnapServerParam] */

undefined ** FUN_10b25750c(void)

{
  return &PTR____CFConstantStringClassReference_110f5f578;
}



/* Entry: 10b257518; end: 10b257527; -[SCFeatureSettingsService setSeenMultiSnapTeachingTooltipInSpecSnap:] */

void FUN_10b257518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f578,param_3);
  return;
}



/* Entry: 10b257528; end: 10b25752f; -[SCFeatureSettingsService seen_multisnap_teaching_tooltip_in_spec_snap_client_value:] */

undefined * FUN_10b257528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b257530; end: 10b257537; -[SCFeatureSettingsService seen_multisnap_teaching_tooltip_in_spec_snap_server_value:] */

void FUN_10b257530(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b257538; end: 10b257547; -[SCFeatureSettingsService seenMultiSnapTeachingTooltipInSpecSnap] */

void FUN_10b257538(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f578,0);
  return;
}



/* Entry: 10b257548; end: 10b257553; -[SCFeatureSettingsService isSpectaclesCompletedPairing] */

void FUN_10b257548(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f598);
  return;
}



/* Entry: 10b257554; end: 10b25755f; -[SCFeatureSettingsService spectaclesCompletedPairingServerParam] */

undefined ** FUN_10b257554(void)

{
  return &PTR____CFConstantStringClassReference_110f5f598;
}



/* Entry: 10b257560; end: 10b25756f; -[SCFeatureSettingsService setSpectaclesCompletedPairing:] */

void FUN_10b257560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f598,param_3);
  return;
}



/* Entry: 10b257570; end: 10b257577; -[SCFeatureSettingsService spectacles_completed_pairing_client_value:] */

undefined * FUN_10b257570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b257578; end: 10b25757f; -[SCFeatureSettingsService spectacles_completed_pairing_server_value:] */

void FUN_10b257578(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b257580; end: 10b25758f; -[SCFeatureSettingsService spectaclesCompletedPairing] */

void FUN_10b257580(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f598,0);
  return;
}



/* Entry: 10b257590; end: 10b25759b; -[SCFeatureSettingsService s2rEnabledFlagIsAvailable] */

void FUN_10b257590(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f5b8);
  return;
}



/* Entry: 10b25759c; end: 10b2575a7; -[SCFeatureSettingsService s2rEnabledServerParam] */

undefined ** FUN_10b25759c(void)

{
  return &PTR____CFConstantStringClassReference_110f5f5b8;
}



/* Entry: 10b2575a8; end: 10b2575b7; -[SCFeatureSettingsService setS2REnabled:] */

void FUN_10b2575a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f5b8,param_3);
  return;
}



/* Entry: 10b2575b8; end: 10b2575bf; -[SCFeatureSettingsService s2r_enabled_client_value:] */

undefined * FUN_10b2575b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b2575c0; end: 10b2575c7; -[SCFeatureSettingsService s2r_enabled_server_value:] */

void FUN_10b2575c0(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b2575c8; end: 10b2575d7; -[SCFeatureSettingsService s2rEnabled] */

void FUN_10b2575c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f5b8,0);
  return;
}



/* Entry: 10b2575d8; end: 10b2575e3; -[SCFeatureSettingsService isOurStoryShowMyNameEnabled] */

void FUN_10b2575d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f5d8);
  return;
}



/* Entry: 10b2575e4; end: 10b2575ef; -[SCFeatureSettingsService ourStoryShowMyNameEnabledServerParam] */

undefined ** FUN_10b2575e4(void)

{
  return &PTR____CFConstantStringClassReference_110f5f5d8;
}



/* Entry: 10b2575f0; end: 10b2575ff; -[SCFeatureSettingsService setOurStoryShowMyNameEnabled:] */

void FUN_10b2575f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f5d8,param_3);
  return;
}



/* Entry: 10b257600; end: 10b257607; -[SCFeatureSettingsService our_story_show_my_name_client_value:] */

undefined * FUN_10b257600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b257608; end: 10b25760f; -[SCFeatureSettingsService our_story_show_my_name_server_value:] */

void FUN_10b257608(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b257610; end: 10b25761f; -[SCFeatureSettingsService ourStoryShowMyNameEnabled] */

void FUN_10b257610(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f5d8,0);
  return;
}



/* Entry: 10b257620; end: 10b25762b; -[SCFeatureSettingsService getShouldShowFriendProfileScreenshotPrivacyExplainer] */

void FUN_10b257620(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f5f8);
  return;
}



/* Entry: 10b25762c; end: 10b257637; -[SCFeatureSettingsService shouldShowFriendProfileScreenshotPrivacyExplainerServerParam] */

undefined ** FUN_10b25762c(void)

{
  return &PTR____CFConstantStringClassReference_110f5f5f8;
}



/* Entry: 10b257638; end: 10b257647; -[SCFeatureSettingsService setShouldShowFriendProfileScreenshotPrivacyExplainer:] */

void FUN_10b257638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f5f8,param_3);
  return;
}



/* Entry: 10b257648; end: 10b25764f; -[SCFeatureSettingsService should_show_friend_profile_screenshot_privacy_explainer_client_value:] */

undefined * FUN_10b257648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b257650; end: 10b257657; -[SCFeatureSettingsService should_show_friend_profile_screenshot_privacy_explainer_server_value:] */

void FUN_10b257650(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b257658; end: 10b257667; -[SCFeatureSettingsService shouldShowFriendProfileScreenshotPrivacyExplainer] */

void FUN_10b257658(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f5f8,1);
  return;
}



/* Entry: 10b257668; end: 10b257673; -[SCFeatureSettingsService isShouldShowFriendshipCompassTooltipAvailable] */

void FUN_10b257668(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f618);
  return;
}



/* Entry: 10b257674; end: 10b25767f; -[SCFeatureSettingsService shouldShowFriendshipCompassTooltipServerParam] */

undefined ** FUN_10b257674(void)

{
  return &PTR____CFConstantStringClassReference_110f5f618;
}



/* Entry: 10b257680; end: 10b25768f; -[SCFeatureSettingsService setShouldShowFriendshipCompassTooltip:] */

void FUN_10b257680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f618,param_3);
  return;
}



/* Entry: 10b257690; end: 10b257697; -[SCFeatureSettingsService should_show_friendship_compass_tooltip_client_value:] */

undefined * FUN_10b257690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b257698; end: 10b25769f; -[SCFeatureSettingsService should_show_friendship_compass_tooltip_server_value:] */

void FUN_10b257698(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b2576a0; end: 10b2576af; -[SCFeatureSettingsService shouldShowFriendshipCompassTooltip] */

void FUN_10b2576a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f618,1);
  return;
}



/* Entry: 10b2576b0; end: 10b2576bb; -[SCFeatureSettingsService isFriendshipCompassTooltipShownCountAvailable] */

void FUN_10b2576b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f638);
  return;
}



/* Entry: 10b2576bc; end: 10b2576c7; -[SCFeatureSettingsService friendshipCompassTooltipShownCountServerParam] */

undefined ** FUN_10b2576bc(void)

{
  return &PTR____CFConstantStringClassReference_110f5f638;
}



/* Entry: 10b2576c8; end: 10b2576d7; -[SCFeatureSettingsService setFriendshipCompassTooltipShownCount:] */

void FUN_10b2576c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110f5f638,param_3);
  return;
}



/* Entry: 10b2576d8; end: 10b2576df; -[SCFeatureSettingsService friendship_compass_tooltip_shown_count_client_value:] */

void FUN_10b2576d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10b2576e0; end: 10b2576e7; -[SCFeatureSettingsService friendship_compass_tooltip_shown_count_server_value:] */

void FUN_10b2576e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10b2576e8; end: 10b2576f7; -[SCFeatureSettingsService friendshipCompassTooltipShownCount] */

void FUN_10b2576e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110f5f638,0);
  return;
}



/* Entry: 10b2576f8; end: 10b257703; -[SCFeatureSettingsService isFriendshipCompassTooltipFirstShownTimeMillisAvailable] */

void FUN_10b2576f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f658);
  return;
}



/* Entry: 10b257704; end: 10b25770f; -[SCFeatureSettingsService friendshipCompassTooltipFirstShownTimeMillisServerParam] */

undefined ** FUN_10b257704(void)

{
  return &PTR____CFConstantStringClassReference_110f5f658;
}



/* Entry: 10b257710; end: 10b25771f; -[SCFeatureSettingsService setFriendshipCompassTooltipFirstShownTimeMillis:] */

void FUN_10b257710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110f5f658,param_3);
  return;
}



/* Entry: 10b257720; end: 10b257727; -[SCFeatureSettingsService friendship_compass_tooltip_first_shown_time_millis_client_value:] */

void FUN_10b257720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10b257728; end: 10b25772f; -[SCFeatureSettingsService friendship_compass_tooltip_first_shown_time_millis_server_value:] */

void FUN_10b257728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10b257730; end: 10b25773f; -[SCFeatureSettingsService friendshipCompassTooltipFirstShownTimeMillis] */

void FUN_10b257730(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110f5f658,0);
  return;
}



/* Entry: 10b257740; end: 10b25774b; -[SCFeatureSettingsService isPreviewStoryButtonMyStoryWarningDirectly] */

void FUN_10b257740(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f678);
  return;
}



/* Entry: 10b25774c; end: 10b257757; -[SCFeatureSettingsService previewStoryButtonMyStoryWarningServerParam] */

undefined ** FUN_10b25774c(void)

{
  return &PTR____CFConstantStringClassReference_110f5f678;
}



/* Entry: 10b257758; end: 10b257767; -[SCFeatureSettingsService setPreviewStoryButtonMyStoryWarning:] */

void FUN_10b257758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110f5f678,param_3);
  return;
}



/* Entry: 10b257768; end: 10b25776f; -[SCFeatureSettingsService preview_story_button_my_story_warning_client_value:] */

void FUN_10b257768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10b257770; end: 10b257777; -[SCFeatureSettingsService preview_story_button_my_story_warning_server_value:] */

void FUN_10b257770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10b257778; end: 10b257787; -[SCFeatureSettingsService previewStoryButtonMyStoryWarning] */

void FUN_10b257778(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110f5f678,0);
  return;
}



/* Entry: 10b257788; end: 10b257793; -[SCFeatureSettingsService isShouldShowLocationARLensNotificationAvailable] */

void FUN_10b257788(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f5f698);
  return;
}



/* Entry: 10b257794; end: 10b25779f; -[SCFeatureSettingsService shouldShowLocationARLensNotificationServerParam] */

undefined ** FUN_10b257794(void)

{
  return &PTR____CFConstantStringClassReference_110f5f698;
}



/* Entry: 10b2577a0; end: 10b2577af; -[SCFeatureSettingsService setShouldShowLocationARLensNotification:] */

void FUN_10b2577a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f5f698,param_3);
  return;
}



/* Entry: 10b2577b0; end: 10b2577b7; -[SCFeatureSettingsService should_show_location_ar_lens_notification_client_value:] */

undefined * FUN_10b2577b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10b2577b8; end: 10b2577bf; -[SCFeatureSettingsService should_show_location_ar_lens_notification_server_value:] */

void FUN_10b2577b8(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10b2577c0; end: 10b2577cf; -[SCFeatureSettingsService shouldShowLocationARLensNotification] */

void FUN_10b2577c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f698,1);
  return;
}


