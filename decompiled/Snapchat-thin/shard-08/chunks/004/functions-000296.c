/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10611d820; end: 10611d827; -[SCFeatureSettingsService camera_roll_camera_snap_tooltip_server_value:] */

void FUN_10611d820(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10611d828; end: 10611d837; -[SCFeatureSettingsService seenTakeSnapInCameraRollCamera] */

void FUN_10611d828(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e42318,0);
  return;
}



/* Entry: 10611d838; end: 10611d843; -[SCFeatureSettingsService hasTimerTooltipSeenCount] */

void FUN_10611d838(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e42338);
  return;
}



/* Entry: 10611d844; end: 10611d84f; -[SCFeatureSettingsService timerTooltipSeenCountServerParam] */

undefined ** FUN_10611d844(void)

{
  return &PTR____CFConstantStringClassReference_110e42338;
}



/* Entry: 10611d850; end: 10611d85f; -[SCFeatureSettingsService setTimerTooltipSeenCount:] */

void FUN_10611d850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e42338,param_3);
  return;
}



/* Entry: 10611d860; end: 10611d867; -[SCFeatureSettingsService TIMER_MODE_TOOLTIP_SEEN_COUNT_client_value:] */

void FUN_10611d860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10611d868; end: 10611d86f; -[SCFeatureSettingsService TIMER_MODE_TOOLTIP_SEEN_COUNT_server_value:] */

void FUN_10611d868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10611d870; end: 10611d87f; -[SCFeatureSettingsService timerTooltipSeenCount] */

void FUN_10611d870(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e42338,0);
  return;
}



/* Entry: 10611d880; end: 10611d88b; -[SCFeatureSettingsService isHasSeenSelfieSettingsOnboardingPromptAvailable] */

void FUN_10611d880(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e42358);
  return;
}



/* Entry: 10611d88c; end: 10611d897; -[SCFeatureSettingsService hasSeenSelfieSettingsOnboardingPromptServerParam] */

undefined ** FUN_10611d88c(void)

{
  return &PTR____CFConstantStringClassReference_110e42358;
}



/* Entry: 10611d898; end: 10611d8a7; -[SCFeatureSettingsService setHasSeenSelfieSettingsOnboardingPrompt:] */

void FUN_10611d898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e42358,param_3);
  return;
}



/* Entry: 10611d8a8; end: 10611d8af; -[SCFeatureSettingsService HAS_SEEN_SELFIE_SETTING_ONBOARDING_PROMPT_client_value:] */

undefined * FUN_10611d8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10611d8b0; end: 10611d8b7; -[SCFeatureSettingsService HAS_SEEN_SELFIE_SETTING_ONBOARDING_PROMPT_server_value:] */

void FUN_10611d8b0(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 10611d8b8; end: 10611d8c7; -[SCFeatureSettingsService hasSeenSelfieSettingsOnboardingPrompt] */

void FUN_10611d8b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e42358,0);
  return;
}



/* Entry: 10611d8c8; end: 10611d8d3; -[SCFeatureSettingsService isSelfieSettingsNewBadgeShownDateAvailable] */

void FUN_10611d8c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e42378);
  return;
}



/* Entry: 10611d8d4; end: 10611d8df; -[SCFeatureSettingsService selfieSettingsNewBadgeShownDateServerParam] */

undefined ** FUN_10611d8d4(void)

{
  return &PTR____CFConstantStringClassReference_110e42378;
}



/* Entry: 10611d8e0; end: 10611d8ef; -[SCFeatureSettingsService setSelfieSettingsNewBadgeShownDate:] */

void FUN_10611d8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e42378,param_3);
  return;
}



/* Entry: 10611d8f0; end: 10611d8f7; -[SCFeatureSettingsService SELFIE_SETTINGS_NEW_BADGE_SHOWN_DATE_client_value:] */

void FUN_10611d8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10611d8f8; end: 10611d8ff; -[SCFeatureSettingsService SELFIE_SETTINGS_NEW_BADGE_SHOWN_DATE_server_value:] */

