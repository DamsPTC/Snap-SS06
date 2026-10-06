/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e413c4; end: 106e413d3; -[SCFeatureSettingsService notificationPublicContentFriendsOfFriends] */

void FUN_106e413c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e88098,1);
  return;
}



/* Entry: 106e413d4; end: 106e413df; -[SCFeatureSettingsService isNotificationPublicContentContactsAvailable] */

void FUN_106e413d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e880b8);
  return;
}



/* Entry: 106e413e0; end: 106e413eb; -[SCFeatureSettingsService notificationPublicContentContactsServerParam] */

undefined ** FUN_106e413e0(void)

{
  return &PTR____CFConstantStringClassReference_110e880b8;
}



/* Entry: 106e413ec; end: 106e413fb; -[SCFeatureSettingsService setNotificationPublicContentContacts:] */

void FUN_106e413ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e880b8,param_3);
  return;
}



/* Entry: 106e413fc; end: 106e41403; -[SCFeatureSettingsService notification_public_content_contacts_client_value:] */

undefined * FUN_106e413fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e41404; end: 106e4140b; -[SCFeatureSettingsService notification_public_content_contacts_server_value:] */

void FUN_106e41404(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106e4140c; end: 106e4141b; -[SCFeatureSettingsService notificationPublicContentContacts] */

void FUN_106e4140c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e880b8,1);
  return;
}



/* Entry: 106e4141c; end: 106e41427; -[SCFeatureSettingsService isNotificationFriendStoriesPrivateAvailable] */

void FUN_106e4141c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e880d8);
  return;
}



/* Entry: 106e41428; end: 106e41433; -[SCFeatureSettingsService notificationFriendStoriesPrivateServerParam] */

undefined ** FUN_106e41428(void)

{
  return &PTR____CFConstantStringClassReference_110e880d8;
}



/* Entry: 106e41434; end: 106e41443; -[SCFeatureSettingsService setNotificationFriendStoriesPrivate:] */

void FUN_106e41434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e880d8,param_3);
  return;
}



/* Entry: 106e41444; end: 106e4144b; -[SCFeatureSettingsService notification_friend_stories_private_client_value:] */

undefined * FUN_106e41444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e4144c; end: 106e41453; -[SCFeatureSettingsService notification_friend_stories_private_server_value:] */

void FUN_106e4144c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106e41454; end: 106e41463; -[SCFeatureSettingsService notificationFriendStoriesPrivate] */

void FUN_106e41454(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e880d8,1);
  return;
}



/* Entry: 106e41464; end: 106e4146f; -[SCFeatureSettingsService isNotificationFriendStoriesRegularAvailable] */

void FUN_106e41464(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e880f8);
  return;
}



/* Entry: 106e41470; end: 106e4147b; -[SCFeatureSettingsService notificationFriendStoriesRegularServerParam] */

undefined ** FUN_106e41470(void)

{
  return &PTR____CFConstantStringClassReference_110e880f8;
}



/* Entry: 106e4147c; end: 106e4148b; -[SCFeatureSettingsService setNotificationFriendStoriesRegular:] */

void FUN_106e4147c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e880f8,param_3);
  return;
}



/* Entry: 106e4148c; end: 106e41493; -[SCFeatureSettingsService notification_friend_stories_regular_client_value:] */

undefined * FUN_106e4148c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e41494; end: 106e4149b; -[SCFeatureSettingsService notification_friend_stories_regular_server_value:] */

void FUN_106e41494(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106e4149c; end: 106e414ab; -[SCFeatureSettingsService notificationFriendStoriesRegular] */

void FUN_106e4149c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e880f8,1);
  return;
}



/* Entry: 106e414ac; end: 106e414b7; -[SCFeatureSettingsService isNotificationMemoriesDailyFlashbackAvailable] */

void FUN_106e414ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e88118);
  return;
}



/* Entry: 106e414b8; end: 106e414c3; -[SCFeatureSettingsService notificationMemoriesDailyFlashbackServerParam] */

undefined ** FUN_106e414b8(void)

{
  return &PTR____CFConstantStringClassReference_110e88118;
}



/* Entry: 106e414c4; end: 106e414d3; -[SCFeatureSettingsService setNotificationMemoriesDailyFlashback:] */

void FUN_106e414c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e88118,param_3);
  return;
}



/* Entry: 106e414d4; end: 106e414db; -[SCFeatureSettingsService notification_memories_daily_flashback_client_value:] */

undefined * FUN_106e414d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e414dc; end: 106e414e3; -[SCFeatureSettingsService notification_memories_daily_flashback_server_value:] */

void FUN_106e414dc(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106e414e4; end: 106e414f3; -[SCFeatureSettingsService notificationMemoriesDailyFlashback] */

void FUN_106e414e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e88118,1);
  return;
}



