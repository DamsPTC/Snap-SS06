/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e00890; end: 108e0089b; -[SCFeatureSettingsService hasSeenMemoriesCameraRollOnboardingPrompt] */

void FUN_108e00890(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efa9d8);
  return;
}



/* Entry: 108e0089c; end: 108e008a7; -[SCFeatureSettingsService seenMemoriesCameraRollOnboardingPromptServerParam] */

undefined ** FUN_108e0089c(void)

{
  return &PTR____CFConstantStringClassReference_110efa9d8;
}



/* Entry: 108e008a8; end: 108e008b7; -[SCFeatureSettingsService setSeenMemoriesCameraRollOnboardingPrompt:] */

void FUN_108e008a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110efa9d8,param_3);
  return;
}



/* Entry: 108e008b8; end: 108e008bf; -[SCFeatureSettingsService memories_camera_roll_tab_tooltip_client_value:] */

undefined * FUN_108e008b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108e008c0; end: 108e008c7; -[SCFeatureSettingsService memories_camera_roll_tab_tooltip_server_value:] */

void FUN_108e008c0(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108e008c8; end: 108e008d7; -[SCFeatureSettingsService seenMemoriesCameraRollOnboardingPrompt] */

void FUN_108e008c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110efa9d8,0);
  return;
}



/* Entry: 108e008d8; end: 108e008e3; -[SCFeatureSettingsService hasSeenSaveAndReplaceTooltip] */

void FUN_108e008d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efa9f8);
  return;
}



/* Entry: 108e008e4; end: 108e008ef; -[SCFeatureSettingsService seenSaveAndReplaceTooltipServerParam] */

undefined ** FUN_108e008e4(void)

{
  return &PTR____CFConstantStringClassReference_110efa9f8;
}



/* Entry: 108e008f0; end: 108e008ff; -[SCFeatureSettingsService setSeenSaveAndReplaceTooltip:] */

void FUN_108e008f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110efa9f8,param_3);
  return;
}



/* Entry: 108e00900; end: 108e00907; -[SCFeatureSettingsService save_and_replace_tooltip_tooltip_client_value:] */

undefined * FUN_108e00900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108e00908; end: 108e0090f; -[SCFeatureSettingsService save_and_replace_tooltip_tooltip_server_value:] */

void FUN_108e00908(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108e00910; end: 108e0091f; -[SCFeatureSettingsService seenSaveAndReplaceTooltip] */

void FUN_108e00910(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110efa9f8,0);
  return;
}



/* Entry: 108e00920; end: 108e0092b; -[SCFeatureSettingsService isTimelineDraftBannerFirstSeenTimestampAvailable] */

void FUN_108e00920(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efaa18);
  return;
}



/* Entry: 108e0092c; end: 108e00937; -[SCFeatureSettingsService timelineDraftBannerFirstSeenTimestampServerParam] */

undefined ** FUN_108e0092c(void)

{
  return &PTR____CFConstantStringClassReference_110efaa18;
}



/* Entry: 108e00938; end: 108e00947; -[SCFeatureSettingsService setTimelineDraftBannerFirstSeenTimestamp:] */

void FUN_108e00938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110efaa18,param_3);
  return;
}



/* Entry: 108e00948; end: 108e0094f; -[SCFeatureSettingsService timeline_draft_banner_first_seen_timestamp_client_value:] */

void FUN_108e00948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108e00950; end: 108e00957; -[SCFeatureSettingsService timeline_draft_banner_first_seen_timestamp_server_value:] */

void FUN_108e00950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108e00958; end: 108e00967; -[SCFeatureSettingsService timelineDraftBannerFirstSeenTimestamp] */

void FUN_108e00958(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110efaa18,0);
  return;
}



/* Entry: 108e00968; end: 108e00973; -[SCFeatureSettingsService isNumTimesSeenSendToAutoSaveToMemoriesPromptAvailable] */

void FUN_108e00968(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efaa38);
  return;
}



/* Entry: 108e00974; end: 108e0097f; -[SCFeatureSettingsService numTimesSeenSendToAutoSaveToMemoriesPromptServerParam] */

undefined ** FUN_108e00974(void)

{
  return &PTR____CFConstantStringClassReference_110efaa38;
}



/* Entry: 108e00980; end: 108e0098f; -[SCFeatureSettingsService setNumTimesSeenSendToAutoSaveToMemoriesPrompt:] */

