/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105dd9c1c; end: 105dd9c5f; -[SCFeatureVideoPlaybackImpl currentVideoPlaybackRate] */

undefined8 FUN_105dd9c1c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf60b40();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105dd9c60; end: 105dd9ca3; -[SCFeatureVideoPlaybackImpl playbackDurationWithPlaybackRatesApplied] */

undefined8 FUN_105dd9c60(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ff240();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105dd9ca4; end: 105dd9ce7; -[SCFeatureVideoPlaybackImpl playbackDuration] */

undefined8 FUN_105dd9ca4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ff1e0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105dd9ce8; end: 105dd9d2b; -[SCFeatureVideoPlaybackImpl totalContentDuration] */

undefined8 FUN_105dd9ce8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c276200();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105dd9d2c; end: 105dd9d6f; -[SCFeatureVideoPlaybackImpl videoAssetNominalFrameRate] */

undefined8 FUN_105dd9d2c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c299220();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105dd9d70; end: 105dd9e43; -[SCFeatureVideoPlaybackImpl setVideoProvider:] */

void FUN_105dd9d70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2507c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bee8d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c221d20();
  _objc_release(param_3);
  _objc_release(lVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95360();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dd9e44; end: 105dd9e7f; -[SCFeatureVideoPlaybackImpl hasVideoAsset] */

undefined8 FUN_105dd9e44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfde420();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105dd9e80; end: 105dd9ec3; -[SCFeatureVideoPlaybackImpl videoAsset] */

void FUN_105dd9e80(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2991a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105dd9ec4; end: 105dd9f77; -[SCFeatureVideoPlaybackImpl showVideo] */

void FUN_105dd9ec4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2507c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bee8d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23ac20();
  _objc_release(lVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95360();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dd9f78; end: 105dd9fb7; -[SCFeatureVideoPlaybackImpl setVolume:] */

void FUN_105dd9f78(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2241a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105dd9fb8; end: 105dda023; -[SCFeatureVideoPlaybackImpl volumeProportionForAudioTrackWithKey:] */

void FUN_105dd9fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bee8d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2a0fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105dda024; end: 105dda083; -[SCFeatureVideoPlaybackImpl updateVolumeProportion:forAudioTrackWithKey:] */

void FUN_105dda024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bee8d00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c300(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105dda084; end: 105dda0bf; -[SCFeatureVideoPlaybackImpl isAudioMixed] */

undefined8 FUN_105dda084(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c06c920();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105dda0c0; end: 105dda0f7; -[SCFeatureVideoPlaybackImpl setIsAudioMixed:] */

void FUN_105dda0c0(undefined8 param_1)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1af420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dda0f8; end: 105dda13b; -[SCFeatureVideoPlaybackImpl mixedAudioTracks] */

void FUN_105dda0f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0cece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105dda13c; end: 105dda1ab; -[SCFeatureVideoPlaybackImpl setAudioTrack:forKey:] */

void FUN_105dda13c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bee8d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c500();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dda1ac; end: 105dda1ef; -[SCFeatureVideoPlaybackImpl selectedSnaps] */

void FUN_105dda1ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c15a0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105dda1f0; end: 105dda23f; -[SCFeatureVideoPlaybackImpl addVideoPlaybackSessionListener:] */

void FUN_105dda1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bee8d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc920();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dda240; end: 105dda28f; -[SCFeatureVideoPlaybackImpl removeVideoPlaybackSessionListener:] */

void FUN_105dda240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bee8d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12f0e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dda290; end: 105dda2d7; -[SCFeatureVideoPlaybackImpl setSnapAtIndex:enabled:] */

void FUN_105dda290(undefined8 param_1)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2039a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dda2d8; end: 105dda30f; -[SCFeatureVideoPlaybackImpl seekToStartOfSnapAtIndex:] */

void FUN_105dda2d8(undefined8 param_1)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c157240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dda310; end: 105dda33f; -[SCFeatureVideoPlaybackImpl seekToBeginning] */

void FUN_105dda310(undefined8 param_1)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c157120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dda340; end: 105dda39f; -[SCFeatureVideoPlaybackImpl enableMultiSnapWithTimeRanges:shouldScaleThumbnails:] */

void FUN_105dda340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bee8d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf90d60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dda3a0; end: 105dda403; -[SCFeatureVideoPlaybackImpl enableTrimmingWithTimeRange:shouldScaleThumbnails:] */

void FUN_105dda3a0(undefined8 param_1)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf92200();
  _objc_release(param_1);
  return;
}



/* Entry: 105dda404; end: 105dda433; -[SCFeatureVideoPlaybackImpl disableTrimming] */

void FUN_105dda404(undefined8 param_1)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf80bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dda434; end: 105dda487; -[SCFeatureVideoPlaybackImpl updateTrimTimeRange:] */

void FUN_105dda434(undefined8 param_1)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28b5e0();
  _objc_release(param_1);
  return;
}



/* Entry: 105dda488; end: 105dda4db; -[SCFeatureVideoPlaybackImpl setViewportTransform:] */

void FUN_105dda488(undefined8 param_1)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2235a0();
  _objc_release(param_1);
  return;
}



/* Entry: 105dda4dc; end: 105dda52b; -[SCFeatureVideoPlaybackImpl startRunningFromBeginning:] */

void FUN_105dda4dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bee8d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c250540();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dda52c; end: 105dda57b; -[SCFeatureVideoPlaybackImpl setFrameSources:] */

void FUN_105dda52c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bee8d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f500();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dda57c; end: 105dda5bf; -[SCFeatureVideoPlaybackImpl currentVideoFrameSource] */

void FUN_105dda57c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf60b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105dda5c0; end: 105dda60f; -[SCFeatureVideoPlaybackImpl setNGSMESnap:] */

void FUN_105dda5c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bee8d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1caf00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dda610; end: 105dda653; -[SCFeatureVideoPlaybackImpl NGSMESnap] */

void FUN_105dda610(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bdc1ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105dda654; end: 105dda697; -[SCFeatureVideoPlaybackImpl batchCapturePlayerHandler] */

void FUN_105dda654(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf16a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105dda698; end: 105dda6db; -[SCFeatureVideoPlaybackImpl timelineVideoPlayerHandler] */

void FUN_105dda698(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c270440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105dda6dc; end: 105dda717; -[SCFeatureVideoPlaybackImpl playbackMode] */

undefined8 FUN_105dda6dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0ffbc0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105dda718; end: 105dda74f; -[SCFeatureVideoPlaybackImpl setPlaybackMode:] */

void FUN_105dda718(undefined8 param_1)

{
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dda750; end: 105dda793; -[SCFeatureVideoPlaybackImpl imageProcessCommandsObservable] */

void FUN_105dda750(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe85a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105dda794; end: 105dda7d7; -[SCFeatureVideoPlaybackImpl multiSnapTimeRanges] */

void FUN_105dda794(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0d24a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105dda7d8; end: 105dda7df; -[SCFeatureVideoPlaybackImpl videoPlaybackProvider] */

undefined8 FUN_105dda7d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105dda7e0; end: 105dda80f; -[SCFeatureVideoPlaybackImpl setVideoPlaybackProvider:] */

void FUN_105dda7e0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105dda810; end: 105dda827; -[SCFeatureVideoPlaybackImpl coreCameraLogger] */

void FUN_105dda810(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dda828; end: 105dda833; -[SCFeatureVideoPlaybackImpl setCoreCameraLogger:] */

void FUN_105dda828(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 105dda834; end: 105dda85f; -[SCFeatureVideoPlaybackImpl .cxx_destruct] */

void FUN_105dda834(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105dda860; end: 105dda9fb; -[SCPreviewFeatureVideoPlaybackEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dda860(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105dda9fc;
  puStack_70 = &UNK_1108e9a30;
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = 1;
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c4b60;
  _objc_alloc(PTR_PTR_1126c4b60);
  func_0x00010c060fc0();
  uVar4 = 0;
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127369d4);
  }
  _objc_retain(uVar4);
  func_0x00010bf9d660(uVar4);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105dda9fc; end: 105ddaa5b;  */

void FUN_105dda9fc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (*(char *)(param_1 + 0x28) != '\x01')) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf59fa0(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105ddaa5c; end: 105ddab03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddaa5c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_1127369d0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c08f860();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c29a700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105ddab04; end: 105ddabd7; -[SCPreviewFeatureVideoPlaybackEntryPoint createVideoPlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddab04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c4b68;
  _objc_alloc(PTR_PTR_1126c4b68);
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_1127369d0;
    _objc_loadWeakRetained(lVar5);
  }
  lVar2 = lVar5;
  func_0x00010c08f860(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = 0;
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_1127369cc;
    _objc_loadWeakRetained(lVar3);
  }
  lVar4 = lVar3;
  func_0x00010bf52280(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061020(puVar1,param_2,lVar2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ddabd8; end: 105ddac2b; -[SCPreviewFeatureVideoPlaybackEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddabd8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127369d4,0);
  _objc_destroyWeak(param_1 + _DAT_1127369d0);
  _objc_destroyWeak(param_1 + _DAT_1127369cc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127369c8);
  return;
}



/* Entry: 105ddac2c; end: 105ddacd7; -[SCPreviewFeatureVideoPlaybackServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddac2c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_1127369d8;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_1127369e0;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c29a960(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105ddacd8; end: 105ddad1b; -[SCPreviewFeatureVideoPlaybackServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddacd8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127369e0);
  _objc_destroyWeak(param_1 + _DAT_1127369dc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127369d8);
  return;
}



/* Entry: 105ddad1c; end: 105ddaeb7; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl initWithVideoPlayback:previewConfiguration:timer:bounce:timeline:userInteractionStateLogger:creativeToolsABProvider:] */

undefined1 *
FUN_105ddad1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126ed1c8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x58) = 0;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_8;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010c081f80();
    *(char *)((long)puVar1 + 0x50) = (char)uVar2;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ddaeb8; end: 105ddaf1b; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl dealloc] */

void FUN_105ddaeb8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126ed1c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105ddaf1c; end: 105ddb023; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl isTrimmableSnap] */

bool FUN_105ddaf1c(double param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = param_2 + 0x18;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf30e80();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    return false;
  }
  lVar2 = param_2 + 0x18;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c29ae80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d9500();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 == 0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_58,lVar4);
  }
  _CMTimeGetSeconds(&uStack_58);
  param_2 = param_2 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = param_2;
  func_0x00010c07e920();
  if ((int)lVar2 == 0) {
    _objc_release(param_2);
  }
  else {
    _objc_release(param_2);
    if (11.0 < param_1) {
      bVar1 = false;
      goto LAB_105ddb000;
    }
  }
  bVar1 = 3.0 <= param_1;
LAB_105ddb000:
  _objc_release(lVar4);
  return bVar1;
}



/* Entry: 105ddb024; end: 105ddb0a3; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl handleTimerToolBarButtonTap] */

void FUN_105ddb024(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010bdd9dc0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if ((int)lVar1 == 0) {
    func_0x00010c285ec0();
  }
  else {
    uVar3 = uVar2;
    func_0x00010c0cfd40();
    func_0x00010be7d580(param_1,param_2,uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf86700();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ddb0a4; end: 105ddb0e7; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl playbackTimeRanges] */

void FUN_105ddb0a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8f20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0d24a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ddb0e8; end: 105ddb33f; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl isMediaTrimmed] */

uint FUN_105ddb0e8(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0cfd40();
    _objc_release(lVar2);
    if (lVar1 != 2) {
      uVar3 = param_1;
      func_0x00010bee8f20();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar3;
      func_0x00010c0d24a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar13;
      func_0x00010bf529e0();
      _objc_release(uVar13);
      if (uVar4 == 0) {
        uVar12 = 0;
      }
      else {
        uVar13 = 0;
        do {
          lVar1 = *(long *)(param_1 + 0x40);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          if (lVar1 == 0) {
            uStack_68 = 0;
            uStack_70 = 0;
            uStack_58 = 0;
            uStack_60 = 0;
            uStack_78 = 0;
            uStack_80 = 0;
            uVar10 = param_2;
          }
          else {
            func_0x00010bdc1120(&uStack_80,lVar1);
            uVar10 = param_2;
          }
          _objc_release(lVar1);
          uStack_a8 = uStack_78;
          uStack_b0 = uStack_80;
          uStack_98 = uStack_68;
          uStack_a0 = uStack_70;
          uStack_88 = uStack_58;
          uStack_90 = uStack_60;
          puVar5 = &uStack_b0;
          FUN_105ddb340();
          uVar4 = uVar3;
          uVar11 = uVar10;
          func_0x00010c0d24a0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          if (uVar6 == 0) {
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
          }
          else {
            func_0x00010bdc1120(&uStack_b0,uVar6);
          }
          _objc_release(uVar6);
          _objc_release(uVar4);
          uStack_d8 = uStack_a8;
          uStack_e0 = uStack_b0;
          uStack_c8 = uStack_98;
          uStack_d0 = uStack_a0;
          uStack_b8 = uStack_88;
          uStack_c0 = uStack_90;
          puVar7 = &uStack_e0;
          FUN_105ddb340(&uStack_e0);
          puVar8 = puVar5;
          param_2 = uVar11;
          func_0x00010c071ae0();
          uVar9 = uVar10;
          func_0x00010c071ae0();
          uVar12 = (uint)puVar8 & (uint)uVar9;
          _objc_release(puVar7);
          _objc_release(uVar11);
          _objc_release(puVar5);
          _objc_release(uVar10);
          if ((uVar12 & 1) == 0) break;
          uVar13 = uVar13 + 1;
          uVar4 = uVar3;
          func_0x00010c0d24a0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010bf529e0();
          _objc_release(uVar4);
        } while (uVar13 < uVar6);
        uVar12 = uVar12 ^ 1;
      }
      _objc_release(uVar3);
      return uVar12;
    }
  }
  return 0;
}



/* Entry: 105ddb340; end: 105ddb40f;  */

undefined1  [16] FUN_105ddb340(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_50 = param_1[2];
  _CMTimeGetSeconds(&uStack_60);
  uStack_58 = param_1[4];
  uStack_60 = param_1[3];
  uStack_50 = param_1[5];
  _CMTimeGetSeconds(&uStack_60);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = puVar1;
  return auVar3;
}



/* Entry: 105ddb410; end: 105ddb4a7; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl hidePlaybackControls] */

void FUN_105ddb410(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x38);
  if (uVar1 != 0) {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c074c20();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c29bf00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar3);
      func_0x00010bea1ae0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c292050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x48),PTR_s_userExitedInteractionState__112682238,9);
      return;
    }
  }
  return;
}



/* Entry: 105ddb4a8; end: 105ddb4e7; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl configureWithView:] */

void FUN_105ddb4a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108cc6364(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 8,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ddb4e8; end: 105ddb4ef; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl responderChainPriority] */

undefined8 FUN_105ddb4e8(void)

{
  return 0x7fffffff;
}



/* Entry: 105ddb4f0; end: 105ddb57b; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl snapEditor:updateLoggingWithBuilder:] */

void FUN_105ddb4f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((*(byte *)(param_1 + 0x50) & 1) == 0) &&
     (lVar1 = param_1, func_0x00010c0818a0(), (int)lVar1 != 0)) {
    lVar1 = param_1;
    func_0x00010c0778e0(param_1);
    func_0x00010c2bbc80(param_4,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2bbc60(param_4,param_2,*(undefined8 *)(param_1 + 0x58));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ddb57c; end: 105ddb5a3; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl playbackTimeRangesForToolsDurationController:] */

void FUN_105ddb57c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ddb5a4; end: 105ddb6d3; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl toolsDurationController:didUpdateTrimmedTimeRange:] */

void FUN_105ddb5a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = param_4[1];
  uStack_70 = *param_4;
  uStack_58 = param_4[3];
  uStack_60 = param_4[2];
  uStack_48 = param_4[5];
  uStack_50 = param_4[4];
  FUN_105dde99c(uVar1,&uStack_70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee34e0(param_1);
  uVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c14a120();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c07cfa0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    lVar5 = param_1 + 8;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c14a120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137fe0();
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  lVar5 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c06ba20();
  _objc_release(lVar5);
  if ((int)lVar6 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = param_4[1];
    uStack_70 = *param_4;
    uStack_58 = param_4[3];
    uStack_60 = param_4[2];
    uStack_48 = param_4[5];
    uStack_50 = param_4[4];
    func_0x00010c2834e0();
    _objc_release(uVar7);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 105ddb6d4; end: 105ddb733; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl toolsDurationController:didSeekToTime:] */

void FUN_105ddb6d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = param_4[1];
  uStack_40 = *param_4;
  uStack_30 = param_4[2];
  _CMTimeGetSeconds(&uStack_40);
  func_0x00010c256600(uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 105ddb734; end: 105ddb767; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl toolsDurationControllerFinishedSeeking:] */

void FUN_105ddb734(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13dae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ddb768; end: 105ddb76b; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl toolsDurationControllerCompleteButtonTapped:] */

void FUN_105ddb768(void)

{
  return;
}



/* Entry: 105ddb76c; end: 105ddb79f; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl toolsDurationController:didChangeSelectedTimeSlice:] */

void FUN_105ddb76c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = param_4[1];
  uStack_40 = *param_4;
  uStack_28 = param_4[3];
  uStack_30 = param_4[2];
  uStack_18 = param_4[5];
  uStack_20 = param_4[4];
  func_0x00010bed4480(param_1,param_2,&uStack_40,1);
  return;
}



/* Entry: 105ddb7a0; end: 105ddb7d3; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl toolsDurationController:didSelectTimeSlice:] */

void FUN_105ddb7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = param_4[1];
  uStack_40 = *param_4;
  uStack_28 = param_4[3];
  uStack_30 = param_4[2];
  uStack_18 = param_4[5];
  uStack_20 = param_4[4];
  func_0x00010bed4480(param_1,param_2,&uStack_40,0);
  return;
}



/* Entry: 105ddb7d4; end: 105ddb80b; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl didTapPreviewContainerView:] */

bool FUN_105ddb7d4(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010be42de0();
  bVar1 = (int)uVar2 == 0;
  if (!bVar1) {
    func_0x00010bfe25c0(param_1);
  }
  return bVar1;
}



/* Entry: 105ddb80c; end: 105ddb80f; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl finishTouchControl:] */

void FUN_105ddb80c(void)

{
  return;
}



/* Entry: 105ddb810; end: 105ddb813; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl finishRewindingWithTrackableView:] */

void FUN_105ddb810(void)

{
  return;
}



/* Entry: 105ddb814; end: 105ddb817; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl snapEditStateChangeShouldUpdateThumbnails:] */

void FUN_105ddb814(void)

{
  return;
}



/* Entry: 105ddb818; end: 105ddb83f; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl previewThumbnailsController] */

void FUN_105ddb818(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ddb840; end: 105ddb843; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl preparePreviewEphemeralMediaList:destinationInfo:] */

void FUN_105ddb840(void)

{
  return;
}



/* Entry: 105ddb844; end: 105ddb9fb; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl previewFeatureTimer:didUpdateVideoMode:fromPreviousVideoMode:] */

void FUN_105ddb844(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  if (param_4 == 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf80bc0();
    _objc_release(uVar1);
  }
  else {
    if (((*(byte *)(param_1 + 0x50) & 1) != 0) ||
       (uVar2 = param_1, func_0x00010c0818a0(), (uVar2 & 1) == 0)) {
      func_0x00010bfe25c0(param_1);
      goto LAB_105ddb8fc;
    }
    if (param_5 == 2) {
      lVar3 = *(long *)(param_1 + 0x38);
      func_0x00010c158160();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        func_0x00010c27c900(&uStack_80,lVar3);
      }
      _objc_release(lVar3);
      lVar4 = *(long *)(param_1 + 0x40);
      uStack_a8 = uStack_78;
      uStack_b0 = uStack_80;
      uStack_98 = uStack_68;
      uStack_a0 = uStack_70;
      uStack_88 = uStack_58;
      uStack_90 = uStack_60;
      FUN_105dde99c(lVar4,&uStack_b0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_b0,lVar3);
      }
      lVar5 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar5);
      func_0x00010c07e620();
      func_0x00010bf92200(uVar1);
      _objc_release(lVar5);
      _objc_release(lVar3);
      _objc_release(uVar1);
      func_0x00010bee34e0(param_1);
      _objc_release(lVar4);
    }
  }
  func_0x00010be7d580(param_1);
