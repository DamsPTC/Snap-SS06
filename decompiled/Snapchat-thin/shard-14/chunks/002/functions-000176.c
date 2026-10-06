/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b07f56c; end: 10b07f573; -[SCSnapCommonLoggingParamsBuilder withSavedToGalleryByScreenshot:] */

void FUN_10b07f56c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x54) = param_3;
  return;
}



/* Entry: 10b07f574; end: 10b07f57b; -[SCSnapCommonLoggingParamsBuilder withSavedToGalleryByScreenRecording:] */

void FUN_10b07f574(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x55) = param_3;
  return;
}



/* Entry: 10b07f57c; end: 10b07f583; -[SCSnapCommonLoggingParamsBuilder withReply:] */

void FUN_10b07f57c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x56) = param_3;
  return;
}



/* Entry: 10b07f584; end: 10b07f58b; -[SCSnapCommonLoggingParamsBuilder withViewTime:] */

void FUN_10b07f584(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x58) = param_1;
  return;
}



/* Entry: 10b07f58c; end: 10b07f593; -[SCSnapCommonLoggingParamsBuilder withCaption:] */

void FUN_10b07f58c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 10b07f594; end: 10b07f59b; -[SCSnapCommonLoggingParamsBuilder withFilterIndexCount:] */

void FUN_10b07f594(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 10b07f59c; end: 10b07f5a3; -[SCSnapCommonLoggingParamsBuilder withFilterSeenCount:] */

void FUN_10b07f59c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 10b07f5a4; end: 10b07f5ab; -[SCSnapCommonLoggingParamsBuilder withFilterIndexPos:] */

void FUN_10b07f5a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 10b07f5ac; end: 10b07f5b3; -[SCSnapCommonLoggingParamsBuilder withRecipientCount:] */

void FUN_10b07f5ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 10b07f5b4; end: 10b07f5bb; -[SCSnapCommonLoggingParamsBuilder withInvitedRecipientCount:] */

void FUN_10b07f5b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 10b07f5bc; end: 10b07f5c3; -[SCSnapCommonLoggingParamsBuilder withStoryPostCount:] */

void FUN_10b07f5bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 10b07f5c4; end: 10b07f5cb; -[SCSnapCommonLoggingParamsBuilder withSource:] */

void FUN_10b07f5c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 10b07f5cc; end: 10b07f5d3; -[SCSnapCommonLoggingParamsBuilder withContentSource:] */

void FUN_10b07f5cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  return;
}



/* Entry: 10b07f5d4; end: 10b07f60b; -[SCSnapCommonLoggingParamsBuilder withSourcePageSessionId:] */

long FUN_10b07f5d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07f60c; end: 10b07f613; -[SCSnapCommonLoggingParamsBuilder withProductMediaType:] */

void FUN_10b07f60c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  return;
}



/* Entry: 10b07f614; end: 10b07f64b; -[SCSnapCommonLoggingParamsBuilder withEncryptedGeoData:] */

