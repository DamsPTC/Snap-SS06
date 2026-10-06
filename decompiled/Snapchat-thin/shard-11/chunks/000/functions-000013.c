/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10803f444; end: 10803f457; -[SCStoriesTrayViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803f444(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277386c,param_3);
  return;
}



/* Entry: 10803f458; end: 10803f5f3; -[SCStoriesTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803f458(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277386c);
  _objc_storeStrong(param_1 + _DAT_1127737f4,0);
  _objc_storeStrong(param_1 + _DAT_1127737fc,0);
  _objc_storeStrong(param_1 + _DAT_1127737f8,0);
  _objc_storeStrong(param_1 + _DAT_112773810,0);
  _objc_storeStrong(param_1 + _DAT_112773854,0);
  _objc_storeStrong(param_1 + _DAT_112773850,0);
  _objc_storeStrong(param_1 + _DAT_112773824,0);
  _objc_storeStrong(param_1 + _DAT_112773820,0);
  _objc_storeStrong(param_1 + _DAT_11277380c,0);
  _objc_storeStrong(param_1 + _DAT_11277384c,0);
  _objc_storeStrong(param_1 + _DAT_11277385c,0);
  _objc_storeStrong(param_1 + _DAT_112773834,0);
  _objc_storeStrong(param_1 + _DAT_112773830,0);
  _objc_storeStrong(param_1 + _DAT_112773848,0);
  _objc_storeStrong(param_1 + _DAT_112773844,0);
  _objc_storeStrong(param_1 + _DAT_112773840,0);
  _objc_storeStrong(param_1 + _DAT_11277383c,0);
  _objc_storeStrong(param_1 + _DAT_112773858,0);
  _objc_storeStrong(param_1 + _DAT_112773838,0);
  _objc_storeStrong(param_1 + _DAT_11277382c,0);
  _objc_storeStrong(param_1 + _DAT_112773828,0);
  _objc_storeStrong(param_1 + _DAT_112773864,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112773860,0);
  return;
}



/* Entry: 10803f5f4; end: 10803f5ff; -[SCFeatureSettingsService hasSeenPublicProfileNux] */

void FUN_10803f5f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ecfdb8);
  return;
}



/* Entry: 10803f600; end: 10803f60b; -[SCFeatureSettingsService seenPublicProfileNuxServerParam] */

undefined ** FUN_10803f600(void)

{
  return &PTR____CFConstantStringClassReference_110ecfdb8;
}



/* Entry: 10803f60c; end: 10803f61b; -[SCFeatureSettingsService setSeenPublicProfileNux:] */

void FUN_10803f60c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ecfdb8,param_3);
  return;
}



/* Entry: 10803f61c; end: 10803f623; -[SCFeatureSettingsService PUBLIC_PROFILE_MY_PUBLIC_PROFILE_NUX_client_value:] */

undefined * FUN_10803f61c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10803f624; end: 10803f62b; -[SCFeatureSettingsService PUBLIC_PROFILE_MY_PUBLIC_PROFILE_NUX_server_value:] */

void FUN_10803f624(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10803f62c; end: 10803f63b; -[SCFeatureSettingsService seenPublicProfileNux] */

void FUN_10803f62c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ecfdb8,0);
  return;
}



/* Entry: 10803f63c; end: 10803f647; -[SCFeatureSettingsService hasSeenPublicStoryNux] */

void FUN_10803f63c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ecfdd8);
  return;
}



/* Entry: 10803f648; end: 10803f653; -[SCFeatureSettingsService seenPublicStoryNuxServerParam] */

undefined ** FUN_10803f648(void)

{
  return &PTR____CFConstantStringClassReference_110ecfdd8;
}



/* Entry: 10803f654; end: 10803f663; -[SCFeatureSettingsService setSeenPublicStoryNux:] */

void FUN_10803f654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ecfdd8,param_3);
  return;
}



/* Entry: 10803f664; end: 10803f66b; -[SCFeatureSettingsService PUBLIC_PROFILE_PUBLIC_STORY_NUX_client_value:] */

undefined * FUN_10803f664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10803f66c; end: 10803f673; -[SCFeatureSettingsService PUBLIC_PROFILE_PUBLIC_STORY_NUX_server_value:] */

void FUN_10803f66c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10803f674; end: 10803f683; -[SCFeatureSettingsService seenPublicStoryNux] */

void FUN_10803f674(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ecfdd8,0);
  return;
}



/* Entry: 10803f684; end: 10803f68f; -[SCFeatureSettingsService hasSeenSpotlightMapNux] */

void FUN_10803f684(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ecfdf8);
  return;
}



/* Entry: 10803f690; end: 10803f69b; -[SCFeatureSettingsService seenSpotlightMapNuxServerParam] */

undefined ** FUN_10803f690(void)

{
  return &PTR____CFConstantStringClassReference_110ecfdf8;
}



/* Entry: 10803f69c; end: 10803f6ab; -[SCFeatureSettingsService setSeenSpotlightMapNux:] */

void FUN_10803f69c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ecfdf8,param_3);
  return;
}



/* Entry: 10803f6ac; end: 10803f6b3; -[SCFeatureSettingsService PUBLIC_PROFILE_SPOTLIGHT_MAP_NUX_client_value:] */

undefined * FUN_10803f6ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10803f6b4; end: 10803f6bb; -[SCFeatureSettingsService PUBLIC_PROFILE_SPOTLIGHT_MAP_NUX_server_value:] */