LAB_105ddb8fc:
  _objc_release(param_3);
  return;
}



/* Entry: 105ddb9fc; end: 105ddbaa3; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl _canPresentPlaybackControls] */

/* WARNING: Possible PIC construction at 0x000105ddba40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105ddba44) */
/* WARNING: Removing unreachable block (ram,0x000105ddba48) */
/* WARNING: Removing unreachable block (ram,0x000105ddba7c) */
/* WARNING: Removing unreachable block (ram,0x000105ddba74) */

long FUN_105ddb9fc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c074c20();
    _objc_release(lVar1);
    if ((int)lVar2 == 0) {
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0818b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isTrimmableSnap_1125fe038);
  return param_1;
}



/* Entry: 105ddbaa4; end: 105ddbaef; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl _isPresentingPlaybackControls] */

uint FUN_105ddbaa4(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c074c20();
    uVar3 = (uint)lVar2 ^ 1;
    _objc_release(lVar1);
  }
  return uVar3;
}



/* Entry: 105ddbaf0; end: 105ddbb6f; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl _presentPlaybackControlsForTimerMode:] */

void FUN_105ddbaf0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bdd9dc0();
  if ((int)lVar1 != 0) {
    func_0x00010c293a40(*(undefined8 *)(param_1 + 0x48));
  }
  if (param_3 == 2) {
    func_0x00010be7d560();
  }
  else {
    func_0x00010be7d5a0(param_1);
  }
  if ((int)lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c292110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_userFinishedEnteringInteractionS_112682268,9);
  return;
}



