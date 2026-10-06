/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10805eefc; end: 10805ef07; -[SCFeatureSettingsService hasSpotlightPostButtonTooltipSeenCount] */

void FUN_10805eefc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0e18);
  return;
}



/* Entry: 10805ef08; end: 10805ef13; -[SCFeatureSettingsService spotlightPostButtonTooltipSeenCountServerParam] */

undefined ** FUN_10805ef08(void)

{
  return &PTR____CFConstantStringClassReference_110ed0e18;
}



/* Entry: 10805ef14; end: 10805ef23; -[SCFeatureSettingsService setSpotlightPostButtonTooltipSeenCount:] */

void FUN_10805ef14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed0e18,param_3);
  return;
}



/* Entry: 10805ef24; end: 10805ef2b; -[SCFeatureSettingsService spotlight_post_button_tooltip_seen_count_client_value:] */

void FUN_10805ef24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10805ef2c; end: 10805ef33; -[SCFeatureSettingsService spotlight_post_button_tooltip_seen_count_server_value:] */

void FUN_10805ef2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10805ef34; end: 10805ef43; -[SCFeatureSettingsService spotlightPostButtonTooltipSeenCount] */

void FUN_10805ef34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed0e18,0);
  return;
}



/* Entry: 10805ef44; end: 10805ef4f; -[SCFeatureSettingsService isDsaOptOutOfFullPersonalization] */

void FUN_10805ef44(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0e38);
  return;
}



/* Entry: 10805ef50; end: 10805ef5b; -[SCFeatureSettingsService dsaOptOutOfFullPersonalizationServerParam] */

undefined ** FUN_10805ef50(void)

{
  return &PTR____CFConstantStringClassReference_110ed0e38;
}



/* Entry: 10805ef5c; end: 10805ef6b; -[SCFeatureSettingsService setDsaOptOutOfFullPersonalization:] */

void FUN_10805ef5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed0e38,param_3);
  return;
}



/* Entry: 10805ef6c; end: 10805ef73; -[SCFeatureSettingsService eu_dsa_opt_out_of_full_personalization_client_value:] */

undefined * FUN_10805ef6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10805ef74; end: 10805ef7b; -[SCFeatureSettingsService eu_dsa_opt_out_of_full_personalization_server_value:] */

void FUN_10805ef74(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10805ef7c; end: 10805ef8b; -[SCFeatureSettingsService dsaOptOutOfFullPersonalization] */

void FUN_10805ef7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed0e38,0);
  return;
}



/* Entry: 10805ef8c; end: 10805ef97; -[SCFeatureSettingsService isLastSnoozedFofTimestampMs] */

void FUN_10805ef8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0e58);
  return;
}



/* Entry: 10805ef98; end: 10805efa3; -[SCFeatureSettingsService lastSnoozedFofTimestampMsServerParam] */

undefined ** FUN_10805ef98(void)

{
  return &PTR____CFConstantStringClassReference_110ed0e58;
}



/* Entry: 10805efa4; end: 10805efb3; -[SCFeatureSettingsService setLastSnoozedFofTimestampMs:] */

void FUN_10805efa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed0e58,param_3);
  return;
}



/* Entry: 10805efb4; end: 10805efbb; -[SCFeatureSettingsService last_snoozed_fof_timestamp_ms_client_value:] */

void FUN_10805efb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10805efbc; end: 10805efc3; -[SCFeatureSettingsService last_snoozed_fof_timestamp_ms_server_value:] */

void FUN_10805efbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10805efc4; end: 10805efd3; -[SCFeatureSettingsService lastSnoozedFofTimestampMs] */

void FUN_10805efc4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed0e58,0);
  return;
}



/* Entry: 10805efd4; end: 10805efdf; -[SCFeatureSettingsService hasContentRecommendNotifImpressionLimit] */

void FUN_10805efd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0e78);
  return;
}



/* Entry: 10805efe0; end: 10805efeb; -[SCFeatureSettingsService contentRecommendNotifImpressionLimitServerParam] */

undefined ** FUN_10805efe0(void)

{
  return &PTR____CFConstantStringClassReference_110ed0e78;
}



