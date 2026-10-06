/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108065898; end: 1080658a3; -[SCFeatureSettingsService mapInferredSchoolOnboardingSeenServerParam] */

undefined ** FUN_108065898(void)

{
  return &PTR____CFConstantStringClassReference_110ed2878;
}



/* Entry: 1080658a4; end: 1080658b3; -[SCFeatureSettingsService setMapInferredSchoolOnboardingSeen:] */

void FUN_1080658a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed2878,param_3);
  return;
}



/* Entry: 1080658b4; end: 1080658bb; -[SCFeatureSettingsService map_inferred_school_onboarding_seen_client_value:] */

undefined * FUN_1080658b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1080658bc; end: 1080658c3; -[SCFeatureSettingsService map_inferred_school_onboarding_seen_server_value:] */

void FUN_1080658bc(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 1080658c4; end: 1080658d3; -[SCFeatureSettingsService mapInferredSchoolOnboardingSeen] */

void FUN_1080658c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed2878,0);
  return;
}



/* Entry: 1080658d4; end: 1080658df; -[SCFeatureSettingsService hasMapShareBackBannerLastSeenTimestamp] */

void FUN_1080658d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2898);
  return;
}



/* Entry: 1080658e0; end: 1080658eb; -[SCFeatureSettingsService mapShareBackBannerLastSeenTimestampServerParam] */

undefined ** FUN_1080658e0(void)

{
  return &PTR____CFConstantStringClassReference_110ed2898;
}



/* Entry: 1080658ec; end: 1080658fb; -[SCFeatureSettingsService setMapShareBackBannerLastSeenTimestamp:] */

void FUN_1080658ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed2898,param_3);
  return;
}



/* Entry: 1080658fc; end: 108065903; -[SCFeatureSettingsService map_share_back_banner_last_seen_timestamp_client_value:] */

void FUN_1080658fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108065904; end: 10806590b; -[SCFeatureSettingsService map_share_back_banner_last_seen_timestamp_server_value:] */

void FUN_108065904(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10806590c; end: 10806591b; -[SCFeatureSettingsService mapShareBackBannerLastSeenTimestamp] */

void FUN_10806590c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed2898,0);
  return;
}



/* Entry: 10806591c; end: 108065927; -[SCFeatureSettingsService hasMapNavBarTooltipFlowLastUpdated] */

void FUN_10806591c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed28b8);
  return;
}



/* Entry: 108065928; end: 108065933; -[SCFeatureSettingsService mapNavBarTooltipFlowLastUpdatedServerParam] */

undefined ** FUN_108065928(void)

{
  return &PTR____CFConstantStringClassReference_110ed28b8;
}



/* Entry: 108065934; end: 108065943; -[SCFeatureSettingsService setMapNavBarTooltipFlowLastUpdated:] */

void FUN_108065934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed28b8,param_3);
  return;
}



/* Entry: 108065944; end: 10806594b; -[SCFeatureSettingsService map_nav_bar_tooltip_flow_last_updated_client_value:] */

void FUN_108065944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10806594c; end: 108065953; -[SCFeatureSettingsService map_nav_bar_tooltip_flow_last_updated_server_value:] */

void FUN_10806594c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108065954; end: 108065963; -[SCFeatureSettingsService mapNavBarTooltipFlowLastUpdated] */

void FUN_108065954(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed28b8,0);
  return;
}



/* Entry: 108065964; end: 10806596f; -[SCFeatureSettingsService hasMapNavBarTooltipShownCount] */

void FUN_108065964(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed28d8);
  return;
}



/* Entry: 108065970; end: 10806597b; -[SCFeatureSettingsService mapNavBarTooltipShownCountServerParam] */

undefined ** FUN_108065970(void)

{
  return &PTR____CFConstantStringClassReference_110ed28d8;
}



/* Entry: 10806597c; end: 10806598b; -[SCFeatureSettingsService setMapNavBarTooltipShownCount:] */

void FUN_10806597c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed28d8,param_3);
  return;
}



/* Entry: 10806598c; end: 108065993; -[SCFeatureSettingsService map_nav_bar_tooltip_shown_count_client_value:] */