void FUN_10803f6b4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10803f6bc; end: 10803f6cb; -[SCFeatureSettingsService seenSpotlightMapNux] */

void FUN_10803f6bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ecfdf8,0);
  return;
}



/* Entry: 10803f6cc; end: 10803f6d7; -[SCFeatureSettingsService doesHideSavedStoryInsightsNewBanner] */

void FUN_10803f6cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ecfe18);
  return;
}



/* Entry: 10803f6d8; end: 10803f6e3; -[SCFeatureSettingsService hideSavedStoryInsightsNewBannerServerParam] */

undefined ** FUN_10803f6d8(void)

{
  return &PTR____CFConstantStringClassReference_110ecfe18;
}



/* Entry: 10803f6e4; end: 10803f6f3; -[SCFeatureSettingsService setHideSavedStoryInsightsNewBanner:] */

void FUN_10803f6e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ecfe18,param_3);
  return;
}



/* Entry: 10803f6f4; end: 10803f6fb; -[SCFeatureSettingsService HIDE_SAVED_STORY_INSIGHTS_NEW_BANNER_client_value:] */

undefined * FUN_10803f6f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10803f6fc; end: 10803f703; -[SCFeatureSettingsService HIDE_SAVED_STORY_INSIGHTS_NEW_BANNER_server_value:] */

void FUN_10803f6fc(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10803f704; end: 10803f713; -[SCFeatureSettingsService hideSavedStoryInsightsNewBanner] */

void FUN_10803f704(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ecfe18,0);
  return;
}



/* Entry: 10803f714; end: 10803f71f; -[SCFeatureSettingsService doesHideProfileInsightsNewBanner] */

void FUN_10803f714(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ecfe38);
  return;
}



/* Entry: 10803f720; end: 10803f72b; -[SCFeatureSettingsService hideProfileInsightsNewBannerServerParam] */

undefined ** FUN_10803f720(void)

{
  return &PTR____CFConstantStringClassReference_110ecfe38;
}



/* Entry: 10803f72c; end: 10803f73b; -[SCFeatureSettingsService setHideProfileInsightsNewBanner:] */

void FUN_10803f72c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ecfe38,param_3);
  return;
}



/* Entry: 10803f73c; end: 10803f743; -[SCFeatureSettingsService HIDE_PROFILE_INSIGHTS_NEW_BANNER_client_value:] */

undefined * FUN_10803f73c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10803f744; end: 10803f74b; -[SCFeatureSettingsService HIDE_PROFILE_INSIGHTS_NEW_BANNER_server_value:] */

void FUN_10803f744(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10803f74c; end: 10803f75b; -[SCFeatureSettingsService hideProfileInsightsNewBanner] */

void FUN_10803f74c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ecfe38,0);
  return;
}



/* Entry: 10803f75c; end: 10803f767; -[SCFeatureSettingsService doesHideStoriesPinnedTooltip] */

void FUN_10803f75c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ecfe58);
  return;
}



/* Entry: 10803f768; end: 10803f773; -[SCFeatureSettingsService hideStoriesPinnedTooltipServerParam] */

undefined ** FUN_10803f768(void)

{
  return &PTR____CFConstantStringClassReference_110ecfe58;
}



/* Entry: 10803f774; end: 10803f783; -[SCFeatureSettingsService setHideStoriesPinnedTooltip:] */

void FUN_10803f774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ecfe58,param_3);
  return;
}



/* Entry: 10803f784; end: 10803f78b; -[SCFeatureSettingsService PINNED_STORY_TOOLTIP_DISABLED_client_value:] */

undefined * FUN_10803f784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10803f78c; end: 10803f793; -[SCFeatureSettingsService PINNED_STORY_TOOLTIP_DISABLED_server_value:] */

void FUN_10803f78c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10803f794; end: 10803f7a3; -[SCFeatureSettingsService hideStoriesPinnedTooltip] */

void FUN_10803f794(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ecfe58,0);
  return;
}



/* Entry: 10803f7a4; end: 10803f7af; -[SCFeatureSettingsService doesHideSpotlightPinnedTooltip] */

void FUN_10803f7a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ecfe78);
  return;
}



/* Entry: 10803f7b0; end: 10803f7bb; -[SCFeatureSettingsService hideSpotlightPinnedTooltipServerParam] */

undefined ** FUN_10803f7b0(void)

{
  return &PTR____CFConstantStringClassReference_110ecfe78;
}



/* Entry: 10803f7bc; end: 10803f7cb; -[SCFeatureSettingsService setHideSpotlightPinnedTooltip:] */

void FUN_10803f7bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ecfe78,param_3);
  return;
}



/* Entry: 10803f7cc; end: 10803f7d3; -[SCFeatureSettingsService PINNED_SPOTLIGHT_TOOLTIP_DISABLED_client_value:] */

undefined * FUN_10803f7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10803f7d4; end: 10803f7db; -[SCFeatureSettingsService PINNED_SPOTLIGHT_TOOLTIP_DISABLED_server_value:] */

void FUN_10803f7d4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10803f7dc; end: 10803f7eb; -[SCFeatureSettingsService hideSpotlightPinnedTooltip] */

void FUN_10803f7dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ecfe78,0);
  return;
}



/* Entry: 10803f7ec; end: 10803f7f7; -[SCFeatureSettingsService hasSeenPublicStoryReplyModal] */

