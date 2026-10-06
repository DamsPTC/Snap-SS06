/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108064e30; end: 108064ebb; +[SCCommunityOrgPbCommunity descriptor] */

undefined * FUN_108064e30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113729028 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b968f0,
                        &PTR____CFConstantStringClassReference_110dc5f98,&PTR_DAT_113252e68,
                        &PTR_DAT_113252ec0,3,0x20,0x1c);
    func_0x00010c229040();
    puRam0000000113729028 = puVar1;
  }
  return puRam0000000113729028;
}



/* Entry: 108064ebc; end: 108064f23; +[SCCommunityOrgPbCommunityGroupChatMetadata descriptor] */

void FUN_108064ebc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113729030 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b96940,
                        &PTR____CFConstantStringClassReference_110ed23d8,&PTR_DAT_113252e68,
                        &PTR_s_conversationId_113252fc0,6,0x30,0x1c);
    puRam0000000113729030 = puVar1;
  }
  return;
}



/* Entry: 108064f24; end: 108064f2f; -[SCFeatureSettingsService isSendFlowSaveableSnapAcceptedCountAvailable] */

void FUN_108064f24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed23f8);
  return;
}



/* Entry: 108064f30; end: 108064f3b; -[SCFeatureSettingsService sendFlowSaveableSnapAcceptedCountServerParam] */

undefined ** FUN_108064f30(void)

{
  return &PTR____CFConstantStringClassReference_110ed23f8;
}



/* Entry: 108064f3c; end: 108064f4b; -[SCFeatureSettingsService setSendFlowSaveableSnapAcceptedCount:] */

void FUN_108064f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed23f8,param_3);
  return;
}



/* Entry: 108064f4c; end: 108064f53; -[SCFeatureSettingsService send_flow_saveable_snap_accepted_count_client_value:] */

void FUN_108064f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108064f54; end: 108064f5b; -[SCFeatureSettingsService send_flow_saveable_snap_accepted_count_server_value:] */

void FUN_108064f54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108064f5c; end: 108064f6b; -[SCFeatureSettingsService sendFlowSaveableSnapAcceptedCount] */

void FUN_108064f5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed23f8,0);
  return;
}



/* Entry: 108064f6c; end: 108064f77; -[SCFeatureSettingsService isSendFlowSaveableSnapVideoAcceptedCountAvailable] */

void FUN_108064f6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2418);
  return;
}



/* Entry: 108064f78; end: 108064f83; -[SCFeatureSettingsService sendFlowSaveableSnapVideoAcceptedCountServerParam] */

undefined ** FUN_108064f78(void)

{
  return &PTR____CFConstantStringClassReference_110ed2418;
}



/* Entry: 108064f84; end: 108064f93; -[SCFeatureSettingsService setSendFlowSaveableSnapVideoAcceptedCount:] */

void FUN_108064f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed2418,param_3);
  return;
}



/* Entry: 108064f94; end: 108064f9b; -[SCFeatureSettingsService send_flow_saveable_snap_video_accepted_count_client_value:] */

void FUN_108064f94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108064f9c; end: 108064fa3; -[SCFeatureSettingsService send_flow_saveable_snap_video_accepted_count_server_value:] */

void FUN_108064f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108064fa4; end: 108064fb3; -[SCFeatureSettingsService sendFlowSaveableSnapVideoAcceptedCount] */

void FUN_108064fa4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed2418,0);
  return;
}



/* Entry: 108064fb4; end: 108064fbf; -[SCFeatureSettingsService isPostSaveSnapEducationTooltipCountAvailable] */

void FUN_108064fb4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2438);
  return;
}



/* Entry: 108064fc0; end: 108064fcb; -[SCFeatureSettingsService postSaveSnapEducationTooltipCountServerParam] */

undefined ** FUN_108064fc0(void)

{
  return &PTR____CFConstantStringClassReference_110ed2438;
}



/* Entry: 108064fcc; end: 108064fdb; -[SCFeatureSettingsService setPostSaveSnapEducationTooltipCount:] */

