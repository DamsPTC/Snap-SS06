/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c08684; end: 108c0868b; -[SCFeatureSettingsService quick_add_privacy_v2_server_value:] */

void FUN_108c08684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108c0868c; end: 108c0869b; -[SCFeatureSettingsService quickAddPrivacyV2] */

void FUN_108c0868c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110eeecf8,0);
  return;
}



/* Entry: 108c0869c; end: 108c086a7; -[SCFeatureSettingsService hasSeenInvitePrivacyAlert] */

void FUN_108c0869c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eeed18);
  return;
}



/* Entry: 108c086a8; end: 108c086b3; -[SCFeatureSettingsService seenInvitePrivacyAlertServerParam] */

undefined ** FUN_108c086a8(void)

{
  return &PTR____CFConstantStringClassReference_110eeed18;
}



/* Entry: 108c086b4; end: 108c086c3; -[SCFeatureSettingsService setSeenInvitePrivacyAlert:] */

void FUN_108c086b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110eeed18,param_3);
  return;
}



/* Entry: 108c086c4; end: 108c086cb; -[SCFeatureSettingsService ff_has_seen_invite_privacy_alert_client_value:] */

undefined * FUN_108c086c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108c086cc; end: 108c086d3; -[SCFeatureSettingsService ff_has_seen_invite_privacy_alert_server_value:] */

void FUN_108c086cc(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108c086d4; end: 108c086e3; -[SCFeatureSettingsService seenInvitePrivacyAlert] */

void FUN_108c086d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110eeed18,0);
  return;
}



/* Entry: 108c086e4; end: 108c086ef; -[SCFeatureSettingsService getRecentlyActiveTextShownCount] */

void FUN_108c086e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eeed38);
  return;
}



/* Entry: 108c086f0; end: 108c086fb; -[SCFeatureSettingsService recentlyActiveTextShownCountServerParam] */

undefined ** FUN_108c086f0(void)

{
  return &PTR____CFConstantStringClassReference_110eeed38;
}



/* Entry: 108c086fc; end: 108c0870b; -[SCFeatureSettingsService setRecentlyActiveTextShownCount:] */

void FUN_108c086fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110eeed38,param_3);
  return;
}



/* Entry: 108c0870c; end: 108c08713; -[SCFeatureSettingsService add_friends_page_recently_active_text_shown_count_client_value:] */

void FUN_108c0870c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108c08714; end: 108c0871b; -[SCFeatureSettingsService add_friends_page_recently_active_text_shown_count_server_value:] */

void FUN_108c08714(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108c0871c; end: 108c0872b; -[SCFeatureSettingsService recentlyActiveTextShownCount] */

void FUN_108c0871c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110eeed38,0);
  return;
}



/* Entry: 108c0872c; end: 108c08737; -[SCFeatureSettingsService getQuickAddWithoutActionImpressionCount] */

void FUN_108c0872c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eeed58);
  return;
}



/* Entry: 108c08738; end: 108c08743; -[SCFeatureSettingsService quickAddWithoutActionImpressionCountServerParam] */

undefined ** FUN_108c08738(void)

{
  return &PTR____CFConstantStringClassReference_110eeed58;
}



/* Entry: 108c08744; end: 108c08753; -[SCFeatureSettingsService setQuickAddWithoutActionImpressionCount:] */

void FUN_108c08744(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110eeed58,param_3);
  return;
}



/* Entry: 108c08754; end: 108c0875b; -[SCFeatureSettingsService stories_page_quick_add_without_action_impression_count_v2_client_value:] */

void FUN_108c08754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108c0875c; end: 108c08763; -[SCFeatureSettingsService stories_page_quick_add_without_action_impression_count_v2_server_value:] */

void FUN_108c0875c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108c08764; end: 108c08773; -[SCFeatureSettingsService quickAddWithoutActionImpressionCount] */

void FUN_108c08764(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110eeed58,0);
  return;
}



/* Entry: 108c08774; end: 108c0877f; -[SCFeatureSettingsService getQuickAddWithoutActionHideTimestamp] */

void FUN_108c08774(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eeed78);
  return;
}



/* Entry: 108c08780; end: 108c0878b; -[SCFeatureSettingsService quickAddWithoutActionHideTimestampServerParam] */

undefined ** FUN_108c08780(void)

{
  return &PTR____CFConstantStringClassReference_110eeed78;
}