void FUN_10803f7ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ecfe98);
  return;
}



/* Entry: 10803f7f8; end: 10803f803; -[SCFeatureSettingsService seenPublicStoryReplyModalServerParam] */

undefined ** FUN_10803f7f8(void)

{
  return &PTR____CFConstantStringClassReference_110ecfe98;
}



/* Entry: 10803f804; end: 10803f813; -[SCFeatureSettingsService setSeenPublicStoryReplyModal:] */

void FUN_10803f804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ecfe98,param_3);
  return;
}



/* Entry: 10803f814; end: 10803f81b; -[SCFeatureSettingsService PUBLIC_PROFILE_STORY_REPLY_NU_client_value:] */

undefined * FUN_10803f814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10803f81c; end: 10803f823; -[SCFeatureSettingsService PUBLIC_PROFILE_STORY_REPLY_NU_server_value:] */

void FUN_10803f81c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10803f824; end: 10803f833; -[SCFeatureSettingsService seenPublicStoryReplyModal] */

void FUN_10803f824(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ecfe98,0);
  return;
}



/* Entry: 10803f834; end: 10803f83f; -[SCFeatureSettingsService publicStoryAutoSavingEnabled] */

void FUN_10803f834(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ecfeb8);
  return;
}



/* Entry: 10803f840; end: 10803f84b; -[SCFeatureSettingsService publicStoryAutoSavingServerParam] */

undefined ** FUN_10803f840(void)

{
  return &PTR____CFConstantStringClassReference_110ecfeb8;
}



/* Entry: 10803f84c; end: 10803f85b; -[SCFeatureSettingsService setPublicStoryAutoSaving:] */

void FUN_10803f84c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ecfeb8,param_3);
  return;
}



/* Entry: 10803f85c; end: 10803f863; -[SCFeatureSettingsService PUBLIC_STORY_AUTO_SAVING_client_value:] */

undefined * FUN_10803f85c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10803f864; end: 10803f86b; -[SCFeatureSettingsService PUBLIC_STORY_AUTO_SAVING_server_value:] */

void FUN_10803f864(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10803f86c; end: 10803f87b; -[SCFeatureSettingsService publicStoryAutoSaving] */

void FUN_10803f86c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ecfeb8,0);
  return;
}



/* Entry: 10803f87c; end: 10803f887; -[SCFeatureSettingsService hasSeenactivityFeedMentionsNux] */

void FUN_10803f87c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ecfed8);
  return;
}



/* Entry: 10803f888; end: 10803f893; -[SCFeatureSettingsService seenActivityFeedMentionsNuxServerParam] */

undefined ** FUN_10803f888(void)

{
  return &PTR____CFConstantStringClassReference_110ecfed8;
}



/* Entry: 10803f894; end: 10803f89b; -[SCFeatureSettingsService ACTIVITY_FEED_MENTIONS_NUX_client_value:] */

undefined * FUN_10803f894(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10803f89c; end: 10803f8a3; -[SCFeatureSettingsService ACTIVITY_FEED_MENTIONS_NUX_server_value:] */

void FUN_10803f89c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10803f8a4; end: 10803f8b3; -[SCFeatureSettingsService seenActivityFeedMentionsNux] */

void FUN_10803f8a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ecfed8,0);
  return;
}



/* Entry: 10803f8b4; end: 10803f8bf; -[SCFeatureSettingsService hasSeenSpotlightNux] */

void FUN_10803f8b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ecfef8);
  return;
}



/* Entry: 10803f8c0; end: 10803f8cb; -[SCFeatureSettingsService seenSpotlightNuxServerParam] */

undefined ** FUN_10803f8c0(void)

{
  return &PTR____CFConstantStringClassReference_110ecfef8;
}



/* Entry: 10803f8cc; end: 10803f8db; -[SCFeatureSettingsService setSeenSpotlightNux:] */

void FUN_10803f8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ecfef8,param_3);
  return;
}



/* Entry: 10803f8dc; end: 10803f8e3; -[SCFeatureSettingsService PUBLIC_PROFILE_SPOTLIGHT_NUX_client_value:] */

undefined * FUN_10803f8dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10803f8e4; end: 10803f8eb; -[SCFeatureSettingsService PUBLIC_PROFILE_SPOTLIGHT_NUX_server_value:] */

void FUN_10803f8e4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10803f8ec; end: 10803f8fb; -[SCFeatureSettingsService seenSpotlightNux] */

void FUN_10803f8ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ecfef8,0);
  return;
}



/* Entry: 10803f8fc; end: 10803f907; -[SCFeatureSettingsService hasSeenPublicProfileNux1617] */

void FUN_10803f8fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ecff18);
  return;
}



/* Entry: 10803f908; end: 10803f913; -[SCFeatureSettingsService seenPublicProfileNux1617ServerParam] */

undefined ** FUN_10803f908(void)

{
  return &PTR____CFConstantStringClassReference_110ecff18;
}



/* Entry: 10803f914; end: 10803f923; -[SCFeatureSettingsService setSeenPublicProfileNux1617:] */

void FUN_10803f914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ecff18,param_3);
  return;
}



/* Entry: 10803f924; end: 10803f92b; -[SCFeatureSettingsService PUBLIC_PROFILE_MY_PUBLIC_PROFILE_NUX_16_client_value:] */

undefined * FUN_10803f924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10803f92c; end: 10803f933; -[SCFeatureSettingsService PUBLIC_PROFILE_MY_PUBLIC_PROFILE_NUX_16_server_value:] */

