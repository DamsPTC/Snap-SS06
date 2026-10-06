/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1058e32cc; end: 1058e32d7; -[SCFeatureSettingsService hasSeenMusicPickerFavoritesTooltip] */

void FUN_1058e32cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e0aaf8);
  return;
}



/* Entry: 1058e32d8; end: 1058e32e3; -[SCFeatureSettingsService seenMusicPickerFavoritesTooltipServerParam] */

undefined ** FUN_1058e32d8(void)

{
  return &PTR____CFConstantStringClassReference_110e0aaf8;
}



/* Entry: 1058e32e4; end: 1058e32f3; -[SCFeatureSettingsService setSeenMusicPickerFavoritesTooltip:] */

void FUN_1058e32e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e0aaf8,param_3);
  return;
}



/* Entry: 1058e32f4; end: 1058e32fb; -[SCFeatureSettingsService music_picker_favorites_tooltip_client_value:] */

undefined * FUN_1058e32f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1058e32fc; end: 1058e3303; -[SCFeatureSettingsService music_picker_favorites_tooltip_server_value:] */

void FUN_1058e32fc(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 1058e3304; end: 1058e3313; -[SCFeatureSettingsService seenMusicPickerFavoritesTooltip] */

void FUN_1058e3304(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e0aaf8,0);
  return;
}



/* Entry: 1058e3314; end: 1058e331f; -[SCFeatureSettingsService hasSeenMusicContextCardFavoritesTooltip] */

void FUN_1058e3314(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e0ab18);
  return;
}



/* Entry: 1058e3320; end: 1058e332b; -[SCFeatureSettingsService seenMusicContextCardFavoritesTooltipServerParam] */

undefined ** FUN_1058e3320(void)

{
  return &PTR____CFConstantStringClassReference_110e0ab18;
}



/* Entry: 1058e332c; end: 1058e333b; -[SCFeatureSettingsService setSeenMusicContextCardFavoritesTooltip:] */

void FUN_1058e332c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e0ab18,param_3);
  return;
}



/* Entry: 1058e333c; end: 1058e3343; -[SCFeatureSettingsService music_context_card_favorites_tooltip_client_value:] */

undefined * FUN_1058e333c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1058e3344; end: 1058e334b; -[SCFeatureSettingsService music_context_card_favorites_tooltip_server_value:] */

void FUN_1058e3344(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 1058e334c; end: 1058e335b; -[SCFeatureSettingsService seenMusicContextCardFavoritesTooltip] */

void FUN_1058e334c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e0ab18,0);
  return;
}



/* Entry: 1058e335c; end: 1058e3367; -[SCFeatureSettingsService hasSeenSoundTopicsFavoritesTooltip] */

void FUN_1058e335c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e0ab38);
  return;
}



/* Entry: 1058e3368; end: 1058e3373; -[SCFeatureSettingsService seenSoundTopicsFavoritesTooltipServerParam] */

undefined ** FUN_1058e3368(void)

{
  return &PTR____CFConstantStringClassReference_110e0ab38;
}



/* Entry: 1058e3374; end: 1058e3383; -[SCFeatureSettingsService setSeenSoundTopicsFavoritesTooltip:] */

void FUN_1058e3374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e0ab38,param_3);
  return;
}



/* Entry: 1058e3384; end: 1058e338b; -[SCFeatureSettingsService sound_topics_favorites_tooltip_client_value:] */

undefined * FUN_1058e3384(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1058e338c; end: 1058e3393; -[SCFeatureSettingsService sound_topics_favorites_tooltip_server_value:] */

void FUN_1058e338c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 1058e3394; end: 1058e33a3; -[SCFeatureSettingsService seenSoundTopicsFavoritesTooltip] */

void FUN_1058e3394(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e0ab38,0);
  return;
}



/* Entry: 1058e33a4; end: 1058e33af; -[SCFeatureSettingsService hasSeenCreateSoundOnFeaturedPage] */

void FUN_1058e33a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e0ab58);
  return;
}



/* Entry: 1058e33b0; end: 1058e33bb; -[SCFeatureSettingsService seenCreateSoundOnFeaturedPageServerParam] */

undefined ** FUN_1058e33b0(void)

{
  return &PTR____CFConstantStringClassReference_110e0ab58;
}



/* Entry: 1058e33bc; end: 1058e33cb; -[SCFeatureSettingsService setSeenCreateSoundOnFeaturedPage:] */

void FUN_1058e33bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e0ab58,param_3);
  return;
}



/* Entry: 1058e33cc; end: 1058e33d3; -[SCFeatureSettingsService music_create_sound_featured_page_client_value:] */

undefined * FUN_1058e33cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1058e33d4; end: 1058e33db; -[SCFeatureSettingsService music_create_sound_featured_page_server_value:] */

