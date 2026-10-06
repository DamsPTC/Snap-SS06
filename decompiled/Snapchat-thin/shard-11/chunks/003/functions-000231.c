/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10844a70c; end: 10844a713; -[SCSnapCommonLoggingParameters setVoiceoverEnabled:] */

void FUN_10844a70c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x34) = param_3;
  return;
}



/* Entry: 10844a714; end: 10844a71b; -[SCSnapCommonLoggingParameters filterMotion] */

undefined8 FUN_10844a714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x418);
}



/* Entry: 10844a71c; end: 10844a723; -[SCSnapCommonLoggingParameters setFilterMotion:] */

void FUN_10844a71c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x418) = param_3;
  return;
}



/* Entry: 10844a724; end: 10844a72b; -[SCSnapCommonLoggingParameters filterReverse] */

undefined1 FUN_10844a724(long param_1)

{
  return *(undefined1 *)(param_1 + 0x35);
}



/* Entry: 10844a72c; end: 10844a733; -[SCSnapCommonLoggingParameters setFilterReverse:] */

void FUN_10844a72c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x35) = param_3;
  return;
}



/* Entry: 10844a734; end: 10844a73b; -[SCSnapCommonLoggingParameters swipeCount] */

undefined8 FUN_10844a734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x420);
}



/* Entry: 10844a73c; end: 10844a743; -[SCSnapCommonLoggingParameters setSwipeCount:] */

void FUN_10844a73c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x420) = param_3;
  return;
}



/* Entry: 10844a744; end: 10844a74b; -[SCSnapCommonLoggingParameters snapSessionId] */

undefined8 FUN_10844a744(long param_1)

{
  return *(undefined8 *)(param_1 + 0x428);
}



/* Entry: 10844a74c; end: 10844a753; -[SCSnapCommonLoggingParameters setSnapSessionId:] */

void FUN_10844a74c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10844a754; end: 10844a75b; -[SCSnapCommonLoggingParameters startRecordingTimestamp] */

undefined8 FUN_10844a754(long param_1)

{
  return *(undefined8 *)(param_1 + 0x430);
}



/* Entry: 10844a75c; end: 10844a78b; -[SCSnapCommonLoggingParameters setStartRecordingTimestamp:] */

void FUN_10844a75c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10844a78c; end: 10844a793; -[SCSnapCommonLoggingParameters captureSessionId] */

undefined8 FUN_10844a78c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x438);
}



/* Entry: 10844a794; end: 10844a79b; -[SCSnapCommonLoggingParameters setCaptureSessionId:] */

void FUN_10844a794(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10844a79c; end: 10844a7a3; -[SCSnapCommonLoggingParameters firstSwipeDirection] */

undefined8 FUN_10844a79c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x440);
}



/* Entry: 10844a7a4; end: 10844a7ab; -[SCSnapCommonLoggingParameters setFirstSwipeDirection:] */

void FUN_10844a7a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x440) = param_3;
  return;
}



/* Entry: 10844a7ac; end: 10844a7b3; -[SCSnapCommonLoggingParameters lastFilterRenderTime] */

undefined8 FUN_10844a7ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x448);
}



/* Entry: 10844a7b4; end: 10844a7bb; -[SCSnapCommonLoggingParameters setLastFilterRenderTime:] */

void FUN_10844a7b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10844a7bc; end: 10844a7c3; -[SCSnapCommonLoggingParameters filterRenderTimes] */

undefined8 FUN_10844a7bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x450);
}



/* Entry: 10844a7c4; end: 10844a7cb; -[SCSnapCommonLoggingParameters setFilterRenderTimes:] */

void FUN_10844a7c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10844a7cc; end: 10844a7d3; -[SCSnapCommonLoggingParameters filterInfoValue] */

undefined8 FUN_10844a7cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x458);
}



/* Entry: 10844a7d4; end: 10844a7db; -[SCSnapCommonLoggingParameters setFilterInfoValue:] */

void FUN_10844a7d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10844a7dc; end: 10844a7e3; -[SCSnapCommonLoggingParameters filterStreakValue] */

undefined8 FUN_10844a7dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x460);
}



/* Entry: 10844a7e4; end: 10844a7eb; -[SCSnapCommonLoggingParameters setFilterStreakValue:] */

void FUN_10844a7e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x460) = param_3;
  return;
}



/* Entry: 10844a7ec; end: 10844a7f3; -[SCSnapCommonLoggingParameters filterRemovalCount] */

undefined8 FUN_10844a7ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x468);
}



/* Entry: 10844a7f4; end: 10844a7fb; -[SCSnapCommonLoggingParameters setFilterRemovalCount:] */

void FUN_10844a7f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x468) = param_3;
  return;
}



