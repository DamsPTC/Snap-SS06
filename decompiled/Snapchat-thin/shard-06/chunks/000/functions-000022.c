/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043d3950; end: 1043d3983; -[SCManagedCapturerState description] */

void FUN_1043d3950(void)

{
  undefined1 auStack_a8 [152];
  
  FUN_1043d41b8(auStack_a8);
  func_0x0001043b9dcc(auStack_a8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043d3984; end: 1043d39cb; -[SCManagedCapturerState init] */

void FUN_1043d3984(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCapturer/SCManagedCapturerStateWrapper.swift",0x2e,2,0x12f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043d39cc);
  (*pcVar1)();
}



/* Entry: 1043d39cc; end: 1043d3a0b; +[SCManagedCapturerStateBuilder managedCapturerStateWithExistingManagedCapturerState:] */

void FUN_1043d39cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001002ed5ac(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043d3a0c; end: 1043d3a1b; -[SCManagedCapturerStateBuilder withIsInterrupted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3a0c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075c98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3a1c; end: 1043d3a2b; -[SCManagedCapturerStateBuilder withIsMultitaskingCameraAccessEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3a1c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075ca0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3a2c; end: 1043d3a43; -[SCManagedCapturerStateBuilder withFrameRate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3a2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113075ca8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3a44; end: 1043d3aa3; -[SCManagedCapturerStateBuilder withStabilizationModeState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043d3a44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113075cb0);
  *(undefined8 *)(param_1 + _DAT_113075cb0) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1043d3aa4; end: 1043d3ab3; -[SCManagedCapturerStateBuilder withLowLightCondition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3aa4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075cb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3ab4; end: 1043d3ac3; -[SCManagedCapturerStateBuilder withAdjustingExposure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3ab4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075cc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3ac4; end: 1043d3ad3; -[SCManagedCapturerStateBuilder withAdjustingFocus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3ac4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075cc8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3ad4; end: 1043d3aeb; -[SCManagedCapturerStateBuilder withDevicePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113075cd0);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3aec; end: 1043d3b03; -[SCManagedCapturerStateBuilder withSecondaryDevicePositions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3aec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113075cd8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3b04; end: 1043d3b63; -[SCManagedCapturerStateBuilder withExposureBias:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043d3b04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113075ce0);
  *(undefined8 *)(param_1 + _DAT_113075ce0) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1043d3b64; end: 1043d3b73; -[SCManagedCapturerStateBuilder withFlashSupported:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3b64(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075ce8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3b74; end: 1043d3b83; -[SCManagedCapturerStateBuilder withTorchSupported:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3b74(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075cf0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3b84; end: 1043d3b93; -[SCManagedCapturerStateBuilder withFlashActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3b84(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075cf8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3b94; end: 1043d3bf3; -[SCManagedCapturerStateBuilder withRingFlashSelectionInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043d3b94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113075d00);
  *(undefined8 *)(param_1 + _DAT_113075d00) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1043d3bf4; end: 1043d3c03; -[SCManagedCapturerStateBuilder withTorchActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3bf4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075d08) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3c04; end: 1043d3c13; -[SCManagedCapturerStateBuilder withLensesActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3c04(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075d10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3c14; end: 1043d3c23; -[SCManagedCapturerStateBuilder withArSessionActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3c14(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075d18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3c24; end: 1043d3c33; -[SCManagedCapturerStateBuilder withLensProcessorReady:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3c24(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075d20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3c34; end: 1043d3c43; -[SCManagedCapturerStateBuilder withDirectorModeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3c34(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075d28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3c44; end: 1043d3c5b; -[SCManagedCapturerStateBuilder withLightingCondition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3c44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113075d30);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3c5c; end: 1043d3c6b; -[SCManagedCapturerStateBuilder withAudioSessionActivated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3c5c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075d38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3c6c; end: 1043d3c83; -[SCManagedCapturerStateBuilder withLensActivationSourceOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3c6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113075d40);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3c84; end: 1043d3c9b; -[SCManagedCapturerStateBuilder withAvailabilityOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3c84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113075d48);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3c9c; end: 1043d3cb3; -[SCManagedCapturerStateBuilder withZoomFactor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3c9c(undefined4 param_1,long param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 + _DAT_113075d50);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3cb4; end: 1043d3cc3; -[SCManagedCapturerStateBuilder withUltraWideSupportedOnCurrentDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3cb4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075d58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3cc4; end: 1043d3cd3; -[SCManagedCapturerStateBuilder withTelephotoSupportedOnCurrentDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3cc4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075d60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3cd4; end: 1043d3ce3; -[SCManagedCapturerStateBuilder withHasUltraWideSupportedDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3cd4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075d68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3ce4; end: 1043d3cf3; -[SCManagedCapturerStateBuilder withHasTelephotoSupportedDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3ce4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075d70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3cf4; end: 1043d3d53; -[SCManagedCapturerStateBuilder withTelephotoSwitchZoomThreshold:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043d3cf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113075d78);
  *(undefined8 *)(param_1 + _DAT_113075d78) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1043d3d54; end: 1043d3dbf; -[SCManagedCapturerStateBuilder withBackCamerasOpticalZoomFactors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3d54(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_113075d80);
  *(long *)(param_1 + _DAT_113075d80) = param_3;
  _objc_retain();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043d3dc0; end: 1043d3dcf; -[SCManagedCapturerStateBuilder withAspectRatio4By3ModeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3dc0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075d88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3dd0; end: 1043d3ddf; -[SCManagedCapturerStateBuilder withHasCapturerBeenInitialized:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3dd0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075d90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3de0; end: 1043d3def; -[SCManagedCapturerStateBuilder withIsHDModeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3de0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075d98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3df0; end: 1043d3dff; -[SCManagedCapturerStateBuilder withIsFrontCameraNotFound:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3df0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075da0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3e00; end: 1043d3e0f; -[SCManagedCapturerStateBuilder withIsBackCameraNotFound:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3e00(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075da8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3e10; end: 1043d3e27; -[SCManagedCapturerStateBuilder withCameraLensSmudgeStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3e10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113075db0);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043d3e28; end: 1043d3e6b; -[SCManagedCapturerStateBuilder safeBuildAndReturnError:] */

void FUN_1043d3e28(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001000c033c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043d3e6c; end: 1043d3e6f;  */

void FUN_1043d3e6c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043d3e70; end: 1043d3ea3;  */

void FUN_1043d3e70(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043d3ea4; end: 1043d41b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d3ea4(undefined1 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _DAT_113075b78) = *param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113075b80) = param_1[1];
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(unaff_x20 + _DAT_113075b88) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(unaff_x20 + _DAT_113075b90) = uStack_38;
  *(undefined1 *)(unaff_x20 + _DAT_113075b98) = param_1[0x18];
  *(undefined1 *)(unaff_x20 + _DAT_113075ba0) = param_1[0x19];
  *(undefined1 *)(unaff_x20 + _DAT_113075ba8) = param_1[0x1a];
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(unaff_x20 + _DAT_113075bb0) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(unaff_x20 + _DAT_113075bb8) = uVar1;
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(unaff_x20 + _DAT_113075bc0) = uStack_40;
  *(undefined1 *)(unaff_x20 + _DAT_113075bc8) = param_1[0x38];
  *(undefined1 *)(unaff_x20 + _DAT_113075bd0) = param_1[0x39];
  *(undefined1 *)(unaff_x20 + _DAT_113075bd8) = param_1[0x3a];
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(unaff_x20 + _DAT_113075be0) = uStack_48;
  *(undefined1 *)(unaff_x20 + _DAT_113075be8) = param_1[0x48];
  *(undefined1 *)(unaff_x20 + _DAT_113075bf0) = param_1[0x49];
  *(undefined1 *)(unaff_x20 + _DAT_113075bf8) = param_1[0x4a];
  *(undefined1 *)(unaff_x20 + _DAT_113075c00) = param_1[0x4b];
  *(undefined1 *)(unaff_x20 + _DAT_113075c08) = param_1[0x4c];
  *(undefined8 *)(unaff_x20 + _DAT_113075c10) = *(undefined8 *)(param_1 + 0x50);
  *(undefined1 *)(unaff_x20 + _DAT_113075c18) = param_1[0x58];
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(unaff_x20 + _DAT_113075c20) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(unaff_x20 + _DAT_113075c28) = uVar1;
  *(undefined4 *)(unaff_x20 + _DAT_113075c30) = *(undefined4 *)(param_1 + 0x70);
  *(undefined1 *)(unaff_x20 + _DAT_113075c38) = param_1[0x74];
  *(undefined1 *)(unaff_x20 + _DAT_113075c40) = param_1[0x75];
  *(undefined1 *)(unaff_x20 + _DAT_113075c48) = param_1[0x76];
  *(undefined1 *)(unaff_x20 + _DAT_113075c50) = param_1[0x77];
  uStack_50 = *(undefined8 *)(param_1 + 0x78);
  uStack_58 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(unaff_x20 + _DAT_113075c58) = uStack_50;
  *(undefined8 *)(unaff_x20 + _DAT_113075c60) = uStack_58;
  *(undefined1 *)(unaff_x20 + _DAT_113075c68) = param_1[0x88];
  *(undefined1 *)(unaff_x20 + _DAT_113075c70) = param_1[0x89];
  *(undefined1 *)(unaff_x20 + _DAT_113075c78) = param_1[0x8a];
  *(undefined1 *)(unaff_x20 + _DAT_113075c80) = param_1[0x8b];
  *(undefined1 *)(unaff_x20 + _DAT_113075c88) = param_1[0x8c];
  *(undefined8 *)(unaff_x20 + _DAT_113075c90) = *(undefined8 *)(param_1 + 0x90);
  FUN_1043d4484(&uStack_38,auStack_60,0x113075e08,&UNK_10dcf6890);
  FUN_1043d4484(&uStack_40,auStack_60,0x112dc3de0,&UNK_10d9813c0);
  FUN_1043d4484(&uStack_48,auStack_60,0x113075e10,&UNK_10dcf68a0);
  FUN_1043d4484(&uStack_50,auStack_60,0x112dc3de0,&UNK_10d9813c0);
  FUN_1043d4484(&uStack_58,auStack_60,0x11302e3e8,&UNK_10dcaa5f0);
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043d41b8; end: 1043d4483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d41b8(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined4 uVar35;
  
  uVar1 = *(undefined1 *)(param_2 + _DAT_113075b80);
  uVar25 = *(undefined8 *)(param_2 + _DAT_113075b88);
  uVar23 = *(undefined8 *)(param_2 + _DAT_113075b90);
  uVar2 = *(undefined1 *)(param_2 + _DAT_113075b98);
  uVar3 = *(undefined1 *)(param_2 + _DAT_113075ba0);
  uVar4 = *(undefined1 *)(param_2 + _DAT_113075ba8);
  uVar27 = *(undefined8 *)(param_2 + _DAT_113075bb0);
  uVar26 = *(undefined8 *)(param_2 + _DAT_113075bb8);
  uVar28 = *(undefined8 *)(param_2 + _DAT_113075bc0);
  uVar5 = *(undefined1 *)(param_2 + _DAT_113075bc8);
  uVar6 = *(undefined1 *)(param_2 + _DAT_113075bd0);
  uVar7 = *(undefined1 *)(param_2 + _DAT_113075bd8);
  uVar29 = *(undefined8 *)(param_2 + _DAT_113075be0);
  uVar8 = *(undefined1 *)(param_2 + _DAT_113075be8);
  uVar9 = *(undefined1 *)(param_2 + _DAT_113075bf0);
  uVar10 = *(undefined1 *)(param_2 + _DAT_113075bf8);
  uVar11 = *(undefined1 *)(param_2 + _DAT_113075c00);
  uVar12 = *(undefined1 *)(param_2 + _DAT_113075c08);
  uVar32 = *(undefined8 *)(param_2 + _DAT_113075c10);
  uVar13 = *(undefined1 *)(param_2 + _DAT_113075c18);
  uVar33 = *(undefined8 *)(param_2 + _DAT_113075c20);
  uVar34 = *(undefined8 *)(param_2 + _DAT_113075c28);
  uVar35 = *(undefined4 *)(param_2 + _DAT_113075c30);
  uVar14 = *(undefined1 *)(param_2 + _DAT_113075c38);
  uVar15 = *(undefined1 *)(param_2 + _DAT_113075c40);
  uVar16 = *(undefined1 *)(param_2 + _DAT_113075c48);
  uVar17 = *(undefined1 *)(param_2 + _DAT_113075c50);
  uVar30 = *(undefined8 *)(param_2 + _DAT_113075c58);
  uVar31 = *(undefined8 *)(param_2 + _DAT_113075c60);
  uVar18 = *(undefined1 *)(param_2 + _DAT_113075c68);
  uVar19 = *(undefined1 *)(param_2 + _DAT_113075c70);
  uVar20 = *(undefined1 *)(param_2 + _DAT_113075c78);
  uVar21 = *(undefined1 *)(param_2 + _DAT_113075c80);
  uVar22 = *(undefined1 *)(param_2 + _DAT_113075c88);
  uVar24 = *(undefined8 *)(param_2 + _DAT_113075c90);
  *param_1 = *(undefined1 *)(param_2 + _DAT_113075b78);
  param_1[1] = uVar1;
  param_1[0x18] = uVar2;
  param_1[0x19] = uVar3;
  param_1[0x1a] = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar27;
  *(undefined8 *)(param_1 + 0x28) = uVar26;
  param_1[0x38] = uVar5;
  param_1[0x39] = uVar6;
  param_1[0x3a] = uVar7;
  param_1[0x48] = uVar8;
  param_1[0x49] = uVar9;
  param_1[0x4a] = uVar10;
  param_1[0x4b] = uVar11;
  param_1[0x4c] = uVar12;
  *(undefined8 *)(param_1 + 0x50) = uVar32;
  param_1[0x58] = uVar13;
  *(undefined8 *)(param_1 + 0x60) = uVar33;
  *(undefined8 *)(param_1 + 0x68) = uVar34;
  param_1[0x74] = uVar14;
  param_1[0x75] = uVar15;
  param_1[0x76] = uVar16;
  param_1[0x77] = uVar17;
  param_1[0x88] = uVar18;
  param_1[0x89] = uVar19;
  param_1[0x8a] = uVar20;
  param_1[0x8b] = uVar21;
  param_1[0x8c] = uVar22;
  *(undefined8 *)(param_1 + 0x90) = uVar24;
  *(undefined8 *)(param_1 + 8) = uVar25;
  *(undefined8 *)(param_1 + 0x10) = uVar23;
  *(undefined8 *)(param_1 + 0x30) = uVar28;
  *(undefined8 *)(param_1 + 0x40) = uVar29;
  *(undefined4 *)(param_1 + 0x70) = uVar35;
  *(undefined8 *)(param_1 + 0x78) = uVar30;
  *(undefined8 *)(param_1 + 0x80) = uVar31;
  _objc_retain();
  _objc_retain(uVar28);
  _objc_retain(uVar29);
  _objc_retain(uVar30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar31);
  return;
}



/* Entry: 1043d4484; end: 1043d44cb;  */

undefined8 FUN_1043d4484(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1043d44cc; end: 1043d44cf;  */

void FUN_1043d44cc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043d44d0; end: 1043d456f;  */

void FUN_1043d44d0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1043d4570; end: 1043d4593;  */

void FUN_1043d4570(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 1043d4594; end: 1043d45d7; -[SCCapturerStateChangeUpdate description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d4594(long param_1)

{
  undefined1 auStack_a8 [152];
  
  if (*(long *)(param_1 + _DAT_113075e18) != 0) {
    FUN_1043d41b8(auStack_a8);
    func_0x0001043b9dcc(auStack_a8);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043d45d8; end: 1043d461f; -[SCCapturerStateChangeUpdate init] */

void FUN_1043d45d8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCapturer/SCCapturerStateChangeUpdateWrapper.swift",0x33,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043d4620);
  (*pcVar1)();
}



/* Entry: 1043d4620; end: 1043d4623; -[SCCapturerStateChangeUpdate copyWithZone:] */

void FUN_1043d4620(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043d4624; end: 1043d467f; +[SCCapturerStateChangeUpdate didChangeStateWithState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d4624(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_113075e18) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043d4680; end: 1043d46b3;  */

void FUN_1043d4680(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043d46b4; end: 1043d47a3;  */

uint FUN_1043d46b4(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1043d47a4; end: 1043d47e3;  */

void FUN_1043d47a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113075e50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf68f4;
  _swift_getWitnessTable(&UNK_10dcf68f4,&UNK_110766278);
  puRam0000000113075e50 = puVar1;
  return;
}



/* Entry: 1043d47e4; end: 1043d48b7;  */

void FUN_1043d47e4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1043d48b8; end: 1043d48d7;  */

void FUN_1043d48b8(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1043d48d8; end: 1043d490b;  */

undefined8 FUN_1043d48d8(undefined8 param_1)

{
  (*(code *)(undefined *)0x1043bd740)();
  return param_1;
}



/* Entry: 1043d490c; end: 1043d493f; -[SCCapturerStateDevicePropertiesUpdate description] */

void FUN_1043d490c(void)

{
  undefined1 auStack_b8 [168];
  
  FUN_1043d528c(auStack_b8);
  FUN_1043d48d8(auStack_b8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043d4940; end: 1043d4987; -[SCCapturerStateDevicePropertiesUpdate init] */

void FUN_1043d4940(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCapturer/SCCapturerStateDevicePropertiesUpdateWrapper.swift",0x3d,2,0x8b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043d4988);
  (*pcVar1)();
}



/* Entry: 1043d4988; end: 1043d498b; -[SCCapturerStateDevicePropertiesUpdate copyWithZone:] */

void FUN_1043d4988(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043d498c; end: 1043d49cb; +[SCCapturerStateDevicePropertiesUpdate didChangeFrameRateWithState:] */

void FUN_1043d498c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100c42db8(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043d49cc; end: 1043d49cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d49cc(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  func_0x000100c42040();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113075e58) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075e60) = 0;
  *(long *)(lVar4 + _DAT_113075e68) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113075e70) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e78) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e80) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e88) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075e90);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075e98) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075ea0) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075ea8) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075eb0) = 0;
  *(undefined1 *)(lVar4 + _DAT_113075eb8) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075ed0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ed8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 1043d49d0; end: 1043d4a0f; +[SCCapturerStateDevicePropertiesUpdate didChangeStabilizationModeActiveWithState:] */

void FUN_1043d49d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1043d5a40(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043d4a10; end: 1043d4a13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d4a10(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  func_0x000100c42040();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113075e58) = 2;
  *(undefined8 *)(lVar4 + _DAT_113075e60) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e68) = 0;
  *(long *)(lVar4 + _DAT_113075e70) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113075e78) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e80) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e88) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075e90);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075e98) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075ea0) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075ea8) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075eb0) = 0;
  *(undefined1 *)(lVar4 + _DAT_113075eb8) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075ed0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ed8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 1043d4a14; end: 1043d4a53; +[SCCapturerStateDevicePropertiesUpdate didChangeFlashActiveWithState:] */

void FUN_1043d4a14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001043d5b84(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043d4a54; end: 1043d4a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d4a54(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  func_0x000100c42040();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113075e58) = 3;
  *(undefined8 *)(lVar4 + _DAT_113075e60) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e68) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e70) = 0;
  *(long *)(lVar4 + _DAT_113075e78) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113075e80) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e88) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075e90);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075e98) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075ea0) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075ea8) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075eb0) = 0;
  *(undefined1 *)(lVar4 + _DAT_113075eb8) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075ed0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ed8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 1043d4a58; end: 1043d4a97; +[SCCapturerStateDevicePropertiesUpdate didChangeRingFlashStateWithState:] */

void FUN_1043d4a58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001043d5cc8(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043d4a98; end: 1043d4a9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d4a98(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  func_0x000100c42040();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113075e58) = 4;
  *(undefined8 *)(lVar4 + _DAT_113075e60) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e68) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e70) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e78) = 0;
  *(long *)(lVar4 + _DAT_113075e80) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113075e88) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075e90);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075e98) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075ea0) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075ea8) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075eb0) = 0;
  *(undefined1 *)(lVar4 + _DAT_113075eb8) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075ed0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ed8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 1043d4a9c; end: 1043d4adb; +[SCCapturerStateDevicePropertiesUpdate didChangeFlashSupportedAndTorchSupportedWithState:] */

void FUN_1043d4a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001043d5e10(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043d4adc; end: 1043d4adf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d4adc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000100c42040();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113075e58) = 5;
  *(undefined8 *)(lVar4 + _DAT_113075e60) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e68) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e70) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e78) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e80) = 0;
  *(long *)(lVar4 + _DAT_113075e88) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075e90);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e98) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075ea0) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075ea8) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075eb0) = 0;
  *(undefined1 *)(lVar4 + _DAT_113075eb8) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075ed0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ed8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 1043d4ae0; end: 1043d4b2f; +[SCCapturerStateDevicePropertiesUpdate didChangeZoomFactorWithState:devicePosition:] */

void FUN_1043d4ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1043d5f58(param_3,param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043d4b30; end: 1043d4b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d4b30(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  func_0x000100c42040();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113075e58) = 6;
  *(undefined8 *)(lVar4 + _DAT_113075e60) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e68) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e70) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e78) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e80) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e88) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075e90);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(long *)(lVar4 + _DAT_113075e98) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113075ea0) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075ea8) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075eb0) = 0;
  *(undefined1 *)(lVar4 + _DAT_113075eb8) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075ed0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ed8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 1043d4b34; end: 1043d4b73; +[SCCapturerStateDevicePropertiesUpdate didChangeLowLightConditionWithState:] */