/* Entry: 105ddbb70; end: 105ddbc17; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl _presentPlaybackControlsForTrimming] */

void FUN_105ddbb70(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010be42de0();
  if ((int)lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
    func_0x00010c0810e0();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf80b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x38),PTR_s_disableTimeSliceSelectionAnimate_1125bdc68,1)
      ;
      return;
    }
  }
  lVar2 = param_1;
  func_0x00010bdd9dc0();
  if ((int)lVar2 != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
    func_0x00010bea1ae0(param_1);
    lVar2 = *(long *)(param_1 + 0x38);
    if (lVar2 != 0) {
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010beaca90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupForFirstAppearance_112588c48);
    return;
  }
  return;
}



/* Entry: 105ddbc18; end: 105ddbdf7; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl _presentPlaybackControlsForBounce] */

void FUN_105ddbc18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010bea1ae0(param_1,param_2,1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf208a0();
  _CMTimeMakeWithSeconds(&uStack_48,1000000);
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20940();
  _CMTimeMakeWithSeconds(&uStack_60,1000000);
  _objc_release(uVar4);
  _objc_release(uVar1);
  uStack_d8 = uStack_40;
  uStack_e0 = uStack_48;
  uStack_d0 = uStack_38;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  _CMTimeRangeMake(&uStack_90,&uStack_e0,&uStack_b0);
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 == 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
    func_0x00010beaca80(param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c29bf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c29bf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
  }
  else {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c074c20();
    _objc_release(lVar2);
    if ((int)lVar3 == 0) goto LAB_105ddbda4;
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c29bf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
  _objc_release(uVar4);
LAB_105ddbda4:
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  func_0x00010bf92140(*(undefined8 *)(param_1 + 0x38));
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  func_0x00010bed4480(param_1);
  return;
}



/* Entry: 105ddbdf8; end: 105ddbf17; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl _updateBounceWithTimeSlice:isTracking:] */

void FUN_105ddbdf8(double param_1,long param_2,undefined8 param_3,double *param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  undefined1 auStack_68 [24];
  
  lVar1 = param_2 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c29ae80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d9500();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    dStack_a0 = 0.0;
    dStack_98 = 0.0;
    dStack_90 = 0.0;
  }
  else {
    func_0x00010bf8b160(&dStack_a0,lVar3);
  }
  _CMTimeGetSeconds(&dStack_a0);
  dStack_98 = param_4[1];
  dVar5 = *param_4;
  dStack_90 = param_4[2];
  dStack_a0 = dVar5;
  _CMTimeGetSeconds(&dStack_a0);
  dStack_98 = param_4[1];
  dStack_a0 = *param_4;
  dStack_88 = param_4[3];
  dStack_90 = param_4[2];
  dStack_78 = param_4[5];
  dVar6 = param_4[4];
  dStack_80 = dVar6;
  _CMTimeRangeGetEnd(auStack_68,&dStack_a0);
  _CMTimeGetSeconds(auStack_68);
  if (dVar6 <= param_1) {
    param_1 = dVar6;
  }
  if (param_5 == 0) {
    param_1 = dVar5;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24e000(param_1);
  _objc_release(uVar4);
  _objc_release(lVar3);
  return;
}



/* Entry: 105ddbf18; end: 105ddc13b; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl _setupForFirstAppearance] */

void FUN_105ddbf18(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double dStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010beaee60();
  lVar1 = param_1;
  func_0x00010bee8f20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d24a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = lVar3;
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c29ae80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d9500();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    dStack_a0 = 0.0;
    uStack_98 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bf8b160(&dStack_a0,lVar3);
  }
  uStack_c8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  dVar6 = *(double *)PTR__kCMTimeZero_110348670;
  uStack_c0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  dStack_d0 = dVar6;
  _CMTimeRangeMake(&dStack_70,&dStack_d0,&dStack_a0);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  _objc_release(lVar1);
  uStack_98 = uStack_68;
  dStack_a0 = dStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  lVar1 = param_1;
  func_0x00010c26dbc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c4480;
  _objc_alloc(PTR_PTR_1126c4480);
  uStack_98 = uStack_68;
  dStack_a0 = dStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_c8 = uStack_68;
  dStack_d0 = dStack_70;
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  uStack_a8 = uStack_48;
  uStack_b0 = uStack_50;
  func_0x00010c029e20((float)(long)((dVar6 * 0.7093333601951599) / 40.0));
  func_0x00010c1fa9a0(*(undefined8 *)(param_1 + 0x38));
  _objc_release(puVar4);
  lVar2 = param_1;
  func_0x00010c0818a0();
  if ((int)lVar2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010c07e620();
    uStack_98 = uStack_68;
    dStack_a0 = dStack_70;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    func_0x00010bf92200(uVar5);
    _objc_release(param_1);
    _objc_release(uVar5);
  }
  _objc_release(lVar1);
  _objc_release(lVar3);
  return;
}