/* Entry: 10844a7fc; end: 10844a803; -[SCSnapCommonLoggingParameters filterStreakType] */

undefined8 FUN_10844a7fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x470);
}



/* Entry: 10844a804; end: 10844a80b; -[SCSnapCommonLoggingParameters setFilterStreakType:] */

void FUN_10844a804(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x470) = param_3;
  return;
}



/* Entry: 10844a80c; end: 10844a813; -[SCSnapCommonLoggingParameters snapTimeIsLoop] */

undefined1 FUN_10844a80c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x36);
}



/* Entry: 10844a814; end: 10844a81b; -[SCSnapCommonLoggingParameters setSnapTimeIsLoop:] */

void FUN_10844a814(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x36) = param_3;
  return;
}



/* Entry: 10844a81c; end: 10844a823; -[SCSnapCommonLoggingParameters filterCarouselLoggingParameters] */

undefined8 FUN_10844a81c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x478);
}



/* Entry: 10844a824; end: 10844a82b; -[SCSnapCommonLoggingParameters setFilterCarouselLoggingParameters:] */

void FUN_10844a824(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10844a82c; end: 10844a833; -[SCSnapCommonLoggingParameters shouldSaveToMemories] */

undefined1 FUN_10844a82c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x37);
}



/* Entry: 10844a834; end: 10844a83b; -[SCSnapCommonLoggingParameters setShouldSaveToMemories:] */

void FUN_10844a834(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x37) = param_3;
  return;
}



/* Entry: 10844a83c; end: 10844a843; -[SCSnapCommonLoggingParameters saveCount] */

undefined8 FUN_10844a83c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x480);
}



/* Entry: 10844a844; end: 10844a84b; -[SCSnapCommonLoggingParameters setSaveCount:] */

void FUN_10844a844(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x480) = param_3;
  return;
}



/* Entry: 10844a84c; end: 10844a853; -[SCSnapCommonLoggingParameters snapDidSendToChat] */

undefined1 FUN_10844a84c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 10844a854; end: 10844a85b; -[SCSnapCommonLoggingParameters setSnapDidSendToChat:] */

void FUN_10844a854(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10844a85c; end: 10844a863; -[SCSnapCommonLoggingParameters snapDidPostToStory] */

undefined1 FUN_10844a85c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x39);
}



/* Entry: 10844a864; end: 10844a86b; -[SCSnapCommonLoggingParameters setSnapDidPostToStory:] */

void FUN_10844a864(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x39) = param_3;
  return;
}



/* Entry: 10844a86c; end: 10844a873; -[SCSnapCommonLoggingParameters snapDidSaveAsCopy] */

undefined1 FUN_10844a86c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3a);
}



/* Entry: 10844a874; end: 10844a87b; -[SCSnapCommonLoggingParameters setSnapDidSaveAsCopy:] */

void FUN_10844a874(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x3a) = param_3;
  return;
}



/* Entry: 10844a87c; end: 10844a883; -[SCSnapCommonLoggingParameters snapDidSaveToReplace] */

undefined1 FUN_10844a87c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3b);
}



/* Entry: 10844a884; end: 10844a88b; -[SCSnapCommonLoggingParameters setSnapDidSaveToReplace:] */

void FUN_10844a884(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x3b) = param_3;
  return;
}



/* Entry: 10844a88c; end: 10844a893; -[SCSnapCommonLoggingParameters snapIsFromSearch] */

undefined1 FUN_10844a88c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3c);
}



/* Entry: 10844a894; end: 10844a89b; -[SCSnapCommonLoggingParameters setSnapIsFromSearch:] */

void FUN_10844a894(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x3c) = param_3;
  return;
}



/* Entry: 10844a89c; end: 10844a8a3; -[SCSnapCommonLoggingParameters galleryUserContext] */

undefined8 FUN_10844a89c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x488);
}



/* Entry: 10844a8a4; end: 10844a8d3; -[SCSnapCommonLoggingParameters setGalleryUserContext:] */

void FUN_10844a8a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x488);
  *(undefined8 *)(param_1 + 0x488) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10844a8d4; end: 10844a8db; -[SCSnapCommonLoggingParameters gallerySendSource] */

undefined8 FUN_10844a8d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x490);
}



/* Entry: 10844a8dc; end: 10844a8e3; -[SCSnapCommonLoggingParameters setGallerySendSource:] */

void FUN_10844a8dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x490) = param_3;
  return;
}



/* Entry: 10844a8e4; end: 10844a8eb; -[SCSnapCommonLoggingParameters destinations] */

undefined8 FUN_10844a8e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x498);
}



/* Entry: 10844a8ec; end: 10844a91b; -[SCSnapCommonLoggingParameters setDestinations:] */