void FUN_1043d4b34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1043d60ac(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043d4b74; end: 1043d4b77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d4b74(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  func_0x000100c42040();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113075e58) = 7;
  *(undefined8 *)(lVar4 + _DAT_113075e60) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e68) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e70) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e78) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e80) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e88) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075e90);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075e98) = 0;
  *(long *)(lVar4 + _DAT_113075ea0) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113075ea8) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075eb0) = 0;
  *(undefined1 *)(lVar4 + _DAT_113075eb8) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075ed0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ed8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 1043d4b78; end: 1043d4bb7; +[SCCapturerStateDevicePropertiesUpdate didChangeToneModeActiveWithState:] */

void FUN_1043d4b78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001043d61f4(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043d4bb8; end: 1043d4bbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d4bb8(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  func_0x000100c42040();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113075e58) = 8;
  *(undefined8 *)(lVar4 + _DAT_113075e60) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e68) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e70) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e78) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e80) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e88) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075e90);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075e98) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075ea0) = 0;
  *(long *)(lVar4 + _DAT_113075ea8) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113075eb0) = 0;
  *(undefined1 *)(lVar4 + _DAT_113075eb8) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075ed0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ed8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 1043d4bbc; end: 1043d4bfb; +[SCCapturerStateDevicePropertiesUpdate didChangeIsHDModeActiveWithState:] */