void FUN_10611d8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10611d900; end: 10611d90f; -[SCFeatureSettingsService selfieSettingsNewBadgeShownDate] */

void FUN_10611d900(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e42378,0);
  return;
}



/* Entry: 10611d910; end: 10611d91b; -[SCFeatureSettingsService isAutoEnableRingLightTooltipSeenCountAvailable] */

void FUN_10611d910(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e42398);
  return;
}



/* Entry: 10611d91c; end: 10611d927; -[SCFeatureSettingsService autoEnableRingLightTooltipSeenCountServerParam] */

undefined ** FUN_10611d91c(void)

{
  return &PTR____CFConstantStringClassReference_110e42398;
}



/* Entry: 10611d928; end: 10611d937; -[SCFeatureSettingsService setAutoEnableRingLightTooltipSeenCount:] */

void FUN_10611d928(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e42398,param_3);
  return;
}



/* Entry: 10611d938; end: 10611d93f; -[SCFeatureSettingsService AUTO_ENABLE_RING_LIGHT_TOOLTIP_SEEN_COUNT_client_value:] */

void FUN_10611d938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10611d940; end: 10611d947; -[SCFeatureSettingsService AUTO_ENABLE_RING_LIGHT_TOOLTIP_SEEN_COUNT_server_value:] */

void FUN_10611d940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10611d948; end: 10611d957; -[SCFeatureSettingsService autoEnableRingLightTooltipSeenCount] */

void FUN_10611d948(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e42398,0);
  return;
}



/* Entry: 10611d958; end: 10611d98f; -[SCLegacyCameraTooltipsServiceImpl setDidTakePictureOrVideo] */

void FUN_10611d958(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611d990; end: 10611d9cf; -[SCLegacyCameraTooltipsServiceImpl shouldDisplayVideoHelpInCameraRollCamera] */

uint FUN_10611d990(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c158060();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 10611d9d0; end: 10611da07; -[SCLegacyCameraTooltipsServiceImpl setDidTakePictureOrVideoInCameraRollCamera] */

void FUN_10611d9d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611da08; end: 10611da3f; -[SCLegacyCameraTooltipsServiceImpl resetVideoHelpInCameraRollCamera] */

void FUN_10611da08(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611da40; end: 10611da77; -[SCLegacyCameraTooltipsServiceImpl setHasSeenNewFriendRequestTooltip] */

void FUN_10611da40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611da78; end: 10611daf3; -[SCLegacyCameraTooltipsServiceImpl shouldDisplayLensesActivationTooltip] */

uint FUN_10611da78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157860();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf1f320();
  _objc_release(uVar3);
  return (((uint)uVar1 | (uint)uVar2) ^ 0xffffffff) & 1;
}



/* Entry: 10611daf4; end: 10611db5b; -[SCLegacyCameraTooltipsServiceImpl setDisplayedLensesActivationTooltip] */

void FUN_10611daf4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611db5c; end: 10611dc1f; -[SCLegacyCameraTooltipsServiceImpl shouldDisplayCreativeKitOnboardingTooltip] */

uint FUN_10611db5c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c23c780();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf6dac0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar5 == 0) {
    uVar8 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c1575c0();
    uVar8 = (uint)uVar7 ^ 1;
    _objc_release(uVar6);
  }
  return uVar8;
}



/* Entry: 10611dc20; end: 10611dc57; -[SCLegacyCameraTooltipsServiceImpl setDisplayedCreativeKitOnboardingTooltip] */

void FUN_10611dc20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611dc58; end: 10611dd3b; -[SCLegacyCameraTooltipsServiceImpl shouldDisplayVideoTimerModeTooltip] */

bool FUN_10611dc58(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010bf1f440();
  _objc_release(lVar1);
  if ((int)lVar4 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c158140();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 8);
      func_0x00010c269d40(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      func_0x00010c270880();
      puVar5 = PTR_PTR_1126c8288;
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf2b4e0(puVar5,param_2,param_1);
      _objc_release(param_1);
      _objc_release(lVar4);
      return lVar1 < (long)puVar5;
    }
  }
  return false;
}



