/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a133c0; end: 105a133d7; -[SCStoriesConfigProviderImplementation storiesCarouselInChatType] */

ulong FUN_105a133c0(ulong param_1)

{
  func_0x00010c2582c0();
  return param_1 & 0xffffffff;
}



/* Entry: 105a133d8; end: 105a1341b; -[SCStoriesConfigProviderImplementation _getStoriesCarouselInChat5TabEnabled] */

uint FUN_105a133d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e16c38,0,0);
  func_0x00010c265680(param_1);
  return (uint)param_1 & (uint)uVar1;
}



/* Entry: 105a1341c; end: 105a1345b; -[SCStoriesConfigProviderImplementation storiesCarouselInChat5TabEnabled] */

undefined8 FUN_105a1341c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a1345c; end: 105a1349f; -[SCStoriesConfigProviderImplementation _getRemoveFriendStoriesCarouselInDFEnabled] */

uint FUN_105a1345c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e16c58,0,0);
  func_0x00010c2582c0(param_1);
  return (uint)param_1 & (uint)uVar1;
}



/* Entry: 105a134a0; end: 105a134df; -[SCStoriesConfigProviderImplementation removeFriendStoriesCarouselInDFEnabled] */

undefined8 FUN_105a134a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a134e0; end: 105a1356b; -[SCStoriesConfigProviderImplementation storiesCarouselInChat5TabNumFSPerSubs] */

long FUN_105a134e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  lVar1 = *(long *)(param_1 + 0xb8);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c067f00(uVar2,param_2,&PTR____CFConstantStringClassReference_110e16c78,0xffffffff,0)
    ;
    lVar1 = param_1;
    func_0x00010c2582c0();
    if ((int)lVar1 == 0) {
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2380;
    }
    else {
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)(int)uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined ***)(param_1 + 0xb8) = ppuVar3;
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + 0xb8);
  }
  func_0x00010c067ec0(lVar1);
  return (long)(int)lVar1;
}



/* Entry: 105a1356c; end: 105a13573; -[SCStoriesConfigProviderImplementation storiesCarouselShouldRemoveStoriesShortcut] */

undefined8 FUN_105a1356c(void)

{
  return 0;
}



/* Entry: 105a13574; end: 105a135bb; -[SCStoriesConfigProviderImplementation storiesCarouselInChatCellSizeMultiplier] */

undefined8 FUN_105a13574(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xc0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105a135bc; end: 105a135fb; -[SCStoriesConfigProviderImplementation _getStoriesCarouselInChatCellSizeMultiplier] */

void FUN_105a135bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfb2cc0(0x3fb33333,*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110e16c98,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithFloat__1126157e8);
  return;
}



/* Entry: 105a135fc; end: 105a135ff; -[SCStoriesConfigProviderImplementation storiesCarouselInChatDisableThumbnailBadgingOnFF] */

void FUN_105a135fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeFriendStoriesCarouselInDFE_112628c20);
  return;
}



/* Entry: 105a13600; end: 105a1363f; -[SCStoriesConfigProviderImplementation storiesCarouselClientRerankFeedExitTimeThreshold] */

undefined8 FUN_105a13600(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 200);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a13640; end: 105a13647; -[SCStoriesConfigProviderImplementation storiesCarouselInChatShouldCondenseRingBorder] */

undefined8 FUN_105a13640(void)

{
  return 0;
}



/* Entry: 105a13648; end: 105a1364f; -[SCStoriesConfigProviderImplementation storiesCarouselInChatStoryTopMarginToBoundsHeightRatioMultiplier] */

undefined8 FUN_105a13648(void)

{
  return 0xbf800000;
}



/* Entry: 105a13650; end: 105a13657; -[SCStoriesConfigProviderImplementation mixedCarouselDebugShouldBypassClientManipulation] */

undefined8 FUN_105a13650(void)

{
  return 0;
}



