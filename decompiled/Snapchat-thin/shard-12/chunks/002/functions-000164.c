/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ee4190; end: 108ee4197; -[SCFeatureSettingsService my_story_tooltip_client_value:] */

undefined * FUN_108ee4190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee4198; end: 108ee419f; -[SCFeatureSettingsService my_story_tooltip_server_value:] */

void FUN_108ee4198(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108ee41a0; end: 108ee41af; -[SCFeatureSettingsService seenStoriesIntroSend] */

void FUN_108ee41a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02bf8,0);
  return;
}



/* Entry: 108ee41b0; end: 108ee41bb; -[SCFeatureSettingsService hasSeenPinchResizeTooltip] */

void FUN_108ee41b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02c18);
  return;
}



/* Entry: 108ee41bc; end: 108ee41c7; -[SCFeatureSettingsService seenPinchResizeTooltipServerParam] */

undefined ** FUN_108ee41bc(void)

{
  return &PTR____CFConstantStringClassReference_110f02c18;
}



/* Entry: 108ee41c8; end: 108ee41d7; -[SCFeatureSettingsService setSeenPinchResizeTooltip:] */

void FUN_108ee41c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02c18,param_3);
  return;
}



/* Entry: 108ee41d8; end: 108ee41df; -[SCFeatureSettingsService pinch_resize_teaching_tooltip_tooltip_client_value:] */

undefined * FUN_108ee41d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee41e0; end: 108ee41e7; -[SCFeatureSettingsService pinch_resize_teaching_tooltip_tooltip_server_value:] */

void FUN_108ee41e0(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108ee41e8; end: 108ee41f7; -[SCFeatureSettingsService seenPinchResizeTooltip] */

void FUN_108ee41e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02c18,0);
  return;
}



/* Entry: 108ee41f8; end: 108ee4203; -[SCFeatureSettingsService hasSeenMultiSnapTeachingTooltipCount] */

void FUN_108ee41f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02c38);
  return;
}



/* Entry: 108ee4204; end: 108ee420f; -[SCFeatureSettingsService seenMultiSnapTeachingTooltipCountServerParam] */

undefined ** FUN_108ee4204(void)

{
  return &PTR____CFConstantStringClassReference_110f02c38;
}



/* Entry: 108ee4210; end: 108ee421f; -[SCFeatureSettingsService setSeenMultiSnapTeachingTooltipCount:] */

void FUN_108ee4210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110f02c38,param_3);
  return;
}



/* Entry: 108ee4220; end: 108ee4227; -[SCFeatureSettingsService multisnap_teaching_tooltip_count_client_value:] */

void FUN_108ee4220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108ee4228; end: 108ee422f; -[SCFeatureSettingsService multisnap_teaching_tooltip_count_server_value:] */

void FUN_108ee4228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108ee4230; end: 108ee423f; -[SCFeatureSettingsService seenMultiSnapTeachingTooltipCount] */

void FUN_108ee4230(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110f02c38,0);
  return;
}



/* Entry: 108ee4240; end: 108ee424b; -[SCFeatureSettingsService hasSeenCropTeachingTooltip] */

void FUN_108ee4240(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02c58);
  return;
}



/* Entry: 108ee424c; end: 108ee4257; -[SCFeatureSettingsService seenCropTeachingTooltipServerParam] */

undefined ** FUN_108ee424c(void)

{
  return &PTR____CFConstantStringClassReference_110f02c58;
}



/* Entry: 108ee4258; end: 108ee4267; -[SCFeatureSettingsService setSeenCropTeachingTooltip:] */

void FUN_108ee4258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02c58,param_3);
  return;
}



/* Entry: 108ee4268; end: 108ee426f; -[SCFeatureSettingsService crop_teaching_tooltip_tooltip_client_value:] */

undefined * FUN_108ee4268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee4270; end: 108ee4277; -[SCFeatureSettingsService crop_teaching_tooltip_tooltip_server_value:] */

void FUN_108ee4270(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108ee4278; end: 108ee4287; -[SCFeatureSettingsService seenCropTeachingTooltip] */

void FUN_108ee4278(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02c58,0);
  return;
}