long FUN_10b07f614(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07f64c; end: 10b07f683; -[SCSnapCommonLoggingParamsBuilder withFilterGeoId:] */

long FUN_10b07f64c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07f684; end: 10b07f6bb; -[SCSnapCommonLoggingParamsBuilder withFilterGeoIdList:] */

long FUN_10b07f684(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07f6bc; end: 10b07f6f3; -[SCSnapCommonLoggingParamsBuilder withFilterInfo:] */

long FUN_10b07f6bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07f6f4; end: 10b07f72b; -[SCSnapCommonLoggingParamsBuilder withFilterCTPItemRequestId:] */

long FUN_10b07f6f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07f72c; end: 10b07f763; -[SCSnapCommonLoggingParamsBuilder withUnlockableStickerIds:] */

long FUN_10b07f72c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07f764; end: 10b07f79b; -[SCSnapCommonLoggingParamsBuilder withGeoFilterDynamicContextSources:] */

long FUN_10b07f764(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07f79c; end: 10b07f7d3; -[SCSnapCommonLoggingParamsBuilder withFilterVisual:] */

long FUN_10b07f79c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07f7d4; end: 10b07f80b; -[SCSnapCommonLoggingParamsBuilder withLagunaUserAgent:] */

long FUN_10b07f7d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07f80c; end: 10b07f843; -[SCSnapCommonLoggingParamsBuilder withLagunaDeviceId:] */

long FUN_10b07f80c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07f844; end: 10b07f87b; -[SCSnapCommonLoggingParamsBuilder withShareChannel:] */

long FUN_10b07f844(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07f87c; end: 10b07f883; -[SCSnapCommonLoggingParamsBuilder withReplyCta:] */

void FUN_10b07f87c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x110) = param_3;
  return;
}



/* Entry: 10b07f884; end: 10b07f88b; -[SCSnapCommonLoggingParamsBuilder withInChatSource:] */

void FUN_10b07f884(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x118) = param_3;
  return;
}



/* Entry: 10b07f88c; end: 10b07f893; -[SCSnapCommonLoggingParamsBuilder withCellViewPosition:] */

void FUN_10b07f88c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x120) = param_3;
  return;
}



/* Entry: 10b07f894; end: 10b07f8cb; -[SCSnapCommonLoggingParamsBuilder withSendToSessionId:] */

long FUN_10b07f894(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07f8cc; end: 10b07f903; -[SCSnapCommonLoggingParamsBuilder withRankingResultsId:] */

long FUN_10b07f8cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07f904; end: 10b07f90b; -[SCSnapCommonLoggingParamsBuilder withBrightnessValue:] */

void FUN_10b07f904(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x140) = param_1;
  return;
}



/* Entry: 10b07f90c; end: 10b07f913; -[SCSnapCommonLoggingParamsBuilder withFlashOn:] */

void FUN_10b07f90c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x144) = param_3;
  return;
}



/* Entry: 10b07f914; end: 10b07f91b; -[SCSnapCommonLoggingParamsBuilder withFlashMode:] */

void FUN_10b07f914(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x148) = param_3;
  return;
}



/* Entry: 10b07f91c; end: 10b07f923; -[SCSnapCommonLoggingParamsBuilder withFrontCamera:] */

void FUN_10b07f91c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x150) = param_3;
  return;
}



/* Entry: 10b07f924; end: 10b07f92b; -[SCSnapCommonLoggingParamsBuilder withCameraFlipsWhileRecording:] */

void FUN_10b07f924(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x158) = param_3;
  return;
}



/* Entry: 10b07f92c; end: 10b07f933; -[SCSnapCommonLoggingParamsBuilder withHasLabel:] */

void FUN_10b07f92c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x160) = param_3;
  return;
}



/* Entry: 10b07f934; end: 10b07f93b; -[SCSnapCommonLoggingParamsBuilder withLowLightBoostEnabledBeforeCapture:] */

void FUN_10b07f934(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x161) = param_3;
  return;
}



/* Entry: 10b07f93c; end: 10b07f943; -[SCSnapCommonLoggingParamsBuilder withHandsFree:] */

void FUN_10b07f93c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x162) = param_3;
  return;
}



/* Entry: 10b07f944; end: 10b07f94b; -[SCSnapCommonLoggingParamsBuilder withHandsFreeActivationType:] */

void FUN_10b07f944(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x168) = param_3;
  return;
}



/* Entry: 10b07f94c; end: 10b07f953; -[SCSnapCommonLoggingParamsBuilder withMediaDuration:] */

void FUN_10b07f94c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x170) = param_1;
  return;
}



/* Entry: 10b07f954; end: 10b07f95b; -[SCSnapCommonLoggingParamsBuilder withFullSnapTimeSec:] */

void FUN_10b07f954(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x174) = param_1;
  return;
}



/* Entry: 10b07f95c; end: 10b07f963; -[SCSnapCommonLoggingParamsBuilder withSegmentTimeSec:] */

void FUN_10b07f95c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x178) = param_1;
  return;
}



