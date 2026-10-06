/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109051f98; end: 109051f9f; -[SCManagedVideoCapturerImpl performer] */

undefined8 FUN_109051f98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 109051fa0; end: 109051fa7; -[SCManagedVideoCapturerImpl outputURL] */

undefined8 FUN_109051fa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x278);
}



/* Entry: 109051fa8; end: 109051fbb; -[SCManagedVideoCapturerImpl firstWrittenAudioBufferDelay] */

void FUN_109051fa8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x350);
  param_1[1] = *(undefined8 *)(param_2 + 0x358);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x360);
  return;
}



/* Entry: 109051fbc; end: 109051fcf; -[SCManagedVideoCapturerImpl setFirstWrittenAudioBufferDelay:] */

void FUN_109051fbc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x360) = param_3[2];
  *(undefined8 *)(param_1 + 0x358) = uVar2;
  *(undefined8 *)(param_1 + 0x350) = uVar1;
  return;
}



/* Entry: 109051fd0; end: 109051fd7; -[SCManagedVideoCapturerImpl audioQueueStarted] */

undefined1 FUN_109051fd0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x268);
}



/* Entry: 109051fd8; end: 109051fdf; -[SCManagedVideoCapturerImpl audioCaptureEnabled] */

undefined1 FUN_109051fd8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}



/* Entry: 109051fe0; end: 109051fe7; -[SCManagedVideoCapturerImpl setAudioCaptureEnabled:] */

void FUN_109051fe0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x269) = param_3;
  return;
}



/* Entry: 109051fe8; end: 109051fef; -[SCManagedVideoCapturerImpl audioProcessingEnabled] */

undefined1 FUN_109051fe8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x26a);
}



/* Entry: 109051ff0; end: 109051ff7; -[SCManagedVideoCapturerImpl setAudioProcessingEnabled:] */

void FUN_109051ff0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x26a) = param_3;
  return;
}



/* Entry: 109051ff8; end: 109052027; -[SCManagedVideoCapturerImpl setCameraCreationDelayLogger:] */

void FUN_109051ff8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x288);
  *(undefined8 *)(param_1 + 0x288) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109052028; end: 109052057; -[SCManagedVideoCapturerImpl setCameraSnapCaptureLogger:] */

void FUN_109052028(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x290);
  *(undefined8 *)(param_1 + 0x290) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109052058; end: 10905205f; -[SCManagedVideoCapturerImpl audioConfigurationError] */

undefined8 FUN_109052058(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2a0);
}



/* Entry: 109052060; end: 10905208f; -[SCManagedVideoCapturerImpl setAudioConfigurationError:] */

void FUN_109052060(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x2a0);
  *(undefined8 *)(param_1 + 0x2a0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109052090; end: 109052097; -[SCManagedVideoCapturerImpl beginAudioRecordingError] */

undefined8 FUN_109052090(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2a8);
}



/* Entry: 109052098; end: 1090520c7; -[SCManagedVideoCapturerImpl setBeginAudioRecordingError:] */

void FUN_109052098(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2a8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090520c8; end: 1090520cf; -[SCManagedVideoCapturerImpl frontMicAudioConfigurationError] */

undefined8 FUN_1090520c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2b0);
}



/* Entry: 1090520d0; end: 1090520ff; -[SCManagedVideoCapturerImpl setFrontMicAudioConfigurationError:] */

void FUN_1090520d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x2b0);
  *(undefined8 *)(param_1 + 0x2b0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109052100; end: 109052107; -[SCManagedVideoCapturerImpl frontMicBeginAudioRecordingError] */

undefined8 FUN_109052100(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2b8);
}



/* Entry: 109052108; end: 109052137; -[SCManagedVideoCapturerImpl setFrontMicBeginAudioRecordingError:] */

void FUN_109052108(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x2b8);
  *(undefined8 *)(param_1 + 0x2b8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109052138; end: 10905213f; -[SCManagedVideoCapturerImpl audioSamplesErased] */

undefined8 FUN_109052138(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2c0);
}



/* Entry: 109052140; end: 109052147; -[SCManagedVideoCapturerImpl setAudioSamplesErased:] */

void FUN_109052140(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2c0) = param_3;
  return;
}



/* Entry: 109052148; end: 10905214f; -[SCManagedVideoCapturerImpl audioSamplesCopyFailure] */

undefined8 FUN_109052148(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2c8);
}



