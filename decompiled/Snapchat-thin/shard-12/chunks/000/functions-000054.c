/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108cbb5ec; end: 108cbb61b; -[SCPreviewConfiguration setMusicSessionId:] */

void FUN_108cbb5ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x3f0);
  *(undefined8 *)(param_1 + 0x3f0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb61c; end: 108cbb623; -[SCPreviewConfiguration shouldUseSinglePlayerForPlayback] */

undefined1 FUN_108cbb61c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xaf);
}



/* Entry: 108cbb624; end: 108cbb62b; -[SCPreviewConfiguration setShouldUseSinglePlayerForPlayback:] */

void FUN_108cbb624(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xaf) = param_3;
  return;
}



/* Entry: 108cbb62c; end: 108cbb633; -[SCPreviewConfiguration auraProfileInfo] */

undefined8 FUN_108cbb62c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x3f8);
}



/* Entry: 108cbb634; end: 108cbb663; -[SCPreviewConfiguration setAuraProfileInfo:] */

void FUN_108cbb634(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x3f8);
  *(undefined8 *)(param_1 + 0x3f8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb664; end: 108cbb66b; -[SCPreviewConfiguration lensCameraPresenterSource] */

undefined8 FUN_108cbb664(long param_1)

{
  return *(undefined8 *)(param_1 + 0x400);
}



/* Entry: 108cbb66c; end: 108cbb673; -[SCPreviewConfiguration remixConfiguration] */

undefined8 FUN_108cbb66c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x408);
}



/* Entry: 108cbb674; end: 108cbb67b; -[SCPreviewConfiguration setRemixConfiguration:] */

void FUN_108cbb674(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cbb67c; end: 108cbb683; -[SCPreviewConfiguration repostConfiguration] */

undefined8 FUN_108cbb67c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x410);
}



/* Entry: 108cbb684; end: 108cbb68b; -[SCPreviewConfiguration setRepostConfiguration:] */

void FUN_108cbb684(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cbb68c; end: 108cbb6a3; -[SCPreviewConfiguration directorModeThumbnailsFeature] */

void FUN_108cbb68c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x418);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cbb6a4; end: 108cbb6af; -[SCPreviewConfiguration setDirectorModeThumbnailsFeature:] */

void FUN_108cbb6a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x418,param_3);
  return;
}



/* Entry: 108cbb6b0; end: 108cbb6b7; -[SCPreviewConfiguration externalShareDreamsMetadata] */

undefined8 FUN_108cbb6b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x420);
}



/* Entry: 108cbb6b8; end: 108cbb6e7; -[SCPreviewConfiguration setExternalShareDreamsMetadata:] */

void FUN_108cbb6b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x420);
  *(undefined8 *)(param_1 + 0x420) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb6e8; end: 108cbb6ef; -[SCPreviewConfiguration preselectFriendsUsersInSnap] */

undefined8 FUN_108cbb6e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x428);
}



/* Entry: 108cbb6f0; end: 108cbb6f7; -[SCPreviewConfiguration setPreselectFriendsUsersInSnap:] */

void FUN_108cbb6f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cbb6f8; end: 108cbb6ff; -[SCPreviewConfiguration lensMusicRecommendation] */

undefined8 FUN_108cbb6f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x430);
}



/* Entry: 108cbb700; end: 108cbb72f; -[SCPreviewConfiguration setLensMusicRecommendation:] */

void FUN_108cbb700(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x430);
  *(undefined8 *)(param_1 + 0x430) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb730; end: 108cbb737; -[SCPreviewConfiguration isImageGeneratedByTextToImage] */

undefined1 FUN_108cbb730(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb0);
}



/* Entry: 108cbb738; end: 108cbb73f; -[SCPreviewConfiguration setIsImageGeneratedByTextToImage:] */

void FUN_108cbb738(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb0) = param_3;
  return;
}



/* Entry: 108cbb740; end: 108cbb747; -[SCPreviewConfiguration compositeStoryId] */

undefined8 FUN_108cbb740(long param_1)

{
  return *(undefined8 *)(param_1 + 0x438);
}



/* Entry: 108cbb748; end: 108cbb777; -[SCPreviewConfiguration setCompositeStoryId:] */

void FUN_108cbb748(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x438);
  *(undefined8 *)(param_1 + 0x438) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb778; end: 108cbb77f; -[SCPreviewConfiguration snapId] */

undefined8 FUN_108cbb778(long param_1)

{
  return *(undefined8 *)(param_1 + 0x440);
}



/* Entry: 108cbb780; end: 108cbb7af; -[SCPreviewConfiguration setSnapId:] */

void FUN_108cbb780(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x440);
  *(undefined8 *)(param_1 + 0x440) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb7b0; end: 108cbb7b7; -[SCPreviewConfiguration mediaSources] */

undefined8 FUN_108cbb7b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x448);
}



/* Entry: 108cbb7b8; end: 108cbb7e7; -[SCPreviewConfiguration setMediaSources:] */

void FUN_108cbb7b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x448);
  *(undefined8 *)(param_1 + 0x448) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb7e8; end: 108cbb7ef; -[SCPreviewConfiguration preselectedItems] */

undefined8 FUN_108cbb7e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x450);
}



/* Entry: 108cbb7f0; end: 108cbb7f7; -[SCPreviewConfiguration setPreselectedItems:] */

void FUN_108cbb7f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cbb7f8; end: 108cbb7ff; -[SCPreviewConfiguration shouldOnlyDoSendTo] */

undefined1 FUN_108cbb7f8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb1);
}



/* Entry: 108cbb800; end: 108cbb807; -[SCPreviewConfiguration setShouldOnlyDoSendTo:] */

void FUN_108cbb800(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb1) = param_3;
  return;
}



/* Entry: 108cbb808; end: 108cbb80f; -[SCPreviewConfiguration forceSendToStoriesIncluded] */

undefined1 FUN_108cbb808(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb2);
}



/* Entry: 108cbb810; end: 108cbb817; -[SCPreviewConfiguration setForceSendToStoriesIncluded:] */

void FUN_108cbb810(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb2) = param_3;
  return;
}



/* Entry: 108cbb818; end: 108cbb81f; -[SCPreviewConfiguration shouldSendTextModeAsChatMedia] */