void FUN_1043d4bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001043d633c(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043d4bfc; end: 1043d4c3b; +[SCCapturerStateDevicePropertiesUpdate didChangeLensSmudgeStatusWithState:] */

void FUN_1043d4bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100c42064(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043d4c3c; end: 1043d4c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d4c3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000100c42040();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_113075e58) = 10;
  *(undefined8 *)(lVar3 + _DAT_113075e60) = 0;
  *(undefined8 *)(lVar3 + _DAT_113075e68) = 0;
  *(undefined8 *)(lVar3 + _DAT_113075e70) = 0;
  *(undefined8 *)(lVar3 + _DAT_113075e78) = 0;
  *(undefined8 *)(lVar3 + _DAT_113075e80) = 0;
  *(undefined8 *)(lVar3 + _DAT_113075e88) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113075e90);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar3 + _DAT_113075e98) = 0;
  *(undefined8 *)(lVar3 + _DAT_113075ea0) = 0;
  *(undefined8 *)(lVar3 + _DAT_113075ea8) = 0;
  *(undefined8 *)(lVar3 + _DAT_113075eb0) = 0;
  *(char *)(lVar3 + _DAT_113075eb8) = (char)param_1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113075ec0);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113075ec8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar3 + _DAT_113075ed0) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113075ed8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043d4c40; end: 1043d4c5f; +[SCCapturerStateDevicePropertiesUpdate didToggleMultiCamSessionWithEnabled:primaryCameraPosition:secondaryCameraPositions:] */