/* Entry: 105a13658; end: 105a136af; -[SCStoriesConfigProviderImplementation _getMixedCarouselRectangularShapeStoryTypeMask] */

undefined * FUN_105a13658(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = PTR_PTR_1126c11e8;
  func_0x00010c0db140(PTR_PTR_1126c11e8);
  func_0x00010c0df840(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c2827c0();
  _objc_release(puVar2);
  return puVar1;
}



/* Entry: 105a136b0; end: 105a136ef; -[SCStoriesConfigProviderImplementation mixedCarouselRectangularShapeStoryTypeMask] */

long FUN_105a136b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  return (long)(int)uVar2;
}



/* Entry: 105a136f0; end: 105a136f7; -[SCStoriesConfigProviderImplementation enableChatTabStoryBadgeForNotifications] */

undefined8 FUN_105a136f0(void)

{
  return 0;
}



/* Entry: 105a136f8; end: 105a1376b; -[SCStoriesConfigProviderImplementation discoverFeedTabStoryRingTtlSec] */

long FUN_105a136f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 0x180);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c067f00(uVar2,param_2,&PTR____CFConstantStringClassReference_110e16cb8,0xffffffff,0)
    ;
    func_0x00010c0df760(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x180);
    *(undefined **)(param_1 + 0x180) = puVar3;
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + 0x180);
  }
  func_0x00010c067ec0(lVar1);
  return (long)(int)lVar1;
}



/* Entry: 105a1376c; end: 105a137ab; -[SCStoriesConfigProviderImplementation discoverFeedTabStoryRingTtlOnlyNewStory] */

undefined8 FUN_105a1376c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1e8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a137ac; end: 105a13817; -[SCStoriesConfigProviderImplementation removeLegacyNavigationItemImplEnabled] */

void FUN_105a137ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 0x1c0);
  if (lVar1 == 0) {
    func_0x00010bf1f440(*(undefined8 *)(param_1 + 0x28),param_2,
                        &PTR____CFConstantStringClassReference_110e16cd8,1,0);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x1c0);
    *(undefined **)(param_1 + 0x1c0) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x1c0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 105a13818; end: 105a13883; -[SCStoriesConfigProviderImplementation enableFFTriggerConditionsForDFThumbnail] */

void FUN_105a13818(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 400);
  if (lVar1 == 0) {
    func_0x00010bf1f440(*(undefined8 *)(param_1 + 0x28),param_2,
                        &PTR____CFConstantStringClassReference_110e16cf8,0,0);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 400);
    *(undefined **)(param_1 + 400) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 400);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 105a13884; end: 105a1389b; -[SCStoriesConfigProviderImplementation feedSwitcherForDiscoverStoriesNotificationInSpotlight] */

void FUN_105a13884(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16d18,1,0);
  return;
}



/* Entry: 105a1389c; end: 105a138c7; -[SCStoriesConfigProviderImplementation subscriptionStoriesNotifCap] */

long FUN_105a1389c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e16d38,7,0);
  return (long)(int)uVar1;
}



/* Entry: 105a138c8; end: 105a13907; -[SCStoriesConfigProviderImplementation sendToRewriteRateLimiterTimeInterval] */

undefined8 FUN_105a138c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a13908; end: 105a13947; -[SCStoriesConfigProviderImplementation sendToStoryDestinationsFetchFixEnabled] */

undefined8 FUN_105a13908(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a13948; end: 105a13987; -[SCStoriesConfigProviderImplementation sendToRewriteWarmStartNetworkRequestsEnabled] */

undefined8 FUN_105a13948(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a13988; end: 105a1399f; -[SCStoriesConfigProviderImplementation shareSpotlightToPublicStoriesEnabled] */

void FUN_105a13988(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16378,0,0);
  return;
}



/* Entry: 105a139a0; end: 105a139b7; -[SCStoriesConfigProviderImplementation spotlightPreserveEditsEnabled] */

void FUN_105a139a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16398,0,0);
  return;
}



