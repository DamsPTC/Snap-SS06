/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043cb0c4; end: 1043cb0fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb0c4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113075510);
  *(undefined8 *)(unaff_x20 + _DAT_113075510) = param_1;
  _objc_retain();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043cb0fc; end: 1043cb12b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb0fc(undefined4 param_1)

{
  undefined4 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined4 *)(unaff_x20 + _DAT_113075518);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043cb12c; end: 1043cb16b; +[SCImageCaptureConfigurationBuilder imageCaptureConfigurationWithExistingImageCaptureConfiguration:] */

void FUN_1043cb12c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1043ccb34(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043cb16c; end: 1043cb1cb; -[SCImageCaptureConfigurationBuilder withExposureCaptureDeadline:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043cb16c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130754b8);
  *(undefined8 *)(param_1 + _DAT_1130754b8) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1043cb1cc; end: 1043cb1db; -[SCImageCaptureConfigurationBuilder withExposureCaptureDelayEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb1cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1130754c0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb1dc; end: 1043cb1eb; -[SCImageCaptureConfigurationBuilder withIsStabilizationDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb1dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1130754c8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb1ec; end: 1043cb203; -[SCImageCaptureConfigurationBuilder withAspectRatio:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb1ec(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_1130754d0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb204; end: 1043cb20f; -[SCImageCaptureConfigurationBuilder withSnapSessionID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb204(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_1130754d8);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043cb210; end: 1043cb21b; -[SCImageCaptureConfigurationBuilder withCaptureSessionID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb210(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_1130754e0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043cb21c; end: 1043cb227; -[SCImageCaptureConfigurationBuilder withLensSessionID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb21c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_1130754e8);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043cb228; end: 1043cb233; -[SCImageCaptureConfigurationBuilder withActiveLensID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb228(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_1130754f0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043cb234; end: 1043cb243; -[SCImageCaptureConfigurationBuilder withIsGenAI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb234(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1130754f8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb244; end: 1043cb253; -[SCImageCaptureConfigurationBuilder withShouldCaptureFromVideo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb244(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075500) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb254; end: 1043cb26b; -[SCImageCaptureConfigurationBuilder withZoomFactor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb254(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113075508);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb26c; end: 1043cb2cb; -[SCImageCaptureConfigurationBuilder withCapturerState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043cb26c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113075510);
  *(undefined8 *)(param_1 + _DAT_113075510) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1043cb2cc; end: 1043cb2e3; -[SCImageCaptureConfigurationBuilder withFieldOfView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb2cc(undefined4 param_1,long param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 + _DAT_113075518);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb2e4; end: 1043cb2f3; -[SCImageCaptureConfigurationBuilder withLensInitiatedCapture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb2e4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075520) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb2f4; end: 1043cb303; -[SCImageCaptureConfigurationBuilder withIsMainCamera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb2f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075528) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb304; end: 1043cb313; -[SCImageCaptureConfigurationBuilder withBatchCaptureActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb304(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075530) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb314; end: 1043cb323; -[SCImageCaptureConfigurationBuilder withInitiatedRecording:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb314(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075538) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb324; end: 1043cb383; -[SCImageCaptureConfigurationBuilder withAudioConfigurationToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043cb324(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113075540);
  *(undefined8 *)(param_1 + _DAT_113075540) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1043cb384; end: 1043cb393; -[SCImageCaptureConfigurationBuilder withIsCameraSettingsShutterSoundOn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb384(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075548) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb394; end: 1043cb3ab; -[SCImageCaptureConfigurationBuilder withCaptureTrigger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb394(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113075550);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb3ac; end: 1043cb3b7; -[SCImageCaptureConfigurationBuilder withSnapSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb3ac(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113075558);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043cb3b8; end: 1043cb41b; -[SCImageCaptureConfigurationBuilder withActiveCameraModes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb3b8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_3,PTR___sSSN_11034da80);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_113075560);
  *(long *)(param_1 + _DAT_113075560) = param_3;
  _objc_retain();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043cb41c; end: 1043cb42b; -[SCImageCaptureConfigurationBuilder withShouldEnableHRSI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb41c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075568) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb42c; end: 1043cb43b; -[SCImageCaptureConfigurationBuilder withShouldDisableFixDoubleLensEffects:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb42c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075570) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb43c; end: 1043cb447; -[SCImageCaptureConfigurationBuilder withDetailedCameraModes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb43c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113075578);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043cb448; end: 1043cb457; -[SCImageCaptureConfigurationBuilder withScanSessionLaunched:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb448(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075580) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb458; end: 1043cb46f; -[SCImageCaptureConfigurationBuilder withRingStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb458(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113075588);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb470; end: 1043cb487; -[SCImageCaptureConfigurationBuilder withCameraType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb470(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113075590);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb488; end: 1043cb497; -[SCImageCaptureConfigurationBuilder withIsNightModeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb488(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075598) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb498; end: 1043cb4a7; -[SCImageCaptureConfigurationBuilder withIsEnhancedNightModeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb498(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1130755a0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb4a8; end: 1043cb4bf; -[SCImageCaptureConfigurationBuilder withPhotoQualityPrioritization:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb4a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1130755a8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb4c0; end: 1043cb4cf; -[SCImageCaptureConfigurationBuilder withShouldApplySuperResolutionIfPossible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb4c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1130755b0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb4d0; end: 1043cb4db; -[SCImageCaptureConfigurationBuilder withSuperResolutionModelId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb4d0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_1130755b8);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043cb4dc; end: 1043cb53f;  */

void FUN_1043cb4dc(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + *param_4);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043cb540; end: 1043cb59f; -[SCImageCaptureConfigurationBuilder withFingerDownCaptureData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043cb540(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130755c0);
  *(undefined8 *)(param_1 + _DAT_1130755c0) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1043cb5a0; end: 1043cb5af; -[SCImageCaptureConfigurationBuilder withIsHDModeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb5a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1130755c8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb5b0; end: 1043cb5bf; -[SCImageCaptureConfigurationBuilder withIsGreenScreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb5b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1130755d0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb5c0; end: 1043cb5cf; -[SCImageCaptureConfigurationBuilder withCaptureOrientationFixEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb5c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1130755d8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cb5d0; end: 1043cbd53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cb5d0(long param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  undefined *puVar35;
  long lVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  long unaff_x20;
  undefined8 uVar41;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_b8;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_78;
  long lStack_70;
  
  bVar17 = *(byte *)(unaff_x20 + _DAT_1130754c0);
  if (bVar17 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_1130754c0) = 0;
  }
  bVar18 = *(byte *)(unaff_x20 + _DAT_1130754c8);
  if (bVar18 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_1130754c8) = 0;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130754d0);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_90 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_90 = *puVar1;
  }
  bVar19 = *(byte *)(unaff_x20 + _DAT_1130754f8);
  if (bVar19 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_1130754f8) = 0;
  }
  bVar20 = *(byte *)(unaff_x20 + _DAT_113075500);
  if (bVar20 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075500) = 0;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075508);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_98 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_98 = *puVar1;
  }
  puVar2 = (undefined4 *)(unaff_x20 + _DAT_113075518);
  if (*(char *)(puVar2 + 1) == '\x01') {
    uStack_9c = 0;
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
  }
  else {
    uStack_9c = *puVar2;
  }
  bVar21 = *(byte *)(unaff_x20 + _DAT_113075520);
  if (bVar21 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075520) = 0;
  }
  bVar22 = *(byte *)(unaff_x20 + _DAT_113075528);
  if (bVar22 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075528) = 0;
  }
  bVar23 = *(byte *)(unaff_x20 + _DAT_113075530);
  if (bVar23 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075530) = 0;
  }
  bVar24 = *(byte *)(unaff_x20 + _DAT_113075538);
  if (bVar24 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075538) = 0;
  }
  bVar25 = *(byte *)(unaff_x20 + _DAT_113075548);
  if (bVar25 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075548) = 0;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075550);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_b8 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_b8 = *puVar1;
  }
  bVar26 = *(byte *)(unaff_x20 + _DAT_113075568);
  if (bVar26 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075568) = 0;
  }
  bVar27 = *(byte *)(unaff_x20 + _DAT_113075570);
  if (bVar27 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075570) = 0;
  }
  bVar28 = *(byte *)(unaff_x20 + _DAT_113075580);
  if (bVar28 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075580) = 0;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075588);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_d0 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_d0 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075590);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_d8 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_d8 = *puVar1;
  }
  bVar29 = *(byte *)(unaff_x20 + _DAT_113075598);
  if (bVar29 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075598) = 0;
  }
  bVar30 = *(byte *)(unaff_x20 + _DAT_1130755a0);
  if (bVar30 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_1130755a0) = 0;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130755a8);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_e8 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_e8 = *puVar1;
  }
  bVar31 = *(byte *)(unaff_x20 + _DAT_1130755b0);
  if (bVar31 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_1130755b0) = 0;
  }
  bVar32 = *(byte *)(unaff_x20 + _DAT_1130755c8);
  if (bVar32 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_1130755c8) = 0;
  }
  bVar33 = *(byte *)(unaff_x20 + _DAT_1130755d0);
  if (bVar33 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_1130755d0) = 0;
  }
  bVar34 = *(byte *)(unaff_x20 + _DAT_1130755d8);
  if (bVar34 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_1130755d8) = 0;
  }
  uVar41 = *(undefined8 *)(unaff_x20 + _DAT_1130754b8);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1130754d8);
  uVar10 = ((undefined8 *)(unaff_x20 + _DAT_1130754d8))[1];
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_1130754e0);
  uVar11 = ((undefined8 *)(unaff_x20 + _DAT_1130754e0))[1];
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130754e8);
  uVar12 = ((undefined8 *)(unaff_x20 + _DAT_1130754e8))[1];
  uVar39 = *(undefined8 *)(unaff_x20 + _DAT_113075510);
  uVar40 = *(undefined8 *)(unaff_x20 + _DAT_113075540);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_1130754f0);
  uVar13 = ((undefined8 *)(unaff_x20 + _DAT_1130754f0))[1];
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_113075558);
  uVar14 = ((undefined8 *)(unaff_x20 + _DAT_113075558))[1];
  uVar37 = *(undefined8 *)(unaff_x20 + _DAT_113075560);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_113075578);
  uVar15 = ((undefined8 *)(unaff_x20 + _DAT_113075578))[1];
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_1130755b8);
  uVar16 = ((undefined8 *)(unaff_x20 + _DAT_1130755b8))[1];
  uVar38 = *(undefined8 *)(unaff_x20 + _DAT_1130755c0);
  FUN_1043cd068();
  lVar36 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar36 + _DAT_113075390) = uVar41;
  *(byte *)(lVar36 + _DAT_113075398) = bVar17 & 1;
  *(byte *)(lVar36 + _DAT_1130753a0) = bVar18 & 1;
  *(undefined8 *)(lVar36 + _DAT_1130753a8) = uStack_90;
  puVar1 = (undefined8 *)(lVar36 + _DAT_1130753b0);
  *puVar1 = uVar3;
  puVar1[1] = uVar10;
  puVar1 = (undefined8 *)(lVar36 + _DAT_1130753b8);
  *puVar1 = uVar4;
  puVar1[1] = uVar11;
  puVar1 = (undefined8 *)(lVar36 + _DAT_1130753c0);
  *puVar1 = uVar5;
  puVar1[1] = uVar12;
  puVar1 = (undefined8 *)(lVar36 + _DAT_1130753c8);
  *puVar1 = uVar6;
  puVar1[1] = uVar13;
  *(byte *)(lVar36 + _DAT_1130753d0) = bVar19 & 1;
  *(byte *)(lVar36 + _DAT_1130753d8) = bVar20 & 1;
  *(undefined8 *)(lVar36 + _DAT_1130753e0) = uStack_98;
  *(undefined8 *)(lVar36 + _DAT_1130753e8) = uVar39;
  *(undefined4 *)(lVar36 + _DAT_1130753f0) = uStack_9c;
  *(byte *)(lVar36 + _DAT_1130753f8) = bVar21 & 1;
  *(byte *)(lVar36 + _DAT_113075400) = bVar22 & 1;
  *(byte *)(lVar36 + _DAT_113075408) = bVar23 & 1;
  *(byte *)(lVar36 + _DAT_113075410) = bVar24 & 1;
  *(undefined8 *)(lVar36 + _DAT_113075418) = uVar40;
  *(byte *)(lVar36 + _DAT_113075420) = bVar25 & 1;
  *(undefined8 *)(lVar36 + _DAT_113075428) = uStack_b8;
  puVar1 = (undefined8 *)(lVar36 + _DAT_113075430);
  *puVar1 = uVar7;
  puVar1[1] = uVar14;
  *(undefined8 *)(lVar36 + _DAT_113075438) = uVar37;
  *(byte *)(lVar36 + _DAT_113075440) = bVar26 & 1;
  *(byte *)(lVar36 + _DAT_113075448) = bVar27 & 1;
  puVar1 = (undefined8 *)(lVar36 + _DAT_113075450);
  *puVar1 = uVar8;
  puVar1[1] = uVar15;
  *(byte *)(lVar36 + _DAT_113075458) = bVar28 & 1;
  *(undefined8 *)(lVar36 + _DAT_113075460) = uStack_d0;
  *(undefined8 *)(lVar36 + _DAT_113075468) = uStack_d8;
  *(byte *)(lVar36 + _DAT_113075470) = bVar29 & 1;
  *(byte *)(lVar36 + _DAT_113075478) = bVar30 & 1;
  *(undefined8 *)(lVar36 + _DAT_113075480) = uStack_e8;
  *(byte *)(lVar36 + _DAT_113075488) = bVar31 & 1;
  puVar1 = (undefined8 *)(lVar36 + _DAT_113075490);
  *puVar1 = uVar9;
  puVar1[1] = uVar16;
  *(undefined8 *)(lVar36 + _DAT_113075498) = uVar38;
  *(byte *)(lVar36 + _DAT_1130754a0) = bVar32 & 1;
  *(byte *)(lVar36 + _DAT_1130754a8) = bVar33 & 1;
  *(byte *)(lVar36 + _DAT_1130754b0) = bVar34 & 1;
  puVar35 = PTR_s_init_1125d9248;
  lStack_78 = lVar36;
  lStack_70 = param_1;
  _objc_retain(uVar41);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar13);
  _objc_retain(uVar39);
  _objc_retain(uVar40);
  _swift_bridgeObjectRetain(uVar14);
  _swift_bridgeObjectRetain(uVar37);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar16);
  _objc_retain(uVar38);
  _objc_msgSendSuper2(&lStack_78,puVar35);
  return;
}