/* Entry: 105ddc13c; end: 105ddc37b; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl _setupPlaybackControls] */

void FUN_105ddc13c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_a0 [48];
  
  if (*(long *)(param_5 + 0x38) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126c4478;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_opt_new(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010bfff9a0(puVar1,param_6,puVar2);
  uVar8 = *(undefined8 *)(param_5 + 0x38);
  *(undefined **)(param_5 + 0x38) = puVar1;
  _objc_release(uVar8);
  _objc_release(puVar2);
  lVar3 = param_5 + 8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c221c80();
  _objc_release(lVar3);
  func_0x00010c1b0120(*(undefined8 *)(param_5 + 0x38),param_6,1);
  lVar3 = param_5 + 8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c29a9e0();
  uVar8 = *(undefined8 *)(param_5 + 0x38);
  func_0x00010c29bf00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar8);
  _objc_release(lVar3);
  _CGAffineTransformMakeTranslation(auStack_a0,0,0xc044000000000000);
  uVar8 = *(undefined8 *)(param_5 + 0x38);
  func_0x00010c29bf00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar8);
  lVar3 = param_5 + 8;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bfe5d60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_5 + 0x38);
  func_0x00010c29bf00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5 + 8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fe0(lVar4,param_6,uVar8,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c189840(*(undefined8 *)(param_5 + 0x38),param_6,param_5);
  func_0x00010c18b5e0(*(undefined8 *)(param_5 + 0x38),param_6,param_5);
  uVar8 = *(undefined8 *)(param_5 + 0x10);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc920();
  _objc_release(uVar8);
  return;
}