void FUN_108064fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed2438,param_3);
  return;
}



/* Entry: 108064fdc; end: 108064fe3; -[SCFeatureSettingsService post_save_snap_education_tooltip_count_client_value:] */

void FUN_108064fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108064fe4; end: 108064feb; -[SCFeatureSettingsService post_save_snap_education_tooltip_count_server_value:] */

void FUN_108064fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108064fec; end: 108064ffb; -[SCFeatureSettingsService postSaveSnapEducationTooltipCount] */

void FUN_108064fec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed2438,0);
  return;
}



/* Entry: 108064ffc; end: 108065007; -[SCFeatureSettingsService isSavedStoryEducationInSendToSeenCountAvailable] */

void FUN_108064ffc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2458);
  return;
}



/* Entry: 108065008; end: 108065013; -[SCFeatureSettingsService savedStoryEducationInSendToSeenCountServerParam] */

undefined ** FUN_108065008(void)

{
  return &PTR____CFConstantStringClassReference_110ed2458;
}



/* Entry: 108065014; end: 108065023; -[SCFeatureSettingsService setSavedStoryEducationInSendToSeenCount:] */

void FUN_108065014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed2458,param_3);
  return;
}



/* Entry: 108065024; end: 10806502b; -[SCFeatureSettingsService SAVED_STORY_EDUCATION_IN_SENDTO_client_value:] */

void FUN_108065024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10806502c; end: 108065033; -[SCFeatureSettingsService SAVED_STORY_EDUCATION_IN_SENDTO_server_value:] */

void FUN_10806502c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108065034; end: 108065073; -[SCFeatureSettingsService savedStoryEducationInSendToSeenCount] */

void FUN_108065034(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed2458,0);
  return;
}



/* Entry: 108065074; end: 10806507f; -[SCFeatureSettingsService hasSeenMapLocationSharingNotification] */

void FUN_108065074(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed24d8);
  return;
}



/* Entry: 108065080; end: 10806508b; -[SCFeatureSettingsService seenMapLocationSharingNotificationServerParam] */

undefined ** FUN_108065080(void)

{
  return &PTR____CFConstantStringClassReference_110ed24d8;
}



/* Entry: 10806508c; end: 10806509b; -[SCFeatureSettingsService setSeenMapLocationSharingNotification:] */

void FUN_10806508c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed24d8,param_3);
  return;
}



/* Entry: 10806509c; end: 1080650a3; -[SCFeatureSettingsService map_location_sharing_notification_tooltip_client_value:] */

undefined * FUN_10806509c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1080650a4; end: 1080650ab; -[SCFeatureSettingsService map_location_sharing_notification_tooltip_server_value:] */

void FUN_1080650a4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 1080650ac; end: 1080650bb; -[SCFeatureSettingsService seenMapLocationSharingNotification] */

void FUN_1080650ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed24d8,0);
  return;
}



/* Entry: 1080650bc; end: 1080650c7; -[SCFeatureSettingsService isMapOnboardedAvailable] */

void FUN_1080650bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed24f8);
  return;
}



/* Entry: 1080650c8; end: 1080650d3; -[SCFeatureSettingsService mapOnboardedServerParam] */

undefined ** FUN_1080650c8(void)

{
  return &PTR____CFConstantStringClassReference_110ed24f8;
}



/* Entry: 1080650d4; end: 1080650e3; -[SCFeatureSettingsService setMapOnboarded:] */

void FUN_1080650d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed24f8,param_3);
  return;
}



/* Entry: 1080650e4; end: 1080650eb; -[SCFeatureSettingsService map_onboarded_client_value:] */

undefined * FUN_1080650e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1080650ec; end: 1080650f3; -[SCFeatureSettingsService map_onboarded_server_value:] */

void FUN_1080650ec(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 1080650f4; end: 108065103; -[SCFeatureSettingsService mapOnboarded] */

void FUN_1080650f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed24f8,0);
  return;
}