/* Entry: 109052150; end: 109052157; -[SCManagedVideoCapturerImpl setAudioSamplesCopyFailure:] */

void FUN_109052150(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2c8) = param_3;
  return;
}



/* Entry: 109052158; end: 10905215f; -[SCManagedVideoCapturerImpl audioSamplesRestoreFailure] */

undefined8 FUN_109052158(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2d0);
}



/* Entry: 109052160; end: 109052167; -[SCManagedVideoCapturerImpl setAudioSamplesRestoreFailure:] */

void FUN_109052160(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2d0) = param_3;
  return;
}



/* Entry: 109052168; end: 10905216f; -[SCManagedVideoCapturerImpl audioCaptureEnabledOnCaptureStart] */

undefined1 FUN_109052168(long param_1)

{
  return *(undefined1 *)(param_1 + 0x26b);
}



/* Entry: 109052170; end: 109052177; -[SCManagedVideoCapturerImpl setAudioCaptureEnabledOnCaptureStart:] */

void FUN_109052170(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x26b) = param_3;
  return;
}



/* Entry: 109052178; end: 10905217f; -[SCManagedVideoCapturerImpl audioProcessingEnabledOnCaptureStart] */

undefined1 FUN_109052178(long param_1)

{
  return *(undefined1 *)(param_1 + 0x26c);
}



/* Entry: 109052180; end: 109052187; -[SCManagedVideoCapturerImpl setAudioProcessingEnabledOnCaptureStart:] */

void FUN_109052180(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x26c) = param_3;
  return;
}



/* Entry: 109052188; end: 10905218f; -[SCManagedVideoCapturerImpl audioSamplesReceived] */

undefined8 FUN_109052188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2d8);
}



/* Entry: 109052190; end: 109052197; -[SCManagedVideoCapturerImpl setAudioSamplesReceived:] */

void FUN_109052190(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2d8) = param_3;
  return;
}



/* Entry: 109052198; end: 10905219f; -[SCManagedVideoCapturerImpl audioSamplesDroppedPreWrite] */

undefined8 FUN_109052198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2e0);
}



/* Entry: 1090521a0; end: 1090521a7; -[SCManagedVideoCapturerImpl setAudioSamplesDroppedPreWrite:] */

void FUN_1090521a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2e0) = param_3;
  return;
}



/* Entry: 1090521a8; end: 1090521af; -[SCManagedVideoCapturerImpl inputAvailableAtRecordingStart] */

undefined1 FUN_1090521a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x26d);
}



/* Entry: 1090521b0; end: 1090521b7; -[SCManagedVideoCapturerImpl setInputAvailableAtRecordingStart:] */

void FUN_1090521b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x26d) = param_3;
  return;
}



/* Entry: 1090521b8; end: 1090521bf; -[SCManagedVideoCapturerImpl isPhoneCallActiveAtRecordingStart] */

undefined1 FUN_1090521b8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x26e);
}



/* Entry: 1090521c0; end: 1090521c7; -[SCManagedVideoCapturerImpl setIsPhoneCallActiveAtRecordingStart:] */

void FUN_1090521c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x26e) = param_3;
  return;
}



/* Entry: 1090521c8; end: 1090521cf; -[SCManagedVideoCapturerImpl availableInputsCountAtRecordingStart] */

undefined8 FUN_1090521c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2e8);
}



/* Entry: 1090521d0; end: 1090521d7; -[SCManagedVideoCapturerImpl setAvailableInputsCountAtRecordingStart:] */

void FUN_1090521d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2e8) = param_3;
  return;
}



/* Entry: 1090521d8; end: 1090521df; -[SCManagedVideoCapturerImpl inputPortTypeAtRecordingStart] */

undefined8 FUN_1090521d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2f0);
}



/* Entry: 1090521e0; end: 1090521e7; -[SCManagedVideoCapturerImpl setInputPortTypeAtRecordingStart:] */

void FUN_1090521e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1090521e8; end: 1090521ef; -[SCManagedVideoCapturerImpl audioSessionCategoryAtRecordingStart] */

undefined8 FUN_1090521e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2f8);
}



/* Entry: 1090521f0; end: 1090521f7; -[SCManagedVideoCapturerImpl setAudioSessionCategoryAtRecordingStart:] */

void FUN_1090521f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1090521f8; end: 1090521ff; -[SCManagedVideoCapturerImpl audioSessionModeAtRecordingStart] */