void FUN_10806598c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108065994; end: 10806599b; -[SCFeatureSettingsService map_nav_bar_tooltip_shown_count_server_value:] */

void FUN_108065994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10806599c; end: 1080659ab; -[SCFeatureSettingsService mapNavBarTooltipShownCount] */

void FUN_10806599c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed28d8,0);
  return;
}



/* Entry: 1080659ac; end: 1080659b7; -[SCFeatureSettingsService hasMapMusicOnboardingPromptSeenTimestamp] */

void FUN_1080659ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed28f8);
  return;
}



/* Entry: 1080659b8; end: 1080659c3; -[SCFeatureSettingsService mapMusicOnboardingPromptSeenTimestampServerParam] */

undefined ** FUN_1080659b8(void)

{
  return &PTR____CFConstantStringClassReference_110ed28f8;
}



/* Entry: 1080659c4; end: 1080659d3; -[SCFeatureSettingsService setMapMusicOnboardingPromptSeenTimestamp:] */

void FUN_1080659c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed28f8,param_3);
  return;
}



/* Entry: 1080659d4; end: 1080659db; -[SCFeatureSettingsService map_music_onboarding_prompt_seen_timestamp_client_value:] */

void FUN_1080659d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 1080659dc; end: 1080659e3; -[SCFeatureSettingsService map_music_onboarding_prompt_seen_timestamp_server_value:] */

void FUN_1080659dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1080659e4; end: 1080659f3; -[SCFeatureSettingsService mapMusicOnboardingPromptSeenTimestamp] */

void FUN_1080659e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed28f8,0);
  return;
}



/* Entry: 1080659f4; end: 1080659ff; -[SCFeatureSettingsService hasMapMusicOnboardingPromptSeenCount] */

void FUN_1080659f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2918);
  return;
}



/* Entry: 108065a00; end: 108065a0b; -[SCFeatureSettingsService mapMusicOnboardingPromptSeenCountServerParam] */

undefined ** FUN_108065a00(void)

{
  return &PTR____CFConstantStringClassReference_110ed2918;
}



/* Entry: 108065a0c; end: 108065a1b; -[SCFeatureSettingsService setMapMusicOnboardingPromptSeenCount:] */

void FUN_108065a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed2918,param_3);
  return;
}



/* Entry: 108065a1c; end: 108065a23; -[SCFeatureSettingsService map_music_onboarding_prompt_seen_count_client_value:] */

void FUN_108065a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108065a24; end: 108065a2b; -[SCFeatureSettingsService map_music_onboarding_prompt_seen_count_server_value:] */

void FUN_108065a24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108065a2c; end: 108065a3b; -[SCFeatureSettingsService mapMusicOnboardingPromptSeenCount] */

void FUN_108065a2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed2918,0);
  return;
}



/* Entry: 108065a3c; end: 108065a47; -[SCFeatureSettingsService hasMapGhostModeBannerLastSeenTimestamp] */

void FUN_108065a3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2938);
  return;
}



/* Entry: 108065a48; end: 108065a53; -[SCFeatureSettingsService mapGhostModeBannerLastSeenTimestampServerParam] */

undefined ** FUN_108065a48(void)

{
  return &PTR____CFConstantStringClassReference_110ed2938;
}



/* Entry: 108065a54; end: 108065a63; -[SCFeatureSettingsService setMapGhostModeBannerLastSeenTimestamp:] */

void FUN_108065a54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed2938,param_3);
  return;
}



/* Entry: 108065a64; end: 108065a6b; -[SCFeatureSettingsService map_ghost_mode_banner_last_seen_timestamp_client_value:] */

void FUN_108065a64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108065a6c; end: 108065a73; -[SCFeatureSettingsService map_ghost_mode_banner_last_seen_timestamp_server_value:] */

void FUN_108065a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108065a74; end: 108065a83; -[SCFeatureSettingsService mapGhostModeBannerLastSeenTimestamp] */

void FUN_108065a74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed2938,0);
  return;
}



/* Entry: 108065a84; end: 108065c43;  */