/* Entry: 105a139b8; end: 105a139cf; -[SCStoriesConfigProviderImplementation spotlightQuickCutEnabled] */

void FUN_105a139b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e163b8,0,0);
  return;
}



/* Entry: 105a139d0; end: 105a139e7; -[SCStoriesConfigProviderImplementation spotlightGestureRewriteEnabled] */

void FUN_105a139d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16d58,0,0);
  return;
}



/* Entry: 105a139e8; end: 105a139ff; -[SCStoriesConfigProviderImplementation dataStoreReorderOnSaveInBackground] */

void FUN_105a139e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16d78,0,0);
  return;
}



/* Entry: 105a13a00; end: 105a13a3f; -[SCStoriesConfigProviderImplementation _getInteractionHistoryAllowanceControlConfig] */

void FUN_105a13a00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar2,param_2,&PTR____CFConstantStringClassReference_110e16d98,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,uVar2);
  return;
}



/* Entry: 105a13a40; end: 105a13a7f; -[SCStoriesConfigProviderImplementation _getInteractionHistoryReadingImprovementConfig] */

void FUN_105a13a40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar2,param_2,&PTR____CFConstantStringClassReference_110e16db8,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,uVar2);
  return;
}



/* Entry: 105a13a80; end: 105a13a87; -[SCStoriesConfigProviderImplementation friendsCarouselReplayStateOpacity] */

undefined8 FUN_105a13a80(void)

{
  return 0x3f800000;
}



/* Entry: 105a13a88; end: 105a13a8f; -[SCStoriesConfigProviderImplementation hideFriendStoriesBeforeTargetInVopera] */

undefined8 FUN_105a13a88(void)

{
  return 0;
}



/* Entry: 105a13a90; end: 105a13acf; -[SCStoriesConfigProviderImplementation tapToSeekEnabledForLongVideo] */

undefined8 FUN_105a13a90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a13ad0; end: 105a13b0f; -[SCStoriesConfigProviderImplementation _tapToSeekEnabledForLongVideo] */

void FUN_105a13ad0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110e16dd8,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 105a13b10; end: 105a13b17; -[SCStoriesConfigProviderImplementation tapToSeekIntervalForLongVideo] */

void FUN_105a13b10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xe0),PTR_s_target_112678178);
  return;
}



/* Entry: 105a13b18; end: 105a13baf; -[SCStoriesConfigProviderImplementation _tapToSeekIntervalForLongVideo] */

void FUN_105a13b18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b84a0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e16df8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067ec0();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2398;
  }
  else {
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)(int)uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 105a13bb0; end: 105a13bb7; -[SCStoriesConfigProviderImplementation longVideoDurationThreshold] */

void FUN_105a13bb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xe8),PTR_s_target_112678178);
  return;
}



/* Entry: 105a13bb8; end: 105a13c4f; -[SCStoriesConfigProviderImplementation _longVideoDurationThreshold] */

void FUN_105a13bb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b84a0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e16e18,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067ec0();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c23b0;
  }
  else {
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)(int)uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 105a13c50; end: 105a13c8f; -[SCStoriesConfigProviderImplementation enableLoggingForLongVideoTapToSeek] */

undefined8 FUN_105a13c50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a13c90; end: 105a13ccf; -[SCStoriesConfigProviderImplementation _enableLoggingForLongVideoTapToSeek] */

void FUN_105a13c90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110e16e38,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 105a13cd0; end: 105a13d0f; -[SCStoriesConfigProviderImplementation enableNotchedProgressBarForLongVideo] */

undefined8 FUN_105a13cd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a13d10; end: 105a13d97; -[SCStoriesConfigProviderImplementation _enableNotchedProgressBarForLongVideo] */

void FUN_105a13d10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b84a0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e16e58,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = uVar1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  func_0x00010c0df6e0(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105a13d98; end: 105a13daf; -[SCStoriesConfigProviderImplementation enableDFEndPointInDeepLink] */

void FUN_105a13d98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16e78,0,0);
  return;
}