void FUN_10803f92c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10803f934; end: 10803f943; -[SCFeatureSettingsService seenPublicProfileNux1617] */

void FUN_10803f934(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ecff18,0);
  return;
}



/* Entry: 10803f944; end: 10803f94f; -[SCFeatureSettingsService isBusinessIdsOnboardedToStoryAutoSavingAvailable] */

void FUN_10803f944(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ecff38);
  return;
}



/* Entry: 10803f950; end: 10803f95b; -[SCFeatureSettingsService businessIdsOnboardedToStoryAutoSavingServerParam] */

undefined ** FUN_10803f950(void)

{
  return &PTR____CFConstantStringClassReference_110ecff38;
}



/* Entry: 10803f95c; end: 10803f96b; -[SCFeatureSettingsService setBusinessIdsOnboardedToStoryAutoSaving:] */

void FUN_10803f95c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110ecff38,param_3);
  return;
}



/* Entry: 10803f96c; end: 10803f993; -[SCFeatureSettingsService SEEN_AUTO_SAVING_PUBLIC_SOTY_IDS_client_value:] */

void FUN_10803f96c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10803f994; end: 10803f9bb; -[SCFeatureSettingsService SEEN_AUTO_SAVING_PUBLIC_SOTY_IDS_server_value:] */

void FUN_10803f994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10803f9bc; end: 10803fa57; -[SCFeatureSettingsService businessIdsOnboardedToStoryAutoSaving] */

void FUN_10803f9bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110ecff38,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 10803fa58; end: 10803fc23;  */

undefined4 FUN_10803fa58(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  _objc_retain();
  func_0x00010c11f420(param_1);
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c260c00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar4 = 0;
    func_0x00010c0720c0();
    if ((uVar4 & 1) == 0) {
      uVar4 = 0;
      func_0x00010c0720c0();
      if ((uVar4 & 1) == 0) {
        uVar4 = 0;
        func_0x00010c0720c0();
        if ((uVar4 & 1) == 0) {
          uVar4 = 0;
          func_0x00010c0720c0();
          if ((uVar4 & 1) == 0) {
            uVar4 = 0;
            func_0x00010c0720c0();
            if ((uVar4 & 1) == 0) {
              uVar4 = 0;
              func_0x00010c0720c0();
              if ((uVar4 & 1) == 0) {
                uVar4 = 0;
                func_0x00010c0720c0();
                if ((uVar4 & 1) == 0) {
                  uVar4 = 0;
                  func_0x00010c0720c0();
                  if ((uVar4 & 1) == 0) {
                    uVar4 = 0;
                    func_0x00010c0720c0();
                    if ((uVar4 & 1) == 0) {
                      uVar4 = 0;
                      func_0x00010c0720c0();
                      if ((uVar4 & 1) == 0) {
                        iVar1 = 0x10ed0198;
                        func_0x00010c0720c0();
                        uVar5 = 0x18;
                        if (iVar1 == 0) {
                          uVar5 = 0;
                        }
                      }
                      else {
                        uVar5 = 0x13;
                      }
                    }
                    else {
                      uVar5 = 0xf;
                    }
                  }
                  else {
                    uVar5 = 8;
                  }
                }
                else {
                  uVar5 = 7;
                }
              }
              else {
                uVar5 = 6;
              }
            }
            else {
              uVar5 = 5;
            }
          }
          else {
            uVar5 = 4;
          }
        }
        else {
          uVar5 = 3;
        }
      }
      else {
        uVar5 = 2;
      }
    }
    else {
      uVar5 = 1;
    }
    _objc_release(uVar3);
  }
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 10803fc24; end: 10803fe3b; -[SCCustomStoriesNetworkRequester joinCustomStoryGroupWithGroupId:email:googleIdToken:msIdToken:completionQueue:completion:] */

void FUN_10803fc24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_78,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10803fe3c;
  puStack_a8 = &UNK_110a18600;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_3);
  uStack_a0 = param_3;
  _objc_retain(param_4);
  uStack_98 = param_4;
  _objc_retain(param_5);
  uStack_90 = param_5;
  _objc_retain(param_6);
  uStack_88 = param_6;
  _objc_opt_class(PTR_PTR_1126d8ec8);
  _objc_copyWeak(auStack_c8,auStack_78);
  _objc_retain(param_8);
  func_0x00010c0b77a0(uVar1);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_c8);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10803fe3c; end: 10803fefb;  */

