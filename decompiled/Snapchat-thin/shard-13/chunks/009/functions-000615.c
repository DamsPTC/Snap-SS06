/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aeea5e8; end: 10aeea5f3; -[SCFeatureSettingsService isSeenLensesButtonTooltipAvailable] */

void FUN_10aeea5e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f30fd8);
  return;
}



/* Entry: 10aeea5f4; end: 10aeea5ff; -[SCFeatureSettingsService seenLensesButtonTooltipServerParam] */

undefined ** FUN_10aeea5f4(void)

{
  return &PTR____CFConstantStringClassReference_110f30fd8;
}



/* Entry: 10aeea600; end: 10aeea60f; -[SCFeatureSettingsService setSeenLensesButtonTooltip:] */

void FUN_10aeea600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f30fd8,param_3);
  return;
}



/* Entry: 10aeea610; end: 10aeea617; -[SCFeatureSettingsService seen_lenses_button_tooltip_client_value:] */

undefined * FUN_10aeea610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10aeea618; end: 10aeea61f; -[SCFeatureSettingsService seen_lenses_button_tooltip_server_value:] */

void FUN_10aeea618(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10aeea620; end: 10aeea62f; -[SCFeatureSettingsService seenLensesButtonTooltip] */

void FUN_10aeea620(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f30fd8,0);
  return;
}



/* Entry: 10aeea630; end: 10aeea63b; -[SCFeatureSettingsService isSeenLensesSwipeTooltipAvailable] */

void FUN_10aeea630(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f30ff8);
  return;
}



/* Entry: 10aeea63c; end: 10aeea647; -[SCFeatureSettingsService seenLensesSwipeTooltipServerParam] */

undefined ** FUN_10aeea63c(void)

{
  return &PTR____CFConstantStringClassReference_110f30ff8;
}



/* Entry: 10aeea648; end: 10aeea657; -[SCFeatureSettingsService setSeenLensesSwipeTooltip:] */

void FUN_10aeea648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f30ff8,param_3);
  return;
}



/* Entry: 10aeea658; end: 10aeea65f; -[SCFeatureSettingsService seen_lenses_swipe_tooltip_client_value:] */

undefined * FUN_10aeea658(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10aeea660; end: 10aeea667; -[SCFeatureSettingsService seen_lenses_swipe_tooltip_server_value:] */

void FUN_10aeea660(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10aeea668; end: 10aeea673; -[SCFeatureSettingsService isLensExplorerCreatorsCategoryOnboardingCompletedAvailable] */

void FUN_10aeea668(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f31018);
  return;
}



/* Entry: 10aeea674; end: 10aeea67f; -[SCFeatureSettingsService lensExplorerCreatorsCategoryOnboardingCompletedServerParam] */

undefined ** FUN_10aeea674(void)

{
  return &PTR____CFConstantStringClassReference_110f31018;
}



/* Entry: 10aeea680; end: 10aeea68f; -[SCFeatureSettingsService setLensExplorerCreatorsCategoryOnboardingCompleted:] */

void FUN_10aeea680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f31018,param_3);
  return;
}



/* Entry: 10aeea690; end: 10aeea697; -[SCFeatureSettingsService lens_explorer_onboarding_creators_category_completed_client_value:] */

undefined * FUN_10aeea690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10aeea698; end: 10aeea69f; -[SCFeatureSettingsService lens_explorer_onboarding_creators_category_completed_server_value:] */

void FUN_10aeea698(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10aeea6a0; end: 10aeea6af; -[SCFeatureSettingsService lensExplorerCreatorsCategoryOnboardingCompleted] */

void FUN_10aeea6a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f31018,0);
  return;
}



/* Entry: 10aeea6b0; end: 10aeea6bb; -[SCFeatureSettingsService isLensExplorerSwipeUpHintWasShownAvailable] */

void FUN_10aeea6b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f31038);
  return;
}



/* Entry: 10aeea6bc; end: 10aeea6c7; -[SCFeatureSettingsService lensExplorerSwipeUpHintWasShownServerParam] */

undefined ** FUN_10aeea6bc(void)

{
  return &PTR____CFConstantStringClassReference_110f31038;
}



/* Entry: 10aeea6c8; end: 10aeea6d7; -[SCFeatureSettingsService setLensExplorerSwipeUpHintWasShown:] */

void FUN_10aeea6c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f31038,param_3);
  return;
}



/* Entry: 10aeea6d8; end: 10aeea6df; -[SCFeatureSettingsService lens_explorer_from_carousel_tooltip_was_shown_client_value:] */

undefined * FUN_10aeea6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10aeea6e0; end: 10aeea6e7; -[SCFeatureSettingsService lens_explorer_from_carousel_tooltip_was_shown_server_value:] */