/* Entry: 10805efec; end: 10805effb; -[SCFeatureSettingsService setContentRecommendNotifImpressionLimit:] */

void FUN_10805efec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed0e78,param_3);
  return;
}



/* Entry: 10805effc; end: 10805f003; -[SCFeatureSettingsService content_recommend_notif_impression_limit_client_value:] */

void FUN_10805effc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10805f004; end: 10805f00b; -[SCFeatureSettingsService content_recommend_notif_impression_limit_server_value:] */

void FUN_10805f004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10805f00c; end: 10805f01b; -[SCFeatureSettingsService contentRecommendNotifImpressionLimit] */

void FUN_10805f00c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed0e78,3);
  return;
}



/* Entry: 10805f01c; end: 10805f027; -[SCFeatureSettingsService hasMyStoriesInCarouselLearningSeen] */

void FUN_10805f01c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0e98);
  return;
}



/* Entry: 10805f028; end: 10805f033; -[SCFeatureSettingsService myStoriesInCarouselLearningSeenServerParam] */

undefined ** FUN_10805f028(void)

{
  return &PTR____CFConstantStringClassReference_110ed0e98;
}



/* Entry: 10805f034; end: 10805f043; -[SCFeatureSettingsService setMyStoriesInCarouselLearningSeen:] */

void FUN_10805f034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed0e98,param_3);
  return;
}



/* Entry: 10805f044; end: 10805f04b; -[SCFeatureSettingsService my_stories_in_carousel_learning_seen_client_value:] */

void FUN_10805f044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10805f04c; end: 10805f053; -[SCFeatureSettingsService my_stories_in_carousel_learning_seen_server_value:] */

void FUN_10805f04c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10805f054; end: 10805f063; -[SCFeatureSettingsService myStoriesInCarouselLearningSeen] */

void FUN_10805f054(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed0e98,0);
  return;
}



/* Entry: 10805f064; end: 10805f06f; -[SCFeatureSettingsService hasContentViewingHistoryResetTimestamp] */

void FUN_10805f064(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0eb8);
  return;
}



/* Entry: 10805f070; end: 10805f07b; -[SCFeatureSettingsService contentViewingHistoryResetTimestampServerParam] */

undefined ** FUN_10805f070(void)

{
  return &PTR____CFConstantStringClassReference_110ed0eb8;
}



/* Entry: 10805f07c; end: 10805f08b; -[SCFeatureSettingsService setContentViewingHistoryResetTimestamp:] */

void FUN_10805f07c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed0eb8,param_3);
  return;
}



/* Entry: 10805f08c; end: 10805f093; -[SCFeatureSettingsService content_viewing_history_reset_timestamp_client_value:] */

void FUN_10805f08c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10805f094; end: 10805f09b; -[SCFeatureSettingsService content_viewing_history_reset_timestamp_server_value:] */

void FUN_10805f094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10805f09c; end: 10805f0ab; -[SCFeatureSettingsService contentViewingHistoryResetTimestamp] */

void FUN_10805f09c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed0eb8,0);
  return;
}



/* Entry: 10805f0ac; end: 10805f0b7; -[SCFeatureSettingsService hasSeenCommentFavoritedByCreatorModal] */

void FUN_10805f0ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0ed8);
  return;
}



/* Entry: 10805f0b8; end: 10805f0c3; -[SCFeatureSettingsService commentFavoritedByCreatorModalSeenServerParam] */

undefined ** FUN_10805f0b8(void)

{
  return &PTR____CFConstantStringClassReference_110ed0ed8;
}



/* Entry: 10805f0c4; end: 10805f0d3; -[SCFeatureSettingsService setCommentFavoritedByCreatorModalSeen:] */

void FUN_10805f0c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed0ed8,param_3);
  return;
}



/* Entry: 10805f0d4; end: 10805f0db; -[SCFeatureSettingsService comment_favorited_by_creator_modal_seen_client_value:] */

undefined * FUN_10805f0d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10805f0dc; end: 10805f0e3; -[SCFeatureSettingsService comment_favorited_by_creator_modal_seen_server_value:] */

void FUN_10805f0dc(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10805f0e4; end: 10805f0f3; -[SCFeatureSettingsService commentFavoritedByCreatorModalSeen] */

void FUN_10805f0e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed0ed8,0);
  return;
}



