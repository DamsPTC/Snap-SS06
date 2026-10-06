/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10805ea4c; end: 10805ea5b; -[SCFeatureSettingsService setSeenAutoAdvanceTooltip:] */

void FUN_10805ea4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed0bf8,param_3);
  return;
}



/* Entry: 10805ea5c; end: 10805ea63; -[SCFeatureSettingsService auto_advance_tooltip_client_value:] */

undefined * FUN_10805ea5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10805ea64; end: 10805ea6b; -[SCFeatureSettingsService auto_advance_tooltip_server_value:] */

void FUN_10805ea64(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10805ea6c; end: 10805ea7b; -[SCFeatureSettingsService seenAutoAdvanceTooltip] */

void FUN_10805ea6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed0bf8,0);
  return;
}



/* Entry: 10805ea7c; end: 10805ea87; -[SCFeatureSettingsService hasSeenStoryLeftTapOnboarding] */

void FUN_10805ea7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0c18);
  return;
}



/* Entry: 10805ea88; end: 10805ea93; -[SCFeatureSettingsService seenStoryLeftTapOnboardingServerParam] */

undefined ** FUN_10805ea88(void)

{
  return &PTR____CFConstantStringClassReference_110ed0c18;
}



/* Entry: 10805ea94; end: 10805eaa3; -[SCFeatureSettingsService setSeenStoryLeftTapOnboarding:] */

void FUN_10805ea94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed0c18,param_3);
  return;
}



/* Entry: 10805eaa4; end: 10805eaab; -[SCFeatureSettingsService stories_left_tap_onboarding_tooltip_client_value:] */

undefined * FUN_10805eaa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10805eaac; end: 10805eab3; -[SCFeatureSettingsService stories_left_tap_onboarding_tooltip_server_value:] */

void FUN_10805eaac(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10805eab4; end: 10805eac3; -[SCFeatureSettingsService seenStoryLeftTapOnboarding] */

void FUN_10805eab4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed0c18,0);
  return;
}



/* Entry: 10805eac4; end: 10805eacf; -[SCFeatureSettingsService hasSeenStoryInterstitialSwipeTooltip] */

void FUN_10805eac4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0c38);
  return;
}



/* Entry: 10805ead0; end: 10805eadb; -[SCFeatureSettingsService seenStoryInterstitialSwipeTooltipServerParam] */

undefined ** FUN_10805ead0(void)

{
  return &PTR____CFConstantStringClassReference_110ed0c38;
}



/* Entry: 10805eadc; end: 10805eaeb; -[SCFeatureSettingsService setSeenStoryInterstitialSwipeTooltip:] */

void FUN_10805eadc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed0c38,param_3);
  return;
}



/* Entry: 10805eaec; end: 10805eaf3; -[SCFeatureSettingsService story_interstitial_swipe_tooltip_tooltip_client_value:] */

undefined * FUN_10805eaec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10805eaf4; end: 10805eafb; -[SCFeatureSettingsService story_interstitial_swipe_tooltip_tooltip_server_value:] */

void FUN_10805eaf4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10805eafc; end: 10805eb0b; -[SCFeatureSettingsService seenStoryInterstitialSwipeTooltip] */

void FUN_10805eafc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed0c38,0);
  return;
}



/* Entry: 10805eb0c; end: 10805eb17; -[SCFeatureSettingsService hasSeenStoriesForInterstitialSwipeTooltipCount] */

void FUN_10805eb0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0c58);
  return;
}



/* Entry: 10805eb18; end: 10805eb23; -[SCFeatureSettingsService seenStoriesForInterstitialSwipeTooltipCountServerParam] */

undefined ** FUN_10805eb18(void)

{
  return &PTR____CFConstantStringClassReference_110ed0c58;
}



/* Entry: 10805eb24; end: 10805eb33; -[SCFeatureSettingsService setSeenStoriesForInterstitialSwipeTooltipCount:] */

void FUN_10805eb24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed0c58,param_3);
  return;
}