void FUN_108e00980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110efaa38,param_3);
  return;
}



/* Entry: 108e00990; end: 108e00997; -[SCFeatureSettingsService send_to_auto_save_prompt_num_times_seen_client_value:] */

void FUN_108e00990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108e00998; end: 108e0099f; -[SCFeatureSettingsService send_to_auto_save_prompt_num_times_seen_server_value:] */

void FUN_108e00998(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108e009a0; end: 108e009af; -[SCFeatureSettingsService numTimesSeenSendToAutoSaveToMemoriesPrompt] */

void FUN_108e009a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110efaa38,0);
  return;
}



/* Entry: 108e009b0; end: 108e009bb; -[SCFeatureSettingsService isLastTimeSeenSendToAutoSaveToMemoriesPromptAvailable] */

void FUN_108e009b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efaa58);
  return;
}



/* Entry: 108e009bc; end: 108e009c7; -[SCFeatureSettingsService lastTimeSeenSendToAutoSaveToMemoriesPromptServerParam] */

undefined ** FUN_108e009bc(void)

{
  return &PTR____CFConstantStringClassReference_110efaa58;
}



/* Entry: 108e009c8; end: 108e009d7; -[SCFeatureSettingsService setLastTimeSeenSendToAutoSaveToMemoriesPrompt:] */

void FUN_108e009c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110efaa58,param_3);
  return;
}



/* Entry: 108e009d8; end: 108e009df; -[SCFeatureSettingsService send_to_auto_save_prompt_last_seen_timestamp_seconds_client_value:] */

void FUN_108e009d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108e009e0; end: 108e009e7; -[SCFeatureSettingsService send_to_auto_save_prompt_last_seen_timestamp_seconds_server_value:] */

void FUN_108e009e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108e009e8; end: 108e009f7; -[SCFeatureSettingsService lastTimeSeenSendToAutoSaveToMemoriesPrompt] */

void FUN_108e009e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110efaa58,0);
  return;
}



/* Entry: 108e009f8; end: 108e00a03; -[SCFeatureSettingsService isDontShowSendToAutoSaveToMemoriesPromptAvailable] */

void FUN_108e009f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efaa78);
  return;
}



/* Entry: 108e00a04; end: 108e00a0f; -[SCFeatureSettingsService dontShowSendToAutoSaveToMemoriesPromptServerParam] */

undefined ** FUN_108e00a04(void)

{
  return &PTR____CFConstantStringClassReference_110efaa78;
}



/* Entry: 108e00a10; end: 108e00a1f; -[SCFeatureSettingsService setDontShowSendToAutoSaveToMemoriesPrompt:] */

void FUN_108e00a10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110efaa78,param_3);
  return;
}



/* Entry: 108e00a20; end: 108e00a27; -[SCFeatureSettingsService send_to_auto_save_prompt_override_do_not_show_client_value:] */

undefined * FUN_108e00a20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108e00a28; end: 108e00a2f; -[SCFeatureSettingsService send_to_auto_save_prompt_override_do_not_show_server_value:] */

void FUN_108e00a28(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108e00a30; end: 108e00a3f; -[SCFeatureSettingsService dontShowSendToAutoSaveToMemoriesPrompt] */

void FUN_108e00a30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110efaa78,0);
  return;
}



/* Entry: 108e00a40; end: 108e00a4b; -[SCFeatureSettingsService wasMemoriesWidgetAdded] */

void FUN_108e00a40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efaa98);
  return;
}



/* Entry: 108e00a4c; end: 108e00a57; -[SCFeatureSettingsService memoriesWidgetAddedServerParam] */

undefined ** FUN_108e00a4c(void)

{
  return &PTR____CFConstantStringClassReference_110efaa98;
}



/* Entry: 108e00a58; end: 108e00a67; -[SCFeatureSettingsService setMemoriesWidgetAdded:] */

void FUN_108e00a58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110efaa98,param_3);
  return;
}



/* Entry: 108e00a68; end: 108e00a6f; -[SCFeatureSettingsService memories_widget_added_client_value:] */

undefined * FUN_108e00a68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108e00a70; end: 108e00a77; -[SCFeatureSettingsService memories_widget_added_server_value:] */

void FUN_108e00a70(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108e00a78; end: 108e00a87; -[SCFeatureSettingsService memoriesWidgetAdded] */

void FUN_108e00a78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110efaa98,0);
  return;
}