/* Entry: 106e414f4; end: 106e414ff; -[SCFeatureSettingsService isNotificationMemoriesThemedFlashbackAvailable] */

void FUN_106e414f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e88138);
  return;
}



/* Entry: 106e41500; end: 106e4150b; -[SCFeatureSettingsService notificationMemoriesThemedFlashbackServerParam] */

undefined ** FUN_106e41500(void)

{
  return &PTR____CFConstantStringClassReference_110e88138;
}



/* Entry: 106e4150c; end: 106e4151b; -[SCFeatureSettingsService setNotificationMemoriesThemedFlashback:] */

void FUN_106e4150c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e88138,param_3);
  return;
}



/* Entry: 106e4151c; end: 106e41523; -[SCFeatureSettingsService notification_memories_themed_flashback_client_value:] */

undefined * FUN_106e4151c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e41524; end: 106e4152b; -[SCFeatureSettingsService notification_memories_themed_flashback_server_value:] */

void FUN_106e41524(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106e4152c; end: 106e4153b; -[SCFeatureSettingsService notificationMemoriesThemedFlashback] */

void FUN_106e4152c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e88138,1);
  return;
}



/* Entry: 106e4153c; end: 106e41547; -[SCFeatureSettingsService isNotificationMemoriesChatFlashbackAvailable] */

void FUN_106e4153c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e88158);
  return;
}



/* Entry: 106e41548; end: 106e41553; -[SCFeatureSettingsService notificationMemoriesChatFlashbackServerParam] */

undefined ** FUN_106e41548(void)

{
  return &PTR____CFConstantStringClassReference_110e88158;
}



/* Entry: 106e41554; end: 106e41563; -[SCFeatureSettingsService setNotificationMemoriesChatFlashback:] */

void FUN_106e41554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e88158,param_3);
  return;
}



/* Entry: 106e41564; end: 106e4156b; -[SCFeatureSettingsService notification_memories_chat_flashback_client_value:] */

undefined * FUN_106e41564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e4156c; end: 106e41573; -[SCFeatureSettingsService notification_memories_chat_flashback_server_value:] */

void FUN_106e4156c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106e41574; end: 106e41583; -[SCFeatureSettingsService notificationMemoriesChatFlashback] */

void FUN_106e41574(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e88158,1);
  return;
}



/* Entry: 106e41584; end: 106e4158f; -[SCFeatureSettingsService isCreatorsMidrollNotificationsDisabledAvailable] */

void FUN_106e41584(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e88178);
  return;
}



/* Entry: 106e41590; end: 106e4159b; -[SCFeatureSettingsService creatorsMidrollNotificationsDisabledServerParam] */

undefined ** FUN_106e41590(void)

{
  return &PTR____CFConstantStringClassReference_110e88178;
}



/* Entry: 106e4159c; end: 106e415ab; -[SCFeatureSettingsService setCreatorsMidrollNotificationsDisabled:] */

void FUN_106e4159c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e88178,param_3);
  return;
}



/* Entry: 106e415ac; end: 106e415b3; -[SCFeatureSettingsService creators_midroll_notifications_disabled_client_value:] */

undefined * FUN_106e415ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e415b4; end: 106e415bb; -[SCFeatureSettingsService creators_midroll_notifications_disabled_server_value:] */

void FUN_106e415b4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106e415bc; end: 106e415cb; -[SCFeatureSettingsService creatorsMidrollNotificationsDisabled] */

void FUN_106e415bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e88178,1);
  return;
}



/* Entry: 106e415cc; end: 106e415d7; -[SCFeatureSettingsService isCreatorsMilestoneNotificationsDisabledAvailable] */

void FUN_106e415cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e88198);
  return;
}



/* Entry: 106e415d8; end: 106e415e3; -[SCFeatureSettingsService creatorsMilestoneNotificationsDisabledServerParam] */

undefined ** FUN_106e415d8(void)

{
  return &PTR____CFConstantStringClassReference_110e88198;
}



/* Entry: 106e415e4; end: 106e415f3; -[SCFeatureSettingsService setCreatorsMilestoneNotificationsDisabled:] */

void FUN_106e415e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e88198,param_3);
  return;
}



/* Entry: 106e415f4; end: 106e415fb; -[SCFeatureSettingsService creators_success_notifications_disabled_client_value:] */

undefined * FUN_106e415f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e415fc; end: 106e41603; -[SCFeatureSettingsService creators_success_notifications_disabled_server_value:] */

void FUN_106e415fc(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106e41604; end: 106e41613; -[SCFeatureSettingsService creatorsMilestoneNotificationsDisabled] */

void FUN_106e41604(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e88198,1);
  return;
}



/* Entry: 106e41614; end: 106e4161f; -[SCFeatureSettingsService isOpmTransactionalAvailable] */