/* Entry: 105a13db0; end: 105a13dcb; -[SCStoriesConfigProviderImplementation storyManagementGrpcEndpointAddress] */

void FUN_105a13db0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_stringValueForConfigKeySync_defa_112675008,
             &PTR____CFConstantStringClassReference_110e16e98,
             &PTR____CFConstantStringClassReference_110dd6c58,0);
  return;
}



/* Entry: 105a13dcc; end: 105a13f03; -[SCStoriesConfigProviderImplementation _fetchFriendStoryCarouselPrefetchConfig] */

void FUN_105a13dcc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108cda58);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c1195e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c11f0;
  lVar3 = lVar2;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126c11f0;
  if (lVar2 == 0 || puVar4 == (undefined *)0x0) {
    puVar5 = puVar1;
    func_0x00010c269d40(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar4);
    _objc_opt_class(puVar5);
    puVar6 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar5);
    puVar5 = puVar4;
    if (((ulong)puVar6 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a13f04; end: 105a13f73;  */

void FUN_105a13f04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c11f0;
  _objc_opt_new(PTR_PTR_1126c11f0);
  func_0x00010c1a0260();
  func_0x00010c1a0280(puVar1,param_2,5);
  func_0x00010c1a0220(puVar1,param_2,5);
  func_0x00010c1a0240(puVar1,param_2,5);
  func_0x00010c1a01e0(puVar1,param_2,8);
  func_0x00010c1a0200(puVar1,param_2,8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a13f74; end: 105a13fbf; -[SCStoriesConfigProviderImplementation sendInteractionHistoryForAllContentTypesWithFeatureName:] */

bool FUN_105a13f74(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  return (param_3 & (long)(int)uVar2) != 0;
}



/* Entry: 105a13fc0; end: 105a1400b; -[SCStoriesConfigProviderImplementation requestInteractionHistoryReadingImprovement:] */

bool FUN_105a13fc0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  return (param_3 & (long)(int)uVar2) != 0;
}



/* Entry: 105a1400c; end: 105a14023; -[SCStoriesConfigProviderImplementation dedupPlaylistInProdEnabled] */

void FUN_105a1400c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16ed8,0,0);
  return;
}



/* Entry: 105a14024; end: 105a14063; -[SCStoriesConfigProviderImplementation incrementDedupeFpSubsForYou] */

undefined8 FUN_105a14024(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a14064; end: 105a1408f; -[SCStoriesConfigProviderImplementation saveBeforeLoadStrategy] */

long FUN_105a14064(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e16ef8,0,0);
  return (long)(int)uVar1;
}



/* Entry: 105a14090; end: 105a140cf; -[SCStoriesConfigProviderImplementation storiesPlaybackDataSourcePerformanceImprovementReduceDocObjectRead] */

undefined8 FUN_105a14090(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a140d0; end: 105a1410f; -[SCStoriesConfigProviderImplementation storiesPlaybackDataSourcePerformanceImprovementCacheKeyCorrection] */

undefined8 FUN_105a140d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a14110; end: 105a1414f; -[SCStoriesConfigProviderImplementation storiesPlaybackDataSourcePerformanceImprovementTTLCorrection] */

undefined8 FUN_105a14110(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a14150; end: 105a1418f; -[SCStoriesConfigProviderImplementation storiesPlaybackDataSourcePerformanceImprovementMediaTypeCorrection] */

undefined8 FUN_105a14150(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a14190; end: 105a141cf; -[SCStoriesConfigProviderImplementation storiesPlaybackDataSourcePerformanceImprovementMisc] */

undefined8 FUN_105a14190(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x148);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a141d0; end: 105a141e7; -[SCStoriesConfigProviderImplementation enableCarouselCollectionViewSetOnWillDisplayCell] */

void FUN_105a141d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16f18,1,0);
  return;
}



/* Entry: 105a141e8; end: 105a14227; -[SCStoriesConfigProviderImplementation enableDiscoverSpinnerLoggingFPV] */

undefined8 FUN_105a141e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x150);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a14228; end: 105a14267; -[SCStoriesConfigProviderImplementation enabledFriendStoriesFriendshipCheck] */