/* Entry: 108ee4288; end: 108ee4293; -[SCFeatureSettingsService hasSeenUserTaggingOnboardingTooltip] */

void FUN_108ee4288(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02c78);
  return;
}



/* Entry: 108ee4294; end: 108ee429f; -[SCFeatureSettingsService seenUserTaggingOnboardingTooltipServerParam] */

undefined ** FUN_108ee4294(void)

{
  return &PTR____CFConstantStringClassReference_110f02c78;
}



/* Entry: 108ee42a0; end: 108ee42af; -[SCFeatureSettingsService setSeenUserTaggingOnboardingTooltip:] */

void FUN_108ee42a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02c78,param_3);
  return;
}



/* Entry: 108ee42b0; end: 108ee42b7; -[SCFeatureSettingsService user_tagging_onboard_tooltip_tooltip_client_value:] */

undefined * FUN_108ee42b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee42b8; end: 108ee42bf; -[SCFeatureSettingsService user_tagging_onboard_tooltip_tooltip_server_value:] */

void FUN_108ee42b8(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108ee42c0; end: 108ee42cf; -[SCFeatureSettingsService seenUserTaggingOnboardingTooltip] */

void FUN_108ee42c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02c78,0);
  return;
}



/* Entry: 108ee42d0; end: 108ee42db; -[SCFeatureSettingsService hasSeenMusicPreviewTooltip] */

void FUN_108ee42d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02c98);
  return;
}



/* Entry: 108ee42dc; end: 108ee42e7; -[SCFeatureSettingsService seenMusicPreviewTooltipServerParam] */

undefined ** FUN_108ee42dc(void)

{
  return &PTR____CFConstantStringClassReference_110f02c98;
}



/* Entry: 108ee42e8; end: 108ee42f7; -[SCFeatureSettingsService setSeenMusicPreviewTooltip:] */

void FUN_108ee42e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02c98,param_3);
  return;
}



/* Entry: 108ee42f8; end: 108ee42ff; -[SCFeatureSettingsService music_preview_tooltip_seen_client_value:] */

undefined * FUN_108ee42f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee4300; end: 108ee4307; -[SCFeatureSettingsService music_preview_tooltip_seen_server_value:] */

void FUN_108ee4300(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108ee4308; end: 108ee4317; -[SCFeatureSettingsService seenMusicPreviewTooltip] */

void FUN_108ee4308(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02c98,0);
  return;
}



/* Entry: 108ee4318; end: 108ee4323; -[SCFeatureSettingsService getSeenPreviewFilterStackingUITooltipCount] */

void FUN_108ee4318(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02cb8);
  return;
}



/* Entry: 108ee4324; end: 108ee432f; -[SCFeatureSettingsService seenPreviewFilterStackingUITooltipCountServerParam] */

undefined ** FUN_108ee4324(void)

{
  return &PTR____CFConstantStringClassReference_110f02cb8;
}



/* Entry: 108ee4330; end: 108ee433f; -[SCFeatureSettingsService setSeenPreviewFilterStackingUITooltipCount:] */

void FUN_108ee4330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110f02cb8,param_3);
  return;
}



/* Entry: 108ee4340; end: 108ee4347; -[SCFeatureSettingsService preview_filter_stacking_ui_tooltip_count_client_value:] */

void FUN_108ee4340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108ee4348; end: 108ee434f; -[SCFeatureSettingsService preview_filter_stacking_ui_tooltip_count_server_value:] */

void FUN_108ee4348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108ee4350; end: 108ee435f; -[SCFeatureSettingsService seenPreviewFilterStackingUITooltipCount] */

void FUN_108ee4350(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110f02cb8,0);
  return;
}



/* Entry: 108ee4360; end: 108ee436b; -[SCFeatureSettingsService hasSeenPreviewFilterStackingUISecondaryTooltip] */

void FUN_108ee4360(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02cd8);
  return;
}



/* Entry: 108ee436c; end: 108ee4377; -[SCFeatureSettingsService seenPreviewFilterStackingUISecondaryTooltipServerParam] */

undefined ** FUN_108ee436c(void)