undefined1 FUN_108cbb818(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb3);
}



/* Entry: 108cbb820; end: 108cbb827; -[SCPreviewConfiguration setShouldSendTextModeAsChatMedia:] */

void FUN_108cbb820(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb3) = param_3;
  return;
}



/* Entry: 108cbb828; end: 108cbb82f; -[SCPreviewConfiguration allowSharingAfterSave] */

undefined1 FUN_108cbb828(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb4);
}



/* Entry: 108cbb830; end: 108cbb837; -[SCPreviewConfiguration isPreuploadTriggeredInPreview] */

undefined1 FUN_108cbb830(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb5);
}



/* Entry: 108cbb838; end: 108cbb83f; -[SCPreviewConfiguration setIsPreuploadTriggeredInPreview:] */

void FUN_108cbb838(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb5) = param_3;
  return;
}



/* Entry: 108cbb840; end: 108cbb847; -[SCPreviewConfiguration userIdForBitmojiUserShare] */

undefined8 FUN_108cbb840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x458);
}



/* Entry: 108cbb848; end: 108cbb877; -[SCPreviewConfiguration setUserIdForBitmojiUserShare:] */

void FUN_108cbb848(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x458);
  *(undefined8 *)(param_1 + 0x458) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb878; end: 108cbb87f; -[SCPreviewConfiguration encodedOutfitForBitmojiUserShare] */

undefined8 FUN_108cbb878(long param_1)

{
  return *(undefined8 *)(param_1 + 0x460);
}



/* Entry: 108cbb880; end: 108cbb8af; -[SCPreviewConfiguration setEncodedOutfitForBitmojiUserShare:] */

void FUN_108cbb880(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x460);
  *(undefined8 *)(param_1 + 0x460) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb8b0; end: 108cbb8b7; -[SCPreviewConfiguration isFromLockScreenDeepLink] */

undefined1 FUN_108cbb8b0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb6);
}



/* Entry: 108cbb8b8; end: 108cbb8bf; -[SCPreviewConfiguration setIsFromLockScreenDeepLink:] */

void FUN_108cbb8b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb6) = param_3;
  return;
}



/* Entry: 108cbb8c0; end: 108cbb8c7; -[SCPreviewConfiguration lockScreenLaunchTarget] */

undefined8 FUN_108cbb8c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x468);
}



/* Entry: 108cbb8c8; end: 108cbb8f7; -[SCPreviewConfiguration setLockScreenLaunchTarget:] */

void FUN_108cbb8c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x468);
  *(undefined8 *)(param_1 + 0x468) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb8f8; end: 108cbb8ff; -[SCPreviewConfiguration isAspectRatio4By3ModeActive] */

undefined1 FUN_108cbb8f8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb7);
}



/* Entry: 108cbb900; end: 108cbb907; -[SCPreviewConfiguration setIsAspectRatio4By3ModeActive:] */

void FUN_108cbb900(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb7) = param_3;
  return;
}



/* Entry: 108cbb908; end: 108cbb90f; -[SCPreviewConfiguration shouldShowMerlinOnboarding] */

undefined1 FUN_108cbb908(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb8);
}



/* Entry: 108cbb910; end: 108cbb917; -[SCPreviewConfiguration setShouldShowMerlinOnboarding:] */

void FUN_108cbb910(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb8) = param_3;
  return;
}



/* Entry: 108cbb918; end: 108cbb91f; -[SCPreviewConfiguration shouldShowNewMerlinOnboarding] */

undefined1 FUN_108cbb918(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb9);
}



/* Entry: 108cbb920; end: 108cbb927; -[SCPreviewConfiguration setShouldShowNewMerlinOnboarding:] */

void FUN_108cbb920(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb9) = param_3;
  return;
}



/* Entry: 108cbb928; end: 108cbb92f; -[SCPreviewConfiguration preselectCaptionToolFromMyAIQuickCapture] */

undefined1 FUN_108cbb928(long param_1)

{
  return *(undefined1 *)(param_1 + 0xba);
}



/* Entry: 108cbb930; end: 108cbb937; -[SCPreviewConfiguration setPreselectCaptionToolFromMyAIQuickCapture:] */

void FUN_108cbb930(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xba) = param_3;
  return;
}



/* Entry: 108cbb938; end: 108cbb93f; -[SCPreviewConfiguration shouldForceSendAsSnap] */

undefined1 FUN_108cbb938(long param_1)

{
  return *(undefined1 *)(param_1 + 0xbb);
}



/* Entry: 108cbb940; end: 108cbb947; -[SCPreviewConfiguration setShouldForceSendAsSnap:] */

void FUN_108cbb940(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xbb) = param_3;
  return;
}



/* Entry: 108cbb948; end: 108cbb94f; -[SCPreviewConfiguration importedContentId] */

undefined8 FUN_108cbb948(long param_1)

{
  return *(undefined8 *)(param_1 + 0x470);
}



/* Entry: 108cbb950; end: 108cbb97f; -[SCPreviewConfiguration setImportedContentId:] */

void FUN_108cbb950(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x470);
  *(undefined8 *)(param_1 + 0x470) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb980; end: 108cbb987; -[SCPreviewConfiguration aiModeConfig] */

undefined8 FUN_108cbb980(long param_1)

{
  return *(undefined8 *)(param_1 + 0x478);
}



/* Entry: 108cbb988; end: 108cbb9b7; -[SCPreviewConfiguration setAiModeConfig:] */

void FUN_108cbb988(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x478);
  *(undefined8 *)(param_1 + 0x478) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb9b8; end: 108cbbf23; -[SCPreviewConfiguration .cxx_destruct] */