void FUN_10844a8ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x498);
  *(undefined8 *)(param_1 + 0x498) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10844a91c; end: 10844a923; -[SCSnapCommonLoggingParameters galleryMediaType] */

undefined8 FUN_10844a91c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4a0);
}



/* Entry: 10844a924; end: 10844a92b; -[SCSnapCommonLoggingParameters setGalleryMediaType:] */

void FUN_10844a924(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x4a0) = param_3;
  return;
}



/* Entry: 10844a92c; end: 10844a933; -[SCSnapCommonLoggingParameters orientation] */

undefined8 FUN_10844a92c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4a8);
}



/* Entry: 10844a934; end: 10844a93b; -[SCSnapCommonLoggingParameters setOrientation:] */

void FUN_10844a934(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x4a8) = param_3;
  return;
}



/* Entry: 10844a93c; end: 10844a943; -[SCSnapCommonLoggingParameters entryType] */

undefined8 FUN_10844a93c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4b0);
}



/* Entry: 10844a944; end: 10844a94b; -[SCSnapCommonLoggingParameters setEntryType:] */

void FUN_10844a944(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x4b0) = param_3;
  return;
}



/* Entry: 10844a94c; end: 10844a953; -[SCSnapCommonLoggingParameters meo] */

undefined1 FUN_10844a94c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3d);
}



/* Entry: 10844a954; end: 10844a95b; -[SCSnapCommonLoggingParameters setMeo:] */

void FUN_10844a954(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x3d) = param_3;
  return;
}



/* Entry: 10844a95c; end: 10844a963; -[SCSnapCommonLoggingParameters hasCreative] */

undefined1 FUN_10844a95c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3e);
}



/* Entry: 10844a964; end: 10844a96b; -[SCSnapCommonLoggingParameters setHasCreative:] */

void FUN_10844a964(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x3e) = param_3;
  return;
}



/* Entry: 10844a96c; end: 10844a973; -[SCSnapCommonLoggingParameters entryExternalId] */

undefined8 FUN_10844a96c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4b8);
}



/* Entry: 10844a974; end: 10844a9a3; -[SCSnapCommonLoggingParameters setEntryExternalId:] */

void FUN_10844a974(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x4b8);
  *(undefined8 *)(param_1 + 0x4b8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10844a9a4; end: 10844a9ab; -[SCSnapCommonLoggingParameters galleryCollectionCategory] */

undefined8 FUN_10844a9a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4c0);
}



/* Entry: 10844a9ac; end: 10844a9db; -[SCSnapCommonLoggingParameters setGalleryCollectionCategory:] */

void FUN_10844a9ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x4c0);
  *(undefined8 *)(param_1 + 0x4c0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10844a9dc; end: 10844a9e3; -[SCSnapCommonLoggingParameters visitSendToCount] */

undefined8 FUN_10844a9dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4c8);
}



/* Entry: 10844a9e4; end: 10844a9eb; -[SCSnapCommonLoggingParameters setVisitSendToCount:] */

void FUN_10844a9e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x4c8) = param_3;
  return;
}



/* Entry: 10844a9ec; end: 10844a9f3; -[SCSnapCommonLoggingParameters memSessionId] */

undefined8 FUN_10844a9ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4d0);
}



/* Entry: 10844a9f4; end: 10844aa23; -[SCSnapCommonLoggingParameters setMemSessionId:] */

void FUN_10844a9f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x4d0);
  *(undefined8 *)(param_1 + 0x4d0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10844aa24; end: 10844aa2b; -[SCSnapCommonLoggingParameters memTabSessionId] */

undefined8 FUN_10844aa24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4d8);
}



/* Entry: 10844aa2c; end: 10844aa5b; -[SCSnapCommonLoggingParameters setMemTabSessionId:] */

void FUN_10844aa2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x4d8);
  *(undefined8 *)(param_1 + 0x4d8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10844aa5c; end: 10844aa63; -[SCSnapCommonLoggingParameters viewSource] */

undefined8 FUN_10844aa5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4e0);
}



/* Entry: 10844aa64; end: 10844aa6b; -[SCSnapCommonLoggingParameters setViewSource:] */

void FUN_10844aa64(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x4e0) = param_3;
  return;
}



/* Entry: 10844aa6c; end: 10844aa73; -[SCSnapCommonLoggingParameters stickerCount] */

undefined8 FUN_10844aa6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4e8);
}



/* Entry: 10844aa74; end: 10844aa7b; -[SCSnapCommonLoggingParameters setStickerCount:] */

void FUN_10844aa74(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x4e8) = param_3;
  return;
}



/* Entry: 10844aa7c; end: 10844aa83; -[SCSnapCommonLoggingParameters stickerTrackingCount] */

undefined8 FUN_10844aa7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4f0);
}



/* Entry: 10844aa84; end: 10844aa8b; -[SCSnapCommonLoggingParameters setStickerTrackingCount:] */