/* Entry: 108c0878c; end: 108c0879b; -[SCFeatureSettingsService setQuickAddWithoutActionHideTimestamp:] */

void FUN_108c0878c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110eeed78,param_3);
  return;
}



/* Entry: 108c0879c; end: 108c087a3; -[SCFeatureSettingsService stories_page_hiding_quick_add_timestamp_client_value:] */

void FUN_108c0879c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108c087a4; end: 108c087ab; -[SCFeatureSettingsService stories_page_hiding_quick_add_timestamp_server_value:] */

void FUN_108c087a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108c087ac; end: 108c087bb; -[SCFeatureSettingsService quickAddWithoutActionHideTimestamp] */

void FUN_108c087ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110eeed78,0);
  return;
}



/* Entry: 108c087bc; end: 108c087c7; -[SCFeatureSettingsService getFacebookContactsLastSyncTimestamp] */

void FUN_108c087bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eeed98);
  return;
}



/* Entry: 108c087c8; end: 108c087d3; -[SCFeatureSettingsService facebookContactsLastSyncTimestampServerParam] */

undefined ** FUN_108c087c8(void)

{
  return &PTR____CFConstantStringClassReference_110eeed98;
}



/* Entry: 108c087d4; end: 108c087e3; -[SCFeatureSettingsService setFacebookContactsLastSyncTimestamp:] */

void FUN_108c087d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110eeed98,param_3);
  return;
}



/* Entry: 108c087e4; end: 108c087eb; -[SCFeatureSettingsService facebook_contacts_last_sync_timestamp_client_value:] */

void FUN_108c087e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108c087ec; end: 108c087f3; -[SCFeatureSettingsService facebook_contacts_last_sync_timestamp_server_value:] */

void FUN_108c087ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108c087f4; end: 108c08803; -[SCFeatureSettingsService facebookContactsLastSyncTimestamp] */

void FUN_108c087f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110eeed98,0);
  return;
}



/* Entry: 108c08804; end: 108c0880f; -[SCFeatureSettingsService getFindFriendsDisabled] */

void FUN_108c08804(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eeedb8);
  return;
}



/* Entry: 108c08810; end: 108c0881b; -[SCFeatureSettingsService findFriendsDisabledServerParam] */

undefined ** FUN_108c08810(void)

{
  return &PTR____CFConstantStringClassReference_110eeedb8;
}



/* Entry: 108c0881c; end: 108c0882b; -[SCFeatureSettingsService setFindFriendsDisabled:] */

void FUN_108c0881c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110eeedb8,param_3);
  return;
}



/* Entry: 108c0882c; end: 108c08833; -[SCFeatureSettingsService find_friends_disabled_client_value:] */

void FUN_108c0882c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108c08834; end: 108c0883b; -[SCFeatureSettingsService find_friends_disabled_server_value:] */

void FUN_108c08834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108c0883c; end: 108c0884b; -[SCFeatureSettingsService findFriendsDisabled] */

void FUN_108c0883c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110eeedb8,0);
  return;
}



/* Entry: 108c0884c; end: 108c08857; -[SCFeatureSettingsService getAddFriendTrayAcceptImpressionCount] */

void FUN_108c0884c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eeedd8);
  return;
}



/* Entry: 108c08858; end: 108c08863; -[SCFeatureSettingsService addFriendTrayAcceptImpressionCountServerParam] */

undefined ** FUN_108c08858(void)

{
  return &PTR____CFConstantStringClassReference_110eeedd8;
}



/* Entry: 108c08864; end: 108c08873; -[SCFeatureSettingsService setAddFriendTrayAcceptImpressionCount:] */

void FUN_108c08864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110eeedd8,param_3);
  return;
}



/* Entry: 108c08874; end: 108c0887b; -[SCFeatureSettingsService add_friend_info_tray_accept_impression_count_client_value:] */

void FUN_108c08874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108c0887c; end: 108c08883; -[SCFeatureSettingsService add_friend_info_tray_accept_impression_count_server_value:] */

void FUN_108c0887c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108c08884; end: 108c08893; -[SCFeatureSettingsService addFriendTrayAcceptImpressionCount] */

void FUN_108c08884(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110eeedd8,0);
  return;
}



/* Entry: 108c08894; end: 108c0889f; -[SCFeatureSettingsService getAddFriendTrayAddImpressionCount] */

void FUN_108c08894(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eeedf8);
  return;
}