/* Entry: 105ddc37c; end: 105ddc3f3; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl _setAddSnapThumbnailsHidden:] */

void FUN_105ddc37c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c06ba20();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 105ddc3f4; end: 105ddc43b; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl _videoSource] */

void FUN_105ddc3f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105ddc43c; end: 105ddc593; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl thumbnailFuturesForVideoAsset:thumbnailCount:mediaTimeRange:] */

void FUN_105ddc43c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  double dVar7;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = *(undefined8 *)(param_5 + 0x20);
  dVar7 = *(double *)(param_5 + 0x18);
  uStack_70 = *(undefined8 *)(param_5 + 0x28);
  dStack_80 = dVar7;
  _CMTimeGetSeconds(&dStack_80);
  if (0 < (long)param_4) {
    uVar6 = 0;
    do {
      puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      _CMTimeMakeWithSeconds(&dStack_80,(dVar7 / (double)(long)param_4) * (double)uVar6,1000000);
      func_0x00010c297200(puVar2,param_2,&dStack_80);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,puVar2);
      _objc_release(puVar2);
      uVar6 = uVar6 + 1;
    } while (param_4 != uVar6);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d25e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c26dba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105ddc594; end: 105ddc637; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl _updateVideoTimeRanges:] */

void FUN_105ddc594(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_60,lVar1);
  }
  func_0x00010c28b5e0(uVar2,param_2,&uStack_60);
  _objc_release(lVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 105ddc638; end: 105ddc63f; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl playbackControlsOpenCount] */