undefined8 FUN_1090521f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x300);
}



/* Entry: 109052200; end: 109052207; -[SCManagedVideoCapturerImpl setAudioSessionModeAtRecordingStart:] */

void FUN_109052200(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 109052208; end: 10905220f; -[SCManagedVideoCapturerImpl audioSessionCategoryOptionsAtRecordingStart] */

undefined8 FUN_109052208(long param_1)

{
  return *(undefined8 *)(param_1 + 0x308);
}



/* Entry: 109052210; end: 109052217; -[SCManagedVideoCapturerImpl setAudioSessionCategoryOptionsAtRecordingStart:] */

void FUN_109052210(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x308) = param_3;
  return;
}



/* Entry: 109052218; end: 10905221f; -[SCManagedVideoCapturerImpl routeInputPortTypeAtRecordingStart] */

undefined8 FUN_109052218(long param_1)

{
  return *(undefined8 *)(param_1 + 0x310);
}



/* Entry: 109052220; end: 109052227; -[SCManagedVideoCapturerImpl setRouteInputPortTypeAtRecordingStart:] */

void FUN_109052220(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 109052228; end: 10905222f; -[SCManagedVideoCapturerImpl routeOutputPortTypeAtRecordingStart] */

undefined8 FUN_109052228(long param_1)

{
  return *(undefined8 *)(param_1 + 0x318);
}



/* Entry: 109052230; end: 109052237; -[SCManagedVideoCapturerImpl setRouteOutputPortTypeAtRecordingStart:] */

void FUN_109052230(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 109052238; end: 10905223f; -[SCManagedVideoCapturerImpl secondaryAudioShouldBeSilencedHintAtRecordingStart] */

undefined1 FUN_109052238(long param_1)

{
  return *(undefined1 *)(param_1 + 0x26f);
}



/* Entry: 109052240; end: 109052247; -[SCManagedVideoCapturerImpl setSecondaryAudioShouldBeSilencedHintAtRecordingStart:] */

void FUN_109052240(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x26f) = param_3;
  return;
}



/* Entry: 109052248; end: 10905224f; -[SCManagedVideoCapturerImpl availableMicDataSourcesAtRecordingStart] */

undefined8 FUN_109052248(long param_1)

{
  return *(undefined8 *)(param_1 + 800);
}



/* Entry: 109052250; end: 109052257; -[SCManagedVideoCapturerImpl setAvailableMicDataSourcesAtRecordingStart:] */

void FUN_109052250(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 109052258; end: 10905225f; -[SCManagedVideoCapturerImpl inputGainAtRecordingStart] */

undefined4 FUN_109052258(long param_1)

{
  return *(undefined4 *)(param_1 + 0x274);
}



/* Entry: 109052260; end: 109052267; -[SCManagedVideoCapturerImpl setInputGainAtRecordingStart:] */

void FUN_109052260(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x274) = param_1;
  return;
}



/* Entry: 109052268; end: 10905226f; -[SCManagedVideoCapturerImpl inputGainSettableAtRecordingStart] */

undefined1 FUN_109052268(long param_1)

{
  return *(undefined1 *)(param_1 + 0x270);
}



/* Entry: 109052270; end: 109052277; -[SCManagedVideoCapturerImpl setInputGainSettableAtRecordingStart:] */

void FUN_109052270(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x270) = param_3;
  return;
}



/* Entry: 109052278; end: 10905227f; -[SCManagedVideoCapturerImpl isInputMutedAtRecordingStart] */

undefined8 FUN_109052278(long param_1)

{
  return *(undefined8 *)(param_1 + 0x328);
}



/* Entry: 109052280; end: 1090522af; -[SCManagedVideoCapturerImpl setIsInputMutedAtRecordingStart:] */

void FUN_109052280(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x328);
  *(undefined8 *)(param_1 + 0x328) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090522b0; end: 1090522b7; -[SCManagedVideoCapturerImpl routeInputPortTypeAtQueueStart] */

undefined8 FUN_1090522b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x330);
}



/* Entry: 1090522b8; end: 1090522bf; -[SCManagedVideoCapturerImpl setRouteInputPortTypeAtQueueStart:] */

void FUN_1090522b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1090522c0; end: 1090522c7; -[SCManagedVideoCapturerImpl routeInputSelectedDataSourceNameAtQueueStart] */

undefined8 FUN_1090522c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x338);
}