void FUN_10aeea6e0(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10aeea6e8; end: 10aeea6f7; -[SCFeatureSettingsService lensExplorerSwipeUpHintWasShown] */

void FUN_10aeea6e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f31038,0);
  return;
}



/* Entry: 10aeea6f8; end: 10aeea703; -[SCFeatureSettingsService isLensExplorerFavoritesEmptyStateShownCountAvailable] */

void FUN_10aeea6f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f31058);
  return;
}



/* Entry: 10aeea704; end: 10aeea70f; -[SCFeatureSettingsService lensExplorerFavoritesEmptyStateShownCountServerParam] */

undefined ** FUN_10aeea704(void)

{
  return &PTR____CFConstantStringClassReference_110f31058;
}



/* Entry: 10aeea710; end: 10aeea71f; -[SCFeatureSettingsService setLensExplorerFavoritesEmptyStateShownCount:] */

void FUN_10aeea710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110f31058,param_3);
  return;
}



/* Entry: 10aeea720; end: 10aeea727; -[SCFeatureSettingsService lens_explorer_favorites_empty_state_shown_count_client_value:] */

void FUN_10aeea720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10aeea728; end: 10aeea72f; -[SCFeatureSettingsService lens_explorer_favorites_empty_state_shown_count_server_value:] */

void FUN_10aeea728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10aeea730; end: 10aeea73f; -[SCFeatureSettingsService lensExplorerFavoritesEmptyStateShownCount] */

void FUN_10aeea730(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110f31058,0);
  return;
}



/* Entry: 10aeea740; end: 10aeea74b; -[SCFeatureSettingsService isLensExplorerPressAndHoldOnboardingCompletedAvailable] */

void FUN_10aeea740(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f31078);
  return;
}



/* Entry: 10aeea74c; end: 10aeea757; -[SCFeatureSettingsService lensExplorerPressAndHoldOnboardingCompletedServerParam] */

undefined ** FUN_10aeea74c(void)

{
  return &PTR____CFConstantStringClassReference_110f31078;
}



/* Entry: 10aeea758; end: 10aeea767; -[SCFeatureSettingsService setLensExplorerPressAndHoldOnboardingCompleted:] */

void FUN_10aeea758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f31078,param_3);
  return;
}



/* Entry: 10aeea768; end: 10aeea76f; -[SCFeatureSettingsService lens_explorer_onboarding_press_and_hold_accepted_client_value:] */

undefined * FUN_10aeea768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10aeea770; end: 10aeea777; -[SCFeatureSettingsService lens_explorer_onboarding_press_and_hold_accepted_server_value:] */

void FUN_10aeea770(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10aeea778; end: 10aeea787; -[SCFeatureSettingsService lensExplorerPressAndHoldOnboardingCompleted] */

void FUN_10aeea778(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f31078,0);
  return;
}



/* Entry: 10aeea788; end: 10aeea793; -[SCFeatureSettingsService isSeenOpenLensTooltipAvailable] */

void FUN_10aeea788(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f31098);
  return;
}



/* Entry: 10aeea794; end: 10aeea79f; -[SCFeatureSettingsService seenOpenLensTooltipServerParam] */

undefined ** FUN_10aeea794(void)

{
  return &PTR____CFConstantStringClassReference_110f31098;
}



/* Entry: 10aeea7a0; end: 10aeea7af; -[SCFeatureSettingsService setSeenOpenLensTooltip:] */

void FUN_10aeea7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f31098,param_3);
  return;
}



/* Entry: 10aeea7b0; end: 10aeea7b7; -[SCFeatureSettingsService default_lens_tooltip_client_value:] */

undefined * FUN_10aeea7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10aeea7b8; end: 10aeea7bf; -[SCFeatureSettingsService default_lens_tooltip_server_value:] */

void FUN_10aeea7b8(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10aeea7c0; end: 10aeea7cf; -[SCFeatureSettingsService seenOpenLensTooltip] */

void FUN_10aeea7c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f31098,0);
  return;
}



/* Entry: 10aeea7d0; end: 10aeea7db; -[SCFeatureSettingsService isChatInputSubmenuImpressionCountAvailable] */

void FUN_10aeea7d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f310b8);
  return;
}



/* Entry: 10aeea7dc; end: 10aeea7e7; -[SCFeatureSettingsService chatInputSubmenuImpressionCountServerParam] */

undefined ** FUN_10aeea7dc(void)

{
  return &PTR____CFConstantStringClassReference_110f310b8;
}



/* Entry: 10aeea7e8; end: 10aeea7f7; -[SCFeatureSettingsService setChatInputSubmenuImpressionCount:] */

void FUN_10aeea7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110f310b8,param_3);
  return;
}



/* Entry: 10aeea7f8; end: 10aeea7ff; -[SCFeatureSettingsService chat_input_submenu_impression_count_client_value:] */