/* Entry: 10b07f964; end: 10b07f96b; -[SCSnapCommonLoggingParamsBuilder withMediaType:] */

void FUN_10b07f964(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x180) = param_3;
  return;
}



/* Entry: 10b07f96c; end: 10b07f9a3; -[SCSnapCommonLoggingParamsBuilder withMediaSources:] */

long FUN_10b07f96c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07f9a4; end: 10b07f9ab; -[SCSnapCommonLoggingParamsBuilder withCameraMode:] */

void FUN_10b07f9a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x198) = param_3;
  return;
}



/* Entry: 10b07f9ac; end: 10b07f9e3; -[SCSnapCommonLoggingParamsBuilder withActiveCameraModes:] */

long FUN_10b07f9ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07f9e4; end: 10b07fa1b; -[SCSnapCommonLoggingParamsBuilder withDetailedCameraModes:] */

long FUN_10b07f9e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07fa1c; end: 10b07fa23; -[SCSnapCommonLoggingParamsBuilder withGridModeState:] */

void FUN_10b07fa1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1b0) = param_3;
  return;
}



/* Entry: 10b07fa24; end: 10b07fa2b; -[SCSnapCommonLoggingParamsBuilder withWithZooming:] */

void FUN_10b07fa24(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1c8) = param_3;
  return;
}



/* Entry: 10b07fa2c; end: 10b07fa33; -[SCSnapCommonLoggingParamsBuilder withZoomingLevel:] */

void FUN_10b07fa2c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x1d0) = param_1;
  return;
}



/* Entry: 10b07fa34; end: 10b07fa6b; -[SCSnapCommonLoggingParamsBuilder withExposureBias:] */

long FUN_10b07fa34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07fa6c; end: 10b07fa73; -[SCSnapCommonLoggingParamsBuilder withIsBatchCapture:] */

void FUN_10b07fa6c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1e0) = param_3;
  return;
}



/* Entry: 10b07fa74; end: 10b07fa7b; -[SCSnapCommonLoggingParamsBuilder withIsTimeline:] */

void FUN_10b07fa74(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1e1) = param_3;
  return;
}



/* Entry: 10b07fa7c; end: 10b07fa83; -[SCSnapCommonLoggingParamsBuilder withIsMultiCam:] */

void FUN_10b07fa7c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1e2) = param_3;
  return;
}



/* Entry: 10b07fa84; end: 10b07fa8b; -[SCSnapCommonLoggingParamsBuilder withFinalSelectedMultiCamLayout:] */

void FUN_10b07fa84(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1e8) = param_3;
  return;
}



/* Entry: 10b07fa8c; end: 10b07fa93; -[SCSnapCommonLoggingParamsBuilder withIsShutterSoundEnabled:] */

void FUN_10b07fa8c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1f0) = param_3;
  return;
}



/* Entry: 10b07fa94; end: 10b07facb; -[SCSnapCommonLoggingParamsBuilder withSpotlightModes:] */

long FUN_10b07fa94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07facc; end: 10b07fad3; -[SCSnapCommonLoggingParamsBuilder withRingFlashColor:] */

void FUN_10b07facc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x200) = param_3;
  return;
}



/* Entry: 10b07fad4; end: 10b07fadb; -[SCSnapCommonLoggingParamsBuilder withRingFlashSize:] */

void FUN_10b07fad4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x208) = param_1;
  return;
}



/* Entry: 10b07fadc; end: 10b07fae3; -[SCSnapCommonLoggingParamsBuilder withRingFlashAutoEnableTooltipShown:] */

void FUN_10b07fadc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x210) = param_3;
  return;
}



/* Entry: 10b07fae4; end: 10b07faeb; -[SCSnapCommonLoggingParamsBuilder withRingFlashAutoEnable:] */

void FUN_10b07fae4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x211) = param_3;
  return;
}



/* Entry: 10b07faec; end: 10b07fb23; -[SCSnapCommonLoggingParamsBuilder withCameraFlipActionDuringCapture:] */