void FUN_1058e33d4(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 1058e33dc; end: 1058e33eb; -[SCFeatureSettingsService seenCreateSoundOnFeaturedPage] */

void FUN_1058e33dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e0ab58,0);
  return;
}



/* Entry: 1058e33ec; end: 1058e33f7; -[SCFeatureSettingsService getMusicSyncMemoriesPreviewSoundTooltipTimesSeen] */

void FUN_1058e33ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e0ab78);
  return;
}



/* Entry: 1058e33f8; end: 1058e3403; -[SCFeatureSettingsService musicSyncMemoriesPreviewSoundTooltipTimesSeenServerParam] */

undefined ** FUN_1058e33f8(void)

{
  return &PTR____CFConstantStringClassReference_110e0ab78;
}



/* Entry: 1058e3404; end: 1058e3413; -[SCFeatureSettingsService setMusicSyncMemoriesPreviewSoundTooltipTimesSeen:] */

void FUN_1058e3404(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e0ab78,param_3);
  return;
}



/* Entry: 1058e3414; end: 1058e341b; -[SCFeatureSettingsService music_sync_memories_preview_sound_tooltip_times_seen_client_value:] */

void FUN_1058e3414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 1058e341c; end: 1058e3423; -[SCFeatureSettingsService music_sync_memories_preview_sound_tooltip_times_seen_server_value:] */

void FUN_1058e341c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1058e3424; end: 1058e3433; -[SCFeatureSettingsService musicSyncMemoriesPreviewSoundTooltipTimesSeen] */

void FUN_1058e3424(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e0ab78,0);
  return;
}



/* Entry: 1058e3434; end: 1058e343f; -[SCFeatureSettingsService getMusicSyncMemoriesOnboardingBannerTimesSeen] */

void FUN_1058e3434(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e0ab98);
  return;
}



/* Entry: 1058e3440; end: 1058e344b; -[SCFeatureSettingsService musicSyncMemoriesOnboardingBannerTimesSeenServerParam] */

undefined ** FUN_1058e3440(void)

{
  return &PTR____CFConstantStringClassReference_110e0ab98;
}



/* Entry: 1058e344c; end: 1058e345b; -[SCFeatureSettingsService setMusicSyncMemoriesOnboardingBannerTimesSeen:] */

void FUN_1058e344c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e0ab98,param_3);
  return;
}



/* Entry: 1058e345c; end: 1058e3463; -[SCFeatureSettingsService music_sync_memories_onboarding_banner_times_seen_client_value:] */

void FUN_1058e345c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 1058e3464; end: 1058e346b; -[SCFeatureSettingsService music_sync_memories_onboarding_banner_times_seen_server_value:] */

void FUN_1058e3464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1058e346c; end: 1058e347b; -[SCFeatureSettingsService musicSyncMemoriesOnboardingBannerTimesSeen] */

void FUN_1058e346c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e0ab98,0);
  return;
}



/* Entry: 1058e347c; end: 1058e3487; -[SCFeatureSettingsService getMusicSyncMemoriesFabTooltipTimesSeen] */

void FUN_1058e347c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e0abb8);
  return;
}



/* Entry: 1058e3488; end: 1058e3493; -[SCFeatureSettingsService musicSyncMemoriesFabTooltipTimesSeenServerParam] */

undefined ** FUN_1058e3488(void)

{
  return &PTR____CFConstantStringClassReference_110e0abb8;
}



/* Entry: 1058e3494; end: 1058e34a3; -[SCFeatureSettingsService setMusicSyncMemoriesFabTooltipTimesSeen:] */

void FUN_1058e3494(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e0abb8,param_3);
  return;
}



/* Entry: 1058e34a4; end: 1058e34ab; -[SCFeatureSettingsService music_sync_memories_fab_tooltip_times_seen_client_value:] */

void FUN_1058e34a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 1058e34ac; end: 1058e34b3; -[SCFeatureSettingsService music_sync_memories_fab_tooltip_times_seen_server_value:] */

void FUN_1058e34ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1058e34b4; end: 1058e34c3; -[SCFeatureSettingsService musicSyncMemoriesFabTooltipTimesSeen] */

void FUN_1058e34b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e0abb8,0);
  return;
}



/* Entry: 1058e34c4; end: 1058e355b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058e34c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  puVar1 = (undefined *)0x0;
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126bfd40;
    _objc_alloc(PTR_PTR_1126bfd40);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = param_1 + _DAT_11272be38;
      _objc_loadWeakRetained(lVar2);
    }
    func_0x00010bffed20(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058e355c; end: 1058e373f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058e355c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR_PTR_1126bfd48;
    _objc_alloc(PTR_PTR_1126bfd48);
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = lVar1 + _DAT_11272be28;
      _objc_loadWeakRetained();
    }
    lVar3 = lVar2;
    func_0x00010bf4c240();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar5 = 0;
    if (lVar4 != 0) {
      lVar5 = lVar4 + _DAT_11272be2c;
      _objc_loadWeakRetained();
    }
    lVar6 = lVar5;
    func_0x00010c0c64e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    lVar7 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar7 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = lVar7 + _DAT_11272be3c;
      _objc_loadWeakRetained(lVar13);
    }
    lVar8 = lVar13;
    func_0x00010c2781a0(lVar13);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = param_1 + _DAT_11272be20;
      _objc_loadWeakRetained(lVar10);
    }
    lVar9 = lVar10;
    func_0x00010c0d3740(lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c003180(puVar12,param_2,lVar3,lVar6,uVar11,lVar8,lVar9);
    _objc_release(lVar9);
    _objc_release(lVar10);
    _objc_release(param_1);
    _objc_release(lVar8);
    _objc_release(lVar13);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1058e3740; end: 1058e378b;  */