{
  return &PTR____CFConstantStringClassReference_110f02cd8;
}



/* Entry: 108ee4378; end: 108ee4387; -[SCFeatureSettingsService setSeenPreviewFilterStackingUISecondaryTooltip:] */

void FUN_108ee4378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02cd8,param_3);
  return;
}



/* Entry: 108ee4388; end: 108ee438f; -[SCFeatureSettingsService preview_filter_stacking_ui_secondary_tooltip_client_value:] */

undefined * FUN_108ee4388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee4390; end: 108ee4397; -[SCFeatureSettingsService preview_filter_stacking_ui_secondary_tooltip_server_value:] */

void FUN_108ee4390(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108ee4398; end: 108ee43a7; -[SCFeatureSettingsService seenPreviewFilterStackingUISecondaryTooltip] */

void FUN_108ee4398(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02cd8,0);
  return;
}



/* Entry: 108ee43a8; end: 108ee43b3; -[SCFeatureSettingsService hasSeenTimelineModeRecordMoreTooltip] */

void FUN_108ee43a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02cf8);
  return;
}



/* Entry: 108ee43b4; end: 108ee43bf; -[SCFeatureSettingsService seenTimelineModeRecordMoreTooltipServerParam] */

undefined ** FUN_108ee43b4(void)

{
  return &PTR____CFConstantStringClassReference_110f02cf8;
}



/* Entry: 108ee43c0; end: 108ee43cf; -[SCFeatureSettingsService setSeenTimelineModeRecordMoreTooltip:] */

void FUN_108ee43c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02cf8,param_3);
  return;
}



/* Entry: 108ee43d0; end: 108ee43d7; -[SCFeatureSettingsService timeline_mode_record_more_tooltip_client_value:] */

undefined * FUN_108ee43d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee43d8; end: 108ee43df; -[SCFeatureSettingsService timeline_mode_record_more_tooltip_server_value:] */

void FUN_108ee43d8(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108ee43e0; end: 108ee43ef; -[SCFeatureSettingsService seenTimelineModeRecordMoreTooltip] */

void FUN_108ee43e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02cf8,0);
  return;
}



/* Entry: 108ee43f0; end: 108ee43fb; -[SCFeatureSettingsService hasSeenTimelineModeAddMoreSnapsTooltip] */

void FUN_108ee43f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02d18);
  return;
}



/* Entry: 108ee43fc; end: 108ee4407; -[SCFeatureSettingsService seenTimelineModeAddMoreSnapsTooltipServerParam] */

undefined ** FUN_108ee43fc(void)

{
  return &PTR____CFConstantStringClassReference_110f02d18;
}



/* Entry: 108ee4408; end: 108ee4417; -[SCFeatureSettingsService setSeenTimelineModeAddMoreSnapsTooltip:] */

void FUN_108ee4408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02d18,param_3);
  return;
}



/* Entry: 108ee4418; end: 108ee441f; -[SCFeatureSettingsService timeline_mode_add_more_snaps_tooltip_client_value:] */

undefined * FUN_108ee4418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee4420; end: 108ee4427; -[SCFeatureSettingsService timeline_mode_add_more_snaps_tooltip_server_value:] */

void FUN_108ee4420(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108ee4428; end: 108ee4437; -[SCFeatureSettingsService seenTimelineModeAddMoreSnapsTooltip] */

void FUN_108ee4428(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02d18,0);
  return;
}



/* Entry: 108ee4438; end: 108ee4443; -[SCFeatureSettingsService hasSeenCustomStickerOnboardingVideo] */

void FUN_108ee4438(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02d38);
  return;
}



/* Entry: 108ee4444; end: 108ee444f; -[SCFeatureSettingsService seenCustomStickerOnboardingVideoServerParam] */

undefined ** FUN_108ee4444(void)

{
  return &PTR____CFConstantStringClassReference_110f02d38;
}



/* Entry: 108ee4450; end: 108ee445f; -[SCFeatureSettingsService setSeenCustomStickerOnboardingVideo:] */

void FUN_108ee4450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02d38,param_3);
  return;
}



