/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080653ec; end: 1080653f3; -[SCFeatureSettingsService map_footsteps_save_new_footsteps_client_value:] */

undefined * FUN_1080653ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1080653f4; end: 1080653fb; -[SCFeatureSettingsService map_footsteps_save_new_footsteps_server_value:] */

void FUN_1080653f4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 1080653fc; end: 10806540b; -[SCFeatureSettingsService footstepsSaveNewFootsteps] */

void FUN_1080653fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed2658,1);
  return;
}



/* Entry: 10806540c; end: 108065417; -[SCFeatureSettingsService hasHomesOnTheMapOnboardingV2Seen] */

void FUN_10806540c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2678);
  return;
}



/* Entry: 108065418; end: 108065423; -[SCFeatureSettingsService homesOnTheMapOnboardingV2SeenServerParam] */

undefined ** FUN_108065418(void)

{
  return &PTR____CFConstantStringClassReference_110ed2678;
}



/* Entry: 108065424; end: 108065433; -[SCFeatureSettingsService setHomesOnTheMapOnboardingV2Seen:] */

void FUN_108065424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed2678,param_3);
  return;
}



/* Entry: 108065434; end: 10806543b; -[SCFeatureSettingsService homes_on_the_map_onboarding_v2_accepted_client_value:] */

undefined * FUN_108065434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10806543c; end: 108065443; -[SCFeatureSettingsService homes_on_the_map_onboarding_v2_accepted_server_value:] */

void FUN_10806543c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108065444; end: 108065453; -[SCFeatureSettingsService homesOnTheMapOnboardingV2Seen] */

void FUN_108065444(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed2678,0);
  return;
}



/* Entry: 108065454; end: 10806545f; -[SCFeatureSettingsService isAllFriendsSharingAlertSeenCountAvailable] */

void FUN_108065454(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2698);
  return;
}



/* Entry: 108065460; end: 10806546b; -[SCFeatureSettingsService allFriendsSharingAlertSeenCountServerParam] */

undefined ** FUN_108065460(void)

{
  return &PTR____CFConstantStringClassReference_110ed2698;
}



/* Entry: 10806546c; end: 10806547b; -[SCFeatureSettingsService setAllFriendsSharingAlertSeenCount:] */

void FUN_10806546c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed2698,param_3);
  return;
}



/* Entry: 10806547c; end: 108065483; -[SCFeatureSettingsService map_preferences_all_friends_jit_seen_count_client_value:] */

void FUN_10806547c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108065484; end: 10806548b; -[SCFeatureSettingsService map_preferences_all_friends_jit_seen_count_server_value:] */

void FUN_108065484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10806548c; end: 10806549b; -[SCFeatureSettingsService allFriendsSharingAlertSeenCount] */

void FUN_10806548c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed2698,0);
  return;
}



/* Entry: 10806549c; end: 1080654a7; -[SCFeatureSettingsService homesBadgeLastSeenTimestampAvailable] */

void FUN_10806549c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed26b8);
  return;
}



/* Entry: 1080654a8; end: 1080654b3; -[SCFeatureSettingsService homesBadgeLastSeenTimestampServerParam] */

undefined ** FUN_1080654a8(void)

{
  return &PTR____CFConstantStringClassReference_110ed26b8;
}



/* Entry: 1080654b4; end: 1080654c3; -[SCFeatureSettingsService setHomesBadgeLastSeenTimestamp:] */

void FUN_1080654b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed26b8,param_3);
  return;
}



/* Entry: 1080654c4; end: 1080654cb; -[SCFeatureSettingsService homes_3d_last_seen_badge_timestamp_client_value:] */

void FUN_1080654c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 1080654cc; end: 1080654d3; -[SCFeatureSettingsService homes_3d_last_seen_badge_timestamp_server_value:] */

void FUN_1080654cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1080654d4; end: 1080654e3; -[SCFeatureSettingsService homesBadgeLastSeenTimestamp] */