/* Entry: 10611dd3c; end: 10611dd9b; -[SCLegacyCameraTooltipsServiceImpl incrementVideoTimerModeTooltipShownCount] */

void FUN_10611dd3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c270880();
  func_0x00010c215d80(uVar1,param_2,lVar3 + 1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611dd9c; end: 10611ddf7; -[SCLegacyCameraTooltipsServiceImpl hasSeenTimelinePromotionOnboardingDialog] */

ulong FUN_10611dd9c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  func_0x0001091a262c();
  if (lVar1 == 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfdbca0();
    _objc_release(uVar3);
  }
  else {
    uVar2 = (ulong)(lVar1 == 2);
  }
  return uVar2;
}



/* Entry: 10611ddf8; end: 10611de53; -[SCLegacyCameraTooltipsServiceImpl hasSeenTimelinePromotionTimelineEnabledTooltip] */

ulong FUN_10611ddf8(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  func_0x0001091a2638();
  if (lVar1 == 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfdbcc0();
    _objc_release(uVar3);
  }
  else {
    uVar2 = (ulong)(lVar1 == 2);
  }
  return uVar2;
}



/* Entry: 10611de54; end: 10611de93; -[SCLegacyCameraTooltipsServiceImpl getDirectorModeNewBadgeShownDate] */

undefined8 FUN_10611de54(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf7f460();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10611de94; end: 10611decf; -[SCLegacyCameraTooltipsServiceImpl setDirectorModeNewBadgeShownDate:] */

void FUN_10611de94(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18e400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611ded0; end: 10611df0f; -[SCLegacyCameraTooltipsServiceImpl hasSeenDirectorModeOnboardingPrompt] */

undefined8 FUN_10611ded0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdb900();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10611df10; end: 10611df4b; -[SCLegacyCameraTooltipsServiceImpl setDirectorModeOnboardingPromptSeen:] */

void FUN_10611df10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18e420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611df4c; end: 10611dfd7; -[SCLegacyCameraTooltipsServiceImpl consumeSnapBackQuickTapToDismissTriggerCount] */

ulong FUN_10611df4c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067f80();
  _objc_release(uVar1);
  if ((long)uVar2 < 0x14) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1add40();
    _objc_release(uVar3);
  }
  return uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU);
}



/* Entry: 10611dfd8; end: 10611e027; -[SCLegacyCameraTooltipsServiceImpl incrementLensesActivationTooltipShowCount] */