/* Entry: 108065104; end: 10806510f; -[SCFeatureSettingsService isMapLastOpenTimeMillisAvailable] */

void FUN_108065104(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2518);
  return;
}



/* Entry: 108065110; end: 10806511b; -[SCFeatureSettingsService mapLastOpenTimeMillisServerParam] */

undefined ** FUN_108065110(void)

{
  return &PTR____CFConstantStringClassReference_110ed2518;
}



/* Entry: 10806511c; end: 10806512b; -[SCFeatureSettingsService setMapLastOpenTimeMillis:] */

void FUN_10806511c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed2518,param_3);
  return;
}



/* Entry: 10806512c; end: 108065133; -[SCFeatureSettingsService map_last_open_time_millis_client_value:] */

void FUN_10806512c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108065134; end: 10806513b; -[SCFeatureSettingsService map_last_open_time_millis_server_value:] */

void FUN_108065134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10806513c; end: 10806514b; -[SCFeatureSettingsService mapLastOpenTimeMillis] */

void FUN_10806513c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed2518,0);
  return;
}



/* Entry: 10806514c; end: 108065157; -[SCFeatureSettingsService isRecommendPlacesToFriendsEnabledAvailable] */

void FUN_10806514c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2538);
  return;
}



/* Entry: 108065158; end: 108065163; -[SCFeatureSettingsService recommendPlacesToFriendsEnabledServerParam] */

undefined ** FUN_108065158(void)

{
  return &PTR____CFConstantStringClassReference_110ed2538;
}



/* Entry: 108065164; end: 108065173; -[SCFeatureSettingsService setRecommendPlacesToFriendsEnabled:] */

void FUN_108065164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed2538,param_3);
  return;
}



/* Entry: 108065174; end: 10806517b; -[SCFeatureSettingsService recommend_places_to_friends_client_value:] */

undefined * FUN_108065174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10806517c; end: 108065183; -[SCFeatureSettingsService recommend_places_to_friends_server_value:] */

void FUN_10806517c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108065184; end: 108065193; -[SCFeatureSettingsService recommendPlacesToFriendsEnabled] */

void FUN_108065184(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed2538,0);
  return;
}



/* Entry: 108065194; end: 10806519f; -[SCFeatureSettingsService isMeTrayPlusUpsellAvailable] */

void FUN_108065194(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2558);
  return;
}



/* Entry: 1080651a0; end: 1080651ab; -[SCFeatureSettingsService meTrayPlusOnboardedServerParam] */

undefined ** FUN_1080651a0(void)

{
  return &PTR____CFConstantStringClassReference_110ed2558;
}



/* Entry: 1080651ac; end: 1080651bb; -[SCFeatureSettingsService setMeTrayPlusUpsellOnboarded:] */

void FUN_1080651ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed2558,param_3);
  return;
}



/* Entry: 1080651bc; end: 1080651c3; -[SCFeatureSettingsService map_me_tray_plus_upsell_tooltip_seen_client_value:] */

undefined * FUN_1080651bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1080651c4; end: 1080651cb; -[SCFeatureSettingsService map_me_tray_plus_upsell_tooltip_seen_server_value:] */

void FUN_1080651c4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 1080651cc; end: 1080651db; -[SCFeatureSettingsService meTrayPlusOnboarded] */

void FUN_1080651cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed2558,0);
  return;
}



/* Entry: 1080651dc; end: 1080651e7; -[SCFeatureSettingsService hasSeenVisualTrayOnboardingTooltip] */

void FUN_1080651dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2578);
  return;
}



/* Entry: 1080651e8; end: 1080651f3; -[SCFeatureSettingsService visualTrayOnboardingTooltipSeenServerParam] */

undefined ** FUN_1080651e8(void)

{
  return &PTR____CFConstantStringClassReference_110ed2578;
}



/* Entry: 1080651f4; end: 108065203; -[SCFeatureSettingsService setSeenVisualTrayOnboardingTooltip:] */

