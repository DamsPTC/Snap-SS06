/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052ed3bc; end: 1052ed3fb; -[SCCameraHardwareResourceImpl isLiveStreaming] */

bool FUN_1052ed3bc(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b6ff0;
  func_0x00010c2321c0();
  if (((ulong)puVar2 & 1) == 0) {
    bVar1 = *(long *)(param_1 + 0xd8) == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1052ed3fc; end: 1052ed40b; -[SCCameraHardwareResourceImpl trackingParameters] */

ulong FUN_1052ed3fc(long param_1)

{
  return (ulong)*(uint5 *)(param_1 + 0x3c);
}



/* Entry: 1052ed40c; end: 1052ed41b; -[SCCameraHardwareResourceImpl setTrackingParameters:] */

void FUN_1052ed40c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(int *)(param_1 + 0x3c) = (int)param_3;
  *(char *)(param_1 + 0x40) = (char)((ulong)param_3 >> 0x20);
  return;
}



/* Entry: 1052ed41c; end: 1052ed44b; -[SCCameraHardwareResourceImpl setArSession:] */

void FUN_1052ed41c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052ed44c; end: 1052ed47b; -[SCCameraHardwareResourceImpl setQueuePerformer:] */

void FUN_1052ed44c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052ed47c; end: 1052ed4ab; -[SCCameraHardwareResourceImpl setFrameProcessLatencyReporter:] */

void FUN_1052ed47c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052ed4ac; end: 1052ed4b3; -[SCCameraHardwareResourceImpl setAppInBackground:] */

void FUN_1052ed4ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x39) = param_3;
  return;
}



/* Entry: 1052ed4b4; end: 1052ed4e3; -[SCCameraHardwareResourceImpl setTokenSet:] */

void FUN_1052ed4b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052ed4e4; end: 1052ed4eb; -[SCCameraHardwareResourceImpl debugInfoDict] */

undefined8 FUN_1052ed4e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1052ed4ec; end: 1052ed4f3; -[SCCameraHardwareResourceImpl setDebugInfoDict:] */

void FUN_1052ed4ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1052ed4f4; end: 1052ed4fb; -[SCCameraHardwareResourceImpl frameHealthChecker] */

undefined8 FUN_1052ed4f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1052ed4fc; end: 1052ed52b; -[SCCameraHardwareResourceImpl setDeviceMotionManager:] */

void FUN_1052ed4fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052ed52c; end: 1052ed55b; -[SCCameraHardwareResourceImpl setSessionRuntimeErrorHandler:] */

void FUN_1052ed52c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1052ed55c; end: 1052ed563; -[SCCameraHardwareResourceImpl stateStabilityMonitor] */

undefined8 FUN_1052ed55c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 1052ed564; end: 1052ed593; -[SCCameraHardwareResourceImpl setStateStabilityMonitor:] */

void FUN_1052ed564(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052ed594; end: 1052ed59b; -[SCCameraHardwareResourceImpl viewStabilityMonitor] */

undefined8 FUN_1052ed594(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1052ed59c; end: 1052ed5cb; -[SCCameraHardwareResourceImpl setViewStabilityMonitor:] */

void FUN_1052ed59c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052ed5cc; end: 1052ed5d3; -[SCCameraHardwareResourceImpl validateTokenBeforeStartingCamera] */

undefined1 FUN_1052ed5cc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3b);
}



/* Entry: 1052ed5d4; end: 1052ed5db; -[SCCameraHardwareResourceImpl setValidateTokenBeforeStartingCamera:] */

void FUN_1052ed5d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x3b) = param_3;
  return;
}



/* Entry: 1052ed5dc; end: 1052ed5e3; -[SCCameraHardwareResourceImpl videoDataSourceStreamProvider] */

undefined8 FUN_1052ed5dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 1052ed5e4; end: 1052ed613; -[SCCameraHardwareResourceImpl setStillImageCapturerObservable:] */

void FUN_1052ed5e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052ed614; end: 1052ed643; -[SCCameraHardwareResourceImpl setVideoCapturerObservable:] */

void FUN_1052ed614(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052ed644; end: 1052ed77b; -[SCCameraHardwareResourceImpl .cxx_destruct] */

void FUN_1052ed644(long param_1)

{
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 1052ed77c; end: 1052ed803; -[SCFrameProcessLatencyReporterImpl didBeginRecording] */

void FUN_1052ed77c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  
  _CACurrentMediaTime();
  uVar2 = CONCAT17(in_register_00005007,
                   CONCAT16(in_register_00005006,
                            CONCAT15(in_register_00005005,
                                     CONCAT14(in_register_00005004,
                                              CONCAT13(in_register_00005003,
                                                       CONCAT12(in_register_00005002,
                                                                CONCAT11(in_register_00005001,in_b0)
                                                               ))))));
  _os_unfair_lock_lock(param_1 + 0xd0);
  if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0xa0) = 1;
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    *(undefined **)(param_1 + 0x98) = puVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0xd0);
  return;
}



/* Entry: 1052ed804; end: 1052edadb; -[SCFrameProcessLatencyReporterImpl didStopRecording] */

void FUN_1052ed804(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _CACurrentMediaTime();
  _os_unfair_lock_lock(param_2 + 0xd0);
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    param_1 = param_1 - *(double *)(param_2 + 0x18);
    *(double *)(param_2 + 0x68) = param_1;
    *(undefined1 *)(param_2 + 0xa0) = 0;
    func_0x00010bdd1f60(param_2);
    puVar1 = PTR_PTR_1126b6ff8;
    _objc_alloc_init(PTR_PTR_1126b6ff8);
    func_0x00010c1e8d80();
    func_0x00010c1e8da0(puVar1,param_3,(long)(*(double *)(param_2 + 0x68) * 1000000.0));
    func_0x00010c19f280(puVar1,param_3,*(undefined8 *)(param_2 + 0x20));
    func_0x00010c20be00(puVar1,param_3,*(undefined8 *)(param_2 + 0x38));
    func_0x00010c1c3240(puVar1,param_3,(long)(*(double *)(param_2 + 0x50) * 1000.0));
    func_0x00010c1c3200(puVar1,param_3,(long)(*(double *)(param_2 + 0x58) * 1000.0));
    func_0x00010c1c3220(puVar1,param_3,(long)(*(double *)(param_2 + 0x58) * 1000000.0));
    func_0x00010c1c31e0(puVar1,param_3,(long)(*(double *)(param_2 + 0x70) * 1000000.0));
    lVar5 = (long)(param_1 * 1000000.0);
    if (*(long *)(param_2 + 0x20) == 0) {
      lVar5 = -1;
    }
    func_0x00010c16dee0(puVar1,param_3,lVar5);
    func_0x00010c20bde0(puVar1,param_3,(long)(*(double *)(param_2 + 0x80) * 1000000.0));
    func_0x00010c1a1360(puVar1,param_3,(long)(*(double *)(param_2 + 0x88) * 1000000.0));
    lVar5 = param_2;
    func_0x00010be5b060(param_2,param_3,*(undefined8 *)(param_2 + 0xa8));
    func_0x00010c1c1040(puVar1,param_3,lVar5);
    lVar5 = *(long *)(param_2 + 0xa8);
    func_0x00010bf70d80(lVar5);
    func_0x00010c1b15e0(puVar1,param_3,lVar5 == 0);
    uVar2 = *(undefined8 *)(param_2 + 0xb0);
    func_0x00010bef0a60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar1,param_3,uVar2);
    _objc_release(uVar2);
    func_0x00010c1920c0(puVar1,param_3,*(undefined8 *)(param_2 + 0x28));
    func_0x00010c1a1380(puVar1,param_3,(long)*(double *)(param_2 + 0x90));
    func_0x00010c176680(puVar1,param_3,*(undefined8 *)(param_2 + 0x40));
    uVar2 = *(undefined8 *)(param_2 + 0xb0);
    func_0x00010bf2b540(uVar2);
    func_0x00010c177420(puVar1,param_3,uVar2);
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010c082de0(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_3,
                        *(undefined8 *)(param_2 + 0x98));
    if ((int)puVar3 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_3,
                          *(undefined8 *)(param_2 + 0x98),0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
      func_0x00010c1c31c0(puVar1,param_3,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    func_0x00010bdd1f40(param_2);
    func_0x00010c16dea0(puVar1);
    uVar2 = *(undefined8 *)(param_2 + 0xb8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b29e0();
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010bfc52e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be591e0(param_2,param_3,puVar3);
    _objc_release(puVar3);
    func_0x00010be54340(param_2);
    uVar2 = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(param_2 + 0xb0) = 0;
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_2 + 0xd0);
  return;
}



/* Entry: 1052edadc; end: 1052edb2f; -[SCFrameProcessLatencyReporterImpl didCancelRecording] */

void FUN_1052edadc(double param_1,long param_2)

{
  _CACurrentMediaTime();
  _os_unfair_lock_lock(param_2 + 0xd0);
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    *(double *)(param_2 + 0x68) = param_1 - *(double *)(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_2 + 0xd0);
  return;
}



/* Entry: 1052edb30; end: 1052edb6f; -[SCFrameProcessLatencyReporterImpl didDropFrameBuffer] */

void FUN_1052edb30(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0xd0);
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0xd0);
  return;
}