/* Entry: 10805f0f4; end: 10805f0ff; -[SCFeatureSettingsService hasContentQuickShareEducationSeenCount] */

void FUN_10805f0f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0ef8);
  return;
}



/* Entry: 10805f100; end: 10805f10b; -[SCFeatureSettingsService contentQuickShareEducationSeenCountServerParam] */

undefined ** FUN_10805f100(void)

{
  return &PTR____CFConstantStringClassReference_110ed0ef8;
}



/* Entry: 10805f10c; end: 10805f11b; -[SCFeatureSettingsService setContentQuickShareEducationSeenCount:] */

void FUN_10805f10c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed0ef8,param_3);
  return;
}



/* Entry: 10805f11c; end: 10805f123; -[SCFeatureSettingsService content_quick_share_education_seen_count_client_value:] */

void FUN_10805f11c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10805f124; end: 10805f12b; -[SCFeatureSettingsService content_quick_share_education_seen_count_server_value:] */

void FUN_10805f124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10805f12c; end: 10805f13b; -[SCFeatureSettingsService contentQuickShareEducationSeenCount] */

void FUN_10805f12c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed0ef8,0);
  return;
}



/* Entry: 10805f13c; end: 10805f147; -[SCFeatureSettingsService hasContentQuickShareEducationLastSeenTimestamp] */

void FUN_10805f13c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0f18);
  return;
}



/* Entry: 10805f148; end: 10805f153; -[SCFeatureSettingsService contentQuickShareEducationLastSeenTimestampServerParam] */

undefined ** FUN_10805f148(void)

{
  return &PTR____CFConstantStringClassReference_110ed0f18;
}



/* Entry: 10805f154; end: 10805f163; -[SCFeatureSettingsService setContentQuickShareEducationLastSeenTimestamp:] */

void FUN_10805f154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed0f18,param_3);
  return;
}



/* Entry: 10805f164; end: 10805f16b; -[SCFeatureSettingsService content_quick_share_education_last_seen_timestamp_client_value:] */

void FUN_10805f164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10805f16c; end: 10805f173; -[SCFeatureSettingsService content_quick_share_education_last_seen_timestamp_server_value:] */

void FUN_10805f16c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10805f174; end: 10805f183; -[SCFeatureSettingsService contentQuickShareEducationLastSeenTimestamp] */

void FUN_10805f174(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed0f18,0);
  return;
}



/* Entry: 10805f184; end: 10805f18f; -[SCFeatureSettingsService hasContentRecommendToStoriesImpressionCount] */

void FUN_10805f184(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0f38);
  return;
}



/* Entry: 10805f190; end: 10805f19b; -[SCFeatureSettingsService contentRecommendToStoriesImpressionCountServerParam] */

undefined ** FUN_10805f190(void)

{
  return &PTR____CFConstantStringClassReference_110ed0f38;
}



/* Entry: 10805f19c; end: 10805f1ab; -[SCFeatureSettingsService setContentRecommendToStoriesImpressionCount:] */

void FUN_10805f19c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed0f38,param_3);
  return;
}



/* Entry: 10805f1ac; end: 10805f1b3; -[SCFeatureSettingsService content_recommend_to_stories_impression_count_client_value:] */

void FUN_10805f1ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10805f1b4; end: 10805f1bb; -[SCFeatureSettingsService content_recommend_to_stories_impression_count_server_value:] */

void FUN_10805f1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10805f1bc; end: 10805f1cb; -[SCFeatureSettingsService contentRecommendToStoriesImpressionCount] */

void FUN_10805f1bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed0f38,0);
  return;
}



/* Entry: 10805f1cc; end: 10805f1d7; -[SCFeatureSettingsService hasSpotlightPauseShareUpsellSeenCount] */

void FUN_10805f1cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0f58);
  return;
}



/* Entry: 10805f1d8; end: 10805f1e3; -[SCFeatureSettingsService spotlightPauseShareUpsellSeenCountServerParam] */

undefined ** FUN_10805f1d8(void)

{
  return &PTR____CFConstantStringClassReference_110ed0f58;
}