void FUN_1080651f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed2578,param_3);
  return;
}



/* Entry: 108065204; end: 10806520b; -[SCFeatureSettingsService visual_tray_onboarding_tooltip_seen_client_value:] */

undefined * FUN_108065204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10806520c; end: 108065213; -[SCFeatureSettingsService visual_tray_onboarding_tooltip_seen_server_value:] */

void FUN_10806520c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108065214; end: 108065223; -[SCFeatureSettingsService visualTrayOnboardingTooltipSeen] */

void FUN_108065214(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed2578,0);
  return;
}



/* Entry: 108065224; end: 10806522f; -[SCFeatureSettingsService isWidgetUpsellCalloutSeenCountAvailable] */

void FUN_108065224(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2598);
  return;
}



/* Entry: 108065230; end: 10806523b; -[SCFeatureSettingsService widgetUpsellCalloutSeenCountServerParam] */

undefined ** FUN_108065230(void)

{
  return &PTR____CFConstantStringClassReference_110ed2598;
}



/* Entry: 10806523c; end: 10806524b; -[SCFeatureSettingsService setWidgetUpsellCalloutSeenCount:] */

void FUN_10806523c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110ed2598,param_3);
  return;
}



/* Entry: 10806524c; end: 108065253; -[SCFeatureSettingsService map_widget_callout_seen_count_client_value:] */

void FUN_10806524c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108065254; end: 10806525b; -[SCFeatureSettingsService map_widget_callout_seen_count_server_value:] */

void FUN_108065254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10806525c; end: 10806526b; -[SCFeatureSettingsService widgetUpsellCalloutSeenCount] */

void FUN_10806525c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110ed2598,0);
  return;
}



/* Entry: 10806526c; end: 108065277; -[SCFeatureSettingsService hasSeenPublicPlaceFavoritesTooltip] */

void FUN_10806526c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed25b8);
  return;
}



/* Entry: 108065278; end: 108065283; -[SCFeatureSettingsService publicPlaceFavoritesTooltipSeenServerParam] */

undefined ** FUN_108065278(void)

{
  return &PTR____CFConstantStringClassReference_110ed25b8;
}



/* Entry: 108065284; end: 108065293; -[SCFeatureSettingsService setPublicPlaceFavoritesTooltipSeen:] */

void FUN_108065284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed25b8,param_3);
  return;
}



/* Entry: 108065294; end: 10806529b; -[SCFeatureSettingsService public_place_favorites_tooltip_seen_client_value:] */

undefined * FUN_108065294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10806529c; end: 1080652a3; -[SCFeatureSettingsService public_place_favorites_tooltip_seen_server_value:] */

void FUN_10806529c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 1080652a4; end: 1080652b3; -[SCFeatureSettingsService publicPlaceFavoritesTooltipSeen] */

void FUN_1080652a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed25b8,0);
  return;
}



/* Entry: 1080652b4; end: 1080652bf; -[SCFeatureSettingsService hasSeenPublicPlaceFavoritesMapTooltip] */

void FUN_1080652b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed25d8);
  return;
}



/* Entry: 1080652c0; end: 1080652cb; -[SCFeatureSettingsService publicPlaceFavoritesMapTooltipSeenServerParam] */

undefined ** FUN_1080652c0(void)

{
  return &PTR____CFConstantStringClassReference_110ed25d8;
}



/* Entry: 1080652cc; end: 1080652db; -[SCFeatureSettingsService setPublicPlaceFavoritesMapTooltipSeen:] */

void FUN_1080652cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed25d8,param_3);
  return;
}



/* Entry: 1080652dc; end: 1080652e3; -[SCFeatureSettingsService public_place_favorites_map_tooltip_seen_client_value:] */

undefined * FUN_1080652dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1080652e4; end: 1080652eb; -[SCFeatureSettingsService public_place_favorites_map_tooltip_seen_server_value:] */

void FUN_1080652e4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 1080652ec; end: 1080652fb; -[SCFeatureSettingsService publicPlaceFavoritesMapTooltipSeen] */