void FUN_10844aa84(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x4f0) = param_3;
  return;
}



/* Entry: 10844aa8c; end: 10844aa93; -[SCSnapCommonLoggingParameters stickerDeletionCount] */

undefined8 FUN_10844aa8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4f8);
}



/* Entry: 10844aa94; end: 10844aa9b; -[SCSnapCommonLoggingParameters setStickerDeletionCount:] */

void FUN_10844aa94(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x4f8) = param_3;
  return;
}



/* Entry: 10844aa9c; end: 10844aaa3; -[SCSnapCommonLoggingParameters stickerAutoGeneratedUsageCount] */

undefined8 FUN_10844aa9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x500);
}



/* Entry: 10844aaa4; end: 10844aaab; -[SCSnapCommonLoggingParameters setStickerAutoGeneratedUsageCount:] */

void FUN_10844aaa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x500) = param_3;
  return;
}



/* Entry: 10844aaac; end: 10844aab3; -[SCSnapCommonLoggingParameters emojiStickersCount] */

undefined8 FUN_10844aaac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x508);
}



/* Entry: 10844aab4; end: 10844aabb; -[SCSnapCommonLoggingParameters setEmojiStickersCount:] */

void FUN_10844aab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x508) = param_3;
  return;
}



/* Entry: 10844aabc; end: 10844aac3; -[SCSnapCommonLoggingParameters bitmojiStickersCount] */

undefined8 FUN_10844aabc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x510);
}



/* Entry: 10844aac4; end: 10844aacb; -[SCSnapCommonLoggingParameters setBitmojiStickersCount:] */

void FUN_10844aac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x510) = param_3;
  return;
}



/* Entry: 10844aacc; end: 10844aad3; -[SCSnapCommonLoggingParameters bitmojiGeoStickersCount] */

undefined8 FUN_10844aacc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x518);
}



/* Entry: 10844aad4; end: 10844aadb; -[SCSnapCommonLoggingParameters setBitmojiGeoStickersCount:] */

void FUN_10844aad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x518) = param_3;
  return;
}



/* Entry: 10844aadc; end: 10844aae3; -[SCSnapCommonLoggingParameters snapchatStickersCount] */

undefined8 FUN_10844aadc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x520);
}



/* Entry: 10844aae4; end: 10844aaeb; -[SCSnapCommonLoggingParameters setSnapchatStickersCount:] */

void FUN_10844aae4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x520) = param_3;
  return;
}



/* Entry: 10844aaec; end: 10844aaf3; -[SCSnapCommonLoggingParameters emojiStickersFromRecentCount] */

undefined8 FUN_10844aaec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x528);
}



/* Entry: 10844aaf4; end: 10844aafb; -[SCSnapCommonLoggingParameters setEmojiStickersFromRecentCount:] */

void FUN_10844aaf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x528) = param_3;
  return;
}



/* Entry: 10844aafc; end: 10844ab03; -[SCSnapCommonLoggingParameters bitmojiStickersFromRecentCount] */

undefined8 FUN_10844aafc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x530);
}



/* Entry: 10844ab04; end: 10844ab0b; -[SCSnapCommonLoggingParameters setBitmojiStickersFromRecentCount:] */

void FUN_10844ab04(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x530) = param_3;
  return;
}



/* Entry: 10844ab0c; end: 10844ab13; -[SCSnapCommonLoggingParameters bitmojiGeoStickersFromRecentCount] */

undefined8 FUN_10844ab0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x538);
}



/* Entry: 10844ab14; end: 10844ab1b; -[SCSnapCommonLoggingParameters setBitmojiGeoStickersFromRecentCount:] */

void FUN_10844ab14(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x538) = param_3;
  return;
}



/* Entry: 10844ab1c; end: 10844ab23; -[SCSnapCommonLoggingParameters snapchatStickersFromRecentCount] */

undefined8 FUN_10844ab1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x540);
}



/* Entry: 10844ab24; end: 10844ab2b; -[SCSnapCommonLoggingParameters setSnapchatStickersFromRecentCount:] */

void FUN_10844ab24(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x540) = param_3;
  return;
}



/* Entry: 10844ab2c; end: 10844ab33; -[SCSnapCommonLoggingParameters stickerFromSearchCount] */

undefined8 FUN_10844ab2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x548);
}



/* Entry: 10844ab34; end: 10844ab3b; -[SCSnapCommonLoggingParameters setStickerFromSearchCount:] */

void FUN_10844ab34(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x548) = param_3;
  return;
}



/* Entry: 10844ab3c; end: 10844ab43; -[SCSnapCommonLoggingParameters stickerUserEnterSearchCount] */

undefined8 FUN_10844ab3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x550);
}