/* Entry: 108c088a0; end: 108c088ab; -[SCFeatureSettingsService addFriendTrayAddImpressionCountServerParam] */

undefined ** FUN_108c088a0(void)

{
  return &PTR____CFConstantStringClassReference_110eeedf8;
}



/* Entry: 108c088ac; end: 108c088bb; -[SCFeatureSettingsService setAddFriendTrayAddImpressionCount:] */

void FUN_108c088ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110eeedf8,param_3);
  return;
}



/* Entry: 108c088bc; end: 108c088c3; -[SCFeatureSettingsService add_friend_info_tray_add_impression_count_client_value:] */

void FUN_108c088bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108c088c4; end: 108c088cb; -[SCFeatureSettingsService add_friend_info_tray_add_impression_count_server_value:] */

void FUN_108c088c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108c088cc; end: 108c088db; -[SCFeatureSettingsService addFriendTrayAddImpressionCount] */

void FUN_108c088cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110eeedf8,0);
  return;
}



/* Entry: 108c088dc; end: 108c088e7; -[SCFeatureSettingsService hasShowMutualFriendsList] */

void FUN_108c088dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eeee18);
  return;
}



/* Entry: 108c088e8; end: 108c088f3; -[SCFeatureSettingsService showMutualFriendsListServerParam] */

undefined ** FUN_108c088e8(void)

{
  return &PTR____CFConstantStringClassReference_110eeee18;
}



/* Entry: 108c088f4; end: 108c08903; -[SCFeatureSettingsService setShowMutualFriendsList:] */

void FUN_108c088f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110eeee18,param_3);
  return;
}



/* Entry: 108c08904; end: 108c0890b; -[SCFeatureSettingsService SHOW_MUTUAL_FRIENDS_LIST_client_value:] */

void FUN_108c08904(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108c0890c; end: 108c08913; -[SCFeatureSettingsService SHOW_MUTUAL_FRIENDS_LIST_server_value:] */

void FUN_108c0890c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108c08914; end: 108c08923; -[SCFeatureSettingsService showMutualFriendsList] */

void FUN_108c08914(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110eeee18,0xffffffffffffffff);
  return;
}



/* Entry: 108c08924; end: 108c0892f; -[SCFeatureSettingsService getMutualFriendsFSTImpressionCount] */

void FUN_108c08924(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eeee38);
  return;
}



/* Entry: 108c08930; end: 108c0893b; -[SCFeatureSettingsService mutualFriendsFSTImpressionCountServerParam] */

undefined ** FUN_108c08930(void)

{
  return &PTR____CFConstantStringClassReference_110eeee38;
}



/* Entry: 108c0893c; end: 108c0894b; -[SCFeatureSettingsService setMutualFriendsFSTImpressionCount:] */

void FUN_108c0893c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110eeee38,param_3);
  return;
}



/* Entry: 108c0894c; end: 108c08953; -[SCFeatureSettingsService FST_MUTUAL_FRIENDS_IMPRESSION_COUNT_client_value:] */

void FUN_108c0894c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108c08954; end: 108c0895b; -[SCFeatureSettingsService FST_MUTUAL_FRIENDS_IMPRESSION_COUNT_server_value:] */

void FUN_108c08954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108c0895c; end: 108c0896b; -[SCFeatureSettingsService mutualFriendsFSTImpressionCount] */

void FUN_108c0895c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110eeee38,0);
  return;
}



/* Entry: 108c0896c; end: 108c089cf; -[SCPreferences promotedAddedMeFriendIds] */

void FUN_108c0896c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eeee58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c089d0; end: 108c089db; -[SCPreferences setPromotedAddedMeFriendIds:] */

void FUN_108c089d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110eeee58);
  return;
}



/* Entry: 108c089dc; end: 108c08a3f; -[SCPreferences contactSyncInviteTitleDismissedDate] */

void FUN_108c089dc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110db7ed8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c08a40; end: 108c08a4b; -[SCPreferences setContactSyncInviteTitleDismissedDate:] */

void FUN_108c08a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110db7ed8);
  return;
}



/* Entry: 108c08a4c; end: 108c08aaf; -[SCPreferences numberOfContactSyncInviteTitleSeen] */

void FUN_108c08a4c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110db7ef8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c08ab0; end: 108c08abb; -[SCPreferences setNumberOfContactSyncInviteTitleSeen:] */