void FUN_1058e3740(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  _objc_release();
  if (param_1 != 0) {
    _objc_alloc(PTR_PTR_1126bfd50);
    func_0x00010c029940();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058e378c; end: 1058e382f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058e378c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126bfd58;
    _objc_alloc(PTR_PTR_1126bfd58);
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar1 + _DAT_11272be34;
      _objc_loadWeakRetained(lVar3);
    }
    func_0x00010c030200(puVar2,param_2,lVar3,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058e3830; end: 1058e38c7; -[SCMusicServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058e3830(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272be3c);
  _objc_destroyWeak(param_1 + _DAT_11272be20);
  _objc_destroyWeak(param_1 + _DAT_11272be38);
  _objc_destroyWeak(param_1 + _DAT_11272be34);
  _objc_destroyWeak(param_1 + _DAT_11272be30);
  _objc_destroyWeak(param_1 + _DAT_11272be2c);
  _objc_destroyWeak(param_1 + _DAT_11272be1c);
  _objc_destroyWeak(param_1 + _DAT_11272be18);
  _objc_destroyWeak(param_1 + _DAT_11272be28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272be24);
  return;
}



/* Entry: 1058e38c8; end: 1058e393b; -[SCMusicExperiments initWithCircumstanceEngineServices:] */

undefined1 * FUN_1058e38c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eaca0;
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



/* Entry: 1058e393c; end: 1058e398f; -[SCMusicExperiments showLyricsDuringScrubbing] */

undefined8 FUN_1058e393c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf398e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f440();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1058e3990; end: 1058e39e3; -[SCMusicExperiments showLyricsDuringCapturing] */

undefined8 FUN_1058e3990(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf398e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f440();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1058e39e4; end: 1058e3a33; -[SCMusicExperiments useTrackAssetLoader] */

undefined8 FUN_1058e39e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf398e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f440();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1058e3a34; end: 1058e3a87; -[SCMusicExperiments stopCameraWhenPresentingPicker] */

undefined8 FUN_1058e3a34(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf398e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f440();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1058e3a88; end: 1058e3adb; -[SCMusicExperiments usePickerV2ForCameraPicker] */

undefined8 FUN_1058e3a88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf398e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f440();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1058e3adc; end: 1058e3b37; -[SCMusicExperiments mainCameraCTRecommendationCacheTTL] */

double FUN_1058e3adc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf398e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067f00();
  _objc_release(uVar1);
  return (double)((int)uVar2 * 0x3c);
}



/* Entry: 1058e3b38; end: 1058e3b93; -[SCMusicExperiments previewCTRecommendationCacheTTL] */

double FUN_1058e3b38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf398e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067f00();
  _objc_release(uVar1);
  return (double)((int)uVar2 * 0x3c);
}



/* Entry: 1058e3b94; end: 1058e3be7; -[SCMusicExperiments useFullScreenPresentationStyleForCameraPicker] */

undefined8 FUN_1058e3b94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf398e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f440();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1058e3be8; end: 1058e3c7b; -[SCMusicExperiments useSoundSpotlightPicker] */

undefined8 FUN_1058e3be8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001009703d0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf398e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f440();
    _objc_release(uVar1);
  }
  return uVar2;
}



/* Entry: 1058e3c7c; end: 1058e3ccb; -[SCMusicExperiments favoriteToSaveEnabled] */

undefined8 FUN_1058e3c7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf398e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f440();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1058e3ccc; end: 1058e3cd7; -[SCMusicExperiments .cxx_destruct] */

void FUN_1058e3ccc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058e3cd8; end: 1058e3dfb; -[SCObjcMusicMediaLoader initWithContentDelivery:memoriesMediaRetriever:retryHelper:trackLoadLogger:musicSelectionResolver:] */

undefined1 *
FUN_1058e3cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126eaca8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058e3dfc; end: 1058e3e37; -[SCObjcMusicMediaLoader loadAudioDataForAudioDataURL:encryptionKey:encryptionIv:completionQueue:completion:source:] */

void FUN_1058e3dfc(void)

{
  func_0x00010be4d060();
  return;
}