void FUN_1080654d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed26b8,0);
  return;
}



/* Entry: 1080654e4; end: 1080654ef; -[SCFeatureSettingsService hasMapFootstepsOnboardingSeenCount] */

void FUN_1080654e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed26d8);
  return;
}



/* Entry: 1080654f0; end: 1080654fb; -[SCFeatureSettingsService mapFootstepsOnboardingSeenCountServerParam] */

undefined ** FUN_1080654f0(void)

{
  return &PTR____CFConstantStringClassReference_110ed26d8;
}



/* Entry: 1080654fc; end: 10806550b; -[SCFeatureSettingsService setMapFootstepsOnboardingSeenCount:] */

void FUN_1080654fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed26d8,param_3);
  return;
}



/* Entry: 10806550c; end: 108065513; -[SCFeatureSettingsService map_footsteps_onboarding_seen_count_client_value:] */

void FUN_10806550c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108065514; end: 10806551b; -[SCFeatureSettingsService map_footsteps_onboarding_seen_count_server_value:] */

void FUN_108065514(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10806551c; end: 10806552b; -[SCFeatureSettingsService mapFootstepsOnboardingSeenCount] */

void FUN_10806551c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed26d8,0);
  return;
}



/* Entry: 10806552c; end: 108065537; -[SCFeatureSettingsService hasMapFootstepsUpsellFirstSeenTimestamp] */

void FUN_10806552c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed26f8);
  return;
}



/* Entry: 108065538; end: 108065543; -[SCFeatureSettingsService mapFootstepsUpsellFirstSeenTimestampServerParam] */

undefined ** FUN_108065538(void)

{
  return &PTR____CFConstantStringClassReference_110ed26f8;
}



/* Entry: 108065544; end: 108065553; -[SCFeatureSettingsService setMapFootstepsUpsellFirstSeenTimestamp:] */

void FUN_108065544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed26f8,param_3);
  return;
}



/* Entry: 108065554; end: 10806555b; -[SCFeatureSettingsService map_footsteps_upsell_first_seen_ms_client_value:] */

void FUN_108065554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10806555c; end: 108065563; -[SCFeatureSettingsService map_footsteps_upsell_first_seen_ms_server_value:] */

void FUN_10806555c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108065564; end: 108065573; -[SCFeatureSettingsService mapFootstepsUpsellFirstSeenTimestamp] */

void FUN_108065564(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed26f8,0);
  return;
}



/* Entry: 108065574; end: 10806557f; -[SCFeatureSettingsService hasMapFootstepsOnboardingLastSeenTimestamp] */

void FUN_108065574(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2718);
  return;
}



/* Entry: 108065580; end: 10806558b; -[SCFeatureSettingsService mapFootstepsOnboardingLastSeenTimestampServerParam] */

undefined ** FUN_108065580(void)

{
  return &PTR____CFConstantStringClassReference_110ed2718;
}



/* Entry: 10806558c; end: 10806559b; -[SCFeatureSettingsService setMapFootstepsOnboardingLastSeenTimestamp:] */

void FUN_10806558c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed2718,param_3);
  return;
}



/* Entry: 10806559c; end: 1080655a3; -[SCFeatureSettingsService map_footsteps_onboarding_last_seen_ms_client_value:] */

void FUN_10806559c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 1080655a4; end: 1080655ab; -[SCFeatureSettingsService map_footsteps_onboarding_last_seen_ms_server_value:] */

void FUN_1080655a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1080655ac; end: 1080655bb; -[SCFeatureSettingsService mapFootstepsOnboardingLastSeenTimestamp] */

void FUN_1080655ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed2718,0);
  return;
}



/* Entry: 1080655bc; end: 1080655c7; -[SCFeatureSettingsService hasMapFootstepsMemoriesBackfillComplete] */

void FUN_1080655bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2738);
  return;
}