/* Entry: 108e00a88; end: 108e00a93; -[SCFeatureSettingsService isNumTimesSeenMemoriesWidgetEducationBannerAvailable] */

void FUN_108e00a88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efaab8);
  return;
}



/* Entry: 108e00a94; end: 108e00a9f; -[SCFeatureSettingsService numTimesSeenMemoriesWidgetEducationBannerServerParam] */

undefined ** FUN_108e00a94(void)

{
  return &PTR____CFConstantStringClassReference_110efaab8;
}



/* Entry: 108e00aa0; end: 108e00aaf; -[SCFeatureSettingsService setNumTimesSeenMemoriesWidgetEducationBanner:] */

void FUN_108e00aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110efaab8,param_3);
  return;
}



/* Entry: 108e00ab0; end: 108e00ab7; -[SCFeatureSettingsService memories_widget_education_banner_num_times_seen_client_value:] */

void FUN_108e00ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108e00ab8; end: 108e00abf; -[SCFeatureSettingsService memories_widget_education_banner_num_times_seen_server_value:] */

void FUN_108e00ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108e00ac0; end: 108e00acf; -[SCFeatureSettingsService numTimesSeenMemoriesWidgetEducationBanner] */

void FUN_108e00ac0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110efaab8,0);
  return;
}



/* Entry: 108e00ad0; end: 108e00adb; -[SCFeatureSettingsService isLastTimeSeenMemoriesWidgetEducationBannerAvailable] */

void FUN_108e00ad0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efaad8);
  return;
}



/* Entry: 108e00adc; end: 108e00ae7; -[SCFeatureSettingsService lastTimeSeenMemoriesWidgetEducationBannerServerParam] */

undefined ** FUN_108e00adc(void)

{
  return &PTR____CFConstantStringClassReference_110efaad8;
}



/* Entry: 108e00ae8; end: 108e00af7; -[SCFeatureSettingsService setLastTimeSeenMemoriesWidgetEducationBanner:] */

void FUN_108e00ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110efaad8,param_3);
  return;
}



/* Entry: 108e00af8; end: 108e00aff; -[SCFeatureSettingsService memories_widget_education_banner_last_seen_timestamp_seconds_client_value:] */

void FUN_108e00af8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108e00b00; end: 108e00b07; -[SCFeatureSettingsService memories_widget_education_banner_last_seen_timestamp_seconds_server_value:] */

void FUN_108e00b00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108e00b08; end: 108e00b17; -[SCFeatureSettingsService lastTimeSeenMemoriesWidgetEducationBanner] */

void FUN_108e00b08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110efaad8,0);
  return;
}



/* Entry: 108e00b18; end: 108e00b23; -[SCFeatureSettingsService getMemoriesLivePhotoPlaybackStyle] */

void FUN_108e00b18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efaaf8);
  return;
}



/* Entry: 108e00b24; end: 108e00b2f; -[SCFeatureSettingsService memoriesLivePhotoPlaybackStyleServerParam] */

undefined ** FUN_108e00b24(void)

{
  return &PTR____CFConstantStringClassReference_110efaaf8;
}



/* Entry: 108e00b30; end: 108e00b3f; -[SCFeatureSettingsService setMemoriesLivePhotoPlaybackStyle:] */

void FUN_108e00b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110efaaf8,param_3);
  return;
}



/* Entry: 108e00b40; end: 108e00b67; -[SCFeatureSettingsService camera_roll_live_photo_playback_style_client_value:] */

void FUN_108e00b40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108e00b68; end: 108e00b8f; -[SCFeatureSettingsService camera_roll_live_photo_playback_style_server_value:] */

void FUN_108e00b68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108e00b90; end: 108e00ba3; -[SCFeatureSettingsService memoriesLivePhotoPlaybackStyle] */

void FUN_108e00b90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110efaaf8,
             &PTR____CFConstantStringClassReference_110efa778);
  return;
}



/* Entry: 108e00ba4; end: 108e00baf; -[SCFeatureSettingsService isScreenshopAdsDataPermissionAvailable] */

void FUN_108e00ba4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efab18);
  return;
}



/* Entry: 108e00bb0; end: 108e00bbb; -[SCFeatureSettingsService screenshopAdsDataPermissionServerParam] */

undefined ** FUN_108e00bb0(void)

{
  return &PTR____CFConstantStringClassReference_110efab18;
}



/* Entry: 108e00bbc; end: 108e00bcb; -[SCFeatureSettingsService setScreenshopAdsDataPermission:] */