void FUN_108065a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126ae630;
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_2);
  func_0x00010bfe6000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ad780();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  func_0x00010bfee200();
  puVar2 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010c297260(puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b5a68;
  _objc_alloc(PTR_PTR_1126b5a68);
  func_0x00010c000e00();
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_2);
  func_0x00010bf9d620(param_4);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(puVar3);
  return;
}



/* Entry: 108065c44; end: 108065c5b;  */

void FUN_108065c44(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 108065c5c; end: 108065d37;  */

void FUN_108065c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  _objc_release(param_2);
  FUN_108065a84(param_1,puVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108065d38; end: 108065e47;  */

void FUN_108065d38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_80;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_initWeak(auStack_40,param_3);
  _objc_release(param_3);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108065e48;
  puStack_68 = &UNK_110a19620;
  _objc_copyWeak(auStack_58,auStack_38);
  uStack_60 = param_2;
  _objc_retain(param_2);
  _objc_copyWeak(auStack_50,auStack_40);
  uStack_48 = param_4;
  _objc_retainBlock(&puStack_80);
  puVar2 = (undefined1 *)ppuVar1;
  _objc_retainBlock();
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(uStack_60);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108065e48; end: 108065ef3;  */

bool FUN_108065e48(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar3);
    FUN_108065c5c(param_2,lVar2,1,uVar4,lVar3,*(undefined8 *)(param_1 + 0x38),0);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_2);
  return lVar1 != 0;
}



/* Entry: 108065ef4; end: 108065f6f;  */

void FUN_108065ef4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c0ee940(param_1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  if ((lVar1 == 0) && (lVar2 = param_1, func_0x00010c06d560(), (int)lVar2 == 0)) {
    lVar3 = 0;
  }
  _objc_retain(lVar3);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108065f70; end: 108065ffb;  */

void FUN_108065f70(undefined8 param_1,long param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_108065ffc;
    puStack_30 = &UNK_11089b0f0;
    _objc_retain(param_1);
    uStack_28 = param_1;
    func_0x000100504554(param_2,&puStack_48);
    _objc_release(uStack_28);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108065ffc; end: 10806607b;  */

void FUN_108065ffc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0ee920(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  if ((lVar2 == 0) && (lVar3 = lVar1, func_0x00010c06d560(), (int)lVar3 == 0)) {
    lVar4 = 0;
  }
  _objc_retain(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10806607c; end: 10806622f;  */

undefined * FUN_10806607c(undefined *param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR_PTR_1126d9088;
  _objc_opt_new();
  func_0x00010bf600a0(param_1);
  func_0x00010c17cb80(puVar2);
  func_0x00010c0df240(param_1);
  func_0x00010c1ed7c0(puVar2);
  func_0x00010c06fce0(param_1);
  func_0x00010c1b23e0(puVar2);
  puVar3 = param_1;
  func_0x00010bfd6060(param_1);
  func_0x00010c1f5cc0(puVar2);
  puVar4 = puVar2;
  func_0x00010c076ba0();
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = PTR_PTR_1126beb00;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010bf60160();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar9);
        }
        func_0x00010bf885a0(*(undefined8 *)((long)puVar10 * 8));
        func_0x00010befc800(puVar4);
        puVar10 = puVar10 + 1;
      } while (puVar3 != puVar10);
      puVar3 = puVar9;
      func_0x00010bf52a60();
    }
    _objc_release(puVar9);
    puVar3 = puVar4;
    func_0x00010c227c60(puVar2);
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(puVar3);
  puVar2 = param_1;
  func_0x00010c091b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010c0956e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = param_1;
      func_0x00010c097460();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bf529e0();
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        uVar5 = param_2;
        func_0x00010befec80();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c06bcc0();
        _objc_release(uVar6);
        _objc_release(uVar5);
        if ((uVar7 & 1) == 0) {
          uVar5 = param_2;
          func_0x00010c0f7f60();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c079d60();
          _objc_release(uVar6);
          _objc_release(uVar5);
          if ((uVar7 & 1) == 0) {
            puVar2 = puVar3;
            func_0x00010c269d40(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar2;
            func_0x00010bf08000();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar4;
            func_0x00010bf529e0();
            puVar9 = (undefined *)(ulong)(puVar9 != (undefined *)0x0);
            _objc_release(puVar4);
            _objc_release(puVar2);
            goto LAB_108066348;
          }
        }
      }
    }
  }
  puVar9 = (undefined *)0x1;
