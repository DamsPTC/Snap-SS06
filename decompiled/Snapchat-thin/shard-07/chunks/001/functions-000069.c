/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105149278; end: 10514927f; -[SCFeatureSettingsService sharing_has_seen_snap_anyone_privacy_alert_server_value:] */

void FUN_105149278(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 105149280; end: 10514928f; -[SCFeatureSettingsService seenSnapAnyoneSendingModal] */

void FUN_105149280(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dc7458,0);
  return;
}



/* Entry: 105149290; end: 10514929b; -[SCFeatureSettingsService hasSeenScheduleMoreButtonTooltip] */

void FUN_105149290(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc7478);
  return;
}



/* Entry: 10514929c; end: 1051492a7; -[SCFeatureSettingsService seenScheduleMoreButtonTooltipServerParam] */

undefined ** FUN_10514929c(void)

{
  return &PTR____CFConstantStringClassReference_110dc7478;
}



/* Entry: 1051492a8; end: 1051492b7; -[SCFeatureSettingsService setSeenScheduleMoreButtonTooltip:] */

void FUN_1051492a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110dc7478,param_3);
  return;
}



/* Entry: 1051492b8; end: 1051492bf; -[SCFeatureSettingsService schedule_more_button_tooltip_seen_client_value:] */

undefined * FUN_1051492b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1051492c0; end: 1051492c7; -[SCFeatureSettingsService schedule_more_button_tooltip_seen_server_value:] */

void FUN_1051492c0(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 1051492c8; end: 1051492d7; -[SCFeatureSettingsService seenScheduleMoreButtonTooltip] */

void FUN_1051492c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dc7478,0);
  return;
}



/* Entry: 1051492d8; end: 1051492e3; -[SCFeatureSettingsService hasNewGroupButtonOnboardingAnimationShownCount] */

void FUN_1051492d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc7498);
  return;
}



/* Entry: 1051492e4; end: 1051492ef; -[SCFeatureSettingsService newGroupButtonOnboardingAnimationShownCountServerParam] */

undefined ** FUN_1051492e4(void)

{
  return &PTR____CFConstantStringClassReference_110dc7498;
}



/* Entry: 1051492f0; end: 1051492ff; -[SCFeatureSettingsService setNewGroupButtonOnboardingAnimationShownCount:] */

void FUN_1051492f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dc7498,param_3);
  return;
}



/* Entry: 105149300; end: 105149307; -[SCFeatureSettingsService NEW_GROUP_IN_RECIPIENTS_BAR_SEND_TO_EDUCATION_SHOWN_COUNT_client_value:] */

void FUN_105149300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 105149308; end: 10514930f; -[SCFeatureSettingsService NEW_GROUP_IN_RECIPIENTS_BAR_SEND_TO_EDUCATION_SHOWN_COUNT_server_value:] */

void FUN_105149308(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 105149310; end: 10514931f; -[SCFeatureSettingsService newGroupButtonOnboardingAnimationShownCount] */

void FUN_105149310(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dc7498,0);
  return;
}



/* Entry: 105149320; end: 10514932b; -[SCFeatureSettingsService hasSeenDragToSelectTooltip] */

void FUN_105149320(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc74b8);
  return;
}



/* Entry: 10514932c; end: 105149337; -[SCFeatureSettingsService seenDragToSelectTooltipServerParam] */

undefined ** FUN_10514932c(void)

{
  return &PTR____CFConstantStringClassReference_110dc74b8;
}



/* Entry: 105149338; end: 105149347; -[SCFeatureSettingsService setSeenDragToSelectTooltip:] */

void FUN_105149338(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110dc74b8,param_3);
  return;
}



/* Entry: 105149348; end: 10514934f; -[SCFeatureSettingsService SEEN_DRAG_TO_SELECT_TOOLTIP_IN_SENDTO_PAGE_client_value:] */

undefined * FUN_105149348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 105149350; end: 105149357; -[SCFeatureSettingsService SEEN_DRAG_TO_SELECT_TOOLTIP_IN_SENDTO_PAGE_server_value:] */

void FUN_105149350(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 105149358; end: 105149367; -[SCFeatureSettingsService seenDragToSelectTooltip] */

void FUN_105149358(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dc74b8,0);
  return;
}