void FUN_1043d4c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1043d6484(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043d4c60; end: 1043d4c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d4c60(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  func_0x000100c42040();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113075e58) = 0xb;
  *(undefined8 *)(lVar4 + _DAT_113075e60) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e68) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e70) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e78) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e80) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e88) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075e90);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075e98) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075ea0) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075ea8) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075eb0) = 0;
  *(undefined1 *)(lVar4 + _DAT_113075eb8) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(long *)(lVar4 + _DAT_113075ed0) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ed8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _swift_bridgeObjectRetain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 1043d4c64; end: 1043d4cf7; +[SCCapturerStateDevicePropertiesUpdate didDetectFaceBoundsWithFaceBoundsByFaceID:] */

void FUN_1043d4c64(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_3 != 0) {
    uVar1 = 0;
    FUN_1043d6a08(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar2 = 0;
    FUN_1043d6a08(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
    uVar3 = uVar2;
    func_0x000100120cb0();
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,uVar1,uVar2,uVar3);
  }
  lVar4 = param_3;
  FUN_1043d65cc(param_3);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1043d4cf8; end: 1043d4cfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d4cf8(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  func_0x000100c42040();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113075e58) = 0xc;
  *(undefined8 *)(lVar4 + _DAT_113075e60) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e68) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e70) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e78) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e80) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075e88) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075e90);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075e98) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075ea0) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075ea8) = 0;
  *(undefined8 *)(lVar4 + _DAT_113075eb0) = 0;
  *(undefined1 *)(lVar4 + _DAT_113075eb8) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113075ec8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113075ed0) = 0;
  plVar2 = (long *)(lVar4 + _DAT_113075ed8);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = 0;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043d4cfc; end: 1043d4d13; +[SCCapturerStateDevicePropertiesUpdate activateDeviceDidFailWithDevicePosition:] */

void FUN_1043d4cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001043d6714(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043d4d14; end: 1043d4d63; -[SCCapturerStateDevicePropertiesUpdate onDidChangeFrameRate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d4d14(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + _DAT_113075e58);
  _objc_retain();
  if (cVar1 == '\0') {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_113075e60));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1043d4d64; end: 1043d4db7; -[SCCapturerStateDevicePropertiesUpdate onDidChangeStabilizationModeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d4d64(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + _DAT_113075e58);
  _objc_retain();
  if (cVar1 == '\x01') {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_113075e68));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1043d4db8; end: 1043d4e0b; -[SCCapturerStateDevicePropertiesUpdate onDidChangeFlashActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d4db8(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + _DAT_113075e58);
  _objc_retain();
  if (cVar1 == '\x02') {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_113075e70));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1043d4e0c; end: 1043d4ec7; -[SCCapturerStateDevicePropertiesUpdate onDidChangeFlashSupportedAndTorchSupported:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d4e0c(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + _DAT_113075e58);
  _objc_retain();
  if (cVar1 == '\x04') {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_113075e80));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1043d4ec8; end: 1043d4f0b; -[SCCapturerStateDevicePropertiesUpdate onDidChangeZoomFactor:] */

void FUN_1043d4ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001043d4e60(0x1043d6a50,auStack_40);
  _objc_release(param_1);
  return;
}