/* Entry: 1080655c8; end: 1080655d3; -[SCFeatureSettingsService mapFootstepsMemoriesBackfillCompleteServerParam] */

undefined ** FUN_1080655c8(void)

{
  return &PTR____CFConstantStringClassReference_110ed2738;
}



/* Entry: 1080655d4; end: 1080655e3; -[SCFeatureSettingsService setMapFootstepsMemoriesBackfillComplete:] */

void FUN_1080655d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed2738,param_3);
  return;
}



/* Entry: 1080655e4; end: 1080655eb; -[SCFeatureSettingsService map_footsteps_memories_backfill_completed_client_value:] */

undefined * FUN_1080655e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1080655ec; end: 1080655f3; -[SCFeatureSettingsService map_footsteps_memories_backfill_completed_server_value:] */

void FUN_1080655ec(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 1080655f4; end: 108065603; -[SCFeatureSettingsService mapFootstepsMemoriesBackfillComplete] */

void FUN_1080655f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed2738,0);
  return;
}



/* Entry: 108065604; end: 10806560f; -[SCFeatureSettingsService hasMapBackgroundLocationRecoveryUpsellDismissedTimestamp] */

void FUN_108065604(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2758);
  return;
}



/* Entry: 108065610; end: 10806561b; -[SCFeatureSettingsService mapBackgroundLocationRecoveryUpsellDismissedTimestampServerParam] */

undefined ** FUN_108065610(void)

{
  return &PTR____CFConstantStringClassReference_110ed2758;
}



/* Entry: 10806561c; end: 10806562b; -[SCFeatureSettingsService setMapBackgroundLocationRecoveryUpsellDismissedTimestamp:] */

void FUN_10806561c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed2758,param_3);
  return;
}



/* Entry: 10806562c; end: 108065633; -[SCFeatureSettingsService map_background_location_recovery_upsell_dismissed_ms_client_value:] */

void FUN_10806562c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108065634; end: 10806563b; -[SCFeatureSettingsService map_background_location_recovery_upsell_dismissed_ms_server_value:] */

void FUN_108065634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10806563c; end: 10806564b; -[SCFeatureSettingsService mapBackgroundLocationRecoveryUpsellDismissedTimestamp] */

void FUN_10806563c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed2758,0);
  return;
}



/* Entry: 10806564c; end: 108065657; -[SCFeatureSettingsService hasMapBackgroundLocationRecoveryUpsellSeenCount] */

void FUN_10806564c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2778);
  return;
}



/* Entry: 108065658; end: 108065663; -[SCFeatureSettingsService mapBackgroundLocationRecoveryUpsellSeenCountServerParam] */

undefined ** FUN_108065658(void)

{
  return &PTR____CFConstantStringClassReference_110ed2778;
}



/* Entry: 108065664; end: 108065673; -[SCFeatureSettingsService setMapBackgroundLocationRecoveryUpsellSeenCount:] */

void FUN_108065664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed2778,param_3);
  return;
}



/* Entry: 108065674; end: 10806567b; -[SCFeatureSettingsService map_background_location_recovery_upsell_seen_count_client_value:] */

void FUN_108065674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10806567c; end: 108065683; -[SCFeatureSettingsService map_background_location_recovery_upsell_seen_count_server_value:] */

void FUN_10806567c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108065684; end: 108065693; -[SCFeatureSettingsService mapBackgroundLocationRecoveryUpsellSeenCount] */

void FUN_108065684(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed2778,0);
  return;
}



/* Entry: 108065694; end: 10806569f; -[SCFeatureSettingsService hasMapSimpleSnapchatOnboardingSeenCount] */

void FUN_108065694(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2798);
  return;
}



/* Entry: 1080656a0; end: 1080656ab; -[SCFeatureSettingsService mapSimpleSnapchatOnboardingSeenCountServerParam] */

undefined ** FUN_1080656a0(void)

{
  return &PTR____CFConstantStringClassReference_110ed2798;
}



