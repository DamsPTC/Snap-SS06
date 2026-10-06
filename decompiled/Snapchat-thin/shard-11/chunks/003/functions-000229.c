/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10844a0cc; end: 10844a0d3; -[SCSnapCommonLoggingParameters setCameraSource:] */

void FUN_10844a0cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 400) = param_3;
  return;
}



/* Entry: 10844a0d4; end: 10844a0db; -[SCSnapCommonLoggingParameters cameraMode] */

undefined8 FUN_10844a0d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}



/* Entry: 10844a0dc; end: 10844a0e3; -[SCSnapCommonLoggingParameters setCameraMode:] */

void FUN_10844a0dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x198) = param_3;
  return;
}



/* Entry: 10844a0e4; end: 10844a0eb; -[SCSnapCommonLoggingParameters activeCameraModes] */

undefined8 FUN_10844a0e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a0);
}



/* Entry: 10844a0ec; end: 10844a0f3; -[SCSnapCommonLoggingParameters setActiveCameraModes:] */

void FUN_10844a0ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10844a0f4; end: 10844a0fb; -[SCSnapCommonLoggingParameters gridModeState] */

undefined8 FUN_10844a0f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a8);
}



/* Entry: 10844a0fc; end: 10844a103; -[SCSnapCommonLoggingParameters setGridModeState:] */

void FUN_10844a0fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1a8) = param_3;
  return;
}



/* Entry: 10844a104; end: 10844a10b; -[SCSnapCommonLoggingParameters flashTriggerSource] */

undefined8 FUN_10844a104(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b0);
}



/* Entry: 10844a10c; end: 10844a113; -[SCSnapCommonLoggingParameters setFlashTriggerSource:] */

void FUN_10844a10c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1b0) = param_3;
  return;
}



/* Entry: 10844a114; end: 10844a11b; -[SCSnapCommonLoggingParameters captureSource] */

undefined8 FUN_10844a114(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b8);
}



/* Entry: 10844a11c; end: 10844a123; -[SCSnapCommonLoggingParameters setCaptureSource:] */

void FUN_10844a11c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1b8) = param_3;
  return;
}



/* Entry: 10844a124; end: 10844a12b; -[SCSnapCommonLoggingParameters withZooming] */

undefined1 FUN_10844a124(long param_1)

{
  return *(undefined1 *)(param_1 + 0x24);
}



/* Entry: 10844a12c; end: 10844a133; -[SCSnapCommonLoggingParameters setWithZooming:] */

void FUN_10844a12c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x24) = param_3;
  return;
}



/* Entry: 10844a134; end: 10844a13b; -[SCSnapCommonLoggingParameters zoomingLevel] */

undefined8 FUN_10844a134(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c0);
}



/* Entry: 10844a13c; end: 10844a143; -[SCSnapCommonLoggingParameters setZoomingLevel:] */

void FUN_10844a13c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x1c0) = param_1;
  return;
}



/* Entry: 10844a144; end: 10844a14b; -[SCSnapCommonLoggingParameters brightnessValue] */

undefined4 FUN_10844a144(long param_1)

{
  return *(undefined4 *)(param_1 + 0x6c);
}



/* Entry: 10844a14c; end: 10844a153; -[SCSnapCommonLoggingParameters setBrightnessValue:] */

void FUN_10844a14c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x6c) = param_1;
  return;
}



/* Entry: 10844a154; end: 10844a15b; -[SCSnapCommonLoggingParameters exposureBias] */

undefined8 FUN_10844a154(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c8);
}



/* Entry: 10844a15c; end: 10844a163; -[SCSnapCommonLoggingParameters setExposureBias:] */

void FUN_10844a15c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10844a164; end: 10844a16b; -[SCSnapCommonLoggingParameters isBatchCapture] */

undefined1 FUN_10844a164(long param_1)

{
  return *(undefined1 *)(param_1 + 0x25);
}