/* Entry: 1043d4f0c; end: 1043d4f5f; -[SCCapturerStateDevicePropertiesUpdate onDidChangeToneModeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d4f0c(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + _DAT_113075e58);
  _objc_retain();
  if (cVar1 == '\a') {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_113075ea0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1043d4f60; end: 1043d4fb3; -[SCCapturerStateDevicePropertiesUpdate onDidChangeIsHDModeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d4f60(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + _DAT_113075e58);
  _objc_retain();
  if (cVar1 == '\b') {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_113075ea8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1043d4fb4; end: 1043d509f; -[SCCapturerStateDevicePropertiesUpdate onDidChangeLensSmudgeStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d4fb4(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + _DAT_113075e58);
  _objc_retain();
  if (cVar1 == '\t') {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_113075eb0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1043d50a0; end: 1043d50e3; -[SCCapturerStateDevicePropertiesUpdate onDidToggleMultiCamSession:] */

void FUN_1043d50a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001043d5008(FUN_1043d6a48,auStack_40);
  _objc_release(param_1);
  return;
}



/* Entry: 1043d50e4; end: 1043d51ab; -[SCCapturerStateDevicePropertiesUpdate onDidDetectFaceBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d50e4(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  cVar1 = *(char *)(param_1 + _DAT_113075e58);
  _objc_retain();
  if (cVar1 == '\v') {
    lVar5 = *(long *)(param_1 + _DAT_113075ed0);
    if (lVar5 != 0) {
      uVar2 = 0;
      FUN_1043d6a08(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar3 = 0;
      FUN_1043d6a08(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
      uVar4 = uVar3;
      func_0x000100120cb0();
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF(lVar5,uVar2,uVar3,uVar4);
    }
    (**(code **)(param_3 + 0x10))(param_3,lVar5);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1043d51ac; end: 1043d5203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d51ac(code *param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_113075e58) == '\f') {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113075ed8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1043d5204);
      (*pcVar1)();
    }
    (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_113075ed8));
  }
  return;
}



/* Entry: 1043d5204; end: 1043d5247; -[SCCapturerStateDevicePropertiesUpdate onActivateDeviceDidFail:] */

void FUN_1043d5204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_30 = param_3;
  _objc_retain();
  FUN_1043d51ac(FUN_1043d69f8,auStack_40);
  _objc_release(param_1);
  return;
}



/* Entry: 1043d5248; end: 1043d527b;  */

