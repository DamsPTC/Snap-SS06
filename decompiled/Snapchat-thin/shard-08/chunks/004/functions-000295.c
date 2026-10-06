/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10611d370; end: 10611d37b; -[SCFeatureSettingsService hasSeenTimelineModeOnboardingDialog] */

void FUN_10611d370(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e42118);
  return;
}



/* Entry: 10611d37c; end: 10611d387; -[SCFeatureSettingsService seenTimelineModeOnboardingDialogServerParam] */

undefined ** FUN_10611d37c(void)

{
  return &PTR____CFConstantStringClassReference_110e42118;
}



/* Entry: 10611d388; end: 10611d397; -[SCFeatureSettingsService setSeenTimelineModeOnboardingDialog:] */

void FUN_10611d388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e42118,param_3);
  return;
}



/* Entry: 10611d398; end: 10611d39f; -[SCFeatureSettingsService timeline_mode_onboarding_dialog_client_value:] */

undefined * FUN_10611d398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10611d3a0; end: 10611d3a7; -[SCFeatureSettingsService timeline_mode_onboarding_dialog_server_value:] */

void FUN_10611d3a0(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10611d3a8; end: 10611d3b7; -[SCFeatureSettingsService seenTimelineModeOnboardingDialog] */

void FUN_10611d3a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e42118,0);
  return;
}



/* Entry: 10611d3b8; end: 10611d3c3; -[SCFeatureSettingsService hasSeenTimelineModePreviewSnapTooltip] */

void FUN_10611d3b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e42138);
  return;
}



/* Entry: 10611d3c4; end: 10611d3cf; -[SCFeatureSettingsService seenTimelineModePreviewSnapTooltipServerParam] */

undefined ** FUN_10611d3c4(void)

{
  return &PTR____CFConstantStringClassReference_110e42138;
}



/* Entry: 10611d3d0; end: 10611d3df; -[SCFeatureSettingsService setSeenTimelineModePreviewSnapTooltip:] */

void FUN_10611d3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e42138,param_3);
  return;
}



/* Entry: 10611d3e0; end: 10611d3e7; -[SCFeatureSettingsService timeline_mode_preview_snap_tooltip_client_value:] */

undefined * FUN_10611d3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10611d3e8; end: 10611d3ef; -[SCFeatureSettingsService timeline_mode_preview_snap_tooltip_server_value:] */

void FUN_10611d3e8(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10611d3f0; end: 10611d3ff; -[SCFeatureSettingsService seenTimelineModePreviewSnapTooltip] */

void FUN_10611d3f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e42138,0);
  return;
}



/* Entry: 10611d400; end: 10611d40b; -[SCFeatureSettingsService hasSeenVideoTimerModeTooltip] */

void FUN_10611d400(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e42158);
  return;
}



/* Entry: 10611d40c; end: 10611d417; -[SCFeatureSettingsService seenVideoTimerModeTooltipServerParam] */

undefined ** FUN_10611d40c(void)

{
  return &PTR____CFConstantStringClassReference_110e42158;
}



/* Entry: 10611d418; end: 10611d427; -[SCFeatureSettingsService setSeenVideoTimerModeTooltip:] */

void FUN_10611d418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e42158,param_3);
  return;
}



/* Entry: 10611d428; end: 10611d42f; -[SCFeatureSettingsService video_timer_mode_tooltip_client_value:] */

undefined * FUN_10611d428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10611d430; end: 10611d437; -[SCFeatureSettingsService video_timer_mode_tooltip_server_value:] */

void FUN_10611d430(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10611d438; end: 10611d447; -[SCFeatureSettingsService seenVideoTimerModeTooltip] */

void FUN_10611d438(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e42158,0);
  return;
}



/* Entry: 10611d448; end: 10611d453; -[SCFeatureSettingsService isSeenTimelinePromotionOnboardingDialogAvailable] */

void FUN_10611d448(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e42178);
  return;
}



/* Entry: 10611d454; end: 10611d45f; -[SCFeatureSettingsService hasSeenTimelinePromotionOnboardingDialogServerParam] */