void FUN_106e41614(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e881b8);
  return;
}



/* Entry: 106e41620; end: 106e4162b; -[SCFeatureSettingsService opmTransactionalServerParam] */

undefined ** FUN_106e41620(void)

{
  return &PTR____CFConstantStringClassReference_110e881b8;
}



/* Entry: 106e4162c; end: 106e4163b; -[SCFeatureSettingsService setOpmTransactional:] */

void FUN_106e4162c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e881b8,param_3);
  return;
}



/* Entry: 106e4163c; end: 106e41643; -[SCFeatureSettingsService opm_transactional_client_value:] */

void FUN_106e4163c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106e41644; end: 106e4164b; -[SCFeatureSettingsService opm_transactional_server_value:] */

void FUN_106e41644(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106e4164c; end: 106e4165b; -[SCFeatureSettingsService opmTransactional] */

void FUN_106e4164c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e881b8,0);
  return;
}



/* Entry: 106e4165c; end: 106e41667; -[SCFeatureSettingsService isOpmPromotionalAvailable] */

void FUN_106e4165c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e881d8);
  return;
}



/* Entry: 106e41668; end: 106e41673; -[SCFeatureSettingsService opmPromotionalServerParam] */

undefined ** FUN_106e41668(void)

{
  return &PTR____CFConstantStringClassReference_110e881d8;
}



/* Entry: 106e41674; end: 106e41683; -[SCFeatureSettingsService setOpmPromotional:] */

void FUN_106e41674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e881d8,param_3);
  return;
}



/* Entry: 106e41684; end: 106e4168b; -[SCFeatureSettingsService opm_promotional_client_value:] */

void FUN_106e41684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106e4168c; end: 106e41693; -[SCFeatureSettingsService opm_promotional_server_value:] */

void FUN_106e4168c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106e41694; end: 106e416a3; -[SCFeatureSettingsService opmPromotional] */

void FUN_106e41694(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e881d8,0);
  return;
}



/* Entry: 106e416a4; end: 106e416af; -[SCFeatureSettingsService isPlusPromotionsDisabledAvailable] */

void FUN_106e416a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e881f8);
  return;
}



/* Entry: 106e416b0; end: 106e416bb; -[SCFeatureSettingsService plusPromotionsDisabledServerParam] */

undefined ** FUN_106e416b0(void)

{
  return &PTR____CFConstantStringClassReference_110e881f8;
}



/* Entry: 106e416bc; end: 106e416cb; -[SCFeatureSettingsService setPlusPromotionsDisabled:] */

void FUN_106e416bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e881f8,param_3);
  return;
}



/* Entry: 106e416cc; end: 106e416d3; -[SCFeatureSettingsService notification_splus_promotions_disabled_client_value:] */

undefined * FUN_106e416cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e416d4; end: 106e416db; -[SCFeatureSettingsService notification_splus_promotions_disabled_server_value:] */

void FUN_106e416d4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106e416dc; end: 106e416eb; -[SCFeatureSettingsService plusPromotionsDisabled] */

void FUN_106e416dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e881f8,0);
  return;
}



/* Entry: 106e416ec; end: 106e416f7; -[SCFeatureSettingsService isPlusUpdatesDisabledAvailable] */

void FUN_106e416ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e88218);
  return;
}



/* Entry: 106e416f8; end: 106e41703; -[SCFeatureSettingsService plusUpdatesDisabledServerParam] */

undefined ** FUN_106e416f8(void)

{
  return &PTR____CFConstantStringClassReference_110e88218;
}



/* Entry: 106e41704; end: 106e41713; -[SCFeatureSettingsService setPlusUpdatesDisabled:] */

void FUN_106e41704(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e88218,param_3);
  return;
}



/* Entry: 106e41714; end: 106e4171b; -[SCFeatureSettingsService notification_splus_updates_disabled_client_value:] */

undefined * FUN_106e41714(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e4171c; end: 106e41723; -[SCFeatureSettingsService notification_splus_updates_disabled_server_value:] */

void FUN_106e4171c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106e41724; end: 106e41733; -[SCFeatureSettingsService plusUpdatesDisabled] */

void FUN_106e41724(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e88218,0);
  return;
}



/* Entry: 106e41734; end: 106e4173f; -[SCFeatureSettingsService isFriendPostOnSpotlightAvailable] */

void FUN_106e41734(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e88238);
  return;
}



/* Entry: 106e41740; end: 106e4174b; -[SCFeatureSettingsService friendPostOnSpotlightServerParam] */

undefined ** FUN_106e41740(void)

{
  return &PTR____CFConstantStringClassReference_110e88238;
}



/* Entry: 106e4174c; end: 106e4175b; -[SCFeatureSettingsService setFriendPostOnSpotlight:] */

void FUN_106e4174c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e88238,param_3);
  return;
}