long FUN_10b07faec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x218) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07fb24; end: 10b07fb2b; -[SCSnapCommonLoggingParamsBuilder withToneModeAdjustedImageDiff:] */

void FUN_10b07fb24(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x220) = param_1;
  return;
}



/* Entry: 10b07fb2c; end: 10b07fb33; -[SCSnapCommonLoggingParamsBuilder withToneModeFineTuningValue:] */

void FUN_10b07fb2c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x228) = param_1;
  return;
}



/* Entry: 10b07fb34; end: 10b07fb3b; -[SCSnapCommonLoggingParamsBuilder withToneModeSliderValue:] */

void FUN_10b07fb34(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x230) = param_1;
  return;
}



/* Entry: 10b07fb3c; end: 10b07fb73; -[SCSnapCommonLoggingParamsBuilder withToneModeToneMappingParams:] */

long FUN_10b07fb3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x238) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07fb74; end: 10b07fb7b; -[SCSnapCommonLoggingParamsBuilder withRecordingSpeed:] */

void FUN_10b07fb74(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x240) = param_1;
  return;
}



/* Entry: 10b07fb7c; end: 10b07fb83; -[SCSnapCommonLoggingParamsBuilder withRingStyle:] */

void FUN_10b07fb7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x248) = param_3;
  return;
}



/* Entry: 10b07fb84; end: 10b07fb8b; -[SCSnapCommonLoggingParamsBuilder withVideoStabilizationMode:] */

void FUN_10b07fb84(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x250) = param_3;
  return;
}



/* Entry: 10b07fb8c; end: 10b07fb93; -[SCSnapCommonLoggingParamsBuilder withBackCameraDeviceType:] */

void FUN_10b07fb8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x260) = param_3;
  return;
}



/* Entry: 10b07fb94; end: 10b07fb9b; -[SCSnapCommonLoggingParamsBuilder withLensPosition:] */

void FUN_10b07fb94(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x268) = param_1;
  return;
}



/* Entry: 10b07fb9c; end: 10b07fbd3; -[SCSnapCommonLoggingParamsBuilder withZoomFactorsRange:] */

long FUN_10b07fb9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x270);
  *(undefined8 *)(param_1 + 0x270) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07fbd4; end: 10b07fbdb; -[SCSnapCommonLoggingParamsBuilder withPreCaptureZoomLevel:] */

void FUN_10b07fbd4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x278) = param_1;
  return;
}



/* Entry: 10b07fbdc; end: 10b07fbe3; -[SCSnapCommonLoggingParamsBuilder withZoomLevelGroup:] */

void FUN_10b07fbdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x280) = param_3;
  return;
}



/* Entry: 10b07fbe4; end: 10b07fbeb; -[SCSnapCommonLoggingParamsBuilder withCaptureZoomSource:] */

void FUN_10b07fbe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x288) = param_3;
  return;
}



/* Entry: 10b07fbec; end: 10b07fbf3; -[SCSnapCommonLoggingParamsBuilder withIsDeviceInMotion:] */

void FUN_10b07fbec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x290) = param_3;
  return;
}



/* Entry: 10b07fbf4; end: 10b07fbfb; -[SCSnapCommonLoggingParamsBuilder withMotionValue:] */

void FUN_10b07fbf4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x294) = param_1;
  return;
}



/* Entry: 10b07fbfc; end: 10b07fc03; -[SCSnapCommonLoggingParamsBuilder withMultiSnapCount:] */

void FUN_10b07fbfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x298) = param_3;
  return;
}



/* Entry: 10b07fc04; end: 10b07fc0b; -[SCSnapCommonLoggingParamsBuilder withMultiSnapIndex:] */

void FUN_10b07fc04(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2a0) = param_3;
  return;
}



/* Entry: 10b07fc0c; end: 10b07fc13; -[SCSnapCommonLoggingParamsBuilder withDeletedSegments:] */

void FUN_10b07fc0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2a8) = param_3;
  return;
}



/* Entry: 10b07fc14; end: 10b07fc1b; -[SCSnapCommonLoggingParamsBuilder withTrimmed:] */