void FUN_1043d5248(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043d527c; end: 1043d528b;  */

ulong FUN_1043d527c(ulong param_1)

{
  if (0xc < param_1) {
    param_1 = 0xd;
  }
  return param_1;
}



/* Entry: 1043d528c; end: 1043d5a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043d528c(ulong *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong *puVar3;
  uint uVar4;
  ulong unaff_x20;
  ulong in_register_00005008;
  ulong in_register_00005028;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  byte bStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  byte bStack_40;
  
  bStack_40 = *(byte *)(param_4 + _DAT_113075e58);
  uVar2 = (ulong)bStack_40;
  puVar3 = (ulong *)&UNK_100db7e10;
  uVar4 = *(int *)(&UNK_100db7e10 + uVar2 * 4) + 0x43d52b8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bStack_40) {
  default:
    if (*(long *)(param_4 + _DAT_113075e60) == 0) {
      func_0x0001043cd0a8(&uStack_230);
    }
    else {
      FUN_1043d41b8(&uStack_e0);
      func_0x0001043cd0dc(&uStack_e0);
      uStack_1c8 = uStack_78;
      uStack_1d0 = uStack_80;
      uStack_1b8 = uStack_68;
      uStack_1c0 = uStack_70;
      uStack_1a8 = uStack_58;
      uStack_1b0 = uStack_60;
      uStack_1a0 = uStack_50;
      uStack_208 = uStack_b8;
      uStack_210 = uStack_c0;
      uStack_1f8 = uStack_a8;
      uStack_200 = uStack_b0;
      uStack_1e8 = uStack_98;
      uStack_1f0 = uStack_a0;
      uStack_1d8 = uStack_88;
      uStack_1e0 = uStack_90;
      uStack_228 = uStack_d8;
      uStack_230 = uStack_e0;
      uStack_218 = uStack_c8;
      uStack_220 = uStack_d0;
    }
    uStack_128 = uStack_1c8;
    uStack_130 = uStack_1d0;
    uStack_118 = uStack_1b8;
    uStack_120 = uStack_1c0;
    uStack_108 = uStack_1a8;
    uStack_110 = uStack_1b0;
    uStack_100 = uStack_1a0;
    uStack_168 = uStack_208;
    uStack_170 = uStack_210;
    uStack_158 = uStack_1f8;
    uStack_160 = uStack_200;
    uStack_148 = uStack_1e8;
    uStack_150 = uStack_1f0;
    uStack_138 = uStack_1d8;
    uStack_140 = uStack_1e0;
    uStack_188 = uStack_228;
    uStack_190 = uStack_230;
    uStack_178 = uStack_218;
    uStack_180 = uStack_220;
    func_0x0001043d6ae8(&uStack_190);
    break;
  case 1:
    if (*(long *)(param_4 + _DAT_113075e68) == 0) {
      func_0x0001043cd0a8(&uStack_230);
    }
    else {
      FUN_1043d41b8(&uStack_e0);
      func_0x0001043cd0dc(&uStack_e0);
      uStack_1c8 = uStack_78;
      uStack_1d0 = uStack_80;
      uStack_1b8 = uStack_68;
      uStack_1c0 = uStack_70;
      uStack_1a8 = uStack_58;
      uStack_1b0 = uStack_60;
      uStack_1a0 = uStack_50;
      uStack_208 = uStack_b8;
      uStack_210 = uStack_c0;
      uStack_1f8 = uStack_a8;
      uStack_200 = uStack_b0;
      uStack_1e8 = uStack_98;
      uStack_1f0 = uStack_a0;
      uStack_1d8 = uStack_88;
      uStack_1e0 = uStack_90;
      uStack_228 = uStack_d8;
      uStack_230 = uStack_e0;
      uStack_218 = uStack_c8;
      uStack_220 = uStack_d0;
    }
    uStack_128 = uStack_1c8;
    uStack_130 = uStack_1d0;
    uStack_118 = uStack_1b8;
    uStack_120 = uStack_1c0;
    uStack_108 = uStack_1a8;
    uStack_110 = uStack_1b0;
    uStack_100 = uStack_1a0;
    uStack_168 = uStack_208;
    uStack_170 = uStack_210;
    uStack_158 = uStack_1f8;
    uStack_160 = uStack_200;
    uStack_148 = uStack_1e8;
    uStack_150 = uStack_1f0;
    uStack_138 = uStack_1d8;
    uStack_140 = uStack_1e0;
    uStack_188 = uStack_228;
    uStack_190 = uStack_230;
    uStack_178 = uStack_218;
    uStack_180 = uStack_220;
    func_0x0001043d6adc(&uStack_190);
    break;
  case 2:
    if (*(long *)(param_4 + _DAT_113075e70) == 0) {
      func_0x0001043cd0a8(&uStack_230);
    }
    else {
      FUN_1043d41b8(&uStack_e0);
      func_0x0001043cd0dc(&uStack_e0);
      uStack_1c8 = uStack_78;
      uStack_1d0 = uStack_80;
      uStack_1b8 = uStack_68;
      uStack_1c0 = uStack_70;
      uStack_1a8 = uStack_58;
      uStack_1b0 = uStack_60;
      uStack_1a0 = uStack_50;
      uStack_208 = uStack_b8;
      uStack_210 = uStack_c0;
      uStack_1f8 = uStack_a8;
      uStack_200 = uStack_b0;
      uStack_1e8 = uStack_98;
      uStack_1f0 = uStack_a0;
      uStack_1d8 = uStack_88;
      uStack_1e0 = uStack_90;
      uStack_228 = uStack_d8;
      uStack_230 = uStack_e0;
      uStack_218 = uStack_c8;
      uStack_220 = uStack_d0;
    }
    uStack_128 = uStack_1c8;
    uStack_130 = uStack_1d0;
    uStack_118 = uStack_1b8;
    uStack_120 = uStack_1c0;
    uStack_108 = uStack_1a8;
    uStack_110 = uStack_1b0;
    uStack_100 = uStack_1a0;
    uStack_168 = uStack_208;
    uStack_170 = uStack_210;
    uStack_158 = uStack_1f8;
    uStack_160 = uStack_200;
    uStack_148 = uStack_1e8;
    uStack_150 = uStack_1f0;
    uStack_138 = uStack_1d8;
    uStack_140 = uStack_1e0;
    uStack_188 = uStack_228;
    uStack_190 = uStack_230;
    uStack_178 = uStack_218;
    uStack_180 = uStack_220;
    func_0x0001043d6ad0(&uStack_190);
    break;
  case 3:
    if (*(long *)(param_4 + _DAT_113075e78) != 0) {
      FUN_1043d41b8(&uStack_e0);
      goto code_r0x0001043d54b0;
    }
    func_0x0001043cd0a8(&uStack_230);
    param_2 = uStack_1d0;
    in_register_00005008 = uStack_1c8;
    param_3 = uStack_1c0;
    in_register_00005028 = uStack_1b8;
  case 0x15:
code_r0x0001043d57d0:
    uStack_108 = uStack_1a8;
    uStack_110 = uStack_1b0;
    uStack_100 = uStack_1a0;
    uStack_168 = uStack_208;
    uStack_170 = uStack_210;
    uStack_158 = uStack_1f8;
    uStack_160 = uStack_200;
    uStack_148 = uStack_1e8;
    uStack_150 = uStack_1f0;
    uStack_138 = uStack_1d8;
    uStack_140 = uStack_1e0;
    uStack_188 = uStack_228;
    uStack_190 = uStack_230;
    uStack_178 = uStack_218;
    uStack_180 = uStack_220;
    uStack_130 = param_2;
    uStack_128 = in_register_00005008;
    uStack_120 = param_3;
    uStack_118 = in_register_00005028;
    func_0x0001043d6ac4(&uStack_190);
    break;
  case 4:
    if (*(long *)(param_4 + _DAT_113075e80) != 0) {
      FUN_1043d41b8(&uStack_e0);
      func_0x0001043cd0dc(&uStack_e0);
      uStack_1c8 = uStack_78;
      uStack_1d0 = uStack_80;
      uStack_1b8 = uStack_68;
      uStack_1c0 = uStack_70;
      uStack_1a8 = uStack_58;
      uStack_1b0 = uStack_60;
      uStack_1a0 = uStack_50;
      uStack_208 = uStack_b8;
      uStack_210 = uStack_c0;
      uStack_1f8 = uStack_a8;
      uStack_200 = uStack_b0;
      uStack_1e8 = uStack_98;
      uStack_1f0 = uStack_a0;
      uStack_1d8 = uStack_88;
      uStack_1e0 = uStack_90;
      param_2 = uStack_e0;
      in_register_00005008 = uStack_d8;
      param_3 = uStack_d0;
      in_register_00005028 = uStack_c8;
      goto code_r0x0001043d53bc;
    }
    func_0x0001043cd0a8(&uStack_230);
    goto code_r0x0001043d5700;
  case 5:
    if (*(long *)(param_4 + _DAT_113075e88) != 0) {
      FUN_1043d41b8(&uStack_e0);
      func_0x0001043cd0dc(&uStack_e0);
      uStack_1c8 = uStack_78;
      uStack_1d0 = uStack_80;
      uStack_1b8 = uStack_68;
      uStack_1c0 = uStack_70;
      uStack_1a8 = uStack_58;
      uStack_1b0 = uStack_60;
      uStack_1a0 = uStack_50;
      uStack_208 = uStack_b8;
      uStack_210 = uStack_c0;
      uStack_1f8 = uStack_a8;
      uStack_200 = uStack_b0;
      uStack_1e8 = uStack_98;
      uStack_1f0 = uStack_a0;
      uStack_1d8 = uStack_88;
      uStack_1e0 = uStack_90;
      uStack_228 = uStack_d8;
      uStack_230 = uStack_e0;
      uStack_218 = uStack_c8;
      uStack_220 = uStack_d0;
      unaff_x20 = param_4;
      goto code_r0x0001043d55e8;
    }
    func_0x0001043cd0a8(&uStack_230);
    goto code_r0x0001043d58dc;
  case 6:
    if (*(long *)(param_4 + _DAT_113075e98) == 0) {
      func_0x0001043cd0a8(&uStack_230);
    }
    else {
      FUN_1043d41b8(&uStack_e0);
      func_0x0001043cd0dc(&uStack_e0);
      uStack_1c8 = uStack_78;
      uStack_1d0 = uStack_80;
      uStack_1b8 = uStack_68;
      uStack_1c0 = uStack_70;
      uStack_1a8 = uStack_58;
      uStack_1b0 = uStack_60;
      uStack_1a0 = uStack_50;
      uStack_208 = uStack_b8;
      uStack_210 = uStack_c0;
      uStack_1f8 = uStack_a8;
      uStack_200 = uStack_b0;
      uStack_1e8 = uStack_98;
      uStack_1f0 = uStack_a0;
      uStack_1d8 = uStack_88;
      uStack_1e0 = uStack_90;
      uStack_228 = uStack_d8;
      uStack_230 = uStack_e0;
      uStack_218 = uStack_c8;
      uStack_220 = uStack_d0;
    }
    uStack_128 = uStack_1c8;
    uStack_130 = uStack_1d0;
    uStack_118 = uStack_1b8;
    uStack_120 = uStack_1c0;
    uStack_108 = uStack_1a8;
    uStack_110 = uStack_1b0;
    uStack_100 = uStack_1a0;
    uStack_168 = uStack_208;
    uStack_170 = uStack_210;
    uStack_158 = uStack_1f8;
    uStack_160 = uStack_200;
    uStack_148 = uStack_1e8;
    uStack_150 = uStack_1f0;
    uStack_138 = uStack_1d8;
    uStack_140 = uStack_1e0;
    uStack_188 = uStack_228;
    uStack_190 = uStack_230;
    uStack_178 = uStack_218;
    uStack_180 = uStack_220;
    func_0x0001043d6aa0(&uStack_190);
    break;
  case 7:
    if (*(long *)(param_4 + _DAT_113075ea0) != 0) {
      FUN_1043d41b8(&uStack_e0);
      func_0x0001043cd0dc(&uStack_e0);
      uStack_1c8 = uStack_78;
      uStack_1d0 = uStack_80;
      uStack_1b8 = uStack_68;
      uStack_1c0 = uStack_70;
      uStack_1a8 = uStack_58;
      uStack_1b0 = uStack_60;
      uVar2 = uStack_50;
      goto code_r0x0001043d5520;
    }
    func_0x0001043cd0a8(&uStack_230);
    goto code_r0x0001043d5810;
  case 8:
    if (*(long *)(param_4 + _DAT_113075ea8) != 0) {
      FUN_1043d41b8(&uStack_e0);
      func_0x0001043cd0dc(&uStack_e0);
      uStack_1c8 = uStack_78;
      uStack_1d0 = uStack_80;
      uStack_1b8 = uStack_68;
      uStack_1c0 = uStack_70;
      uStack_1a8 = uStack_58;
      uStack_1b0 = uStack_60;
      uStack_1a0 = uStack_50;
      param_2 = uStack_c0;
      in_register_00005008 = uStack_b8;
      param_3 = uStack_b0;
      in_register_00005028 = uStack_a8;
      goto code_r0x0001043d56e0;
    }
    func_0x0001043cd0a8(&uStack_230);
    goto code_r0x0001043d5980;
  case 9:
    if (*(long *)(param_4 + _DAT_113075eb0) != 0) {
      FUN_1043d41b8(&uStack_e0);
      func_0x0001043cd0dc(&uStack_e0);
      uStack_1c8 = uStack_78;
      uStack_1d0 = uStack_80;
      uStack_1b8 = uStack_68;
      uStack_1c0 = uStack_70;
      uStack_1a8 = uStack_58;
      uStack_1b0 = uStack_60;
      uStack_1a0 = uStack_50;
      uStack_208 = uStack_b8;
      uStack_210 = uStack_c0;
      uStack_1f8 = uStack_a8;
      uStack_200 = uStack_b0;
      param_2 = uStack_a0;
      in_register_00005008 = uStack_98;
      param_3 = uStack_90;
      in_register_00005028 = uStack_88;
      goto code_r0x0001043d5434;
    }
    func_0x0001043cd0a8(&uStack_230);
    goto code_r0x0001043d5744;
  case 10:
    bStack_40 = *(byte *)(param_4 + _DAT_113075eb8);
    if (bStack_40 == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1043d5a34);
      (*pcVar1)();
    }
    puVar3 = (ulong *)(param_4 + _DAT_113075ec0);
    uVar4 = (uint)(byte)puVar3[1];
  case 0x12:
    if (uVar4 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1043d5a3c);
      (*pcVar1)();
    }
    if ((char)((ulong *)(param_4 + _DAT_113075ec8))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1043d5a40);
      (*pcVar1)();
    }
    uStack_188 = *puVar3;
    uStack_180 = *(ulong *)(param_4 + _DAT_113075ec8);
    uStack_190 = CONCAT71(uStack_190._1_7_,bStack_40) & 0xffffffffffffff01;
    func_0x0001043d6a70(&uStack_190);
    break;
  case 0xb:
    unaff_x20 = *(ulong *)(param_4 + _DAT_113075ed0);
    uStack_190 = unaff_x20;
    func_0x0001043d6a64(&uStack_190);
    uStack_58 = uStack_108;
    uStack_60 = uStack_110;
    uStack_48 = uStack_f8;
    uStack_50 = uStack_100;
    bStack_40 = bStack_f0;
  case 0x11:
    uStack_98 = uStack_148;
    uStack_a0 = uStack_150;
    uStack_88 = uStack_138;
    uStack_90 = uStack_140;
    uStack_78 = uStack_128;
    uStack_80 = uStack_130;
    uStack_68 = uStack_118;
    uStack_70 = uStack_120;
    uStack_d8 = uStack_188;
    uStack_e0 = uStack_190;
    uStack_c8 = uStack_178;
    uStack_d0 = uStack_180;
    uStack_b8 = uStack_168;
    uStack_c0 = uStack_170;
    uStack_a8 = uStack_158;
    uStack_b0 = uStack_160;
    _swift_bridgeObjectRetain(unaff_x20);
    goto code_r0x0001043d59e8;
  case 0xc:
    if ((char)((ulong *)(param_4 + _DAT_113075ed8))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1043d5a30);
      (*pcVar1)();
    }
    uStack_190 = *(ulong *)(param_4 + _DAT_113075ed8);
    func_0x0001043d6a58(&uStack_190);
    break;
  case 0xe:
code_r0x0001043d55e8:
    param_4 = unaff_x20;
code_r0x0001043d58dc:
    if ((char)((ulong *)(param_4 + _DAT_113075e90))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1043d5a38);
      (*pcVar1)();
    }
    uStack_f8 = *(ulong *)(param_4 + _DAT_113075e90);
    uStack_128 = uStack_1c8;
    uStack_130 = uStack_1d0;
    uStack_118 = uStack_1b8;
    uStack_120 = uStack_1c0;
    uStack_108 = uStack_1a8;
    uStack_110 = uStack_1b0;
    uStack_168 = uStack_208;
    uStack_170 = uStack_210;
    uStack_158 = uStack_1f8;
    uStack_160 = uStack_200;
    uStack_148 = uStack_1e8;
    uStack_150 = uStack_1f0;
    uStack_138 = uStack_1d8;
    uStack_140 = uStack_1e0;
    uStack_188 = uStack_228;
    uStack_190 = uStack_230;
    uStack_178 = uStack_218;
    uStack_180 = uStack_220;
    uStack_100 = uStack_1a0;
    func_0x0001043d6aac(&uStack_190);
    break;
  case 0xf:
code_r0x0001043d5434:
    uStack_228 = uStack_d8;
    uStack_230 = uStack_e0;
    uStack_218 = uStack_c8;
    uStack_220 = uStack_d0;
    uStack_1f0 = param_2;
    uStack_1e8 = in_register_00005008;
    uStack_1e0 = param_3;
    uStack_1d8 = in_register_00005028;
code_r0x0001043d5744:
    uStack_128 = uStack_1c8;
    uStack_130 = uStack_1d0;
    uStack_118 = uStack_1b8;
    uStack_120 = uStack_1c0;
    uStack_108 = uStack_1a8;
    uStack_110 = uStack_1b0;
    uVar2 = uStack_1a0;
code_r0x0001043d5758:
    uStack_168 = uStack_208;
    uStack_170 = uStack_210;
    uStack_158 = uStack_1f8;
    uStack_160 = uStack_200;
    uStack_148 = uStack_1e8;
    uStack_150 = uStack_1f0;
    uStack_138 = uStack_1d8;
    uStack_140 = uStack_1e0;
    uStack_188 = uStack_228;
    uStack_190 = uStack_230;
    uStack_178 = uStack_218;
    uStack_180 = uStack_220;
    uStack_100 = uVar2;
    func_0x0001043d6a7c(&uStack_190);
    break;
  case 0x10:
code_r0x0001043d54b0:
    func_0x0001043cd0dc(&uStack_e0);
    uStack_1c8 = uStack_78;
    uStack_1d0 = uStack_80;
    uStack_1b8 = uStack_68;
    uStack_1c0 = uStack_70;
    uStack_1a8 = uStack_58;
    uStack_1b0 = uStack_60;
    uStack_1a0 = uStack_50;
    uStack_208 = uStack_b8;
    uStack_210 = uStack_c0;
    uStack_1f8 = uStack_a8;
    uStack_200 = uStack_b0;
    uStack_1e8 = uStack_98;
    uStack_1f0 = uStack_a0;
    uStack_1d8 = uStack_88;
    uStack_1e0 = uStack_90;
    uStack_228 = uStack_d8;
    uStack_230 = uStack_e0;
    uStack_218 = uStack_c8;
    uStack_220 = uStack_d0;
    param_2 = uStack_80;
    in_register_00005008 = uStack_78;
    param_3 = uStack_70;
    in_register_00005028 = uStack_68;
    goto code_r0x0001043d57d0;
  case 0x13:
code_r0x0001043d56e0:
    uStack_1e8 = uStack_98;
    uStack_1f0 = uStack_a0;
    uStack_1d8 = uStack_88;
    uStack_1e0 = uStack_90;
    uStack_228 = uStack_d8;
    uStack_230 = uStack_e0;
    uStack_218 = uStack_c8;
    uStack_220 = uStack_d0;
    uStack_210 = param_2;
    uStack_208 = in_register_00005008;
    uStack_200 = param_3;
    uStack_1f8 = in_register_00005028;
code_r0x0001043d5980:
    uStack_128 = uStack_1c8;
    uStack_130 = uStack_1d0;
    uStack_118 = uStack_1b8;
    uStack_120 = uStack_1c0;
    uStack_108 = uStack_1a8;
    uStack_110 = uStack_1b0;
    uStack_100 = uStack_1a0;
    uStack_168 = uStack_208;
    uStack_170 = uStack_210;
    uStack_158 = uStack_1f8;
    uStack_160 = uStack_200;
    uStack_148 = uStack_1e8;
    uStack_150 = uStack_1f0;
    uStack_138 = uStack_1d8;
    uStack_140 = uStack_1e0;
    uStack_188 = uStack_228;
    uStack_190 = uStack_230;
    uStack_178 = uStack_218;
    uStack_180 = uStack_220;
    func_0x0001043d6a88(&uStack_190);
    break;
  case 0x14:
code_r0x0001043d5520:
    uStack_208 = uStack_b8;
    uStack_210 = uStack_c0;
    uStack_1f8 = uStack_a8;
    uStack_200 = uStack_b0;
    uStack_1e8 = uStack_98;
    uStack_1f0 = uStack_a0;
    uStack_1d8 = uStack_88;
    uStack_1e0 = uStack_90;
    uStack_228 = uStack_d8;
    uStack_230 = uStack_e0;
    uStack_218 = uStack_c8;
    uStack_220 = uStack_d0;
    uStack_1a0 = uVar2;
code_r0x0001043d5810:
    uStack_128 = uStack_1c8;
    uStack_130 = uStack_1d0;
    uStack_118 = uStack_1b8;
    uStack_120 = uStack_1c0;
    uStack_108 = uStack_1a8;
    uStack_110 = uStack_1b0;
    uStack_100 = uStack_1a0;
    uStack_168 = uStack_208;
    uStack_170 = uStack_210;
    uStack_158 = uStack_1f8;
    uStack_160 = uStack_200;
    uStack_148 = uStack_1e8;
    uStack_150 = uStack_1f0;
    uStack_138 = uStack_1d8;
    uStack_140 = uStack_1e0;
    uStack_188 = uStack_228;
    uStack_190 = uStack_230;
    uStack_178 = uStack_218;
    uStack_180 = uStack_220;
    func_0x0001043d6a94(&uStack_190);
    break;
  case 0x16:
code_r0x0001043d53bc:
    uStack_230 = param_2;
    uStack_228 = in_register_00005008;
    uStack_220 = param_3;
    uStack_218 = in_register_00005028;
code_r0x0001043d5700:
    uStack_128 = uStack_1c8;
    uStack_130 = uStack_1d0;
    uStack_118 = uStack_1b8;
    uStack_120 = uStack_1c0;
    uStack_108 = uStack_1a8;
    uStack_110 = uStack_1b0;
    uStack_100 = uStack_1a0;
    uStack_168 = uStack_208;
    uStack_170 = uStack_210;
    uStack_158 = uStack_1f8;
    uStack_160 = uStack_200;
    uStack_148 = uStack_1e8;
    uStack_150 = uStack_1f0;
    uStack_138 = uStack_1d8;
    uStack_140 = uStack_1e0;
    uStack_188 = uStack_228;
    uStack_190 = uStack_230;
    uStack_178 = uStack_218;
    uStack_180 = uStack_220;
    func_0x0001043d6ab8(&uStack_190);
    break;
  case 0x17:
    goto code_r0x0001043d5758;
  }
  uStack_58 = uStack_108;
  uStack_60 = uStack_110;
  uStack_48 = uStack_f8;
  uStack_50 = uStack_100;
  bStack_40 = bStack_f0;
  uStack_98 = uStack_148;
  uStack_a0 = uStack_150;
  uStack_88 = uStack_138;
  uStack_90 = uStack_140;
  uStack_78 = uStack_128;
  uStack_80 = uStack_130;
  uStack_68 = uStack_118;
  uStack_70 = uStack_120;
  uStack_d8 = uStack_188;
  uStack_e0 = uStack_190;
  uStack_c8 = uStack_178;
  uStack_d0 = uStack_180;
  uStack_b8 = uStack_168;
  uStack_c0 = uStack_170;
  uStack_a8 = uStack_158;
  uStack_b0 = uStack_160;
code_r0x0001043d59e8:
  param_1[0x11] = uStack_58;
  param_1[0x10] = uStack_60;
  param_1[0x13] = uStack_48;
  param_1[0x12] = uStack_50;
  *(byte *)(param_1 + 0x14) = bStack_40;
  param_1[9] = uStack_98;
  param_1[8] = uStack_a0;
  param_1[0xb] = uStack_88;
  param_1[10] = uStack_90;
  param_1[0xd] = uStack_78;
  param_1[0xc] = uStack_80;
  param_1[0xf] = uStack_68;
  param_1[0xe] = uStack_70;
  param_1[1] = uStack_d8;
  *param_1 = uStack_e0;
  param_1[3] = uStack_c8;
  param_1[2] = uStack_d0;
  param_1[5] = uStack_b8;
  param_1[4] = uStack_c0;
  param_1[7] = uStack_a8;
  param_1[6] = uStack_b0;
  return;
}