void FUN_10aeea7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10aeea800; end: 10aeea807; -[SCFeatureSettingsService chat_input_submenu_impression_count_server_value:] */

void FUN_10aeea800(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10aeea808; end: 10aeea817; -[SCFeatureSettingsService chatInputSubmenuImpressionCount] */

void FUN_10aeea808(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110f310b8,0);
  return;
}



/* Entry: 10aeea818; end: 10aeea81f; -[SCFeatureScopeLensCollectionsCarouselServices lensCollectionsCarouselFeatureStream] */

undefined8 FUN_10aeea818(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aeea820; end: 10aeea84f; -[SCFeatureScopeLensCollectionsCarouselServices .cxx_destruct] */

void FUN_10aeea820(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeea850; end: 10aeea85b; -[SCLensCameraFeatureServices .cxx_destruct] */

void FUN_10aeea850(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeea85c; end: 10aeea8a3; -[SCLensCarouselFeatureInternalServices .cxx_destruct] */

void FUN_10aeea85c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeea8a4; end: 10aeea8af; -[SCLensInfoCardLifecycleResolutionServices .cxx_destruct] */

void FUN_10aeea8a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeea8b0; end: 10aeea923; -[SCLensTalkCarouselScopedLensUIUpdateServices initWithLensUIUpdateServices:] */

undefined1 * FUN_10aeea8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701b08;
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



/* Entry: 10aeea924; end: 10aeea92b; -[SCLensTalkCarouselScopedLensUIUpdateServices lensUIUpdateServices] */

undefined8 FUN_10aeea924(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aeea92c; end: 10aeea937; -[SCLensTalkCarouselScopedLensUIUpdateServices .cxx_destruct] */

void FUN_10aeea92c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeea938; end: 10aeea9ab; -[SCLensUIUpdateServices initWithUIUpdateAnnouncer:] */

undefined1 * FUN_10aeea938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701b10;
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



/* Entry: 10aeea9ac; end: 10aeea9b3; -[SCLensUIUpdateServices uiUpdateAnnouncer] */

undefined8 FUN_10aeea9ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aeea9b4; end: 10aeea9bf; -[SCLensUIUpdateServices .cxx_destruct] */

void FUN_10aeea9b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeea9c0; end: 10aeeaa33; -[SCPreviewScopedLensUIUpdateServices initWithLensUIUpdateServices:] */

undefined1 * FUN_10aeea9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701b18;
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



/* Entry: 10aeeaa34; end: 10aeeaa3b; -[SCPreviewScopedLensUIUpdateServices lensUIUpdateServices] */

undefined8 FUN_10aeeaa34(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aeeaa3c; end: 10aeeaa47; -[SCPreviewScopedLensUIUpdateServices .cxx_destruct] */

void FUN_10aeeaa3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeeaa48; end: 10aeeaabb; -[SCSnapEditorScopedLensUIUpdateServices initWithLensUIUpdateServices:] */

undefined1 * FUN_10aeeaa48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701b20;
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



/* Entry: 10aeeaabc; end: 10aeeaac3; -[SCSnapEditorScopedLensUIUpdateServices lensUIUpdateServices] */

undefined8 FUN_10aeeaabc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aeeaac4; end: 10aeeaacf; -[SCSnapEditorScopedLensUIUpdateServices .cxx_destruct] */

void FUN_10aeeaac4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeeaad0; end: 10aeeaad7; -[SCMutablePublicCameraFeatureCatalog audioSessionEarlyActivator] */

undefined8 FUN_10aeeaad0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aeeaad8; end: 10aeeaadf; -[SCMutablePublicCameraFeatureCatalog cameraBottomUIArbitrator] */

undefined8 FUN_10aeeaad8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aeeaae0; end: 10aeeaae7; -[SCMutablePublicCameraFeatureCatalog cameraModeSelectionManager] */

undefined8 FUN_10aeeaae0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10aeeaae8; end: 10aeeaaef; -[SCMutablePublicCameraFeatureCatalog cameraTooltipArbitrator] */

undefined8 FUN_10aeeaae8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10aeeaaf0; end: 10aeeaaf7; -[SCMutablePublicCameraFeatureCatalog caption] */

undefined8 FUN_10aeeaaf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10aeeaaf8; end: 10aeeab27; -[SCMutablePublicCameraFeatureCatalog setCaption:] */

void FUN_10aeeaaf8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10aeeab28; end: 10aeeab57; -[SCMutablePublicCameraFeatureCatalog setDeviceMotionCapture:] */

void FUN_10aeeab28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aeeab58; end: 10aeeab5f; -[SCMutablePublicCameraFeatureCatalog captureControls] */

undefined8 FUN_10aeeab58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10aeeab60; end: 10aeeab67; -[SCMutablePublicCameraFeatureCatalog lens3DModeActivator] */

undefined8 FUN_10aeeab60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10aeeab68; end: 10aeeab6f; -[SCMutablePublicCameraFeatureCatalog lensCloseButton] */

undefined8 FUN_10aeeab68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10aeeab70; end: 10aeeab77; -[SCMutablePublicCameraFeatureCatalog lensCollectionsCarousel] */

undefined8 FUN_10aeeab70(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10aeeab78; end: 10aeeab7f; -[SCMutablePublicCameraFeatureCatalog lensCollectionsUIArbitrator] */

undefined8 FUN_10aeeab78(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10aeeab80; end: 10aeeab87; -[SCMutablePublicCameraFeatureCatalog lensExplorerTabBarButton] */

undefined8 FUN_10aeeab80(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10aeeab88; end: 10aeeab8f; -[SCMutablePublicCameraFeatureCatalog lensExplorerFromCarouselOverlay] */

undefined8 FUN_10aeeab88(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10aeeab90; end: 10aeeab97; -[SCMutablePublicCameraFeatureCatalog lensOpera] */

undefined8 FUN_10aeeab90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 10aeeab98; end: 10aeeab9f; -[SCMutablePublicCameraFeatureCatalog lensPreviewAction] */

undefined8 FUN_10aeeab98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 10aeeaba0; end: 10aeeaba7; -[SCMutablePublicCameraFeatureCatalog lensPushNotification] */

undefined8 FUN_10aeeaba0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 10aeeaba8; end: 10aeeabaf; -[SCMutablePublicCameraFeatureCatalog levelerMode] */

undefined8 FUN_10aeeaba8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 10aeeabb0; end: 10aeeabb7; -[SCMutablePublicCameraFeatureCatalog lensReverseCameraActivator] */

undefined8 FUN_10aeeabb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 10aeeabb8; end: 10aeeabe7; -[SCMutablePublicCameraFeatureCatalog setLensReverseCameraActivator:] */

void FUN_10aeeabb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aeeabe8; end: 10aeeabef; -[SCMutablePublicCameraFeatureCatalog micNotification] */

undefined8 FUN_10aeeabe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 10aeeabf0; end: 10aeeabf7; -[SCMutablePublicCameraFeatureCatalog musicFavoritesButton] */

undefined8 FUN_10aeeabf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 10aeeabf8; end: 10aeeac27; -[SCMutablePublicCameraFeatureCatalog setMusicFavoritesButton:] */

void FUN_10aeeabf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aeeac28; end: 10aeeac2f; -[SCMutablePublicCameraFeatureCatalog musicMemoriesButton] */

undefined8 FUN_10aeeac28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}



/* Entry: 10aeeac30; end: 10aeeac5f; -[SCMutablePublicCameraFeatureCatalog setMusicMemoriesButton:] */

void FUN_10aeeac30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x168) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aeeac60; end: 10aeeac67; -[SCMutablePublicCameraFeatureCatalog previewEventDelegate] */

undefined8 FUN_10aeeac60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x180);
}



/* Entry: 10aeeac68; end: 10aeeac6f; -[SCMutablePublicCameraFeatureCatalog privacyView] */

undefined8 FUN_10aeeac68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x188);
}



/* Entry: 10aeeac70; end: 10aeeac77; -[SCMutablePublicCameraFeatureCatalog arSessionBlurLoadingView] */

undefined8 FUN_10aeeac70(long param_1)

{
  return *(undefined8 *)(param_1 + 400);
}



/* Entry: 10aeeac78; end: 10aeeac7f; -[SCMutablePublicCameraFeatureCatalog realTimeScan] */

undefined8 FUN_10aeeac78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}



/* Entry: 10aeeac80; end: 10aeeac87; -[SCMutablePublicCameraFeatureCatalog remix] */

undefined8 FUN_10aeeac80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a8);
}



/* Entry: 10aeeac88; end: 10aeeacb7; -[SCMutablePublicCameraFeatureCatalog setRemix:] */

void FUN_10aeeac88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aeeacb8; end: 10aeeacbf; -[SCMutablePublicCameraFeatureCatalog teachingTooltips] */

undefined8 FUN_10aeeacb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e8);
}



/* Entry: 10aeeacc0; end: 10aeeacc7; -[SCMutablePublicCameraFeatureCatalog cameraModeActivator] */

undefined8 FUN_10aeeacc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x200);
}



/* Entry: 10aeeacc8; end: 10aeeacf7; -[SCMutablePublicCameraFeatureCatalog setCameraModeActivator:] */

void FUN_10aeeacc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aeeacf8; end: 10aeeacff; -[SCMutablePublicCameraFeatureCatalog zoomFactors] */

undefined8 FUN_10aeeacf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x230);
}



/* Entry: 10aeead00; end: 10aeead2f; -[SCMutablePublicCameraFeatureCatalog setDirectorMode:] */

void FUN_10aeead00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x248) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