undefined8 FUN_105ddc638(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105ddc640; end: 105ddc6bb; -[SCPreviewFeatureVideoPlaybackControlsLegacyImpl .cxx_destruct] */

void FUN_105ddc640(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105ddc6bc; end: 105ddc7d3; -[SCPreviewFeatureVideoPlaybackControlsLegacyServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddc6bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c4b78;
  _objc_alloc(PTR_PTR_1126c4b78);
  func_0x00010c060fe0();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112736a2c);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105ddc7d4; end: 105ddc9fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddc7d4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
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
  undefined *puVar16;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1 + _DAT_112736a10;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c08ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar16 = PTR_PTR_1126afee0;
    _objc_opt_class(PTR_PTR_1126afee0);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar16);
    uVar1 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    puVar16 = PTR_PTR_1126c4b70;
    _objc_alloc();
    lVar4 = param_1 + _DAT_112736a20;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_112736a1c;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010c2705e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_112736a14;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010bf207a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + _DAT_112736a18;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + _DAT_112736a24;
    _objc_loadWeakRetained(lVar12);
    lVar13 = lVar12;
    func_0x00010c068880();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1 + _DAT_112736a28;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060fa0(puVar16);
    _objc_release(uVar1);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 105ddc9fc; end: 105ddca7f; -[SCPreviewFeatureVideoPlaybackControlsLegacyServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddc9fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112736a2c,0);
  _objc_destroyWeak(param_1 + _DAT_112736a28);
  _objc_destroyWeak(param_1 + _DAT_112736a24);
  _objc_destroyWeak(param_1 + _DAT_112736a20);
  _objc_destroyWeak(param_1 + _DAT_112736a1c);
  _objc_destroyWeak(param_1 + _DAT_112736a18);
  _objc_destroyWeak(param_1 + _DAT_112736a14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736a10);
  return;
}



