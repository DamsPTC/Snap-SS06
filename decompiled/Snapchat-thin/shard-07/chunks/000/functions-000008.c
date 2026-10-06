/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1050185c8; end: 1050185d7; -[SCFeatureSettingsService runForOfficeMiniSeenCount] */

void FUN_1050185c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dc2d18,0);
  return;
}



/* Entry: 1050185d8; end: 1050185e3; -[SCFeatureSettingsService isRunForOfficeMiniDismissedAvailable] */

void FUN_1050185d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc2d38);
  return;
}



/* Entry: 1050185e4; end: 1050185ef; -[SCFeatureSettingsService runForOfficeMiniDismissedServerParam] */

undefined ** FUN_1050185e4(void)

{
  return &PTR____CFConstantStringClassReference_110dc2d38;
}



/* Entry: 1050185f0; end: 1050185ff; -[SCFeatureSettingsService setRunForOfficeMiniDismissed:] */

void FUN_1050185f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110dc2d38,param_3);
  return;
}



/* Entry: 105018600; end: 105018607; -[SCFeatureSettingsService run_for_office_mini_dismissed_client_value:] */

undefined * FUN_105018600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 105018608; end: 10501860f; -[SCFeatureSettingsService run_for_office_mini_dismissed_server_value:] */

void FUN_105018608(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 105018610; end: 10501861f; -[SCFeatureSettingsService runForOfficeMiniDismissed] */

void FUN_105018610(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dc2d38,0);
  return;
}



/* Entry: 105018620; end: 10501862b; -[SCFeatureSettingsService isFriendCheckupShownTimeAvailable] */

void FUN_105018620(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc2d58);
  return;
}



/* Entry: 10501862c; end: 105018637; -[SCFeatureSettingsService friendCheckupShownTimeServerParam] */

undefined ** FUN_10501862c(void)

{
  return &PTR____CFConstantStringClassReference_110dc2d58;
}



/* Entry: 105018638; end: 105018647; -[SCFeatureSettingsService setFriendCheckupShownTime:] */

void FUN_105018638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dc2d58,param_3);
  return;
}



/* Entry: 105018648; end: 10501864f; -[SCFeatureSettingsService friend_checkup_shown_time_millis_client_value:] */

void FUN_105018648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 105018650; end: 105018657; -[SCFeatureSettingsService friend_checkup_shown_time_millis_server_value:] */

void FUN_105018650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 105018658; end: 105018667; -[SCFeatureSettingsService friendCheckupShownTime] */

void FUN_105018658(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dc2d58,0);
  return;
}



/* Entry: 105018668; end: 105018673; -[SCFeatureSettingsService isFriendCheckupImpressionCountAvailable] */

void FUN_105018668(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc2d78);
  return;
}



/* Entry: 105018674; end: 10501867f; -[SCFeatureSettingsService friendCheckupImpressionCountServerParam] */

undefined ** FUN_105018674(void)

{
  return &PTR____CFConstantStringClassReference_110dc2d78;
}



/* Entry: 105018680; end: 10501868f; -[SCFeatureSettingsService setFriendCheckupImpressionCount:] */

void FUN_105018680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dc2d78,param_3);
  return;
}



/* Entry: 105018690; end: 105018697; -[SCFeatureSettingsService friend_checkup_impression_count_client_value:] */

void FUN_105018690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 105018698; end: 10501869f; -[SCFeatureSettingsService friend_checkup_impression_count_server_value:] */

void FUN_105018698(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1050186a0; end: 1050186af; -[SCFeatureSettingsService friendCheckupImpressionCount] */

void FUN_1050186a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dc2d78,0);
  return;
}



/* Entry: 1050186b0; end: 1050186bb; -[SCFeatureSettingsService isFriendCheckupClickCountAvailable] */

void FUN_1050186b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc2d98);
  return;
}



/* Entry: 1050186bc; end: 1050186c7; -[SCFeatureSettingsService friendCheckupClickCountServerParam] */

undefined ** FUN_1050186bc(void)

{
  return &PTR____CFConstantStringClassReference_110dc2d98;
}