/* Entry: 10805eb34; end: 10805eb3b; -[SCFeatureSettingsService seen_stories_for_interstitial_swipe_tooltip_count_client_value:] */

void FUN_10805eb34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10805eb3c; end: 10805eb43; -[SCFeatureSettingsService seen_stories_for_interstitial_swipe_tooltip_count_server_value:] */

void FUN_10805eb3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10805eb44; end: 10805eb53; -[SCFeatureSettingsService seenStoriesForInterstitialSwipeTooltipCount] */

void FUN_10805eb44(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed0c58,0);
  return;
}



/* Entry: 10805eb54; end: 10805eb5f; -[SCFeatureSettingsService isNotificationSubmittedStoryEnabled] */

void FUN_10805eb54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0c78);
  return;
}



/* Entry: 10805eb60; end: 10805eb6b; -[SCFeatureSettingsService notificationSubmittedStoryServerParam] */

undefined ** FUN_10805eb60(void)

{
  return &PTR____CFConstantStringClassReference_110ed0c78;
}



/* Entry: 10805eb6c; end: 10805eb7b; -[SCFeatureSettingsService setNotificationSubmittedStory:] */

void FUN_10805eb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed0c78,param_3);
  return;
}



/* Entry: 10805eb7c; end: 10805eb83; -[SCFeatureSettingsService notification_submitted_story_client_value:] */

undefined * FUN_10805eb7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10805eb84; end: 10805eb8b; -[SCFeatureSettingsService notification_submitted_story_server_value:] */

void FUN_10805eb84(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10805eb8c; end: 10805eb9b; -[SCFeatureSettingsService notificationSubmittedStory] */

void FUN_10805eb8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed0c78,1);
  return;
}



/* Entry: 10805eb9c; end: 10805eba7; -[SCFeatureSettingsService isNotificationOurStoryViewCountAvailable] */

void FUN_10805eb9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0c98);
  return;
}



/* Entry: 10805eba8; end: 10805ebb3; -[SCFeatureSettingsService notificationOurStoryViewCountServerParam] */

undefined ** FUN_10805eba8(void)

{
  return &PTR____CFConstantStringClassReference_110ed0c98;
}



/* Entry: 10805ebb4; end: 10805ebc3; -[SCFeatureSettingsService setNotificationOurStoryViewCount:] */

void FUN_10805ebb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed0c98,param_3);
  return;
}



/* Entry: 10805ebc4; end: 10805ebcb; -[SCFeatureSettingsService notification_our_story_view_count_client_value:] */

undefined * FUN_10805ebc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10805ebcc; end: 10805ebd3; -[SCFeatureSettingsService notification_our_story_view_count_server_value:] */

void FUN_10805ebcc(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10805ebd4; end: 10805ebe3; -[SCFeatureSettingsService notificationOurStoryViewCount] */

void FUN_10805ebd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed0c98,1);
  return;
}



/* Entry: 10805ebe4; end: 10805ebef; -[SCFeatureSettingsService hasSharedStoryModerationPromptAccepted] */

void FUN_10805ebe4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0cb8);
  return;
}



/* Entry: 10805ebf0; end: 10805ebfb; -[SCFeatureSettingsService sharedStoryModerationPromptAcceptedServerParam] */

undefined ** FUN_10805ebf0(void)

{
  return &PTR____CFConstantStringClassReference_110ed0cb8;
}



/* Entry: 10805ebfc; end: 10805ec0b; -[SCFeatureSettingsService setSharedStoryModerationPromptAccepted:] */

void FUN_10805ebfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed0cb8,param_3);
  return;
}



/* Entry: 10805ec0c; end: 10805ec13; -[SCFeatureSettingsService shared_story_moderation_prompt_accepted_client_value:] */

undefined * FUN_10805ec0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10805ec14; end: 10805ec1b; -[SCFeatureSettingsService shared_story_moderation_prompt_accepted_server_value:] */

void FUN_10805ec14(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10805ec1c; end: 10805ec2b; -[SCFeatureSettingsService sharedStoryModerationPromptAccepted] */

void FUN_10805ec1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed0cb8,0);
  return;
}