/* Entry: 105ddca80; end: 105ddcb2b; -[SCPreviewFeatureVideoPlaybackControlsLegacyServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddca80(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112736a30;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112736a38;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c29a9a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105ddcb2c; end: 105ddcb6f; -[SCPreviewFeatureVideoPlaybackControlsLegacyServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddcb2c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112736a38);
  _objc_destroyWeak(param_1 + _DAT_112736a34);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736a30);
  return;
}



/* Entry: 105ddcb70; end: 105ddcbcf; -[SCCreativeToolsDurationCollectionViewController initWithCollectionViewLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105ddcb70(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ed1d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithCollectionViewLayout__1125dd830);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112736a40) = 1;
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105ddcbd0; end: 105ddcc1f; -[SCCreativeToolsDurationCollectionViewController loadView] */

void FUN_105ddcbd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c4b80;
  _objc_alloc(PTR_PTR_1126c4b80);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ddcc20; end: 105ddcc4f; -[SCCreativeToolsDurationCollectionViewController reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddcc20(long param_1)

{
  func_0x00010bdf8280();
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112736a44),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 105ddcc50; end: 105ddcd1f; -[SCCreativeToolsDurationCollectionViewController setSegment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddcc50(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112736a48;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  if (param_3 == uVar3) {
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_105ddcd08;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_112736a4c));
    func_0x00010bed5ac0(param_1);
  }
LAB_105ddcd08:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ddcd20; end: 105ddcd2f; -[SCCreativeToolsDurationCollectionViewController setIsCompleteButtonHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddcd20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112736a50),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 105ddcd30; end: 105ddcd3f; -[SCCreativeToolsDurationCollectionViewController isCompleteButtonHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddcd30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c074c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112736a50),PTR_s_isHidden_1125fad18);
  return;
}