/* Entry: 1080656ac; end: 1080656bb; -[SCFeatureSettingsService setMapSimpleSnapchatOnboardingSeenCount:] */

void FUN_1080656ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed2798,param_3);
  return;
}



/* Entry: 1080656bc; end: 1080656c3; -[SCFeatureSettingsService simple_snap_map_button_onboarding_seen_count_client_value:] */

void FUN_1080656bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 1080656c4; end: 1080656cb; -[SCFeatureSettingsService simple_snap_map_button_onboarding_seen_count_server_value:] */

void FUN_1080656c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1080656cc; end: 1080656db; -[SCFeatureSettingsService mapSimpleSnapchatOnboardingSeenCount] */

void FUN_1080656cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed2798,0);
  return;
}



/* Entry: 1080656dc; end: 1080656e7; -[SCFeatureSettingsService hasChatBackgroundLocationRecoveryPromptImpressions] */

void FUN_1080656dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed27b8);
  return;
}



/* Entry: 1080656e8; end: 1080656f3; -[SCFeatureSettingsService chatBackgroundLocationRecoveryPromptImpressionsServerParam] */

undefined ** FUN_1080656e8(void)

{
  return &PTR____CFConstantStringClassReference_110ed27b8;
}



/* Entry: 1080656f4; end: 108065703; -[SCFeatureSettingsService setChatBackgroundLocationRecoveryPromptImpressions:] */

void FUN_1080656f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed27b8,param_3);
  return;
}



/* Entry: 108065704; end: 10806570b; -[SCFeatureSettingsService chat_background_location_recovery_prompt_impressions_client_value:] */

void FUN_108065704(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10806570c; end: 108065713; -[SCFeatureSettingsService chat_background_location_recovery_prompt_impressions_server_value:] */

void FUN_10806570c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108065714; end: 108065723; -[SCFeatureSettingsService chatBackgroundLocationRecoveryPromptImpressions] */

void FUN_108065714(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed27b8,0);
  return;
}



/* Entry: 108065724; end: 10806572f; -[SCFeatureSettingsService hasChatBackgroundLocationRecoveryPromptTimestamp] */

void FUN_108065724(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed27d8);
  return;
}



/* Entry: 108065730; end: 10806573b; -[SCFeatureSettingsService chatBackgroundLocationRecoveryPromptTimestampServerParam] */

undefined ** FUN_108065730(void)

{
  return &PTR____CFConstantStringClassReference_110ed27d8;
}



/* Entry: 10806573c; end: 10806574b; -[SCFeatureSettingsService setChatBackgroundLocationRecoveryPromptTimestamp:] */

void FUN_10806573c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed27d8,param_3);
  return;
}



/* Entry: 10806574c; end: 108065753; -[SCFeatureSettingsService chat_background_location_recovery_prompt_timestamp_client_value:] */

void FUN_10806574c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108065754; end: 10806575b; -[SCFeatureSettingsService chat_background_location_recovery_prompt_timestamp_server_value:] */

void FUN_108065754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10806575c; end: 10806576b; -[SCFeatureSettingsService chatBackgroundLocationRecoveryPromptTimestamp] */

void FUN_10806575c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed27d8,0);
  return;
}



/* Entry: 10806576c; end: 108065777; -[SCFeatureSettingsService hasMapHomeSafeCellSeenCount] */

void FUN_10806576c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed27f8);
  return;
}



/* Entry: 108065778; end: 108065783; -[SCFeatureSettingsService mapHomeSafeCellSeenCountServerParam] */

undefined ** FUN_108065778(void)

{
  return &PTR____CFConstantStringClassReference_110ed27f8;
}



/* Entry: 108065784; end: 108065793; -[SCFeatureSettingsService setMapHomeSafeCellSeenCount:] */

void FUN_108065784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed27f8,param_3);
  return;
}



/* Entry: 108065794; end: 10806579b; -[SCFeatureSettingsService map_home_safe_cell_seen_count_client_value:] */