void FUN_10b07fc14(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2b0) = param_3;
  return;
}



/* Entry: 10b07fc1c; end: 10b07fc23; -[SCSnapCommonLoggingParamsBuilder withTrimToolOpenCount:] */

void FUN_10b07fc1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2b8) = param_3;
  return;
}



/* Entry: 10b07fc24; end: 10b07fc2b; -[SCSnapCommonLoggingParamsBuilder withHasIndividualCreativeTools:] */

void FUN_10b07fc24(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2c0) = param_3;
  return;
}



/* Entry: 10b07fc2c; end: 10b07fc63; -[SCSnapCommonLoggingParamsBuilder withMultiSnapBundleId:] */

long FUN_10b07fc2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2c8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07fc64; end: 10b07fc6b; -[SCSnapCommonLoggingParamsBuilder withMultiSnapPreviewCount:] */

void FUN_10b07fc64(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2d0) = param_3;
  return;
}



/* Entry: 10b07fc6c; end: 10b07fc73; -[SCSnapCommonLoggingParamsBuilder withMultiSnapPreviewIndex:] */

void FUN_10b07fc6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2d8) = param_3;
  return;
}



/* Entry: 10b07fc74; end: 10b07fc7b; -[SCSnapCommonLoggingParamsBuilder withMultiSnapOutputCount:] */

void FUN_10b07fc74(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2e0) = param_3;
  return;
}



/* Entry: 10b07fc7c; end: 10b07fc83; -[SCSnapCommonLoggingParamsBuilder withMultiSnapOutputIndex:] */

void FUN_10b07fc7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2e8) = param_3;
  return;
}



/* Entry: 10b07fc84; end: 10b07fcbb; -[SCSnapCommonLoggingParamsBuilder withLensSessionId:] */

long FUN_10b07fc84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2f0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07fcbc; end: 10b07fcf3; -[SCSnapCommonLoggingParamsBuilder withArBarTabSessionId:] */

long FUN_10b07fcbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x2f8);
  *(undefined8 *)(param_1 + 0x2f8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07fcf4; end: 10b07fd2b; -[SCSnapCommonLoggingParamsBuilder withArBarTabCategoryId:] */

long FUN_10b07fcf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x300);
  *(undefined8 *)(param_1 + 0x300) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07fd2c; end: 10b07fd63; -[SCSnapCommonLoggingParamsBuilder withPostCaptureLensId:] */

long FUN_10b07fd2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x308);
  *(undefined8 *)(param_1 + 0x308) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07fd64; end: 10b07fd9b; -[SCSnapCommonLoggingParamsBuilder withLensId:] */

long FUN_10b07fd64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x310);
  *(undefined8 *)(param_1 + 0x310) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07fd9c; end: 10b07fdd3; -[SCSnapCommonLoggingParamsBuilder withLensOptionId:] */

long FUN_10b07fd9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x318);
  *(undefined8 *)(param_1 + 0x318) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b07fdd4; end: 10b07fddb; -[SCSnapCommonLoggingParamsBuilder withLensOptionSourceType:] */

void FUN_10b07fdd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 800) = param_3;
  return;
}



/* Entry: 10b07fddc; end: 10b07fde3; -[SCSnapCommonLoggingParamsBuilder withLensType:] */

void FUN_10b07fddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x330) = param_3;
  return;
}



/* Entry: 10b07fde4; end: 10b07fdeb; -[SCSnapCommonLoggingParamsBuilder withFaceFrontCameraCount:] */

void FUN_10b07fde4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x338) = param_3;
  return;
}



/* Entry: 10b07fdec; end: 10b07fdf3; -[SCSnapCommonLoggingParamsBuilder withFaceBackCameraCount:] */

void FUN_10b07fdec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x340) = param_3;
  return;
}



/* Entry: 10b07fdf4; end: 10b07fdfb; -[SCSnapCommonLoggingParamsBuilder withLensIndexPos:] */

void FUN_10b07fdf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x348) = param_3;
  return;
}