/* Entry: 108ee4460; end: 108ee4467; -[SCFeatureSettingsService custom_sticker_onboarding_video_client_value:] */

undefined * FUN_108ee4460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee4468; end: 108ee446f; -[SCFeatureSettingsService custom_sticker_onboarding_video_server_value:] */

void FUN_108ee4468(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108ee4470; end: 108ee447f; -[SCFeatureSettingsService seenCustomStickerOnboardingVideo] */

void FUN_108ee4470(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02d38,0);
  return;
}



/* Entry: 108ee4480; end: 108ee448b; -[SCFeatureSettingsService isSmartFiltersEnabledAvailable] */

void FUN_108ee4480(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02d58);
  return;
}



/* Entry: 108ee448c; end: 108ee4497; -[SCFeatureSettingsService smartFiltersEnabledServerParam] */

undefined ** FUN_108ee448c(void)

{
  return &PTR____CFConstantStringClassReference_110f02d58;
}



/* Entry: 108ee4498; end: 108ee44a7; -[SCFeatureSettingsService setSmartFiltersEnabled:] */

void FUN_108ee4498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02d58,param_3);
  return;
}



/* Entry: 108ee44a8; end: 108ee44af; -[SCFeatureSettingsService smart_filters_client_value:] */

undefined * FUN_108ee44a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee44b0; end: 108ee44b7; -[SCFeatureSettingsService smart_filters_server_value:] */

void FUN_108ee44b0(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108ee44b8; end: 108ee44c7; -[SCFeatureSettingsService smartFiltersEnabled] */

void FUN_108ee44b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02d58,0);
  return;
}



/* Entry: 108ee44c8; end: 108ee44d3; -[SCFeatureSettingsService isvVisualFiltersEnabledAvailable] */

void FUN_108ee44c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02d78);
  return;
}



/* Entry: 108ee44d4; end: 108ee44df; -[SCFeatureSettingsService visualFiltersEnabledServerParam] */

undefined ** FUN_108ee44d4(void)

{
  return &PTR____CFConstantStringClassReference_110f02d78;
}



/* Entry: 108ee44e0; end: 108ee44ef; -[SCFeatureSettingsService setVisualFiltersEnabled:] */

void FUN_108ee44e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02d78,param_3);
  return;
}



/* Entry: 108ee44f0; end: 108ee44f7; -[SCFeatureSettingsService visual_filters_client_value:] */

undefined * FUN_108ee44f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee44f8; end: 108ee44ff; -[SCFeatureSettingsService visual_filters_server_value:] */

void FUN_108ee44f8(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108ee4500; end: 108ee450f; -[SCFeatureSettingsService visualFiltersEnabled] */

void FUN_108ee4500(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02d78,0);
  return;
}



/* Entry: 108ee4510; end: 108ee451b; -[SCFeatureSettingsService hasSeenDirectorModeClipLevelEditTooptip] */

void FUN_108ee4510(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02d98);
  return;
}



/* Entry: 108ee451c; end: 108ee4527; -[SCFeatureSettingsService seenDirectorModeClipLevelEditTooptipServerParam] */

undefined ** FUN_108ee451c(void)

{
  return &PTR____CFConstantStringClassReference_110f02d98;
}



/* Entry: 108ee4528; end: 108ee4537; -[SCFeatureSettingsService setSeenDirectorModeClipLevelEditTooptip:] */

void FUN_108ee4528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02d98,param_3);
  return;
}



/* Entry: 108ee4538; end: 108ee453f; -[SCFeatureSettingsService director_mode_clip_level_edit_tooltip_client_value:] */

undefined * FUN_108ee4538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee4540; end: 108ee4547; -[SCFeatureSettingsService director_mode_clip_level_edit_tooltip_server_value:] */

void FUN_108ee4540(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108ee4548; end: 108ee4557; -[SCFeatureSettingsService seenDirectorModeClipLevelEditTooptip] */

void FUN_108ee4548(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02d98,0);
  return;
}



/* Entry: 108ee4558; end: 108ee4563; -[SCFeatureSettingsService hasSeenDirectorModeClipLevelEditFTUEModal] */

void FUN_108ee4558(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02db8);
  return;
}