/* Entry: 10844a16c; end: 10844a173; -[SCSnapCommonLoggingParameters setIsBatchCapture:] */

void FUN_10844a16c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x25) = param_3;
  return;
}



/* Entry: 10844a174; end: 10844a17b; -[SCSnapCommonLoggingParameters isTimeline] */

undefined1 FUN_10844a174(long param_1)

{
  return *(undefined1 *)(param_1 + 0x26);
}



/* Entry: 10844a17c; end: 10844a183; -[SCSnapCommonLoggingParameters setIsTimeline:] */

void FUN_10844a17c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x26) = param_3;
  return;
}



/* Entry: 10844a184; end: 10844a18b; -[SCSnapCommonLoggingParameters isMultiCam] */

undefined1 FUN_10844a184(long param_1)

{
  return *(undefined1 *)(param_1 + 0x27);
}



/* Entry: 10844a18c; end: 10844a193; -[SCSnapCommonLoggingParameters setIsMultiCam:] */

void FUN_10844a18c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x27) = param_3;
  return;
}



/* Entry: 10844a194; end: 10844a19b; -[SCSnapCommonLoggingParameters finalSelectedMultiCamLayout] */

undefined8 FUN_10844a194(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d0);
}



/* Entry: 10844a19c; end: 10844a1a3; -[SCSnapCommonLoggingParameters setFinalSelectedMultiCamLayout:] */

void FUN_10844a19c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1d0) = param_3;
  return;
}



/* Entry: 10844a1a4; end: 10844a1ab; -[SCSnapCommonLoggingParameters isShutterSoundEnabled] */

undefined1 FUN_10844a1a4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 10844a1ac; end: 10844a1b3; -[SCSnapCommonLoggingParameters setIsShutterSoundEnabled:] */

void FUN_10844a1ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10844a1b4; end: 10844a1bb; -[SCSnapCommonLoggingParameters spotlightModes] */

undefined8 FUN_10844a1b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d8);
}



/* Entry: 10844a1bc; end: 10844a1c3; -[SCSnapCommonLoggingParameters setSpotlightModes:] */

void FUN_10844a1bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10844a1c4; end: 10844a1cb; -[SCSnapCommonLoggingParameters cameraShortcutId] */

undefined8 FUN_10844a1c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e0);
}



/* Entry: 10844a1cc; end: 10844a1d3; -[SCSnapCommonLoggingParameters setCameraShortcutId:] */

void FUN_10844a1cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10844a1d4; end: 10844a1db; -[SCSnapCommonLoggingParameters ringFlashColor] */

undefined8 FUN_10844a1d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e8);
}



/* Entry: 10844a1dc; end: 10844a1e3; -[SCSnapCommonLoggingParameters setRingFlashColor:] */

void FUN_10844a1dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1e8) = param_3;
  return;
}



/* Entry: 10844a1e4; end: 10844a1eb; -[SCSnapCommonLoggingParameters ringFlashSize] */

undefined8 FUN_10844a1e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f0);
}



/* Entry: 10844a1ec; end: 10844a1f3; -[SCSnapCommonLoggingParameters setRingFlashSize:] */

void FUN_10844a1ec(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x1f0) = param_1;
  return;
}



/* Entry: 10844a1f4; end: 10844a1fb; -[SCSnapCommonLoggingParameters ringFlashAutoEnableTooltipShown] */

undefined1 FUN_10844a1f4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x29);
}



/* Entry: 10844a1fc; end: 10844a203; -[SCSnapCommonLoggingParameters setRingFlashAutoEnableTooltipShown:] */

void FUN_10844a1fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x29) = param_3;
  return;
}



/* Entry: 10844a204; end: 10844a20b; -[SCSnapCommonLoggingParameters ringFlashAutoEnable] */

undefined1 FUN_10844a204(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2a);
}



/* Entry: 10844a20c; end: 10844a213; -[SCSnapCommonLoggingParameters setRingFlashAutoEnable:] */

void FUN_10844a20c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2a) = param_3;
  return;
}