undefined ** FUN_10611d454(void)

{
  return &PTR____CFConstantStringClassReference_110e42178;
}



/* Entry: 10611d460; end: 10611d46f; -[SCFeatureSettingsService setSeenTimelinePromotionOnboardingDialog:] */

void FUN_10611d460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e42178,param_3);
  return;
}



/* Entry: 10611d470; end: 10611d477; -[SCFeatureSettingsService timeline_promotion_onboarding_dialog_client_value:] */

undefined * FUN_10611d470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10611d478; end: 10611d47f; -[SCFeatureSettingsService timeline_promotion_onboarding_dialog_server_value:] */

void FUN_10611d478(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10611d480; end: 10611d48f; -[SCFeatureSettingsService hasSeenTimelinePromotionOnboardingDialog] */

void FUN_10611d480(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e42178,0);
  return;
}



/* Entry: 10611d490; end: 10611d49b; -[SCFeatureSettingsService isSeenTimelinePromotionTimelineEnabledTooltipAvailable] */

void FUN_10611d490(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e42198);
  return;
}



/* Entry: 10611d49c; end: 10611d4a7; -[SCFeatureSettingsService hasSeenTimelinePromotionTimelineEnabledTooltipServerParam] */

undefined ** FUN_10611d49c(void)

{
  return &PTR____CFConstantStringClassReference_110e42198;
}



/* Entry: 10611d4a8; end: 10611d4b7; -[SCFeatureSettingsService setSeenTimelinePromotionTimelineEnabledTooltip:] */

void FUN_10611d4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e42198,param_3);
  return;
}



/* Entry: 10611d4b8; end: 10611d4bf; -[SCFeatureSettingsService timeline_promotion_timeline_enabled_tooltip_client_value:] */

undefined * FUN_10611d4b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10611d4c0; end: 10611d4c7; -[SCFeatureSettingsService timeline_promotion_timeline_enabled_tooltip_server_value:] */

void FUN_10611d4c0(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10611d4c8; end: 10611d4d7; -[SCFeatureSettingsService hasSeenTimelinePromotionTimelineEnabledTooltip] */

void FUN_10611d4c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e42198,0);
  return;
}



/* Entry: 10611d4d8; end: 10611d4e3; -[SCFeatureSettingsService isDirectorModeNewBadgeShownDateAvailable] */

void FUN_10611d4d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e421b8);
  return;
}



/* Entry: 10611d4e4; end: 10611d4ef; -[SCFeatureSettingsService directorModeNewBadgeShownDateServerParam] */

undefined ** FUN_10611d4e4(void)

{
  return &PTR____CFConstantStringClassReference_110e421b8;
}



/* Entry: 10611d4f0; end: 10611d4ff; -[SCFeatureSettingsService setDirectorModeNewBadgeShownDate:] */

void FUN_10611d4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e421b8,param_3);
  return;
}



/* Entry: 10611d500; end: 10611d507; -[SCFeatureSettingsService director_mode_new_badge_shown_date_client_value:] */

void FUN_10611d500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10611d508; end: 10611d50f; -[SCFeatureSettingsService director_mode_new_badge_shown_date_server_value:] */

void FUN_10611d508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10611d510; end: 10611d51f; -[SCFeatureSettingsService directorModeNewBadgeShownDate] */

void FUN_10611d510(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e421b8,0);
  return;
}



/* Entry: 10611d520; end: 10611d52b; -[SCFeatureSettingsService isDirectorModeOnboardingPromptSeenAvailable] */

void FUN_10611d520(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e421d8);
  return;
}



/* Entry: 10611d52c; end: 10611d537; -[SCFeatureSettingsService hasSeenDirectorModeOnboardingPromptServerParam] */

undefined ** FUN_10611d52c(void)

{
  return &PTR____CFConstantStringClassReference_110e421d8;
}



/* Entry: 10611d538; end: 10611d547; -[SCFeatureSettingsService setDirectorModeOnboardingPromptSeen:] */

void FUN_10611d538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e421d8,param_3);
  return;
}