/* Entry: 1050186c8; end: 1050186d7; -[SCFeatureSettingsService setFriendCheckupClickCount:] */

void FUN_1050186c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dc2d98,param_3);
  return;
}



/* Entry: 1050186d8; end: 1050186df; -[SCFeatureSettingsService friend_checkup_click_count_client_value:] */

void FUN_1050186d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 1050186e0; end: 1050186e7; -[SCFeatureSettingsService friend_checkup_click_count_server_value:] */

void FUN_1050186e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1050186e8; end: 1050186f7; -[SCFeatureSettingsService friendCheckupClickCount] */

void FUN_1050186e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dc2d98,0);
  return;
}



/* Entry: 1050186f8; end: 105018703; -[SCFeatureSettingsService isFriendCheckupDismissCountAvailable] */

void FUN_1050186f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc2db8);
  return;
}



/* Entry: 105018704; end: 10501870f; -[SCFeatureSettingsService friendCheckupDismissCountServerParam] */

undefined ** FUN_105018704(void)

{
  return &PTR____CFConstantStringClassReference_110dc2db8;
}



/* Entry: 105018710; end: 10501871f; -[SCFeatureSettingsService setFriendCheckupDismissCount:] */

void FUN_105018710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dc2db8,param_3);
  return;
}



/* Entry: 105018720; end: 105018727; -[SCFeatureSettingsService friend_checkup_dismiss_count_client_value:] */

void FUN_105018720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 105018728; end: 10501872f; -[SCFeatureSettingsService friend_checkup_dismiss_count_server_value:] */

void FUN_105018728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 105018730; end: 10501873f; -[SCFeatureSettingsService friendCheckupDismissCount] */

void FUN_105018730(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dc2db8,0);
  return;
}



/* Entry: 105018740; end: 10501874b; -[SCFeatureSettingsService isPrivacyChatContactCTACountAvailable] */

void FUN_105018740(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc2dd8);
  return;
}



/* Entry: 10501874c; end: 105018757; -[SCFeatureSettingsService privacyChatContactCTACountServerParam] */

undefined ** FUN_10501874c(void)

{
  return &PTR____CFConstantStringClassReference_110dc2dd8;
}



/* Entry: 105018758; end: 105018767; -[SCFeatureSettingsService setPrivacyChatContactCTACount:] */

void FUN_105018758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dc2dd8,param_3);
  return;
}



/* Entry: 105018768; end: 10501876f; -[SCFeatureSettingsService privacy_chat_contact_cta_count_client_value:] */

void FUN_105018768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 105018770; end: 105018777; -[SCFeatureSettingsService privacy_chat_contact_cta_count_server_value:] */

void FUN_105018770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 105018778; end: 105018787; -[SCFeatureSettingsService privacyChatContactCTACount] */

void FUN_105018778(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dc2dd8,0);
  return;
}



/* Entry: 105018788; end: 10501881b; -[SCLegacyProfileTooltipsServiceImpl initWithFeatureSettingsService:] */

undefined8 * FUN_105018788(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5a78;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_38,puVar1);
    uVar2 = puVar1[2];
    puVar1[2] = 0;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10501881c; end: 10501885b; -[SCLegacyProfileTooltipsServiceImpl seenMyUnifiedProfilePhoneNumberVerificationActivityCard] */

undefined8 FUN_10501881c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157a00();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10501885c; end: 105018893; -[SCLegacyProfileTooltipsServiceImpl setDisplayedMyUnifiedProfilePhoneNumberVerificationActivityCard] */

void FUN_10501885c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105018894; end: 1050188d3; -[SCLegacyProfileTooltipsServiceImpl seenMyUnifiedProfileStoryManagementLinkSharingBadge] */