/* Entry: 1043cbd54; end: 1043cbd97; -[SCImageCaptureConfigurationBuilder build] */

void FUN_1043cbd54(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043cb5d0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043cbd98; end: 1043cbddb; -[SCImageCaptureConfigurationBuilder safeBuildAndReturnError:] */

void FUN_1043cbd98(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043cb5d0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043cbddc; end: 1043cc027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cbddc(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_1130754b8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_1130754c0) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_1130754c8) = 2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130754d0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130754d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130754e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130754e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130754f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_1130754f8) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_113075500) = 2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075508);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_113075510) = 0;
  puVar2 = (undefined4 *)(unaff_x20 + _DAT_113075518);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_113075520) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_113075528) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_113075530) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_113075538) = 2;
  *(undefined8 *)(unaff_x20 + _DAT_113075540) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_113075548) = 2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075550);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075558);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113075560) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_113075568) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_113075570) = 2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075578);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_113075580) = 2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075588);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075590);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_113075598) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_1130755a0) = 2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130755a8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_1130755b0) = 2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130755b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130755c0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_1130755c8) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_1130755d0) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_1130755d8) = 2;
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043cc028; end: 1043cc047; -[SCImageCaptureConfigurationBuilder init] */

void FUN_1043cc028(void)

{
  FUN_1043cbddc();
  return;
}