void FUN_10803fe3c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100576e9c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010be46560(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010059c104(lVar3,param_2,&PTR____CFConstantStringClassReference_110ecff58,
                      &PTR____CFConstantStringClassReference_110ed0038,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10803fefc; end: 10804006b;  */

void FUN_10803fefc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_2);
  uVar1 = param_5;
  func_0x00010c2922a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf626e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar4 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f66a0(param_2);
  _objc_release(param_2);
  func_0x00010c15ebe0(param_5);
  func_0x00010be56480(lVar4);
  _objc_release(puVar3);
  _objc_release(lVar4);
  if (param_4 == 0) {
    lVar4 = 0;
    uVar1 = param_5;
  }
  else {
    uVar1 = 0;
    lVar4 = param_4;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1,lVar4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10804006c; end: 1080401df; -[SCCustomStoriesNetworkRequester _joinRequestWithGroupId:email:googleIdToken:msIdToken:] */

void FUN_10804006c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d8ed0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100564a1c(uVar2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebe80(puVar1);
  _objc_release(uVar2);
  func_0x00010c1a4760(puVar1);
  _objc_release(param_3);
  lVar3 = param_4;
  func_0x00010c08fa60();
  puVar5 = puVar1;
  if (lVar3 == 0) {
    puVar4 = param_5;
    func_0x00010c08fa60();
    if (puVar4 == (undefined *)0x0) {
      lVar3 = param_6;
      func_0x00010c08fa60();
      if (lVar3 == 0) goto LAB_1080401b0;
      func_0x00010c0cd200(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9980();
    }
    else {
      puVar5 = param_5;
      func_0x00010bf64920(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010bfcd560(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9980();
      _objc_release(puVar4);
    }
  }
  else {
    func_0x00010bf8d780(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c194080();
  }
  _objc_release(puVar5);
LAB_1080401b0:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1080401e0; end: 10804038b; -[SCCustomStoriesNetworkRequester createCustomStoryWithMetadata:completionQueue:completion:] */

void FUN_1080401e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10804038c;
  puStack_80 = &UNK_11094a660;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  uStack_78 = param_3;
  _objc_opt_class(PTR_PTR_1126d8ed8);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_a0,auStack_68);
  _objc_retain(param_5);
  func_0x00010c0b77a0(uVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_a0);
  _objc_release(param_3);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804038c; end: 1080403f3;  */

void FUN_10804038c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1080403f4; end: 108040643;  */

void FUN_1080403f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c27dea0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  uStack_78 = 0x10803f9d0;
  uStack_70 = 0x10803f9e0;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110db8b78;
  func_0x00010c0bf5e0(uVar4);
  uVar5 = puStack_88[5];
  _objc_retain(uVar5);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(ppuStack_68);
  _objc_release(uVar4);
  _objc_release(uVar4);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f66a0(param_2);
  _objc_release(param_2);
  func_0x00010c15ebe0(param_5);
  func_0x00010be56480(lVar2);
  _objc_release(puVar1);
  _objc_release(lVar2);
  if ((param_4 == 0) && (param_5 != 0)) {
    lVar2 = param_5;
    lVar3 = 0;
  }
  else {
    lVar2 = 0;
    lVar3 = param_4;
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar2,lVar3);
  _objc_release(uVar5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108040644; end: 1080406cb; -[SCCustomStoriesNetworkRequester _createRequestWithMetadata:accessToken:] */

void FUN_108040644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010bdf2800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010059c104();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1080406cc; end: 108040c1b; -[SCCustomStoriesNetworkRequester _createRequestWithMetadata:] */

void FUN_1080406cc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d8ee0;
  _objc_opt_new();
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100564a1c(uVar12,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebe80(puVar1);
  _objc_release(uVar12);
  puVar2 = PTR_PTR_1126d8ee8;
  _objc_opt_new();
  func_0x00010c1a4940(puVar1);
  lVar3 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18fca0(puVar2);
  _objc_release(lVar3);
  func_0x00010bf11be0(param_3);
  func_0x00010c16cf60(puVar2);
  lVar4 = param_3;
  func_0x00010c1057e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c29ef80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar4);
  _objc_retain(lVar5);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010bf529e0(lVar4);
  func_0x00010bf529e0(lVar5);
  func_0x00010c225ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar4);
      }
      uVar12 = *(undefined8 *)(lVar11 * 8);
      puVar8 = puVar7;
      func_0x00010bf4b900();
      if (((ulong)puVar8 & 1) == 0) {
        func_0x00010befa120(puVar7);
        puVar8 = PTR_PTR_1126d8f00;
        _objc_opt_new(PTR_PTR_1126d8f00);
        func_0x000100576e9c(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21e620(puVar8);
        _objc_release(uVar12);
        func_0x00010c1c5b20(puVar8);
        func_0x00010befa120(puVar6);
        _objc_release(puVar8);
      }
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar5);
      }
      uVar12 = *(undefined8 *)(lVar11 * 8);
      puVar8 = puVar7;
      func_0x00010bf4b900();
      if (((ulong)puVar8 & 1) == 0) {
        func_0x00010befa120(puVar7);
        puVar8 = PTR_PTR_1126d8f00;
        _objc_opt_new(PTR_PTR_1126d8f00);
        func_0x000100576e9c(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21e620(puVar8);
        _objc_release(uVar12);
        func_0x00010c1c5b20(puVar8);
        func_0x00010befa120(puVar6);
        _objc_release(puVar8);
      }
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_release(puVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010c1c5ae0(puVar2);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar3 = param_3;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar9 != 0) {
    lVar3 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    func_0x000100576e9c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4760(puVar2);
    _objc_release(lVar9);
    _objc_release(lVar3);
  }
  lVar3 = param_3;
  func_0x00010c27dea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  _objc_retain(puVar2);
  _objc_retain(puVar2);
  _objc_retain(puVar2);
  func_0x00010c0bf5e0(lVar3);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c188c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_setCustomStoryType__11263fd28,1);
  return;
}



/* Entry: 108040c1c; end: 108040c4b;  */

void FUN_108040c1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c188c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setCustomStoryType__11263fd28,1);
  return;
}



/* Entry: 108040c4c; end: 108040e43; -[SCCustomStoriesNetworkRequester transferSharedStoryOwnership:currentVersion:currentOwnerId:newOwnerId:completionQueue:completion:] */

void FUN_108040c4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_78,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_108040e44;
  puStack_a8 = &UNK_110a18690;
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(param_3);
  uStack_a0 = param_3;
  uStack_80 = param_4;
  _objc_retain(param_5);
  uStack_98 = param_5;
  _objc_retain(param_6);
  uStack_90 = param_6;
  _objc_opt_class(PTR_PTR_1126d8ef0);
  _objc_copyWeak(auStack_c8,auStack_78);
  _objc_retain(param_8);
  func_0x00010c0b77a0(uVar1);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_c8);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108040e44; end: 108040eb3;  */