/* Entry: 1058e3e38; end: 1058e3f0f; -[SCObjcMusicMediaLoader loadAlbumArtImageForImageURL:encryptionKey:encryptionIv:completionQueue:completion:] */

void FUN_1058e3e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_7);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1058e3f10;
  puStack_58 = &UNK_1108be0e8;
  uStack_50 = param_1;
  uStack_48 = param_7;
  _objc_retain(param_7);
  func_0x00010be4d060(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110db6dd8,
                      param_4,param_5,param_6,&puStack_70,
                      &PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1058e3f10; end: 1058e3fb3;  */

void FUN_1058e3f10(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    if (param_3 == 0) {
      puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,puVar1,0);
      _objc_release(puVar1);
    }
    else {
      (**(code **)(lVar2 + 0x10))(lVar2,0,param_3);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058e3fb4; end: 1058e4187; -[SCObjcMusicMediaLoader requestDecryptedSelectionForSnapID:synchronous:queue:completion:source:] */

/* WARNING: Removing unreachable block (ram,0x0001058e4124) */

void FUN_1058e3fb4(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_6 != 0) {
    if (lVar1 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e0ad38;
      func_0x00010809144c(&PTR____CFConstantStringClassReference_110e0ad38,5);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_6 + 0x10))(param_6,0,ppuVar2);
    }
    else {
      if ((param_4 & 1) == 0) {
        func_0x00010bdd0000(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        _objc_retainBlock();
        _objc_release(param_1);
      }
      else {
        func_0x00010be09580(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(0);
        lVar3 = param_1;
        _objc_retainBlock(param_1);
        _objc_release(param_1);
      }
      ppuVar2 = (undefined **)0x0;
      lVar4 = lVar1;
      func_0x00010c13eaa0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ff60();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    _objc_release(ppuVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1058e4188; end: 1058e4283; -[SCObjcMusicMediaLoader requestMusicSelectionWithDecryptedData:completionQueue:completionHandler:source:] */

void FUN_1058e4188(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 != 0) {
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_1058e4284;
      puStack_50 = &UNK_110849530;
      _objc_retain(param_5);
      lStack_48 = param_5;
      func_0x00010007380c(param_4,&puStack_68);
      _objc_release(lStack_48);
    }
    else {
      func_0x00010be13ce0(param_1);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058e4284; end: 1058e42d3;  */

void FUN_1058e4284(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e0ad58;
  func_0x00010809144c(&PTR____CFConstantStringClassReference_110e0ad58,3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,0,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1058e42d4; end: 1058e444f; -[SCObjcMusicMediaLoader requestMusicSelectionWithMusicTrack:completionQueue:completionHandler:] */

undefined8
FUN_1058e42d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_1058e4450;
      puStack_50 = &UNK_110849530;
      _objc_retain(param_5);
      lStack_48 = param_5;
      func_0x00010007380c(param_4,&puStack_68);
      lVar2 = lStack_48;
    }
    else {
      lVar2 = lVar1;
      func_0x00010c0d36e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      _objc_retain(param_5);
      _objc_retain(param_3);
      func_0x00010c297260(lVar2);
      _objc_release(lVar2);
      _objc_release(param_3);
      _objc_release(param_5);
      lVar2 = param_4;
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 1058e4450; end: 1058e449b;  */

void FUN_1058e4450(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e0ad78;
  func_0x000108091430(&PTR____CFConstantStringClassReference_110e0ad78);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,0,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1058e449c; end: 1058e4587;  */

void FUN_1058e449c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1058e4588;
  puStack_68 = &UNK_1108465d0;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = param_2;
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar3;
  _objc_retain(uVar1);
  uStack_58 = uVar1;
  uStack_50 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010007380c(uVar2,&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_48);
  _objc_release(uStack_60);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1058e4588; end: 1058e460b;  */

void FUN_1058e4588(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x20);
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e0ad98;
      func_0x000108091430(&PTR____CFConstantStringClassReference_110e0ad98);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,0,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0x10);
    lVar2 = 0;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0x10);
    lVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001058e45cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar4,lVar2,lVar3);
  return;
}



/* Entry: 1058e460c; end: 1058e47df; -[SCObjcMusicMediaLoader claimCachedAudioForAudioDataURL:claimId:] */

void FUN_1058e460c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e0adb8;
    func_0x000108091430(&PTR____CFConstantStringClassReference_110e0adb8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126b08b8;
    _objc_alloc(PTR_PTR_1126b08b8);
    uVar3 = param_3;
    FUN_1058e47e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0295e0(puVar2);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b08b8;
    _objc_alloc(PTR_PTR_1126b08b8);
    func_0x00010c0295e0();
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_1058e4830;
    uStack_60 = 0x1058e4840;
    uStack_58 = 0;
    lVar5 = lVar1;
    func_0x00010bf39ae0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c0800();
    _objc_release(lVar5);
    ppuVar6 = (undefined **)puStack_78[5];
    _objc_retain(ppuVar6);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 1058e47e0; end: 1058e482f;  */

void FUN_1058e47e0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e0aeb8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e0aeb8,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1058e4830; end: 1058e4847;  */

void FUN_1058e4830(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1058e4848; end: 1058e48c3;  */

void FUN_1058e4848(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  ppuVar1 = param_2;
  if (param_2 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e0add8;
    func_0x000108091430();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(ppuVar1);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined ***)(lVar3 + 0x28) = ppuVar1;
  _objc_release(uVar2);
  if (param_2 == (undefined **)0x0) {
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058e48c4; end: 1058e4c1f; -[SCObjcMusicMediaLoader _loadDataForURL:mediaType:encryptionKey:encryptionIv:completionQueue:completion:source:] */

void FUN_1058e48c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_3;
  FUN_1058e47e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b08b8;
  _objc_alloc();
  func_0x00010c0295e0();
  puVar3 = PTR_PTR_1126b1058;
  _objc_alloc();
  func_0x00010c01b360();
  puVar4 = PTR_PTR_1126b1050;
  _objc_alloc(PTR_PTR_1126b1050);
  uVar5 = param_3;
  func_0x00010beec820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a200(puVar4);
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126b1060;
  _objc_alloc();
  func_0x00010c032f60();
  _objc_initWeak(auStack_70,param_1);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x4105180000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_copyWeak(auStack_78,auStack_70);
  _objc_retain(param_9);
  _objc_retain(uVar1);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar5 = uVar7;
  func_0x00010c1267e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1058e4c20; end: 1058e4ecf;  */

void FUN_1058e4c20(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  if ((*(long *)(param_1 + 0x48) == 0) || (*(long *)(param_1 + 0x20) == 0)) goto LAB_1058e4e04;
  if ((param_3 & 1) == 0) {
    lVar1 = param_1 + 0x50;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      func_0x00010c0a8a20(*(undefined8 *)(lVar1 + 0x20));
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1058e4ed0;
    puStack_60 = &UNK_110848378;
    _objc_copyWeak(auStack_48,param_1 + 0x50);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    uStack_58 = uVar6;
    _objc_retain(uVar5);
    uStack_50 = uVar5;
    func_0x00010007380c(uVar4,&puStack_78);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_48);
  }
  else {
    lVar1 = param_2;
    func_0x00010c08fa60();
    lVar3 = param_2;
    if (lVar1 != 0) {
      lVar1 = *(long *)(param_1 + 0x38);
      func_0x00010c08fa60();
      if (lVar1 != 0) {
        lVar1 = param_1 + 0x50;
        _objc_loadWeakRetained();
        lVar2 = lVar1;
        func_0x00010bdc36c0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 == 0) {
          func_0x00010b29143c(param_2,*(undefined8 *)(param_1 + 0x38),
                              *(undefined8 *)(param_1 + 0x40),1,0);
        }
        else {
          _objc_retain(lVar2);
          lVar3 = lVar2;
        }
        _objc_release(param_2);
        _objc_release(lVar2);
        _objc_release(lVar1);
        lVar1 = lVar3;
        func_0x00010c08fa60();
        if (lVar1 == 0) {
          lVar1 = param_1 + 0x50;
          _objc_loadWeakRetained();
          if (lVar1 != 0) {
            func_0x00010c0a8a20(*(undefined8 *)(lVar1 + 0x20));
          }
          uVar5 = *(undefined8 *)(param_1 + 0x20);
          puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a8 = 0xc2000000;
          uStack_a0 = 0x1058e4f20;
          puStack_98 = &UNK_110848378;
          _objc_copyWeak(auStack_80,param_1 + 0x50);
          uVar6 = *(undefined8 *)(param_1 + 0x30);
          _objc_retain(uVar6);
          uVar4 = *(undefined8 *)(param_1 + 0x48);
          uStack_90 = uVar6;
          _objc_retain(uVar4);
          uStack_88 = uVar4;
          func_0x00010007380c(uVar5,&puStack_b0);
          _objc_release(uStack_88);
          _objc_release(uStack_90);
          _objc_destroyWeak(auStack_80);
          param_2 = lVar3;
          goto LAB_1058e4dfc;
        }
      }
    }
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_1058e4f70;
    puStack_c8 = &UNK_11084aaa8;
    lVar1 = *(long *)(param_1 + 0x48);
    _objc_retain(lVar1);
    lStack_b8 = lVar1;
    _objc_retain(lVar3);
    lStack_c0 = lVar3;
    func_0x00010007380c(uVar5,&puStack_e0);
    _objc_release(lStack_c0);
    param_2 = lVar3;
    lVar1 = lStack_b8;
  }
LAB_1058e4dfc:
  _objc_release(lVar1);
LAB_1058e4e04:
  _objc_release(param_2);
  return;
}



/* Entry: 1058e4ed0; end: 1058e4f6f;  */

void FUN_1058e4ed0(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  ppuVar1 = &PTR____CFConstantStringClassReference_110df8158;
  func_0x00010809144c(&PTR____CFConstantStringClassReference_110df8158,1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,0,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1058e4f70; end: 1058e4f83;  */

void FUN_1058e4f70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001058e4f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1058e4f84; end: 1058e5393; -[SCObjcMusicMediaLoader _fetchSelectionForAsset:completionQueue:completionHandler:source:] */

void FUN_1058e4f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_6 == (undefined *)0x0) goto LAB_1058e5328;
  uVar2 = param_4;
  func_0x00010bf0f600();
  iVar1 = (int)uVar2;
  if (iVar1 == 0) {
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_1058e5850;
    puStack_118 = &UNK_110849530;
    _objc_retain(param_6);
    puStack_110 = param_6;
    func_0x00010007380c(param_5,&puStack_130);
    puVar5 = puStack_110;
  }
  else {
    if (iVar1 == 5) {
      _objc_initWeak(auStack_90,param_2);
      puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
      uVar2 = param_4;
      func_0x00010c129fa0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_4;
      func_0x00010c129fa0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf93ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_4;
      func_0x00010c129fa0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf93e80();
      _objc_retainAutoreleasedReturnValue();
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0xc2000000;
      pcStack_f8 = FUN_1058e53a8;
      puStack_f0 = &UNK_110880368;
      _objc_copyWeak(auStack_c8,auStack_90);
      _objc_retain(param_4);
      uStack_e8 = param_4;
      _objc_retain(param_7);
      uStack_e0 = param_7;
      _objc_retain(param_5);
      uStack_d8 = param_5;
      _objc_retain(param_6);
      puStack_d0 = param_6;
      func_0x00010c09ae80(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(puVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(puStack_d0);
      _objc_release(uStack_d8);
      _objc_release(uStack_e0);
      _objc_release(uStack_e8);
      _objc_destroyWeak(auStack_c8);
      _objc_destroyWeak(auStack_90);
      goto LAB_1058e5328;
    }
    if (iVar1 != 2) goto LAB_1058e5328;
    puVar5 = PTR_PTR_1126b3028;
    _objc_alloc(PTR_PTR_1126b3028);
    func_0x00010c04ab80();
    puVar3 = PTR_PTR_1126b3030;
    _objc_alloc();
    func_0x00010c277e80(param_4);
    uVar2 = param_4;
    func_0x00010bf0ef80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24fb80(param_4);
    func_0x00010bf68d00(PTR_PTR_1126bfd68);
    _CMTimeMakeWithSeconds(auStack_90,param_1);
    uVar4 = param_4;
    func_0x00010bf4d360(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054ba0();
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar2);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1058e5394;
    puStack_a8 = &UNK_11084aaa8;
    _objc_retain(param_6);
    puStack_a0 = puVar3;
    puStack_98 = param_6;
    _objc_retain(puVar3);
    func_0x00010007380c(param_5,&puStack_c0);
    _objc_release(puStack_a0);
    _objc_release(puStack_98);
    _objc_release(puVar3);
  }
  _objc_release(puVar5);
LAB_1058e5328:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1058e5394; end: 1058e53a7;  */

void FUN_1058e5394(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001058e53a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1058e53a8; end: 1058e5757;  */

void FUN_1058e53a8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined1 auStack_d0 [24];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_2 + 0x40;
  _objc_loadWeakRetained();
  if ((param_4 == 0) && (lVar2 = param_3, func_0x00010c08fa60(), lVar2 != 0)) {
    ppuVar10 = (undefined **)PTR_PTR_1126b3020;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c129fa0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c129fa0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf93ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c129fa0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar6;
    func_0x00010bf93e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c059fe0();
    _objc_release(uVar11);
    _objc_release(uVar6);
    _objc_release(uVar9);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar8);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b3028;
    _objc_alloc(PTR_PTR_1126b3028);
    func_0x00010c04ab80();
    puVar7 = PTR_PTR_1126b3030;
    _objc_alloc(PTR_PTR_1126b3030);
    func_0x00010c277e80(*(undefined8 *)(param_2 + 0x20));
    func_0x00010c24fb80(*(undefined8 *)(param_2 + 0x20));
    func_0x00010bf68d00(PTR_PTR_1126bfd68);
    _CMTimeMakeWithSeconds(auStack_d0,param_1);
    uVar9 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf4d360(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar9;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054ba0(puVar7);
    _objc_release(uVar8);
    _objc_release(uVar9);
    (**(code **)(*(long *)(param_2 + 0x38) + 0x10))(*(long *)(param_2 + 0x38),puVar7,0);
    _objc_release(puVar7);
    _objc_release(puVar4);
  }
  else {
    lVar2 = param_4;
    func_0x00010bf3ec40();
    if (lVar2 == 1) {
      lVar2 = *(long *)(param_2 + 0x20);
      func_0x00010c277e80();
      if (lVar2 != 0) {
        func_0x00010c0adf40(*(undefined8 *)(lVar1 + 0x20));
        uVar9 = *(undefined8 *)(lVar1 + 0x18);
        func_0x00010c277e80(*(undefined8 *)(param_2 + 0x20));
        func_0x00010c24fb80(*(undefined8 *)(param_2 + 0x20));
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0xc2000000;
        pcStack_a8 = FUN_1058e5758;
        puStack_a0 = &UNK_1108be178;
        ppuVar10 = *(undefined ***)(param_2 + 0x28);
        lStack_98 = lVar1;
        _objc_retain(ppuVar10);
        uVar11 = *(undefined8 *)(param_2 + 0x30);
        ppuStack_90 = ppuVar10;
        _objc_retain(uVar11);
        uVar8 = *(undefined8 *)(param_2 + 0x38);
        uStack_88 = uVar11;
        _objc_retain(uVar8);
        uStack_78 = uVar8;
        _objc_retain(param_4);
        lStack_80 = param_4;
        func_0x00010c13fac0(param_1,uVar9);
        _objc_release(lStack_80);
        _objc_release(uStack_78);
        _objc_release(uStack_88);
        ppuVar10 = ppuStack_90;
        goto LAB_1058e5718;
      }
    }
    lVar2 = *(long *)(param_2 + 0x38);
    if (param_4 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0,param_4);
      goto LAB_1058e571c;
    }
    ppuVar10 = &PTR____CFConstantStringClassReference_110e0adf8;
    func_0x00010809144c(&PTR____CFConstantStringClassReference_110e0adf8,3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,0,ppuVar10);
  }
LAB_1058e5718:
  _objc_release(ppuVar10);
LAB_1058e571c:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058e5758; end: 1058e582b;  */

void FUN_1058e5758(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    func_0x00010c0adf60(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1058e582c;
  puStack_50 = &UNK_11084a9e8;
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  lStack_48 = param_2;
  uStack_38 = uVar3;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  _objc_retain(param_2);
  func_0x00010007380c(uVar2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(lStack_48);
  _objc_release(uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1058e582c; end: 1058e584f;  */

void FUN_1058e582c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001058e584c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(long *)(param_1 + 0x20),uVar1);
  return;
}



/* Entry: 1058e5850; end: 1058e589f;  */

void FUN_1058e5850(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e0ae18;
  func_0x00010809144c(&PTR____CFConstantStringClassReference_110e0ae18,4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,0,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1058e58a0; end: 1058e597b; -[SCObjcMusicMediaLoader _asynchronousEncryptedContentDataResultHandlerOnQueue:completion:source:] */

void FUN_1058e58a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1058e597c;
  puStack_58 = &UNK_1108833c0;
  uStack_50 = param_3;
  uStack_48 = param_1;
  uStack_40 = param_5;
  uStack_38 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retainBlock(&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_50);
  _objc_release(uStack_38);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1058e597c; end: 1058e5a9f;  */

void FUN_1058e597c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(*(undefined8 *)(param_1 + 0x30));
    auVar5 = *(undefined1 (*) [16])(param_1 + 0x20);
    _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x20));
    auVar5 = NEON_ext(auVar5,auVar5,8,1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar2);
    _objc_release(auVar5._8_8_);
    _objc_release(uVar1);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1058e5aa0; end: 1058e5b8f;  */

void FUN_1058e5aa0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c13ca20();
  if (lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      lVar1 = param_2;
      func_0x00010bf63640(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be13ce0(uVar2);
      goto LAB_1058e5b70;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1058e5b90;
  puStack_40 = &UNK_110849530;
  lVar1 = *(long *)(param_1 + 0x38);
  _objc_retain(lVar1);
  lStack_38 = lVar1;
  func_0x00010007380c(uVar2,&puStack_58);
  lVar1 = lStack_38;
LAB_1058e5b70:
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1058e5b90; end: 1058e5bdf;  */

void FUN_1058e5b90(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e0ae38;
  func_0x00010809144c(&PTR____CFConstantStringClassReference_110e0ae38,0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,0,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1058e5be0; end: 1058e5c7f;  */

void FUN_1058e5be0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1058e5c80;
  puStack_48 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uStack_40 = param_2;
  uStack_38 = uVar2;
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1058e5c80; end: 1058e5ceb;  */

void FUN_1058e5c80(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001058e5ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e0ae58;
  func_0x00010809144c(&PTR____CFConstantStringClassReference_110e0ae58,0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,0,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 1058e5cec; end: 1058e5e33; -[SCObjcMusicMediaLoader _fetchSelectionWithMusicData:completionQueue:completionHandler:source:] */

void FUN_1058e5cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b3098;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uStack_48 = 0;
  func_0x00010c008360();
  _objc_release(param_3);
  uVar1 = uStack_48;
  _objc_retain(uStack_48);
  if (puVar2 == (undefined *)0x0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1058e5e34;
    puStack_60 = &UNK_11084aaa8;
    _objc_retain(param_5);
    uStack_50 = param_5;
    _objc_retain(uVar1);
    uStack_58 = uVar1;
    func_0x00010007380c(param_4,&puStack_78);
    _objc_release(param_4);
    _objc_release(uStack_58);
    param_4 = uStack_50;
  }
  else {
    func_0x00010be13cc0(param_1);
  }
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1058e5e34; end: 1058e5e9f;  */

void FUN_1058e5e34(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001058e5e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e0ae78;
  func_0x00010809144c(&PTR____CFConstantStringClassReference_110e0ae78,4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,0,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 1058e5ea0; end: 1058e5fc3; -[SCObjcMusicMediaLoader _encryptedContentDataResultHandlerWithCompletion:dispatchGroup:source:] */

void FUN_1058e5ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_b0;
  _objc_retain(param_3);
  uVar1 = param_5;
  _objc_retain();
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1058e4830;
  uStack_50 = 0x1058e4840;
  puStack_68 = &uStack_70;
  _dispatch_group_create();
  uVar2 = puStack_68[5];
  uStack_48 = uVar1;
  _objc_retainAutorelease();
  *param_4 = uVar2;
  _dispatch_group_enter(puStack_68[5]);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1058e5fc4;
  puStack_98 = &UNK_1108be238;
  uStack_90 = param_1;
  uStack_88 = param_5;
  uStack_80 = param_3;
  puStack_78 = &uStack_70;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_b0);
  _objc_release(uStack_88);
  _objc_release(uStack_80);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1058e5fc4; end: 1058e60d7;  */

void FUN_1058e5fc4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    _objc_retain(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(*(undefined8 *)(param_1 + 0x28));
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar2);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
  return;
}



/* Entry: 1058e60d8; end: 1058e62f3;  */

/* WARNING: Removing unreachable block (ram,0x0001058e6260) */

void FUN_1058e60d8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010c13ca20();
  if (lVar4 == 0) {
    lVar4 = param_2;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      puVar1 = PTR_PTR_1126b3098;
      _objc_alloc();
      lVar4 = param_2;
      func_0x00010bf63640(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008360();
      _objc_retain(0);
      _objc_release(lVar4);
      if (puVar1 == (undefined *)0x0) {
        lVar4 = *(long *)(param_1 + 0x30);
        ppuVar3 = &PTR____CFConstantStringClassReference_110e0ae78;
        func_0x00010809144c(&PTR____CFConstantStringClassReference_110e0ae78,4);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar4 + 0x10))(lVar4,0,ppuVar3);
        _objc_release(ppuVar3);
        _dispatch_group_leave(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        uVar2 = 0x15;
        func_0x0001000819a8(0x15,0);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar6);
        func_0x00010be13cc0(uVar5);
        _objc_release(uVar2);
        _objc_release(uVar6);
      }
      _objc_release(puVar1);
      _objc_release(0);
      goto LAB_1058e62d0;
    }
  }
  lVar4 = *(long *)(param_1 + 0x30);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e0ae38;
  func_0x00010809144c(&PTR____CFConstantStringClassReference_110e0ae38,0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,0,ppuVar3);
  _objc_release(ppuVar3);
  _dispatch_group_leave(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
LAB_1058e62d0:
  _objc_release(param_2);
  return;
}



/* Entry: 1058e62f4; end: 1058e6327;  */

void FUN_1058e62f4(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  return;
}



/* Entry: 1058e6328; end: 1058e63ab;  */

void FUN_1058e6328(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (param_2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e0ae98;
    func_0x00010809144c(&PTR____CFConstantStringClassReference_110e0ae98);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,0,ppuVar1);
    _objc_release(ppuVar1);
  }
  else {
    (**(code **)(lVar2 + 0x10))(lVar2,0,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  return;
}



/* Entry: 1058e63ac; end: 1058e6457; -[SCObjcMusicMediaLoader _AESGCMDecryptData:encryptionKey:encryptionIv:] */

void FUN_1058e63ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c08fa60();
  lVar2 = param_3;
  if (lVar1 != 0) {
    lVar2 = param_5;
    func_0x00010c0d3c80(param_5);
    func_0x00010bf06ae0();
    _objc_release(param_3);
  }
  uVar3 = param_4;
  func_0x00010bcb4460(param_4,lVar2,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1058e6458; end: 1058e64ab; -[SCObjcMusicMediaLoader .cxx_destruct] */

void FUN_1058e6458(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058e64ac; end: 1058e6577; -[SCObjcMusicNotificationPresenter initWithNotificationServices:mediaLoader:experiments:] */

undefined1 *
FUN_1058e64ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126eacb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