/* Entry: 1043cc048; end: 1043cc04b;  */

void FUN_1043cc048(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043cc04c; end: 1043cc13f; -[SCImageCaptureConfigurationBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cc04c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130754b8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130754d8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130754e0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130754e8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130754f0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113075510));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113075540));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113075558 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113075560));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113075578 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130755b8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130755c0));
  return;
}



/* Entry: 1043cc140; end: 1043cc173;  */

void FUN_1043cc140(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043cc174; end: 1043cc267; -[SCImageCaptureConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cc174(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113075390));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130753b0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130753b8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130753c0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130753c8 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130753e8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113075418));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113075430 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113075438));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113075450 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113075490 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113075498));
  return;
}



/* Entry: 1043cc268; end: 1043cc7a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cc268(undefined8 *param_1)

{
  int iVar1;
  long unaff_x20;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_228 [16];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _swift_getObjectType();
  uStack_198 = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113075390) = uStack_198;
  *(undefined1 *)(unaff_x20 + _DAT_113075398) = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(unaff_x20 + _DAT_1130753a0) = *(undefined1 *)((long)param_1 + 9);
  *(undefined8 *)(unaff_x20 + _DAT_1130753a8) = param_1[2];
  uStack_1a8 = param_1[4];
  uStack_1b0 = param_1[3];
  uVar3 = param_1[3];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1130753b0);
  puVar2[1] = param_1[4];
  *puVar2 = uVar3;
  uStack_1b8 = param_1[6];
  uStack_1c0 = param_1[5];
  uVar3 = param_1[5];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1130753b8);
  puVar2[1] = param_1[6];
  *puVar2 = uVar3;
  uStack_1c8 = param_1[8];
  uStack_1d0 = param_1[7];
  uVar3 = param_1[7];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1130753c0);
  puVar2[1] = param_1[8];
  *puVar2 = uVar3;
  uStack_1d8 = param_1[10];
  uStack_1e0 = param_1[9];
  uVar3 = param_1[9];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1130753c8);
  puVar2[1] = param_1[10];
  *puVar2 = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_1130753d0) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(unaff_x20 + _DAT_1130753d8) = *(undefined1 *)((long)param_1 + 0x59);
  *(undefined8 *)(unaff_x20 + _DAT_1130753e0) = param_1[0xc];
  uStack_e8 = param_1[0xe];
  uStack_f0 = param_1[0xd];
  uStack_d8 = param_1[0x10];
  uStack_e0 = param_1[0xf];
  uStack_c8 = param_1[0x12];
  uStack_d0 = param_1[0x11];
  uStack_b8 = param_1[0x14];
  uStack_c0 = param_1[0x13];
  uStack_a8 = param_1[0x16];
  uStack_b0 = param_1[0x15];
  uStack_98 = param_1[0x18];
  uStack_a0 = param_1[0x17];
  uStack_88 = param_1[0x1a];
  uStack_90 = param_1[0x19];
  uStack_78 = param_1[0x1c];
  uStack_80 = param_1[0x1b];
  uStack_68 = param_1[0x1e];
  uStack_70 = param_1[0x1d];
  uStack_60 = param_1[0x1f];
  iVar1 = (int)&uStack_f0;
  func_0x0001043cd0e0();
  if (iVar1 == 1) {
    FUN_1043cd104(&uStack_198,&uStack_190,0x112dc3de0,&UNK_10d9813c0);
    FUN_1043cd104(&uStack_1b0,&uStack_190,0x112d35ff8,&UNK_10d900cd0);
    FUN_1043cd104(&uStack_1c0,&uStack_190,0x112d35ff8,&UNK_10d900cd0);
    FUN_1043cd104(&uStack_1d0,&uStack_190,0x112d35ff8,&UNK_10d900cd0);
    FUN_1043cd104(&uStack_1e0,&uStack_190,0x112d35ff8,&UNK_10d900cd0);
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uStack_128 = uStack_88;
    uStack_130 = uStack_90;
    uStack_118 = uStack_78;
    uStack_120 = uStack_80;
    uStack_108 = uStack_68;
    uStack_110 = uStack_70;
    uStack_100 = uStack_60;
    uStack_168 = uStack_c8;
    uStack_170 = uStack_d0;
    uStack_158 = uStack_b8;
    uStack_160 = uStack_c0;
    uStack_148 = uStack_a8;
    uStack_150 = uStack_b0;
    uStack_138 = uStack_98;
    uStack_140 = uStack_a0;
    uStack_188 = uStack_e8;
    uStack_190 = uStack_f0;
    uStack_178 = uStack_d8;
    uStack_180 = uStack_e0;
    func_0x0001000c0a74(0);
    _objc_allocWithZone();
    FUN_1043cd104(&uStack_198,&uStack_2d0,0x112dc3de0,&UNK_10d9813c0);
    FUN_1043cd104(&uStack_1b0,&uStack_2d0,0x112d35ff8,&UNK_10d900cd0);
    FUN_1043cd104(&uStack_1c0,&uStack_2d0,0x112d35ff8,&UNK_10d900cd0);
    FUN_1043cd104(&uStack_1d0,&uStack_2d0,0x112d35ff8,&UNK_10d900cd0);
    FUN_1043cd104(&uStack_1e0,&uStack_2d0,0x112d35ff8,&UNK_10d900cd0);
    FUN_1043cd104(&uStack_f0,&uStack_2d0,0x113075118,&UNK_10dcf5ff0);
    puVar2 = &uStack_190;
    FUN_1043d3ea4();
    func_0x0001043cd14c(&uStack_f0);
  }
  *(undefined8 **)(unaff_x20 + _DAT_1130753e8) = puVar2;
  *(undefined4 *)(unaff_x20 + _DAT_1130753f0) = *(undefined4 *)(param_1 + 0x20);
  *(undefined1 *)(unaff_x20 + _DAT_1130753f8) = *(undefined1 *)((long)param_1 + 0x104);
  *(undefined1 *)(unaff_x20 + _DAT_113075400) = *(undefined1 *)((long)param_1 + 0x105);
  *(undefined1 *)(unaff_x20 + _DAT_113075408) = *(undefined1 *)((long)param_1 + 0x106);
  *(undefined1 *)(unaff_x20 + _DAT_113075410) = *(undefined1 *)((long)param_1 + 0x107);
  uStack_1e8 = param_1[0x21];
  *(undefined8 *)(unaff_x20 + _DAT_113075418) = uStack_1e8;
  *(undefined1 *)(unaff_x20 + _DAT_113075420) = *(undefined1 *)(param_1 + 0x22);
  *(undefined8 *)(unaff_x20 + _DAT_113075428) = param_1[0x23];
  uVar3 = param_1[0x24];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113075430);
  puVar2[1] = param_1[0x25];
  *puVar2 = uVar3;
  uStack_1f0 = param_1[0x26];
  *(undefined8 *)(unaff_x20 + _DAT_113075438) = uStack_1f0;
  *(undefined1 *)(unaff_x20 + _DAT_113075440) = *(undefined1 *)(param_1 + 0x27);
  *(undefined1 *)(unaff_x20 + _DAT_113075448) = *(undefined1 *)((long)param_1 + 0x139);
  uVar3 = param_1[0x28];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113075450);
  puVar2[1] = param_1[0x29];
  *puVar2 = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_113075458) = *(undefined1 *)(param_1 + 0x2a);
  uVar3 = param_1[0x2c];
  *(undefined8 *)(unaff_x20 + _DAT_113075460) = param_1[0x2b];
  *(undefined8 *)(unaff_x20 + _DAT_113075468) = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_113075470) = *(undefined1 *)(param_1 + 0x2d);
  *(undefined1 *)(unaff_x20 + _DAT_113075478) = *(undefined1 *)((long)param_1 + 0x169);
  *(undefined8 *)(unaff_x20 + _DAT_113075480) = param_1[0x2e];
  *(undefined1 *)(unaff_x20 + _DAT_113075488) = *(undefined1 *)(param_1 + 0x2f);
  uVar3 = param_1[0x30];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113075490);
  puVar2[1] = param_1[0x31];
  *puVar2 = uVar3;
  uStack_218 = param_1[0x32];
  *(undefined8 *)(unaff_x20 + _DAT_113075498) = uStack_218;
  *(undefined1 *)(unaff_x20 + _DAT_1130754a0) = *(undefined1 *)(param_1 + 0x33);
  *(undefined1 *)(unaff_x20 + _DAT_1130754a8) = *(undefined1 *)((long)param_1 + 0x199);
  uStack_2c8 = param_1[0x25];
  uStack_2d0 = param_1[0x24];
  uStack_1f8 = param_1[0x29];
  uStack_200 = param_1[0x28];
  uStack_208 = param_1[0x31];
  uStack_210 = param_1[0x30];
  *(undefined1 *)(unaff_x20 + _DAT_1130754b0) = *(undefined1 *)((long)param_1 + 0x19a);
  FUN_1043cd104(&uStack_1e8,auStack_228,0x113075630,&UNK_10dcf6678);
  FUN_1043cd104(&uStack_2d0,auStack_228,0x112d35ff8,&UNK_10d900cd0);
  FUN_1043cd104(&uStack_1f0,auStack_228,0x112d445a8,&UNK_10d990150);
  FUN_1043cd104(&uStack_200,auStack_228,0x112d35ff8,&UNK_10d900cd0);
  FUN_1043cd104(&uStack_210,auStack_228,0x112d35ff8,&UNK_10d900cd0);
  FUN_1043cd104(&uStack_218,auStack_228,0x113075638,&UNK_10dcf6688);
  _objc_msgSendSuper2(&stack0xfffffffffffffdc8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043cc7a8; end: 1043cc7db;  */