void FUN_108040e44(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf5020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108040eb4; end: 108040ff7;  */

void FUN_108040eb4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f66a0(param_2);
  _objc_release(param_2);
  func_0x00010c15ebe0(param_5);
  func_0x00010be56480(lVar2);
  _objc_release(puVar1);
  _objc_release(lVar2);
  if ((param_4 == 0) && (param_5 != 0)) {
    lVar2 = param_5;
    lVar3 = 0;
  }
  else {
    lVar2 = 0;
    lVar3 = param_4;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar2,param_3,lVar3);
  _objc_release(param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108040ff8; end: 10804109f; -[SCCustomStoriesNetworkRequester _createTransferSharedStoryOwnershipRequest:currentVersion:currentOwnerId:newOwnerId:accessToken:] */

void FUN_108040ff8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_x6;
  
  _objc_retain(in_x6);
  func_0x00010bdf5000(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010059c104();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x6);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1080410a0; end: 10804128f; -[SCCustomStoriesNetworkRequester _createTransferSharedStoryOwnershipRequest:currentVersion:currentOwnerId:newOwnerId:] */

void FUN_1080410a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126d8ef8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100564a1c(uVar2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebe80(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x000100576e9c(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1a4760(puVar1);
  _objc_release(uVar2);
  func_0x00010c1a4be0(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8e60(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126d8f00;
  _objc_opt_new(PTR_PTR_1126d8f00);
  uVar2 = param_5;
  func_0x000100576e9c(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c21e620(puVar3);
  _objc_release(uVar2);
  func_0x00010c1c5b20(puVar3);
  puVar4 = puVar1;
  func_0x00010c0d03c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126d8f00;
  _objc_opt_new(PTR_PTR_1126d8f00);
  uVar2 = param_6;
  func_0x000100576e9c(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c21e620(puVar4);
  _objc_release(uVar2);
  func_0x00010c1c5b20(puVar4);
  puVar5 = puVar1;
  func_0x00010c0d03c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108041290; end: 10804149b; -[SCCustomStoriesNetworkRequester updateCustomStoryWithMetadata:currentVersion:originalPosterIdsPermitted:originalViewerIdsPermitted:completionQueue:completion:] */

void FUN_108041290(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_78,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10804149c;
  puStack_a8 = &UNK_110a18690;
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(param_3);
  uStack_a0 = param_3;
  uStack_80 = param_4;
  _objc_retain(param_5);
  uStack_98 = param_5;
  _objc_retain(param_6);
  uStack_90 = param_6;
  _objc_opt_class(PTR_PTR_1126d8ef0);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_c8,auStack_78);
  _objc_retain(param_8);
  func_0x00010c0b77a0(uVar1);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_c8);
  _objc_release(param_3);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10804149c; end: 10804150b;  */

void FUN_10804149c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bede940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10804150c; end: 108041677;  */

void FUN_10804150c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_2);
  func_0x00010c27dd80();
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f66a0(param_2);
  _objc_release(param_2);
  func_0x00010c15ebe0(param_5);
  func_0x00010be56480(lVar2);
  _objc_release(puVar1);
  _objc_release(lVar2);
  if ((param_4 == 0) && (param_5 != 0)) {
    lVar2 = param_5;
    lVar3 = 0;
  }
  else {
    lVar2 = 0;
    lVar3 = param_4;
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar2,param_3,lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108041678; end: 10804171f; -[SCCustomStoriesNetworkRequester _updateRequestWithMetadata:currentVersion:originalPosterIdsPermitted:originalViewerIdsPermitted:accessToken:] */

void FUN_108041678(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_x6;
  
  _objc_retain(in_x6);
  func_0x00010bede920(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010059c104();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x6);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108041720; end: 1080420bf; -[SCCustomStoriesNetworkRequester _updateRequestWithMetadata:currentVersion:originalPosterIdsPermitted:originalViewerIdsPermitted:] */

void FUN_108041720(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  undefined1 auStack_520 [8];
  undefined *puStack_518;
  undefined8 uStack_510;
  code *pcStack_508;
  undefined *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 uStack_4f0;
  undefined1 auStack_4e8 [8];
  undefined8 *puStack_4e0;
  undefined1 auStack_4d8 [8];
  undefined8 uStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 auStack_2f0 [32];
  undefined8 auStack_1f0 [16];
  undefined8 auStack_170 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = param_4;
  uVar14 = param_5;
  uVar15 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d8ef8;
  _objc_opt_new();
  uVar16 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100564a1c(uVar16,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebe80(puVar1);
  _objc_release(uVar16);
  puVar2 = param_3;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000100576e9c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4760(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c1a4be0(puVar1);
  puVar2 = param_3;
  func_0x00010c288340();
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = param_3;
    func_0x00010c28d2c0();
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar2;
    func_0x00010c18fca0(puVar1);
    _objc_release(puVar2);
  }
  puVar2 = param_3;
  func_0x00010c288340();
  if (((uint)puVar2 >> 1 & 1) != 0) {
    puVar2 = param_3;
    func_0x00010c28d200();
    if ((int)puVar2 == 0) {
      param_4 = (undefined8 *)0x1;
      func_0x00010c18e680(puVar1);
    }
    else {
      param_4 = (undefined8 *)0x1;
      func_0x00010c194a00(puVar1);
    }
  }
  puVar2 = param_3;
  func_0x00010c288340();
  if ((((uint)puVar2 >> 2 & 1) != 0) ||
     (puVar2 = param_3, func_0x00010c288340(), ((uint)puVar2 >> 3 & 1) != 0)) {
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    puVar3 = param_3;
    func_0x00010c288340();
    if (((uint)puVar3 >> 2 & 1) != 0) {
      func_0x00010befa160(puVar4);
      func_0x00010c12d360(puVar4);
      puVar3 = param_3;
      func_0x00010c28d520(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar5);
      _objc_release(puVar3);
      func_0x00010c12d360(puVar5);
    }
    puVar3 = param_3;
    func_0x00010c288340();
    if (((uint)puVar3 >> 3 & 1) != 0) {
      func_0x00010befa160(puVar2);
      func_0x00010c12d360(puVar2);
      puVar3 = param_3;
      func_0x00010c28d6c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar6);
      _objc_release(puVar3);
      func_0x00010c12d360(puVar6);
    }
    func_0x00010c0ce860(puVar6);
    func_0x00010c0ce860(puVar2);
    puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010bf529e0(puVar4);
    func_0x00010bf529e0(puVar2);
    func_0x00010c225ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010bf00560(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar7);
    _objc_release(puVar8);
    puVar3 = puVar2;
    func_0x00010bf00560(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar7);
    _objc_release(puVar3);
    puVar8 = puVar5;
    func_0x00010c0d3c80();
    func_0x00010c0ce860();
    puVar9 = puVar6;
    func_0x00010c0d3c80();
    func_0x00010c0ce860();
    puVar10 = puVar8;
    func_0x00010bf529e0();
    if ((puVar10 != (undefined *)0x0) ||
       (puVar10 = puVar9, func_0x00010bf529e0(), puVar10 != (undefined *)0x0)) {
      puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      func_0x00010c1658a0(puVar1);
      _objc_release(puVar10);
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      lStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      plStack_320 = (long *)0x0;
      _objc_retain(puVar8);
      puVar10 = puVar8;
      func_0x00010bf52a60();
      if (puVar10 != (undefined *)0x0) {
        lVar18 = *plStack_320;
        do {
          puVar17 = (undefined *)0x0;
          do {
            if (*plStack_320 != lVar18) {
              _objc_enumerationMutation(puVar8);
            }
            uVar16 = *(undefined8 *)(lStack_328 + (long)puVar17 * 8);
            puVar11 = PTR_PTR_1126d8f00;
            _objc_opt_new();
            func_0x000100576e9c(uVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c21e620(puVar11);
            _objc_release(uVar16);
            func_0x00010c1c5b20(puVar11);
            puVar12 = puVar1;
            func_0x00010befcca0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            _objc_release(puVar12);
            _objc_release(puVar11);
            puVar17 = puVar17 + 1;
          } while (puVar10 != puVar17);
          puVar10 = puVar8;
          func_0x00010bf52a60();
        } while (puVar10 != (undefined *)0x0);
      }
      _objc_release(puVar8);
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      lStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      plStack_360 = (long *)0x0;
      _objc_retain(puVar9);
      puVar13 = auStack_170;
      uVar14 = 0x10;
      puVar10 = puVar9;
      func_0x00010bf52a60();
      if (puVar10 != (undefined *)0x0) {
        lVar18 = *plStack_360;
        do {
          puVar17 = (undefined *)0x0;
          do {
            if (*plStack_360 != lVar18) {
              _objc_enumerationMutation(puVar9);
            }
            uVar16 = *(undefined8 *)(lStack_368 + (long)puVar17 * 8);
            puVar11 = PTR_PTR_1126d8f00;
            _objc_opt_new();
            func_0x000100576e9c(uVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c21e620(puVar11);
            _objc_release(uVar16);
            func_0x00010c1c5b20(puVar11);
            puVar12 = puVar1;
            func_0x00010befcca0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            _objc_release(puVar12);
            _objc_release(puVar11);
            puVar17 = puVar17 + 1;
          } while (puVar10 != puVar17);
          puVar13 = auStack_170;
          uVar14 = 0x10;
          puVar10 = puVar9;
          func_0x00010bf52a60();
        } while (puVar10 != (undefined *)0x0);
      }
      _objc_release(puVar9);
    }
    func_0x00010c0ce860(puVar7);
    func_0x00010c0ce860(puVar7);
    puVar17 = puVar7;
    func_0x00010bf529e0();
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (puVar17 != (undefined *)0x0) {
      func_0x00010bf529e0(puVar7);
      func_0x00010bf0a0e0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ea560(puVar1);
      _objc_release(puVar10);
      uStack_388 = 0;
      uStack_390 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      lStack_3a8 = 0;
      uStack_3b0 = 0;
      uStack_398 = 0;
      plStack_3a0 = (long *)0x0;
      _objc_retain(puVar7);
      puVar13 = auStack_1f0;
      uVar14 = 0x10;
      puVar10 = puVar7;
      func_0x00010bf52a60();
      if (puVar10 != (undefined *)0x0) {
        lVar18 = *plStack_3a0;
        do {
          puVar17 = (undefined *)0x0;
          do {
            if (*plStack_3a0 != lVar18) {
              _objc_enumerationMutation(puVar7);
            }
            uVar16 = *(undefined8 *)(lStack_3a8 + (long)puVar17 * 8);
            puVar11 = puVar1;
            func_0x00010c12f440();
            _objc_retainAutoreleasedReturnValue();
            func_0x000100576e9c();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar11);
            _objc_release(uVar16);
            _objc_release(puVar11);
            puVar17 = puVar17 + 1;
          } while (puVar10 != puVar17);
          puVar13 = auStack_1f0;
          uVar14 = 0x10;
          puVar10 = puVar7;
          func_0x00010bf52a60();
        } while (puVar10 != (undefined *)0x0);
      }
      _objc_release(puVar7);
    }
    func_0x00010c069840(puVar6);
    param_4 = puVar2;
    func_0x00010c069840(puVar5);
    puVar10 = puVar6;
    func_0x00010bf529e0();
    if ((puVar10 != (undefined *)0x0) ||
       (puVar10 = puVar5, func_0x00010bf529e0(), puVar10 != (undefined *)0x0)) {
      puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf529e0();
      func_0x00010bf529e0(puVar5);
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c8e60(puVar1);
      _objc_release(puVar10);
      uStack_3c8 = 0;
      uStack_3d0 = 0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      lStack_3e8 = 0;
      uStack_3f0 = 0;
      uStack_3d8 = 0;
      plStack_3e0 = (long *)0x0;
      _objc_retain(puVar5);
      puVar10 = puVar5;
      func_0x00010bf52a60();
      if (puVar10 != (undefined *)0x0) {
        lVar18 = *plStack_3e0;
        do {
          puVar17 = (undefined *)0x0;
          do {
            if (*plStack_3e0 != lVar18) {
              _objc_enumerationMutation(puVar5);
            }
            uVar16 = *(undefined8 *)(lStack_3e8 + (long)puVar17 * 8);
            puVar11 = PTR_PTR_1126d8f00;
            _objc_opt_new();
            func_0x000100576e9c(uVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c21e620(puVar11);
            _objc_release(uVar16);
            func_0x00010c1c5b20(puVar11);
            puVar12 = puVar1;
            func_0x00010c0d03c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            _objc_release(puVar12);
            _objc_release(puVar11);
            puVar17 = puVar17 + 1;
          } while (puVar10 != puVar17);
          puVar10 = puVar5;
          func_0x00010bf52a60();
        } while (puVar10 != (undefined *)0x0);
      }
      _objc_release(puVar5);
      uStack_408 = 0;
      uStack_410 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      lStack_428 = 0;
      uStack_430 = 0;
      uStack_418 = 0;
      plStack_420 = (long *)0x0;
      _objc_retain(puVar6);
      param_4 = &uStack_430;
      puVar13 = auStack_2f0;
      uVar14 = 0x10;
      puVar10 = puVar6;
      func_0x00010bf52a60();
      if (puVar10 != (undefined *)0x0) {
        lVar18 = *plStack_420;
        do {
          puVar17 = (undefined *)0x0;
          do {
            if (*plStack_420 != lVar18) {
              _objc_enumerationMutation(puVar6);
            }
            uVar16 = *(undefined8 *)(lStack_428 + (long)puVar17 * 8);
            puVar11 = PTR_PTR_1126d8f00;
            _objc_opt_new();
            func_0x000100576e9c(uVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c21e620(puVar11);
            _objc_release(uVar16);
            func_0x00010c1c5b20(puVar11);
            puVar12 = puVar1;
            func_0x00010c0d03c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            _objc_release(puVar12);
            _objc_release(puVar11);
            puVar17 = puVar17 + 1;
          } while (puVar10 != puVar17);
          param_4 = &uStack_430;
          puVar13 = auStack_2f0;
          uVar14 = 0x10;
          puVar10 = puVar6;
          func_0x00010bf52a60();
        } while (puVar10 != (undefined *)0x0);
      }
      _objc_release(puVar6);
    }
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  _objc_retain(uVar14);
  _objc_retain(uVar15);
  _objc_retain(param_7);
  _objc_initWeak(auStack_4d8,param_3);
  uVar16 = param_3[1];
  puStack_518 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_510 = 0xc2000000;
  pcStack_508 = FUN_108042288;
  puStack_500 = &UNK_110a18720;
  _objc_copyWeak(auStack_4e8,auStack_4d8);
  _objc_retain(param_4);
  puStack_4f8 = param_4;
  puStack_4e0 = puVar13;
  _objc_retain(uVar14);
  uStack_4f0 = uVar14;
  _objc_opt_class(PTR_PTR_1126d8ef0);
  _objc_copyWeak(auStack_520,auStack_4d8);
  _objc_retain(param_7);
  func_0x00010c0b77a0(uVar16);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_520);
  _objc_release(uStack_4f0);
  _objc_release(puStack_4f8);
  _objc_destroyWeak(auStack_4e8);
  _objc_destroyWeak(auStack_4d8);
  _objc_release(param_7);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(param_4);
  return;
}