undefined8 FUN_105018894(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157a20();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1050188d4; end: 10501890b; -[SCLegacyProfileTooltipsServiceImpl setDisplayedMyUnifiedProfileStoryManagementLinkSharingBadge] */

void FUN_1050188d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10501890c; end: 10501894b; -[SCLegacyProfileTooltipsServiceImpl incrementBirthdayMiniSeenCount] */

void FUN_10501890c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1a6c0();
  func_0x00010c1703e0(lVar1,param_2,lVar2 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10501894c; end: 10501898b; -[SCLegacyProfileTooltipsServiceImpl birthdaySeenCount] */

undefined8 FUN_10501894c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1a6c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10501898c; end: 1050189c3; -[SCLegacyProfileTooltipsServiceImpl setBirthdayMiniDismissed] */

void FUN_10501898c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1703c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050189c4; end: 105018a03; -[SCLegacyProfileTooltipsServiceImpl hasBirthdayMiniBeenDismissed] */

undefined8 FUN_1050189c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1a6a0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105018a04; end: 105018a43; -[SCLegacyProfileTooltipsServiceImpl incrementRunForOfficeMiniSeenCount] */

void FUN_105018a04(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c142840();
  func_0x00010c1eee80(lVar1,param_2,lVar2 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105018a44; end: 105018a83; -[SCLegacyProfileTooltipsServiceImpl runForOfficeSeenCount] */

undefined8 FUN_105018a44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c142840();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105018a84; end: 105018abb; -[SCLegacyProfileTooltipsServiceImpl setRunForOfficeMiniDismissed] */

void FUN_105018a84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eee60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105018abc; end: 105018afb; -[SCLegacyProfileTooltipsServiceImpl hasRunForOfficeMiniBeenDismissed] */

undefined8 FUN_105018abc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c142820();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105018afc; end: 105018c37; -[SCLegacyProfileTooltipsServiceImpl resetFriendCheckupStatesAfter:] */

void FUN_105018afc(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  
  uVar1 = *(ulong *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb7d80();
  _objc_release(uVar1);
  if (0 < (long)uVar2) {
    dVar5 = (double)uVar2 / 1000.0;
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    if (param_1 <= -dVar5) {
      uVar4 = *(undefined8 *)(param_2 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19fb40();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_2 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19fb00();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_2 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19fb20();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_2 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19fb60();
      _objc_release(uVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 105018c38; end: 105018ce3; -[SCLegacyProfileTooltipsServiceImpl setFriendCheckupShown] */

void FUN_105018c38(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb7d80();
  _objc_release(lVar1);
  if (0 < lVar2) {
    return;
  }
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19fb60();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105018ce4; end: 105018d53; -[SCLegacyProfileTooltipsServiceImpl friendCheckupShownTime] */

void FUN_105018ce4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb7d80();
  _objc_release(uVar1);
  if (0 < (long)uVar2) {
    func_0x00010bf655e0((double)uVar2 / 1000.0,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105018d54; end: 105018d93; -[SCLegacyProfileTooltipsServiceImpl incrementFriendCheckupImpressionCount] */

void FUN_105018d54(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb7d60();
  func_0x00010c19fb40(lVar1,param_2,lVar2 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105018d94; end: 105018dd3; -[SCLegacyProfileTooltipsServiceImpl friendCheckupImpressionCount] */

undefined8 FUN_105018d94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb7d60();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105018dd4; end: 105018e13; -[SCLegacyProfileTooltipsServiceImpl incrementFriendCheckupDismissCount] */

void FUN_105018dd4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb7d40();
  func_0x00010c19fb20(lVar1,param_2,lVar2 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105018e14; end: 105018e53; -[SCLegacyProfileTooltipsServiceImpl friendCheckupDismissCount] */

undefined8 FUN_105018e14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb7d40();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105018e54; end: 105018e93; -[SCLegacyProfileTooltipsServiceImpl incrementFriendCheckupClickCount] */

void FUN_105018e54(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb7d20();
  func_0x00010c19fb00(lVar1,param_2,lVar2 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105018e94; end: 105018ed3; -[SCLegacyProfileTooltipsServiceImpl friendCheckupClickCount] */

undefined8 FUN_105018e94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb7d20();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105018ed4; end: 105018f13; -[SCLegacyProfileTooltipsServiceImpl contactBookMessagingImpressionCount] */

undefined8 FUN_105018ed4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c113e40();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105018f14; end: 105018f53; -[SCLegacyProfileTooltipsServiceImpl incrementContactBookMessagingImpressionCount] */

void FUN_105018f14(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c113e40();
  func_0x00010c1e3420(lVar1,param_2,lVar2 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105018f54; end: 105018f83; -[SCLegacyProfileTooltipsServiceImpl .cxx_destruct] */

void FUN_105018f54(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105018f84; end: 105019203; -[SCFriendProfileIdentityPillsSectionActionHandler initWithSnapchatter:conversationId:valdiRuntimeProvider:communityActionMenuScopeExposer:communityPillTapScopeExposer:saturnUpsellTrayScopeExposer:saturnExperimentProvider:saturnSocialContextProvider:mutualFriendsPageScopeExposer:mutualFriendsPageScopeServices:plusStreakRestorePurchaseScopeFactoryServices:] */

undefined8 *
FUN_105018f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126e5a80;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105019204; end: 105019597; -[SCFriendProfileIdentityPillsSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

long FUN_105019204(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    func_0x00010be7bd20(param_1);
    goto LAB_10501939c;
  }
  uVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar1 == 0) {
      uVar2 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((int)uVar1 == 0) {
        uVar2 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((int)uVar1 == 0) {
          uVar2 = param_4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar2;
          func_0x00010c0720c0();
          _objc_release(uVar2);
          if ((int)uVar1 == 0) {
            param_1 = 0;
            goto LAB_10501939c;
          }
          uVar1 = param_4;
          func_0x00010beee2e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126afdb8;
          _objc_opt_class(PTR_PTR_1126afdb8);
          uVar4 = uVar1;
          _objc_opt_isKindOfClass(uVar1,puVar3);
          uVar2 = uVar1;
          if ((uVar4 & 1) == 0) {
            uVar2 = 0;
          }
          _objc_retain(uVar2);
          _objc_release(uVar1);
          uVar1 = uVar2;
          func_0x00010beee2e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          uVar4 = uVar1;
          _objc_opt_isKindOfClass(uVar1,puVar3);
          uVar2 = uVar1;
          if ((uVar4 & 1) == 0) {
            uVar2 = 0;
          }
          _objc_retain(uVar2);
          _objc_release(uVar1);
          func_0x00010be6a2a0(param_1);
        }
        else {
          uVar1 = param_4;
          func_0x00010beee2e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126afdb8;
          _objc_opt_class(PTR_PTR_1126afdb8);
          uVar4 = uVar1;
          _objc_opt_isKindOfClass(uVar1,puVar3);
          uVar2 = uVar1;
          if ((uVar4 & 1) == 0) {
            uVar2 = 0;
          }
          _objc_retain(uVar2);
          _objc_release(uVar1);
          uVar1 = uVar2;
          func_0x00010beee2e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          uVar4 = uVar1;
          _objc_opt_isKindOfClass(uVar1,puVar3);
          uVar2 = uVar1;
          if ((uVar4 & 1) == 0) {
            uVar2 = 0;
          }
          _objc_retain(uVar2);
          _objc_release(uVar1);
          func_0x00010be821a0(param_1);
        }
        _objc_release(uVar2);
        param_1 = 1;
      }
      else {
        func_0x00010be486c0(param_1);
      }
      goto LAB_10501939c;
    }
    uVar1 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar4 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar3);
    uVar2 = uVar1;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar1);
    func_0x00010be68560(param_1);
  }
  else {
    uVar2 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010c2923e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be477c0(param_1);
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
LAB_10501939c:
  _objc_release(param_4);
  return param_1;
}



/* Entry: 105019598; end: 105019643; -[SCFriendProfileIdentityPillsSectionActionHandler _onMutualFriendsPillTap:] */

void FUN_105019598(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b3530;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf22ae0(uVar3,param_2,param_3,puVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x48),param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105019644; end: 10501970f; -[SCFriendProfileIdentityPillsSectionActionHandler _presentIdentityPillDialogWithActionModel:] */

undefined8 FUN_105019644(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afdb8;
  _objc_opt_class(PTR_PTR_1126afdb8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b3d30;
  _objc_opt_class(PTR_PTR_1126b3d30);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010be7d480(param_1);
  _objc_release(uVar1);
  return 1;
}



/* Entry: 105019710; end: 10501978f; -[SCFriendProfileIdentityPillsSectionActionHandler _presentPillDialogWithViewModel:] */

void FUN_105019710(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3d38;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c061ec0();
  _objc_release(param_3);
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105019790; end: 10501986f; -[SCFriendProfileIdentityPillsSectionActionHandler _launchCommunityPillTapScopewithGroupId:userId:] */

undefined8 FUN_105019790(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c071800();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((lVar2 == 0) && (lVar2 = param_3, func_0x00010c08fa60(), lVar2 != 0)) {
      puVar3 = PTR_PTR_1126b1008;
      _objc_alloc(PTR_PTR_1126b1008);
      lVar2 = param_1 + 0x68;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c0190e0(puVar3,param_2,param_3,param_4,lVar2,param_1);
      _objc_release(lVar2);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28),param_2,puVar3);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return 1;
}



/* Entry: 105019870; end: 105019903; -[SCFriendProfileIdentityPillsSectionActionHandler _onCommunityPillLongPressWithStoryId:] */

undefined8 FUN_105019870(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b3d40;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c039080(puVar1,param_2,lVar2,param_1,param_3,2);
  _objc_release(param_3);
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
  _objc_release(puVar1);
  return 1;
}



/* Entry: 105019904; end: 105019a17; -[SCFriendProfileIdentityPillsSectionActionHandler _launchStreakRestore] */

undefined8 FUN_105019904(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar2 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c038f40(puVar1,param_2,lVar2,1);
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126b3590;
    _objc_alloc(PTR_PTR_1126b3590);
    puVar4 = puVar3;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e600(puVar3,param_2,puVar4,0x6a,0x21,0,0);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b3598;
    _objc_alloc(PTR_PTR_1126b3598);
    func_0x00010c056e20();
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010bf21f80(uVar5,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar5;
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  return 1;
}



/* Entry: 105019a18; end: 105019b9b; -[SCFriendProfileIdentityPillsSectionActionHandler _processSaturnDeeplinkWithUrl:] */

void FUN_105019a18(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c071600();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b3d48;
    _objc_alloc_init(PTR_PTR_1126b3d48);
    if ((int)uVar3 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c114880(puVar4);
      _objc_release(puVar5);
    }
    else {
      _objc_initWeak(auStack_38,param_1);
      puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(param_3);
      func_0x00010c1148a0(puVar4);
      _objc_release(puVar5);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105019b9c; end: 105019c43;  */

void FUN_105019b9c(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  if ((param_2 & 1) == 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_105019c44;
    puStack_38 = &UNK_110841fb0;
    _objc_copyWeak(auStack_28,param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    uStack_30 = uVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_release(uStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 105019c44; end: 105019cd3;  */

void FUN_105019c44(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    return;
  }
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bde9be0();
  _objc_release(lVar3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be482e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105019cd4; end: 105019d77; -[SCFriendProfileIdentityPillsSectionActionHandler _copySaturnLinkForDeferredOpen:] */

void FUN_105019cd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07cf20();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar4 = PTR_PTR_1126b3d48;
      _objc_alloc_init(PTR_PTR_1126b3d48);
      func_0x00010bf52080();
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105019d78; end: 105019e9b; -[SCFriendProfileIdentityPillsSectionActionHandler _launchSaturnUpsellTray] */

undefined8 FUN_105019d78(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      func_0x00010be7e360(param_1);
    }
    else {
      _objc_initWeak(auStack_38,param_1);
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c2923e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010bfaa5a0(lVar1);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
    _objc_release(lVar1);
  }
  return 1;
}



/* Entry: 105019e9c; end: 105019ee3;  */

void FUN_105019e9c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e360();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105019ee4; end: 10501a14f; -[SCFriendProfileIdentityPillsSectionActionHandler _presentSaturnUpsellTrayWithSocialContext:] */

void FUN_105019ee4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar10 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar10);
  func_0x00010c038f40(puVar2,param_2,lVar10,1);
  _objc_release(lVar10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010901d7c4(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010901e6c8();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b3d50;
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237a40(puVar6,param_2,uVar5);
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126b3d58;
  _objc_alloc(PTR_PTR_1126b3d58);
  lVar10 = param_3;
  func_0x00010bfb8520(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010bfb7d00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  func_0x00010c154bc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_3;
    func_0x00010c276640();
  }
  func_0x00010c056c20(puVar6,param_2,puVar2,uVar4,1,1,0,lVar10,lVar7,lVar8,lVar9,0,0,0);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar10);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_3 == 0) {
    func_0x00010c2066c0(puVar6,param_2,PTR____NSArray0__struct_11034ab48);
    func_0x00010c2066e0(puVar6,param_2,puVar1);
  }
  else {
    lVar10 = param_3;
    func_0x00010c2743e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2066c0(puVar6,param_2,lVar10);
    _objc_release(lVar10);
    lVar10 = param_3;
    func_0x00010c274400(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2066e0(puVar6,param_2,lVar10);
    _objc_release(lVar10);
  }
  lVar10 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10501a150; end: 10501a197; -[SCFriendProfileIdentityPillsSectionActionHandler didCompleteProfileCommunityActionMenuScopeWithDidLeaveCommunity:] */

void FUN_10501a150(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10501a198; end: 10501a1df; -[SCFriendProfileIdentityPillsSectionActionHandler didCompleteCommunityPillTapScope] */

void FUN_10501a198(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10501a1e0; end: 10501a1ef; -[SCFriendProfileIdentityPillsSectionActionHandler streakRestorePurchaseDismissedWithDidRestore:] */

void FUN_10501a1e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10501a1f0; end: 10501a237; -[SCFriendProfileIdentityPillsSectionActionHandler saturnUpsellTrayDidDismiss] */

void FUN_10501a1f0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10501a238; end: 10501a27f; -[SCFriendProfileIdentityPillsSectionActionHandler mutualFriendsPageDidDismissWithScope:] */

void FUN_10501a238(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10501a280; end: 10501a297; -[SCFriendProfileIdentityPillsSectionActionHandler presentingViewController] */

void FUN_10501a280(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10501a298; end: 10501a2a3; -[SCFriendProfileIdentityPillsSectionActionHandler setPresentingViewController:] */

void FUN_10501a298(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 10501a2a4; end: 10501a353; -[SCFriendProfileIdentityPillsSectionActionHandler .cxx_destruct] */

void FUN_10501a2a4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10501a354; end: 10501a907; -[SCFriendProfileIdentityPillsSectionDataProvider initWithSnapchatter:valdiRuntimeProvider:snapchattersObservableRepository:snapchattersDataTracker:friendScoreCoordination:auraEntryPointObserver:auraDataManager:circumstanceEngine:friendmojiRegistry:friendmojiDataProvider:plusFeatureGating:myBitmojiAvatarIdProvider:grapheneRegistry:customStoriesDataFetcher:locationContextFetcher:conversationUpdatesPublisher:composerFriendStore:birthdayPageContextProviderServices:saturnExperimentProvider:friendingExperimentReader:messageExperimentService:streakProvider:topicPageLauncherFactory:navigationDelegate:deckHierarchyFactory:] */

undefined8 *
FUN_10501a354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  puStack_70 = PTR_PTR_1126e5a88;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_27;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = 0;
    _objc_release(uVar2);
    *(undefined2 *)(puVar1 + 0x1c) = 0;
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = 0;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x22];
    puVar1[0x22] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0c28;
    _objc_opt_new();
    uVar2 = puVar1[0x23];
    puVar1[0x23] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10501a908; end: 10501aabf; -[SCFriendProfileIdentityPillsSectionDataProvider setUp] */

void FUN_10501a908(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar2 = param_1 + 0x128;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c295320();
  _objc_release(lVar2);
  func_0x00010be66de0(param_1,param_2,*(undefined8 *)(param_1 + 0xd0));
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar3);
  lVar4 = *(long *)(param_1 + 0xd0);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
    func_0x000108435fdc();
    if (iVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c286060();
      _objc_release(uVar3);
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
    func_0x000108060890();
    if (iVar1 != 0) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_10501aac0;
      puStack_50 = &UNK_110841f20;
      ppuVar5 = &puStack_68;
      lStack_48 = lVar4;
      _objc_retainBlock(ppuVar5);
      iVar1 = (int)*(undefined8 *)(param_1 + 0xd0);
      func_0x000100bf119c();
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x130);
      func_0x00010c11de00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      if (iVar1 == 0) {
        func_0x00010c284de0(uVar3,param_2,lVar4,uVar6,ppuVar5);
      }
      else {
        func_0x00010c284dc0();
      }
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(ppuVar5);
    }
    func_0x00010be0f5a0(param_1);
    func_0x00010be9b520(param_1);
    lVar2 = param_1;
    func_0x00010be20aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0xf8);
    *(long *)(param_1 + 0xf8) = lVar2;
    _objc_release(uVar3);
  }
  _objc_release(lVar4);
  return;
}



/* Entry: 10501aac0; end: 10501aac3;  */

void FUN_10501aac0(void)

{
  return;
}



/* Entry: 10501aac4; end: 10501abbf; -[SCFriendProfileIdentityPillsSectionDataProvider _schedulePillSectionupdate] */

void FUN_10501aac4(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if ((*(byte *)(param_1 + 0x120) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x120) = 1;
    _objc_initWeak(auStack_28,param_1);
    uVar1 = 0;
    _dispatch_time(0,100000000);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x10501ab74;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010058c530(uVar1,PTR___dispatch_main_q_11034be20,&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 10501abc0; end: 10501b20f; -[SCFriendProfileIdentityPillsSectionDataProvider _observeSnapchatter:] */

void FUN_10501abc0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 200));
  uVar3 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c08fa60();
  if (uVar4 != 0) {
    _objc_initWeak(auStack_80,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x130);
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c2445c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_10501b210;
    puStack_98 = &UNK_110855370;
    _objc_copyWeak(auStack_88,auStack_80);
    uVar8 = uVar7;
    uStack_90 = uVar3;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    iVar2 = (int)*(undefined8 *)(param_1 + 0x38);
    func_0x000108435fdc();
    if (iVar2 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c22f660(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c0e0ec0();
      _objc_retainAutoreleasedReturnValue();
      puStack_d8 = puVar1;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_10501b260;
      puStack_c0 = &UNK_110842a38;
      _objc_copyWeak(auStack_b8,auStack_80);
      uVar5 = uVar8;
      func_0x00010c25ff60(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar5);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar4);
      _objc_release(uVar6);
      _objc_destroyWeak(auStack_b8);
    }
    uVar4 = param_3;
    func_0x000100bf119c();
    if ((int)uVar4 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x130);
      func_0x00010c11de00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010bfb7f80(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_100 = puVar1;
      uStack_f8 = 0xc2000000;
      pcStack_f0 = FUN_10501b2c0;
      puStack_e8 = &UNK_1108634b8;
      _objc_copyWeak(auStack_e0,auStack_80);
      uVar8 = uVar7;
      func_0x00010c25ff60(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_e0);
    }
    uVar4 = param_3;
    func_0x000100bf119c();
    if (((int)uVar4 != 0) && (uVar4 = param_3, func_0x000100bf0d4c(param_3,0), (uVar4 & 1) == 0)) {
      func_0x00010bea7ac0(param_1);
      uVar5 = *(undefined8 *)(param_1 + 0x118);
      _objc_retain(uVar5);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x130);
      func_0x00010c11de00(uVar8);
      _objc_retainAutoreleasedReturnValue();
      puStack_138 = puVar1;
      uStack_130 = 0xc2000000;
      pcStack_128 = FUN_10501b308;
      puStack_120 = &UNK_1108634e8;
      _objc_retain(param_3);
      uStack_118 = param_3;
      uStack_110 = uVar5;
      _objc_copyWeak(auStack_108,auStack_80);
      func_0x00010bfb8aa0(uVar7);
      _objc_release(uVar8);
      _objc_release(uVar4);
      _objc_release(uVar7);
      _objc_destroyWeak(auStack_108);
      _objc_release(uStack_118);
      _objc_release(uVar5);
    }
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010bf3e040();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c28d760();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = puVar1;
    uStack_158 = 0xc2000000;
    uStack_150 = 0x10501b398;
    puStack_148 = &UNK_1108560f0;
    _objc_copyWeak(auStack_140,auStack_80);
    uVar6 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar9);
    uVar4 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea5680(param_1);
    _objc_release(uVar4);
    uVar8 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010c0790e0();
    _objc_release(uVar8);
    if ((int)uVar7 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0xa8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c25c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c0e0ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_168,auStack_80);
      uVar5 = uVar8;
      func_0x00010c25ff60(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar5);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_destroyWeak(auStack_168);
    }
    _objc_destroyWeak(auStack_140);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 10501b210; end: 10501b25f;  */

void FUN_10501b210(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bea7b40();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10501b260; end: 10501b2bf;  */

void FUN_10501b260(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010bea78e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10501b2c0; end: 10501b307;  */

void FUN_10501b2c0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea6920();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10501b308; end: 10501b3fb;  */

void FUN_10501b308(long param_1,long param_2,long param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x000108c79e8c(*(undefined8 *)(param_1 + 0x28),PTR_PTR_1133bb3c0,1);
  }
  if (param_2 != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010c150c20(param_2);
    func_0x00010bea7ac0(param_1);
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10501b3fc; end: 10501b427;  */

void FUN_10501b3fc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9b520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10501b428; end: 10501b503; -[SCFriendProfileIdentityPillsSectionDataProvider _setSnapchatter:] */

void FUN_10501b428(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar5 = *(ulong *)(param_1 + 0xd0);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  if (uVar5 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar5);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar1 = uVar5;
      func_0x00010c071ae0(uVar5,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar1 & 1) != 0) goto LAB_10501b4f0;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    *(ulong *)(param_1 + 0xd0) = param_3;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0xd0);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      func_0x00010be9b520(param_1);
    }
  }
LAB_10501b4f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10501b504; end: 10501b51b; -[SCFriendProfileIdentityPillsSectionDataProvider _setShowAuraEntryPoint:] */

void FUN_10501b504(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0xe0) == param_3) {
    return;
  }
  *(char *)(param_1 + 0xe0) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be9b530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__schedulePillSectionupdate_1125846f0);
  return;
}



/* Entry: 10501b51c; end: 10501b5db; -[SCFriendProfileIdentityPillsSectionDataProvider _setSnapScore:] */

void FUN_10501b51c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = *(undefined **)(param_1 + 0xd8);
  _objc_retain(puVar4);
  _objc_retain(puVar1);
  if (puVar4 == puVar1) {
    _objc_release(puVar1);
    _objc_release(puVar4);
  }
  else {
    if (puVar1 == (undefined *)0x0) {
      _objc_release(puVar4);
    }
    else {
      puVar2 = puVar4;
      func_0x00010c071ae0(puVar4,param_2,puVar1);
      _objc_release(puVar1);
      _objc_release(puVar4);
      if (((ulong)puVar2 & 1) != 0) goto LAB_10501b5c8;
    }
    _objc_retain(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined **)(param_1 + 0xd8) = puVar1;
    _objc_release(uVar3);
    func_0x00010be9b520(param_1);
  }
LAB_10501b5c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10501b5dc; end: 10501b5f3; -[SCFriendProfileIdentityPillsSectionDataProvider _setShowClosestFriendScore:] */

void FUN_10501b5dc(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0xe1) == param_3) {
    return;
  }
  *(char *)(param_1 + 0xe1) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be9b530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__schedulePillSectionupdate_1125846f0);
  return;
}



/* Entry: 10501b5f4; end: 10501b64b; -[SCFriendProfileIdentityPillsSectionDataProvider _setPublicGroupMetadata:] */

void FUN_10501b5f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0xf0);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0xf0) = param_3;
    _objc_release(uVar2);
    func_0x00010be9b520(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