void FUN_108e00bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110efab18,param_3);
  return;
}



/* Entry: 108e00bcc; end: 108e00bd3; -[SCFeatureSettingsService commerce_screenshop_ads_data_permission_client_value:] */

undefined * FUN_108e00bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108e00bd4; end: 108e00bdb; -[SCFeatureSettingsService commerce_screenshop_ads_data_permission_server_value:] */

void FUN_108e00bd4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108e00bdc; end: 108e00beb; -[SCFeatureSettingsService screenshopAdsDataPermission] */

void FUN_108e00bdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110efab18,0);
  return;
}



/* Entry: 108e00bec; end: 108e00bf7; -[SCFeatureSettingsService isAddALensTooltipSeenCountAvailable] */

void FUN_108e00bec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efab38);
  return;
}



/* Entry: 108e00bf8; end: 108e00c03; -[SCFeatureSettingsService addALensTooltipSeenCountServerParam] */

undefined ** FUN_108e00bf8(void)

{
  return &PTR____CFConstantStringClassReference_110efab38;
}



/* Entry: 108e00c04; end: 108e00c13; -[SCFeatureSettingsService setAddALensTooltipSeenCount:] */

void FUN_108e00c04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110efab38,param_3);
  return;
}



/* Entry: 108e00c14; end: 108e00c1b; -[SCFeatureSettingsService add_a_lens_tooltip_seen_count_client_value:] */

void FUN_108e00c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108e00c1c; end: 108e00c23; -[SCFeatureSettingsService add_a_lens_tooltip_seen_count_server_value:] */

void FUN_108e00c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108e00c24; end: 108e00c33; -[SCFeatureSettingsService addALensTooltipSeenCount] */

void FUN_108e00c24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110efab38,0);
  return;
}



/* Entry: 108e00c34; end: 108e00d7b;  */

undefined1 FUN_108e00c34(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  
  _objc_retain();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dbaad8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbaad8,param_2,param_1);
  if (ppuVar2 == (undefined **)0x0) {
    uVar1 = 0;
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e29e78;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e29e78,param_2,param_1);
    if (ppuVar2 == (undefined **)0x0) {
      uVar1 = 2;
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e29e98;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e29e98,param_2,param_1);
      uVar1 = ppuVar2 == (undefined **)0x0;
    }
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108e00d7c; end: 108e00e77;  */