void FUN_108c08ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110db7ef8);
  return;
}



/* Entry: 108c08abc; end: 108c08b1f; -[SCPreferences lastIncomingFriendsRankingSyncDate] */

void FUN_108c08abc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eeee78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c08b20; end: 108c08b2b; -[SCPreferences setLastIncomingFriendsRankingSyncDate:] */

void FUN_108c08b20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110eeee78);
  return;
}



/* Entry: 108c08b2c; end: 108c08b8f; -[SCPreferences pinnedFriendRequestUserId] */

void FUN_108c08b2c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eeee98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c08b90; end: 108c08b9b; -[SCPreferences setPinnedFriendRequestUserId:] */

void FUN_108c08b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110eeee98);
  return;
}



/* Entry: 108c08b9c; end: 108c08bff; -[SCPreferences addedMeImpressionCountThreshold] */

void FUN_108c08b9c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eeeeb8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c08c00; end: 108c08c63; -[SCPreferences badgingStartIndex] */

void FUN_108c08c00(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eeeef8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c08c64; end: 108c08c6f; -[SCPreferences setBadgingStartIndex:] */

void FUN_108c08c64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110eeeef8);
  return;
}



/* Entry: 108c08c70; end: 108c08cd3; -[SCPreferences badgingEndIndex] */

void FUN_108c08c70(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eeef18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c08cd4; end: 108c08cdf; -[SCPreferences setBadgingEndIndex:] */

void FUN_108c08cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110eeef18);
  return;
}



/* Entry: 108c08ce0; end: 108c08d43; -[SCPreferences badgingType] */

void FUN_108c08ce0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eeef38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c08d44; end: 108c08d4f; -[SCPreferences setBadgingType:] */

void FUN_108c08d44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110eeef38);
  return;
}



/* Entry: 108c08d50; end: 108c08db3; -[SCPreferences lastFetchSuggestedFriendsDate] */

void FUN_108c08d50(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eeef58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c08db4; end: 108c08dbf; -[SCPreferences setLastFetchSuggestedFriendsDate:] */

void FUN_108c08db4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110eeef58);
  return;
}



/* Entry: 108c08dc0; end: 108c08e23; -[SCPreferences lastSuggestionFetchStartedDate] */

void FUN_108c08dc0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eeef78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c08e24; end: 108c08e2f; -[SCPreferences setLastSuggestionFetchStartedDate:] */

void FUN_108c08e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110eeef78);
  return;
}



/* Entry: 108c08e30; end: 108c08e93; -[SCPreferences hasFetchedHiddenSuggestionFromServer] */

void FUN_108c08e30(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eeef98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c08e94; end: 108c08e9f; -[SCPreferences setHasFetchedHiddenSuggestionFromServer:] */

void FUN_108c08e94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110eeef98);
  return;
}



/* Entry: 108c08ea0; end: 108c08eab; -[SCPreferences setLastClientFetchSuggestionTimestampInSeconds:] */

void FUN_108c08ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110eeefb8);
  return;
}



/* Entry: 108c08eac; end: 108c08eb7; -[SCPreferences setLastServerSuggestionTimestampInMilliseconds:] */

void FUN_108c08eac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110eeefd8);
  return;
}



/* Entry: 108c08eb8; end: 108c08f1b; -[SCPreferences suggestionFetchRequestId] */

void FUN_108c08eb8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eeeff8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c08f1c; end: 108c08f27; -[SCPreferences setSuggestionFetchRequestId:] */

void FUN_108c08f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110eeeff8);
  return;
}



/* Entry: 108c08f28; end: 108c08f8b; -[SCPreferences lastLocalTimerBadgeSet] */

void FUN_108c08f28(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eef018);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c08f8c; end: 108c08f97; -[SCPreferences setLastLocalTimerBadgeSet:] */

void FUN_108c08f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110eef018);
  return;
}



/* Entry: 108c08f98; end: 108c08ffb; -[SCPreferences pinnedSuggestionUserId] */

void FUN_108c08f98(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eef038);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c08ffc; end: 108c09007; -[SCPreferences setPinnedSuggestionUserId:] */

void FUN_108c08ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110eef038);
  return;
}



/* Entry: 108c09008; end: 108c0909f;  */