LAB_108066348:
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar9;
}



/* Entry: 108066230; end: 1080663bb;  */

bool FUN_108066230(long param_1,ulong param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c091b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010c0956e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1;
      func_0x00010c097460();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf529e0();
      _objc_release(lVar2);
      if (lVar3 == 0) {
        uVar4 = param_2;
        func_0x00010befec80();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c06bcc0();
        _objc_release(uVar5);
        _objc_release(uVar4);
        if ((uVar6 & 1) == 0) {
          uVar4 = param_2;
          func_0x00010c0f7f60();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c079d60();
          _objc_release(uVar5);
          _objc_release(uVar4);
          if ((uVar6 & 1) == 0) {
            lVar2 = param_3;
            func_0x00010c269d40(param_3);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar2;
            func_0x00010bf08000();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar3;
            func_0x00010bf529e0();
            bVar1 = lVar7 != 0;
            _objc_release(lVar3);
            _objc_release(lVar2);
            goto LAB_108066348;
          }
        }
      }
    }
  }
  bVar1 = true;
LAB_108066348:
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1080663bc; end: 10806646b; -[SCStoriesLegacySnapInfoCollector init] */

undefined1 * FUN_1080663bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fc3a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10806646c; end: 1080664bf; -[SCStoriesLegacySnapInfoCollector currentSnapEditTime] */

undefined8 FUN_10806646c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1080664c0; end: 10806686b; -[SCStoriesLegacySnapInfoCollector didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_1080664c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar1 == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0();
      if ((int)uVar1 == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0();
        if ((int)uVar1 == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0();
          if ((int)uVar1 == 0) {
            uVar1 = param_3;
            func_0x00010c0720c0();
            if ((int)uVar1 == 0) goto LAB_108066808;
            func_0x00010c069d00(*(undefined8 *)(param_1 + 0x10));
            uVar6 = *(ulong *)(param_1 + 0x10);
            *(undefined8 *)(param_1 + 0x10) = 0;
          }
          else {
            _objc_retain(param_1);
            _objc_sync_enter(param_1);
            puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            _objc_opt_new();
            uVar1 = *(undefined8 *)(param_1 + 0x20);
            *(undefined **)(param_1 + 0x20) = puVar2;
            _objc_release(uVar1);
            _objc_sync_exit(param_1);
            _objc_release(param_1);
            uVar3 = param_5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010010fab4();
            uVar6 = uVar3;
            if ((int)uVar4 == 0) {
              uVar6 = 0;
            }
            _objc_retain(uVar6);
            _objc_release(uVar3);
            _objc_initWeak(auStack_68,param_1);
            puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_90 = 0xc2000000;
            pcStack_88 = FUN_10806686c;
            puStack_80 = &UNK_110841fb0;
            _objc_copyWeak(auStack_70,auStack_68);
            _objc_retain(uVar6);
            ppuVar5 = &puStack_98;
            uStack_78 = uVar6;
            _objc_retainBlock(ppuVar5);
            func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18));
            puVar2 = PTR_PTR_1126ae888;
            _objc_alloc();
            uVar1 = *(undefined8 *)(param_1 + 0x18);
            func_0x00010c11de00(uVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0522e0(0x3ff0000000000000);
            uVar7 = *(undefined8 *)(param_1 + 0x10);
            *(undefined **)(param_1 + 0x10) = puVar2;
            _objc_release(uVar7);
            _objc_release(uVar1);
            _objc_release(ppuVar5);
            _objc_release(uStack_78);
            _objc_destroyWeak(auStack_70);
            _objc_destroyWeak(auStack_68);
          }
          _objc_release(uVar6);
        }
        else {
          *(undefined1 *)(param_1 + 0x28) = 0;
          puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = *(undefined8 *)(param_1 + 8);
          *(undefined **)(param_1 + 8) = puVar2;
          _objc_release(uVar1);
          uVar3 = param_5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
          uVar4 = uVar3;
          _objc_opt_isKindOfClass(uVar3,puVar2);
          uVar6 = uVar3;
          if ((uVar4 & 1) == 0) {
            uVar6 = 0;
          }
          _objc_retain(uVar6);
          _objc_release(uVar3);
          uVar3 = uVar6;
          func_0x00010bf1f3c0();
          _objc_release(uVar6);
          *(char *)(param_1 + 0x29) = (char)uVar3;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x28) = 1;
      }
    }
    else {
      *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
    }
  }
  else {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    *(undefined8 *)(param_1 + 0x38) = 0;
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar1);
    *(undefined2 *)(param_1 + 0x28) = 0;
  }