undefined8 FUN_108e00d7c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  
  _objc_retain();
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfbda60();
  _objc_release(param_2);
  if ((((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010bf882a0(), (uVar1 & 1) == 0)) &&
     (uVar1 = param_1, func_0x00010c0de800(), uVar1 < 2)) {
    uVar1 = param_1;
    func_0x00010c08a4e0();
    if (uVar1 != 0) {
      dVar5 = (double)(long)uVar1;
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf655e0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (dVar5 <= 5184000.0) goto LAB_108e00e54;
    }
    uVar4 = 1;
  }
  else {
LAB_108e00e54:
    uVar4 = 0;
  }
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 108e00e78; end: 108e00f43;  */

bool FUN_108e00e78(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  double dVar5;
  
  _objc_retain();
  if (((param_1 == 0) || (uVar1 = param_1, func_0x00010c0ca060(), (uVar1 & 1) != 0)) ||
     (uVar1 = param_1, func_0x00010c0de7e0(), 2 < uVar1)) {
    bVar4 = false;
  }
  else {
    uVar1 = param_1;
    func_0x00010c08a4c0();
    if (uVar1 == 0) {
      bVar4 = true;
    }
    else {
      dVar5 = (double)uVar1;
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf655e0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      bVar4 = 604800.0 < dVar5;
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_1);
  return bVar4;
}



/* Entry: 108e00f44; end: 108e00f4b; -[SCGalleryPreviewVisibleSaveLatency saveType] */

undefined8 FUN_108e00f44(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e00f4c; end: 108e00f53; -[SCGalleryPreviewVisibleSaveLatency setSaveType:] */

void FUN_108e00f4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108e00f54; end: 108e00f5b; -[SCGalleryPreviewVisibleSaveLatency savingStartTime] */

undefined8 FUN_108e00f54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e00f5c; end: 108e00f63; -[SCGalleryPreviewVisibleSaveLatency setSavingStartTime:] */

void FUN_108e00f5c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 108e00f64; end: 108e00f6b; -[SCGalleryPreviewVisibleSaveLatency savingPreprocessingEndTime] */

undefined8 FUN_108e00f64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e00f6c; end: 108e00f73; -[SCGalleryPreviewVisibleSaveLatency setSavingPreprocessingEndTime:] */

void FUN_108e00f6c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 108e00f74; end: 108e00f7b; -[SCGalleryPreviewVisibleSaveLatency savingToGalleryEndTime] */

undefined8 FUN_108e00f74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108e00f7c; end: 108e00f83; -[SCGalleryPreviewVisibleSaveLatency setSavingToGalleryEndTime:] */

void FUN_108e00f7c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 108e00f84; end: 108e00f8b; -[SCGalleryPreviewVisibleSaveLatency savingAnimationEndTime] */

undefined8 FUN_108e00f84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108e00f8c; end: 108e00f93; -[SCGalleryPreviewVisibleSaveLatency setSavingAnimationEndTime:] */

void FUN_108e00f8c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 108e00f94; end: 108e00f9b; -[SCGalleryPreviewVisibleSaveLatency status] */

undefined8 FUN_108e00f94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108e00f9c; end: 108e00fcb; -[SCGalleryPreviewVisibleSaveLatency setStatus:] */

void FUN_108e00f9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e00fcc; end: 108e00fd7; -[SCGalleryPreviewVisibleSaveLatency .cxx_destruct] */

void FUN_108e00fcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 108e00fd8; end: 108e0106b; -[SCGalleryPreviewVisibleSaveLatencyLogger initWithUserTrackedLogger:] */

undefined1 * FUN_108e00fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe9b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e0106c; end: 108e019ff; -[SCGalleryPreviewVisibleSaveLatencyLogger _logPreviewVisibleSaveLatencyWithSaveSessionId:] */

void FUN_108e0106c(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,int param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar2 = param_2;
  uVar10 = param_4;
  func_0x00010be80020(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) goto LAB_108e019a8;
  puVar3 = puVar2;
  func_0x00010c252d60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c07b020();
  if (((ulong)puVar4 & 1) != 0) {
    func_0x00010c14bea0(puVar2);
    dVar12 = param_1;
    _objc_release(puVar3);
    fVar11 = SUB84(dVar12,0);
    if (param_1 <= 0.0) goto LAB_108e019a8;
    puVar3 = PTR_PTR_1126dbf98;
    _objc_alloc_init();
    puVar4 = PTR_PTR_1126da210;
    _objc_alloc_init();
    func_0x00010c167ce0(puVar3,param_3,&PTR____CFConstantStringClassReference_110db2d38);
    puVar5 = puVar2;
    func_0x00010c252d60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c111680();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0c6c20();
    _objc_release(puVar6);
    _objc_release(puVar5);
    uVar10 = 0xffffffffffffffff;
    if (puVar7 < (undefined *)0x1b) {
      if ((1L << ((ulong)puVar7 & 0x3f) & 0x6c6f266U) == 0) {
        uVar10 = 2;
        if ((1L << ((ulong)puVar7 & 0x3f) & 0x1210c01U) == 0) {
          uVar10 = 0xffffffffffffffff;
        }
        goto LAB_108e01220;
      }
      func_0x00010c1c5440(puVar3,param_3,1);
      puVar5 = puVar2;
      func_0x00010c14b5c0(puVar2);
      func_0x00010c1f5ac0(puVar3,param_3,puVar5);
      puVar5 = puVar2;
      func_0x00010c252d60(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c111680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c4ba0();
      func_0x00010c181e20((double)fVar11,puVar3);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    else {
LAB_108e01220:
      func_0x00010c1c5440(puVar3,param_3,uVar10);
      puVar5 = puVar2;
      func_0x00010c14b5c0(puVar2);
      func_0x00010c1f5ac0(puVar3,param_3,puVar5);
      func_0x00010c181e20(0,puVar3);
    }
    puVar5 = puVar2;
    func_0x00010c252d60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c111680();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfae160();
    _objc_release(puVar6);
    _objc_release(puVar5);
    if (puVar7 == (undefined *)0x1) {
      dVar12 = 0.5;
LAB_108e012b0:
      func_0x00010c1dd7c0(dVar12,puVar4);
    }
    else {
      if (puVar7 == (undefined *)0x3) {
        dVar12 = 4.0;
        goto LAB_108e012b0;
      }
      if (puVar7 == (undefined *)0x2) {
        dVar12 = 2.0;
        goto LAB_108e012b0;
      }
      puVar5 = puVar2;
      func_0x00010c252d60();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c111680();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bfae340();
      dVar12 = -1.0;
      if ((int)puVar7 == 0) {
        dVar12 = 1.0;
      }
      func_0x00010c1dd7c0(dVar12,puVar4);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    puVar5 = puVar2;
    func_0x00010c252d60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c111680();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfadd80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a6060(puVar4,param_3,puVar7 != (undefined *)0x0);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar2;
    func_0x00010c252d60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c111680();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0d2140();
    func_0x00010c1b2a60(puVar4,param_3,puVar7 != (undefined *)0x0);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar2;
    func_0x00010c252d60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c111680();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2a8340();
    func_0x00010c1af280(puVar4,param_3,puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar2;
    func_0x00010c252d60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c111680();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2551a0();
    if ((long)puVar7 < 1) {
      puVar7 = puVar2;
      func_0x00010c252d60(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c111680();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf30820();
      func_0x00010c1a5680(puVar4,param_3,puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
    else {
      func_0x00010c1a5680(puVar4,param_3,1);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar2;
    func_0x00010c252d60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c111680();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0c6c20();
    func_0x00010c1a58e0(puVar4,param_3,puVar7 == (undefined *)0x1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar2;
    func_0x00010c252d60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c111680();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf0f140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a5900(puVar4,param_3,puVar7 != (undefined *)0x0);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar2;
    func_0x00010c252d60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c111680();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c253c00();
    func_0x00010c1a6f20(puVar4,param_3,puVar7 != (undefined *)0x0);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar2;
    func_0x00010c252d60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c111680();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf30860();
    func_0x00010c1a5b40(puVar4,param_3,puVar7 != (undefined *)0x0);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar2;
    func_0x00010c252d60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c111680();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf89ea0();
    func_0x00010c1a5d60(puVar4,param_3,puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar2;
    func_0x00010c252d60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c111680();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfae8c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar2;
    func_0x00010c252d60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c111680();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined *)0x0) {
      puVar7 = puVar6;
      func_0x00010bfadfa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar6);
      _objc_release(puVar5);
      if (puVar7 != (undefined *)0x0) {
        puVar5 = puVar2;
        func_0x00010c252d60(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c111680();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bfadfa0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_108e016d8;
      }
    }
    else {
      puVar7 = puVar6;
      func_0x00010bfae8c0();
      _objc_retainAutoreleasedReturnValue();
LAB_108e016d8:
      func_0x00010c19bd60(puVar4,param_3,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    puVar5 = puVar2;
    func_0x00010c252d60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c111680();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar4,param_3,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010c1859e0(puVar3,param_3,puVar4);
    puVar5 = puVar2;
    func_0x00010c252d60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c111680();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c06d080();
    func_0x00010c1af740(puVar3,param_3,puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010c14bfc0(puVar2);
    dVar13 = dVar12;
    func_0x00010c14c040(puVar2);
    dVar12 = dVar12 - dVar13;
    dVar16 = dVar12 * 1000.0;
    func_0x00010c14c0a0(puVar2);
    dVar14 = dVar12;
    func_0x00010c14bfc0(puVar2);
    dVar13 = dVar14;
    func_0x00010c14bea0(puVar2);
    dVar15 = dVar13;
    func_0x00010c14bfc0(puVar2);
    puVar5 = puVar2;
    func_0x00010c14b5c0();
    dVar15 = (dVar13 - dVar15) * 1000.0;
    dVar13 = 0.0;
    if (puVar5 != (undefined *)0x0) {
      dVar15 = 0.0;
      dVar13 = (dVar12 - dVar14) * 1000.0;
    }
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110efab58;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar16);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110efab78;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_b0 = puVar5;
    func_0x00010c0df720(dVar13);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110efab98;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_a8 = puVar6;
    func_0x00010c0df720(dVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_a0 = puVar7;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_b0,&ppuStack_c8,3)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    param_6 = 0;
    puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_3,puVar8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    param_5 = 4;
    func_0x00010c008340();
    func_0x00010c207ee0(puVar3,param_3,puVar6);
    _objc_release(puVar6);
    func_0x00010c14bea0(puVar2);
    dVar12 = dVar15;
    func_0x00010c14c040(puVar2);
    func_0x00010c218520(puVar3,param_3,(long)((dVar15 - dVar12) * 1000.0));
    uVar10 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar10);
    uVar10 = param_4;
    func_0x00010be8cf00(param_2,param_3,param_4);
    _objc_release(puVar5);
    _objc_release(puVar8);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
LAB_108e019a8:
  _objc_release(puVar2);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126dbfa0;
    _objc_retain(param_5);
    _objc_retain(uVar10);
    _objc_alloc_init(puVar2);
    func_0x00010c20a2c0();
    _objc_release(param_5);
    if (((param_6 & 1) != 0) || (param_7 != 0)) {
      uVar1 = 2;
      if ((int)param_6 == 0) {
        uVar1 = 0;
      }
      if (param_7 == 0) {
        uVar1 = 1;
      }
      func_0x00010c1f5ac0(puVar2,param_3,uVar1);
    }
    _CACurrentMediaTime();
    func_0x00010c1f5dc0(puVar2);
    func_0x00010bea68c0(param_4,param_3,puVar2,uVar10);
    _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 108e01a00; end: 108e01abb; -[SCGalleryPreviewVisibleSaveLatencyLogger didStartSavingWithSaveSessionId:sessionStatus:shouldSaveToMemories:shouldSaveToCameraRoll:] */

void FUN_108e01a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,int param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dbfa0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar2);
  func_0x00010c20a2c0();
  _objc_release(param_4);
  if (((param_5 & 1) != 0) || (param_6 != 0)) {
    uVar1 = 2;
    if (param_5 == 0) {
      uVar1 = 0;
    }
    if (param_6 == 0) {
      uVar1 = 1;
    }
    func_0x00010c1f5ac0(puVar2,param_2,uVar1);
  }
  _CACurrentMediaTime();
  func_0x00010c1f5dc0(puVar2);
  func_0x00010bea68c0(param_1,param_2,puVar2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108e01abc; end: 108e01b17; -[SCGalleryPreviewVisibleSaveLatencyLogger logPreviewVisibleSaveLatencySplitWithSaveSessionId:splitName:] */

void FUN_108e01abc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010be80020();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    if (param_4 == 1) {
      _CACurrentMediaTime();
      func_0x00010c1f5de0(param_1);
    }
    else if (param_4 == 0) {
      _CACurrentMediaTime();
      func_0x00010c1f5d80(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e01b18; end: 108e01b9f; -[SCGalleryPreviewVisibleSaveLatencyLogger logPreviewVisibleSaveLatencyEndWithSaveSessionId:didFinishSavingSucceeded:] */

void FUN_108e01b18(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    func_0x00010be8cf00(param_1,param_2,param_3);
  }
  else {
    lVar1 = param_1;
    func_0x00010be80020(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      _CACurrentMediaTime();
      func_0x00010c1f5d20(lVar1);
      func_0x00010be57360(param_1,param_2,param_3);
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e01ba0; end: 108e01bfb; -[SCGalleryPreviewVisibleSaveLatencyLogger _removePreviewVisibleSaveLatencyWithSaveSessionId:] */

void FUN_108e01ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e01bfc; end: 108e01c77; -[SCGalleryPreviewVisibleSaveLatencyLogger _setPreviewVisibleSaveLatency:forSaveSessionId:] */

void FUN_108e01bfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x18);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e01c78; end: 108e01cef; -[SCGalleryPreviewVisibleSaveLatencyLogger _previewVisibleSaveLatencyForSaveSessionId:] */

void FUN_108e01c78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e01cf0; end: 108e01d1f; -[SCGalleryPreviewVisibleSaveLatencyLogger .cxx_destruct] */

void FUN_108e01cf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e01d20; end: 108e01da7;  */

void FUN_108e01d20(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dbfa8;
  _objc_retain();
  _objc_alloc_init(puVar1);
  func_0x00010c1fe520();
  uVar2 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c0b2e60(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e01da8; end: 108e01ddf;  */

undefined ** FUN_108e01da8(long param_1)

{
  if (param_1 - 1U < 5) {
    return (undefined **)(&PTR_PTR_110ac5bd8)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110daf6b8;
}



/* Entry: 108e01de0; end: 108e01f5b; -[SCMemoriesSaveLoggingListenerAnnouncer description] */

void FUN_108e01de0(long param_1)

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
  
  FUN_108e01f5c(&plStack_60,param_1 + 0x48);
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