/* Entry: 10844a214; end: 10844a21b; -[SCSnapCommonLoggingParameters cameraFlipActionDuringCapture] */

undefined8 FUN_10844a214(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f8);
}



/* Entry: 10844a21c; end: 10844a223; -[SCSnapCommonLoggingParameters setCameraFlipActionDuringCapture:] */

void FUN_10844a21c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10844a224; end: 10844a22b; -[SCSnapCommonLoggingParameters toneModeAdjustedImageDiff] */

undefined8 FUN_10844a224(long param_1)

{
  return *(undefined8 *)(param_1 + 0x200);
}



/* Entry: 10844a22c; end: 10844a233; -[SCSnapCommonLoggingParameters setToneModeAdjustedImageDiff:] */

void FUN_10844a22c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x200) = param_1;
  return;
}



/* Entry: 10844a234; end: 10844a23b; -[SCSnapCommonLoggingParameters toneModeFineTuningValue] */

undefined8 FUN_10844a234(long param_1)

{
  return *(undefined8 *)(param_1 + 0x208);
}



/* Entry: 10844a23c; end: 10844a243; -[SCSnapCommonLoggingParameters setToneModeFineTuningValue:] */

void FUN_10844a23c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x208) = param_1;
  return;
}



/* Entry: 10844a244; end: 10844a24b; -[SCSnapCommonLoggingParameters toneModeSliderValue] */

undefined8 FUN_10844a244(long param_1)

{
  return *(undefined8 *)(param_1 + 0x210);
}



/* Entry: 10844a24c; end: 10844a253; -[SCSnapCommonLoggingParameters setToneModeSliderValue:] */

void FUN_10844a24c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x210) = param_1;
  return;
}



/* Entry: 10844a254; end: 10844a25b; -[SCSnapCommonLoggingParameters toneModeToneMappingParams] */

undefined8 FUN_10844a254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x218);
}



/* Entry: 10844a25c; end: 10844a263; -[SCSnapCommonLoggingParameters setToneModeToneMappingParams:] */

void FUN_10844a25c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10844a264; end: 10844a26b; -[SCSnapCommonLoggingParameters recordingSpeed] */

undefined8 FUN_10844a264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x220);
}



/* Entry: 10844a26c; end: 10844a273; -[SCSnapCommonLoggingParameters setRecordingSpeed:] */

void FUN_10844a26c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x220) = param_1;
  return;
}



/* Entry: 10844a274; end: 10844a27b; -[SCSnapCommonLoggingParameters ringStyle] */

undefined8 FUN_10844a274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x228);
}



/* Entry: 10844a27c; end: 10844a283; -[SCSnapCommonLoggingParameters setRingStyle:] */

void FUN_10844a27c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x228) = param_3;
  return;
}



/* Entry: 10844a284; end: 10844a28b; -[SCSnapCommonLoggingParameters videoStabilizationMode] */

undefined8 FUN_10844a284(long param_1)

{
  return *(undefined8 *)(param_1 + 0x230);
}



/* Entry: 10844a28c; end: 10844a293; -[SCSnapCommonLoggingParameters setVideoStabilizationMode:] */

void FUN_10844a28c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x230) = param_3;
  return;
}



/* Entry: 10844a294; end: 10844a29b; -[SCSnapCommonLoggingParameters fullSnapTimeSec] */

undefined8 FUN_10844a294(long param_1)

{
  return *(undefined8 *)(param_1 + 0x238);
}



/* Entry: 10844a29c; end: 10844a2a3; -[SCSnapCommonLoggingParameters setFullSnapTimeSec:] */

void FUN_10844a29c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x238) = param_1;
  return;
}



/* Entry: 10844a2a4; end: 10844a2ab; -[SCSnapCommonLoggingParameters segmentTimeSec] */

undefined8 FUN_10844a2a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x240);
}



/* Entry: 10844a2ac; end: 10844a2b3; -[SCSnapCommonLoggingParameters setSegmentTimeSec:] */