/* Entry: 10611d548; end: 10611d54f; -[SCFeatureSettingsService director_mode_onboarding_prompt_seen_client_value:] */

undefined * FUN_10611d548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10611d550; end: 10611d557; -[SCFeatureSettingsService director_mode_onboarding_prompt_seen_server_value:] */

void FUN_10611d550(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10611d558; end: 10611d567; -[SCFeatureSettingsService hasSeenDirectorModeOnboardingPrompt] */

void FUN_10611d558(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e421d8,0);
  return;
}



/* Entry: 10611d568; end: 10611d573; -[SCFeatureSettingsService isUltraWideNewBadgeShownCountAvailable] */

void FUN_10611d568(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e421f8);
  return;
}



/* Entry: 10611d574; end: 10611d57f; -[SCFeatureSettingsService ultraWideNewBadgeShownCountServerParam] */

undefined ** FUN_10611d574(void)

{
  return &PTR____CFConstantStringClassReference_110e421f8;
}



/* Entry: 10611d580; end: 10611d58f; -[SCFeatureSettingsService setUltraWideNewBadgeShownCount:] */

void FUN_10611d580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e421f8,param_3);
  return;
}



/* Entry: 10611d590; end: 10611d597; -[SCFeatureSettingsService ultra_wide_new_badge_shown_count_client_value:] */

void FUN_10611d590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10611d598; end: 10611d59f; -[SCFeatureSettingsService ultra_wide_new_badge_shown_count_server_value:] */

void FUN_10611d598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10611d5a0; end: 10611d5af; -[SCFeatureSettingsService ultraWideNewBadgeShownCount] */

void FUN_10611d5a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e421f8,0);
  return;
}



/* Entry: 10611d5b0; end: 10611d5bb; -[SCFeatureSettingsService isMultiCamModeNewBadgeShownDateAvailable] */

void FUN_10611d5b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e42218);
  return;
}



/* Entry: 10611d5bc; end: 10611d5c7; -[SCFeatureSettingsService multiCamModeNewBadgeShownDateServerParam] */

undefined ** FUN_10611d5bc(void)

{
  return &PTR____CFConstantStringClassReference_110e42218;
}



/* Entry: 10611d5c8; end: 10611d5d7; -[SCFeatureSettingsService setMultiCamModeNewBadgeShownDate:] */

void FUN_10611d5c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e42218,param_3);
  return;
}



/* Entry: 10611d5d8; end: 10611d5df; -[SCFeatureSettingsService dual_camera_new_badge_shown_date_client_value:] */

void FUN_10611d5d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10611d5e0; end: 10611d5e7; -[SCFeatureSettingsService dual_camera_new_badge_shown_date_server_value:] */

void FUN_10611d5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10611d5e8; end: 10611d5f7; -[SCFeatureSettingsService multiCamModeNewBadgeShownDate] */

void FUN_10611d5e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e42218,0);
  return;
}



/* Entry: 10611d5f8; end: 10611d603; -[SCFeatureSettingsService isMultiCamModeOnboardingPromptSeenAvailable] */

void FUN_10611d5f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e42238);
  return;
}



/* Entry: 10611d604; end: 10611d60f; -[SCFeatureSettingsService hasSeenMultiCamModeOnboardingPromptServerParam] */

undefined ** FUN_10611d604(void)

{
  return &PTR____CFConstantStringClassReference_110e42238;
}



/* Entry: 10611d610; end: 10611d61f; -[SCFeatureSettingsService setMultiCamModeOnboardingPromptSeen:] */

void FUN_10611d610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e42238,param_3);
  return;
}



/* Entry: 10611d620; end: 10611d627; -[SCFeatureSettingsService dual_camera_onboarding_prompt_seen_client_value:] */

undefined * FUN_10611d620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10611d628; end: 10611d62f; -[SCFeatureSettingsService dual_camera_onboarding_prompt_seen_server_value:] */

void FUN_10611d628(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10611d630; end: 10611d63f; -[SCFeatureSettingsService hasSeenMultiCamModeOnboardingPrompt] */

void FUN_10611d630(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e42238,0);
  return;
}