/* Entry: 105149368; end: 105149373; -[SCFeatureSettingsService hasRecentlyActiveEducationShownCount] */

void FUN_105149368(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc74d8);
  return;
}



/* Entry: 105149374; end: 10514937f; -[SCFeatureSettingsService recentlyActiveEducationShownCountServerParam] */

undefined ** FUN_105149374(void)

{
  return &PTR____CFConstantStringClassReference_110dc74d8;
}



/* Entry: 105149380; end: 10514938f; -[SCFeatureSettingsService setRecentlyActiveEducationShownCount:] */

void FUN_105149380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dc74d8,param_3);
  return;
}



/* Entry: 105149390; end: 105149397; -[SCFeatureSettingsService RECENTLY_ACTIVE_INDICATOR_EXPLANATION_SHOWN_COUNT_client_value:] */

void FUN_105149390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 105149398; end: 10514939f; -[SCFeatureSettingsService RECENTLY_ACTIVE_INDICATOR_EXPLANATION_SHOWN_COUNT_server_value:] */

void FUN_105149398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1051493a0; end: 1051493af; -[SCFeatureSettingsService recentlyActiveEducationShownCount] */

void FUN_1051493a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dc74d8,0);
  return;
}



/* Entry: 1051493b0; end: 1051493bb; -[SCFeatureSettingsService hasSeenQueuedOffPlatformSharingTooltip] */

void FUN_1051493b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc74f8);
  return;
}



/* Entry: 1051493bc; end: 1051493c7; -[SCFeatureSettingsService seenQueuedOffPlatformSharingTooltipServerParam] */

undefined ** FUN_1051493bc(void)

{
  return &PTR____CFConstantStringClassReference_110dc74f8;
}



/* Entry: 1051493c8; end: 1051493d7; -[SCFeatureSettingsService setSeenQueuedOffPlatformSharingTooltip:] */

void FUN_1051493c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110dc74f8,param_3);
  return;
}



/* Entry: 1051493d8; end: 1051493df; -[SCFeatureSettingsService SEEN_QUEUED_OFF_PLATFORM_SHARING_TOOLTIP_IN_SENDTO_PAGE_client_value:] */

undefined * FUN_1051493d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1051493e0; end: 1051493e7; -[SCFeatureSettingsService SEEN_QUEUED_OFF_PLATFORM_SHARING_TOOLTIP_IN_SENDTO_PAGE_server_value:] */

void FUN_1051493e0(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 1051493e8; end: 1051493f7; -[SCFeatureSettingsService seenQueuedOffPlatformSharingTooltip] */

void FUN_1051493e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dc74f8,0);
  return;
}



/* Entry: 1051493f8; end: 10514956b; -[SCSendToHeaderTooltipsServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051493f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11271d478);
  }
  _objc_retain(uVar3);
  puVar2 = PTR_PTR_1126b5300;
  _objc_alloc(PTR_PTR_1126b5300);
  func_0x00010c044580();
  func_0x00010bf9d660(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10514956c; end: 1051495ab;  */

void FUN_10514956c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bea0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1051495ac; end: 105149677; -[SCSendToHeaderTooltipsServicesEntryPoint _sendToTooltipsService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051495ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b5308;
  _objc_alloc(PTR_PTR_1126b5308);
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_11271d474;
    _objc_loadWeakRetained(lVar4);
  }
  lVar2 = lVar4;
  func_0x00010bfa2b80(lVar4);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271d46c;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011d00(puVar1,param_2,lVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105149678; end: 1051496cb; -[SCSendToHeaderTooltipsServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105149678(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271d478,0);
  _objc_destroyWeak(param_1 + _DAT_11271d46c);
  _objc_destroyWeak(param_1 + _DAT_11271d474);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271d470);
  return;
}



/* Entry: 1051496cc; end: 10514976f; -[SCSendToTooltipsServiceImpl initWithFeatureSettingsService:circumstanceEngine:] */

undefined1 *
FUN_1051496cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e66a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105149770; end: 1051497af; -[SCSendToTooltipsServiceImpl shouldDisplayListsFirstCreationTooltip] */