void FUN_10844a2ac(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x240) = param_1;
  return;
}



/* Entry: 10844a2b4; end: 10844a2bb; -[SCSnapCommonLoggingParameters sectionType] */

undefined8 FUN_10844a2b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x248);
}



/* Entry: 10844a2bc; end: 10844a2c3; -[SCSnapCommonLoggingParameters setSectionType:] */

void FUN_10844a2bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x248) = param_3;
  return;
}



/* Entry: 10844a2c4; end: 10844a2cb; -[SCSnapCommonLoggingParameters backCameraDeviceType] */

undefined8 FUN_10844a2c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x250);
}



/* Entry: 10844a2cc; end: 10844a2d3; -[SCSnapCommonLoggingParameters setBackCameraDeviceType:] */

void FUN_10844a2cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x250) = param_3;
  return;
}



/* Entry: 10844a2d4; end: 10844a2db; -[SCSnapCommonLoggingParameters lensPosition] */

undefined4 FUN_10844a2d4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}



/* Entry: 10844a2dc; end: 10844a2e3; -[SCSnapCommonLoggingParameters setLensPosition:] */

void FUN_10844a2dc(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x70) = param_1;
  return;
}



/* Entry: 10844a2e4; end: 10844a2eb; -[SCSnapCommonLoggingParameters zoomFactorsRange] */

undefined8 FUN_10844a2e4(long param_1)

{
  return *(undefined8 *)(param_1 + 600);
}



/* Entry: 10844a2ec; end: 10844a2f3; -[SCSnapCommonLoggingParameters setZoomFactorsRange:] */

void FUN_10844a2ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10844a2f4; end: 10844a2fb; -[SCSnapCommonLoggingParameters preCaptureZoomLevel] */

undefined8 FUN_10844a2f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x260);
}



/* Entry: 10844a2fc; end: 10844a303; -[SCSnapCommonLoggingParameters setPreCaptureZoomLevel:] */

void FUN_10844a2fc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x260) = param_1;
  return;
}



/* Entry: 10844a304; end: 10844a30b; -[SCSnapCommonLoggingParameters zoomLevelGroup] */

undefined8 FUN_10844a304(long param_1)

{
  return *(undefined8 *)(param_1 + 0x268);
}



/* Entry: 10844a30c; end: 10844a313; -[SCSnapCommonLoggingParameters setZoomLevelGroup:] */

void FUN_10844a30c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x268) = param_3;
  return;
}



/* Entry: 10844a314; end: 10844a31b; -[SCSnapCommonLoggingParameters captureZoomSource] */

undefined8 FUN_10844a314(long param_1)

{
  return *(undefined8 *)(param_1 + 0x270);
}



/* Entry: 10844a31c; end: 10844a323; -[SCSnapCommonLoggingParameters setCaptureZoomSource:] */

void FUN_10844a31c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x270) = param_3;
  return;
}



/* Entry: 10844a324; end: 10844a32b; -[SCSnapCommonLoggingParameters isDeviceInMotion] */

undefined1 FUN_10844a324(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2b);
}



/* Entry: 10844a32c; end: 10844a333; -[SCSnapCommonLoggingParameters setIsDeviceInMotion:] */

void FUN_10844a32c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2b) = param_3;
  return;
}



/* Entry: 10844a334; end: 10844a33b; -[SCSnapCommonLoggingParameters motionValue] */

undefined4 FUN_10844a334(long param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



/* Entry: 10844a33c; end: 10844a343; -[SCSnapCommonLoggingParameters setMotionValue:] */

void FUN_10844a33c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x74) = param_1;
  return;
}



/* Entry: 10844a344; end: 10844a34b; -[SCSnapCommonLoggingParameters scanSessionId] */

undefined8 FUN_10844a344(long param_1)

{
  return *(undefined8 *)(param_1 + 0x278);
}