/* Entry: 10611d640; end: 10611d64b; -[SCFeatureSettingsService isDualCamInLensCarouselLabelSeenCountAvailable] */

void FUN_10611d640(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e42258);
  return;
}



/* Entry: 10611d64c; end: 10611d657; -[SCFeatureSettingsService dualCamInLensCarouselLabelSeenCountServerParam] */

undefined ** FUN_10611d64c(void)

{
  return &PTR____CFConstantStringClassReference_110e42258;
}



/* Entry: 10611d658; end: 10611d667; -[SCFeatureSettingsService setDualCamInLensCarouselLabelSeenCount:] */

void FUN_10611d658(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e42258,param_3);
  return;
}



/* Entry: 10611d668; end: 10611d66f; -[SCFeatureSettingsService dual_cam_in_lens_carousel_label_seen_count_client_value:] */

void FUN_10611d668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10611d670; end: 10611d677; -[SCFeatureSettingsService dual_cam_in_lens_carousel_label_seen_count_server_value:] */

void FUN_10611d670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10611d678; end: 10611d687; -[SCFeatureSettingsService dualCamInLensCarouselLabelSeenCount] */

void FUN_10611d678(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e42258,0);
  return;
}



/* Entry: 10611d688; end: 10611d693; -[SCFeatureSettingsService isDualCamInLensCarouselTooltipSeenCountAvailable] */

void FUN_10611d688(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e42278);
  return;
}



/* Entry: 10611d694; end: 10611d69f; -[SCFeatureSettingsService dualCamInLensCarouselTooltipSeenCountServerParam] */

undefined ** FUN_10611d694(void)

{
  return &PTR____CFConstantStringClassReference_110e42278;
}



/* Entry: 10611d6a0; end: 10611d6af; -[SCFeatureSettingsService setDualCamInLensCarouselTooltipSeenCount:] */

void FUN_10611d6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e42278,param_3);
  return;
}



/* Entry: 10611d6b0; end: 10611d6b7; -[SCFeatureSettingsService dual_cam_in_lens_carousel_tooltip_seen_count_client_value:] */

void FUN_10611d6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10611d6b8; end: 10611d6bf; -[SCFeatureSettingsService dual_cam_in_lens_carousel_tooltip_seen_count_server_value:] */

void FUN_10611d6b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10611d6c0; end: 10611d6cf; -[SCFeatureSettingsService dualCamInLensCarouselTooltipSeenCount] */

void FUN_10611d6c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e42278,0);
  return;
}



/* Entry: 10611d6d0; end: 10611d6db; -[SCFeatureSettingsService isToneModeNewBadgeShownDateAvailable] */

void FUN_10611d6d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e42298);
  return;
}



/* Entry: 10611d6dc; end: 10611d6e7; -[SCFeatureSettingsService toneModeNewBadgeShownDateServerParam] */

undefined ** FUN_10611d6dc(void)

{
  return &PTR____CFConstantStringClassReference_110e42298;
}



/* Entry: 10611d6e8; end: 10611d6f7; -[SCFeatureSettingsService setToneModeNewBadgeShownDate:] */

void FUN_10611d6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e42298,param_3);
  return;
}



/* Entry: 10611d6f8; end: 10611d6ff; -[SCFeatureSettingsService tone_mode_new_badge_shown_date_client_value:] */

void FUN_10611d6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10611d700; end: 10611d707; -[SCFeatureSettingsService tone_mode_new_badge_shown_date_server_value:] */

void FUN_10611d700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10611d708; end: 10611d717; -[SCFeatureSettingsService toneModeNewBadgeShownDate] */

void FUN_10611d708(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e42298,0);
  return;
}



/* Entry: 10611d718; end: 10611d723; -[SCFeatureSettingsService isHasSeenToneModeOnboardingPromptAvailable] */

void FUN_10611d718(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e422b8);
  return;
}



/* Entry: 10611d724; end: 10611d72f; -[SCFeatureSettingsService hasSeenToneModeOnboardingPromptServerParam] */

undefined ** FUN_10611d724(void)