/* Entry: 106e4175c; end: 106e41763; -[SCFeatureSettingsService notification_friend_post_on_spotlight_client_value:] */

undefined * FUN_106e4175c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e41764; end: 106e4176b; -[SCFeatureSettingsService notification_friend_post_on_spotlight_server_value:] */

void FUN_106e41764(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106e4176c; end: 106e4177b; -[SCFeatureSettingsService friendPostOnSpotlight] */

void FUN_106e4176c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e88238,1);
  return;
}



/* Entry: 106e4177c; end: 106e41787; -[SCFeatureSettingsService isFriendRepostOnSpotlightAvailable] */

void FUN_106e4177c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e88258);
  return;
}



/* Entry: 106e41788; end: 106e41793; -[SCFeatureSettingsService friendRepostOnSpotlightServerParam] */

undefined ** FUN_106e41788(void)

{
  return &PTR____CFConstantStringClassReference_110e88258;
}



/* Entry: 106e41794; end: 106e417a3; -[SCFeatureSettingsService setFriendRepostOnSpotlight:] */

void FUN_106e41794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e88258,param_3);
  return;
}



/* Entry: 106e417a4; end: 106e417ab; -[SCFeatureSettingsService notification_friend_repost_on_spotlight_client_value:] */

undefined * FUN_106e417a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e417ac; end: 106e417b3; -[SCFeatureSettingsService notification_friend_repost_on_spotlight_server_value:] */

void FUN_106e417ac(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106e417b4; end: 106e417c3; -[SCFeatureSettingsService friendRepostOnSpotlight] */

void FUN_106e417b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e88258,1);
  return;
}



/* Entry: 106e417c4; end: 106e417cf; -[SCFeatureSettingsService isNotificationPublicContentSpotlightTopRankDisabledAvailable] */

void FUN_106e417c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e88278);
  return;
}



/* Entry: 106e417d0; end: 106e417db; -[SCFeatureSettingsService notificationPublicContentSpotlightTopRankDisabledServerParam] */

undefined ** FUN_106e417d0(void)

{
  return &PTR____CFConstantStringClassReference_110e88278;
}



/* Entry: 106e417dc; end: 106e417eb; -[SCFeatureSettingsService setNotificationPublicContentSpotlightTopRankDisabled:] */

void FUN_106e417dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e88278,param_3);
  return;
}



/* Entry: 106e417ec; end: 106e417f3; -[SCFeatureSettingsService notification_public_content_spotlight_top_rank_disabled_client_value:] */

undefined * FUN_106e417ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e417f4; end: 106e417fb; -[SCFeatureSettingsService notification_public_content_spotlight_top_rank_disabled_server_value:] */

void FUN_106e417f4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106e417fc; end: 106e4180b; -[SCFeatureSettingsService notificationPublicContentSpotlightTopRankDisabled] */

void FUN_106e417fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e88278,0);
  return;
}



/* Entry: 106e4180c; end: 106e41817; -[SCFeatureSettingsService isNotificationPublicContentDiscoverStoriesDisabledAvailable] */

void FUN_106e4180c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e88298);
  return;
}



/* Entry: 106e41818; end: 106e41823; -[SCFeatureSettingsService notificationPublicContentDiscoverStoriesDisabledServerParam] */

undefined ** FUN_106e41818(void)

{
  return &PTR____CFConstantStringClassReference_110e88298;
}



/* Entry: 106e41824; end: 106e41833; -[SCFeatureSettingsService setNotificationPublicContentDiscoverStoriesDisabled:] */

void FUN_106e41824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e88298,param_3);
  return;
}



/* Entry: 106e41834; end: 106e4183b; -[SCFeatureSettingsService notification_public_content_discover_stories_disabled_client_value:] */

undefined * FUN_106e41834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106e4183c; end: 106e41843; -[SCFeatureSettingsService notification_public_content_discover_stories_disabled_server_value:] */

void FUN_106e4183c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 106e41844; end: 106e41853; -[SCFeatureSettingsService notificationPublicContentDiscoverStoriesDisabled] */

void FUN_106e41844(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e88298,0);
  return;
}



/* Entry: 106e41854; end: 106e4185f; -[SCFeatureSettingsService isTopicChatsIFollowEnabledAvailable] */

void FUN_106e41854(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e882b8);
  return;
}



/* Entry: 106e41860; end: 106e4186b; -[SCFeatureSettingsService topicChatsIFollowEnabledServerParam] */

undefined ** FUN_106e41860(void)

{
  return &PTR____CFConstantStringClassReference_110e882b8;
}



/* Entry: 106e4186c; end: 106e4187b; -[SCFeatureSettingsService setTopicChatsIFollowEnabled:] */

void FUN_106e4186c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e882b8,param_3);
  return;
}