void FUN_108cbb9b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x478,0);
  _objc_storeStrong(param_1 + 0x470,0);
  _objc_storeStrong(param_1 + 0x468,0);
  _objc_storeStrong(param_1 + 0x460,0);
  _objc_storeStrong(param_1 + 0x458,0);
  _objc_storeStrong(param_1 + 0x450,0);
  _objc_storeStrong(param_1 + 0x448,0);
  _objc_storeStrong(param_1 + 0x440,0);
  _objc_storeStrong(param_1 + 0x438,0);
  _objc_storeStrong(param_1 + 0x430,0);
  _objc_storeStrong(param_1 + 0x428,0);
  _objc_storeStrong(param_1 + 0x420,0);
  _objc_destroyWeak(param_1 + 0x418);
  _objc_storeStrong(param_1 + 0x410,0);
  _objc_storeStrong(param_1 + 0x408,0);
  _objc_storeStrong(param_1 + 0x3f8,0);
  _objc_storeStrong(param_1 + 0x3f0,0);
  _objc_storeStrong(param_1 + 1000,0);
  _objc_storeStrong(param_1 + 0x3e0,0);
  _objc_storeStrong(param_1 + 0x3d8,0);
  _objc_storeStrong(param_1 + 0x3d0,0);
  _objc_storeStrong(param_1 + 0x3c8,0);
  _objc_storeStrong(param_1 + 0x3c0,0);
  _objc_storeStrong(param_1 + 0x3b8,0);
  _objc_storeStrong(param_1 + 0x3b0,0);
  _objc_storeStrong(param_1 + 0x3a8,0);
  _objc_storeStrong(param_1 + 0x3a0,0);
  _objc_storeStrong(param_1 + 0x398,0);
  _objc_storeStrong(param_1 + 0x390,0);
  _objc_storeStrong(param_1 + 0x388,0);
  _objc_storeStrong(param_1 + 0x380,0);
  _objc_storeStrong(param_1 + 0x378,0);
  _objc_storeStrong(param_1 + 0x370,0);
  _objc_storeStrong(param_1 + 0x360,0);
  _objc_storeStrong(param_1 + 0x358,0);
  _objc_storeStrong(param_1 + 0x350,0);
  _objc_storeStrong(param_1 + 0x348,0);
  _objc_storeStrong(param_1 + 0x340,0);
  _objc_storeStrong(param_1 + 0x338,0);
  _objc_storeStrong(param_1 + 0x330,0);
  _objc_storeStrong(param_1 + 0x328,0);
  _objc_storeStrong(param_1 + 800,0);
  _objc_storeStrong(param_1 + 0x318,0);
  _objc_storeStrong(param_1 + 0x310,0);
  _objc_storeStrong(param_1 + 0x308,0);
  _objc_storeStrong(param_1 + 0x300,0);
  _objc_storeStrong(param_1 + 0x2f8,0);
  _objc_storeStrong(param_1 + 0x2f0,0);
  _objc_storeStrong(param_1 + 0x2e8,0);
  _objc_storeStrong(param_1 + 0x2e0,0);
  _objc_storeStrong(param_1 + 0x2d0,0);
  _objc_storeStrong(param_1 + 0x2c8,0);
  _objc_storeStrong(param_1 + 0x2c0,0);
  _objc_storeStrong(param_1 + 0x2b8,0);
  _objc_storeStrong(param_1 + 0x2b0,0);
  _objc_storeStrong(param_1 + 0x2a8,0);
  _objc_storeStrong(param_1 + 0x2a0,0);
  _objc_storeStrong(param_1 + 0x298,0);
  _objc_storeStrong(param_1 + 0x290,0);
  _objc_storeStrong(param_1 + 0x288,0);
  _objc_storeStrong(param_1 + 0x280,0);
  _objc_storeStrong(param_1 + 0x278,0);
  _objc_storeStrong(param_1 + 0x270,0);
  _objc_storeStrong(param_1 + 0x268,0);
  _objc_storeStrong(param_1 + 0x260,0);
  _objc_storeStrong(param_1 + 0x250,0);
  _objc_storeStrong(param_1 + 0x248,0);
  _objc_storeStrong(param_1 + 0x240,0);
  _objc_storeStrong(param_1 + 0x238,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108cbbf24; end: 108cbbfab; -[SCPreviewConfigurationListener initWithKeys:commitBlock:] */

undefined1 *
FUN_108cbbf24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe298;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108cbbfac; end: 108cbbfb3; -[SCPreviewConfigurationListener keys] */

undefined8 FUN_108cbbfac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cbbfb4; end: 108cbbfbb; -[SCPreviewConfigurationListener commitBlock] */

undefined8 FUN_108cbbfb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cbbfbc; end: 108cbbfc7; -[SCPreviewConfigurationListener .cxx_destruct] */

void FUN_108cbbfbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108cbbfc8; end: 108cbc06b; -[SCPreviewDepthDataLoaderDependenciesContainerImpl initWithDepthDataForGallerySnaps:primarySnap:] */

undefined1 *
FUN_108cbbfc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe2a0;
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



/* Entry: 108cbc06c; end: 108cbc073; -[SCPreviewDepthDataLoaderDependenciesContainerImpl gallerySnaps] */

undefined8 FUN_108cbc06c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cbc074; end: 108cbc0a3; -[SCPreviewDepthDataLoaderDependenciesContainerImpl setGallerySnaps:] */

void FUN_108cbc074(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbc0a4; end: 108cbc0ab; -[SCPreviewDepthDataLoaderDependenciesContainerImpl primarySnap] */

undefined8 FUN_108cbc0a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cbc0ac; end: 108cbc0db; -[SCPreviewDepthDataLoaderDependenciesContainerImpl setPrimarySnap:] */

void FUN_108cbc0ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbc0dc; end: 108cbc10b; -[SCPreviewDepthDataLoaderDependenciesContainerImpl .cxx_destruct] */

void FUN_108cbc0dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cbc10c; end: 108cbc13b; +[SCPreviewSaveButtonContextToken tokenWithValue:] */

void FUN_108cbc10c(void)

{
  _objc_alloc(PTR_PTR_1126db9f8);
  func_0x00010c054020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cbc13c; end: 108cbc183; -[SCPreviewSaveButtonContextToken initWithTokenValue:] */

void FUN_108cbc13c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe2a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 108cbc184; end: 108cbc18b; -[SCPreviewSaveButtonContextToken tokenValue] */

undefined8 FUN_108cbc184(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cbc18c; end: 108cbc193; -[SCPreviewSaveButtonContextToken setTokenValue:] */

void FUN_108cbc18c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108cbc194; end: 108cbc2ef; -[SCPreviewSaveButtonController initWithSaveButton:previewABProvider:configuration:actionBarConfiguration:actionBarScopeMode:] */

undefined1 *
FUN_108cbc194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  puStack_58 = PTR_PTR_1126fe2b0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b33c0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c160fc0(uVar2);
    func_0x000108ededf8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)((long)puVar1 + 8));
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x68) = 0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x50),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x60) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cbc2f0; end: 108cbc333; -[SCPreviewSaveButtonController dealloc] */