/* Entry: 1090522c8; end: 1090522cf; -[SCManagedVideoCapturerImpl setRouteInputSelectedDataSourceNameAtQueueStart:] */

void FUN_1090522c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1090522d0; end: 1090522d7; -[SCManagedVideoCapturerImpl activeMicrophoneModeNameAtQueueStart] */

undefined8 FUN_1090522d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x340);
}



/* Entry: 1090522d8; end: 1090522df; -[SCManagedVideoCapturerImpl setActiveMicrophoneModeNameAtQueueStart:] */

void FUN_1090522d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1090522e0; end: 1090522e7; -[SCManagedVideoCapturerImpl consecutiveSilentRecordingCountAtRecordingStart] */

undefined8 FUN_1090522e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x348);
}



/* Entry: 1090522e8; end: 1090522ef; -[SCManagedVideoCapturerImpl setConsecutiveSilentRecordingCountAtRecordingStart:] */

void FUN_1090522e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x348) = param_3;
  return;
}



/* Entry: 1090522f0; end: 10905256f; -[SCManagedVideoCapturerImpl .cxx_destruct] */

void FUN_1090522f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x340,0);
  _objc_storeStrong(param_1 + 0x338,0);
  _objc_storeStrong(param_1 + 0x330,0);
  _objc_storeStrong(param_1 + 0x328,0);
  _objc_storeStrong(param_1 + 800,0);
  _objc_storeStrong(param_1 + 0x318,0);
  _objc_storeStrong(param_1 + 0x310,0);
  _objc_storeStrong(param_1 + 0x300,0);
  _objc_storeStrong(param_1 + 0x2f8,0);
  _objc_storeStrong(param_1 + 0x2f0,0);
  _objc_storeStrong(param_1 + 0x2b8,0);
  _objc_storeStrong(param_1 + 0x2b0,0);
  _objc_storeStrong(param_1 + 0x2a8,0);
  _objc_storeStrong(param_1 + 0x2a0,0);
  _objc_storeStrong(param_1 + 0x290,0);
  _objc_storeStrong(param_1 + 0x288,0);
  _objc_storeStrong(param_1 + 0x280,0);
  _objc_storeStrong(param_1 + 0x278,0);
  _objc_storeStrong(param_1 + 0x260,0);
  _objc_destroyWeak(param_1 + 0x238);
  _objc_destroyWeak(param_1 + 0x230);
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_destroyWeak(param_1 + 0x1e8);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_destroyWeak(param_1 + 0x180);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_destroyWeak(param_1 + 0x170);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 109052570; end: 10905259f;  */

void FUN_109052570(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = &UNK_10f549ec2;
  _dispatch_queue_create(&UNK_10f549ec2,0);
  uVar1 = puRam0000000113730780;
  puRam0000000113730780 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090525a0; end: 1090525ab; -[SCManagedVideoCapturerMicCoordinator _session] */

void FUN_1090525a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15fad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aed60,PTR_s_session_1126358d0);
  return;
}



/* Entry: 1090525ac; end: 1090525ef; -[SCManagedVideoCapturerMicCoordinator prepareForNewRecording] */

void FUN_1090525ac(long param_1)

{
  undefined8 uVar1;
  
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 1090525f0; end: 109052773; -[SCManagedVideoCapturerMicCoordinator pinFallbackMicIfNeededWithAudioCaptureEnabled:completion:] */

void FUN_1090525f0(ulong param_1,undefined8 param_2,int param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  if (param_3 != 0) {
    uVar1 = param_1;
    func_0x00010c278c80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c231ce0();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x28) = uVar3;
      _objc_initWeak(auStack_58,param_1);
      func_0x00010bea1600(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_68,auStack_58);
      uStack_60 = uVar3;
      _objc_retain(param_4);
      func_0x00010c16bd60(param_1);
      _objc_release(param_1);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_68);
      _objc_destroyWeak(auStack_58);
      goto LAB_10905272c;
    }
  }
  (**(code **)(param_4 + 0x10))(param_4);
LAB_10905272c:
  _objc_release(param_4);
  return;
}



/* Entry: 109052774; end: 109052873;  */