/* Entry: 10805f1e4; end: 10805f1f3; -[SCFeatureSettingsService setSpotlightPauseShareUpsellSeenCount:] */

void FUN_10805f1e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed0f58,param_3);
  return;
}



/* Entry: 10805f1f4; end: 10805f1fb; -[SCFeatureSettingsService spotlight_pause_share_upsell_seen_count_client_value:] */

void FUN_10805f1f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10805f1fc; end: 10805f203; -[SCFeatureSettingsService spotlight_pause_share_upsell_seen_count_server_value:] */

void FUN_10805f1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10805f204; end: 10805f213; -[SCFeatureSettingsService spotlightPauseShareUpsellSeenCount] */

void FUN_10805f204(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed0f58,0);
  return;
}



/* Entry: 10805f214; end: 10805f21f; -[SCFeatureSettingsService hasSpotlightPauseShareUpsellLastSeenTimestamp] */

void FUN_10805f214(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed0f78);
  return;
}



/* Entry: 10805f220; end: 10805f22b; -[SCFeatureSettingsService spotlightPauseShareUpsellLastSeenTimestampServerParam] */

undefined ** FUN_10805f220(void)

{
  return &PTR____CFConstantStringClassReference_110ed0f78;
}



/* Entry: 10805f22c; end: 10805f23b; -[SCFeatureSettingsService setSpotlightPauseShareUpsellLastSeenTimestamp:] */

void FUN_10805f22c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed0f78,param_3);
  return;
}



/* Entry: 10805f23c; end: 10805f243; -[SCFeatureSettingsService spotlight_pause_share_upsell_last_seen_timestamp_client_value:] */

void FUN_10805f23c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10805f244; end: 10805f24b; -[SCFeatureSettingsService spotlight_pause_share_upsell_last_seen_timestamp_server_value:] */

void FUN_10805f244(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10805f24c; end: 10805f25b; -[SCFeatureSettingsService spotlightPauseShareUpsellLastSeenTimestamp] */

void FUN_10805f24c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed0f78,0);
  return;
}



/* Entry: 10805f25c; end: 10805f2fb; -[SCStoriesCallbackArray addCallback:forKey:] */

void FUN_10805f25c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    puVar1 = *(undefined **)(param_1 + 0x10);
    func_0x00010c0e00e0(puVar1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,puVar1,param_4);
    }
    func_0x00010befa120(puVar1,param_2,param_3);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10805f2fc; end: 10805f373; -[SCStoriesCallbackArray callbacksToInvokeForKey:] */

void FUN_10805f2fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c0e00e0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,0,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10805f374; end: 10805f3b7; -[SCStoriesCallbackArray hasPendingCallbacksForKey:] */

bool FUN_10805f374(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  return lVar2 != 0;
}



/* Entry: 10805f3b8; end: 10805f3e7; -[SCStoriesCallbackArray .cxx_destruct] */

void FUN_10805f3b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10805f3e8; end: 10805f67b;  */

undefined8 FUN_10805f3e8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c08fa60();
  uVar13 = 0;
  if ((param_1 != 0) && (lVar2 != 0)) {
    puVar3 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      lVar5 = param_2;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010c0f4aa0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar6;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      uVar13 = 0;
      if (lVar11 != 0) {
        do {
          lVar12 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar6);
            }
            uVar7 = *(ulong *)(lVar12 * 8);
            func_0x00010c0f4a60();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010c272380();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar8;
            func_0x00010c0720c0();
            _objc_release(uVar8);
            _objc_release(uVar7);
            if ((uVar4 & 1) != 0) {
              uVar13 = 1;
              goto LAB_10805f614;
            }
            lVar12 = lVar12 + 1;
          } while (lVar11 != lVar12);
          lVar11 = lVar6;
          func_0x00010bf52a60();
        } while (lVar11 != 0);
        uVar13 = 0;
      }
LAB_10805f614:
      _objc_release(lVar6);
    }
    else {
      lVar5 = param_1;
      func_0x00010c0f4aa0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          uVar4 = *(ulong *)(lVar11 * 8);
          func_0x00010c0f4a60();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar4;
          func_0x00010c071ae0();
          _objc_release(uVar4);
          if ((uVar8 & 1) != 0) {
            uVar13 = 1;
            goto LAB_10805f61c;
          }
          lVar11 = lVar11 + 1;
        } while (lVar2 != lVar11);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      uVar13 = 0;
    }