/* Entry: 10844a34c; end: 10844a353; -[SCSnapCommonLoggingParameters setScanSessionId:] */

void FUN_10844a34c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10844a354; end: 10844a35b; -[SCSnapCommonLoggingParameters multiSnapCount] */

undefined8 FUN_10844a354(long param_1)

{
  return *(undefined8 *)(param_1 + 0x280);
}



/* Entry: 10844a35c; end: 10844a363; -[SCSnapCommonLoggingParameters setMultiSnapCount:] */

void FUN_10844a35c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x280) = param_3;
  return;
}



/* Entry: 10844a364; end: 10844a36b; -[SCSnapCommonLoggingParameters multiSnapIndex] */

undefined8 FUN_10844a364(long param_1)

{
  return *(undefined8 *)(param_1 + 0x288);
}



/* Entry: 10844a36c; end: 10844a373; -[SCSnapCommonLoggingParameters setMultiSnapIndex:] */

void FUN_10844a36c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x288) = param_3;
  return;
}



/* Entry: 10844a374; end: 10844a37b; -[SCSnapCommonLoggingParameters deletedSegments] */

undefined8 FUN_10844a374(long param_1)

{
  return *(undefined8 *)(param_1 + 0x290);
}



/* Entry: 10844a37c; end: 10844a383; -[SCSnapCommonLoggingParameters setDeletedSegments:] */

void FUN_10844a37c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x290) = param_3;
  return;
}



/* Entry: 10844a384; end: 10844a38b; -[SCSnapCommonLoggingParameters trimmed] */

undefined1 FUN_10844a384(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2c);
}



/* Entry: 10844a38c; end: 10844a393; -[SCSnapCommonLoggingParameters setTrimmed:] */

void FUN_10844a38c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2c) = param_3;
  return;
}



/* Entry: 10844a394; end: 10844a39b; -[SCSnapCommonLoggingParameters trimToolOpenCount] */

undefined8 FUN_10844a394(long param_1)

{
  return *(undefined8 *)(param_1 + 0x298);
}



/* Entry: 10844a39c; end: 10844a3a3; -[SCSnapCommonLoggingParameters setTrimToolOpenCount:] */

void FUN_10844a39c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x298) = param_3;
  return;
}



/* Entry: 10844a3a4; end: 10844a3ab; -[SCSnapCommonLoggingParameters hasIndividualCreativeTools] */

undefined1 FUN_10844a3a4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2d);
}



/* Entry: 10844a3ac; end: 10844a3b3; -[SCSnapCommonLoggingParameters setHasIndividualCreativeTools:] */

void FUN_10844a3ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2d) = param_3;
  return;
}



/* Entry: 10844a3b4; end: 10844a3bb; -[SCSnapCommonLoggingParameters multiSnapBundleId] */

undefined8 FUN_10844a3b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2a0);
}



/* Entry: 10844a3bc; end: 10844a3c3; -[SCSnapCommonLoggingParameters setMultiSnapBundleId:] */

void FUN_10844a3bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10844a3c4; end: 10844a3cb; -[SCSnapCommonLoggingParameters multiSnapPreviewCount] */

undefined8 FUN_10844a3c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2a8);
}



/* Entry: 10844a3cc; end: 10844a3d3; -[SCSnapCommonLoggingParameters setMultiSnapPreviewCount:] */

void FUN_10844a3cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2a8) = param_3;
  return;
}



/* Entry: 10844a3d4; end: 10844a3db; -[SCSnapCommonLoggingParameters multiSnapPreviewIndex] */

undefined8 FUN_10844a3d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2b0);
}



/* Entry: 10844a3dc; end: 10844a3e3; -[SCSnapCommonLoggingParameters setMultiSnapPreviewIndex:] */

void FUN_10844a3dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2b0) = param_3;
  return;
}



/* Entry: 10844a3e4; end: 10844a3eb; -[SCSnapCommonLoggingParameters multiSnapOutputCount] */

undefined8 FUN_10844a3e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2b8);
}