/* Entry: 108ee4564; end: 108ee456f; -[SCFeatureSettingsService seenDirectorModeClipLevelEditFTUEModalServerParam] */

undefined ** FUN_108ee4564(void)

{
  return &PTR____CFConstantStringClassReference_110f02db8;
}



/* Entry: 108ee4570; end: 108ee457f; -[SCFeatureSettingsService setSeenDirectorModeClipLevelEditFTUEModal:] */

void FUN_108ee4570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02db8,param_3);
  return;
}



/* Entry: 108ee4580; end: 108ee4587; -[SCFeatureSettingsService director_mode_clip_level_edit_ftue_modal_client_value:] */

undefined * FUN_108ee4580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee4588; end: 108ee458f; -[SCFeatureSettingsService director_mode_clip_level_edit_ftue_modal_server_value:] */

void FUN_108ee4588(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108ee4590; end: 108ee459f; -[SCFeatureSettingsService seenDirectorModeClipLevelEditFTUEModal] */

void FUN_108ee4590(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02db8,0);
  return;
}



/* Entry: 108ee45a0; end: 108ee45ab; -[SCFeatureSettingsService hasSeenDirectorModeClipReorderTooltip] */

void FUN_108ee45a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02dd8);
  return;
}



/* Entry: 108ee45ac; end: 108ee45b7; -[SCFeatureSettingsService seenDirectorModeClipReorderTooltipServerParam] */

undefined ** FUN_108ee45ac(void)

{
  return &PTR____CFConstantStringClassReference_110f02dd8;
}



/* Entry: 108ee45b8; end: 108ee45c7; -[SCFeatureSettingsService setSeenDirectorModeClipReorderTooltip:] */

void FUN_108ee45b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02dd8,param_3);
  return;
}



/* Entry: 108ee45c8; end: 108ee45cf; -[SCFeatureSettingsService director_mode_clip_reorder_tooltip_client_value:] */

undefined * FUN_108ee45c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee45d0; end: 108ee45d7; -[SCFeatureSettingsService director_mode_clip_reorder_tooltip_server_value:] */

void FUN_108ee45d0(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108ee45d8; end: 108ee45e7; -[SCFeatureSettingsService seenDirectorModeClipReorderTooltip] */

void FUN_108ee45d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02dd8,0);
  return;
}



/* Entry: 108ee45e8; end: 108ee45f3; -[SCFeatureSettingsService hasDirectorModeDraftsUserEducationSeenCount] */

void FUN_108ee45e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02df8);
  return;
}



/* Entry: 108ee45f4; end: 108ee45ff; -[SCFeatureSettingsService directorModeDraftsUserEducationSeenCountServerParam] */

undefined ** FUN_108ee45f4(void)

{
  return &PTR____CFConstantStringClassReference_110f02df8;
}



/* Entry: 108ee4600; end: 108ee460f; -[SCFeatureSettingsService setDirectorModeDraftsUserEducationSeenCount:] */

void FUN_108ee4600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110f02df8,param_3);
  return;
}



/* Entry: 108ee4610; end: 108ee4617; -[SCFeatureSettingsService director_mode_drafts_user_education_seen_count_client_value:] */

void FUN_108ee4610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108ee4618; end: 108ee461f; -[SCFeatureSettingsService director_mode_drafts_user_education_seen_count_server_value:] */

void FUN_108ee4618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108ee4620; end: 108ee462f; -[SCFeatureSettingsService directorModeDraftsUserEducationSeenCount] */

void FUN_108ee4620(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110f02df8,0);
  return;
}



/* Entry: 108ee4630; end: 108ee477f; -[SCActionBarSaveButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108ee4630(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ff218;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1af000(puVar1);
    func_0x00010c161020(puVar1);
    func_0x00010c161080(puVar1);
    puVar3 = PTR_PTR_1126b0c40;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277d790) = 1;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277d794);
    *(undefined **)((long)puVar1 + (long)_DAT_11277d794) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar5 = (long)_DAT_11277d798;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar4);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010bf20c00(puVar1);
    func_0x00010c19f0e0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c16d4a0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}