/* Entry: 10805ec2c; end: 10805ec37; -[SCFeatureSettingsService isNotificationOurStoryReplyCountAvailable] */

void FUN_10805ec2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0cd8);
  return;
}



/* Entry: 10805ec38; end: 10805ec43; -[SCFeatureSettingsService notificationOurStoryReplyCountServerParam] */

undefined ** FUN_10805ec38(void)

{
  return &PTR____CFConstantStringClassReference_110ed0cd8;
}



/* Entry: 10805ec44; end: 10805ec53; -[SCFeatureSettingsService setNotificationOurStoryReplyCount:] */

void FUN_10805ec44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed0cd8,param_3);
  return;
}



/* Entry: 10805ec54; end: 10805ec5b; -[SCFeatureSettingsService notification_our_story_reply_count_client_value:] */

undefined * FUN_10805ec54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10805ec5c; end: 10805ec63; -[SCFeatureSettingsService notification_our_story_reply_count_server_value:] */

void FUN_10805ec5c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10805ec64; end: 10805ec73; -[SCFeatureSettingsService notificationOurStoryReplyCount] */

void FUN_10805ec64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed0cd8,1);
  return;
}



/* Entry: 10805ec74; end: 10805ec7f; -[SCFeatureSettingsService hasSharedStoryNewStoryMenuBadgeAccepted] */

void FUN_10805ec74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0cf8);
  return;
}



/* Entry: 10805ec80; end: 10805ec8b; -[SCFeatureSettingsService sharedStoryNewStoryMenuBadgeServerParam] */

undefined ** FUN_10805ec80(void)

{
  return &PTR____CFConstantStringClassReference_110ed0cf8;
}



/* Entry: 10805ec8c; end: 10805ec9b; -[SCFeatureSettingsService setSharedStoryNewStoryMenuBadgeAccepted:] */

void FUN_10805ec8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed0cf8,param_3);
  return;
}



/* Entry: 10805ec9c; end: 10805eca3; -[SCFeatureSettingsService shared_story_new_story_menu_badge_client_value:] */

undefined * FUN_10805ec9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10805eca4; end: 10805ecab; -[SCFeatureSettingsService shared_story_new_story_menu_badge_server_value:] */

void FUN_10805eca4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10805ecac; end: 10805ecbb; -[SCFeatureSettingsService sharedStoryNewStoryMenuBadge] */

void FUN_10805ecac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed0cf8,0);
  return;
}



/* Entry: 10805ecbc; end: 10805ecc7; -[SCFeatureSettingsService hasSharedStoryNewStoryActionBadgeAccepted] */

void FUN_10805ecbc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0d18);
  return;
}



/* Entry: 10805ecc8; end: 10805ecd3; -[SCFeatureSettingsService sharedStoryNewStoryActionBadgeServerParam] */

undefined ** FUN_10805ecc8(void)

{
  return &PTR____CFConstantStringClassReference_110ed0d18;
}



/* Entry: 10805ecd4; end: 10805ece3; -[SCFeatureSettingsService setSharedStoryNewStoryActionBadgeAccepted:] */

void FUN_10805ecd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed0d18,param_3);
  return;
}



/* Entry: 10805ece4; end: 10805eceb; -[SCFeatureSettingsService shared_story_new_story_action_badge_client_value:] */

undefined * FUN_10805ece4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10805ecec; end: 10805ecf3; -[SCFeatureSettingsService shared_story_new_story_action_badge_server_value:] */

void FUN_10805ecec(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10805ecf4; end: 10805ed03; -[SCFeatureSettingsService sharedStoryNewStoryActionBadge] */

void FUN_10805ecf4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed0d18,0);
  return;
}



/* Entry: 10805ed04; end: 10805ed0f; -[SCFeatureSettingsService hasPrivateStoryIntroPromptAccepted] */

void FUN_10805ed04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0d38);
  return;
}



/* Entry: 10805ed10; end: 10805ed1b; -[SCFeatureSettingsService privateStoryIntroPromptAcceptedServerParam] */

undefined ** FUN_10805ed10(void)