LAB_108066808:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10806686c; end: 10806689f;  */

void FUN_10806686c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be98820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080668a0; end: 1080668fb; -[SCStoriesLegacySnapInfoCollector currentSnapZoomLevels] */

void FUN_1080668a0(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1080668fc; end: 10806699f; -[SCStoriesLegacySnapInfoCollector _sampleVideoZoomLevelWithZoomLevelProvider:] */

void FUN_1080668fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf60b80(param_3);
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080669a0; end: 1080669a7; -[SCStoriesLegacySnapInfoCollector numberOfRetakeBeforeSend] */

undefined8 FUN_1080669a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1080669a8; end: 1080669af; -[SCStoriesLegacySnapInfoCollector hasCurrentSnapSavedToMemories] */

undefined1 FUN_1080669a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 1080669b0; end: 1080669b7; -[SCStoriesLegacySnapInfoCollector isCurrentSnapLoadedFromCameraRoll] */

undefined1 FUN_1080669b0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x29);
}



/* Entry: 1080669b8; end: 108066a0b; -[SCStoriesLegacySnapInfoCollector .cxx_destruct] */

void FUN_1080669b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108066a0c; end: 108066a27;  */

void FUN_108066a0c(void)

{
  _objc_alloc_init(PTR_PTR_1126d9090);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108066a28; end: 108066b17; -[SCRecordedVideoProvider newVideoAsset] */

undefined8 FUN_108066a28(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 8),0xffffffffffffffff);
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (uVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc();
    lVar5 = param_1;
    func_0x00010bee8b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c057ae0();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar3;
    _objc_release(uVar4);
  }
  else {
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_108066af0;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c071ae0();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) goto LAB_108066af0;
    puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc();
    func_0x00010c057ae0();
    lVar5 = *(long *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar3;
  }
  _objc_release(lVar5);
LAB_108066af0:
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 8));
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar4);
  return uVar4;
}



/* Entry: 108066b18; end: 108066cc7; -[SCRecordedVideoProvider newVideoAssetForQueue:resultHandler:] */

void FUN_108066b18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0d9500();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf51e00();
  if (lVar1 == 0) {
    lVar3 = param_1;
    func_0x00010be0b020();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = 0;
  }
  func_0x00010be572e0(param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x108066c5c;
  puStack_70 = &UNK_110852488;
  lStack_68 = lVar1;
  uStack_60 = uVar2;
  lStack_58 = lVar3;
  lStack_50 = param_1;
  uStack_48 = param_4;
  _objc_retain(lVar3);
  _objc_retain(uVar2);
  _objc_retain(lVar1);
  _objc_retain(param_4);
  func_0x00010007380c(param_3,&puStack_88);
  _objc_release(param_3);
  _objc_release(lStack_58);
  _objc_release(uStack_60);
  _objc_release(lStack_68);
  _objc_release(uStack_48);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 108066cc8; end: 108066d5f; -[SCRecordedVideoProvider _logPreviewExportEventWithError:success:] */

void FUN_108066cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108066d60;
  puStack_50 = &UNK_11084d5f8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 108066d60; end: 108066e13;  */

void FUN_108066d60(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = *(long *)(param_1 + 0x20) + 0x30;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acba0(lVar1,param_2,lVar5,*(undefined8 *)(param_1 + 0x28),
                      *(undefined1 *)(param_1 + 0x30));
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108066e14; end: 108066e3f; -[SCRecordedVideoProvider _errorInfoForAssetCreation] */

undefined ** FUN_108066e14(long param_1)

{
  undefined **ppuVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ed2a78;
    if (*(long *)(param_1 + 0x40) != 0) {
      ppuVar1 = (undefined **)0x0;
    }
    return ppuVar1;
  }
  return &PTR____CFConstantStringClassReference_110ed2a58;
}



/* Entry: 108066e40; end: 108066e47; -[SCRecordedVideoProvider videoDuration] */

undefined8 FUN_108066e40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108066e48; end: 108066e8b; -[SCRecordedVideoProvider codecType] */

long FUN_108066e48(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c0d9500();
    lVar2 = lVar1;
    func_0x00010c299760();
    *(long *)(param_1 + 0x28) = lVar2;
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + 0x28);
  }
  return lVar1;
}