uint FUN_105149770(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1578c0();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 1051497b0; end: 1051497e7; -[SCSendToTooltipsServiceImpl setSeenListsFirstCreationTooltip] */

void FUN_1051497b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051497e8; end: 105149827; -[SCSendToTooltipsServiceImpl shouldDisplaySponsorMoreButtonTooltip] */

uint FUN_1051497e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157e60();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105149828; end: 10514985f; -[SCSendToTooltipsServiceImpl setSeenSponsorMoreButtonTooltip] */

void FUN_105149828(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105149860; end: 10514989f; -[SCSendToTooltipsServiceImpl shouldDisplayExternalLinkSendingModal] */

uint FUN_105149860(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157740();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 1051498a0; end: 1051498d7; -[SCSendToTooltipsServiceImpl setSeenExternalLinkSendingModal] */

void FUN_1051498a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051498d8; end: 105149917; -[SCSendToTooltipsServiceImpl shouldDisplaySnapAnyoneSendingModal] */

uint FUN_1051498d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157da0();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105149918; end: 10514994f; -[SCSendToTooltipsServiceImpl setSeenSnapAnyoneSendingModal] */

void FUN_105149918(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105149950; end: 10514998f; -[SCSendToTooltipsServiceImpl shouldDisplayScheduleMoreButtonTooltip] */

uint FUN_105149950(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157d00();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105149990; end: 1051499c7; -[SCSendToTooltipsServiceImpl setSeenScheduleMoreButtonTooltip] */

void FUN_105149990(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa4a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051499c8; end: 105149a23; -[SCSendToTooltipsServiceImpl shouldDisplayNewGroupButtonOnboardingAnimation] */

bool FUN_1051499c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d8a00();
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x000108f3defc(lVar3);
  _objc_release(lVar1);
  return lVar2 < lVar3;
}



/* Entry: 105149a24; end: 105149a63; -[SCSendToTooltipsServiceImpl setSeenNewGroupButtonOnboardingAnimation] */

void FUN_105149a24(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d8a00();
  func_0x00010c1ccaa0(lVar1,param_2,lVar2 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105149a64; end: 105149aa3; -[SCSendToTooltipsServiceImpl shouldDisplayDragToSelectTooltip] */

uint FUN_105149a64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157720();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105149aa4; end: 105149adb; -[SCSendToTooltipsServiceImpl setSeenDragToSelectTooltip] */

void FUN_105149aa4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105149adc; end: 105149b13; -[SCSendToTooltipsServiceImpl resetDragToSelectTooltip] */

void FUN_105149adc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105149b14; end: 105149b6f; -[SCSendToTooltipsServiceImpl shouldDisplayRecentlyActiveEducationCard] */

bool FUN_105149b14(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1227e0();
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x000108f3df60(lVar3);
  _objc_release(lVar1);
  return lVar2 < lVar3;
}



/* Entry: 105149b70; end: 105149bd7; -[SCSendToTooltipsServiceImpl setSeenRecentlyActiveEducationCard] */

void FUN_105149b70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1227e0();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e85a0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105149bd8; end: 105149c17; -[SCSendToTooltipsServiceImpl shouldDisplayQueuedOffPlatformSharingTooltip] */

uint FUN_105149bd8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157c80();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105149c18; end: 105149c4f; -[SCSendToTooltipsServiceImpl setSeenQueuedOffPlatformSharingTooltip] */

void FUN_105149c18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105149c50; end: 105149c87; -[SCSendToTooltipsServiceImpl resetQueuedOffPlatformSharingTooltip] */

void FUN_105149c50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105149c88; end: 105149cb7; -[SCSendToTooltipsServiceImpl .cxx_destruct] */

void FUN_105149c88(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105149cb8; end: 10514a08f; -[SCSendToListsEditEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105149cb8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  
  lVar1 = param_1 + _DAT_11271d484;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c09a560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b5310;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11271d488;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11271d48c;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_11271d490;
  lVar7 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar9 = lVar24;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + _DAT_11271d494);
  lVar25 = param_1 + _DAT_11271d498;
  _objc_loadWeakRetained();
  lVar10 = param_1 + _DAT_11271d49c;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_11271d4a0;
  lVar13 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11271d4a4;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_11271d4a8;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c026500(puVar3,param_2,lVar2,lVar4,lVar6,lVar8,lVar9,uVar22,lVar25,lVar12,lVar14,
                      lVar16,lVar19);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar25);
  _objc_release(lVar9);
  _objc_release(lVar24);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
  puVar20 = PTR_PTR_1126aeb48;
  _objc_alloc(PTR_PTR_1126aeb48);
  func_0x00010c0404c0();
  lVar5 = lVar2;
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + lVar23;
  _objc_loadWeakRetained(lVar1);
  lVar7 = lVar1;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9a00(lVar5,param_2,lVar7,0);
  _objc_release(lVar7);
  _objc_release(lVar1);
  _objc_release(lVar5);
  puVar21 = PTR_PTR_1126b5318;
  _objc_alloc();
  lVar1 = param_1 + lVar23;
  _objc_loadWeakRetained(lVar1);
  lVar7 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + lVar23;
  _objc_loadWeakRetained(lVar5);
  lVar24 = lVar5;
  func_0x00010c09a080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040740(puVar21,param_2,puVar20,lVar7,lVar24);
  lVar25 = (long)_DAT_11271d4ac;
  uVar22 = *(undefined8 *)(param_1 + lVar25);
  *(undefined **)(param_1 + lVar25) = puVar21;
  _objc_release(uVar22);
  _objc_release(lVar24);
  _objc_release(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar1);
  uVar22 = *(undefined8 *)(param_1 + lVar25);
  param_1 = param_1 + lVar23;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c068100();
  func_0x00010bf19320(uVar22,param_2,lVar1);
  _objc_release(param_1);
  _objc_release(puVar20);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10514a090; end: 10514a147; -[SCSendToListsEditEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10514a090(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271d4a8);
  _objc_destroyWeak(param_1 + _DAT_11271d498);
  _objc_storeStrong(param_1 + _DAT_11271d494,0);
  _objc_destroyWeak(param_1 + _DAT_11271d4a4);
  _objc_destroyWeak(param_1 + _DAT_11271d4b0);
  _objc_destroyWeak(param_1 + _DAT_11271d490);
  _objc_destroyWeak(param_1 + _DAT_11271d488);
  _objc_destroyWeak(param_1 + _DAT_11271d484);
  _objc_destroyWeak(param_1 + _DAT_11271d48c);
  _objc_destroyWeak(param_1 + _DAT_11271d49c);
  _objc_destroyWeak(param_1 + _DAT_11271d4a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271d4ac,0);
  return;
}



/* Entry: 10514a148; end: 10514a2a7; -[SCSendToListsEditMenuBusinessLogic initWithListsDataManager:snapchattersDataFetcher:performerProvider:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10514a148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e66a8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11271d4b4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11271d4b8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11271d4bc),param_6);
    puVar3 = PTR_PTR_1126b5320;
    _objc_alloc();
    func_0x00010c0263a0();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271d4c0);
    *(undefined **)((long)puVar1 + (long)_DAT_11271d4c0) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271d4c4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271d4c4) = uVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10514a2a8; end: 10514a2ef; -[SCSendToListsEditMenuBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10514a2a8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010be10d00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271d4b4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10514a2f0; end: 10514a31f; -[SCSendToListsEditMenuBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10514a2f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271d4c0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10514a320; end: 10514a3b3; -[SCSendToListsEditMenuBusinessLogic handleAction:] */

void FUN_10514a320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10514a3b4;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10514a434;
  puStack_48 = &UNK_1108450c8;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10514a4d0;
  puStack_70 = &UNK_110842e18;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bd1a0(param_3,param_2,&puStack_38,&puStack_60,&puStack_88);
  return;
}



/* Entry: 10514a3b4; end: 10514a4cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10514a3b4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271d4b4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9a00();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_11271d4bc;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c09a580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10514a4d0; end: 10514a507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10514a4d0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11271d4bc;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c09a5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10514a508; end: 10514a50b; -[SCSendToListsEditMenuBusinessLogic didUpdateListsWithListDataModels:deletedListDataModels:] */

void FUN_10514a508(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be10d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchDataModels_112561ce0);
  return;
}



/* Entry: 10514a50c; end: 10514a5ff; -[SCSendToListsEditMenuBusinessLogic _fetchDataModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10514a50c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271d4b4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c246ea0(uVar2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar1);
  return;
}



/* Entry: 10514a600; end: 10514a6bf;  */

void FUN_10514a600(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10514a6c0;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_40 = param_2;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10514a6c0; end: 10514a6f3;  */

void FUN_10514a6c0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be14260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10514a6f4; end: 10514a9cb; -[SCSendToListsEditMenuBusinessLogic _fetchSnapchattersAndFilterFromDataModels:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10514a6f4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_1b0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1b0 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        lVar3 = *(long *)(lStack_1b8 + lVar10 * 8);
        uStack_1f8 = 0;
        uStack_200 = 0;
        uStack_1e8 = 0;
        plStack_1f0 = (long *)0x0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        func_0x00010c244720();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf52a60();
        if (lVar4 != 0) {
          lVar11 = *plStack_1f0;
          do {
            lVar12 = 0;
            do {
              if (*plStack_1f0 != lVar11) {
                _objc_enumerationMutation(lVar3);
              }
              func_0x00010befa120(puVar1);
              lVar12 = lVar12 + 1;
            } while (lVar4 != lVar12);
            lVar4 = lVar3;
            func_0x00010bf52a60();
          } while (lVar4 != 0);
        }
        _objc_release(lVar3);
        lVar10 = lVar10 + 1;
      } while (lVar10 != lVar2);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_initWeak(auStack_208,param_1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11271d4b8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf00560(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11271d4c4);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_208;
  _objc_copyWeak(auStack_210,puVar8);
  _objc_retain(param_3);
  func_0x00010c244e80(uVar5);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_210);
  _objc_destroyWeak(auStack_208);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_210);
  _objc_destroyWeak(auStack_208);
  __Unwind_Resume();
  _objc_retain(puVar8);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010be16360();
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10514a9cc; end: 10514aa1f;  */

void FUN_10514a9cc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be16360();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10514aa20; end: 10514ae67; -[SCSendToListsEditMenuBusinessLogic _filterSnapStarsAndUpdateViewModelWithSnapchatters:dataModels:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10514aa20(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010901f964();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar13 = *(undefined8 *)(lVar12 * 8);
      func_0x00010c2923e0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(uVar13);
      lVar12 = lVar12 + 1;
    } while (lVar3 != lVar12);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      lVar15 = *(long *)(lVar12 * 8);
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar6 = lVar15;
      func_0x00010c244720();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf52a60();
      lVar10 = lRam0000000000000000;
      while (lVar7 != 0) {
        lVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar10) {
            _objc_enumerationMutation(lVar6);
          }
          puVar8 = puVar2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar8 != (undefined *)0x0) {
            puVar8 = puVar2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010901d7c4();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar9 != (undefined *)0x0) {
              puVar9 = puVar8;
              func_0x00010901d7c4(puVar8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar5);
              _objc_release(puVar9);
            }
            _objc_release(puVar8);
          }
          lVar14 = lVar14 + 1;
        } while (lVar7 != lVar14);
        lVar7 = lVar6;
        func_0x00010bf52a60();
      }
      _objc_release(lVar6);
      puVar8 = PTR_PTR_1126b5328;
      _objc_alloc(PTR_PTR_1126b5328);
      lVar7 = lVar15;
      func_0x00010c09a080(lVar15);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar15;
      func_0x00010c0d4f60(lVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfce9c0(lVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c026320(puVar8);
      func_0x00010befa120(puVar4);
      _objc_release(puVar8);
      _objc_release(lVar15);
      _objc_release(lVar10);
      _objc_release(lVar7);
      _objc_release(puVar5);
      lVar12 = lVar12 + 1;
    } while (lVar12 != lVar3);
    lVar3 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  puVar5 = PTR_PTR_1126b5320;
  _objc_alloc();
  func_0x00010c0263a0();
  uVar13 = *(undefined8 *)(param_1 + _DAT_11271d4c0);
  *(undefined **)(param_1 + _DAT_11271d4c0) = puVar5;
  _objc_release(uVar13);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_4 + _DAT_11271d4c4,0);
  _objc_storeStrong(param_4 + _DAT_11271d4c0,0);
  _objc_destroyWeak(param_4 + _DAT_11271d4bc);
  _objc_storeStrong(param_4 + _DAT_11271d4b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_4 + _DAT_11271d4b4,0);
  return;
}



/* Entry: 10514ae68; end: 10514aed3; -[SCSendToListsEditMenuBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10514ae68(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271d4c4,0);
  _objc_storeStrong(param_1 + _DAT_11271d4c0,0);
  _objc_destroyWeak(param_1 + _DAT_11271d4bc);
  _objc_storeStrong(param_1 + _DAT_11271d4b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271d4b4,0);
  return;
}



/* Entry: 10514aed4; end: 10514af9b; -[SCSendToListsEditMenuViewController initWithScreen:valdiRuntimeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10514aed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e66b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11271d4c8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271d4cc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    func_0x00010c1c8b80(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10514af9c; end: 10514b06b; -[SCSendToListsEditMenuViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10514af9c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b5330;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b5320;
  _objc_alloc(PTR_PTR_1126b5320);
  func_0x00010c0263a0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271d4cc);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  lVar6 = (long)_DAT_11271d4d0;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar6));
  return;
}



/* Entry: 10514b06c; end: 10514b137; -[SCSendToListsEditMenuViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10514b06c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e66b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271d4c8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10514b138; end: 10514b17f;  */

void FUN_10514b138(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee5000();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10514b180; end: 10514b18f; -[SCSendToListsEditMenuViewController _updateWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10514b180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2226d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271d4d0),PTR_s_setViewModel__1126663d8);
  return;
}