{
  return &PTR____CFConstantStringClassReference_110ed0d38;
}



/* Entry: 10805ed1c; end: 10805ed2b; -[SCFeatureSettingsService setPrivateStoryIntroPromptAccepted:] */

void FUN_10805ed1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed0d38,param_3);
  return;
}



/* Entry: 10805ed2c; end: 10805ed33; -[SCFeatureSettingsService private_story_intro_prompt_accepted_client_value:] */

undefined * FUN_10805ed2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10805ed34; end: 10805ed3b; -[SCFeatureSettingsService private_story_intro_prompt_accepted_server_value:] */

void FUN_10805ed34(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10805ed3c; end: 10805ed4b; -[SCFeatureSettingsService privateStoryIntroPromptAccepted] */

void FUN_10805ed3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed0d38,0);
  return;
}



/* Entry: 10805ed4c; end: 10805ed57; -[SCFeatureSettingsService hasCustomStoryIntroPromptAccepted] */

void FUN_10805ed4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0d58);
  return;
}



/* Entry: 10805ed58; end: 10805ed63; -[SCFeatureSettingsService customStoryIntroPromptAcceptedServerParam] */

undefined ** FUN_10805ed58(void)

{
  return &PTR____CFConstantStringClassReference_110ed0d58;
}



/* Entry: 10805ed64; end: 10805ed73; -[SCFeatureSettingsService setCustomStoryIntroPromptAccepted:] */

void FUN_10805ed64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed0d58,param_3);
  return;
}



/* Entry: 10805ed74; end: 10805ed7b; -[SCFeatureSettingsService custom_story_intro_prompt_accepted_client_value:] */

undefined * FUN_10805ed74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10805ed7c; end: 10805ed83; -[SCFeatureSettingsService custom_story_intro_prompt_accepted_server_value:] */

void FUN_10805ed7c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10805ed84; end: 10805ed93; -[SCFeatureSettingsService customStoryIntroPromptAccepted] */

void FUN_10805ed84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed0d58,0);
  return;
}



/* Entry: 10805ed94; end: 10805ed9f; -[SCFeatureSettingsService hasCommunityStoryIntroPromptAccepted] */

void FUN_10805ed94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0d78);
  return;
}



/* Entry: 10805eda0; end: 10805edab; -[SCFeatureSettingsService communityStoryIntroPromptAcceptedServerParam] */

undefined ** FUN_10805eda0(void)

{
  return &PTR____CFConstantStringClassReference_110ed0d78;
}



/* Entry: 10805edac; end: 10805edbb; -[SCFeatureSettingsService setCommunityStoryIntroPromptAccepted:] */

void FUN_10805edac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed0d78,param_3);
  return;
}



/* Entry: 10805edbc; end: 10805edc3; -[SCFeatureSettingsService community_story_intro_prompt_accepted_client_value:] */

undefined * FUN_10805edbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10805edc4; end: 10805edcb; -[SCFeatureSettingsService community_story_intro_prompt_accepted_server_value:] */

void FUN_10805edc4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10805edcc; end: 10805eddb; -[SCFeatureSettingsService communityStoryIntroPromptAccepted] */

void FUN_10805edcc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed0d78,0);
  return;
}



/* Entry: 10805eddc; end: 10805ede7; -[SCFeatureSettingsService hasSeenMyStorySettingsPrompt] */

void FUN_10805eddc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0d98);
  return;
}



/* Entry: 10805ede8; end: 10805edf3; -[SCFeatureSettingsService seenMyStorySettingsPromptServerParam] */

undefined ** FUN_10805ede8(void)

{
  return &PTR____CFConstantStringClassReference_110ed0d98;
}



/* Entry: 10805edf4; end: 10805ee03; -[SCFeatureSettingsService setSeenMyStorySettingsPrompt:] */

void FUN_10805edf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed0d98,param_3);
  return;
}



/* Entry: 10805ee04; end: 10805ee0b; -[SCFeatureSettingsService my_story_settings_prompt_client_value:] */