undefined8 FUN_105a14228(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x160);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a14268; end: 105a1426f; -[SCStoriesConfigProviderImplementation discoverPromotedStoryRerankPositionThreshold] */

undefined8 FUN_105a14268(void)

{
  return 5;
}



/* Entry: 105a14270; end: 105a142af; -[SCStoriesConfigProviderImplementation contentMediaViewTimeFixEnabled] */

undefined8 FUN_105a14270(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a142b0; end: 105a142ef; -[SCStoriesConfigProviderImplementation contentMediaViewTimeAttachmentFixEnabled] */

undefined8 FUN_105a142b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x170);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a142f0; end: 105a1432f; -[SCStoriesConfigProviderImplementation contentTotalViewTimeFixEnabled] */

undefined8 FUN_105a142f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x178);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a14330; end: 105a14347; -[SCStoriesConfigProviderImplementation enabledPluginCreatorOnSpotlight] */

void FUN_105a14330(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16f38,0,0);
  return;
}



/* Entry: 105a14348; end: 105a1435f; -[SCStoriesConfigProviderImplementation enableSpotlightManagementOpsFeedLogging] */

void FUN_105a14348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16f58,0,0);
  return;
}



/* Entry: 105a14360; end: 105a14377; -[SCStoriesConfigProviderImplementation storySharingV2Enabled] */

void FUN_105a14360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16f78,0,0);
  return;
}



/* Entry: 105a14378; end: 105a143c7; -[SCStoriesConfigProviderImplementation disableCATransactionFlushOnPresentation] */

undefined8 FUN_105a14378(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c11f8;
  func_0x00010bf7fba0(PTR_PTR_1126c11f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 105a143c8; end: 105a14417; -[SCStoriesConfigProviderImplementation disableUpNextInSharedStory] */

undefined8 FUN_105a143c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c11f8;
  func_0x00010bf80be0(PTR_PTR_1126c11f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 105a14418; end: 105a14457; -[SCStoriesConfigProviderImplementation storyMetricMediaViewTimeFixEnabled] */

undefined8 FUN_105a14418(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a14458; end: 105a1446f; -[SCStoriesConfigProviderImplementation storiesBackgroundPrefetchEnabled] */

void FUN_105a14458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16f98,1,0);
  return;
}



/* Entry: 105a14470; end: 105a1449b; -[SCStoriesConfigProviderImplementation storiesBackgroundPrefetchIntervalMinutes] */

long FUN_105a14470(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e16fb8,0xf0,0);
  return (long)(int)uVar1;
}



/* Entry: 105a1449c; end: 105a144b3; -[SCStoriesConfigProviderImplementation storiesBackgroundPrefetchSkipMetadataPrefetch] */

void FUN_105a1449c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16fd8,0,0);
  return;
}



/* Entry: 105a144b4; end: 105a144cb; -[SCStoriesConfigProviderImplementation storiesBackgroundPrefetchCompletionFix] */

void FUN_105a144b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16ff8,0,0);
  return;
}



/* Entry: 105a144cc; end: 105a144e3; -[SCStoriesConfigProviderImplementation storiesBackgroundPrefetchNetworkCondition] */

void FUN_105a144cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_intValueForConfigKeySync_default_1125f79d0,
             &PTR____CFConstantStringClassReference_110e17018,2,0);
  return;
}



/* Entry: 105a144e4; end: 105a144fb; -[SCStoriesConfigProviderImplementation disableDiscoverBackgroundPrefetcher] */

void FUN_105a144e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e17038,0,0);
  return;
}



/* Entry: 105a144fc; end: 105a14513; -[SCStoriesConfigProviderImplementation discoverFeedBackgroundJobMediaPrefetchOnly] */

void FUN_105a144fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e17058,0,0);
  return;
}