{
  return &PTR____CFConstantStringClassReference_110e422b8;
}



/* Entry: 10611d730; end: 10611d73f; -[SCFeatureSettingsService setHasSeenToneModeOnboardingPrompt:] */

void FUN_10611d730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e422b8,param_3);
  return;
}



/* Entry: 10611d740; end: 10611d747; -[SCFeatureSettingsService has_seen_tone_mode_onboarding_prompt_client_value:] */

undefined * FUN_10611d740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10611d748; end: 10611d74f; -[SCFeatureSettingsService has_seen_tone_mode_onboarding_prompt_server_value:] */

void FUN_10611d748(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10611d750; end: 10611d75f; -[SCFeatureSettingsService hasSeenToneModeOnboardingPrompt] */

void FUN_10611d750(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e422b8,0);
  return;
}



/* Entry: 10611d760; end: 10611d76b; -[SCFeatureSettingsService isToneModeNewBadgeShownCountAvailable] */

void FUN_10611d760(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e422d8);
  return;
}



/* Entry: 10611d76c; end: 10611d777; -[SCFeatureSettingsService toneModeNewBadgeShownCountServerParam] */

undefined ** FUN_10611d76c(void)

{
  return &PTR____CFConstantStringClassReference_110e422d8;
}



/* Entry: 10611d778; end: 10611d787; -[SCFeatureSettingsService setToneModeNewBadgeShownCount:] */

void FUN_10611d778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e422d8,param_3);
  return;
}



/* Entry: 10611d788; end: 10611d78f; -[SCFeatureSettingsService tone_mode_new_badge_shown_count_client_value:] */

void FUN_10611d788(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10611d790; end: 10611d797; -[SCFeatureSettingsService tone_mode_new_badge_shown_count_server_value:] */

void FUN_10611d790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10611d798; end: 10611d7a7; -[SCFeatureSettingsService toneModeNewBadgeShownCount] */

void FUN_10611d798(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e422d8,0);
  return;
}



/* Entry: 10611d7a8; end: 10611d7b3; -[SCFeatureSettingsService isVideoStabilizerNewBadgeShownCountAvailable] */

void FUN_10611d7a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e422f8);
  return;
}



/* Entry: 10611d7b4; end: 10611d7bf; -[SCFeatureSettingsService videoStabilizerNewBadgeShownCountServerParam] */

undefined ** FUN_10611d7b4(void)

{
  return &PTR____CFConstantStringClassReference_110e422f8;
}



/* Entry: 10611d7c0; end: 10611d7cf; -[SCFeatureSettingsService setVideoStabilizerNewBadgeShownCount:] */

void FUN_10611d7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e422f8,param_3);
  return;
}



/* Entry: 10611d7d0; end: 10611d7d7; -[SCFeatureSettingsService video_stabilizer_new_badge_shown_count_client_value:] */

void FUN_10611d7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10611d7d8; end: 10611d7df; -[SCFeatureSettingsService video_stabilizer_new_badge_shown_count_server_value:] */

void FUN_10611d7d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10611d7e0; end: 10611d7ef; -[SCFeatureSettingsService videoStabilizerNewBadgeShownCount] */

void FUN_10611d7e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e422f8,0);
  return;
}



/* Entry: 10611d7f0; end: 10611d7fb; -[SCFeatureSettingsService hasSeenTakeSnapInCameraRollCamera] */

void FUN_10611d7f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e42318);
  return;
}



/* Entry: 10611d7fc; end: 10611d807; -[SCFeatureSettingsService seenTakeSnapInCameraRollCameraServerParam] */

undefined ** FUN_10611d7fc(void)

{
  return &PTR____CFConstantStringClassReference_110e42318;
}



/* Entry: 10611d808; end: 10611d817; -[SCFeatureSettingsService setSeenTakeSnapInCameraRollCamera:] */

void FUN_10611d808(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e42318,param_3);
  return;
}



/* Entry: 10611d818; end: 10611d81f; -[SCFeatureSettingsService camera_roll_camera_snap_tooltip_client_value:] */

undefined * FUN_10611d818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}