/* Entry: 108066e8c; end: 108066e93; -[SCRecordedVideoProvider shouldIncludeURLInActiveVideoPaths] */

undefined8 FUN_108066e8c(void)

{
  return 1;
}



/* Entry: 108066e94; end: 108066e9b; -[SCRecordedVideoProvider writableURLRequiresSynchronousExport] */

undefined8 FUN_108066e94(void)

{
  return 1;
}



/* Entry: 108066e9c; end: 108066ec3; -[SCRecordedVideoProvider writableURL] */

void FUN_108066e9c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108066ec4; end: 108066eeb; -[SCRecordedVideoProvider cachedWritableURL] */

void FUN_108066ec4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108066eec; end: 108067073; -[SCRecordedVideoProvider removeBackingTemporaryVideo] */

void FUN_108066eec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (*(long *)(param_1 + 0x48) == 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c0f58c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cc80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c099760();
    _objc_retain(0);
    _objc_release(puVar3);
    if (((ulong)puVar4 & 1) == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = 0;
      _objc_release(uVar1);
    }
    _objc_release(0);
  }
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x48) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    _objc_release(uVar1);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
    func_0x00010c12cc60(puVar3);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x00010c12cc60(puVar3);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar3);
  return;
}



/* Entry: 108067074; end: 1080671af; -[SCRecordedVideoProvider exportVideoForURL:] */

void FUN_108067074(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 8),0xffffffffffffffff);
  lVar1 = param_1;
  func_0x00010bee8b60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c071ae0();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bee8b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf52020(puVar3);
    uVar4 = 0;
    _objc_retain(0);
    _objc_release(lVar1);
    func_0x00010bf6e340(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be572e0(param_1);
    _objc_release(uVar4);
    _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 8));
    _objc_release(0);
    _objc_release(puVar3);
  }
  else {
    func_0x00010be572e0(param_1);
    _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1080671b0; end: 10806729b; -[SCRecordedVideoProvider exportVideoData] */

void FUN_1080671b0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 8),0xffffffffffffffff);
  lVar1 = param_1;
  func_0x00010bee8b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  puVar3 = (undefined *)0x0;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010be572e0(param_1);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar3);
  _objc_release(0);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10806729c; end: 108067333; -[SCRecordedVideoProvider checkIsVideoReachable] */

ulong FUN_10806729c(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0d9500();
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010bdc2b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bf384a0();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 108067334; end: 108067403; -[SCRecordedVideoProvider initWithRecordedVideo:activeVideoPaths:] */

undefined8
FUN_108067334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c29bb40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c120480(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c299d80(param_4);
  uVar3 = param_4;
  func_0x00010bf3f040(param_4);
  _objc_release(param_4);
  func_0x00010c061380(param_1,param_2,param_3,uVar1,uVar2,param_5,uVar3);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_2;
}



/* Entry: 108067404; end: 108067507; -[SCRecordedVideoProvider initWithVideoURL:rawVideoDataFileURL:videoDuration:activeVideoPaths:codecType:] */

undefined1 *
FUN_108067404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fc3a8;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    uVar2 = 1;
    _dispatch_semaphore_create();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108067508; end: 1080675b3; -[SCRecordedVideoProvider dealloc] */

void FUN_108067508(long param_1)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar1);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar1);
  }
  puStack_38 = PTR_PTR_1126fc3a8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1080675b4; end: 108067727; -[SCRecordedVideoProvider copyWithZone:] */