void FUN_108cbc2f0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be92140();
  puStack_28 = PTR_PTR_1126fe2b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108cbc334; end: 108cbc38b; -[SCPreviewSaveButtonController reset] */

void FUN_108cbc334(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be92140();
  func_0x000108ede8b8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286de0(*(undefined8 *)(param_1 + 8),param_2,lVar1,0);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110f01a78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108cbc38c; end: 108cbc44f; -[SCPreviewSaveButtonController didStartSavingWithTooltipText:] */

void FUN_108cbc38c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010be92140(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfec280(uVar1);
  uVar2 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _objc_release(uVar3);
  func_0x00010c21e900(*(undefined8 *)(param_1 + 8));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + 8));
  func_0x00010c24dca0(*(undefined8 *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x68) = 1;
  func_0x00010be35ec0(0,param_1);
  func_0x00010bebb7e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c273330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126db9f8,PTR_s_tokenWithValue__11267a6f0,(long)(int)uVar1);
  return;
}



/* Entry: 108cbc450; end: 108cbc56b; -[SCPreviewSaveButtonController didFinishSavingSucceeded:tooltipText:isSavedTooltipEnabled:token:] */

void FUN_108cbc450(long param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5,
                  long param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  func_0x00010c273300();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x00010c296d80();
  if (param_6 == iVar1) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    _objc_release(uVar4);
    *(undefined1 *)(param_1 + 0x68) = 0;
    if (param_3 == 0) {
      func_0x00010be92140(param_1);
    }
    else {
      func_0x00010c1f5b00(param_1,param_2,1);
      func_0x00010c24dcc0(*(undefined8 *)(param_1 + 8));
      lVar3 = param_1;
      func_0x00010be35ec0(0,param_1,param_2,0,0);
      if (param_5 != 0) {
        func_0x00010bebb7e0(param_1,param_2,1,0);
        lVar3 = param_1;
        func_0x00010be35ec0(0x3fe0000000000000,param_1,param_2,1,1);
      }
      func_0x000108ede8d0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c286de0(*(undefined8 *)(param_1 + 8),param_2,lVar3,0);
      func_0x00010c160fc0(*(undefined8 *)(param_1 + 8),param_2,
                          &PTR____CFConstantStringClassReference_110f03178);
      _objc_release(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108cbc56c; end: 108cbc68f; -[SCPreviewSaveButtonController setSaved:] */

void FUN_108cbc56c(long param_1,undefined8 param_2,uint param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf91a20();
  _objc_release(uVar2);
  *(char *)(param_1 + 0x69) = (char)param_3;
  lVar3 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf014e0();
  func_0x00010c21e900(*(undefined8 *)(param_1 + 8));
  _objc_release(lVar3);
  lVar3 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf014e0();
  func_0x00010c195460(*(undefined8 *)(param_1 + 8));
  _objc_release(lVar3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1f5b00(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  if ((param_3 & 1) == 0) {
    func_0x000108ede8b8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108ede8d0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c286de0(uVar4);
  _objc_release(uVar2);
  ppuVar1 = &PTR_PTR_110aca510;
  if (param_3 == 0) {
    ppuVar1 = &PTR_PTR_110aca508;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setAccessibilityIdentifier__112635e10,*ppuVar1);
  return;
}



/* Entry: 108cbc690; end: 108cbc6cf; -[SCPreviewSaveButtonController setFirstTimeTooltip:] */

void FUN_108cbc690(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bebb7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showToolTipWithType_animated__11258c7a0,2,0)
  ;
  return;
}



/* Entry: 108cbc6d0; end: 108cbc74f; -[SCPreviewSaveButtonController _reset] */

void FUN_108cbc6d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfec280(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c1f5b00(param_1,param_2,0);
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  return;
}



/* Entry: 108cbc750; end: 108cbc98f; -[SCPreviewSaveButtonController _showToolTipWithType:animated:] */

void FUN_108cbc750(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined1 uStack_58;
  
  puVar3 = PTR_PTR_1126b6950;
  _objc_alloc();
  dVar7 = *(double *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(dVar7,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  if (param_3 == 2) {
    _objc_retain(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar3;
    _objc_release(uVar4);
    func_0x00010c212f20(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    if (param_3 == 1) {
      _objc_retain(puVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar3;
      _objc_release(uVar4);
      func_0x00010c212f20(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x18));
      ppuVar6 = &PTR____CFConstantStringClassReference_110f03a38;
      uVar4 = *(undefined8 *)(param_1 + 0x30);
    }
    else {
      if (param_3 != 0) goto LAB_108cbc83c;
      _objc_retain(puVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      *(undefined **)(param_1 + 0x28) = puVar3;
      _objc_release(uVar4);
      func_0x00010c212f20(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x10));
      ppuVar6 = &PTR____CFConstantStringClassReference_110f03a18;
      uVar4 = *(undefined8 *)(param_1 + 0x28);
    }
    func_0x00010c160fc0(uVar4,param_2,ppuVar6);
  }
LAB_108cbc83c:
  lVar5 = *(long *)(param_1 + 8);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0 && lVar5 != 0) {
    func_0x00010befbb60(lVar5,param_2,puVar3);
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + 8));
    _CGRectGetMidX();
    dVar9 = dVar7;
    func_0x00010bf20c00(lVar5);
    _CGRectGetMinX();
    dVar7 = dVar7 - dVar9;
    dVar9 = dVar7 + dVar7;
    func_0x00010c0699c0(puVar3);
    uStack_58 = dVar9 < dVar7;
    if (dVar7 <= dVar9) {
      uVar8 = 0;
      uVar4 = 4;
    }
    else {
      uVar8 = 0x403e000000000000;
      uVar4 = 3;
    }
    func_0x00010c21a1e0(uVar8,puVar3,param_2,uVar4);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_108cbc990;
    puStack_68 = &UNK_11086b060;
    lStack_60 = param_1;
    func_0x00010c0bbfc0(puVar3,param_2,&puStack_80);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (param_4 != 0) {
      func_0x00010c1677c0(0,puVar3);
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      puStack_a8 = puVar1;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_108cbcb98;
      puStack_90 = &UNK_110842e18;
      _objc_retain(puVar3);
      puStack_88 = puVar3;
      func_0x00010bf03400(0x3fc53f7ced916873,puVar2,param_2,&puStack_a8);
      _objc_release(puStack_88);
    }
  }
  _objc_release(lVar5);
  _objc_release(puVar3);
  return;
}



/* Entry: 108cbc990; end: 108cbcb97;  */

void FUN_108cbc990(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  cVar1 = *(char *)(param_1 + 0x28);
  _objc_retain(param_2);
  lVar6 = param_2;
  if (cVar1 == '\x01') {
    func_0x00010c08e360();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c0bbec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    (**(code **)(lVar7 + 0x10))(lVar7,uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2a7440();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(0xc03e000000000000);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
  }
  else {
    func_0x00010bf34840();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar7 + 0x10))();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar7 = lVar6;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c0bbee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  (**(code **)(lVar7 + 0x10))(lVar7,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc03e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 108cbcb98; end: 108cbcba3;  */

void FUN_108cbcb98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108cbcba4; end: 108cbccbb; -[SCPreviewSaveButtonController _hideToolTipWithType:afterDelay:animated:] */

void FUN_108cbcba4(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,int param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  if (param_4 < 3) {
    param_2 = param_2 + param_4 * 8;
    lVar3 = *(long *)(param_2 + 0x28);
    _objc_retain(lVar3);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = 0;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar3 != 0) {
      uVar2 = 0x3fc53f7ced916873;
      if (param_5 == 0) {
        uVar2 = 0;
      }
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_108cbccbc;
      puStack_60 = &UNK_110842e18;
      _objc_retain(lVar3);
      uStack_98 = 0xc2000000;
      uStack_90 = 0x108cbccc8;
      puStack_88 = &UNK_110841f20;
      lStack_80 = lVar3;
      lStack_58 = lVar3;
      _objc_retain(lVar3);
      func_0x00010bf03440(uVar2,param_1,puVar1,param_3,0x30000,&puStack_78,&puStack_a0);
      _objc_release(lStack_80);
      _objc_release(lStack_58);
      _objc_release(lVar3);
    }
  }
  return;
}



/* Entry: 108cbccbc; end: 108cbcccf;  */

void FUN_108cbccbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108cbccd0; end: 108cbccd7; -[SCPreviewSaveButtonController isSaveInProgress] */

undefined1 FUN_108cbccd0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x68);
}



/* Entry: 108cbccd8; end: 108cbccdf; -[SCPreviewSaveButtonController isSaved] */

undefined1 FUN_108cbccd8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x69);
}



/* Entry: 108cbcce0; end: 108cbcce7; -[SCPreviewSaveButtonController isExportCompleted] */

undefined1 FUN_108cbcce0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x6a);
}



/* Entry: 108cbcce8; end: 108cbccef; -[SCPreviewSaveButtonController setIsExportCompleted:] */

void FUN_108cbcce8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x6a) = param_3;
  return;
}