undefined8 FUN_1043cc7a8(undefined8 param_1)

{
  (*(code *)(undefined *)0x1043b94d8)();
  return param_1;
}



/* Entry: 1043cc7dc; end: 1043ccb33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cc7dc(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_208;
  undefined1 uStack_200;
  undefined1 uStack_1ff;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined1 uStack_1af;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [152];
  undefined4 uStack_108;
  undefined1 uStack_104;
  undefined1 uStack_103;
  undefined1 uStack_102;
  undefined1 uStack_101;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  
  uVar4 = *(undefined8 *)(param_2 + _DAT_113075390);
  uStack_200 = *(undefined1 *)(param_2 + _DAT_113075398);
  uStack_1ff = *(undefined1 *)(param_2 + _DAT_1130753a0);
  uStack_1f8 = *(undefined8 *)(param_2 + _DAT_1130753a8);
  puVar1 = (undefined8 *)(param_2 + _DAT_1130753b0);
  uVar3 = puVar1[1];
  uStack_1e8 = puVar1[1];
  uStack_1f0 = *puVar1;
  puVar1 = (undefined8 *)(param_2 + _DAT_1130753b8);
  uVar2 = puVar1[1];
  uStack_1d8 = puVar1[1];
  uStack_1e0 = *puVar1;
  puVar1 = (undefined8 *)(param_2 + _DAT_1130753c0);
  uVar8 = puVar1[1];
  uStack_1c8 = puVar1[1];
  uStack_1d0 = *puVar1;
  puVar1 = (undefined8 *)(param_2 + _DAT_1130753c8);
  uVar9 = puVar1[1];
  uStack_1b8 = puVar1[1];
  uStack_1c0 = *puVar1;
  uStack_1b0 = *(undefined1 *)(param_2 + _DAT_1130753d0);
  uStack_1af = *(undefined1 *)(param_2 + _DAT_1130753d8);
  uStack_1a8 = *(undefined8 *)(param_2 + _DAT_1130753e0);
  uStack_208 = uVar4;
  if (*(long *)(param_2 + _DAT_1130753e8) == 0) {
    func_0x0001043cd0a8(auStack_1a0);
  }
  else {
    FUN_1043d41b8(auStack_1a0);
    func_0x0001043cd0dc(auStack_1a0);
  }
  uStack_108 = *(undefined4 *)(param_2 + _DAT_1130753f0);
  uStack_104 = *(undefined1 *)(param_2 + _DAT_1130753f8);
  uStack_103 = *(undefined1 *)(param_2 + _DAT_113075400);
  uStack_102 = *(undefined1 *)(param_2 + _DAT_113075408);
  uStack_101 = *(undefined1 *)(param_2 + _DAT_113075410);
  uVar10 = *(undefined8 *)(param_2 + _DAT_113075418);
  uStack_f8 = *(undefined1 *)(param_2 + _DAT_113075420);
  uStack_f0 = *(undefined8 *)(param_2 + _DAT_113075428);
  puVar1 = (undefined8 *)(param_2 + _DAT_113075430);
  uVar11 = puVar1[1];
  uStack_e0 = puVar1[1];
  uStack_e8 = *puVar1;
  uVar12 = *(undefined8 *)(param_2 + _DAT_113075438);
  uStack_d0 = *(undefined1 *)(param_2 + _DAT_113075440);
  uStack_cf = *(undefined1 *)(param_2 + _DAT_113075448);
  puVar1 = (undefined8 *)(param_2 + _DAT_113075450);
  uVar5 = puVar1[1];
  uStack_c0 = puVar1[1];
  uStack_c8 = *puVar1;
  uStack_b8 = *(undefined1 *)(param_2 + _DAT_113075458);
  uStack_b0 = *(undefined8 *)(param_2 + _DAT_113075460);
  uStack_a8 = *(undefined8 *)(param_2 + _DAT_113075468);
  uStack_a0 = *(undefined1 *)(param_2 + _DAT_113075470);
  uStack_9f = *(undefined1 *)(param_2 + _DAT_113075478);
  uStack_98 = *(undefined8 *)(param_2 + _DAT_113075480);
  uStack_90 = *(undefined1 *)(param_2 + _DAT_113075488);
  puVar1 = (undefined8 *)(param_2 + _DAT_113075490);
  uVar6 = puVar1[1];
  uStack_80 = puVar1[1];
  uStack_88 = *puVar1;
  uVar7 = *(undefined8 *)(param_2 + _DAT_113075498);
  uStack_70 = *(undefined1 *)(param_2 + _DAT_1130754a0);
  uStack_6f = *(undefined1 *)(param_2 + _DAT_1130754a8);
  uStack_6e = *(undefined1 *)(param_2 + _DAT_1130754b0);
  uStack_100 = uVar10;
  uStack_d8 = uVar12;
  uStack_78 = uVar7;
  _memcpy(param_1,&uStack_208,0x19b);
  _objc_retain(uVar4);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar9);
  _objc_retain(uVar10);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar7);
  return;
}



/* Entry: 1043ccb34; end: 1043cd067;  */