undefined * FUN_10805ee04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10805ee0c; end: 10805ee13; -[SCFeatureSettingsService my_story_settings_prompt_server_value:] */

void FUN_10805ee0c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10805ee14; end: 10805ee23; -[SCFeatureSettingsService seenMyStorySettingsPrompt] */

void FUN_10805ee14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed0d98,0);
  return;
}



/* Entry: 10805ee24; end: 10805ee2f; -[SCFeatureSettingsService hasSeenSpotlightPostButtonTooltip] */

void FUN_10805ee24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0db8);
  return;
}



/* Entry: 10805ee30; end: 10805ee3b; -[SCFeatureSettingsService spotlightHasSeenPostButtonTooltipServerParam] */

undefined ** FUN_10805ee30(void)

{
  return &PTR____CFConstantStringClassReference_110ed0db8;
}



/* Entry: 10805ee3c; end: 10805ee4b; -[SCFeatureSettingsService setSeenSpotlightPostButtonTooltip:] */

void FUN_10805ee3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed0db8,param_3);
  return;
}



/* Entry: 10805ee4c; end: 10805ee53; -[SCFeatureSettingsService spotlight_has_seen_post_button_tooltip_client_value:] */

undefined * FUN_10805ee4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10805ee54; end: 10805ee5b; -[SCFeatureSettingsService spotlight_has_seen_post_button_tooltip_server_value:] */

void FUN_10805ee54(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10805ee5c; end: 10805ee6b; -[SCFeatureSettingsService spotlightHasSeenPostButtonTooltip] */

void FUN_10805ee5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed0db8,0);
  return;
}



/* Entry: 10805ee6c; end: 10805ee77; -[SCFeatureSettingsService hasSpotlightPostButtonTapped] */

void FUN_10805ee6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0dd8);
  return;
}



/* Entry: 10805ee78; end: 10805ee83; -[SCFeatureSettingsService spotlightHasTappedPostButtonServerParam] */

undefined ** FUN_10805ee78(void)

{
  return &PTR____CFConstantStringClassReference_110ed0dd8;
}



/* Entry: 10805ee84; end: 10805ee93; -[SCFeatureSettingsService setSpotlightPostButtonTapped:] */

void FUN_10805ee84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed0dd8,param_3);
  return;
}



/* Entry: 10805ee94; end: 10805ee9b; -[SCFeatureSettingsService spotlight_has_tapped_post_button_client_value:] */

undefined * FUN_10805ee94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10805ee9c; end: 10805eea3; -[SCFeatureSettingsService spotlight_has_tapped_post_button_server_value:] */

void FUN_10805ee9c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10805eea4; end: 10805eeb3; -[SCFeatureSettingsService spotlightHasTappedPostButton] */

void FUN_10805eea4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed0dd8,0);
  return;
}



/* Entry: 10805eeb4; end: 10805eebf; -[SCFeatureSettingsService hasSpotlightPostButtonTooltipLastSeenTimestamp] */

void FUN_10805eeb4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0df8);
  return;
}



/* Entry: 10805eec0; end: 10805eecb; -[SCFeatureSettingsService spotlightPostButtonTooltipLastSeenTimestampServerParam] */

undefined ** FUN_10805eec0(void)

{
  return &PTR____CFConstantStringClassReference_110ed0df8;
}



/* Entry: 10805eecc; end: 10805eedb; -[SCFeatureSettingsService setSpotlightPostButtonTooltipLastSeenTimestamp:] */

void FUN_10805eecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed0df8,param_3);
  return;
}



/* Entry: 10805eedc; end: 10805eee3; -[SCFeatureSettingsService spotlight_post_button_tooltip_last_seen_timestamp_client_value:] */

void FUN_10805eedc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10805eee4; end: 10805eeeb; -[SCFeatureSettingsService spotlight_post_button_tooltip_last_seen_timestamp_server_value:] */

void FUN_10805eee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10805eeec; end: 10805eefb; -[SCFeatureSettingsService spotlightPostButtonTooltipLastSeenTimestamp] */

void FUN_10805eeec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed0df8,0);
  return;
}