void FUN_108065794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10806579c; end: 1080657a3; -[SCFeatureSettingsService map_home_safe_cell_seen_count_server_value:] */

void FUN_10806579c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1080657a4; end: 1080657b3; -[SCFeatureSettingsService mapHomeSafeCellSeenCount] */

void FUN_1080657a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed27f8,0);
  return;
}



/* Entry: 1080657b4; end: 1080657bf; -[SCFeatureSettingsService hasDisplayUsernameOnSnapMap] */

void FUN_1080657b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2818);
  return;
}



/* Entry: 1080657c0; end: 1080657cb; -[SCFeatureSettingsService displayUsernameOnSnapMapServerParam] */

undefined ** FUN_1080657c0(void)

{
  return &PTR____CFConstantStringClassReference_110ed2818;
}



/* Entry: 1080657cc; end: 1080657db; -[SCFeatureSettingsService setDisplayUsernameOnSnapMap:] */

void FUN_1080657cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed2818,param_3);
  return;
}



/* Entry: 1080657dc; end: 1080657e3; -[SCFeatureSettingsService display_username_on_snap_map_client_value:] */

undefined * FUN_1080657dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1080657e4; end: 1080657eb; -[SCFeatureSettingsService display_username_on_snap_map_server_value:] */

void FUN_1080657e4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 1080657ec; end: 1080657fb; -[SCFeatureSettingsService displayUsernameOnSnapMap] */

void FUN_1080657ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed2818,1);
  return;
}



/* Entry: 1080657fc; end: 108065807; -[SCFeatureSettingsService hasMapShowMyTravelStatuses] */

void FUN_1080657fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2838);
  return;
}



/* Entry: 108065808; end: 108065813; -[SCFeatureSettingsService mapShowMyTravelStatusesServerParam] */

undefined ** FUN_108065808(void)

{
  return &PTR____CFConstantStringClassReference_110ed2838;
}



/* Entry: 108065814; end: 108065823; -[SCFeatureSettingsService setMapShowMyTravelStatuses:] */

void FUN_108065814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed2838,param_3);
  return;
}



/* Entry: 108065824; end: 10806582b; -[SCFeatureSettingsService map_show_my_travel_statuses_client_value:] */

undefined * FUN_108065824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10806582c; end: 108065833; -[SCFeatureSettingsService map_show_my_travel_statuses_server_value:] */

void FUN_10806582c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108065834; end: 108065843; -[SCFeatureSettingsService mapShowMyTravelStatuses] */

void FUN_108065834(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed2838,1);
  return;
}



/* Entry: 108065844; end: 10806584f; -[SCFeatureSettingsService hasMapArrivalNotificationsOnboardingSeen] */

void FUN_108065844(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2858);
  return;
}



/* Entry: 108065850; end: 10806585b; -[SCFeatureSettingsService mapArrivalNotificationsOnboardingSeenServerParam] */

undefined ** FUN_108065850(void)

{
  return &PTR____CFConstantStringClassReference_110ed2858;
}



/* Entry: 10806585c; end: 10806586b; -[SCFeatureSettingsService setMapArrivalNotificationsOnboardingSeen:] */

void FUN_10806585c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed2858,param_3);
  return;
}



/* Entry: 10806586c; end: 108065873; -[SCFeatureSettingsService map_arrival_notifications_onboarding_seen_client_value:] */

undefined * FUN_10806586c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108065874; end: 10806587b; -[SCFeatureSettingsService map_arrival_notifications_onboarding_seen_server_value:] */

void FUN_108065874(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10806587c; end: 10806588b; -[SCFeatureSettingsService mapArrivalNotificationsOnboardingSeen] */

void FUN_10806587c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed2858,0);
  return;
}



/* Entry: 10806588c; end: 108065897; -[SCFeatureSettingsService hasMapInferredSchoolOnboardingSeen] */

void FUN_10806588c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2878);
  return;
}