/* Entry: 108cbccf0; end: 108cbcd87; -[SCPreviewSaveButtonController .cxx_destruct] */

void FUN_108cbccf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
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



/* Entry: 108cbcd88; end: 108cbcdbb; -[SCLoggableGrowingButton setEnabled:] */

void FUN_108cbcd88(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fe2b8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_setEnabled__112642f38);
  return;
}



/* Entry: 108cbcdbc; end: 108cbcdef; -[SCLoggableGrowingButton setHidden:] */

void FUN_108cbcdbc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fe2b8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 108cbcdf0; end: 108cbcdf3; -[SCPreviewFooterView componentView] */

void FUN_108cbcdf0(void)

{
  return;
}



/* Entry: 108cbcdf4; end: 108cbce0b; -[SCPreviewFooterView preferredHeight] */

undefined8 FUN_108cbcdf4(void)

{
  undefined8 in_d3;
  
  func_0x00010bfb68e0();
  return in_d3;
}



/* Entry: 108cbce0c; end: 108cbcf53; -[SCPreviewLoadingOverlayView initWithFrame:loadingIndicator:] */

undefined8 *
FUN_108cbce0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fe2c0;
  puVar1 = &uStack_60;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    if (param_7 != 0) {
      func_0x00010befbb60(puVar1);
      _objc_retain(puVar1);
      func_0x00010c0bbfc0(param_7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c24dbc0(param_7);
      _objc_release(puVar1);
    }
  }
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 108cbcf54; end: 108cbcfbb;  */