/* Entry: 105a14514; end: 105a14553; -[SCStoriesConfigProviderImplementation friendStoriesRankingLocalRerankFrequencyViewDisappear] */

undefined8 FUN_105a14514(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a14554; end: 105a14593; -[SCStoriesConfigProviderImplementation friendStoriesRankingLocalRerankFrequencyPullToRefresh] */

undefined8 FUN_105a14554(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a14594; end: 105a145d3; -[SCStoriesConfigProviderImplementation friendStoriesRankingLocalRerankFrequencyPrefetchRequests] */

undefined8 FUN_105a14594(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a145d4; end: 105a14613; -[SCStoriesConfigProviderImplementation enabledFriendStoriesRerankCarousel] */

undefined8 FUN_105a145d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1b0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a14614; end: 105a14653; -[SCStoriesConfigProviderImplementation enableDFRerankOnCacheLoading] */

undefined8 FUN_105a14614(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a14654; end: 105a1466b; -[SCStoriesConfigProviderImplementation allowForYouNotificationToBadgeDiscoverTab] */

void FUN_105a14654(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e17078,0,0);
  return;
}



/* Entry: 105a1466c; end: 105a146ab; -[SCStoriesConfigProviderImplementation truncateDescriptionsOffloadBgThreadEnabled] */

undefined8 FUN_105a1466c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1c8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a146ac; end: 105a146eb; -[SCStoriesConfigProviderImplementation jtcDFTilesEnabled] */

undefined8 FUN_105a146ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a146ec; end: 105a1472b; -[SCStoriesConfigProviderImplementation jtcMixedFeedHeroTileEnabled] */

undefined8 FUN_105a146ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a1472c; end: 105a14747; -[SCStoriesConfigProviderImplementation isDiscoverForYouAutoPlayEnabled] */

uint FUN_105a1472c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000108f54a98(uVar1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105a14748; end: 105a1475f; -[SCStoriesConfigProviderImplementation commentsSuggestedSearchEnabled] */

void FUN_105a14748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e170b8,0,0);
  return;
}



/* Entry: 105a14760; end: 105a14777; -[SCStoriesConfigProviderImplementation bitmojiStickersInCommentsEnabled] */

void FUN_105a14760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e170d8,0,0);
  return;
}



/* Entry: 105a14778; end: 105a147e3; -[SCStoriesConfigProviderImplementation bitmojiStickersInCommentsEnabledWithNoExposure] */

undefined8 FUN_105a14778(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b84a0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e170d8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105a147e4; end: 105a147fb; -[SCStoriesConfigProviderImplementation customStickerAddCommentEnabled] */

void FUN_105a147e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e163d8,0,0);
  return;
}



/* Entry: 105a147fc; end: 105a1483b; -[SCStoriesConfigProviderImplementation shouldFetchDiscoverContentAfterLeave4thTab] */

undefined8 FUN_105a147fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1f8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a1483c; end: 105a1487b; -[SCStoriesConfigProviderImplementation preservingPromotedStoriesInDiscoverForYouEnabled] */

undefined8 FUN_105a1483c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x200);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a1487c; end: 105a14893; -[SCStoriesConfigProviderImplementation enableSSPfor4thTabSpotlight] */

void FUN_105a1487c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e170f8,1,0);
  return;
}



/* Entry: 105a14894; end: 105a148ff; -[SCStoriesConfigProviderImplementation stringForKey:] */

void FUN_105a14894(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c25d300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a14900; end: 105a14963; -[SCStoriesConfigProviderImplementation intForKey:] */

undefined8 FUN_105a14900(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c067e20();
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 105a14964; end: 105a149c7; -[SCStoriesConfigProviderImplementation floatForKey:] */

undefined8 FUN_105a14964(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c20();
  _objc_release(param_4);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105a149c8; end: 105a14a33; -[SCStoriesConfigProviderImplementation protoForKey:] */

void FUN_105a149c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c1191e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