LAB_10805f61c:
    _objc_release(lVar5);
    _objc_release(puVar3);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return uVar13;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(lVar9);
  if ((param_1 == 0) || (lVar2 = param_1, FUN_10805f3e8(param_1,lVar9), (int)lVar2 == 0)) {
    uVar13 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010bfcf380();
    uVar1 = 1;
    if (lVar2 == 2) {
      uVar1 = 2;
    }
    uVar13 = 3;
    if (lVar2 != 1) {
      uVar13 = uVar1;
    }
  }
  _objc_release(lVar9);
  _objc_release(param_1);
  return uVar13;
}



/* Entry: 10805f67c; end: 10805f773;  */

undefined8 FUN_10805f67c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  if ((param_1 == 0) || (lVar2 = param_1, FUN_10805f3e8(param_1,param_2), (int)lVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010bfcf380();
    uVar1 = 1;
    if (lVar2 == 2) {
      uVar1 = 2;
    }
    uVar3 = 3;
    if (lVar2 != 1) {
      uVar3 = uVar1;
    }
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 10805f774; end: 10805f863;  */

void FUN_10805f774(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126d9008;
  _objc_alloc(PTR_PTR_1126d9008);
  if (param_1 == 0) {
    func_0x00010c0022c0(puVar1);
  }
  else {
    func_0x00010bfcf380(param_1);
    lVar2 = param_1;
    func_0x00010c0f4aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bfcf3c0(param_1);
    FUN_10805f3e8(param_1,param_2);
    func_0x00010c0022c0(puVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10805f864; end: 10805f907;  */

undefined8 FUN_10805f864(ulong param_1,ulong param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c06fe60();
  if ((int)lVar2 == 0) {
    bVar1 = false;
    if (param_2 == 0) goto LAB_10805f8bc;
LAB_10805f8c4:
    if ((param_2 == 0) || (uVar3 = param_2, func_0x00010c071ae0(), (uVar3 & 1) == 0)) {
      uVar4 = 1;
      goto LAB_10805f8e4;
    }
  }
  else {
    lVar2 = param_3;
    func_0x00010bf490a0();
    bVar1 = lVar2 == 1;
    if (param_2 != 0) goto LAB_10805f8c4;
LAB_10805f8bc:
    if (((param_1 & 1) != 0) || (bVar1)) goto LAB_10805f8c4;
  }
  uVar4 = 0;
LAB_10805f8e4:
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 10805f908; end: 10805f9e3; -[SCStoriesIndividualRequestDebouncer shouldDebounceRequest:] */

ulong FUN_10805f908(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf65f20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf529e0();
    uVar4 = (ulong)(lVar1 == 0);
    _objc_release(param_1);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return uVar4;
  }
  ___stack_chk_fail();
  uVar4 = *(ulong *)(param_3 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010c12d4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_removeObjectsForKeys__112628f48);
  return uVar4;
}



/* Entry: 10805f9e4; end: 10805f9eb; -[SCStoriesIndividualRequestDebouncer resetDebounceForRequests:] */

void FUN_10805f9e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeObjectsForKeys__112628f48);
  return;
}



/* Entry: 10805f9ec; end: 10805fa33; -[SCStoriesIndividualRequestDebouncer .cxx_destruct] */

void FUN_10805f9ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10805fa34; end: 10805fb5b; -[SCStoriesRequestDebouncer initWithPerformer:grapheneMetricsEmitter:debounceInterval:identifier:throttledResult:] */

undefined1 *
FUN_10805fa34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fc360;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10805fb5c; end: 10805fc93; -[SCStoriesRequestDebouncer attemptToMakeRequestWithExternalCallback:completion:] */

void FUN_10805fb5c(double param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _CACurrentMediaTime();
  if ((*(double *)(param_2 + 0x30) <= 0.0) ||
     (*(double *)(param_2 + 0x30) + *(double *)(param_2 + 0x28) <= param_1)) {
    func_0x00010c0b0d60(*(undefined8 *)(param_2 + 0x10));
    if (param_4 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x40);
      lVar1 = param_4;
      _objc_retainBlock(param_4);
      func_0x00010befa120(uVar2);
      _objc_release(lVar1);
    }
    uVar2 = 0;
    *(undefined1 *)(param_2 + 0x38) = 1;
    *(double *)(param_2 + 0x30) = param_1;
  }
  else {
    func_0x00010c0b0d60(*(undefined8 *)(param_2 + 0x10));
    if (param_4 != 0) {
      if (*(char *)(param_2 + 0x38) == '\x01') {
        uVar2 = *(undefined8 *)(param_2 + 0x40);
        lVar1 = param_4;
        _objc_retainBlock(param_4);
        func_0x00010befa120(uVar2);
        _objc_release(lVar1);
      }
      else {
        (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_2 + 0x18));
      }
    }
    uVar2 = 1;
  }
  (**(code **)(param_5 + 0x10))(param_5,uVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10805fc94; end: 10805fdc7; -[SCStoriesRequestDebouncer responseProcessingFinishedWithResult:] */

void FUN_10805fc94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010bf51e00();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      (**(code **)(*(long *)(lVar7 * 8) + 0x10))(*(long *)(lVar7 * 8),param_3);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar4;
  _objc_release(uVar6);
  *(undefined1 *)(param_1 + 0x38) = 0;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 10805fdc8; end: 10805fe1b; -[SCStoriesRequestDebouncer .cxx_destruct] */

void FUN_10805fdc8(long param_1)

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



/* Entry: 10805fe1c; end: 10805ff2b; -[SCStoriesTimeoutDetector initWithTimeout:loggingIdentifier:] */

undefined1 *
FUN_10805fe1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fc368;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = 1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10805ff2c; end: 108060037; -[SCStoriesTimeoutDetector startWithTimeoutBlock:] */

long FUN_10805ff2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar1 + 1;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_48,auStack_38);
  lStack_40 = lVar1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 108060038; end: 10806006f;  */

void FUN_108060038(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3c480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108060070; end: 108060127; -[SCStoriesTimeoutDetector endWithIdentifier:] */

void FUN_108060070(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108060128; end: 10806015b;  */

void FUN_108060128(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8c460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10806015c; end: 10806027f; -[SCStoriesTimeoutDetector _insertIdentifier:timeoutBlock:] */

void FUN_10806015c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  uVar2 = param_4;
  _objc_retainBlock(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_3;
  func_0x00010c0f7fe0(*(undefined8 *)(param_1 + 8),uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 108060280; end: 1080602b3;  */

void FUN_108060280(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becc120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080602b4; end: 1080602fb; -[SCStoriesTimeoutDetector _removeIdentifier:] */

void FUN_1080602b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1080602fc; end: 1080603af; -[SCStoriesTimeoutDetector _timeoutBlockCalledWithIdentifier:] */

void FUN_1080602fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3,param_2,0,puVar1);
  _objc_release(puVar1);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1080603b0; end: 1080603eb; -[SCStoriesTimeoutDetector .cxx_destruct] */

void FUN_1080603b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1080603ec; end: 108060447; -[SCStoriesNetworkRequestRetryConfig initWithMaxRetryCountInConnectionSession:maxRetryCountInAppSession:retryBackoffInterval:] */

void FUN_1080603ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fc370;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
  }
  return;
}



/* Entry: 108060448; end: 10806046b; -[SCStoriesNetworkRequestRetryConfig copyWithZone:] */

undefined8 FUN_108060448(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10806046c; end: 1080604eb; -[SCStoriesNetworkRequestRetryConfig hash] */

undefined8 * FUN_10806046c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  double dVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uVar3 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_20 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8) ||
          (*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10))))) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        dVar5 = ABS(*(double *)((long)puVar1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        if (dVar5 <= 2.2250738585072014e-308) {
          dVar5 = 2.2250738585072014e-308;
        }
        puVar4 = (undefined1 *)
                 (ulong)(ABS(*(double *)((long)puVar1 + 0x18) - *(double *)(param_3 + 0x18)) < dVar5
                        );
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}