void FUN_108cbcf54(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108cbcfbc; end: 108cbe4cf; -[SCPreviewView initWithFrame:configuration:maxMediaAreaFrame:sendConfirmationViewProvider:delegate:bitmojiSelfieFetcher:myStoriesDataCoordinator:publicStoriesDataCoordinator:customStoriesDataFetcher:previewABProvider:circumstanceEngine:complianceEngine:sendToExperimentConfiguration:sendToUIConfiguration:footerColor:previewExportServices:grapheneRegistry:featureSettingsService:actionBarConfiguration:creativeToolsABProvider:unifiedToolbarServices:filterUIStateProvider:memoriesExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108cbcfbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,double param_7,double param_8,undefined8 param_9,
             undefined8 param_10,ulong param_11,undefined8 param_12,undefined **param_13,
             undefined8 param_14,undefined **param_15,undefined **param_16,undefined8 param_17,
             undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
             undefined8 param_22,undefined8 param_23,undefined8 param_24,undefined8 param_25,
             undefined8 param_26,undefined8 param_27,undefined8 param_28,undefined8 param_29,
             long param_30,undefined8 param_31)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  long lVar29;
  long lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  puStack_100 = PTR_PTR_1126fe2c8;
  puVar1 = &uStack_108;
  uStack_108 = param_9;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  ppuVar26 = param_13;
  ppuVar27 = param_15;
  ppuVar28 = param_16;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar19 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277a388);
    *(undefined **)((long)puVar1 + (long)_DAT_11277a388) = puVar2;
    _objc_release(uVar19);
    lVar20 = (long)_DAT_11277a38c;
    _objc_storeWeak((long)puVar1 + lVar20,param_13);
    lVar22 = (long)_DAT_11277a390;
    _objc_retain(param_12);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = param_12;
    _objc_release(uVar19);
    lVar22 = (long)_DAT_11277a394;
    _objc_storeWeak((long)puVar1 + lVar22,param_11);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar19 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277a398);
    *(undefined **)((long)puVar1 + (long)_DAT_11277a398) = puVar2;
    _objc_release(uVar19);
    lVar23 = (long)_DAT_11277a39c;
    _objc_retain(param_14);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined8 *)((long)puVar1 + lVar23) = param_14;
    _objc_release(uVar19);
    lVar23 = (long)_DAT_11277a3a0;
    _objc_retain(param_15);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined ***)((long)puVar1 + lVar23) = param_15;
    _objc_release(uVar19);
    lVar23 = (long)_DAT_11277a3a4;
    _objc_retain(param_16);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined ***)((long)puVar1 + lVar23) = param_16;
    _objc_release(uVar19);
    lVar23 = (long)_DAT_11277a3a8;
    _objc_retain(param_17);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined8 *)((long)puVar1 + lVar23) = param_17;
    _objc_release(uVar19);
    lVar23 = (long)_DAT_11277a3ac;
    _objc_retain(param_18);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined8 *)((long)puVar1 + lVar23) = param_18;
    _objc_release(uVar19);
    lVar23 = (long)_DAT_11277a3b0;
    _objc_retain(param_19);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined8 *)((long)puVar1 + lVar23) = param_19;
    _objc_release(uVar19);
    lVar23 = (long)_DAT_11277a3b4;
    _objc_retain(param_20);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined8 *)((long)puVar1 + lVar23) = param_20;
    _objc_release(uVar19);
    lVar23 = (long)_DAT_11277a3b8;
    _objc_retain(param_21);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined8 *)((long)puVar1 + lVar23) = param_21;
    _objc_release(uVar19);
    lVar23 = (long)_DAT_11277a3bc;
    _objc_retain(param_22);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined8 *)((long)puVar1 + lVar23) = param_22;
    _objc_release(uVar19);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277a3c0) = param_23;
    lVar23 = (long)_DAT_11277a3c4;
    _objc_retain(param_24);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined8 *)((long)puVar1 + lVar23) = param_24;
    _objc_release(uVar19);
    lVar23 = (long)_DAT_11277a3c8;
    _objc_retain(param_25);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined8 *)((long)puVar1 + lVar23) = param_25;
    _objc_release(uVar19);
    lVar23 = (long)_DAT_11277a3cc;
    _objc_retain(param_26);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined8 *)((long)puVar1 + lVar23) = param_26;
    _objc_release(uVar19);
    lVar23 = (long)_DAT_11277a3d0;
    _objc_retain(param_27);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined8 *)((long)puVar1 + lVar23) = param_27;
    _objc_release(uVar19);
    lVar23 = (long)_DAT_11277a3d4;
    _objc_retain(param_28);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined8 *)((long)puVar1 + lVar23) = param_28;
    _objc_release(uVar19);
    lVar30 = (long)_DAT_11277a3d8;
    _objc_retain(param_29);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar30);
    *(undefined8 *)((long)puVar1 + lVar30) = param_29;
    _objc_release(uVar19);
    lVar23 = (long)_DAT_11277a3dc;
    _objc_retain(param_31);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined8 *)((long)puVar1 + lVar23) = param_31;
    _objc_release(uVar19);
    func_0x00010c21e900(puVar1);
    func_0x00010c160fe0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(param_5,param_6,param_7,param_8);
    lVar23 = (long)_DAT_11277a3e0;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined **)((long)puVar1 + lVar23) = puVar2;
    _objc_release(uVar19);
    uVar3 = *(ulong *)((long)puVar1 + lVar23);
    func_0x00010c160fc0();
    uVar19 = param_1;
    uVar11 = param_2;
    uVar13 = param_3;
    uVar12 = param_4;
    _CGRectEqualToRect();
    if ((uVar3 & 1) == 0) {
      func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar23));
    }
    uVar4 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar4;
    func_0x00010c0bc300();
    *(char *)((long)puVar1 + (long)_DAT_11277a3e4) = (char)uVar25;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010bdc65e0(puVar1);
    puVar5 = puVar1;
    func_0x00010bf13d40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar23));
    _objc_release(puVar5);
    lVar24 = (long)_DAT_11277a3e8;
    func_0x00010bf20c00(*(undefined8 *)((long)puVar1 + lVar23));
    puVar5 = (undefined8 *)((long)puVar1 + lVar24);
    *puVar5 = uVar19;
    puVar5[1] = uVar11;
    puVar5[2] = uVar13;
    puVar5[3] = uVar12;
    puVar2 = PTR_PTR_1126dba00;
    _objc_alloc();
    dVar32 = param_7;
    dVar33 = param_8;
    func_0x00010c013de0(param_5,param_6);
    lVar23 = (long)_DAT_11277a3ec;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined **)((long)puVar1 + lVar23) = puVar2;
    _objc_release(uVar19);
    uVar3 = param_11;
    func_0x00010c2485a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf91760();
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
    if ((int)uVar6 != 0) {
      uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
      func_0x00010bf20c00(uVar19);
      dVar31 = 0.0;
      if (dVar32 != 0.0) {
        if (dVar33 == 0.0) {
          dVar31 = INFINITY;
        }
        else {
          dVar31 = dVar32 / dVar33;
        }
      }
      func_0x00010c11cae0(dVar31,puVar2);
      func_0x00010c166d60(uVar19);
    }
    func_0x00010bdc61e0(puVar1);
    puVar2 = PTR_PTR_1126c4b80;
    _objc_alloc();
    func_0x00010c013de0(param_5,param_6,param_7,param_8);
    lVar29 = (long)_DAT_11277a3f0;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar29);
    *(undefined **)((long)puVar1 + lVar29) = puVar2;
    _objc_release(uVar19);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar29));
    func_0x00010bdc70c0(puVar1);
    puVar2 = PTR_PTR_1126b1198;
    _objc_alloc();
    func_0x00010be974c0(puVar1);
    func_0x00010c013de0();
    lVar23 = (long)_DAT_11277a3f4;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined **)((long)puVar1 + lVar23) = puVar2;
    _objc_release(uVar19);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar23));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    puVar7 = puVar2;
    func_0x00010bdc0fe0();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_c0 = puVar7;
    func_0x00010bf41680(0,0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    puVar7 = puVar8;
    func_0x00010bdc0fe0();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b8 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010bfcd9c0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60();
    _objc_release(uVar19);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar2);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010bfcd9c0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209760(0,0x3fe0000000000000);
    _objc_release(uVar19);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010bfcd9c0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196020(0x3ff0000000000000,0x3fe0000000000000);
    _objc_release(uVar19);
    func_0x00010c066fe0(puVar1);
    puVar2 = PTR_PTR_1126b1198;
    _objc_alloc();
    func_0x00010bf20140(puVar1);
    func_0x00010c013de0();
    lVar24 = (long)_DAT_11277a3f8;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar24);
    *(undefined **)((long)puVar1 + lVar24) = puVar2;
    _objc_release(uVar19);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar24));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    puVar7 = puVar2;
    func_0x00010bdc0fe0();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_d8 = puVar7;
    func_0x00010bf41680(0,0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    puVar7 = puVar8;
    func_0x00010bdc0fe0();
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_d0 = puVar7;
    func_0x00010bf41680(0,0x3fc999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    puVar7 = puVar9;
    func_0x00010bdc0fe0();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_c8 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010bfcd9c0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60();
    _objc_release(uVar19);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar2);
    uVar19 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010bfcd9c0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bff00();
    _objc_release(uVar19);
    func_0x00010c066fe0(puVar1);
    uVar11 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010c273ba0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar22 = (long)puVar1 + lVar22;
    _objc_loadWeakRetained(lVar22);
    lVar23 = lVar22;
    func_0x00010c243320();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar11;
    func_0x00010bf59a20(uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(uVar11);
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4,uVar19);
    func_0x00010bdc8c20(puVar1);
    uVar11 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277a3fc);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fbe00();
    _objc_release(uVar11);
    _objc_release(uVar19);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277a400);
    *(undefined **)((long)puVar1 + (long)_DAT_11277a400) = puVar2;
    _objc_release(uVar19);
    puVar2 = PTR_PTR_1126dba08;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x404e000000000000,0x404e000000000000);
    lVar22 = (long)_DAT_11277a404;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined **)((long)puVar1 + lVar22) = puVar2;
    _objc_release(uVar19);
    func_0x00010c1aa420(0x4030000000000000,0x4030000000000000,*(undefined8 *)((long)puVar1 + lVar22)
                       );
    uVar19 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010c160fc0();
    func_0x00010b0af26c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)((long)puVar1 + lVar22));
    _objc_release(uVar19);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar29));
    uVar3 = param_11;
    func_0x00010c07e920();
    if ((uVar3 & 1) == 0) {
      uVar19 = *(undefined8 *)PTR__CGSizeZero_110347620;
      uVar11 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
      func_0x00010bf25cc0();
      _objc_retainAutoreleasedReturnValue();
      lVar23 = (long)_DAT_11277a408;
      uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
      *(undefined **)((long)puVar1 + lVar23) = puVar2;
      _objc_release(uVar19);
      func_0x00010c19f0e0(0,0,0x405e000000000000,0x404e000000000000,
                          *(undefined8 *)((long)puVar1 + lVar23));
      func_0x00010c181ee0(*(undefined8 *)((long)puVar1 + lVar23));
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar23));
      _objc_release(puVar2);
      func_0x00010c2163a0(0x401c000000000000,0x4042000000000000,0,0,
                          *(undefined8 *)((long)puVar1 + lVar23));
      puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf6d680(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
      func_0x00010c271420(uVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480();
      _objc_release(uVar19);
      _objc_release(puVar2);
      uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
      func_0x00010c271420(uVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c165e20();
      _objc_release(uVar19);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)((long)puVar1 + lVar23);
      func_0x00010c271420(uVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180();
      _objc_release(uVar19);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0(puVar2);
      uVar11 = *(undefined8 *)((long)puVar1 + lVar23);
      func_0x00010c271420(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar11;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe740();
      _objc_release(uVar19);
      _objc_release(uVar11);
      _objc_release(puVar2);
      uVar12 = *(undefined8 *)((long)puVar1 + lVar23);
      func_0x00010c271420(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)PTR__CGSizeZero_110347620;
      uVar11 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
      func_0x00010c1fe7a0(uVar19,uVar11);
      _objc_release(uVar13);
      _objc_release(uVar12);
      uVar12 = *(undefined8 *)((long)puVar1 + lVar23);
      func_0x00010c271420(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe840(0x4028000000000000);
      _objc_release(uVar13);
      _objc_release(uVar12);
      uVar12 = *(undefined8 *)((long)puVar1 + lVar23);
      func_0x00010c271420(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe800(0x3ee66666);
      _objc_release(uVar13);
      _objc_release(uVar12);
      puVar2 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
      _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
      puVar7 = puVar2;
      func_0x000108ede840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820(puVar2);
      _objc_release(puVar7);
      func_0x00010c08fa60(puVar2);
      uVar12 = *(undefined8 *)((long)puVar1 + lVar23);
      func_0x00010c271420(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010bfb3a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6f20(puVar2);
      _objc_release(uVar13);
      _objc_release(uVar12);
      uVar12 = *(undefined8 *)((long)puVar1 + lVar23);
      func_0x00010c271420(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010c26b920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6f20(puVar2);
      _objc_release(uVar13);
      _objc_release(uVar12);
      puVar7 = PTR__OBJC_CLASS___NSShadow_1126b6158;
      _objc_alloc_init(PTR__OBJC_CLASS___NSShadow_1126b6158);
      puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf414e0(0x3fc999999999999a);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe740(puVar7);
      _objc_release(puVar9);
      _objc_release(puVar8);
      func_0x00010c1fe7a0(uVar19,uVar11,puVar7);
      func_0x00010c1fe720(0x4000000000000000,puVar7);
      func_0x00010bef6f20(puVar2);
      uVar13 = *(undefined8 *)((long)puVar1 + lVar23);
      func_0x00010c160fc0(uVar13);
      func_0x000108ede840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161020(*(undefined8 *)((long)puVar1 + lVar23));
      _objc_release(uVar13);
      func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar23));
      func_0x00010c066fe0(*(undefined8 *)((long)puVar1 + lVar29));
      _objc_release(puVar7);
      _objc_release(puVar2);
    }
    puVar2 = PTR_PTR_1126b08d8;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar22);
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c30a24(0x402e000000000000,0x3fc3333333333333,uVar19,uVar11,puVar2,uVar13,puVar7);
    _objc_release(puVar7);
    puVar2 = PTR_PTR_1126c4b80;
    _objc_opt_new();
    lVar30 = (long)_DAT_11277a40c;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar30);
    *(undefined **)((long)puVar1 + lVar30) = puVar2;
    _objc_release(uVar19);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar30));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar29));
    lVar23 = *(long *)((long)puVar1 + (long)_DAT_11277a408);
    if (lVar23 == 0) {
      lVar23 = *(long *)((long)puVar1 + lVar22);
    }
    uVar21 = *(undefined8 *)((long)puVar1 + lVar29);
    uVar25 = *(undefined8 *)((long)puVar1 + lVar30);
    _objc_retain(lVar23);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274140(lVar23);
    uVar19 = uVar25;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uVar19;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0640(lVar23);
    uVar11 = uVar14;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar11;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010c08e400(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5040(lVar23);
    uVar13 = uVar15;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar13;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010c1408a0(uVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar17;
    func_0x00010bf493c0(0xc050400000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_e0 = uVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef79e0(uVar21);
    _objc_release(puVar2);
    _objc_release(uVar12);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar13);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar11);
    _objc_release(uVar14);
    _objc_release(uVar19);
    _objc_release(lVar23);
    _objc_release(uVar4);
    _objc_release(uVar25);
    puVar2 = PTR_PTR_1126c4b80;
    _objc_opt_new();
    uVar19 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277a410);
    *(undefined **)((long)puVar1 + (long)_DAT_11277a410) = puVar2;
    _objc_release(uVar19);
    func_0x00010befbb60(puVar1);
    puVar5 = puVar1;
    func_0x00010c235440();
    if (((ulong)puVar5 & 1) == 0) {
      func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar24));
      func_0x00010beae5c0(puVar1);
      lVar20 = (long)puVar1 + lVar20;
      _objc_loadWeakRetained(lVar20);
      func_0x00010c112420();
      _objc_release(lVar20);
    }
    else {
      func_0x00010beae300(puVar1);
    }
    func_0x00010bed3b00(puVar1);
    _objc_initWeak(auStack_110,puVar1);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_108cbe4d0;
    puStack_120 = &UNK_11084dd40;
    _objc_copyWeak(auStack_118,auStack_110);
    func_0x00010befa300(param_11);
    puStack_160 = puVar2;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_108cbe55c;
    puStack_148 = &UNK_11084dd40;
    ppuVar26 = &puStack_160;
    _objc_copyWeak(auStack_140,auStack_110);
    func_0x00010befa300(param_11);
    puStack_188 = puVar2;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_108cbe758;
    puStack_170 = &UNK_11084dd40;
    ppuVar28 = &puStack_188;
    _objc_copyWeak(auStack_168,auStack_110);
    func_0x00010befa300(param_11);
    puStack_1b0 = puVar2;
    uStack_1a8 = 0xc2000000;
    pcStack_1a0 = FUN_108cbe78c;
    puStack_198 = &UNK_11084dd40;
    ppuVar27 = &puStack_1b0;
    _objc_copyWeak(auStack_190,auStack_110);
    func_0x00010befa300(param_11);
    _objc_destroyWeak(auStack_190);
    _objc_destroyWeak(auStack_168);
    _objc_destroyWeak(auStack_140);
    _objc_destroyWeak(auStack_118);
    _objc_destroyWeak(auStack_110);
  }
  lVar22 = param_30;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar22;
  func_0x00010c06e320();
  _objc_release(lVar22);
  if ((int)lVar20 != 0) {
    func_0x00010be2e660(puVar1);
  }
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
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
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar27 + 4);
  _objc_destroyWeak(ppuVar28 + 4);
  _objc_destroyWeak(ppuVar26 + 4);
  _objc_destroyWeak(lVar20 + 0x20);
  _objc_destroyWeak(auStack_110);
  __Unwind_Resume();
  puVar1 = (undefined8 *)(param_11 + 0x20);
  _objc_loadWeakRetained();
  if (((puVar1 != (undefined8 *)0x0) && (*(long *)((long)puVar1 + (long)_DAT_11277a414) != 0)) &&
     (puVar5 = puVar1, func_0x00010c235440(), ((ulong)puVar5 & 1) == 0)) {
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + (long)_DAT_11277a3f8));
    func_0x00010be8c9e0(puVar1);
    func_0x00010beae5c0(puVar1);
    lVar22 = (long)puVar1 + (long)_DAT_11277a38c;
    _objc_loadWeakRetained(lVar22);
    func_0x00010c112420();
    _objc_release(lVar22);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 108cbe4d0; end: 108cbe55b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cbe4d0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((uVar1 != 0) && (*(long *)(uVar1 + (long)_DAT_11277a414) != 0)) &&
     (uVar2 = uVar1, func_0x00010c235440(), (uVar2 & 1) == 0)) {
    func_0x00010c1a7f60(*(undefined8 *)(uVar1 + (long)_DAT_11277a3f8),param_2,0);
    func_0x00010be8c9e0(uVar1);
    func_0x00010beae5c0(uVar1);
    lVar3 = uVar1 + (long)_DAT_11277a38c;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c112420();
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