/* Entry: 10514b190; end: 10514b1e7; -[SCSendToListsEditMenuViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10514b190(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e66b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010bf8e080(*(undefined8 *)(param_1 + _DAT_11271d4d0));
  return;
}



/* Entry: 10514b1e8; end: 10514b297; -[SCSendToListsEditMenuViewController onDismiss] */

void FUN_10514b1e8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x10514b240;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 10514b298; end: 10514b2e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10514b298(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271d4c8);
  puVar1 = PTR_PTR_1126b5338;
  func_0x00010bf82f40(PTR_PTR_1126b5338);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10514b2e8; end: 10514b2ff; -[SCSendToListsEditMenuViewController onTapOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10514b2e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8de90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271d4d0),PTR_s_emitHide__1125c1148,
             PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 10514b300; end: 10514b34b; -[SCSendToListsEditMenuViewController onCreateNewList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10514b300(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271d4c8);
  puVar1 = PTR_PTR_1126b5338;
  func_0x00010bf56e20(PTR_PTR_1126b5338);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10514b34c; end: 10514b397; -[SCSendToListsEditMenuViewController onEditListWithIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10514b34c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271d4c8);
  puVar1 = PTR_PTR_1126b5338;
  func_0x00010c2874a0(PTR_PTR_1126b5338);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10514b398; end: 10514b39f; -[SCSendToListsEditMenuViewController shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_10514b398(void)

{
  return 0;
}



/* Entry: 10514b3a0; end: 10514b3ab; -[SCSendToListsEditMenuViewController pushToValdiMarshaller:] */

undefined8 FUN_10514b3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c76b8;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x000106080050();
  func_0x00010607ffd8();
  return param_3;
}



/* Entry: 10514b3ac; end: 10514b3fb; -[SCSendToListsEditMenuViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10514b3ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271d4d0,0);
  _objc_storeStrong(param_1 + _DAT_11271d4cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271d4c8,0);
  return;
}



/* Entry: 10514b3fc; end: 10514b693; -[SCSendToListsEditRouteActionsImpl initWithListsDataManager:snapchattersDataFetcher:groupsDataFetcher:displayNameProvider:usernameProvider:recipientPickerScopeExposer:recipientPickerScopeServices:myUserId:uiContainer:valdiRuntimeProvider:performerProvider:] */

undefined8 *
FUN_10514b3fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_68 = PTR_PTR_1126e66b8;
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
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[8];
    puVar1[8] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
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



/* Entry: 10514b694; end: 10514b76f; -[SCSendToListsEditRouteActionsImpl presentListsEditMenuWithDelegate:] */

void FUN_10514b694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b5340;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c026540();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b5348;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c150e00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042540(puVar2,param_2,uVar3,*(undefined8 *)(param_1 + 0x50));
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar2;
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10514b770; end: 10514b8d3; -[SCSendToListsEditRouteActionsImpl presentCreateListsRecipientPickerWithFromMenu:delegate:] */

void FUN_10514b770(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  puVar2 = PTR_PTR_1126aead8;
  if (param_3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    puVar2 = PTR_PTR_1126aeaf8;
    _objc_retain(param_4);
    _objc_alloc(puVar2);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10514b8d4;
    puStack_60 = &UNK_110845c10;
    _objc_retain(uVar4);
    puStack_a0 = puVar1;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10514b938;
    puStack_88 = &UNK_110841f50;
    uStack_80 = uVar4;
    uStack_58 = uVar4;
    _objc_retain(uVar4);
    func_0x00010c0311a0(puVar2,param_2,&puStack_78,&puStack_a0);
    _objc_release(uStack_80);
    _objc_release(uStack_58);
    _objc_release(uVar4);
  }
  else {
    _objc_retain(param_4);
    _objc_alloc(puVar2);
    func_0x00010c038f40();
  }
  lVar3 = param_1;
  func_0x00010bdf2360(param_1,param_2,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar3;
  _objc_release(uVar4);
  func_0x00010c10bcc0(*(undefined8 *)(param_1 + 0x70));
  _objc_release(puVar2);
  return;
}



/* Entry: 10514b8d4; end: 10514b937;  */

void FUN_10514b8d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf0c980(uVar1);
  uVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c160fc0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10514b938; end: 10514b943;  */

void FUN_10514b938(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,param_2);
  return;
}



/* Entry: 10514b944; end: 10514b9fb; -[SCSendToListsEditRouteActionsImpl presentUpdateListsRecipientPickerWithListId:delegate:fromEditViewMenu:] */

void FUN_10514b944(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_5 == 0) {
    puVar3 = *(undefined **)(param_1 + 0x38);
    _objc_retain(puVar3);
  }
  else {
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
  }
  lVar1 = param_1;
  func_0x00010bdf2360(param_1,param_2,puVar3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar1;
  _objc_release(uVar2);
  func_0x00010c10bf40(*(undefined8 *)(param_1 + 0x70),param_2,param_3);
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10514b9fc; end: 10514bb33; -[SCSendToListsEditRouteActionsImpl _createRecipientPickerPresenterWithUIContainer:delegate:] */

void FUN_10514b9fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar2 = PTR_PTR_1126b5350;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  func_0x00010c041f80();
  lVar3 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = 0x48;
  if (lVar4 != 0) {
    lVar1 = 0x40;
  }
  uVar5 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar7 = PTR_PTR_1126b5358;
  _objc_alloc(PTR_PTR_1126b5358);
  func_0x00010c021ba0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar6);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10514bb34; end: 10514bbf3; -[SCSendToListsEditRouteActionsImpl .cxx_destruct] */

void FUN_10514bb34(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 10514bbf4; end: 10514bcb7; -[SCSendToListsEditWorkflow initWithRouter:delegate:listId:] */

undefined1 *
FUN_10514bbf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e66c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10514bcb8; end: 10514be5b; -[SCSendToListsEditWorkflow beginWorkflowWithIntent:] */

void FUN_10514bcb8(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  if (param_3 == 2) {
    *(undefined1 *)(param_1 + 0x20) = 0;
    lVar3 = *(long *)(param_1 + 0x18);
    _objc_retain(lVar3);
    if (lVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      _objc_copyWeak(auStack_90,auStack_38);
      func_0x00010c1429e0(uVar2);
      _objc_destroyWeak(auStack_90);
      _objc_release(lVar3);
    }
  }
  else {
    if (param_3 == 1) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      uStack_78 = 0x10514beac;
      puStack_70 = &UNK_11086ba80;
      puVar1 = auStack_68;
      _objc_copyWeak(puVar1,auStack_38);
      func_0x00010c1429e0(uVar2);
    }
    else {
      if (param_3 != 0) goto LAB_10514be1c;
      uVar2 = *(undefined8 *)(param_1 + 8);
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_10514be5c;
      puStack_48 = &UNK_11086ba80;
      puVar1 = auStack_40;
      _objc_copyWeak(puVar1,auStack_38);
      func_0x00010c1429e0(uVar2);
    }
    _objc_destroyWeak(puVar1);
  }
LAB_10514be1c:
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10514be5c; end: 10514bef7;  */

void FUN_10514be5c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10bce0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10514bef8; end: 10514bf57;  */

void FUN_10514bef8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eca0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