void FUN_1080652ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed25d8,0);
  return;
}



/* Entry: 1080652fc; end: 108065307; -[SCFeatureSettingsService isNotificationMapsDisabledAvailable] */

void FUN_1080652fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed25f8);
  return;
}



/* Entry: 108065308; end: 108065313; -[SCFeatureSettingsService notificationMapsDisabledServerParam] */

undefined ** FUN_108065308(void)

{
  return &PTR____CFConstantStringClassReference_110ed25f8;
}



/* Entry: 108065314; end: 108065323; -[SCFeatureSettingsService setNotificationMapsDisabled:] */

void FUN_108065314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed25f8,param_3);
  return;
}



/* Entry: 108065324; end: 10806532b; -[SCFeatureSettingsService notification_maps_disabled_client_value:] */

undefined * FUN_108065324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10806532c; end: 108065333; -[SCFeatureSettingsService notification_maps_disabled_server_value:] */

void FUN_10806532c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108065334; end: 108065343; -[SCFeatureSettingsService notificationMapsDisabled] */

void FUN_108065334(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed25f8,0);
  return;
}



/* Entry: 108065344; end: 10806534f; -[SCFeatureSettingsService hasHomesOnTheMapOnboardingTooltipSeen] */

void FUN_108065344(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2618);
  return;
}



/* Entry: 108065350; end: 10806535b; -[SCFeatureSettingsService homesOnTheMapOnboardingTooltipSeenServerParam] */

undefined ** FUN_108065350(void)

{
  return &PTR____CFConstantStringClassReference_110ed2618;
}



/* Entry: 10806535c; end: 10806536b; -[SCFeatureSettingsService setHomesOnTheMapOnboardingTooltipSeen:] */

void FUN_10806535c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed2618,param_3);
  return;
}



/* Entry: 10806536c; end: 108065373; -[SCFeatureSettingsService homes_on_the_map_onboarding_tooptip_accepted_client_value:] */

undefined * FUN_10806536c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108065374; end: 10806537b; -[SCFeatureSettingsService homes_on_the_map_onboarding_tooptip_accepted_server_value:] */

void FUN_108065374(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10806537c; end: 10806538b; -[SCFeatureSettingsService homesOnTheMapOnboardingTooltipSeen] */

void FUN_10806537c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed2618,0);
  return;
}



/* Entry: 10806538c; end: 108065397; -[SCFeatureSettingsService hasSeenFootstepsOnboarding] */

void FUN_10806538c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2638);
  return;
}



/* Entry: 108065398; end: 1080653a3; -[SCFeatureSettingsService footstepsOnboardingSeenServerParam] */

undefined ** FUN_108065398(void)

{
  return &PTR____CFConstantStringClassReference_110ed2638;
}



/* Entry: 1080653a4; end: 1080653b3; -[SCFeatureSettingsService setFootstepsOnboardingSeen:] */

void FUN_1080653a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed2638,param_3);
  return;
}



/* Entry: 1080653b4; end: 1080653bb; -[SCFeatureSettingsService map_footsteps_onboarding_seen_client_value:] */

undefined * FUN_1080653b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1080653bc; end: 1080653c3; -[SCFeatureSettingsService map_footsteps_onboarding_seen_server_value:] */

void FUN_1080653bc(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 1080653c4; end: 1080653cf; -[SCFeatureSettingsService isFootstepsSaveNewFootsteps] */

void FUN_1080653c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110ed2658);
  return;
}



/* Entry: 1080653d0; end: 1080653db; -[SCFeatureSettingsService footstepsSaveNewFootstepsServerParam] */

undefined ** FUN_1080653d0(void)

{
  return &PTR____CFConstantStringClassReference_110ed2658;
}



/* Entry: 1080653dc; end: 1080653eb; -[SCFeatureSettingsService setFootstepsSaveNewFootsteps:] */

void FUN_1080653dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110ed2658,param_3);
  return;
}