undefined * FUN_1080675b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0f58c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cc80(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bee8b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010c099760();
  _objc_retain(0);
  _objc_release(lVar4);
  _objc_release(puVar6);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 8));
  puVar6 = (undefined *)0x0;
  if ((int)puVar5 != 0) {
    puVar6 = PTR_PTR_1126ce8a8;
    _objc_alloc(PTR_PTR_1126ce8a8);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf51e00(uVar1);
    func_0x00010c061380(uVar2,puVar6);
    _objc_release(uVar1);
  }
  _objc_release(0);
  _objc_release(puVar3);
  return puVar6;
}



/* Entry: 108067728; end: 108067757; -[SCRecordedVideoProvider _videoDataURL] */

void FUN_108067728(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x40);
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108067758; end: 1080677e7; -[SCRecordedVideoProvider hasAudioTrack] */

bool FUN_108067758(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_38;
  
  func_0x00010c0d9500();
  uStack_38 = 0;
  func_0x00010c266c80(PTR_PTR_1126b0010,param_2,&PTR__OBJC_CLASS___NSConstantArray_111182dc8,param_1
                      ,&uStack_38);
  lVar1 = param_1;
  func_0x00010c279200(param_1,param_2,*(undefined8 *)PTR__AVMediaTypeAudio_110348070);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 1080677e8; end: 1080677ff; -[SCRecordedVideoProvider previewLoggingCommon] */

void FUN_1080677e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108067800; end: 10806780b; -[SCRecordedVideoProvider setPreviewLoggingCommon:] */

void FUN_108067800(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 10806780c; end: 108067823; -[SCRecordedVideoProvider previewBlizzardLogger] */

void FUN_10806780c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108067824; end: 10806782f; -[SCRecordedVideoProvider setPreviewBlizzardLogger:] */

void FUN_108067824(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 108067830; end: 108067837; -[SCRecordedVideoProvider videoURL] */

undefined8 FUN_108067830(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108067838; end: 10806783f; -[SCRecordedVideoProvider backupURL] */

undefined8 FUN_108067838(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108067840; end: 108067847; -[SCRecordedVideoProvider rawVideoDataFileURL] */

undefined8 FUN_108067840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108067848; end: 1080678b7; -[SCRecordedVideoProvider .cxx_destruct] */

void FUN_108067848(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080678b8; end: 108067a3f;  */

void FUN_1080678b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf64ac0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126d9098;
  _objc_alloc(PTR_PTR_1126d9098);
  func_0x00010c08fa60(puVar1);
  func_0x00010c08fa60(puVar2);
  func_0x00010c08fa60(puVar3);
  puVar5 = puVar1;
  func_0x00010c105b00(puVar1);
  func_0x00010bd50910();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c105b00(puVar2);
  func_0x00010bd50910();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010c105b00(puVar3);
  func_0x00010bd50910();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061420(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108067a40; end: 108067ab3; -[SCPreviewContentRecognitionService initWithProvider:] */

undefined1 * FUN_108067a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc3b0;
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



/* Entry: 108067ab4; end: 108067abb; -[SCPreviewContentRecognitionService provider] */

undefined8 FUN_108067ab4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108067abc; end: 108067ac7; -[SCPreviewContentRecognitionService .cxx_destruct] */

void FUN_108067abc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108067ac8; end: 108067b3b; -[SCPreviewLocationInfoServices initWithPreviewLocationInfoProvider:] */

undefined1 * FUN_108067ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc3b8;
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



/* Entry: 108067b3c; end: 108067b43; -[SCPreviewLocationInfoServices locationInfoProvider] */

undefined8 FUN_108067b3c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108067b44; end: 108067b4f; -[SCPreviewLocationInfoServices .cxx_destruct] */

void FUN_108067b44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108067b50; end: 108067bdf; -[SCPreviewLocationInfoSpeed initWithCoder:] */

undefined1 * FUN_108067b50(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  double dVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1126fc3c0;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf66e40(param_4);
    dVar2 = (double)param_1;
    *(double *)((long)puVar1 + 8) = dVar2;
    func_0x00010bf66e40(param_4);
    *(double *)((long)puVar1 + 0x10) = (double)SUB84(dVar2,0);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108067be0; end: 108067c2b; -[SCPreviewLocationInfoSpeed initWithMph:kph:] */

void FUN_108067be0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc3c0;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
  }
  return;
}