void FUN_108c09008(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if (param_1 != 0) {
    _objc_retain(param_2);
    func_0x00010c067ec0(param_1);
    puVar1 = PTR_PTR_1126bb3e8;
    _objc_alloc(PTR_PTR_1126bb3e8);
    func_0x00010c01f2e0();
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c090a0; end: 108c09213;  */

void FUN_108c090a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c150d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc6660(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126db270;
  _objc_alloc(PTR_PTR_1126db270);
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_1090216c8(param_4);
  func_0x00010c05ba20(puVar2);
  _objc_release(uVar1);
  FUN_108c12128(param_1,puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108c09214; end: 108c0a51b;  */

void FUN_108c09214(long param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puStack_2e8;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar1 = param_2;
  func_0x00010c13cf20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000107c31908();
  lVar3 = param_1;
  func_0x000107c2a78c(param_1,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_6;
  func_0x00010bf51e00();
  lVar5 = param_6;
  func_0x00010bf51e00();
  puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lVar6 = param_6;
  func_0x00010bf002e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  FUN_1090216c8(param_3);
  FUN_108c265ac(param_1,lVar5,puVar7);
  _objc_retain(lVar1);
  lVar6 = lVar1;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar20 = 0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(lVar1);
      }
      lVar19 = *(long *)(lVar20 * 8);
      _objc_retain(param_1);
      _objc_retain(lVar19);
      _objc_retain(lVar3);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar21 = lVar19;
      func_0x00010c2923e0(lVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078c00();
      _objc_release(lVar21);
      if (((ulong)puVar8 & 1) == 0) {
        lVar21 = lVar19;
        func_0x00010c2923e0(lVar19);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar21);
        if (lVar9 == 0) {
          lVar9 = lVar19;
          FUN_108c15ee4();
          _objc_retainAutoreleasedReturnValue();
          FUN_108c1d01c(param_1);
        }
        else {
          FUN_108c1f85c(param_1,lVar19,lVar9);
        }
        lVar21 = lVar19;
        func_0x00010c078960();
        if ((int)lVar21 != 0) {
          puVar8 = PTR_PTR_1126bb3f8;
          _objc_alloc(PTR_PTR_1126bb3f8);
          puVar10 = puVar8;
          FUN_108c238f8();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar10;
          FUN_108c238f8();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04f5a0(puVar8);
          _objc_release(puVar18);
          _objc_release(puVar10);
          FUN_108c1ed28(param_1,puVar8,lVar9);
          _objc_release(puVar8);
          lVar21 = lVar9;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          FUN_108c114e4(param_1,puVar8);
          _objc_release(puVar8);
          _objc_release(lVar21);
        }
        _objc_release(lVar9);
      }
      _objc_release(lVar3);
      _objc_release(lVar19);
      _objc_release(param_1);
      lVar20 = lVar20 + 1;
    } while (lVar6 != lVar20);
    lVar6 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
  _objc_retain(param_1);
  lVar20 = param_1;
  FUN_108c1c9d0(param_1,0,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar6 = lVar20;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar21 = 0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(lVar20);
      }
      FUN_108c2050c(param_1,*(undefined8 *)(lVar21 * 8));
      lVar21 = lVar21 + 1;
    } while (lVar6 != lVar21);
    lVar6 = lVar20;
    func_0x00010bf52a60();
  }
  _objc_release(lVar20);
  _objc_release(lVar20);
  _objc_release(param_1);
  lVar6 = param_1;
  FUN_108c1a528(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar6;
  func_0x000107c31914();
  _objc_release(lVar6);
  _objc_retain(lVar1);
  puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  _objc_retain(lVar1);
  lVar6 = lVar1;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar21 = 0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(lVar1);
      }
      uVar11 = *(undefined8 *)(lVar21 * 8);
      func_0x00010bf85300(uVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c078c00();
      if (((ulong)puVar10 & 1) == 0) {
        func_0x00010befa120(puVar8);
      }
      _objc_release(uVar11);
      lVar21 = lVar21 + 1;
    } while (lVar6 != lVar21);
    lVar6 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
  puVar10 = puVar8;
  func_0x00010bf51e00();
  _objc_release(puVar8);
  _objc_release(lVar1);
  if ((param_5 & 0xfffffffffffffffe) == 2) {
    lVar6 = param_2;
    func_0x00010c0daf60();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar4);
    _objc_retain(lVar6);
    _objc_retain(param_4);
    puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    if (param_4 == 0) {
      puVar18 = (undefined *)0x0;
    }
    else {
      puVar18 = PTR_PTR_1126aed98;
      func_0x00010bfb5d00();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar12 = PTR__OBJC_CLASS___NSSet_1126ae870;
    lVar14 = lVar6;
    func_0x000107c31908(lVar6,&PTR___NSConcreteGlobalBlock_110ab8300);
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    _objc_retain(lVar4);
    lVar14 = lVar4;
    func_0x00010bf52a60();
    lVar21 = lRam0000000000000000;
    while (lVar14 != 0) {
      lVar19 = 0;
      do {
        if (lRam0000000000000000 != lVar21) {
          _objc_enumerationMutation(lVar4);
        }
        if ((puVar18 == (undefined *)0x0) || (*(long *)(lVar19 * 8) == 0)) {
LAB_108c09aac:
          lVar9 = lVar4;
          func_0x00010c0e00e0(lVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar12;
          func_0x00010bf4b900();
          _objc_release(lVar9);
          if ((int)puVar13 != 0) {
            lVar9 = lVar4;
            func_0x00010c0e00e0(lVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar8);
            _objc_release(lVar9);
          }
        }
        else {
          puVar13 = PTR_PTR_1126aed98;
          func_0x00010bfb5d00(PTR_PTR_1126aed98);
          _objc_retainAutoreleasedReturnValue();
          puVar23 = puVar18;
          func_0x00010c0720c0();
          _objc_release(puVar13);
          if (((ulong)puVar23 & 1) == 0) goto LAB_108c09aac;
        }
        lVar19 = lVar19 + 1;
      } while (lVar14 != lVar19);
      lVar14 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    puStack_2e8 = puVar8;
    func_0x00010bf51e00();
    _objc_release(puVar12);
    _objc_release(puVar18);
    _objc_release(puVar8);
    _objc_release(param_4);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar6);
  }
  else {
    _objc_retain(lVar4);
    _objc_retain(puVar10);
    _objc_retain(param_4);
    puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    if (param_4 == 0) {
      puVar18 = (undefined *)0x0;
    }
    else {
      puVar18 = PTR_PTR_1126aed98;
      func_0x00010bfb5d00();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_retain(lVar4);
    lVar6 = lVar4;
    func_0x00010bf52a60();
    lVar14 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar21 = 0;
      do {
        if (lRam0000000000000000 != lVar14) {
          _objc_enumerationMutation(lVar4);
        }
        if ((puVar18 == (undefined *)0x0) || (*(long *)(lVar21 * 8) == 0)) {
LAB_108c09900:
          lVar19 = lVar4;
          func_0x00010c0e00e0(lVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar10;
          func_0x00010bf4b900();
          _objc_release(lVar19);
          if (((ulong)puVar12 & 1) == 0) {
            lVar19 = lVar4;
            func_0x00010c0e00e0(lVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar8);
            _objc_release(lVar19);
          }
        }
        else {
          puVar12 = PTR_PTR_1126aed98;
          func_0x00010bfb5d00(PTR_PTR_1126aed98);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar18;
          func_0x00010c0720c0();
          _objc_release(puVar12);
          if (((ulong)puVar13 & 1) == 0) goto LAB_108c09900;
        }
        lVar21 = lVar21 + 1;
      } while (lVar6 != lVar21);
      lVar6 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    puStack_2e8 = puVar8;
    func_0x00010bf51e00();
    _objc_release(puVar18);
    _objc_release(puVar8);
    _objc_release(param_4);
    _objc_release(puVar10);
    _objc_release(lVar4);
  }
  puVar8 = puStack_2e8;
  func_0x00010bf002e0(puStack_2e8);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  FUN_108c25e74(param_1,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  lVar6 = param_2;
  func_0x00010c0daf60();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar6;
  func_0x000107c31914();
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010c0daf60();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar6;
  func_0x000107c31914();
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010c0daf60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x000107c31914();
  _objc_release(lVar6);
  uVar11 = 0;
  _objc_retain(puStack_2e8);
  puVar8 = puStack_2e8;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar8 != (undefined *)0x0) {
    puVar18 = (undefined *)0x0;
    do {
      uVar24 = uVar11;
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puStack_2e8);
        uVar24 = uVar11;
      }
      puVar23 = *(undefined **)((long)puVar18 * 8);
      puVar12 = puStack_2e8;
      func_0x00010c0e00e0(puStack_2e8);
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar21;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar19;
      func_0x00010c0e00e0(lVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      uVar11 = uVar24;
      _objc_release(lVar16);
      lVar16 = lVar9;
      func_0x00010c0e00e0(lVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_1);
      _objc_retain(puVar23);
      _objc_retain(puVar12);
      _objc_retain(lVar14);
      _objc_retain(lVar15);
      _objc_retain(lVar16);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c078c00();
      if (((ulong)puVar13 & 1) == 0) {
        lVar22 = lVar14;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar22 == 0) {
          puVar13 = PTR_PTR_1126bb3f0;
          _objc_alloc(PTR_PTR_1126bb3f0);
          uVar11 = 0;
          func_0x00010c0359a0(0,0,uVar24);
        }
        else {
          puVar13 = puVar23;
          FUN_108c136cc(puVar23,lVar22,lVar15,lVar16);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar24;
        }
        FUN_108c13174(param_1,puVar13);
        _objc_release(puVar13);
        _objc_release(lVar22);
      }
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(puVar12);
      _objc_release(puVar23);
      _objc_release(param_1);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(puVar12);
      puVar18 = puVar18 + 1;
    } while (puVar8 != puVar18);
    puVar8 = puStack_2e8;
    func_0x00010bf52a60();
  }
  _objc_release(puStack_2e8);
  puVar8 = puStack_2e8;
  func_0x00010bf002e0(puStack_2e8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  lVar16 = param_1;
  FUN_108c12c3c(param_1,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar6 = lVar16;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar22 = 0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(lVar16);
      }
      FUN_108c134e8(param_1,*(undefined8 *)(lVar22 * 8));
      lVar22 = lVar22 + 1;
    } while (lVar6 != lVar22);
    lVar6 = lVar16;
    func_0x00010bf52a60();
  }
  _objc_release(lVar16);
  _objc_release(lVar16);
  _objc_release(param_1);
  _objc_release(puVar8);
  uVar11 = param_3;
  FUN_108c272e4(param_1,param_3);
  _objc_release(lVar9);
  _objc_release(lVar19);
  _objc_release(lVar21);
  _objc_release(lVar14);
  _objc_release(puStack_2e8);
  _objc_release(puVar10);
  _objc_release(lVar20);
  _objc_release(puVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  lVar6 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar14);
  _objc_release(param_4);
  _objc_release(lVar21);
  _objc_release(lVar4);
  _objc_release(lVar21);
  _objc_release(puVar10);
  _objc_release(lVar20);
  _objc_release(puVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume(lVar6);
  __Unwind_Resume();
  func_0x00010c2923e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c0a51c; end: 108c0a53b;  */

void FUN_108c0a51c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c0a53c; end: 108c0a563;  */

void FUN_108c0a53c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108c0a564; end: 108c0aec7;  */

void FUN_108c0a564(undefined *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c261ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c127da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(lVar1);
  _objc_retain(lVar2);
  lVar3 = lVar1;
  func_0x000107c31908(lVar1,&PTR___NSConcreteGlobalBlock_110ab8220);
  puVar4 = param_1;
  func_0x000107c2a78c(param_1,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar5 = lVar2;
  func_0x000107c31914(lVar2,&PTR___NSConcreteGlobalBlock_110ab8240,
                      &PTR___NSConcreteGlobalBlock_110ab8280);
  _objc_retain(lVar1);
  lVar3 = lVar1;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar20 = 0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(lVar1);
      }
      puVar21 = *(undefined **)(lVar20 * 8);
      puVar6 = puVar21;
      func_0x00010c2923e0(puVar21);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      if (lVar7 != 0) {
        _objc_retain(param_1);
        _objc_retain(puVar21);
        _objc_retain(lVar7);
        _objc_retain(puVar4);
        puVar6 = puVar21;
        func_0x00010c2923e0(puVar21);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        if (puVar8 == (undefined *)0x0) {
          puVar6 = puVar21;
          func_0x00010bfea820(puVar21);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar6;
          func_0x00010c067ec0();
          puVar15 = puVar21;
          FUN_108c15d5c(puVar21,lVar7,(long)(int)puVar14);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          FUN_108c1d01c(param_1,puVar15);
        }
        else {
          puVar15 = PTR_PTR_1126c2820;
          func_0x000100c36048();
          _objc_retainAutoreleasedReturnValue();
          if (puVar15 != (undefined *)0x0) {
            puVar6 = puVar21;
            func_0x00010c294420(puVar21);
            _objc_retainAutoreleasedReturnValue();
            _objc_setProperty_nonatomic_copy(puVar15);
            _objc_release(puVar6);
            puVar6 = puVar21;
            func_0x00010bf85d80(puVar21);
            _objc_retainAutoreleasedReturnValue();
            _objc_setProperty_nonatomic_copy(puVar15);
            _objc_release(puVar6);
            puVar6 = puVar21;
            func_0x00010bf1acc0();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar21;
            func_0x00010bf1c0a0();
            _objc_retainAutoreleasedReturnValue();
            puVar18 = puVar21;
            func_0x00010bf1c000(puVar21);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar21;
            func_0x00010bf1af00(puVar21);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar21;
            func_0x00010bf1af40(puVar21);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar10;
            func_0x00010bf147e0();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar21;
            func_0x00010bf933a0(puVar21);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar6;
            func_0x000100c3702c(puVar6,puVar14,puVar18,puVar9,puVar11,puVar12);
            _objc_retainAutoreleasedReturnValue();
            _objc_setProperty_nonatomic_copy(puVar15);
            _objc_release(puVar13);
            _objc_release(puVar12);
            _objc_release(puVar11);
            _objc_release(puVar10);
            _objc_release(puVar9);
            _objc_release(puVar18);
            _objc_release(puVar14);
            _objc_release(puVar6);
            puVar6 = puVar21;
            func_0x00010c07a6c0();
            puVar15[0x14] = (char)puVar6;
            puVar6 = puVar21;
            func_0x00010bf8e9c0(puVar21);
            _objc_retainAutoreleasedReturnValue();
            _objc_setProperty_nonatomic_copy(puVar15);
            _objc_release(puVar6);
            puVar6 = puVar21;
            func_0x00010c0d3e20(puVar21);
            _objc_retainAutoreleasedReturnValue();
            _objc_setProperty_nonatomic_copy(puVar15);
            _objc_release(puVar6);
            puVar6 = puVar21;
            func_0x00010c294420(puVar21);
            _objc_retainAutoreleasedReturnValue();
            _objc_setProperty_nonatomic_copy(puVar15);
            _objc_release(puVar6);
            puVar6 = puVar21;
            func_0x00010bfea820();
            _objc_retainAutoreleasedReturnValue();
            if (puVar6 == (undefined *)0x0) {
              puVar14 = puVar8;
              func_0x00010c262240(puVar8);
              _objc_retainAutoreleasedReturnValue();
              puVar18 = puVar14;
              func_0x00010bfea820();
            }
            else {
              puVar14 = puVar21;
              func_0x00010bfea820(puVar21);
              _objc_retainAutoreleasedReturnValue();
              puVar18 = puVar14;
              func_0x00010c067ec0();
              puVar18 = (undefined *)(long)(int)puVar18;
            }
            lVar16 = lVar7;
            FUN_108c14c18(lVar7,puVar21,puVar18);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar14);
            _objc_release(puVar6);
            if (lVar16 != 0) {
              _objc_setProperty_nonatomic_copy(puVar15);
            }
            func_0x00010c25ed40(param_1);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(lVar16);
          }
        }
        _objc_release(puVar15);
        _objc_release(puVar8);
        _objc_release(puVar4);
        _objc_release(lVar7);
        _objc_release(puVar21);
        _objc_release(param_1);
      }
      _objc_release(lVar7);
      lVar20 = lVar20 + 1;
    } while (lVar3 != lVar20);
    lVar3 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126db000;
  _objc_alloc(PTR_PTR_1126db000);
  lVar3 = lVar2;
  func_0x000107c31908(lVar2,&PTR___NSConcreteGlobalBlock_110ab8460);
  func_0x00010c032e00(puVar4);
  puVar6 = puVar4;
  FUN_108c113e0(param_1,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c1228c0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar17 != 0) {
    lVar3 = param_2;
    func_0x00010c1228c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(param_3);
    _objc_release(lVar3);
  }
  lVar3 = param_2;
  func_0x00010c10ab80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  lVar17 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume(lVar17);
  func_0x00010c2923e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c0aec8; end: 108c0af07;  */

void FUN_108c0aec8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