void FUN_109052774(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126aed60;
    func_0x00010c15fac0(PTR_PTR_1126aed60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1381e0();
  }
  else {
    uVar4 = *(undefined8 *)(lVar1 + 8);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010c0f88c0(uVar4);
    _objc_release(uVar3);
    puVar2 = param_3;
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 109052874; end: 109052887;  */

void FUN_109052874(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2df70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handlePinCompletionWithGenerati_112569178,
             *(undefined8 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 109052888; end: 10905299b; -[SCManagedVideoCapturerMicCoordinator _handlePinCompletionWithGeneration:success:error:completion:] */

void FUN_109052888(long param_1,undefined8 param_2,long param_3,int param_4,long param_5,
                  long param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == *(long *)(param_1 + 0x20)) {
    *(char *)(param_1 + 0x30) = (char)param_4;
    ppuVar1 = &PTR____CFConstantStringClassReference_110de6f38;
    if (param_4 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f1da18;
    }
    _objc_retain(ppuVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined ***)(param_1 + 0x10) = ppuVar1;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (param_5 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      lVar3 = param_5;
      func_0x00010bf3ec40(param_5);
      func_0x00010c0df780(puVar4,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar4;
    _objc_release(uVar2);
    (**(code **)(param_6 + 0x10))(param_6);
  }
  else if ((param_4 != 0) && (*(long *)(param_1 + 0x28) == param_3)) {
    func_0x00010bea1600(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1381e0();
    _objc_release(param_1);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10905299c; end: 109052a37; -[SCManagedVideoCapturerMicCoordinator avSyncInfoMarkers] */

void FUN_10905299c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR____NSDictionary0__struct_11034ab58;
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    func_0x00010c1d0640(puVar1,param_2,&PTR____CFConstantStringClassReference_110f1da58,
                        &PTR____CFConstantStringClassReference_110f1da78);
    func_0x00010c1d0640(puVar1,param_2,*(undefined8 *)(param_1 + 0x18),
                        &PTR____CFConstantStringClassReference_110f1da98);
    puVar2 = puVar1;
    func_0x00010bf51e00(puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109052a38; end: 109052a87; -[SCManagedVideoCapturerMicCoordinator recordingDidEnd] */

void FUN_109052a38(long param_1)

{
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 0;
    func_0x00010bea1600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1381e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 109052a88; end: 109052a8f; -[SCManagedVideoCapturerMicCoordinator tracker] */

undefined8 FUN_109052a88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 109052a90; end: 109052a97; -[SCManagedVideoCapturerMicCoordinator pinnedForCurrentRecording] */

undefined1 FUN_109052a90(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 109052a98; end: 109052adf; -[SCManagedVideoCapturerMicCoordinator .cxx_destruct] */

void FUN_109052a98(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109052ae0; end: 109052b6b; -[SCManagedVideoCapturerTimeObserver initWithDelegate:] */

undefined1 * FUN_109052ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700078;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x10) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109052b6c; end: 109052b9b; -[SCManagedVideoCapturerTimeObserver addTimedTask:] */

void FUN_109052b6c(long param_1)

{
  func_0x00010befa120(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c246bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_sortUsingComparator__11266f510,
             &PTR___NSConcreteGlobalBlock_110ad6460);
  return;
}



/* Entry: 109052b9c; end: 109052c37;  */

long FUN_109052b9c(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010c26a160(&uStack_48,param_3);
  }
  if (param_2 == 0) {
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010c26a160(&uStack_60,param_2);
  }
  puVar1 = &uStack_48;
  _CMTimeCompare(puVar1,&uStack_60);
  _objc_release(param_3);
  _objc_release(param_2);
  return (long)(int)puVar1;
}



/* Entry: 109052c38; end: 109052df3; -[SCManagedVideoCapturerTimeObserver processTime:sessionStartTimeDelayInSecond:] */

void FUN_109052c38(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  *(undefined1 *)(param_2 + 0x10) = 1;
  lVar2 = *(long *)(param_2 + 8);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _CMClockGetHostTimeClock();
  _CMClockGetTime(&uStack_90);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    do {
      lVar3 = lVar2;
      func_0x00010c26a540();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      if (lVar3 == 0) break;
      func_0x00010c26a160(auStack_a8,lVar2);
      uStack_b8 = param_4[1];
      uStack_c0 = *param_4;
      uStack_b0 = param_4[2];
      puVar4 = &uStack_c0;
      _CMTimeCompare(puVar4,auStack_a8);
      _objc_release(lVar3);
      if ((int)puVar4 < 0) break;
      func_0x00010c12cd60(*(undefined8 *)(param_2 + 8));
      lVar3 = lVar2;
      func_0x00010c26a540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212780(lVar2);
      puStack_130 = puVar1;
      uStack_128 = 0xc2000000;
      pcStack_120 = FUN_109052df4;
      puStack_118 = &UNK_110ad6480;
      uStack_e8 = param_4[1];
      uStack_f0 = *param_4;
      uStack_e0 = param_4[2];
      uStack_d0 = uStack_88;
      uStack_d8 = uStack_90;
      uStack_c8 = uStack_80;
      lStack_110 = param_2;
      lStack_108 = lVar2;
      lStack_100 = lVar3;
      uStack_f8 = param_1;
      _objc_retain(lVar3);
      _objc_retain(lVar2);
      func_0x000107c312d0("APPSTORE",&puStack_130);
      lVar5 = *(long *)(param_2 + 8);
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lStack_100);
      _objc_release(lStack_108);
      _objc_release(lVar3);
      lVar2 = lVar5;
    } while (lVar5 != 0);
    _objc_release(lVar5);
  }
  return;
}



/* Entry: 109052df4; end: 109052e7f;  */

void FUN_109052df4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0b8160();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    uStack_40 = *(undefined8 *)(param_1 + 0x50);
    uStack_68 = *(undefined8 *)(param_1 + 0x60);
    uStack_70 = *(undefined8 *)(param_1 + 0x58);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(undefined8 *)(param_1 + 0x38),*(long *)(param_1 + 0x30),&uStack_50,&uStack_70);
  }
  return;
}



/* Entry: 109052e80; end: 109052eab; -[SCManagedVideoCapturerTimeObserver .cxx_destruct] */

void FUN_109052e80(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109052eac; end: 109052ee7; -[SCManagedVideoCopySampleBufferHandler init] */

void FUN_109052eac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_112700080;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
  }
  return;
}



/* Entry: 109052ee8; end: 109052f2b; -[SCManagedVideoCopySampleBufferHandler dealloc] */

void FUN_109052ee8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf3a4a0();
  puStack_28 = PTR_PTR_112700080;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 109052f2c; end: 109052f93; -[SCManagedVideoCopySampleBufferHandler cleanupPixelBufferPool] */

void FUN_109052f2c(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x20);
  if (*(long *)(param_1 + 8) != 0) {
    _CVPixelBufferPoolFlush(*(long *)(param_1 + 8),1);
    _CVPixelBufferPoolRelease(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  uVar1 = *(undefined8 *)PTR__CGSizeZero_110347620;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x20);
  return;
}



/* Entry: 109052f94; end: 1090530f3; -[SCManagedVideoCopySampleBufferHandler copyVideoSampleBufferWithInputSampleBuffer:targetAspectRatio:] */

ulong FUN_109052f94(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  double dVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  uVar2 = param_4;
  _CMSampleBufferGetImageBuffer();
  if (uVar2 == 0) {
    param_4 = 0;
  }
  else {
    dVar1 = ABS(param_1);
    uVar3 = uVar2;
    _CVPixelBufferGetWidth();
    _CVPixelBufferGetHeight();
    dVar4 = (double)uVar3;
    dVar5 = (double)uVar2;
    if ((((ulong)dVar1 < 0x7ff0000000000001 &&
         (dVar1 != INFINITY &&
         (dVar1 != 0.0 && (-1 < (long)param_1 || 0xffffffffffffe < (long)ABS(param_1) - 1U)))) &&
         (-1 < (long)param_1 || 0x3fe < (long)ABS(param_1) + 0xfff0000000000000U >> 0x35)) &&
       (0.0001 <= ABS(dVar4 / dVar5 - param_1))) {
      dVar6 = (double)(long)(dVar4 / param_1);
      dVar1 = dVar4;
      if (param_1 < dVar4 / dVar5) {
        dVar6 = dVar5;
        dVar1 = (double)(long)(param_1 * dVar5);
      }
      if ((((long)dVar1 & 0xfffffffffffffffeU) != 0) && (((long)dVar6 & 0xfffffffffffffffeU) != 0))
      {
        dVar4 = (double)((long)dVar1 & 0xfffffffffffffffeU);
        dVar5 = (double)((long)dVar6 & 0xfffffffffffffffeU);
      }
    }
    func_0x00010bdf1560(dVar4,dVar5,param_2);
    _os_unfair_lock_lock(param_2 + 0x20);
    FUN_1090461b4(param_4,*(undefined8 *)(param_2 + 8));
    _os_unfair_lock_unlock(param_2 + 0x20);
  }
  return param_4;
}



/* Entry: 1090530f4; end: 109053197; -[SCManagedVideoCopySampleBufferHandler _createPixelBufferPoolIfNeededWithPixelBufferSize:] */

undefined8 FUN_1090530f4(double param_1,double param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  
  _os_unfair_lock_lock(param_3 + 0x20);
  if (*(long *)(param_3 + 8) != 0) {
    bVar1 = false;
    if ((param_1 == *(double *)(param_3 + 0x10)) &&
       (bVar1 = false, !NAN(param_2) && !NAN(*(double *)(param_3 + 0x18)))) {
      bVar1 = param_2 == *(double *)(param_3 + 0x18);
    }
    if (bVar1) {
      uVar3 = 0;
      goto LAB_109053168;
    }
    _CVPixelBufferPoolFlush(*(long *)(param_3 + 8),1);
    _CVPixelBufferPoolRelease(*(undefined8 *)(param_3 + 8));
    *(undefined8 *)(param_3 + 8) = 0;
  }
  *(double *)(param_3 + 0x10) = param_1;
  *(double *)(param_3 + 0x18) = param_2;
  lVar2 = param_3;
  func_0x00010bdf15a0(param_1,param_2);
  *(long *)(param_3 + 8) = lVar2;
  uVar3 = 1;
LAB_109053168:
  _os_unfair_lock_unlock(param_3 + 0x20);
  return uVar3;
}



/* Entry: 109053198; end: 1090532eb; -[SCManagedVideoCopySampleBufferHandler _createPixelBufferPoolWithPixelBufferSize:] */

undefined8 FUN_109053198(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = 0;
  uStack_88 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
  uStack_80 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
  puStack_68 = PTR____NSDictionary0__struct_11034ab58;
  ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1da0;
  uStack_78 = *(undefined8 *)PTR__kCVPixelBufferWidthKey_11034a3d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  uStack_70 = *(undefined8 *)PTR__kCVPixelBufferHeightKey_11034a388;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_58 = puVar1;
  func_0x00010c0df720(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  puVar1 = puVar3;
  _CVPixelBufferPoolCreate(uVar4,0,puVar3,&uStack_90);
  uVar5 = uStack_90;
  if ((int)uVar4 != 0) {
    uVar5 = 0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar5;
  }
  ___stack_chk_fail();
  _objc_retainBlock();
  uVar5 = *(undefined8 *)(puVar3 + 8);
  *(undefined **)(puVar3 + 8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return uVar5;
}



/* Entry: 1090532ec; end: 10905331b; -[SCManagedVideoFrameSamplerImpl sampleNextFrame:] */

void FUN_1090532ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10905331c; end: 109053373; -[SCManagedVideoFrameSamplerImpl ciContext] */

void FUN_10905331c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___CIContext_1126b3120;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 109053374; end: 109053497; -[SCManagedVideoFrameSamplerImpl didReceiveVideoSampleBuffer:] */

void FUN_109053374(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 8);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar2);
  if (lVar1 != 0) {
    lVar3 = param_3;
    _CMSampleBufferGetImageBuffer();
    _CMSampleBufferGetPresentationTimeStamp(&uStack_48,param_3);
    if (lVar3 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      func_0x00010b695f7c(lVar3);
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      _objc_alloc();
      func_0x00010bffa280(0x3ff0000000000000);
      _CGImageRelease(lVar3);
    }
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_109053498;
    puStack_78 = &UNK_110ad6190;
    _objc_retain(lVar1);
    uStack_58 = uStack_40;
    uStack_60 = uStack_48;
    uStack_50 = uStack_38;
    puStack_70 = puVar4;
    lStack_68 = lVar1;
    _objc_retain(puVar4);
    func_0x000107c312d0("APPSTORE",&puStack_90);
    _objc_release(puStack_70);
    _objc_release(lStack_68);
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 109053498; end: 1090534d3;  */

void FUN_109053498(long param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x38);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  uStack_20 = *(undefined8 *)(param_1 + 0x40);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),&uStack_30);
  return;
}



/* Entry: 1090534d4; end: 1090534db; -[SCManagedVideoFrameSamplerImpl frameSampleBlock] */

undefined8 FUN_1090534d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1090534dc; end: 1090534e3; -[SCManagedVideoFrameSamplerImpl setFrameSampleBlock:] */

void FUN_1090534dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}