void FUN_10611dfd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c098280(param_1);
  func_0x00010c21bfc0(uVar1,param_2,param_1 + 1,&PTR____CFConstantStringClassReference_110e423d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611e028; end: 10611e077; -[SCLegacyCameraTooltipsServiceImpl decrementLensesActivationTooltipShowCount] */

void FUN_10611e028(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c098280(param_1);
  func_0x00010c21bfc0(uVar1,param_2,param_1 + -1,&PTR____CFConstantStringClassReference_110e423d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611e078; end: 10611e0c7; -[SCLegacyCameraTooltipsServiceImpl incrementSnapCountBeforeShowLensesActivationTooltip] */

void FUN_10611e078(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23fa20(param_1);
  func_0x00010c21bfc0(uVar1,param_2,param_1 + 1,&PTR____CFConstantStringClassReference_110e423f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611e0c8; end: 10611e10f; -[SCLegacyCameraTooltipsServiceImpl snapCountBeforeShowLensesActivationTooltip] */

undefined8 FUN_10611e0c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c282780();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10611e110; end: 10611e157; -[SCLegacyCameraTooltipsServiceImpl lensesActivationTooltipShownCount] */

undefined8 FUN_10611e110(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c282780();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10611e158; end: 10611e197; -[SCLegacyCameraTooltipsServiceImpl getMultiCamModeNewBadgeShownDate] */

undefined8 FUN_10611e158(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d1ce0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10611e198; end: 10611e1d3; -[SCLegacyCameraTooltipsServiceImpl setMultiCamModeNewBadgeShownDate:] */

void FUN_10611e198(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611e1d4; end: 10611e213; -[SCLegacyCameraTooltipsServiceImpl hasSeenMultiCamModeOnboardingPrompt] */

undefined8 FUN_10611e1d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdb9e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10611e214; end: 10611e24f; -[SCLegacyCameraTooltipsServiceImpl setMultiCamModeOnboardingPromptSeen:] */

void FUN_10611e214(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611e250; end: 10611e28b; -[SCLegacyCameraTooltipsServiceImpl setToneModeNewBadgeShownDate:] */

void FUN_10611e250(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611e28c; end: 10611e2cb; -[SCLegacyCameraTooltipsServiceImpl hasSeenToneModeOnboardingPrompt] */

undefined8 FUN_10611e28c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdbce0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10611e2cc; end: 10611e307; -[SCLegacyCameraTooltipsServiceImpl setHasSeenToneModeOnboardingPrompt:] */

void FUN_10611e2cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a6c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611e308; end: 10611e343; -[SCLegacyCameraTooltipsServiceImpl setToneModeNewBadgeShownCount:] */

void FUN_10611e308(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611e344; end: 10611e383; -[SCLegacyCameraTooltipsServiceImpl toneModeNewBadgeShownCount] */

undefined8 FUN_10611e344(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c273540();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10611e384; end: 10611e3bf; -[SCLegacyCameraTooltipsServiceImpl setVideoStabilizerNewBadgeShownCount:] */

void FUN_10611e384(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611e3c0; end: 10611e3ff; -[SCLegacyCameraTooltipsServiceImpl videoStabilizerNewBadgeShownCount] */

undefined8 FUN_10611e3c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29b4a0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10611e400; end: 10611e43f; -[SCLegacyCameraTooltipsServiceImpl dualCamInLensCarouselLabelSeenCount] */

undefined8 FUN_10611e400(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8ada0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10611e440; end: 10611e47b; -[SCLegacyCameraTooltipsServiceImpl setDualCamInLensCarouselLabelSeenCount:] */

void FUN_10611e440(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1921c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611e47c; end: 10611e4bb; -[SCLegacyCameraTooltipsServiceImpl dualCamInLensCarouselTooltipSeenCount] */

undefined8 FUN_10611e47c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8ade0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10611e4bc; end: 10611e4f7; -[SCLegacyCameraTooltipsServiceImpl setDualCamInLensCarouselTooltipSeenCount:] */

void FUN_10611e4bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1921e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611e4f8; end: 10611e537; -[SCLegacyCameraTooltipsServiceImpl autoEnableRingFlashTooltipSeenCount] */

undefined8 FUN_10611e4f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf11780();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10611e538; end: 10611e573; -[SCLegacyCameraTooltipsServiceImpl setAutoEnableRingFlashTooltipSeenCount:] */

void FUN_10611e538(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16cda0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611e574; end: 10611e5b3; -[SCLegacyCameraTooltipsServiceImpl isAutoEnableRingLightTooltipSeenCountAvailable] */

undefined8 FUN_10611e574(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06cc20();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10611e5b4; end: 10611e5f3; -[SCLegacyCameraTooltipsServiceImpl hasSeenSelfieSettingsOnboardingPrompt] */

undefined8 FUN_10611e5b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdbb80();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10611e5f4; end: 10611e62f; -[SCLegacyCameraTooltipsServiceImpl setHasSeenSelfieSettingsOnboardingPrompt:] */

void FUN_10611e5f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a6c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611e630; end: 10611e66f; -[SCLegacyCameraTooltipsServiceImpl selfieSettingsNewBadgeShownDate] */

undefined8 FUN_10611e630(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15b0e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10611e670; end: 10611e6ab; -[SCLegacyCameraTooltipsServiceImpl setSelfieSettingsNewBadgeShownDate:] */

void FUN_10611e670(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fbda0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611e6ac; end: 10611e6f3; -[SCLegacyCameraTooltipsServiceImpl hasSeenFavoritedSoundsEducationTooltip] */

undefined8 FUN_10611e6ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10611e6f4; end: 10611e737; -[SCLegacyCameraTooltipsServiceImpl setHasSeenFavoritedSoundsEducationTooltip:] */

void FUN_10611e6f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611e738; end: 10611e783; -[SCLegacyCameraTooltipsServiceImpl .cxx_destruct] */

void FUN_10611e738(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10611e784; end: 10611e8cb; -[SCLensExternalMediaStreamServiceImpl initWithExternalStreamProvider:ngsmePlaybackServices:ngsmeSnapDocResolverServices:videoImportServices:memoriesMediaRetriever:cameraConfig:] */

undefined1 *
FUN_10611e784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126efc90;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_8);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10611e8cc; end: 10611eb43; -[SCLensExternalMediaStreamServiceImpl configureExternalTextureStreamWithMediaSource:] */

void FUN_10611e8cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar2);
  _objc_initWeak(auStack_80,param_1);
  func_0x00010c0c67c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10611eb44;
  puStack_90 = &UNK_11090f888;
  _objc_copyWeak(auStack_88,auStack_80);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x10611eb9c;
  puStack_b8 = &UNK_11090f888;
  _objc_copyWeak(auStack_b0,auStack_80);
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_10611ebf4;
  puStack_e0 = &UNK_1108ab900;
  _objc_copyWeak(auStack_d8,auStack_80);
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x10611ec3c;
  puStack_108 = &UNK_1108ab900;
  _objc_copyWeak(auStack_100,auStack_80);
  puStack_148 = puVar1;
  uStack_140 = 0xc2000000;
  uStack_138 = 0x10611ec84;
  puStack_130 = &UNK_1108ab900;
  _objc_copyWeak(auStack_128,auStack_80);
  puStack_170 = puVar1;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_10611eccc;
  puStack_158 = &UNK_110848ab8;
  _objc_copyWeak(auStack_150,auStack_80);
  _objc_copyWeak(auStack_178,auStack_80);
  func_0x00010c0bdd60(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_3);
  return;
}



/* Entry: 10611eb44; end: 10611ebf3;  */

void FUN_10611eb44(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4ea0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10611ebf4; end: 10611eccb;  */

void FUN_10611ebf4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4cc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10611eccc; end: 10611ed7b;  */

void FUN_10611eccc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4ce0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10611ed7c; end: 10611edc3; -[SCLensExternalMediaStreamServiceImpl resetMediaSource] */

void FUN_10611ed7c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c12c3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_removeExternalTextureStreamWithR_112628b08,
             *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x50));
  return;
}



/* Entry: 10611edc4; end: 10611eed7; -[SCLensExternalMediaStreamServiceImpl addExternalTextureStreamWithResourceId:effectId:] */

void FUN_10611edc4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(long *)(param_1 + 0x50) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    *(long *)(param_1 + 0x58) = param_3;
    _objc_release(uVar2);
    if (*(long *)(param_1 + 0x40) == 0) {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_10611eeb8;
      func_0x00010c250c00();
      func_0x00010c1ecd00(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c1ecd00(*(long *)(param_1 + 0x40),param_2,param_3);
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c199860();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
LAB_10611eeb8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10611eed8; end: 10611efab; -[SCLensExternalMediaStreamServiceImpl removeExternalTextureStreamWithResourceId:effectId:] */

void FUN_10611eed8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010c256b60();
  }
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    lVar1 = *(long *)(param_1 + 0x58);
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      lVar1 = *(long *)(param_1 + 0x50);
      func_0x00010c08fa60();
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x58);
        *(undefined8 *)(param_1 + 0x58) = 0;
        _objc_release(uVar2);
        uVar2 = *(undefined8 *)(param_1 + 0x50);
        *(undefined8 *)(param_1 + 0x50) = 0;
        _objc_release(uVar2);
        param_1 = param_1 + 0x20;
        _objc_loadWeakRetained(param_1);
        lVar1 = param_1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3b400();
        _objc_release(lVar1);
        _objc_release(param_1);
      }
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10611efac; end: 10611efb7; -[SCLensExternalMediaStreamServiceImpl _completePromise:withObject:] */

void FUN_10611efac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_completeWithValue__1125ae900,param_4);
  return;
}



/* Entry: 10611efb8; end: 10611efc3; -[SCLensExternalMediaStreamServiceImpl _completePromise:withError:] */

void FUN_10611efb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_completeWithError__1125ae8d0,param_4);
  return;
}



/* Entry: 10611efc4; end: 10611f1af; -[SCLensExternalMediaStreamServiceImpl _updateWithURL:isVideo:] */

void FUN_10611efc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 auStack_a0 [6];
  undefined8 auStack_70 [6];
  
  puVar1 = PTR_PTR_1126ae560;
  puVar3 = auStack_a0;
  _objc_retain(param_3);
  _objc_opt_new();
  puVar2 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010bee48c0(param_1,param_2,puVar2);
    pcVar4 = FUN_10611f1b0;
  }
  else {
    func_0x00010bee4fa0();
    pcVar4 = (code *)0x10611f0b4;
    puVar3 = auStack_70;
  }
  _objc_release(puVar2);
  *puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puVar3[1] = 0xc2000000;
  puVar3[2] = pcVar4;
  puVar3[3] = &UNK_110853c90;
  puVar3[4] = param_1;
  puVar3[5] = puVar1;
  _objc_retain(puVar1);
  func_0x00010c297260(param_3,param_2,puVar3,0);
  _objc_release(param_3);
  _objc_release(puVar3[5]);
  _objc_release(puVar1);
  return;
}



/* Entry: 10611f1b0; end: 10611f23b;  */

void FUN_10611f1b0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__completePromise_withError__1125565c8,
               *(undefined8 *)(param_1 + 0x28),param_3);
    return;
  }
  func_0x00010c0f5800(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d020(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bde30e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10611f23c; end: 10611f327; -[SCLensExternalMediaStreamServiceImpl _updateWithAsset:isVideo:] */

void FUN_10611f23c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 uStack_48;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  puVar2 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010bee48c0(param_1,param_2,puVar2);
  }
  else {
    func_0x00010bee4f40();
  }
  _objc_release(puVar2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10611f328;
  puStack_60 = &UNK_11090f8b8;
  uStack_48 = (undefined1)param_4;
  uStack_58 = param_1;
  puStack_50 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c297260(param_3,param_2,&puStack_78,0);
  _objc_release(param_3);
  _objc_release(puStack_50);
  _objc_release(puVar1);
  return;
}



/* Entry: 10611f328; end: 10611f617;  */

void FUN_10611f328(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126c8290;
  puVar3 = PTR_PTR_1126bf8a0;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    _objc_retain(param_2);
    _objc_alloc_init(puVar1);
    lVar4 = *(long *)(param_1 + 0x20) + 0x18;
    _objc_loadWeakRetained(lVar4);
    lVar8 = lVar4;
    func_0x00010c29a4c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf165a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar8);
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + 0x20) + 0x18;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c29a4c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010bdc0da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = lVar8;
    func_0x00010bfbc3e0(lVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c297260(lVar4);
    _objc_release(lVar4);
    _objc_release(uVar7);
    puVar3 = puVar1;
  }
  else {
    _objc_retain(param_2);
    _objc_alloc(puVar3);
    func_0x00010c03ffa0(0x409e000000000000);
    lVar4 = *(long *)(param_1 + 0x20) + 0x18;
    _objc_loadWeakRetained(lVar4);
    lVar8 = lVar4;
    func_0x00010bfe7f20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bdc1860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(lVar5);
    _objc_release(lVar8);
    _objc_release(lVar4);
    lVar4 = lVar6;
    func_0x00010bfbc3e0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(param_1 + 0x28);
    _objc_retain(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c297260(lVar4);
    _objc_release(lVar4);
  }
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(puVar3);
  return;
}



/* Entry: 10611f618; end: 10611f713;  */

void FUN_10611f618(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__completePromise_withError__1125565c8,
               *(undefined8 *)(param_1 + 0x28),param_3);
    return;
  }
  FUN_106121064(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bf678;
  _objc_alloc(PTR_PTR_1126bf678);
  func_0x00010af1f598();
  func_0x00010bde30e0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10611f714; end: 10611f7e3; -[SCLensExternalMediaStreamServiceImpl _updateWithSnapDoc:] */

void FUN_10611f714(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10611f7e4;
  puStack_48 = &UNK_1108a7748;
  puStack_40 = puVar1;
  uStack_38 = param_1;
  _objc_retain();
  func_0x00010c297260(param_3,param_2,&puStack_60,0);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee4fa0(param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puStack_40);
  _objc_release(puVar1);
  return;
}



/* Entry: 10611f7e4; end: 10611f907;  */

void FUN_10611f7e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar1 = *(long *)(param_1 + 0x28) + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0da300();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0f40c0();
    _objc_retainAutoreleasedReturnValue();
    auVar5 = *(undefined1 (*) [16])(param_1 + 0x20);
    _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x20));
    auVar5 = NEON_ext(auVar5,auVar5,8,1);
    func_0x00010c297260(lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(auVar5._8_8_);
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10611f908; end: 10611f927;  */

void FUN_10611f908(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__completePromise_withError__1125565c8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde30f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__completePromise_withObject__1125565d8,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 10611f928; end: 10611fa7f; -[SCLensExternalMediaStreamServiceImpl _updateWithVideo:] */

void FUN_10611f928(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10611f9f8;
  puStack_48 = &UNK_1108b99b8;
  uStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010c297260(param_3,param_2,&puStack_60,0);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee4fa0(param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 10611fa80; end: 10611fc1f; -[SCLensExternalMediaStreamServiceImpl _updateWithSnapId:isVideo:] */

void FUN_10611fa80(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar2 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010bee48c0(param_1);
  }
  else {
    func_0x00010bee4f40();
  }
  _objc_release(puVar2);
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c13ebc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = (undefined1)param_4;
  _objc_retain(puVar1);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10611fc20; end: 10611fd1b;  */

void FUN_10611fc20(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10611fd1c; end: 10611fdff;  */

void FUN_10611fd1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  uVar2 = param_2;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    _objc_retain(param_2);
    _objc_alloc(puVar1);
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c0082a0(puVar1);
    puVar3 = puVar1;
  }
  else {
    _objc_retain(param_2);
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c14d040(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  func_0x00010bde30e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10611fe00; end: 10611fe0f;  */

void FUN_10611fe00(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__completePromise_withError__1125565c8,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 10611fe10; end: 10611ffeb; -[SCLensExternalMediaStreamServiceImpl _updateWithData:isVideo:] */

void FUN_10611fe10(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 uStack_48;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  puVar2 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010bee48c0(param_1,param_2,puVar2);
  }
  else {
    func_0x00010bee4f40();
  }
  _objc_release(puVar2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x10611fefc;
  puStack_60 = &UNK_11090f948;
  uStack_48 = (undefined1)param_4;
  uStack_58 = param_1;
  puStack_50 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c297260(param_3,param_2,&puStack_78,0);
  _objc_release(param_3);
  _objc_release(puStack_50);
  _objc_release(puVar1);
  return;
}



/* Entry: 10611ffec; end: 106120057; -[SCLensExternalMediaStreamServiceImpl _updateWithImage:] */

void FUN_10611ffec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c80e8;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c01c200();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106120058; end: 10612011b; -[SCLensExternalMediaStreamServiceImpl _updateWithVideoSnap:] */

void FUN_106120058(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c80e0;
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0da2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02d3a0(puVar1,param_2,param_3,lVar3,0,1);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