/* Entry: 1052edb70; end: 1052edbf7; -[SCFrameProcessLatencyReporterImpl didChangeCapturerState:] */

void FUN_1052edb70(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xd0);
  lVar1 = *(long *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    func_0x00010bf70d80();
    lVar2 = param_3;
    func_0x00010bf70d80();
    if (lVar1 != lVar2) {
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
    }
  }
  lVar1 = param_3;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  *(long *)(param_1 + 0xa8) = lVar1;
  _objc_release(uVar3);
  _os_unfair_lock_unlock(param_1 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052edbf8; end: 1052edc2b; -[SCFrameProcessLatencyReporterImpl didChangeUltraWideCameraActiveState:] */

void FUN_1052edbf8(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0xd0);
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0xd0);
  return;
}



/* Entry: 1052edc2c; end: 1052edc87; -[SCFrameProcessLatencyReporterImpl didUpdateVideoCaptureConfiguration:] */

void FUN_1052edc2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xd0);
  uVar1 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0xd0);
  return;
}



/* Entry: 1052edc88; end: 1052edcc7; -[SCFrameProcessLatencyReporterImpl _lowLightStatus:] */

undefined8 FUN_1052edc88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = param_1;
  func_0x00010be34260();
  uVar1 = 1;
  if ((int)lVar4 != 0) {
    uVar1 = 2;
  }
  iVar3 = (int)*(undefined8 *)(param_1 + 0xb0);
  func_0x00010c078b80();
  uVar2 = 3;
  if (iVar3 == 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 1052edcc8; end: 1052edd23; -[SCFrameProcessLatencyReporterImpl _hasNightModeConditions:] */

ulong FUN_1052edcc8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf70d80();
  if ((uVar1 == 0) || (uVar1 = param_3, func_0x00010bf093c0(), (uVar1 & 1) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c0b5980(param_3);
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1052edd24; end: 1052edf67; -[SCFrameProcessLatencyReporterImpl _logStickyVideoPerformanceMetricWithEventName:] */

void FUN_1052edd24(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  func_0x00010bf71e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd1f60(param_2);
  dVar4 = param_1;
  func_0x00010bdd1f40(param_2);
  dVar5 = dVar4;
  func_0x00010bdd1f80(param_2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,*(undefined8 *)(param_2 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110dd07b8);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,*(undefined8 *)(param_2 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110dd07d8);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(double *)(param_2 + 0x70) * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110dd0838);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110dd0858);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(double *)(param_2 + 0x58) * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110dd07f8);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar5,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110dd0818);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar4,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110dd0878);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_2 + 0xc0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9380();
  _objc_release(param_4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1052edf68; end: 1052ee033; -[SCFrameProcessLatencyReporterImpl _logGrapheneMetricForStickyVideo] */

void FUN_1052edf68(double param_1,long param_2)

{
  char *pcVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 **ppuVar5;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  uint uVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  long *unaff_x20;
  long *plVar19;
  undefined **unaff_x21;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 **appuStack_1a0 [2];
  char cStack_189;
  long alStack_188 [2];
  undefined1 *puStack_178;
  long *plStack_170;
  undefined1 **ppuStack_168;
  undefined8 **ppuStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_138;
  undefined1 **appuStack_130 [2];
  char cStack_119;
  long alStack_118 [2];
  undefined1 *puStack_108;
  long *plStack_100;
  undefined1 **ppuStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined1 **appuStack_c0 [2];
  char cStack_a9;
  long alStack_a8 [2];
  undefined1 *puStack_98;
  long *plStack_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  if (*(long *)(param_2 + 200) == 0) {
    puVar3 = PTR_PTR_1126b7000;
    _objc_alloc_init();
    uVar18 = *(undefined8 *)(param_2 + 200);
    *(undefined **)(param_2 + 200) = puVar3;
    _objc_release(uVar18);
  }
  lVar4 = *(long *)(param_2 + 0xb0);
  func_0x00010bef0a60();
  _objc_retainAutoreleasedReturnValue();
  bVar2 = lVar4 != 0;
  uVar16 = (uint)bVar2;
  _objc_release();
  uVar18 = *(undefined8 *)(param_2 + 200);
  func_0x00010bdd1f40(param_2);
  FUN_1052ee17c(uVar18,bVar2,(long)param_1);
  FUN_1052ee4c4(*(undefined8 *)(param_2 + 200),bVar2,(long)(*(double *)(param_2 + 0x70) * 1000.0));
  FUN_1052ee5dc(*(undefined8 *)(param_2 + 200),bVar2,*(undefined8 *)(param_2 + 0x38));
  FUN_1052ee3ac(*(undefined8 *)(param_2 + 200),bVar2,*(undefined8 *)(param_2 + 0x28));
  ppuVar17 = *(undefined ***)(param_2 + 0x28);
  ppuVar8 = &puStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = (undefined1 **)0x0;
  if (*(long *)(param_2 + 200) != 0) {
    unaff_x20 = *(long **)(*(long *)(param_2 + 200) + 8);
    pcVar1 = "true";
    if (!bVar2) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    puStack_70 = (undefined *)0x0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&puStack_70,appuStack_50,&lStack_38,1);
    uVar16 = 0x10876860;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_110876860,&puStack_70,ppuVar17);
    ppuVar5 = &puStack_58;
    puStack_58 = (undefined1 *)&puStack_70;
    func_0x00010007e5dc();
    ppuVar17 = ppuVar8;
    unaff_x21 = &puStack_70;
    if (cStack_39 < '\0') {
      ppuVar5 = appuStack_50[0];
      __ZdlPv();
      ppuVar17 = ppuVar8;
      unaff_x21 = &puStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  ppuVar6 = ppuVar5;
  __Unwind_Resume();
  ppuVar8 = &puStack_e0;
  pcStack_78 = FUN_1052ee3ac;
  alStack_a8[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = (undefined1 **)0x0;
  plVar19 = unaff_x20;
  puStack_98 = (undefined1 *)unaff_x21;
  plStack_90 = unaff_x20;
  ppuStack_88 = ppuVar5;
  puStack_80 = &stack0xfffffffffffffff0;
  if (ppuVar6 != (undefined1 **)0x0) {
    plVar19 = (long *)ppuVar6[1];
    pcVar1 = "true";
    if (uVar16 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_c0,pcVar1);
    puStack_e0 = (undefined *)0x0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    func_0x00010007e1e8(&puStack_e0,appuStack_c0,alStack_a8,1);
    uVar16 = 0x108768b0;
    (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_1108768b0,&puStack_e0,ppuVar17);
    ppuVar7 = &puStack_c8;
    puStack_c8 = (undefined1 *)&puStack_e0;
    func_0x00010007e5dc();
    ppuVar17 = ppuVar8;
    unaff_x21 = &puStack_e0;
    if (cStack_a9 < '\0') {
      ppuVar7 = appuStack_c0[0];
      __ZdlPv();
      ppuVar17 = ppuVar8;
      unaff_x21 = &puStack_e0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_a8[0]) {
    return;
  }
  ___stack_chk_fail();
  puStack_c8 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_c8);
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  ppuVar6 = ppuVar7;
  __Unwind_Resume();
  ppuVar8 = &puStack_150;
  pcStack_e8 = FUN_1052ee4c4;
  alStack_118[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = (undefined1 **)0x0;
  puStack_108 = (undefined1 *)unaff_x21;
  plStack_100 = plVar19;
  ppuStack_f8 = ppuVar7;
  ppuStack_f0 = &puStack_80;
  if (ppuVar6 != (undefined1 **)0x0) {
    plVar19 = (long *)ppuVar6[1];
    pcVar1 = "true";
    if (uVar16 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_130,pcVar1);
    puStack_150 = (undefined *)0x0;
    uStack_148 = 0;
    uStack_140 = 0;
    func_0x00010007e1e8(&puStack_150,appuStack_130,alStack_118,1);
    uVar16 = 0x10876900;
    (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_110876900,&puStack_150,ppuVar17);
    ppuVar5 = &puStack_138;
    puStack_138 = (undefined1 *)&puStack_150;
    func_0x00010007e5dc();
    ppuVar17 = ppuVar8;
    unaff_x21 = &puStack_150;
    if (cStack_119 < '\0') {
      ppuVar5 = appuStack_130[0];
      __ZdlPv();
      ppuVar17 = ppuVar8;
      unaff_x21 = &puStack_150;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_118[0]) {
    return;
  }
  ___stack_chk_fail();
  puStack_138 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_138);
  if (cStack_119 < '\0') {
    __ZdlPv(appuStack_130[0]);
  }
  ppuVar6 = ppuVar5;
  __Unwind_Resume();
  ppuVar8 = &puStack_1c0;
  pcStack_158 = FUN_1052ee5dc;
  alStack_188[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = (undefined1 **)0x0;
  puStack_178 = (undefined1 *)unaff_x21;
  plStack_170 = plVar19;
  ppuStack_168 = ppuVar5;
  ppuStack_160 = &ppuStack_f0;
  if (ppuVar6 != (undefined1 **)0x0) {
    plVar19 = (long *)ppuVar6[1];
    pcVar1 = "true";
    if (uVar16 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_1a0,pcVar1);
    puStack_1c0 = (undefined *)0x0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&puStack_1c0,appuStack_1a0,alStack_188,1);
    (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_110876950,&puStack_1c0,ppuVar17);
    ppuVar7 = &puStack_1a8;
    puStack_1a8 = (undefined1 *)&puStack_1c0;
    func_0x00010007e5dc();
    ppuVar17 = ppuVar8;
    unaff_x21 = &puStack_1c0;
    if (cStack_189 < '\0') {
      ppuVar7 = appuStack_1a0[0];
      __ZdlPv();
      ppuVar17 = ppuVar8;
      unaff_x21 = &puStack_1c0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_188[0]) {
    return;
  }
  ___stack_chk_fail();
  puStack_1a8 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_1a8);
  if (cStack_189 < '\0') {
    __ZdlPv(appuStack_1a0[0]);
  }
  __Unwind_Resume(ppuVar7);
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar17;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar17);
  if (ppuVar8 == (undefined **)0x0) {
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc();
    func_0x00010c00e2e0();
  }
  ppuVar17 = ppuVar8;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar17;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar17);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
  ppuVar10 = ppuVar9;
  _objc_opt_isKindOfClass(ppuVar9,puVar3);
  ppuVar17 = ppuVar9;
  if (((ulong)ppuVar10 & 1) == 0) {
    ppuVar17 = (undefined **)0x0;
  }
  _objc_retain(ppuVar17);
  _objc_release(ppuVar9);
  puVar3 = PTR_PTR_1126b7008;
  ppuVar9 = ppuVar8;
  if (ppuVar17 != (undefined **)0x0) {
    ppuVar9 = ppuVar17;
  }
  _objc_retain(ppuVar9);
  _objc_alloc_init(puVar3);
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf3ec40(ppuVar9);
  func_0x00010c0df780(puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar9;
  func_0x00010bf87dc0(ppuVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085ab110(puVar3,puVar12,ppuVar10,1);
  _objc_release(ppuVar10);
  _objc_release(puVar12);
  _objc_release(puVar11);
  ppuVar13 = ppuVar8;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar13;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar14;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = &PTR____CFConstantStringClassReference_110dd08b8;
  if (ppuVar15 != (undefined **)0x0) {
    ppuVar10 = ppuVar15;
  }
  _objc_retain(ppuVar10);
  _objc_release(ppuVar15);
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  puVar11 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar10);
  func_0x00010c0b2e20(puVar11);
  _objc_release(puVar12);
  _objc_release(puVar11);
  ppuVar5 = ppuVar7 + 1;
  _objc_loadWeakRetained(ppuVar5);
  ppuVar6 = ppuVar5;
  func_0x00010bf1c900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160320();
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  ppuVar7 = ppuVar7 + 1;
  _objc_loadWeakRetained(ppuVar7);
  ppuVar5 = ppuVar7;
  func_0x00010c252680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160340();
  _objc_release(ppuVar9);
  _objc_release(ppuVar5);
  _objc_release(ppuVar7);
  _objc_release(puVar3);
  _objc_release(ppuVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar8);
  return;
}



/* Entry: 1052ee034; end: 1052ee073; -[SCFrameProcessLatencyReporterImpl _avgFPS] */

double FUN_1052ee034(long param_1)

{
  double dVar1;
  double dVar2;
  
  if (*(ulong *)(param_1 + 0x20) == 0) {
    dVar1 = 0.0;
  }
  else {
    dVar1 = (*(double *)(param_1 + 0x68) / (double)*(ulong *)(param_1 + 0x20)) * 1000.0;
  }
  dVar2 = 1000.0 / dVar1;
  if (dVar1 <= 0.0) {
    dVar2 = -1.0;
  }
  return dVar2;
}



/* Entry: 1052ee074; end: 1052ee093; -[SCFrameProcessLatencyReporterImpl _avgFrameProcessingTimeSec] */

double FUN_1052ee074(long param_1)

{
  if (*(ulong *)(param_1 + 0x20) != 0) {
    return *(double *)(param_1 + 0x78) / (double)*(ulong *)(param_1 + 0x20);
  }
  return -1.0;
}



/* Entry: 1052ee094; end: 1052ee09b; -[SCFrameProcessLatencyReporterImpl _avgFrameTimestampGapMs] */

undefined8 FUN_1052ee094(void)

{
  return 0xbff0000000000000;
}



/* Entry: 1052ee09c; end: 1052ee107; -[SCFrameProcessLatencyReporterImpl .cxx_destruct] */

void FUN_1052ee09c(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052ee108; end: 1052ee17b; -[SCGrapheneFrameProcessLatencyMetric2 init] */

undefined1 * FUN_1052ee108(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e75c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1052ee17c; end: 1052ee293;  */

void FUN_1052ee17c(long param_1,int param_2,undefined **param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined1 **ppuVar14;
  long *plVar15;
  undefined **unaff_x21;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 *puStack_218;
  undefined1 **appuStack_210 [2];
  char cStack_1f9;
  long lStack_1f8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 **appuStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_138;
  undefined1 **appuStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined1 **appuStack_c0 [2];
  char cStack_a9;
  long lStack_a8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  ppuVar4 = &puStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    puStack_70 = (undefined *)0x0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&puStack_70,appuStack_50,&lStack_38,1);
    param_2 = 0x10876810;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110876810,&puStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&puStack_70;
    func_0x00010007e5dc();
    param_3 = ppuVar4;
    unaff_x21 = &puStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      param_3 = ppuVar4;
      unaff_x21 = &puStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  ppuVar4 = &puStack_e0;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined1 **)0x0;
  if (ppuVar2 != (undefined1 **)0x0) {
    plVar15 = (long *)ppuVar2[1];
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_c0,pcVar1);
    puStack_e0 = (undefined *)0x0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    func_0x00010007e1e8(&puStack_e0,appuStack_c0,&lStack_a8,1);
    param_2 = 0x10876860;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110876860,&puStack_e0,param_3);
    ppuVar3 = &puStack_c8;
    puStack_c8 = (undefined1 *)&puStack_e0;
    func_0x00010007e5dc();
    param_3 = ppuVar4;
    unaff_x21 = &puStack_e0;
    if (cStack_a9 < '\0') {
      ppuVar3 = appuStack_c0[0];
      __ZdlPv();
      param_3 = ppuVar4;
      unaff_x21 = &puStack_e0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  puStack_c8 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_c8);
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  __Unwind_Resume();
  ppuVar4 = &puStack_150;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (ppuVar3 != (undefined1 **)0x0) {
    plVar15 = (long *)ppuVar3[1];
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_130,pcVar1);
    puStack_150 = (undefined *)0x0;
    uStack_148 = 0;
    uStack_140 = 0;
    func_0x00010007e1e8(&puStack_150,appuStack_130,&lStack_118,1);
    param_2 = 0x108768b0;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1108768b0,&puStack_150,param_3);
    ppuVar2 = &puStack_138;
    puStack_138 = (undefined1 *)&puStack_150;
    func_0x00010007e5dc();
    param_3 = ppuVar4;
    unaff_x21 = &puStack_150;
    if (cStack_119 < '\0') {
      ppuVar2 = appuStack_130[0];
      __ZdlPv();
      param_3 = ppuVar4;
      unaff_x21 = &puStack_150;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  puStack_138 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_138);
  if (cStack_119 < '\0') {
    __ZdlPv(appuStack_130[0]);
  }
  __Unwind_Resume();
  ppuVar4 = &puStack_1c0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined1 **)0x0;
  if (ppuVar2 != (undefined1 **)0x0) {
    plVar15 = (long *)ppuVar2[1];
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_1a0,pcVar1);
    puStack_1c0 = (undefined *)0x0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&puStack_1c0,appuStack_1a0,&lStack_188,1);
    param_2 = 0x10876900;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110876900,&puStack_1c0,param_3);
    ppuVar3 = &puStack_1a8;
    puStack_1a8 = (undefined1 *)&puStack_1c0;
    func_0x00010007e5dc();
    param_3 = ppuVar4;
    unaff_x21 = &puStack_1c0;
    if (cStack_189 < '\0') {
      ppuVar3 = appuStack_1a0[0];
      __ZdlPv();
      param_3 = ppuVar4;
      unaff_x21 = &puStack_1c0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  puStack_1a8 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_1a8);
  if (cStack_189 < '\0') {
    __ZdlPv(appuStack_1a0[0]);
  }
  __Unwind_Resume();
  ppuVar4 = &puStack_230;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (ppuVar3 != (undefined1 **)0x0) {
    plVar15 = (long *)ppuVar3[1];
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_210,pcVar1);
    puStack_230 = (undefined *)0x0;
    uStack_228 = 0;
    uStack_220 = 0;
    func_0x00010007e1e8(&puStack_230,appuStack_210,&lStack_1f8,1);
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110876950,&puStack_230,param_3);
    ppuVar2 = &puStack_218;
    puStack_218 = (undefined1 *)&puStack_230;
    func_0x00010007e5dc();
    param_3 = ppuVar4;
    unaff_x21 = &puStack_230;
    if (cStack_1f9 < '\0') {
      ppuVar2 = appuStack_210[0];
      __ZdlPv();
      param_3 = ppuVar4;
      unaff_x21 = &puStack_230;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return;
  }
  ___stack_chk_fail();
  puStack_218 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_218);
  if (cStack_1f9 < '\0') {
    __ZdlPv(appuStack_210[0]);
  }
  __Unwind_Resume(ppuVar2);
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc();
    func_0x00010c00e2e0();
  }
  ppuVar5 = ppuVar4;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
  ppuVar8 = ppuVar6;
  _objc_opt_isKindOfClass(ppuVar6,puVar7);
  ppuVar5 = ppuVar6;
  if (((ulong)ppuVar8 & 1) == 0) {
    ppuVar5 = (undefined **)0x0;
  }
  _objc_retain(ppuVar5);
  _objc_release(ppuVar6);
  puVar7 = PTR_PTR_1126b7008;
  ppuVar6 = ppuVar4;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar6 = ppuVar5;
  }
  _objc_retain(ppuVar6);
  _objc_alloc_init(puVar7);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf3ec40(ppuVar6);
  func_0x00010c0df780(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar6;
  func_0x00010bf87dc0(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085ab110(puVar7,puVar10,ppuVar8,1);
  _objc_release(ppuVar8);
  _objc_release(puVar10);
  _objc_release(puVar9);
  ppuVar11 = ppuVar4;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar11;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar12;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_110dd08b8;
  if (ppuVar13 != (undefined **)0x0) {
    ppuVar8 = ppuVar13;
  }
  _objc_retain(ppuVar8);
  _objc_release(ppuVar13);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  puVar9 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  func_0x00010c0b2e20(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar9);
  ppuVar3 = ppuVar2 + 1;
  _objc_loadWeakRetained(ppuVar3);
  ppuVar14 = ppuVar3;
  func_0x00010bf1c900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160320();
  _objc_release(ppuVar14);
  _objc_release(ppuVar3);
  ppuVar2 = ppuVar2 + 1;
  _objc_loadWeakRetained(ppuVar2);
  ppuVar3 = ppuVar2;
  func_0x00010c252680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160340();
  _objc_release(ppuVar6);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(puVar7);
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 1052ee294; end: 1052ee3ab;  */

void FUN_1052ee294(long param_1,int param_2,undefined **param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined1 **ppuVar14;
  long *plVar15;
  undefined **unaff_x21;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 **appuStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_138;
  undefined1 **appuStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined1 **appuStack_c0 [2];
  char cStack_a9;
  long lStack_a8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  ppuVar4 = &puStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    puStack_70 = (undefined *)0x0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&puStack_70,appuStack_50,&lStack_38,1);
    param_2 = 0x10876860;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110876860,&puStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&puStack_70;
    func_0x00010007e5dc();
    param_3 = ppuVar4;
    unaff_x21 = &puStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      param_3 = ppuVar4;
      unaff_x21 = &puStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  ppuVar4 = &puStack_e0;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined1 **)0x0;
  if (ppuVar2 != (undefined1 **)0x0) {
    plVar15 = (long *)ppuVar2[1];
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_c0,pcVar1);
    puStack_e0 = (undefined *)0x0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    func_0x00010007e1e8(&puStack_e0,appuStack_c0,&lStack_a8,1);
    param_2 = 0x108768b0;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1108768b0,&puStack_e0,param_3);
    ppuVar3 = &puStack_c8;
    puStack_c8 = (undefined1 *)&puStack_e0;
    func_0x00010007e5dc();
    param_3 = ppuVar4;
    unaff_x21 = &puStack_e0;
    if (cStack_a9 < '\0') {
      ppuVar3 = appuStack_c0[0];
      __ZdlPv();
      param_3 = ppuVar4;
      unaff_x21 = &puStack_e0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  puStack_c8 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_c8);
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  __Unwind_Resume();
  ppuVar4 = &puStack_150;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (ppuVar3 != (undefined1 **)0x0) {
    plVar15 = (long *)ppuVar3[1];
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_130,pcVar1);
    puStack_150 = (undefined *)0x0;
    uStack_148 = 0;
    uStack_140 = 0;
    func_0x00010007e1e8(&puStack_150,appuStack_130,&lStack_118,1);
    param_2 = 0x10876900;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110876900,&puStack_150,param_3);
    ppuVar2 = &puStack_138;
    puStack_138 = (undefined1 *)&puStack_150;
    func_0x00010007e5dc();
    param_3 = ppuVar4;
    unaff_x21 = &puStack_150;
    if (cStack_119 < '\0') {
      ppuVar2 = appuStack_130[0];
      __ZdlPv();
      param_3 = ppuVar4;
      unaff_x21 = &puStack_150;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  puStack_138 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_138);
  if (cStack_119 < '\0') {
    __ZdlPv(appuStack_130[0]);
  }
  __Unwind_Resume();
  ppuVar4 = &puStack_1c0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined1 **)0x0;
  if (ppuVar2 != (undefined1 **)0x0) {
    plVar15 = (long *)ppuVar2[1];
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_1a0,pcVar1);
    puStack_1c0 = (undefined *)0x0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&puStack_1c0,appuStack_1a0,&lStack_188,1);
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110876950,&puStack_1c0,param_3);
    ppuVar3 = &puStack_1a8;
    puStack_1a8 = (undefined1 *)&puStack_1c0;
    func_0x00010007e5dc();
    param_3 = ppuVar4;
    unaff_x21 = &puStack_1c0;
    if (cStack_189 < '\0') {
      ppuVar3 = appuStack_1a0[0];
      __ZdlPv();
      param_3 = ppuVar4;
      unaff_x21 = &puStack_1c0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  puStack_1a8 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_1a8);
  if (cStack_189 < '\0') {
    __ZdlPv(appuStack_1a0[0]);
  }
  __Unwind_Resume(ppuVar3);
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc();
    func_0x00010c00e2e0();
  }
  ppuVar5 = ppuVar4;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
  ppuVar8 = ppuVar6;
  _objc_opt_isKindOfClass(ppuVar6,puVar7);
  ppuVar5 = ppuVar6;
  if (((ulong)ppuVar8 & 1) == 0) {
    ppuVar5 = (undefined **)0x0;
  }
  _objc_retain(ppuVar5);
  _objc_release(ppuVar6);
  puVar7 = PTR_PTR_1126b7008;
  ppuVar6 = ppuVar4;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar6 = ppuVar5;
  }
  _objc_retain(ppuVar6);
  _objc_alloc_init(puVar7);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf3ec40(ppuVar6);
  func_0x00010c0df780(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar6;
  func_0x00010bf87dc0(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085ab110(puVar7,puVar10,ppuVar8,1);
  _objc_release(ppuVar8);
  _objc_release(puVar10);
  _objc_release(puVar9);
  ppuVar11 = ppuVar4;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar11;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar12;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_110dd08b8;
  if (ppuVar13 != (undefined **)0x0) {
    ppuVar8 = ppuVar13;
  }
  _objc_retain(ppuVar8);
  _objc_release(ppuVar13);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  puVar9 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  func_0x00010c0b2e20(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar9);
  ppuVar2 = ppuVar3 + 1;
  _objc_loadWeakRetained(ppuVar2);
  ppuVar14 = ppuVar2;
  func_0x00010bf1c900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160320();
  _objc_release(ppuVar14);
  _objc_release(ppuVar2);
  ppuVar3 = ppuVar3 + 1;
  _objc_loadWeakRetained(ppuVar3);
  ppuVar2 = ppuVar3;
  func_0x00010c252680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160340();
  _objc_release(ppuVar6);
  _objc_release(ppuVar2);
  _objc_release(ppuVar3);
  _objc_release(puVar7);
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 1052ee3ac; end: 1052ee4c3;  */

void FUN_1052ee3ac(long param_1,int param_2,undefined **param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined1 **ppuVar14;
  long *plVar15;
  undefined **unaff_x21;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_138;
  undefined1 **appuStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined1 **appuStack_c0 [2];
  char cStack_a9;
  long lStack_a8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  ppuVar4 = &puStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    puStack_70 = (undefined *)0x0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&puStack_70,appuStack_50,&lStack_38,1);
    param_2 = 0x108768b0;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1108768b0,&puStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&puStack_70;
    func_0x00010007e5dc();
    param_3 = ppuVar4;
    unaff_x21 = &puStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      param_3 = ppuVar4;
      unaff_x21 = &puStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  ppuVar4 = &puStack_e0;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined1 **)0x0;
  if (ppuVar2 != (undefined1 **)0x0) {
    plVar15 = (long *)ppuVar2[1];
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_c0,pcVar1);
    puStack_e0 = (undefined *)0x0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    func_0x00010007e1e8(&puStack_e0,appuStack_c0,&lStack_a8,1);
    param_2 = 0x10876900;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110876900,&puStack_e0,param_3);
    ppuVar3 = &puStack_c8;
    puStack_c8 = (undefined1 *)&puStack_e0;
    func_0x00010007e5dc();
    param_3 = ppuVar4;
    unaff_x21 = &puStack_e0;
    if (cStack_a9 < '\0') {
      ppuVar3 = appuStack_c0[0];
      __ZdlPv();
      param_3 = ppuVar4;
      unaff_x21 = &puStack_e0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  puStack_c8 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_c8);
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  __Unwind_Resume();
  ppuVar4 = &puStack_150;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (ppuVar3 != (undefined1 **)0x0) {
    plVar15 = (long *)ppuVar3[1];
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_130,pcVar1);
    puStack_150 = (undefined *)0x0;
    uStack_148 = 0;
    uStack_140 = 0;
    func_0x00010007e1e8(&puStack_150,appuStack_130,&lStack_118,1);
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110876950,&puStack_150,param_3);
    ppuVar2 = &puStack_138;
    puStack_138 = (undefined1 *)&puStack_150;
    func_0x00010007e5dc();
    param_3 = ppuVar4;
    unaff_x21 = &puStack_150;
    if (cStack_119 < '\0') {
      ppuVar2 = appuStack_130[0];
      __ZdlPv();
      param_3 = ppuVar4;
      unaff_x21 = &puStack_150;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  puStack_138 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_138);
  if (cStack_119 < '\0') {
    __ZdlPv(appuStack_130[0]);
  }
  __Unwind_Resume(ppuVar2);
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc();
    func_0x00010c00e2e0();
  }
  ppuVar5 = ppuVar4;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
  ppuVar8 = ppuVar6;
  _objc_opt_isKindOfClass(ppuVar6,puVar7);
  ppuVar5 = ppuVar6;
  if (((ulong)ppuVar8 & 1) == 0) {
    ppuVar5 = (undefined **)0x0;
  }
  _objc_retain(ppuVar5);
  _objc_release(ppuVar6);
  puVar7 = PTR_PTR_1126b7008;
  ppuVar6 = ppuVar4;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar6 = ppuVar5;
  }
  _objc_retain(ppuVar6);
  _objc_alloc_init(puVar7);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf3ec40(ppuVar6);
  func_0x00010c0df780(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar6;
  func_0x00010bf87dc0(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085ab110(puVar7,puVar10,ppuVar8,1);
  _objc_release(ppuVar8);
  _objc_release(puVar10);
  _objc_release(puVar9);
  ppuVar11 = ppuVar4;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar11;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar12;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_110dd08b8;
  if (ppuVar13 != (undefined **)0x0) {
    ppuVar8 = ppuVar13;
  }
  _objc_retain(ppuVar8);
  _objc_release(ppuVar13);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  puVar9 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  func_0x00010c0b2e20(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar9);
  ppuVar3 = ppuVar2 + 1;
  _objc_loadWeakRetained(ppuVar3);
  ppuVar14 = ppuVar3;
  func_0x00010bf1c900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160320();
  _objc_release(ppuVar14);
  _objc_release(ppuVar3);
  ppuVar2 = ppuVar2 + 1;
  _objc_loadWeakRetained(ppuVar2);
  ppuVar3 = ppuVar2;
  func_0x00010c252680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160340();
  _objc_release(ppuVar6);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(puVar7);
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 1052ee4c4; end: 1052ee5db;  */

void FUN_1052ee4c4(long param_1,int param_2,undefined **param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined1 **ppuVar14;
  long *plVar15;
  undefined **unaff_x21;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined1 **appuStack_c0 [2];
  char cStack_a9;
  long lStack_a8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  ppuVar4 = &puStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    puStack_70 = (undefined *)0x0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&puStack_70,appuStack_50,&lStack_38,1);
    param_2 = 0x10876900;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110876900,&puStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&puStack_70;
    func_0x00010007e5dc();
    param_3 = ppuVar4;
    unaff_x21 = &puStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      param_3 = ppuVar4;
      unaff_x21 = &puStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  ppuVar4 = &puStack_e0;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined1 **)0x0;
  if (ppuVar2 != (undefined1 **)0x0) {
    plVar15 = (long *)ppuVar2[1];
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_c0,pcVar1);
    puStack_e0 = (undefined *)0x0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    func_0x00010007e1e8(&puStack_e0,appuStack_c0,&lStack_a8,1);
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110876950,&puStack_e0,param_3);
    ppuVar3 = &puStack_c8;
    puStack_c8 = (undefined1 *)&puStack_e0;
    func_0x00010007e5dc();
    param_3 = ppuVar4;
    unaff_x21 = &puStack_e0;
    if (cStack_a9 < '\0') {
      ppuVar3 = appuStack_c0[0];
      __ZdlPv();
      param_3 = ppuVar4;
      unaff_x21 = &puStack_e0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  puStack_c8 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_c8);
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  __Unwind_Resume(ppuVar3);
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc();
    func_0x00010c00e2e0();
  }
  ppuVar5 = ppuVar4;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
  ppuVar8 = ppuVar6;
  _objc_opt_isKindOfClass(ppuVar6,puVar7);
  ppuVar5 = ppuVar6;
  if (((ulong)ppuVar8 & 1) == 0) {
    ppuVar5 = (undefined **)0x0;
  }
  _objc_retain(ppuVar5);
  _objc_release(ppuVar6);
  puVar7 = PTR_PTR_1126b7008;
  ppuVar6 = ppuVar4;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar6 = ppuVar5;
  }
  _objc_retain(ppuVar6);
  _objc_alloc_init(puVar7);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf3ec40(ppuVar6);
  func_0x00010c0df780(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar6;
  func_0x00010bf87dc0(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085ab110(puVar7,puVar10,ppuVar8,1);
  _objc_release(ppuVar8);
  _objc_release(puVar10);
  _objc_release(puVar9);
  ppuVar11 = ppuVar4;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar11;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar12;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_110dd08b8;
  if (ppuVar13 != (undefined **)0x0) {
    ppuVar8 = ppuVar13;
  }
  _objc_retain(ppuVar8);
  _objc_release(ppuVar13);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  puVar9 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  func_0x00010c0b2e20(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar9);
  ppuVar2 = ppuVar3 + 1;
  _objc_loadWeakRetained(ppuVar2);
  ppuVar14 = ppuVar2;
  func_0x00010bf1c900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160320();
  _objc_release(ppuVar14);
  _objc_release(ppuVar2);
  ppuVar3 = ppuVar3 + 1;
  _objc_loadWeakRetained(ppuVar3);
  ppuVar2 = ppuVar3;
  func_0x00010c252680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160340();
  _objc_release(ppuVar6);
  _objc_release(ppuVar2);
  _objc_release(ppuVar3);
  _objc_release(puVar7);
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 1052ee5dc; end: 1052ee6f3;  */

void FUN_1052ee5dc(long param_1,int param_2,undefined **param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined1 **ppuVar13;
  undefined1 **ppuVar14;
  long *plVar15;
  undefined **unaff_x21;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  ppuVar3 = &puStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    puStack_70 = (undefined *)0x0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&puStack_70,appuStack_50,&lStack_38,1);
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110876950,&puStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&puStack_70;
    func_0x00010007e5dc();
    param_3 = ppuVar3;
    unaff_x21 = &puStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      param_3 = ppuVar3;
      unaff_x21 = &puStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume(ppuVar2);
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc();
    func_0x00010c00e2e0();
  }
  ppuVar4 = ppuVar3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
  ppuVar7 = ppuVar5;
  _objc_opt_isKindOfClass(ppuVar5,puVar6);
  ppuVar4 = ppuVar5;
  if (((ulong)ppuVar7 & 1) == 0) {
    ppuVar4 = (undefined **)0x0;
  }
  _objc_retain(ppuVar4);
  _objc_release(ppuVar5);
  puVar6 = PTR_PTR_1126b7008;
  ppuVar5 = ppuVar3;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar5 = ppuVar4;
  }
  _objc_retain(ppuVar5);
  _objc_alloc_init(puVar6);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf3ec40(ppuVar5);
  func_0x00010c0df780(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar5;
  func_0x00010bf87dc0(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085ab110(puVar6,puVar9,ppuVar7,1);
  _objc_release(ppuVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  ppuVar10 = ppuVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar10;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar11;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110dd08b8;
  if (ppuVar12 != (undefined **)0x0) {
    ppuVar7 = ppuVar12;
  }
  _objc_retain(ppuVar7);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  puVar8 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  func_0x00010c0b2e20(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar8);
  ppuVar13 = ppuVar2 + 1;
  _objc_loadWeakRetained(ppuVar13);
  ppuVar14 = ppuVar13;
  func_0x00010bf1c900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160320();
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  ppuVar2 = ppuVar2 + 1;
  _objc_loadWeakRetained(ppuVar2);
  ppuVar13 = ppuVar2;
  func_0x00010c252680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160340();
  _objc_release(ppuVar5);
  _objc_release(ppuVar13);
  _objc_release(ppuVar2);
  _objc_release(puVar6);
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
  return;
}



/* Entry: 1052ee6f4; end: 1052ee9eb; -[SCCaptureSessionRuntimeErrorHandler sessionRuntimeErrorReceived:] */

void FUN_1052ee6f4(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc();
    func_0x00010c00e2e0();
  }
  ppuVar2 = ppuVar1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
  ppuVar5 = ppuVar3;
  _objc_opt_isKindOfClass(ppuVar3,puVar4);
  ppuVar2 = ppuVar3;
  if (((ulong)ppuVar5 & 1) == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  _objc_retain(ppuVar2);
  _objc_release(ppuVar3);
  puVar4 = PTR_PTR_1126b7008;
  ppuVar3 = ppuVar1;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar3 = ppuVar2;
  }
  _objc_retain(ppuVar3);
  _objc_alloc_init(puVar4);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf3ec40(ppuVar3);
  func_0x00010c0df780(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  func_0x00010bf87dc0(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085ab110(puVar4,puVar7,ppuVar5,1);
  _objc_release(ppuVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  ppuVar8 = ppuVar1;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar9;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110dd08b8;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar5 = ppuVar10;
  }
  _objc_retain(ppuVar5);
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  puVar6 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  func_0x00010c0b2e20(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar6);
  lVar11 = param_1 + 8;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010bf1c900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160320();
  _objc_release(lVar12);
  _objc_release(lVar11);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar11 = param_1;
  func_0x00010c252680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160340();
  _objc_release(ppuVar3);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1052ee9ec; end: 1052ee9f3; -[SCCaptureSessionRuntimeErrorHandler .cxx_destruct] */

void FUN_1052ee9ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1052ee9f4; end: 1052eeabf; -[SCCaptureDeviceAuthorizationCheckerImpl isVideoCaptureAuthorized] */

byte FUN_1052ee9f4(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f8240(uVar2);
    bVar1 = *(byte *)(param_1 + 0x10);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 1052eeac0; end: 1052eeb17;  */

void FUN_1052eeac0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && ((*(byte *)(*(long *)(param_1 + 0x20) + 0x10) & 1) == 0)) {
    lVar2 = lVar1;
    func_0x00010bf11100(lVar1,param_2,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
    *(char *)(*(long *)(param_1 + 0x20) + 0x10) = (char)lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052eeb18; end: 1052eeb33; -[SCCaptureDeviceAuthorizationCheckerImpl isVideoCaptureDenied] */

bool FUN_1052eeb18(long param_1)

{
  func_0x00010bf11020();
  return param_1 == 2;
}



/* Entry: 1052eeb34; end: 1052eec67; -[SCCaptureDeviceAuthorizationCheckerImpl requestAccessForVideoCaptureWithCompletionHandler:blizzardLogger:] */

void FUN_1052eeb34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0831c0();
  puVar1 = PTR_PTR_1126b7018;
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = (undefined1)param_1;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c134780(puVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1052eec68; end: 1052eed37;  */

void FUN_1052eec68(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x38) == '\x01') {
      puVar2 = PTR_PTR_1126b6df0;
      _objc_alloc_init(PTR_PTR_1126b6df0);
      func_0x00010c1dab80();
      func_0x00010c160cc0(puVar2);
      func_0x00010c0b29e0(*(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar2);
    }
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4);
    _objc_release(puVar2);
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052eed38; end: 1052eed97; -[SCCaptureDeviceAuthorizationCheckerImpl .cxx_destruct] */

void FUN_1052eed38(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052eed98; end: 1052eed9b; -[SCCameraHardwareServicesAPIImpl applicationWillEnterForeground] */

void FUN_1052eed98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcd930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applicationWillEnterForeground_112550fe8);
  return;
}



/* Entry: 1052eed9c; end: 1052eee9f; -[SCCameraHardwareServicesAPIImpl applicationWillResignActive] */

void FUN_1052eed9c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c11dfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1052eeea0; end: 1052eeed3;  */

void FUN_1052eeea0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdcd940(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052eeed4; end: 1052eeed7; -[SCCameraHardwareServicesAPIImpl applicationDidEnterBackground] */

void FUN_1052eeed4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applicationDidEnterBackground_112550f98);
  return;
}



/* Entry: 1052eeed8; end: 1052eeedb; -[SCCameraHardwareServicesAPIImpl _isCameraActive] */

void FUN_1052eeed8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isCameraHardwareRequestHandlerAc_1125f9180);
  return;
}



/* Entry: 1052eeedc; end: 1052eef5f;  */

void FUN_1052eeedc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x30);
    puVar2 = PTR_PTR_1126b5a50;
    func_0x00010bf13c20();
    if (((ulong)puVar2 & uVar4) != 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0();
      _objc_release(uVar3);
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052eef60; end: 1052eef63;  */

void FUN_1052eef60(void)

{
  return;
}



/* Entry: 1052eef64; end: 1052eefc3; -[SCCameraHardwareServicesAPIImpl numberOfTokens] */

undefined8 FUN_1052eef64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c273200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0df500();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1052eefc4; end: 1052ef177; -[SCCameraHardwareServicesAPIImpl _stopRunningWithToken:completionHandler:] */

void FUN_1052eefc4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf093c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    func_0x00010bed0620(param_1,param_2,0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b00d0;
  func_0x00010c256f60(PTR_PTR_1126b00d0,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c25f160(uVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  if (param_4 != 0) {
    puVar4 = PTR_PTR_1126b7040;
    func_0x00010c22be80(PTR_PTR_1126b7040);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1052ef178;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_4);
    puVar5 = puVar4;
    lStack_48 = param_4;
    func_0x00010bf1d460(puVar4,param_2,
                        "-[SCCameraHardwareServicesAPIImpl _stopRunningWithToken:completionHandler:]"
                        ,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010bef7d60(puVar5,param_2,uVar2);
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa340();
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(lStack_48);
  }
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 1052ef178; end: 1052ef187;  */

void FUN_1052ef178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001052ef184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 1052ef188; end: 1052ef1d3; -[SCCameraHardwareServicesAPIImpl startStreaming] */

void FUN_1052ef188(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c250c00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052ef1d4; end: 1052ef2bb; -[SCCameraHardwareServicesAPIImpl activateAudioSessionIfNeeded] */

void FUN_1052ef1d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1052ef2bc; end: 1052ef2f7;  */

void FUN_1052ef2bc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0xa0) == 0)) {
    func_0x00010bdc4900(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052ef2f8; end: 1052ef493; -[SCCameraHardwareServicesAPIImpl _activateAudioSessionHelper] */

void FUN_1052ef2f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf46680(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf55480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0d3da0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar6 = uVar2;
  func_0x00010bf47660();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = uVar6;
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar3);
  return;
}



/* Entry: 1052ef494; end: 1052ef593;  */

void FUN_1052ef494(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126b6fe8;
  if ((param_2 == 0) && (param_1 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b7ec0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2a8ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209fc0();
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052ef594; end: 1052ef67b; -[SCCameraHardwareServicesAPIImpl relinquishAudioSessionIfNeeded] */

void FUN_1052ef594(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1052ef67c; end: 1052ef6b7;  */

void FUN_1052ef67c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0xa0) != 0)) {
    func_0x00010be8a640(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052ef6b8; end: 1052ef8b3; -[SCCameraHardwareServicesAPIImpl _relinquishAudioSessionHelper] */

void FUN_1052ef6b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0d3da0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c1288c0(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b6fe8;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7ec0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2a8ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209fc0();
  _objc_release(uVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar7);
  _objc_release(uVar3);
  uVar7 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1052ef8b4; end: 1052ef8cb;  */

void FUN_1052ef8b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1052ef8cc; end: 1052ef9e3; -[SCCameraHardwareServicesAPIImpl activeSession] */

void FUN_1052ef8cc(undefined *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined4 uStack_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar3 = param_1;
  func_0x00010bee8ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__kCMTimeInvalid_110348648;
  if (puVar3 == (undefined *)0x0) {
    uVar1 = *(uint *)(PTR__kCMTimeInvalid_110348648 + 0xc);
    uVar4 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
    if ((uVar1 & 1) == 0) {
      uStack_48 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
      uStack_50 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
      uStack_40 = uVar4;
    }
    else {
      uStack_80 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
      uStack_78 = *(undefined4 *)(PTR__kCMTimeInvalid_110348648 + 8);
      uStack_74 = uVar1;
      uStack_70 = uVar4;
      uStack_68 = uStack_80;
      uStack_60 = uStack_78;
      uStack_5c = uVar1;
      uStack_58 = uVar4;
      _CMTimeSubtract(&uStack_50,&uStack_68,&uStack_80);
    }
    puVar3 = PTR_PTR_1126b7070;
    _objc_alloc(PTR_PTR_1126b7070);
    uStack_80 = *(undefined8 *)puVar2;
    uStack_78 = *(undefined4 *)(puVar2 + 8);
    uStack_74 = uVar1;
    uStack_70 = uVar4;
    uStack_68 = uStack_80;
    uStack_60 = uStack_78;
    uStack_5c = uVar1;
    uStack_58 = uVar4;
    func_0x00010c04bb40();
  }
  else {
    func_0x00010bee8ae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010bef0fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1052ef9e4; end: 1052efad7; -[SCCameraHardwareServicesAPIImpl canRunARSession] */

undefined * FUN_1052ef9e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0982a0();
  puVar8 = PTR__OBJC_CLASS___ARConfiguration_1126b7048;
  if ((int)uVar3 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf70d80();
    uVar6 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c278fc0();
    func_0x00010c14de40(puVar8,param_2,uVar5,uVar7 & 0xffffffffff);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return puVar8;
}



/* Entry: 1052efad8; end: 1052efadf; -[SCCameraHardwareServicesAPIImpl turnARSessionOn] */

void FUN_1052efad8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__turnARSessionOnWithManagedSessi_112591b38,1)
  ;
  return;
}



/* Entry: 1052efae0; end: 1052efae7; -[SCCameraHardwareServicesAPIImpl turnARSessionOff] */

void FUN_1052efae0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed0630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__turnARSessionOffWithManagedSess_112591b30,1)
  ;
  return;
}



/* Entry: 1052efae8; end: 1052efb13; -[SCCameraHardwareServicesAPIImpl restartARSession] */

void FUN_1052efae8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bed0620(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bed0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__turnARSessionOnWithManagedSessi_112591b38,0)
  ;
  return;
}



/* Entry: 1052efb14; end: 1052efbdb; -[SCCameraHardwareServicesAPIImpl clearARKitData] */

void FUN_1052efb14(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010010fab4(lVar2,PTR_DAT_1126a4f60);
  _objc_release(lVar2);
  if ((int)lVar1 == 0 || lVar2 == 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010bf3b0e0(uVar4);
  func_0x00010bf3b660(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1052efbdc; end: 1052efc27; -[SCCameraHardwareServicesAPIImpl firstWrittenAudioBufferDelay] */

void FUN_1052efbdc(undefined8 *param_1,long param_2)

{
  func_0x00010bee8ae0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x00010bfb2060(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1052efc28; end: 1052efc63; -[SCCameraHardwareServicesAPIImpl audioQueueStarted] */

undefined8 FUN_1052efc28(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf0f980();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052efc64; end: 1052efc9f; -[SCCameraHardwareServicesAPIImpl audioSamplesReceived] */

undefined8 FUN_1052efc64(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf0fa80();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052efca0; end: 1052efd5f; -[SCCameraHardwareServicesAPIImpl _currentStabilizationState] */

void FUN_1052efca0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b7050;
  _objc_alloc(PTR_PTR_1126b7050);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29b480();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfbb220();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c121e40();
  func_0x00010c0072e0(puVar1,param_2,uVar3,uVar5,uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1052efd60; end: 1052efd6f;  */

void FUN_1052efd60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c178ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3e4ccccd,*(undefined8 *)(param_1 + 0x20),PTR_s_setCaptureDeadline__11263bdd0);
  return;
}



/* Entry: 1052efd70; end: 1052f01c3; -[SCCameraHardwareServicesAPIImpl recreateCaptureSessionWithMainDevicePosition:secondaryDeviceOption:] */

void FUN_1052efd70(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0xb8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010010fab4();
  lVar1 = lVar2;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
  if (lVar1 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != -1) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4);
      _objc_release(puVar5);
    }
    func_0x0001090468e4(puVar4,param_4,lVar2);
    _objc_retain(puVar4);
    puVar5 = puVar4;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (puVar5 != (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(puVar4);
        }
        func_0x00010c067fc0(*(undefined8 *)((long)puVar13 * 8));
        uVar6 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c0b7ea0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c160440();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf79960();
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        puVar13 = puVar13 + 1;
      } while (puVar5 != puVar13);
      puVar5 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
    lVar3 = lVar2;
    func_0x00010c160120(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1384c0();
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c160120(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1384c0();
    _objc_release(lVar3);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0db140(PTR_PTR_1126afed0);
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076b60();
    func_0x00010bf57380(uVar7);
    _objc_release(uVar8);
    _objc_release(uVar7);
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0749e0();
    _objc_release(uVar7);
    _objc_release(uVar9);
    if ((int)uVar8 != 0) {
      func_0x00010bedb380(param_1);
    }
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    puVar5 = puVar4;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (puVar5 != (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(puVar4);
        }
        func_0x00010c067fc0(*(undefined8 *)((long)puVar14 * 8));
        lVar10 = lVar2;
        func_0x00010c160120();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar10;
        func_0x00010bfc75a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar10);
        if (lVar11 != 0) {
          func_0x00010befa120(puVar13);
        }
        _objc_release(lVar11);
        puVar14 = puVar14 + 1;
      } while (puVar5 != puVar14);
      puVar5 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7540();
    _objc_release(uVar7);
    _objc_release(puVar13);
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c18cd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1052f01c4; end: 1052f01cb; -[SCCameraHardwareServicesAPIImpl setDevicePositionAsynchronouslyWithMainDevicePosition:secondaryDevicePositions:completionHandler:context:] */

void FUN_1052f01c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18cd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setDevicePositionAsynchronouslyW_112640d68);
  return;
}



/* Entry: 1052f01cc; end: 1052f03f3; -[SCCameraHardwareServicesAPIImpl setDevicePositionAsynchronouslyWithMainDevicePosition:secondaryDevicePositions:completionHandler:context:viewfinderTransition:] */

void FUN_1052f01cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long in_x4;
  undefined8 in_x5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b00d0;
  func_0x00010beefa60(PTR_PTR_1126b00d0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25f160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar1);
  if (in_x4 != 0) {
    puVar3 = PTR_PTR_1126b7040;
    func_0x00010c22be80(PTR_PTR_1126b7040);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf1d460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010bef7d60(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa340();
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(in_x5);
  _objc_release(in_x4);
  return;
}



/* Entry: 1052f03f4; end: 1052f041f;  */

void FUN_1052f03f4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c27d2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052f0420; end: 1052f044f; -[SCCameraHardwareServicesAPIImpl setCaptureBitrateLadderConfig:] */

void FUN_1052f0420(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052f0450; end: 1052f04cf; -[SCCameraHardwareServicesAPIImpl setAudioProcessingEnabled:] */

void FUN_1052f0450(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bee8ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0f820();
  _objc_release(uVar1);
  if (param_3 != (int)uVar2) {
    func_0x00010bee8ae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16c0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1052f04d0; end: 1052f060f; -[SCCameraHardwareServicesAPIImpl addTimedTask:task:context:] */

void FUN_1052f04d0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_48);
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_50 = param_3[2];
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1052f0610; end: 1052f06ab;  */

void FUN_1052f0610(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126b7058;
    _objc_alloc(PTR_PTR_1126b7058);
    func_0x00010c050c60();
    lVar2 = param_1;
    func_0x00010bee8ae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbf80();
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 1052f06ac; end: 1052f07a7; -[SCCameraHardwareServicesAPIImpl clearTimedTasksWithContext:] */

void FUN_1052f06ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1052f07a8; end: 1052f07f3;  */

void FUN_1052f07a8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bee8ae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3c3c0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052f07f4; end: 1052f083b; -[SCCameraHardwareServicesAPIImpl reloadOutputURLAssetKeys] */

void FUN_1052f07f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bee8ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0ef100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128960();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052f083c; end: 1052f08b7; -[SCCameraHardwareServicesAPIImpl removeVideoCapturerObserver] */

void FUN_1052f083c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee8ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560(uVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052f08b8; end: 1052f08bf; -[SCCameraHardwareServicesAPIImpl setIsHEVCEncoderEnabled:] */

void FUN_1052f08b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 1052f08c0; end: 1052f08c7; -[SCCameraHardwareServicesAPIImpl setH264BitrateMultiplier:] */

void FUN_1052f08c0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x90) = param_1;
  return;
}



/* Entry: 1052f08c8; end: 1052f0b53; -[SCCameraHardwareServicesAPIImpl recreateImageCapturer] */

void FUN_1052f08c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126b7060;
  _objc_alloc(PTR_PTR_1126b7060);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0xb8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x78);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c15fac0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc900(puVar1,param_2,uVar2,uVar8,uVar3,uVar5,uVar9,uVar4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20be60();
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010be36e80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980(uVar6,param_2,lVar7);
  _objc_release(lVar7);
  _objc_release(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010be36e80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa260(uVar6,param_2,lVar7,2);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  lVar7 = param_1;
  func_0x00010be36e80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf318a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf51e00();
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f8a0(lVar7,param_2,uVar6,uVar4,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 1052f0b54; end: 1052f0b63; -[SCCameraHardwareServicesAPIImpl setLensesActive:completionHandler:context:] */

void FUN_1052f0b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea5470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setLensesActive_source_completi_112586ec0,param_3,1,param_4,param_5);
  return;
}



/* Entry: 1052f0b64; end: 1052f0b73; -[SCCameraHardwareServicesAPIImpl setLensesAsCameraModeActive:completionHandler:context:] */

void FUN_1052f0b64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea5470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setLensesActive_source_completi_112586ec0,param_3,2,param_4,param_5);
  return;
}



/* Entry: 1052f0b74; end: 1052f0b83; -[SCCameraHardwareServicesAPIImpl setLensesInTalkActive:useVideoCallSource:completionHandler:context:] */

void FUN_1052f0b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = 4;
  if (param_4 == 0) {
    uVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea5470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setLensesActive_source_completi_112586ec0,param_3,uVar1);
  return;
}