/* WARNING: Possible PIC construction at 0x0001043ccb68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001043ccb6c) */

void FUN_1043ccb34(long param_1)

{
  if (param_1 == 0) {
    func_0x0001043cd088();
    _objc_allocWithZone();
  }
  else {
    func_0x0001043cd088();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1043cd068; end: 1043cd0a7;  */

void FUN_1043cd068(void)

{
  _objc_opt_self(&PTR_PTR_1129ab208);
  return;
}



/* Entry: 1043cd0a8; end: 1043cd103;  */

void FUN_1043cd0a8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  return;
}



/* Entry: 1043cd104; end: 1043cd193;  */

undefined8 FUN_1043cd104(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1043cd194; end: 1043cd197;  */

void FUN_1043cd194(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043cd198; end: 1043cd1a3; -[SCManagedRecordedVideo videoURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cd198(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x000100029394(param_1 + _DAT_113813588,puVar4);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1043cd1a4; end: 1043cd1af; -[SCManagedRecordedVideo rawVideoDataFileURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cd1a4(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x000100029394(param_1 + _DAT_113813590,puVar4);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1043cd1b0; end: 1043cd277;  */

void FUN_1043cd1b0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x000100029394(param_1 + *param_3,puVar4);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1043cd278; end: 1043cd287; -[SCManagedRecordedVideo videoDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043cd278(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113813598);
}



/* Entry: 1043cd288; end: 1043cd297; -[SCManagedRecordedVideo placeholderImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cd288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1138135a0));
  return;
}



/* Entry: 1043cd298; end: 1043cd2a7; -[SCManagedRecordedVideo isFrontFacingCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043cd298(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1138135a8);
}



/* Entry: 1043cd2a8; end: 1043cd2b7; -[SCManagedRecordedVideo codecType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043cd2a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1138135b0);
}



/* Entry: 1043cd2b8; end: 1043cd39f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1043cd2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  puVar1 = auStack_70;
  _objc_allocWithZone();
  func_0x000100029394(param_2,unaff_x20 + _DAT_113813588);
  func_0x000100029394(param_3,unaff_x20 + _DAT_113813590);
  *(undefined8 *)(unaff_x20 + _DAT_113813598) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1138135a0) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_1138135a8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_1138135b0) = param_6;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  func_0x0001000293e4(param_3);
  func_0x0001000293e4(param_2);
  return puVar1;
}



/* Entry: 1043cd3a0; end: 1043cd57b; -[SCManagedRecordedVideo initWithVideoURL:rawVideoDataFileURL:videoDuration:placeholderImage:isFrontFacingCamera:codecType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043cd3a0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                    undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  long extraout_x12;
  long lVar6;
  long lStack_80;
  long lStack_78;
  
  lVar2 = param_2;
  _swift_getObjectType();
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar3 - extraout_x12;
  if (param_4 == 0) {
    lVar4 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar6,param_4);
    lVar4 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar6,param_4 == 0,1);
  if (param_5 != 0) {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar3,param_5);
  }
  lVar4 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar3,param_5 == 0,1,lVar4);
  func_0x000100029394(lVar6,param_2 + _DAT_113813588);
  func_0x000100029394(lVar3,param_2 + _DAT_113813590);
  *(undefined8 *)(param_2 + _DAT_113813598) = param_1;
  *(undefined8 *)(param_2 + _DAT_1138135a0) = param_6;
  *(undefined1 *)(param_2 + _DAT_1138135a8) = param_7;
  *(undefined8 *)(param_2 + _DAT_1138135b0) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  lStack_80 = param_2;
  lStack_78 = lVar2;
  _objc_retain(param_6);
  plVar5 = &lStack_80;
  _objc_msgSendSuper2(plVar5,puVar1);
  func_0x0001000293e4(lVar3);
  func_0x0001000293e4(lVar6);
  return plVar5;
}



/* Entry: 1043cd57c; end: 1043cd667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1043cd57c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  func_0x000100029394(param_1,unaff_x20 + _DAT_113813588);
  lVar2 = 0;
  FUN_1043ba274();
  func_0x000100029394(param_1 + *(int *)(lVar2 + 0x14),unaff_x20 + _DAT_113813590);
  *(undefined8 *)(unaff_x20 + _DAT_113813598) = *(undefined8 *)(param_1 + *(int *)(lVar2 + 0x18));
  *(undefined8 *)(unaff_x20 + _DAT_1138135a0) = *(undefined8 *)(param_1 + *(int *)(lVar2 + 0x1c));
  *(undefined1 *)(unaff_x20 + _DAT_1138135a8) = *(undefined1 *)(param_1 + *(int *)(lVar2 + 0x20));
  *(undefined8 *)(unaff_x20 + _DAT_1138135b0) = *(undefined8 *)(param_1 + *(int *)(lVar2 + 0x24));
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain();
  _objc_msgSendSuper2(auStack_40,puVar1);
  FUN_1043cd668(param_1);
  return puVar3;
}



/* Entry: 1043cd668; end: 1043cd6a3;  */

undefined8 FUN_1043cd668(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1043ba274();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1043cd6a4; end: 1043cd6a7; -[SCManagedRecordedVideo copyWithZone:] */

void FUN_1043cd6a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043cd6a8; end: 1043cd6ef; -[SCManagedRecordedVideo description] */

void FUN_1043cd6a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_1043cd6f0();
  _objc_release(param_1);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043cd6f0; end: 1043cd7db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1043cd6f0(void)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  
  lVar1 = 0;
  FUN_1043ba274();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(unaff_x20 + _DAT_113813588,puVar2);
  func_0x000100029394(unaff_x20 + _DAT_113813590,puVar2 + *(int *)(lVar1 + 0x14));
  *(undefined8 *)(puVar2 + *(int *)(lVar1 + 0x18)) = *(undefined8 *)(unaff_x20 + _DAT_113813598);
  *(undefined8 *)(puVar2 + *(int *)(lVar1 + 0x1c)) = *(undefined8 *)(unaff_x20 + _DAT_1138135a0);
  puVar2[*(int *)(lVar1 + 0x20)] = *(undefined1 *)(unaff_x20 + _DAT_1138135a8);
  *(undefined8 *)(puVar2 + *(int *)(lVar1 + 0x24)) = *(undefined8 *)(unaff_x20 + _DAT_1138135b0);
  _objc_retain();
  FUN_1043cd668(puVar2);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 1043cd7dc; end: 1043cd857; -[SCManagedRecordedVideo init] */

void FUN_1043cd7dc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCapturer/SCManagedRecordedVideoWrapper.swift",0x2e,2,0x3a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043cd824);
  (*pcVar1)();
}



/* Entry: 1043cd858; end: 1043cd89f; -[SCManagedRecordedVideo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cd858(long param_1)

{
  func_0x0001000293e4(param_1 + _DAT_113813588);
  func_0x0001000293e4(param_1 + _DAT_113813590);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1138135a0));
  return;
}



/* Entry: 1043cd8a0; end: 1043cd8a7;  */

void FUN_1043cd8a0(void)

{
  if (lRam0000000113075668 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e802b28);
  return;
}



/* Entry: 1043cd8a8; end: 1043cd8df;  */

void FUN_1043cd8a8(undefined8 param_1)

{
  if (lRam0000000113075668 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e802b28);
  return;
}



/* Entry: 1043cd8e0; end: 1043cd96f;  */

void FUN_1043cd8e0(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_38 = &UNK_10dcf66b0;
    puStack_30 = &UNK_10dcf66c8;
    lStack_48 = lStack_50;
    puStack_28 = puStack_40;
    _swift_updateClassMetadata2(param_1,0x100,6,&lStack_50,param_1 + 0x50);
  }
  return;
}



/* Entry: 1043cd970; end: 1043cd97f; -[SCManagedVideoCapturerOutputSettings width] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043cd970(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113075680);
}



/* Entry: 1043cd980; end: 1043cd98f; -[SCManagedVideoCapturerOutputSettings height] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043cd980(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113075688);
}



/* Entry: 1043cd990; end: 1043cd99f; -[SCManagedVideoCapturerOutputSettings videoBitRate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043cd990(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113075690);
}



/* Entry: 1043cd9a0; end: 1043cd9af; -[SCManagedVideoCapturerOutputSettings audioBitRate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043cd9a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113075698);
}



/* Entry: 1043cd9b0; end: 1043cd9bf; -[SCManagedVideoCapturerOutputSettings keyFrameInterval] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043cd9b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130756a0);
}



/* Entry: 1043cd9c0; end: 1043cd9cf; -[SCManagedVideoCapturerOutputSettings codecType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043cd9c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130756a8);
}



/* Entry: 1043cd9d0; end: 1043cd9df; -[SCManagedVideoCapturerOutputSettings writeEXIFMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043cd9d0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130756b0);
}



/* Entry: 1043cd9e0; end: 1043cd9ef; -[SCManagedVideoCapturerOutputSettings lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cd9e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130756b8));
  return;
}



/* Entry: 1043cd9f0; end: 1043cd9ff; -[SCManagedVideoCapturerOutputSettings musicId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cd9f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130756c0));
  return;
}



/* Entry: 1043cda00; end: 1043cda0f; -[SCManagedVideoCapturerOutputSettings cameraPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1043cda00(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_1130756c8);
}



/* Entry: 1043cda10; end: 1043cdc17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cda10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10)

{
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113075680) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113075688) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113075690) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113075698) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_1130756a0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_1130756a8) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_1130756b0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_1130756b8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_1130756c0) = param_9;
  *(undefined4 *)(unaff_x20 + _DAT_1130756c8) = param_10;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043cdc18; end: 1043cdcc3; -[SCManagedVideoCapturerOutputSettings initWithWidth:height:videoBitRate:audioBitRate:keyFrameInterval:codecType:writeEXIFMetadata:lensId:musicId:cameraPosition:] */

void FUN_1043cdc18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  _objc_retain(param_10);
  _objc_retain(param_11);
  func_0x0001043cdb14(param_1,param_2,param_3,param_4,param_7,param_8,param_9,param_10,param_11,
                      param_12);
  return;
}



/* Entry: 1043cdcc4; end: 1043cdd03;  */

undefined8 FUN_1043cdcc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1043ce3f4(param_1);
  FUN_1043ce4ec(param_1);
  return uVar1;
}



/* Entry: 1043cdd04; end: 1043cdd07; -[SCManagedVideoCapturerOutputSettings copyWithZone:] */

void FUN_1043cdd04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043cdd08; end: 1043cdd3b; -[SCManagedVideoCapturerOutputSettings description] */

void FUN_1043cdd08(void)

{
  undefined1 auStack_60 [80];
  
  func_0x0001043ce520(auStack_60);
  func_0x0001043ce4ec(auStack_60);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043cdd3c; end: 1043cdd83; -[SCManagedVideoCapturerOutputSettings init] */

void FUN_1043cdd3c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCapturer/SCManagedVideoCapturerOutputSettingsWrapper.swift",0x3c,2,0x4f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043cdd84);
  (*pcVar1)();
}



/* Entry: 1043cdd84; end: 1043cdd9f; +[SCManagedVideoCapturerOutputSettingsBuilder managedVideoCapturerOutputSettings] */

void FUN_1043cdd84(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043cdda0; end: 1043cdddf; +[SCManagedVideoCapturerOutputSettingsBuilder managedVideoCapturerOutputSettingsWithExistingManagedVideoCapturerOutputSettings:] */

void FUN_1043cdda0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1043ce5d4(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043cdde0; end: 1043cddf7; -[SCManagedVideoCapturerOutputSettingsBuilder withWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cdde0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_1130756d0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cddf8; end: 1043cde0f; -[SCManagedVideoCapturerOutputSettingsBuilder withHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cddf8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_1130756d8);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cde10; end: 1043cde27; -[SCManagedVideoCapturerOutputSettingsBuilder withVideoBitRate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cde10(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_1130756e0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cde28; end: 1043cde3f; -[SCManagedVideoCapturerOutputSettingsBuilder withAudioBitRate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cde28(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_1130756e8);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cde40; end: 1043cde57; -[SCManagedVideoCapturerOutputSettingsBuilder withKeyFrameInterval:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cde40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1130756f0);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}


