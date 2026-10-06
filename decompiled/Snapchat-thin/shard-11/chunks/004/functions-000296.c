/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085a7910; end: 1085a7a03;  */

void FUN_1085a7910(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126da2a0;
  func_0x00010bf959c0(param_1,*(undefined8 *)(param_2 + 0x38),PTR_PTR_1126da2a0,param_3,param_3,
                      param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_2 + 0x20) + 8));
  puVar2 = PTR_PTR_1126da2a0;
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010be3e280(*(undefined8 *)(param_2 + 0x20));
  func_0x00010c24fc60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_2 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar2;
  _objc_release(uVar4);
  *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x28) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x30) = param_3;
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_2 + 0x20) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085a7a04; end: 1085a7a07;  */

void FUN_1085a7a04(void)

{
  return;
}



/* Entry: 1085a7a08; end: 1085a7c1f; -[SCCurrentPageTrackerImplementation startTransitionFromPage:toPage:] */

void FUN_1085a7a08(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (param_3 != param_4) {
    puVar1 = PTR_PTR_1126afdd8;
    func_0x00010bfc8740();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126afdd8;
    func_0x00010bfc8740();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_1085a78f4;
    uStack_80 = 0x1085a7904;
    uStack_78 = 0;
    func_0x00010bf5fd80(*(undefined8 *)(param_1 + 0x18));
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf5e5e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010be1ef80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(puVar1);
    _objc_retain(puVar2);
    _objc_retain(lVar4);
    _objc_retain(uVar3);
    func_0x00010c0c02c0(uVar6);
    lVar5 = puStack_98[5];
    if (lVar5 != 0) {
      _objc_retain(lVar5);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      *(long *)(param_1 + 0x20) = lVar5;
      _objc_release(uVar6);
    }
    _objc_release(uVar3);
    _objc_release(lVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(lVar4);
    _objc_release(uVar3);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 1085a7c20; end: 1085a7d83;  */

void FUN_1085a7c20(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = uRam000000011372c458;
  uVar5 = param_1;
  _objc_retain(param_5);
  func_0x00010beed820(uVar1);
  func_0x00010c138160(uRam000000011372c458);
  puVar2 = PTR_PTR_1126da2a0;
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18);
  func_0x00010bf5e5e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94fa0(param_1,uVar6,uVar5,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_2 + 0x38) + 8));
  puVar3 = PTR_PTR_1126da2a0;
  func_0x00010c2514e0(*(undefined8 *)(param_2 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_2 + 0x48) + 8);
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar3;
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_2 + 0x38) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1085a7d84; end: 1085a7d8f;  */

void FUN_1085a7d84(void)

{
  return;
}



/* Entry: 1085a7d90; end: 1085a7d97; -[SCCurrentPageTrackerImplementation currentPage] */

undefined8 FUN_1085a7d90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1085a7d98; end: 1085a7d9f; -[SCCurrentPageTrackerImplementation getUnsafeCurrentPageName] */

undefined8 FUN_1085a7d98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1085a7da0; end: 1085a7da7; -[SCCurrentPageTrackerImplementation getUnsafePreviousPageName] */

undefined8 FUN_1085a7da0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1085a7da8; end: 1085a7de7; -[SCCurrentPageTrackerImplementation applicationWillResignActive] */

void FUN_1085a7da8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c24fc80(param_1,param_2,0x11);
  uVar1 = uRam000000011372c458;
  func_0x00010c07cd60();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uRam000000011372c458,PTR_s_reset_11262ba18);
    return;
  }
  return;
}



/* Entry: 1085a7de8; end: 1085a7e3b; -[SCCurrentPageTrackerImplementation applicationDidBecomeActive] */

void FUN_1085a7de8(long param_1)

{
  ulong uVar1;
  
  uVar1 = uRam000000011372c458;
  func_0x00010c07cd60();
  if ((uVar1 & 1) == 0) {
    func_0x00010c138160(uRam000000011372c458);
  }
  if (*(long *)(param_1 + 0x28) == 0x11) {
                    /* WARNING: Could not recover jumptable at 0x00010c24fc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_startPageWithoutTriggeringLegacy_112671948,
               *(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



/* Entry: 1085a7e3c; end: 1085a7e73; -[SCCurrentPageTrackerImplementation applicationDidEnterBackground] */

void FUN_1085a7e3c(void)

{
  undefined8 uVar1;
  
  uVar1 = uRam000000011372c458;
  func_0x00010c07cd60();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uRam000000011372c458,PTR_s_reset_11262ba18);
    return;
  }
  return;
}



/* Entry: 1085a7e74; end: 1085a7ec7; -[SCCurrentPageTrackerImplementation .cxx_destruct] */

void FUN_1085a7e74(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085a7ec8; end: 1085a7ecf;  */

undefined8 FUN_1085a7ec8(void)

{
  return 0;
}



/* Entry: 1085a7ed0; end: 1085a7f73; -[SCUserTraceLogger logUserTraceScrollingEventWithStartingY:endingY:pageName:] */

void FUN_1085a7ed0(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_5);
  if ((param_1 < param_2) || (param_2 < param_1)) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_4,
                        &PTR____CFConstantStringClassReference_110e3c1f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e20(param_3,param_4,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1085a7f74; end: 1085a7f7b; -[SCUserTraceLogger _didEnterBackground:] */

void FUN_1085a7f74(long param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 1085a7f7c; end: 1085a7fb7; -[SCUserTraceLogger .cxx_destruct] */

void FUN_1085a7f7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085a7fb8; end: 1085a8013; -[SCBlackCameraNoOutputDetectorImpl dealloc] */

void FUN_1085a7fb8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  func_0x00010c256420(param_1);
  puStack_28 = PTR_PTR_1126fcea8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1085a8014; end: 1085a803f; -[SCBlackCameraNoOutputDetectorImpl stopObservingManagedVideoDataSourceOutputEvent] */

void FUN_1085a8014(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085a8040; end: 1085a8107; -[SCBlackCameraNoOutputDetectorImpl _cancelCheck] */

void FUN_1085a8040(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c11dfc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1085a8108; end: 1085a818f;  */

void FUN_1085a8108(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x28) = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      _dispatch_block_cancel();
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085a8190; end: 1085a81eb; -[SCBlackCameraNoOutputDetectorImpl _checkState] */

void FUN_1085a8190(long param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6fb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085a81ec; end: 1085a81ef; -[SCBlackCameraNoOutputDetectorImpl sessionRuntimeError] */

void FUN_1085a81ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdda630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelCheck_112554328);
  return;
}



/* Entry: 1085a81f0; end: 1085a8273;  */

void FUN_1085a81f0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea16e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085a8274; end: 1085a829f; -[SCBlackCameraNoOutputDetectorImpl stopObservingCapturerStateUpdate] */

void FUN_1085a8274(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085a82a0; end: 1085a82a3; -[SCBlackCameraNoOutputDetectorImpl _sessionDidStartRunning] */

void FUN_1085a82a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9ae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scheduleCheckIfNotInBackground_112584538);
  return;
}



/* Entry: 1085a82a4; end: 1085a82a7; -[SCBlackCameraNoOutputDetectorImpl _sessionDidStopRunning] */

void FUN_1085a82a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdda630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelCheck_112554328);
  return;
}



/* Entry: 1085a82a8; end: 1085a82ab; -[SCBlackCameraNoOutputDetectorImpl _capturerDidStopRunning] */

void FUN_1085a82a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdda630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelCheck_112554328);
  return;
}



/* Entry: 1085a82ac; end: 1085a82c3; -[SCBlackCameraNoOutputDetectorImpl delegate] */

void FUN_1085a82ac(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085a82c4; end: 1085a82f3; -[SCBlackCameraNoOutputDetectorImpl setQueuePerformer:] */

void FUN_1085a82c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085a82f4; end: 1085a82fb; -[SCBlackCameraNoOutputDetectorImpl sampleBufferReceived] */

undefined1 FUN_1085a82f4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 1085a82fc; end: 1085a8303; -[SCBlackCameraNoOutputDetectorImpl setSampleBufferReceived:] */

void FUN_1085a82fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 1085a8304; end: 1085a8353; -[SCBlackCameraNoOutputDetectorImpl .cxx_destruct] */

void FUN_1085a8304(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1085a8354; end: 1085a83d3; -[SCManagedFrameHealthCheckerImpl checkImageSnapHealthForCapturedImage:withCaptureSessionId:metadata:] */

void FUN_1085a8354(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010bddd9c0(param_1,param_2,param_3,param_4,0,param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085a83d4; end: 1085a8453; -[SCManagedFrameHealthCheckerImpl checkImageSnapHealthForProcessedImage:withCaptureSessionId:metadata:] */

void FUN_1085a83d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010bddd9c0(param_1,param_2,param_3,param_4,1,param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085a8454; end: 1085a84d3; -[SCManagedFrameHealthCheckerImpl checkVideoSnapHealthForFirstFrameImage:withCaptureSessionId:metedata:] */

void FUN_1085a8454(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010bddd9c0(param_1,param_2,param_3,param_4,3,param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085a84d4; end: 1085a8553; -[SCManagedFrameHealthCheckerImpl checkVideoSnapHealthForOverlayImage:withCaptureSessionId:metedata:] */

void FUN_1085a84d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010bddd9c0(param_1,param_2,param_3,param_4,4,param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085a8554; end: 1085a85d3; -[SCManagedFrameHealthCheckerImpl checkVideoSnapHealthForPostTranscodingThumbnailImage:withCaptureSessionId:metedata:] */

void FUN_1085a8554(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010bddd9c0(param_1,param_2,param_3,param_4,5,param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085a85d4; end: 1085a8823; -[SCManagedFrameHealthCheckerImpl _checkHealthForImage:withCaptureSessionId:sourceType:metadata:] */

void FUN_1085a85d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  ppuVar1 = &puStack_b0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1085a8824;
  puStack_98 = &UNK_110871ae8;
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  uStack_90 = param_3;
  uStack_70 = param_5;
  _objc_retain(param_4);
  uStack_88 = param_4;
  _objc_retain(param_6);
  uStack_80 = param_6;
  _objc_retainBlock(&puStack_b0);
  lVar2 = *(long *)(param_1 + 0x10);
  _dispatch_semaphore_wait(lVar2,0);
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126b6ae8;
    func_0x00010c22ba80(PTR_PTR_1126b6ae8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c82e8;
    puVar6 = PTR_PTR_1126ae960;
    puVar4 = PTR_PTR_1126da2b0;
    func_0x00010bfb6c80(PTR_PTR_1126da2b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd3800(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf28e80(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126ae970;
    func_0x00010c0b5920(PTR_PTR_1126ae970);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11de00(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a14e0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085a8824; end: 1085a8947;  */

void FUN_1085a8824(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010be063a0(uVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      func_0x00010be52d40(uVar1,param_2,3,*(undefined8 *)(param_1 + 0x28),
                          *(undefined8 *)(param_1 + 0x40),
                          &PTR__OBJC_CLASS___NSConstantDictionary_111174f18);
    }
    else {
      uVar3 = uVar1;
      func_0x00010be1f3c0(uVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x40));
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf1f3c0();
      _objc_release(uVar4);
      if ((uVar5 & 1) == 0) {
        uVar4 = uVar3;
        func_0x00010c0e00e0(uVar3,param_2,&PTR____CFConstantStringClassReference_110ee4db8);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf1f3c0();
        _objc_release(uVar4);
        uVar5 = uVar5 & 0xffffffff;
      }
      else {
        uVar5 = 2;
      }
      func_0x00010be52d40(uVar1,param_2,uVar5,*(undefined8 *)(param_1 + 0x28),
                          *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30));
      _objc_release(uVar3);
    }
    _dispatch_semaphore_signal(*(undefined8 *)(uVar1 + 0x10));
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085a8948; end: 1085a899f; -[SCManagedFrameHealthCheckerImpl _downscaledImageWithInputImage:] */

void FUN_1085a8948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  func_0x00010c23d0a0(param_5);
  func_0x00010b690b78(300);
  uVar1 = param_5;
  func_0x00010c14e6c0(param_1,param_2,0x3ff0000000000000,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085a89a0; end: 1085a8c6b; -[SCManagedFrameHealthCheckerImpl _getFrameHealthInfoForImage:withSourceType:] */

void FUN_1085a89a0(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  func_0x00010bf71e20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  _objc_release(param_3);
  uVar9 = uVar4;
  _CGImageGetWidth();
  uVar8 = uVar4;
  _CGImageGetHeight();
  uVar5 = uVar4;
  _CGImageGetDataProvider();
  _CGDataProviderCopyData();
  if (uVar5 == 0) goto LAB_1085a8c48;
  uVar6 = uVar5;
  _CFDataGetBytePtr();
  uVar8 = uVar8 * uVar9;
  if ((long)uVar8 < 0x901) {
    if (uVar8 != 0) {
      uVar9 = 4;
      goto LAB_1085a8a70;
    }
  }
  else {
    uVar9 = uVar8 / 0x240 & 0x7ffffffffffffc;
    uVar8 = 0x900;
LAB_1085a8a70:
    _CGImageGetBitmapInfo();
    fVar14 = 3.4028235e+38;
    fVar13 = fVar14;
    fVar12 = fVar14;
    fVar10 = fVar14;
    if (((uVar4 & 6) != 0) && (fVar12 = 3.4028235e+38, ((uint)uVar4 >> 0xd & 1) != 0)) {
      fVar12 = 3.4028235e+38;
      FUN_1085a8f00(uVar6,uVar9,uVar8);
      fVar13 = fVar12;
      FUN_1085a8f00(uVar6 + 1,uVar9,uVar8);
      fVar14 = fVar13;
      FUN_1085a8f00(uVar6 + 2,uVar9,uVar8);
      fVar10 = fVar14;
      FUN_1085a8f00(uVar6 + 3,uVar9,uVar8);
    }
    fVar11 = (float)uVar8;
    fVar14 = fVar14 / fVar11;
    fVar13 = fVar13 / fVar11;
    fVar12 = fVar12 / fVar11;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(fVar14,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(fVar13,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(fVar12,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(fVar10 / fVar11,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar7);
    bVar1 = false;
    if ((fVar14 < 20.0 && (240.0 < fVar10 / fVar11 || param_4 != 4)) &&
       (bVar1 = false, !NAN(fVar13))) {
      bVar1 = fVar13 < 20.0;
    }
    bVar2 = false;
    if ((bVar1) && (bVar2 = false, !NAN(fVar12))) {
      bVar2 = fVar12 < 20.0;
    }
    if ((((bVar2) && (func_0x00010c1d0640(puVar3), fVar14 == 0.0)) && (fVar13 == 0.0)) &&
       (fVar12 == 0.0)) {
      func_0x00010c1d0640(puVar3);
    }
  }
  _CFRelease(uVar5);
LAB_1085a8c48:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1085a8c6c; end: 1085a8eb7; -[SCManagedFrameHealthCheckerImpl _logEventWithSnapHealthInfo:captureSessionId:healthCheckType:metadata:] */

void FUN_1085a8c6c(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_3 == (undefined **)0x0) {
    iVar4 = 10;
    _arc4random_uniform();
    if (iVar4 != 0) goto LAB_1085a8e90;
  }
  if (param_5 == 5) {
LAB_1085a8ccc:
    ppuVar11 = (undefined **)0x0;
LAB_1085a8cd0:
    if (param_5 < 4) {
      if (param_5 == 1) {
LAB_1085a8d0c:
        ppuVar10 = (undefined **)0x1;
      }
      else {
        if (param_5 == 2) goto LAB_1085a8d18;
LAB_1085a8d2c:
        ppuVar10 = (undefined **)0x0;
      }
    }
    else {
      if (param_5 != 5) {
        if (param_5 != 4) goto LAB_1085a8d2c;
        goto LAB_1085a8d0c;
      }
LAB_1085a8d18:
      ppuVar10 = (undefined **)0x2;
    }
  }
  else {
    ppuVar10 = (undefined **)0x1;
    if (param_5 != 4) {
      ppuVar11 = ppuVar10;
      if (param_5 == 3) goto LAB_1085a8ccc;
      goto LAB_1085a8cd0;
    }
    ppuVar11 = (undefined **)0x2;
  }
  puVar5 = PTR_PTR_1126da2b8;
  _objc_alloc_init(PTR_PTR_1126da2b8);
  func_0x00010c1a7c40();
  func_0x00010c179280(puVar5);
  func_0x00010c207200(puVar5);
  func_0x00010c1856a0(puVar5);
  lVar6 = param_6;
  func_0x00010bf529e0();
  if (lVar6 != 0) {
    puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
    func_0x00010c1c73c0(puVar5);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010b9f8f08();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar1 = ppuVar10;
  }
  func_0x00010b9f8f28();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_3 != (undefined **)0x0) {
    ppuVar2 = param_3;
  }
  func_0x00010b9f8f48();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar3 = ppuVar11;
  }
  FUN_1085aa8a8(uVar9,ppuVar1,ppuVar2,ppuVar3,1);
  _objc_release(ppuVar11);
  _objc_release(param_3);
  _objc_release(ppuVar10);
  _objc_release(puVar5);
LAB_1085a8e90:
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1085a8eb8; end: 1085a8eff; -[SCManagedFrameHealthCheckerImpl .cxx_destruct] */

void FUN_1085a8eb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085a8f00; end: 1085a8fb3;  */

/* WARNING: Removing unreachable block (ram,0x0001085a9604) */

void FUN_1085a8f00(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long extraout_x8;
  long *plVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined1 *puStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 ***pppuStack_5f0;
  code *pcStack_5e8;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 auStack_5b8 [2];
  char cStack_5a1;
  undefined8 auStack_5a0 [2];
  char cStack_589;
  long lStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined8 ***pppuStack_550;
  code *pcStack_548;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 *puStack_520;
  undefined8 auStack_518 [2];
  char cStack_501;
  undefined8 auStack_500 [2];
  char cStack_4e9;
  long lStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 *puStack_480;
  undefined8 auStack_478 [2];
  char cStack_461;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  undefined8 *puStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  long *plStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 *puStack_348;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined1 ***pppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [2];
  char cStack_89;
  long lStack_88;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_3c = 0;
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)param_3 << 2);
  puVar15 = auStack_40 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = param_3;
  _vDSP_vfltu8();
  puVar2 = (undefined8 *)&uStack_3c;
  puVar8 = (undefined8 *)0x1;
  _vDSP_sve();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail(uStack_3c);
  puVar10 = &uStack_c0;
  pcStack_48 = FUN_1085a8fb4;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar8;
  puVar7 = puVar2;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  if (puVar15 != (undefined1 *)0x0) {
    plVar13 = *(long **)(puVar15 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_a0,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_88,1);
    puVar1 = (undefined8 *)&UNK_110a58480;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    puVar7 = puVar10;
    param_3 = puVar2;
    if (cStack_89 < '\0') {
      __ZdlPv(auStack_a0[0]);
      puVar7 = puVar10;
      param_3 = puVar2;
    }
  }
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  __Unwind_Resume();
  puVar5 = &uStack_140;
  pcStack_c8 = FUN_1085a9128;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar10 = puVar7;
  ppuStack_d0 = &puStack_50;
  _objc_retain(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar2[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      puVar8 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_120,puVar8);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x000107c27984(&uStack_140,auStack_120,&lStack_108,1);
    puVar8 = (undefined8 *)&UNK_110a584d0;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_128 = (undefined1 *)&uStack_140;
    func_0x000107c278ac(&puStack_128);
    puVar10 = puVar5;
    param_3 = puVar7;
    if (cStack_109 < '\0') {
      __ZdlPv(auStack_120[0]);
      puVar10 = puVar5;
      param_3 = puVar7;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar9 = &uStack_240;
  pcStack_148 = FUN_1085a929c;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar8;
  puVar7 = puVar10;
  puVar5 = param_3;
  pppuStack_150 = &ppuStack_d0;
  _objc_retain(puVar8);
  _objc_retain(puVar10);
  _objc_retain(param_3);
  _objc_retain(puVar4);
  _objc_retain(param_6);
  puVar15 = (undefined1 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar2[1];
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_220,puVar2);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar2 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x000107c278b8(auStack_208,puVar2);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_1f0,puVar2);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_1d8,puVar2);
    _objc_retain(param_6);
    if (param_6 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_6);
      puVar2 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_1c0,puVar2);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x000107c27984(&uStack_240,auStack_220,&lStack_1a8,5);
    puVar1 = (undefined8 *)&UNK_110a58520;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a58520,&uStack_240,param_7);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x000107c278ac(&puStack_228);
    lVar14 = 0;
    puVar15 = auStack_220;
    puVar7 = puVar9;
    puVar5 = param_7;
    do {
      if ((&cStack_1a9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x78);
  }
  _objc_release(param_6);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(puVar10);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  do {
    puVar15 = puVar15 + -0x18;
  } while (puVar15 != auStack_220);
  _objc_release(param_6);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(puVar10);
  _objc_release(puVar8);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_248 = FUN_1085a964c;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar1;
  puVar11 = puVar7;
  puVar6 = puVar5;
  puStack_280 = puVar2;
  puStack_278 = param_6;
  puStack_270 = puVar4;
  puStack_268 = param_3;
  puStack_260 = puVar10;
  puStack_258 = puVar8;
  pppuStack_250 = &pppuStack_150;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  puVar4 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar3[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      puVar4 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    puVar2 = auStack_2b8;
    func_0x000107c278b8(auStack_2b8,puVar4);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar4 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_2a0,puVar4);
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    func_0x000107c27984(&uStack_2d8,auStack_2b8,&lStack_288,2);
    puVar9 = (undefined8 *)&UNK_110a58570;
    param_6 = &uStack_2d8;
    puVar11 = &uStack_2d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a58570,puVar11,puVar5);
    puStack_2c0 = param_6;
    func_0x000107c278ac(&puStack_2c0);
    lVar14 = 0;
    puVar4 = auStack_2b8;
    puVar6 = puVar5;
    do {
      if ((&cStack_289)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar7);
  puVar8 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_2a1 < '\0') {
    __ZdlPv(auStack_2b8[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar5 = puVar8;
  __Unwind_Resume();
  puVar12 = &uStack_360;
  pcStack_2e8 = FUN_1085a987c;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar9;
  puVar3 = puVar11;
  puStack_320 = puVar2;
  puStack_318 = param_6;
  puStack_310 = puVar4;
  puStack_308 = puVar8;
  puStack_300 = puVar7;
  puStack_2f8 = puVar1;
  pppuStack_2f0 = &pppuStack_250;
  _objc_retain(puVar9);
  plVar13 = (long *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar5[1];
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      puVar4 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    param_6 = auStack_340;
    func_0x000107c278b8(auStack_340,puVar4);
    uStack_360 = 0;
    uStack_358 = 0;
    uStack_350 = 0;
    func_0x000107c27984(&uStack_360,auStack_340,&lStack_328,1);
    puVar10 = (undefined8 *)&UNK_110a585c0;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a585c0,&uStack_360,puVar11);
    puStack_348 = (undefined1 *)&uStack_360;
    func_0x000107c278ac(&puStack_348);
    puVar3 = puVar12;
    puVar6 = puVar11;
    puVar4 = &uStack_360;
    if (cStack_329 < '\0') {
      __ZdlPv(auStack_340[0]);
      puVar3 = puVar12;
      puVar6 = puVar11;
      puVar4 = &uStack_360;
    }
  }
  puVar8 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  _objc_release(puVar9);
  puVar5 = puVar8;
  __Unwind_Resume();
  pcStack_368 = FUN_1085a99f0;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar10;
  puVar7 = puVar3;
  puVar11 = puVar6;
  puStack_3a0 = puVar2;
  puStack_398 = param_6;
  puStack_390 = puVar4;
  plStack_388 = plVar13;
  puStack_380 = puVar8;
  puStack_378 = puVar9;
  pppuStack_370 = &pppuStack_2f0;
  _objc_retain(puVar10);
  _objc_retain(puVar3);
  puVar4 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar5[1];
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      puVar4 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    puVar2 = auStack_3d8;
    func_0x000107c278b8(auStack_3d8,puVar4);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar4 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_3c0,puVar4);
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    func_0x000107c27984(&uStack_3f8,auStack_3d8,&lStack_3a8,2);
    puVar1 = (undefined8 *)&UNK_110a58660;
    param_6 = &uStack_3f8;
    puVar7 = &uStack_3f8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a58660,puVar7,puVar6);
    puStack_3e0 = param_6;
    func_0x000107c278ac(&puStack_3e0);
    lVar14 = 0;
    puVar4 = auStack_3d8;
    puVar11 = puVar6;
    do {
      if ((&cStack_3a9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar3);
  puVar8 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_3c1 < '\0') {
    __ZdlPv(auStack_3d8[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar10);
  puVar6 = puVar8;
  __Unwind_Resume();
  pcStack_408 = FUN_1085a9c20;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar9 = puVar7;
  puVar12 = puVar11;
  puStack_440 = puVar2;
  puStack_438 = param_6;
  puStack_430 = puVar4;
  puStack_428 = puVar8;
  puStack_420 = puVar3;
  puStack_418 = puVar10;
  pppuStack_410 = &pppuStack_370;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  puVar4 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar6[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      puVar4 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    puVar2 = auStack_478;
    func_0x000107c278b8(auStack_478,puVar4);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar4 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_460,puVar4);
    uStack_498 = 0;
    uStack_490 = 0;
    uStack_488 = 0;
    func_0x000107c27984(&uStack_498,auStack_478,&lStack_448,2);
    puVar5 = (undefined8 *)&UNK_110a586b0;
    param_6 = &uStack_498;
    puVar9 = &uStack_498;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a586b0,puVar9,puVar11);
    puStack_480 = param_6;
    func_0x000107c278ac(&puStack_480);
    lVar14 = 0;
    puVar4 = auStack_478;
    puVar12 = puVar11;
    do {
      if ((&cStack_449)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_460 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar7);
  puVar8 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_448) {
    ___stack_chk_fail();
    _objc_release(puVar7);
    if (cStack_461 < '\0') {
      __ZdlPv(auStack_478[0]);
    }
    _objc_release(puVar7);
    _objc_release(puVar1);
    puVar3 = puVar8;
    __Unwind_Resume();
    pcStack_4a8 = FUN_1085a9e50;
    lStack_4e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar10 = puVar5;
    puVar11 = puVar9;
    puVar6 = puVar12;
    puStack_4e0 = puVar2;
    puStack_4d8 = param_6;
    puStack_4d0 = puVar4;
    puStack_4c8 = puVar8;
    puStack_4c0 = puVar7;
    puStack_4b8 = puVar1;
    pppuStack_4b0 = &pppuStack_410;
    _objc_retain(puVar5);
    _objc_retain(puVar9);
    puVar4 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      plVar13 = (long *)puVar3[1];
      _objc_retain(puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f4a7fca;
      }
      else {
        puVar4 = puVar5;
        _objc_retainAutorelease(puVar5);
        func_0x00010bdc3520();
      }
      _objc_release(puVar5);
      puVar2 = auStack_518;
      func_0x000107c278b8(auStack_518,puVar4);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f4a7fca;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar4 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x000107c278b8(auStack_500,puVar4);
      uStack_538 = 0;
      uStack_530 = 0;
      uStack_528 = 0;
      func_0x000107c27984(&uStack_538,auStack_518,&lStack_4e8,2);
      puVar10 = (undefined8 *)&UNK_110a58700;
      param_6 = &uStack_538;
      puVar11 = &uStack_538;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a58700,puVar11,puVar12);
      puStack_520 = param_6;
      func_0x000107c278ac(&puStack_520);
      lVar14 = 0;
      puVar4 = auStack_518;
      puVar6 = puVar12;
      do {
        if ((&cStack_4e9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_500 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(puVar9);
    puVar8 = puVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4e8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar9);
    if (cStack_501 < '\0') {
      __ZdlPv(auStack_518[0]);
    }
    _objc_release(puVar9);
    _objc_release(puVar5);
    puVar7 = puVar8;
    __Unwind_Resume();
    pcStack_548 = FUN_1085aa080;
    lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = puVar10;
    puStack_580 = puVar2;
    puStack_578 = param_6;
    puStack_570 = puVar4;
    puStack_568 = puVar8;
    puStack_560 = puVar9;
    puStack_558 = puVar5;
    pppuStack_550 = &pppuStack_4b0;
    _objc_retain(puVar10);
    _objc_retain(puVar11);
    if (puVar7 != (undefined8 *)0x0) {
      plVar13 = (long *)puVar7[1];
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f4a7fca;
      }
      else {
        puVar4 = puVar10;
        _objc_retainAutorelease(puVar10);
        func_0x00010bdc3520();
      }
      _objc_release(puVar10);
      func_0x000107c278b8(auStack_5b8,puVar4);
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f4a7fca;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar4 = puVar11;
        func_0x00010bdc3520(puVar11);
      }
      _objc_release(puVar11);
      func_0x000107c278b8(auStack_5a0,puVar4);
      uStack_5d8 = 0;
      uStack_5d0 = 0;
      uStack_5c8 = 0;
      func_0x000107c27984(&uStack_5d8,auStack_5b8,&lStack_588,2);
      puVar1 = (undefined8 *)&UNK_110a58750;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a58750,&uStack_5d8,puVar6);
      puStack_5c0 = &uStack_5d8;
      func_0x000107c278ac(&puStack_5c0);
      lVar14 = 0;
      do {
        if ((&cStack_589)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_5a0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(puVar11);
    puVar4 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_588) {
      ___stack_chk_fail();
      _objc_release(puVar11);
      if (cStack_5a1 < '\0') {
        __ZdlPv(auStack_5b8[0]);
      }
      _objc_release(puVar11);
      _objc_release(puVar10);
      __Unwind_Resume();
      puStack_608 = (undefined1 *)&uStack_620;
      pcStack_5e8 = FUN_1085aa2b0;
      if (puVar4 != (undefined8 *)0x0) {
        uStack_620 = 0;
        uStack_618 = 0;
        uStack_610 = 0;
        puStack_600 = puVar11;
        puStack_5f8 = puVar10;
        pppuStack_5f0 = &pppuStack_550;
        (**(code **)(*(long *)puVar4[1] + 0x18))
                  ((long *)puVar4[1],&UNK_110a587a0,&uStack_620,puVar1);
        func_0x000107c278ac(&puStack_608);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1085a8fb4; end: 1085a9127;  */

/* WARNING: Removing unreachable block (ram,0x0001085a9604) */

void FUN_1085a8fb4(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined1 *puStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 ***pppuStack_5b0;
  code *pcStack_5a8;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 *puStack_580;
  undefined8 auStack_578 [2];
  char cStack_561;
  undefined8 auStack_560 [2];
  char cStack_549;
  long lStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 *puStack_530;
  undefined8 *puStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 auStack_4d8 [2];
  char cStack_4c1;
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  long lStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 *puStack_440;
  undefined8 auStack_438 [2];
  char cStack_421;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar2 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = (undefined8 *)&UNK_110a58480;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar3 = puVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = puVar2;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar11 = &uStack_100;
  pcStack_88 = FUN_1085a9128;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar2[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar6 = (undefined8 *)&UNK_110a584d0;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar7 = puVar11;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = puVar11;
      param_4 = puVar3;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar10 = &uStack_200;
  pcStack_108 = FUN_1085a929c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar6;
  puVar2 = puVar7;
  puVar11 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar16 = (undefined1 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar3[1];
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_1e0,puVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar1 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_1c8,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_1b0,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar4 = &UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar4 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_198,puVar4);
    _objc_retain(param_6);
    if (param_6 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_6);
      puVar1 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_180,puVar1);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x000107c27984(&uStack_200,auStack_1e0,&lStack_168,5);
    puVar1 = (undefined8 *)&UNK_110a58520;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a58520,&uStack_200,param_7);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x000107c278ac(&puStack_1e8);
    lVar15 = 0;
    puVar16 = auStack_1e0;
    puVar2 = puVar10;
    puVar11 = param_7;
    do {
      if ((&cStack_169)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar7);
  puVar3 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  do {
    puVar16 = puVar16 + -0x18;
  } while (puVar16 != auStack_1e0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar5 = puVar3;
  __Unwind_Resume();
  pcStack_208 = FUN_1085a964c;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar1;
  puVar8 = puVar2;
  puVar9 = puVar11;
  puStack_240 = puVar3;
  puStack_238 = param_6;
  puStack_230 = param_5;
  puStack_228 = param_4;
  puStack_220 = puVar7;
  puStack_218 = puVar6;
  pppuStack_210 = &ppuStack_110;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar6 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar5[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      puVar6 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    puVar3 = auStack_278;
    func_0x000107c278b8(auStack_278,puVar6);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar6 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_260,puVar6);
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    func_0x000107c27984(&uStack_298,auStack_278,&lStack_248,2);
    puVar10 = (undefined8 *)&UNK_110a58570;
    param_6 = &uStack_298;
    puVar8 = &uStack_298;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a58570,puVar8,puVar11);
    puStack_280 = param_6;
    func_0x000107c278ac(&puStack_280);
    lVar15 = 0;
    puVar6 = auStack_278;
    puVar9 = puVar11;
    do {
      if ((&cStack_249)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar2);
  puVar7 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar5 = puVar7;
  __Unwind_Resume();
  puVar13 = &uStack_320;
  pcStack_2a8 = FUN_1085a987c;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar10;
  puVar12 = puVar8;
  puStack_2e0 = puVar3;
  puStack_2d8 = param_6;
  puStack_2d0 = puVar6;
  puStack_2c8 = puVar7;
  puStack_2c0 = puVar2;
  puStack_2b8 = puVar1;
  pppuStack_2b0 = &pppuStack_210;
  _objc_retain(puVar10);
  plVar14 = (long *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar5[1];
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      puVar1 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    param_6 = auStack_300;
    func_0x000107c278b8(auStack_300,puVar1);
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    func_0x000107c27984(&uStack_320,auStack_300,&lStack_2e8,1);
    puVar11 = (undefined8 *)&UNK_110a585c0;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a585c0,&uStack_320,puVar8);
    puStack_308 = (undefined1 *)&uStack_320;
    func_0x000107c278ac(&puStack_308);
    puVar12 = puVar13;
    puVar9 = puVar8;
    puVar6 = &uStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      puVar12 = puVar13;
      puVar9 = puVar8;
      puVar6 = &uStack_320;
    }
  }
  puVar1 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e8) {
    ___stack_chk_fail();
    _objc_release(puVar10);
    _objc_release(puVar10);
    puVar8 = puVar1;
    __Unwind_Resume();
    pcStack_328 = FUN_1085a99f0;
    lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = puVar11;
    puVar7 = puVar12;
    puVar5 = puVar9;
    puStack_360 = puVar3;
    puStack_358 = param_6;
    puStack_350 = puVar6;
    plStack_348 = plVar14;
    puStack_340 = puVar1;
    puStack_338 = puVar10;
    pppuStack_330 = &pppuStack_2b0;
    _objc_retain(puVar11);
    _objc_retain(puVar12);
    puVar1 = (undefined8 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      plVar14 = (long *)puVar8[1];
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f4a7fca;
      }
      else {
        puVar1 = puVar11;
        _objc_retainAutorelease(puVar11);
        func_0x00010bdc3520();
      }
      _objc_release(puVar11);
      puVar3 = auStack_398;
      func_0x000107c278b8(auStack_398,puVar1);
      _objc_retain(puVar12);
      if (puVar12 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f4a7fca;
      }
      else {
        _objc_retainAutorelease(puVar12);
        puVar1 = puVar12;
        func_0x00010bdc3520(puVar12);
      }
      _objc_release(puVar12);
      func_0x000107c278b8(auStack_380,puVar1);
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      uStack_3a8 = 0;
      func_0x000107c27984(&uStack_3b8,auStack_398,&lStack_368,2);
      puVar2 = (undefined8 *)&UNK_110a58660;
      param_6 = &uStack_3b8;
      puVar7 = &uStack_3b8;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a58660,puVar7,puVar9);
      puStack_3a0 = param_6;
      func_0x000107c278ac(&puStack_3a0);
      lVar15 = 0;
      puVar1 = auStack_398;
      puVar5 = puVar9;
      do {
        if ((&cStack_369)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
    _objc_release(puVar12);
    puVar6 = puVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar12);
    if (cStack_381 < '\0') {
      __ZdlPv(auStack_398[0]);
    }
    _objc_release(puVar12);
    _objc_release(puVar11);
    puVar9 = puVar6;
    __Unwind_Resume();
    pcStack_3c8 = FUN_1085a9c20;
    lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar10 = puVar2;
    puVar8 = puVar7;
    puVar13 = puVar5;
    puStack_400 = puVar3;
    puStack_3f8 = param_6;
    puStack_3f0 = puVar1;
    puStack_3e8 = puVar6;
    puStack_3e0 = puVar12;
    puStack_3d8 = puVar11;
    pppuStack_3d0 = &pppuStack_330;
    _objc_retain(puVar2);
    _objc_retain(puVar7);
    puVar1 = (undefined8 *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      plVar14 = (long *)puVar9[1];
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f4a7fca;
      }
      else {
        puVar1 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      puVar3 = auStack_438;
      func_0x000107c278b8(auStack_438,puVar1);
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f4a7fca;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar1 = puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x000107c278b8(auStack_420,puVar1);
      uStack_458 = 0;
      uStack_450 = 0;
      uStack_448 = 0;
      func_0x000107c27984(&uStack_458,auStack_438,&lStack_408,2);
      puVar10 = (undefined8 *)&UNK_110a586b0;
      param_6 = &uStack_458;
      puVar8 = &uStack_458;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a586b0,puVar8,puVar5);
      puStack_440 = param_6;
      func_0x000107c278ac(&puStack_440);
      lVar15 = 0;
      puVar1 = auStack_438;
      puVar13 = puVar5;
      do {
        if ((&cStack_409)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_420 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
    _objc_release(puVar7);
    puVar6 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_408) {
      ___stack_chk_fail();
      _objc_release(puVar7);
      if (cStack_421 < '\0') {
        __ZdlPv(auStack_438[0]);
      }
      _objc_release(puVar7);
      _objc_release(puVar2);
      puVar9 = puVar6;
      __Unwind_Resume();
      pcStack_468 = FUN_1085a9e50;
      lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar11 = puVar10;
      puVar5 = puVar8;
      puVar12 = puVar13;
      puStack_4a0 = puVar3;
      puStack_498 = param_6;
      puStack_490 = puVar1;
      puStack_488 = puVar6;
      puStack_480 = puVar7;
      puStack_478 = puVar2;
      pppuStack_470 = &pppuStack_3d0;
      _objc_retain(puVar10);
      _objc_retain(puVar8);
      puVar1 = (undefined8 *)0x0;
      if (puVar9 != (undefined8 *)0x0) {
        plVar14 = (long *)puVar9[1];
        _objc_retain(puVar10);
        if (puVar10 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f4a7fca;
        }
        else {
          puVar1 = puVar10;
          _objc_retainAutorelease(puVar10);
          func_0x00010bdc3520();
        }
        _objc_release(puVar10);
        puVar3 = auStack_4d8;
        func_0x000107c278b8(auStack_4d8,puVar1);
        _objc_retain(puVar8);
        if (puVar8 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f4a7fca;
        }
        else {
          _objc_retainAutorelease(puVar8);
          puVar1 = puVar8;
          func_0x00010bdc3520(puVar8);
        }
        _objc_release(puVar8);
        func_0x000107c278b8(auStack_4c0,puVar1);
        uStack_4f8 = 0;
        uStack_4f0 = 0;
        uStack_4e8 = 0;
        func_0x000107c27984(&uStack_4f8,auStack_4d8,&lStack_4a8,2);
        puVar11 = (undefined8 *)&UNK_110a58700;
        param_6 = &uStack_4f8;
        puVar5 = &uStack_4f8;
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a58700,puVar5,puVar13);
        puStack_4e0 = param_6;
        func_0x000107c278ac(&puStack_4e0);
        lVar15 = 0;
        puVar1 = auStack_4d8;
        puVar12 = puVar13;
        do {
          if ((&cStack_4a9)[lVar15] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_4c0 + lVar15));
          }
          lVar15 = lVar15 + -0x18;
        } while (lVar15 != -0x30);
      }
      _objc_release(puVar8);
      puVar2 = puVar10;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(puVar8);
      if (cStack_4c1 < '\0') {
        __ZdlPv(auStack_4d8[0]);
      }
      _objc_release(puVar8);
      _objc_release(puVar10);
      puVar7 = puVar2;
      __Unwind_Resume();
      pcStack_508 = FUN_1085aa080;
      lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar6 = puVar11;
      puStack_540 = puVar3;
      puStack_538 = param_6;
      puStack_530 = puVar1;
      puStack_528 = puVar2;
      puStack_520 = puVar8;
      puStack_518 = puVar10;
      pppuStack_510 = &pppuStack_470;
      _objc_retain(puVar11);
      _objc_retain(puVar5);
      if (puVar7 != (undefined8 *)0x0) {
        plVar14 = (long *)puVar7[1];
        _objc_retain(puVar11);
        if (puVar11 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f4a7fca;
        }
        else {
          puVar1 = puVar11;
          _objc_retainAutorelease(puVar11);
          func_0x00010bdc3520();
        }
        _objc_release(puVar11);
        func_0x000107c278b8(auStack_578,puVar1);
        _objc_retain(puVar5);
        if (puVar5 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f4a7fca;
        }
        else {
          _objc_retainAutorelease(puVar5);
          puVar1 = puVar5;
          func_0x00010bdc3520(puVar5);
        }
        _objc_release(puVar5);
        func_0x000107c278b8(auStack_560,puVar1);
        uStack_598 = 0;
        uStack_590 = 0;
        uStack_588 = 0;
        func_0x000107c27984(&uStack_598,auStack_578,&lStack_548,2);
        puVar6 = (undefined8 *)&UNK_110a58750;
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a58750,&uStack_598,puVar12);
        puStack_580 = &uStack_598;
        func_0x000107c278ac(&puStack_580);
        lVar15 = 0;
        do {
          if ((&cStack_549)[lVar15] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_560 + lVar15));
          }
          lVar15 = lVar15 + -0x18;
        } while (lVar15 != -0x30);
      }
      _objc_release(puVar5);
      puVar1 = puVar11;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_548) {
        ___stack_chk_fail();
        _objc_release(puVar5);
        if (cStack_561 < '\0') {
          __ZdlPv(auStack_578[0]);
        }
        _objc_release(puVar5);
        _objc_release(puVar11);
        __Unwind_Resume();
        puStack_5c8 = (undefined1 *)&uStack_5e0;
        pcStack_5a8 = FUN_1085aa2b0;
        if (puVar1 != (undefined8 *)0x0) {
          uStack_5e0 = 0;
          uStack_5d8 = 0;
          uStack_5d0 = 0;
          puStack_5c0 = puVar5;
          puStack_5b8 = puVar11;
          pppuStack_5b0 = &pppuStack_510;
          (**(code **)(*(long *)puVar1[1] + 0x18))
                    ((long *)puVar1[1],&UNK_110a587a0,&uStack_5e0,puVar6);
          func_0x000107c278ac(&puStack_5c8);
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1085a9128; end: 1085a929b;  */

/* WARNING: Removing unreachable block (ram,0x0001085a9604) */

void FUN_1085a9128(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined1 *puStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 *puStack_500;
  undefined8 auStack_4f8 [2];
  char cStack_4e1;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_460;
  undefined8 auStack_458 [2];
  char cStack_441;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 auStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 auStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar2 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = (undefined8 *)&UNK_110a584d0;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = puVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar2;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar10 = &uStack_180;
  pcStack_88 = FUN_1085a929c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar1;
  puVar8 = puVar5;
  puVar11 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar16 = (undefined1 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar2[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_160,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar2 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x000107c278b8(auStack_148,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_130,puVar2);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar3 = &UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar3 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_118,puVar3);
    _objc_retain(param_6);
    if (param_6 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_6);
      puVar2 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_100,puVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_e8,5);
    puVar9 = (undefined8 *)&UNK_110a58520;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a58520,&uStack_180,param_7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar15 = 0;
    puVar16 = auStack_160;
    puVar8 = puVar10;
    puVar11 = param_7;
    do {
      if ((&cStack_e9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  do {
    puVar16 = puVar16 + -0x18;
  } while (puVar16 != auStack_160);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_188 = FUN_1085a964c;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar9;
  puVar6 = puVar8;
  puVar7 = puVar11;
  puStack_1c0 = puVar2;
  puStack_1b8 = param_6;
  puStack_1b0 = param_5;
  puStack_1a8 = param_4;
  puStack_1a0 = puVar5;
  puStack_198 = puVar1;
  ppuStack_190 = &puStack_90;
  _objc_retain(puVar9);
  _objc_retain(puVar8);
  puVar1 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar4[1];
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      puVar1 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    puVar2 = auStack_1f8;
    func_0x000107c278b8(auStack_1f8,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar1 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_1e0,puVar1);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x000107c27984(&uStack_218,auStack_1f8,&lStack_1c8,2);
    puVar10 = (undefined8 *)&UNK_110a58570;
    param_6 = &uStack_218;
    puVar6 = &uStack_218;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a58570,puVar6,puVar11);
    puStack_200 = param_6;
    func_0x000107c278ac(&puStack_200);
    lVar15 = 0;
    puVar1 = auStack_1f8;
    puVar7 = puVar11;
    do {
      if ((&cStack_1c9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar8);
  puVar5 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar9);
  puVar4 = puVar5;
  __Unwind_Resume();
  puVar13 = &uStack_2a0;
  pcStack_228 = FUN_1085a987c;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar10;
  puVar12 = puVar6;
  puStack_260 = puVar2;
  puStack_258 = param_6;
  puStack_250 = puVar1;
  puStack_248 = puVar5;
  puStack_240 = puVar8;
  puStack_238 = puVar9;
  pppuStack_230 = &ppuStack_190;
  _objc_retain(puVar10);
  plVar14 = (long *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar4[1];
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      puVar1 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    param_6 = auStack_280;
    func_0x000107c278b8(auStack_280,puVar1);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x000107c27984(&uStack_2a0,auStack_280,&lStack_268,1);
    puVar11 = (undefined8 *)&UNK_110a585c0;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a585c0,&uStack_2a0,puVar6);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x000107c278ac(&puStack_288);
    puVar12 = puVar13;
    puVar7 = puVar6;
    puVar1 = &uStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      puVar12 = puVar13;
      puVar7 = puVar6;
      puVar1 = &uStack_2a0;
    }
  }
  puVar5 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  _objc_release(puVar10);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_2a8 = FUN_1085a99f0;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar11;
  puVar8 = puVar12;
  puVar4 = puVar7;
  puStack_2e0 = puVar2;
  puStack_2d8 = param_6;
  puStack_2d0 = puVar1;
  plStack_2c8 = plVar14;
  puStack_2c0 = puVar5;
  puStack_2b8 = puVar10;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(puVar11);
  _objc_retain(puVar12);
  puVar1 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar6[1];
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      puVar1 = puVar11;
      _objc_retainAutorelease(puVar11);
      func_0x00010bdc3520();
    }
    _objc_release(puVar11);
    puVar2 = auStack_318;
    func_0x000107c278b8(auStack_318,puVar1);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar1 = puVar12;
      func_0x00010bdc3520(puVar12);
    }
    _objc_release(puVar12);
    func_0x000107c278b8(auStack_300,puVar1);
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    func_0x000107c27984(&uStack_338,auStack_318,&lStack_2e8,2);
    puVar9 = (undefined8 *)&UNK_110a58660;
    param_6 = &uStack_338;
    puVar8 = &uStack_338;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a58660,puVar8,puVar7);
    puStack_320 = param_6;
    func_0x000107c278ac(&puStack_320);
    lVar15 = 0;
    puVar1 = auStack_318;
    puVar4 = puVar7;
    do {
      if ((&cStack_2e9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar12);
  puVar5 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e8) {
    ___stack_chk_fail();
    _objc_release(puVar12);
    if (cStack_301 < '\0') {
      __ZdlPv(auStack_318[0]);
    }
    _objc_release(puVar12);
    _objc_release(puVar11);
    puVar7 = puVar5;
    __Unwind_Resume();
    pcStack_348 = FUN_1085a9c20;
    lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar10 = puVar9;
    puVar6 = puVar8;
    puVar13 = puVar4;
    puStack_380 = puVar2;
    puStack_378 = param_6;
    puStack_370 = puVar1;
    puStack_368 = puVar5;
    puStack_360 = puVar12;
    puStack_358 = puVar11;
    pppuStack_350 = &pppuStack_2b0;
    _objc_retain(puVar9);
    _objc_retain(puVar8);
    puVar1 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      plVar14 = (long *)puVar7[1];
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f4a7fca;
      }
      else {
        puVar1 = puVar9;
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      puVar2 = auStack_3b8;
      func_0x000107c278b8(auStack_3b8,puVar1);
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f4a7fca;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar1 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x000107c278b8(auStack_3a0,puVar1);
      uStack_3d8 = 0;
      uStack_3d0 = 0;
      uStack_3c8 = 0;
      func_0x000107c27984(&uStack_3d8,auStack_3b8,&lStack_388,2);
      puVar10 = (undefined8 *)&UNK_110a586b0;
      param_6 = &uStack_3d8;
      puVar6 = &uStack_3d8;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a586b0,puVar6,puVar4);
      puStack_3c0 = param_6;
      func_0x000107c278ac(&puStack_3c0);
      lVar15 = 0;
      puVar1 = auStack_3b8;
      puVar13 = puVar4;
      do {
        if ((&cStack_389)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
    _objc_release(puVar8);
    puVar5 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar8);
    if (cStack_3a1 < '\0') {
      __ZdlPv(auStack_3b8[0]);
    }
    _objc_release(puVar8);
    _objc_release(puVar9);
    puVar7 = puVar5;
    __Unwind_Resume();
    pcStack_3e8 = FUN_1085a9e50;
    lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar11 = puVar10;
    puVar4 = puVar6;
    puVar12 = puVar13;
    puStack_420 = puVar2;
    puStack_418 = param_6;
    puStack_410 = puVar1;
    puStack_408 = puVar5;
    puStack_400 = puVar8;
    puStack_3f8 = puVar9;
    pppuStack_3f0 = &pppuStack_350;
    _objc_retain(puVar10);
    _objc_retain(puVar6);
    puVar1 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      plVar14 = (long *)puVar7[1];
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f4a7fca;
      }
      else {
        puVar1 = puVar10;
        _objc_retainAutorelease(puVar10);
        func_0x00010bdc3520();
      }
      _objc_release(puVar10);
      puVar2 = auStack_458;
      func_0x000107c278b8(auStack_458,puVar1);
      _objc_retain(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f4a7fca;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar1 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x000107c278b8(auStack_440,puVar1);
      uStack_478 = 0;
      uStack_470 = 0;
      uStack_468 = 0;
      func_0x000107c27984(&uStack_478,auStack_458,&lStack_428,2);
      puVar11 = (undefined8 *)&UNK_110a58700;
      param_6 = &uStack_478;
      puVar4 = &uStack_478;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a58700,puVar4,puVar13);
      puStack_460 = param_6;
      func_0x000107c278ac(&puStack_460);
      lVar15 = 0;
      puVar1 = auStack_458;
      puVar12 = puVar13;
      do {
        if ((&cStack_429)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_440 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
    _objc_release(puVar6);
    puVar5 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar6);
    if (cStack_441 < '\0') {
      __ZdlPv(auStack_458[0]);
    }
    _objc_release(puVar6);
    _objc_release(puVar10);
    puVar8 = puVar5;
    __Unwind_Resume();
    pcStack_488 = FUN_1085aa080;
    lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = puVar11;
    puStack_4c0 = puVar2;
    puStack_4b8 = param_6;
    puStack_4b0 = puVar1;
    puStack_4a8 = puVar5;
    puStack_4a0 = puVar6;
    puStack_498 = puVar10;
    pppuStack_490 = &pppuStack_3f0;
    _objc_retain(puVar11);
    _objc_retain(puVar4);
    if (puVar8 != (undefined8 *)0x0) {
      plVar14 = (long *)puVar8[1];
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f4a7fca;
      }
      else {
        puVar1 = puVar11;
        _objc_retainAutorelease(puVar11);
        func_0x00010bdc3520();
      }
      _objc_release(puVar11);
      func_0x000107c278b8(auStack_4f8,puVar1);
      _objc_retain(puVar4);
      if (puVar4 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f4a7fca;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar1 = puVar4;
        func_0x00010bdc3520(puVar4);
      }
      _objc_release(puVar4);
      func_0x000107c278b8(auStack_4e0,puVar1);
      uStack_518 = 0;
      uStack_510 = 0;
      uStack_508 = 0;
      func_0x000107c27984(&uStack_518,auStack_4f8,&lStack_4c8,2);
      puVar9 = (undefined8 *)&UNK_110a58750;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a58750,&uStack_518,puVar12);
      puStack_500 = &uStack_518;
      func_0x000107c278ac(&puStack_500);
      lVar15 = 0;
      do {
        if ((&cStack_4c9)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4e0 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
    _objc_release(puVar4);
    puVar1 = puVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4c8) {
      ___stack_chk_fail();
      _objc_release(puVar4);
      if (cStack_4e1 < '\0') {
        __ZdlPv(auStack_4f8[0]);
      }
      _objc_release(puVar4);
      _objc_release(puVar11);
      __Unwind_Resume();
      puStack_548 = (undefined1 *)&uStack_560;
      pcStack_528 = FUN_1085aa2b0;
      if (puVar1 != (undefined8 *)0x0) {
        uStack_560 = 0;
        uStack_558 = 0;
        uStack_550 = 0;
        puStack_540 = puVar4;
        puStack_538 = puVar11;
        pppuStack_530 = &pppuStack_490;
        (**(code **)(*(long *)puVar1[1] + 0x18))
                  ((long *)puVar1[1],&UNK_110a587a0,&uStack_560,puVar9);
        func_0x000107c278ac(&puStack_548);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1085a929c; end: 1085a964b;  */

/* WARNING: Removing unreachable block (ram,0x0001085a9604) */

void FUN_1085a929c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 *puVar15;
  long *plVar16;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined1 *puStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 *puStack_480;
  undefined8 auStack_478 [2];
  char cStack_461;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  undefined8 *puStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  
  puVar3 = &uStack_100;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar10 = param_3;
  puVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar15 = (undefined1 *)0x0;
  if (param_1 != 0) {
    plVar16 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_e0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_c8,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_b0,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar2 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_98,puVar2);
    _objc_retain(param_6);
    if (param_6 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_6);
      puVar1 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_80,puVar1);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_68,5);
    puVar1 = (undefined8 *)&UNK_110a58520;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110a58520,&uStack_100,param_7);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    lVar14 = 0;
    puVar15 = auStack_e0;
    puVar10 = puVar3;
    puVar6 = param_7;
    do {
      if ((&cStack_69)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_80 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  do {
    puVar15 = puVar15 + -0x18;
  } while (puVar15 != auStack_e0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_108 = FUN_1085a964c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar8 = puVar10;
  puVar9 = puVar6;
  puStack_140 = puVar3;
  puStack_138 = param_6;
  puStack_130 = param_5;
  puStack_128 = param_4;
  puStack_120 = param_3;
  puStack_118 = param_2;
  puStack_110 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar10);
  puVar13 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar16 = (long *)puVar4[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      puVar5 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    puVar3 = auStack_178;
    func_0x000107c278b8(auStack_178,puVar5);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar5 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x000107c278b8(auStack_160,puVar5);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x000107c27984(&uStack_198,auStack_178,&lStack_148,2);
    puVar5 = (undefined8 *)&UNK_110a58570;
    param_6 = &uStack_198;
    puVar8 = &uStack_198;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110a58570,puVar8,puVar6);
    puStack_180 = param_6;
    func_0x000107c278ac(&puStack_180);
    lVar14 = 0;
    puVar13 = auStack_178;
    puVar9 = puVar6;
    do {
      if ((&cStack_149)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar10);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(puVar10);
  _objc_release(puVar1);
  puVar7 = puVar6;
  __Unwind_Resume();
  puVar12 = &uStack_220;
  pcStack_1a8 = FUN_1085a987c;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar5;
  puVar11 = puVar8;
  puStack_1e0 = puVar3;
  puStack_1d8 = param_6;
  puStack_1d0 = puVar13;
  puStack_1c8 = puVar6;
  puStack_1c0 = puVar10;
  puStack_1b8 = puVar1;
  ppuStack_1b0 = &puStack_110;
  _objc_retain(puVar5);
  plVar16 = (long *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar16 = (long *)puVar7[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    param_6 = auStack_200;
    func_0x000107c278b8(auStack_200,puVar1);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar4 = (undefined8 *)&UNK_110a585c0;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110a585c0,&uStack_220,puVar8);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x000107c278ac(&puStack_208);
    puVar11 = puVar12;
    puVar9 = puVar8;
    puVar13 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar11 = puVar12;
      puVar9 = puVar8;
      puVar13 = &uStack_220;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
    ___stack_chk_fail();
    _objc_release(puVar5);
    _objc_release(puVar5);
    puVar8 = puVar1;
    __Unwind_Resume();
    pcStack_228 = FUN_1085a99f0;
    lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar10 = puVar4;
    puVar6 = puVar11;
    puVar7 = puVar9;
    puStack_260 = puVar3;
    puStack_258 = param_6;
    puStack_250 = puVar13;
    plStack_248 = plVar16;
    puStack_240 = puVar1;
    puStack_238 = puVar5;
    pppuStack_230 = &ppuStack_1b0;
    _objc_retain(puVar4);
    _objc_retain(puVar11);
    puVar1 = (undefined8 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      plVar16 = (long *)puVar8[1];
      _objc_retain(puVar4);
      if (puVar4 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f4a7fca;
      }
      else {
        puVar1 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      puVar3 = auStack_298;
      func_0x000107c278b8(auStack_298,puVar1);
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f4a7fca;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar1 = puVar11;
        func_0x00010bdc3520(puVar11);
      }
      _objc_release(puVar11);
      func_0x000107c278b8(auStack_280,puVar1);
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      func_0x000107c27984(&uStack_2b8,auStack_298,&lStack_268,2);
      puVar10 = (undefined8 *)&UNK_110a58660;
      param_6 = &uStack_2b8;
      puVar6 = &uStack_2b8;
      (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110a58660,puVar6,puVar9);
      puStack_2a0 = param_6;
      func_0x000107c278ac(&puStack_2a0);
      lVar14 = 0;
      puVar1 = auStack_298;
      puVar7 = puVar9;
      do {
        if ((&cStack_269)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(puVar11);
    puVar5 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar11);
    if (cStack_281 < '\0') {
      __ZdlPv(auStack_298[0]);
    }
    _objc_release(puVar11);
    _objc_release(puVar4);
    puVar9 = puVar5;
    __Unwind_Resume();
    pcStack_2c8 = FUN_1085a9c20;
    lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar10;
    puVar13 = puVar6;
    puVar12 = puVar7;
    puStack_300 = puVar3;
    puStack_2f8 = param_6;
    puStack_2f0 = puVar1;
    puStack_2e8 = puVar5;
    puStack_2e0 = puVar11;
    puStack_2d8 = puVar4;
    pppuStack_2d0 = &pppuStack_230;
    _objc_retain(puVar10);
    _objc_retain(puVar6);
    puVar1 = (undefined8 *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      plVar16 = (long *)puVar9[1];
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f4a7fca;
      }
      else {
        puVar1 = puVar10;
        _objc_retainAutorelease(puVar10);
        func_0x00010bdc3520();
      }
      _objc_release(puVar10);
      puVar3 = auStack_338;
      func_0x000107c278b8(auStack_338,puVar1);
      _objc_retain(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f4a7fca;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar1 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x000107c278b8(auStack_320,puVar1);
      uStack_358 = 0;
      uStack_350 = 0;
      uStack_348 = 0;
      func_0x000107c27984(&uStack_358,auStack_338,&lStack_308,2);
      puVar8 = (undefined8 *)&UNK_110a586b0;
      param_6 = &uStack_358;
      puVar13 = &uStack_358;
      (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110a586b0,puVar13,puVar7);
      puStack_340 = param_6;
      func_0x000107c278ac(&puStack_340);
      lVar14 = 0;
      puVar1 = auStack_338;
      puVar12 = puVar7;
      do {
        if ((&cStack_309)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(puVar6);
    puVar5 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_308) {
      ___stack_chk_fail();
      _objc_release(puVar6);
      if (cStack_321 < '\0') {
        __ZdlPv(auStack_338[0]);
      }
      _objc_release(puVar6);
      _objc_release(puVar10);
      puVar7 = puVar5;
      __Unwind_Resume();
      pcStack_368 = FUN_1085a9e50;
      lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar4 = puVar8;
      puVar9 = puVar13;
      puVar11 = puVar12;
      puStack_3a0 = puVar3;
      puStack_398 = param_6;
      puStack_390 = puVar1;
      puStack_388 = puVar5;
      puStack_380 = puVar6;
      puStack_378 = puVar10;
      pppuStack_370 = &pppuStack_2d0;
      _objc_retain(puVar8);
      _objc_retain(puVar13);
      puVar1 = (undefined8 *)0x0;
      if (puVar7 != (undefined8 *)0x0) {
        plVar16 = (long *)puVar7[1];
        _objc_retain(puVar8);
        if (puVar8 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f4a7fca;
        }
        else {
          puVar1 = puVar8;
          _objc_retainAutorelease(puVar8);
          func_0x00010bdc3520();
        }
        _objc_release(puVar8);
        puVar3 = auStack_3d8;
        func_0x000107c278b8(auStack_3d8,puVar1);
        _objc_retain(puVar13);
        if (puVar13 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f4a7fca;
        }
        else {
          _objc_retainAutorelease(puVar13);
          puVar1 = puVar13;
          func_0x00010bdc3520(puVar13);
        }
        _objc_release(puVar13);
        func_0x000107c278b8(auStack_3c0,puVar1);
        uStack_3f8 = 0;
        uStack_3f0 = 0;
        uStack_3e8 = 0;
        func_0x000107c27984(&uStack_3f8,auStack_3d8,&lStack_3a8,2);
        puVar4 = (undefined8 *)&UNK_110a58700;
        param_6 = &uStack_3f8;
        puVar9 = &uStack_3f8;
        (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110a58700,puVar9,puVar12);
        puStack_3e0 = param_6;
        func_0x000107c278ac(&puStack_3e0);
        lVar14 = 0;
        puVar1 = auStack_3d8;
        puVar11 = puVar12;
        do {
          if ((&cStack_3a9)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
        } while (lVar14 != -0x30);
      }
      _objc_release(puVar13);
      puVar10 = puVar8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3a8) {
        ___stack_chk_fail();
        _objc_release(puVar13);
        if (cStack_3c1 < '\0') {
          __ZdlPv(auStack_3d8[0]);
        }
        _objc_release(puVar13);
        _objc_release(puVar8);
        puVar5 = puVar10;
        __Unwind_Resume();
        pcStack_408 = FUN_1085aa080;
        lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar6 = puVar4;
        puStack_440 = puVar3;
        puStack_438 = param_6;
        puStack_430 = puVar1;
        puStack_428 = puVar10;
        puStack_420 = puVar13;
        puStack_418 = puVar8;
        pppuStack_410 = &pppuStack_370;
        _objc_retain(puVar4);
        _objc_retain(puVar9);
        if (puVar5 != (undefined8 *)0x0) {
          plVar16 = (long *)puVar5[1];
          _objc_retain(puVar4);
          if (puVar4 == (undefined8 *)0x0) {
            puVar1 = (undefined8 *)&UNK_10f4a7fca;
          }
          else {
            puVar1 = puVar4;
            _objc_retainAutorelease(puVar4);
            func_0x00010bdc3520();
          }
          _objc_release(puVar4);
          func_0x000107c278b8(auStack_478,puVar1);
          _objc_retain(puVar9);
          if (puVar9 == (undefined8 *)0x0) {
            puVar1 = (undefined8 *)&UNK_10f4a7fca;
          }
          else {
            _objc_retainAutorelease(puVar9);
            puVar1 = puVar9;
            func_0x00010bdc3520(puVar9);
          }
          _objc_release(puVar9);
          func_0x000107c278b8(auStack_460,puVar1);
          uStack_498 = 0;
          uStack_490 = 0;
          uStack_488 = 0;
          func_0x000107c27984(&uStack_498,auStack_478,&lStack_448,2);
          puVar6 = (undefined8 *)&UNK_110a58750;
          (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110a58750,&uStack_498,puVar11);
          puStack_480 = &uStack_498;
          func_0x000107c278ac(&puStack_480);
          lVar14 = 0;
          do {
            if ((&cStack_449)[lVar14] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_460 + lVar14));
            }
            lVar14 = lVar14 + -0x18;
          } while (lVar14 != -0x30);
        }
        _objc_release(puVar9);
        puVar1 = puVar4;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_448) {
          ___stack_chk_fail();
          _objc_release(puVar9);
          if (cStack_461 < '\0') {
            __ZdlPv(auStack_478[0]);
          }
          _objc_release(puVar9);
          _objc_release(puVar4);
          __Unwind_Resume();
          puStack_4c8 = (undefined1 *)&uStack_4e0;
          pcStack_4a8 = FUN_1085aa2b0;
          if (puVar1 != (undefined8 *)0x0) {
            uStack_4e0 = 0;
            uStack_4d8 = 0;
            uStack_4d0 = 0;
            puStack_4c0 = puVar9;
            puStack_4b8 = puVar4;
            pppuStack_4b0 = &pppuStack_410;
            (**(code **)(*(long *)puVar1[1] + 0x18))
                      ((long *)puVar1[1],&UNK_110a587a0,&uStack_4e0,puVar6);
            func_0x000107c278ac(&puStack_4c8);
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1085a964c; end: 1085a987b;  */

void FUN_1085a964c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  undefined8 auStack_378 [2];
  char cStack_361;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined *puStack_328;
  undefined8 *puStack_320;
  undefined *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined *puStack_288;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar6 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110a58570;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a58570,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar12 = 0;
    puVar6 = auStack_78;
    puVar10 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar9 = &uStack_120;
  pcStack_a8 = FUN_1085a987c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar6;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar13 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f4a7fca;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_100;
    func_0x000107c278b8(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    puVar7 = &UNK_110a585c0;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a585c0,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    puVar8 = puVar9;
    puVar10 = puVar2;
    puVar6 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar8 = puVar9;
      puVar10 = puVar2;
      puVar6 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  pcStack_128 = FUN_1085a99f0;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar2 = puVar8;
  puVar9 = puVar10;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar6;
  plStack_148 = plVar13;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar6 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_198;
    func_0x000107c278b8(auStack_198,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_180,puVar2);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x000107c27984(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar4 = &UNK_110a58660;
    unaff_x23 = &uStack_1b8;
    puVar2 = &uStack_1b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a58660,puVar2,puVar10);
    puStack_1a0 = unaff_x23;
    func_0x000107c278ac(&puStack_1a0);
    lVar12 = 0;
    puVar6 = auStack_198;
    puVar9 = puVar10;
    do {
      if ((&cStack_169)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar5 = puVar1;
  __Unwind_Resume();
  pcStack_1c8 = FUN_1085a9c20;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar10 = puVar2;
  puVar11 = puVar9;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar6;
  puStack_1e8 = puVar1;
  puStack_1e0 = puVar8;
  puStack_1d8 = puVar7;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar4);
  _objc_retain(puVar2);
  puVar6 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_238;
    func_0x000107c278b8(auStack_238,puVar1);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar6 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_220,puVar6);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x000107c27984(&uStack_258,auStack_238,&lStack_208,2);
    puVar3 = &UNK_110a586b0;
    unaff_x23 = &uStack_258;
    puVar10 = &uStack_258;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a586b0,puVar10,puVar9);
    puStack_240 = unaff_x23;
    func_0x000107c278ac(&puStack_240);
    lVar12 = 0;
    puVar6 = auStack_238;
    puVar11 = puVar9;
    do {
      if ((&cStack_209)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_221 < '\0') {
    __ZdlPv(auStack_238[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar4);
  puVar5 = puVar1;
  __Unwind_Resume();
  pcStack_268 = FUN_1085a9e50;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puVar8 = puVar10;
  puVar9 = puVar11;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  puStack_290 = puVar6;
  puStack_288 = puVar1;
  puStack_280 = puVar2;
  puStack_278 = puVar4;
  pppuStack_270 = &pppuStack_1d0;
  _objc_retain(puVar3);
  _objc_retain(puVar10);
  puVar2 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x24 = auStack_2d8;
    func_0x000107c278b8(auStack_2d8,puVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar2 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x000107c278b8(auStack_2c0,puVar2);
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    func_0x000107c27984(&uStack_2f8,auStack_2d8,&lStack_2a8,2);
    puVar7 = &UNK_110a58700;
    unaff_x23 = &uStack_2f8;
    puVar8 = &uStack_2f8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a58700,puVar8,puVar11);
    puStack_2e0 = unaff_x23;
    func_0x000107c278ac(&puStack_2e0);
    lVar12 = 0;
    puVar2 = auStack_2d8;
    puVar9 = puVar11;
    do {
      if ((&cStack_2a9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2c0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar10);
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_2c1 < '\0') {
    __ZdlPv(auStack_2d8[0]);
  }
  _objc_release(puVar10);
  _objc_release(puVar3);
  puVar5 = puVar1;
  __Unwind_Resume();
  pcStack_308 = FUN_1085aa080;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puStack_340 = unaff_x24;
  puStack_338 = unaff_x23;
  puStack_330 = puVar2;
  puStack_328 = puVar1;
  puStack_320 = puVar10;
  puStack_318 = puVar3;
  pppuStack_310 = &pppuStack_270;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_378,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_360,puVar2);
    uStack_398 = 0;
    uStack_390 = 0;
    uStack_388 = 0;
    func_0x000107c27984(&uStack_398,auStack_378,&lStack_348,2);
    puVar4 = &UNK_110a58750;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a58750,&uStack_398,puVar9);
    puStack_380 = &uStack_398;
    func_0x000107c278ac(&puStack_380);
    lVar12 = 0;
    do {
      if ((&cStack_349)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_361 < '\0') {
    __ZdlPv(auStack_378[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  __Unwind_Resume();
  puStack_3c8 = (undefined1 *)&uStack_3e0;
  pcStack_3a8 = FUN_1085aa2b0;
  if (puVar1 != (undefined *)0x0) {
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    puStack_3c0 = puVar8;
    puStack_3b8 = puVar7;
    pppuStack_3b0 = &pppuStack_310;
    (**(code **)(**(long **)(puVar1 + 8) + 0x18))
              (*(long **)(puVar1 + 8),&UNK_110a587a0,&uStack_3e0,puVar4);
    func_0x000107c278ac(&puStack_3c8);
  }
  return;
}



/* Entry: 1085a987c; end: 1085a99ef;  */

void FUN_1085a987c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 *puStack_320;
  undefined *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined *puStack_288;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a585c0;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a585c0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1085a99f0;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar3 = puVar5;
  puVar10 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  puVar9 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a7fca;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x000107c278b8(auStack_f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x000107c278b8(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar6 = &UNK_110a58660;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a58660,puVar3,param_4);
    puStack_100 = unaff_x23;
    func_0x000107c278ac(&puStack_100);
    lVar13 = 0;
    puVar9 = auStack_f8;
    puVar10 = param_4;
    do {
      if ((&cStack_c9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_128 = FUN_1085a9c20;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar8 = puVar3;
  puVar11 = puVar10;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar9;
  puStack_148 = puVar2;
  puStack_140 = puVar5;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar6);
  _objc_retain(puVar3);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_198;
    func_0x000107c278b8(auStack_198,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_180,puVar5);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x000107c27984(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar7 = &UNK_110a586b0;
    unaff_x23 = &uStack_1b8;
    puVar8 = &uStack_1b8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a586b0,puVar8,puVar10);
    puStack_1a0 = unaff_x23;
    func_0x000107c278ac(&puStack_1a0);
    lVar13 = 0;
    puVar5 = auStack_198;
    puVar11 = puVar10;
    do {
      if ((&cStack_169)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar3);
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_1c8 = FUN_1085a9e50;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puVar9 = puVar8;
  puVar10 = puVar11;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar5;
  puStack_1e8 = puVar1;
  puStack_1e0 = puVar3;
  puStack_1d8 = puVar6;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_238;
    func_0x000107c278b8(auStack_238,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar5 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_220,puVar5);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x000107c27984(&uStack_258,auStack_238,&lStack_208,2);
    puVar2 = &UNK_110a58700;
    unaff_x23 = &uStack_258;
    puVar9 = &uStack_258;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a58700,puVar9,puVar11);
    puStack_240 = unaff_x23;
    func_0x000107c278ac(&puStack_240);
    lVar13 = 0;
    puVar5 = auStack_238;
    puVar10 = puVar11;
    do {
      if ((&cStack_209)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_221 < '\0') {
    __ZdlPv(auStack_238[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_268 = FUN_1085aa080;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  puStack_290 = puVar5;
  puStack_288 = puVar1;
  puStack_280 = puVar8;
  puStack_278 = puVar7;
  pppuStack_270 = &pppuStack_1d0;
  _objc_retain(puVar2);
  _objc_retain(puVar9);
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_2d8,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar5 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x000107c278b8(auStack_2c0,puVar5);
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    func_0x000107c27984(&uStack_2f8,auStack_2d8,&lStack_2a8,2);
    puVar6 = &UNK_110a58750;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a58750,&uStack_2f8,puVar10);
    puStack_2e0 = &uStack_2f8;
    func_0x000107c278ac(&puStack_2e0);
    lVar13 = 0;
    do {
      if ((&cStack_2a9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2c0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_2c1 < '\0') {
    __ZdlPv(auStack_2d8[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar2);
  __Unwind_Resume();
  puStack_328 = (undefined1 *)&uStack_340;
  pcStack_308 = FUN_1085aa2b0;
  if (puVar1 != (undefined *)0x0) {
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    puStack_320 = puVar9;
    puStack_318 = puVar2;
    pppuStack_310 = &pppuStack_270;
    (**(code **)(**(long **)(puVar1 + 8) + 0x18))
              (*(long **)(puVar1 + 8),&UNK_110a587a0,&uStack_340,puVar6);
    func_0x000107c278ac(&puStack_328);
  }
  return;
}



/* Entry: 1085a99f0; end: 1085a9c1f;  */

void FUN_1085a99f0(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  uVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110a58660;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a58660,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar12 = 0;
    puVar5 = auStack_78;
    uVar10 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_1085a9c20;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  uVar11 = uVar10;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f4a7fca;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x000107c278b8(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x000107c27984(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_110a586b0;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a586b0,puVar8,uVar10);
    puStack_120 = unaff_x23;
    func_0x000107c278ac(&puStack_120);
    lVar12 = 0;
    puVar5 = auStack_118;
    uVar11 = uVar10;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_1085a9e50;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar9 = puVar8;
  uVar10 = uVar11;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_1b8;
    func_0x000107c278b8(auStack_1b8,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_1a0,puVar2);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x000107c27984(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar4 = &UNK_110a58700;
    unaff_x23 = &uStack_1d8;
    puVar9 = &uStack_1d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a58700,puVar9,uVar11);
    puStack_1c0 = unaff_x23;
    func_0x000107c278ac(&puStack_1c0);
    lVar12 = 0;
    puVar2 = auStack_1b8;
    uVar10 = uVar11;
    do {
      if ((&cStack_189)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_1085aa080;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  puStack_210 = puVar2;
  puStack_208 = puVar1;
  puStack_200 = puVar8;
  puStack_1f8 = puVar7;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar4);
  _objc_retain(puVar9);
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_258,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x000107c278b8(auStack_240,puVar2);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x000107c27984(&uStack_278,auStack_258,&lStack_228,2);
    puVar3 = &UNK_110a58750;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a58750,&uStack_278,uVar10);
    puStack_260 = &uStack_278;
    func_0x000107c278ac(&puStack_260);
    lVar12 = 0;
    do {
      if ((&cStack_229)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar4);
  __Unwind_Resume();
  puStack_2a8 = (undefined1 *)&uStack_2c0;
  pcStack_288 = FUN_1085aa2b0;
  if (puVar1 != (undefined *)0x0) {
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    puStack_2a0 = puVar9;
    puStack_298 = puVar4;
    pppuStack_290 = &pppuStack_1f0;
    (**(code **)(**(long **)(puVar1 + 8) + 0x18))
              (*(long **)(puVar1 + 8),&UNK_110a587a0,&uStack_2c0,puVar3);
    func_0x000107c278ac(&puStack_2a8);
  }
  return;
}



/* Entry: 1085a9c20; end: 1085a9e4f;  */

void FUN_1085a9c20(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  uVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110a586b0;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a586b0,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar11 = 0;
    puVar5 = auStack_78;
    uVar9 = param_4;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_1085a9e50;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  uVar10 = uVar9;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f4a7fca;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x000107c278b8(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x000107c27984(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_110a58700;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a58700,puVar8,uVar9);
    puStack_120 = unaff_x23;
    func_0x000107c278ac(&puStack_120);
    lVar11 = 0;
    puVar5 = auStack_118;
    uVar10 = uVar9;
    do {
      if ((&cStack_e9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_1085aa080;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  if (puVar6 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_1b8,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_1a0,puVar2);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x000107c27984(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar4 = &UNK_110a58750;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a58750,&uStack_1d8,uVar10);
    puStack_1c0 = &uStack_1d8;
    func_0x000107c278ac(&puStack_1c0);
    lVar11 = 0;
    do {
      if ((&cStack_189)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  __Unwind_Resume();
  puStack_208 = (undefined1 *)&uStack_220;
  pcStack_1e8 = FUN_1085aa2b0;
  if (puVar1 != (undefined *)0x0) {
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    puStack_200 = puVar8;
    puStack_1f8 = puVar7;
    pppuStack_1f0 = &ppuStack_150;
    (**(code **)(**(long **)(puVar1 + 8) + 0x18))
              (*(long **)(puVar1 + 8),&UNK_110a587a0,&uStack_220,puVar4);
    func_0x000107c278ac(&puStack_208);
  }
  return;
}



/* Entry: 1085a9e50; end: 1085aa07f;  */

void FUN_1085a9e50(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  uVar7 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110a58700;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110a58700,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar8 = 0;
    puVar5 = auStack_78;
    uVar7 = param_4;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_1085aa080;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar4 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f4a7fca;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x000107c27984(&uStack_138,auStack_118,&lStack_e8,2);
    puVar6 = &UNK_110a58750;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110a58750,&uStack_138,uVar7);
    puStack_120 = &uStack_138;
    func_0x000107c278ac(&puStack_120);
    lVar8 = 0;
    do {
      if ((&cStack_e9)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Unwind_Resume();
  puStack_168 = (undefined1 *)&uStack_180;
  pcStack_148 = FUN_1085aa2b0;
  if (puVar3 != (undefined *)0x0) {
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    puStack_160 = puVar2;
    puStack_158 = puVar1;
    ppuStack_150 = &puStack_b0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110a587a0,&uStack_180,puVar6);
    func_0x000107c278ac(&puStack_168);
  }
  return;
}



/* Entry: 1085aa080; end: 1085aa2af;  */

void FUN_1085aa080(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110a58750;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110a58750,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x000107c278ac(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_1085aa2b0;
  if (puVar2 != (undefined *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    puStack_c0 = param_3;
    puStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar2 + 8) + 0x18))
              (*(long **)(puVar2 + 8),&UNK_110a587a0,&uStack_e0,puVar1);
    func_0x000107c278ac(&puStack_c8);
  }
  return;
}



/* Entry: 1085aa2b0; end: 1085aa327;  */

void FUN_1085aa2b0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110a587a0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 1085aa328; end: 1085aa5e7;  */

/* WARNING: Removing unreachable block (ram,0x0001085aab30) */
/* WARNING: Removing unreachable block (ram,0x0001085aa5b0) */
/* WARNING: Removing unreachable block (ram,0x0001085aa870) */
/* WARNING: Removing unreachable block (ram,0x0001085aadf0) */

void FUN_1085aa328(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *unaff_x24;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined1 *puStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 *puStack_480;
  undefined8 auStack_478 [2];
  char cStack_461;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined *puStack_430;
  long *plStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined *puStack_3b0;
  long *plStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [3];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [3];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar4 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar7 = param_3;
  puVar5 = param_4;
  puVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_110a587f0;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar12 = 0;
    puVar7 = (undefined *)puVar4;
    puVar5 = param_5;
    do {
      if ((&cStack_59)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar12 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar4 = &uStack_180;
  pcStack_c8 = FUN_1085aa5e8;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar8 = puVar7;
  puVar11 = puVar5;
  puVar9 = puVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  _objc_retain(puVar5);
  if (puVar2 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a7fca;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_160,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar2 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_148,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar2 = puVar5;
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x000107c278b8(auStack_130,puVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_118,3);
    puVar6 = &UNK_110a58840;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar12 = 0;
    puVar8 = (undefined *)puVar4;
    puVar11 = puVar3;
    do {
      if ((&cStack_119)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = &uStack_180;
    } while (lVar12 != -0x48);
  }
  _objc_release(puVar5);
  _objc_release(puVar7);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(puVar5);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != auStack_160);
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(puVar1);
    __Unwind_Resume();
    puVar4 = &uStack_240;
    pcStack_188 = FUN_1085aa8a8;
    lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = puVar6;
    puVar7 = puVar8;
    puVar5 = puVar11;
    puVar2 = puVar9;
    ppuStack_190 = &puStack_d0;
    _objc_retain(puVar6);
    _objc_retain(puVar8);
    _objc_retain(puVar11);
    if (puVar3 != (undefined *)0x0) {
      plVar13 = *(long **)(puVar3 + 8);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar1 = &UNK_10f4a7fca;
      }
      else {
        puVar1 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      func_0x000107c278b8(auStack_220,puVar1);
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar1 = &UNK_10f4a7fca;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar1 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x000107c278b8(auStack_208,puVar1);
      _objc_retain(puVar11);
      if (puVar11 == (undefined *)0x0) {
        puVar1 = &UNK_10f4a7fca;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar1 = puVar11;
        func_0x00010bdc3520();
      }
      _objc_release(puVar11);
      func_0x000107c278b8(auStack_1f0,puVar1);
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_230 = 0;
      func_0x000107c27984(&uStack_240,auStack_220,&lStack_1d8,3);
      puVar1 = &UNK_110a58890;
      (**(code **)(*plVar13 + 0x18))(plVar13);
      puStack_228 = (undefined1 *)&uStack_240;
      func_0x000107c278ac(&puStack_228);
      lVar12 = 0;
      puVar7 = (undefined *)puVar4;
      puVar5 = puVar9;
      do {
        if ((&cStack_1d9)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
        unaff_x24 = &uStack_240;
      } while (lVar12 != -0x48);
    }
    _objc_release(puVar11);
    _objc_release(puVar8);
    puVar3 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
      ___stack_chk_fail();
      _objc_release(puVar11);
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != auStack_220);
      _objc_release(puVar11);
      _objc_release(puVar8);
      _objc_release(puVar6);
      __Unwind_Resume();
      puVar4 = &uStack_300;
      pcStack_248 = FUN_1085aab68;
      lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar6 = puVar1;
      puVar8 = puVar7;
      puVar11 = puVar5;
      pppuStack_250 = &ppuStack_190;
      _objc_retain(puVar1);
      _objc_retain(puVar7);
      _objc_retain(puVar5);
      if (puVar3 != (undefined *)0x0) {
        plVar13 = *(long **)(puVar3 + 8);
        _objc_retain(puVar1);
        if (puVar1 == (undefined *)0x0) {
          puVar3 = &UNK_10f4a7fca;
        }
        else {
          puVar3 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
        }
        _objc_release(puVar1);
        func_0x000107c278b8(auStack_2e0,puVar3);
        _objc_retain(puVar7);
        if (puVar7 == (undefined *)0x0) {
          puVar3 = &UNK_10f4a7fca;
        }
        else {
          _objc_retainAutorelease(puVar7);
          puVar3 = puVar7;
          func_0x00010bdc3520(puVar7);
        }
        _objc_release(puVar7);
        func_0x000107c278b8(auStack_2c8,puVar3);
        _objc_retain(puVar5);
        if (puVar5 == (undefined *)0x0) {
          puVar3 = &UNK_10f4a7fca;
        }
        else {
          _objc_retainAutorelease(puVar5);
          puVar3 = puVar5;
          func_0x00010bdc3520(puVar5);
        }
        _objc_release(puVar5);
        func_0x000107c278b8(auStack_2b0,puVar3);
        uStack_300 = 0;
        uStack_2f8 = 0;
        uStack_2f0 = 0;
        func_0x000107c27984(&uStack_300,auStack_2e0,&lStack_298,3);
        puVar6 = &UNK_110a588e0;
        (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a588e0,&uStack_300,puVar2);
        puStack_2e8 = (undefined1 *)&uStack_300;
        func_0x000107c278ac(&puStack_2e8);
        lVar12 = 0;
        puVar8 = (undefined *)puVar4;
        puVar11 = puVar2;
        do {
          if ((&cStack_299)[lVar12] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar12));
          }
          lVar12 = lVar12 + -0x18;
          unaff_x24 = &uStack_300;
        } while (lVar12 != -0x48);
      }
      _objc_release(puVar5);
      _objc_release(puVar7);
      puVar4 = (undefined8 *)puVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
        ___stack_chk_fail();
        _objc_release(puVar5);
        puVar14 = auStack_2e0;
        do {
          unaff_x24 = unaff_x24 + -3;
        } while (unaff_x24 != puVar14);
        _objc_release(puVar5);
        _objc_release(puVar7);
        _objc_release(puVar1);
        puVar2 = (undefined *)puVar4;
        __Unwind_Resume();
        puVar10 = &uStack_380;
        pcStack_308 = FUN_1085aae28;
        lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar3 = puVar6;
        puVar9 = puVar8;
        puStack_340 = unaff_x24;
        puStack_338 = puVar14;
        puStack_330 = (undefined *)puVar4;
        puStack_328 = puVar5;
        puStack_320 = puVar7;
        puStack_318 = puVar1;
        pppuStack_310 = &pppuStack_250;
        _objc_retain(puVar6);
        plVar13 = (long *)0x0;
        if (puVar2 != (undefined *)0x0) {
          plVar13 = *(long **)(puVar2 + 8);
          _objc_retain(puVar6);
          if (puVar6 == (undefined *)0x0) {
            puVar1 = &UNK_10f4a7fca;
          }
          else {
            puVar1 = puVar6;
            _objc_retainAutorelease(puVar6);
            func_0x00010bdc3520();
          }
          _objc_release(puVar6);
          puVar14 = auStack_360;
          func_0x000107c278b8(auStack_360,puVar1);
          uStack_380 = 0;
          uStack_378 = 0;
          uStack_370 = 0;
          func_0x000107c27984(&uStack_380,auStack_360,&lStack_348,1);
          puVar3 = &UNK_110a58930;
          (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a58930,&uStack_380,puVar8);
          puStack_368 = (undefined1 *)&uStack_380;
          func_0x000107c278ac(&puStack_368);
          puVar9 = (undefined *)puVar10;
          puVar11 = puVar8;
          puVar4 = &uStack_380;
          if (cStack_349 < '\0') {
            __ZdlPv(auStack_360[0]);
            puVar9 = (undefined *)puVar10;
            puVar11 = puVar8;
            puVar4 = &uStack_380;
          }
        }
        puVar1 = puVar6;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_348) {
          ___stack_chk_fail();
          _objc_release(puVar6);
          _objc_release(puVar6);
          puVar5 = puVar1;
          __Unwind_Resume();
          puVar10 = &uStack_400;
          pcStack_388 = FUN_1085aaf9c;
          lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar7 = puVar3;
          puVar2 = puVar9;
          puStack_3c0 = unaff_x24;
          puStack_3b8 = puVar14;
          puStack_3b0 = (undefined *)puVar4;
          plStack_3a8 = plVar13;
          puStack_3a0 = puVar1;
          puStack_398 = puVar6;
          pppuStack_390 = &pppuStack_310;
          _objc_retain(puVar3);
          plVar13 = (long *)0x0;
          if (puVar5 != (undefined *)0x0) {
            plVar13 = *(long **)(puVar5 + 8);
            _objc_retain(puVar3);
            if (puVar3 == (undefined *)0x0) {
              puVar1 = &UNK_10f4a7fca;
            }
            else {
              puVar1 = puVar3;
              _objc_retainAutorelease(puVar3);
              func_0x00010bdc3520();
            }
            _objc_release(puVar3);
            puVar14 = auStack_3e0;
            func_0x000107c278b8(auStack_3e0,puVar1);
            uStack_400 = 0;
            uStack_3f8 = 0;
            uStack_3f0 = 0;
            func_0x000107c27984(&uStack_400,auStack_3e0,&lStack_3c8,1);
            puVar7 = &UNK_110a58980;
            (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a58980,&uStack_400,puVar9);
            puStack_3e8 = (undefined1 *)&uStack_400;
            func_0x000107c278ac(&puStack_3e8);
            puVar2 = (undefined *)puVar10;
            puVar11 = puVar9;
            puVar4 = &uStack_400;
            if (cStack_3c9 < '\0') {
              __ZdlPv(auStack_3e0[0]);
              puVar2 = (undefined *)puVar10;
              puVar11 = puVar9;
              puVar4 = &uStack_400;
            }
          }
          puVar1 = puVar3;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3c8) {
            ___stack_chk_fail();
            _objc_release(puVar3);
            _objc_release(puVar3);
            puVar6 = puVar1;
            __Unwind_Resume();
            pcStack_408 = FUN_1085ab110;
            lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puVar5 = puVar7;
            puStack_440 = unaff_x24;
            puStack_438 = puVar14;
            puStack_430 = (undefined *)puVar4;
            plStack_428 = plVar13;
            puStack_420 = puVar1;
            puStack_418 = puVar3;
            pppuStack_410 = &pppuStack_390;
            _objc_retain(puVar7);
            _objc_retain(puVar2);
            if (puVar6 != (undefined *)0x0) {
              plVar13 = *(long **)(puVar6 + 8);
              _objc_retain(puVar7);
              if (puVar7 == (undefined *)0x0) {
                puVar1 = &UNK_10f4a7fca;
              }
              else {
                puVar1 = puVar7;
                _objc_retainAutorelease(puVar7);
                func_0x00010bdc3520();
              }
              _objc_release(puVar7);
              func_0x000107c278b8(auStack_478,puVar1);
              _objc_retain(puVar2);
              if (puVar2 == (undefined *)0x0) {
                puVar1 = &UNK_10f4a7fca;
              }
              else {
                _objc_retainAutorelease(puVar2);
                puVar1 = puVar2;
                func_0x00010bdc3520(puVar2);
              }
              _objc_release(puVar2);
              func_0x000107c278b8(auStack_460,puVar1);
              uStack_498 = 0;
              uStack_490 = 0;
              uStack_488 = 0;
              func_0x000107c27984(&uStack_498,auStack_478,&lStack_448,2);
              puVar5 = &UNK_110a589d0;
              (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a589d0,&uStack_498,puVar11);
              puStack_480 = &uStack_498;
              func_0x000107c278ac(&puStack_480);
              lVar12 = 0;
              do {
                if ((&cStack_449)[lVar12] < '\0') {
                  __ZdlPv(*(undefined8 *)((long)auStack_460 + lVar12));
                }
                lVar12 = lVar12 + -0x18;
              } while (lVar12 != -0x30);
            }
            _objc_release(puVar2);
            puVar1 = puVar7;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_448) {
              ___stack_chk_fail();
              _objc_release(puVar2);
              if (cStack_461 < '\0') {
                __ZdlPv(auStack_478[0]);
              }
              _objc_release(puVar2);
              _objc_release(puVar7);
              __Unwind_Resume();
              puStack_4c8 = (undefined1 *)&uStack_4e0;
              pcStack_4a8 = FUN_1085ab340;
              if (puVar1 != (undefined *)0x0) {
                uStack_4e0 = 0;
                uStack_4d8 = 0;
                uStack_4d0 = 0;
                puStack_4c0 = puVar2;
                puStack_4b8 = puVar7;
                pppuStack_4b0 = &pppuStack_410;
                (**(code **)(**(long **)(puVar1 + 8) + 0x18))
                          (*(long **)(puVar1 + 8),&UNK_110a58b10,&uStack_4e0,puVar5);
                func_0x000107c278ac(&puStack_4c8);
              }
              return;
            }
            return;
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1085aa5e8; end: 1085aa8a7;  */

/* WARNING: Removing unreachable block (ram,0x0001085aab30) */
/* WARNING: Removing unreachable block (ram,0x0001085aa870) */
/* WARNING: Removing unreachable block (ram,0x0001085aadf0) */

void FUN_1085aa5e8(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *unaff_x24;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 auStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined *puStack_370;
  long *plStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined *puStack_2f0;
  long *plStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [3];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar4 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar6 = param_3;
  puVar5 = param_4;
  puVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_110a58840;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar12 = 0;
    puVar6 = (undefined *)puVar4;
    puVar5 = param_5;
    do {
      if ((&cStack_59)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar12 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar4 = &uStack_180;
  pcStack_c8 = FUN_1085aa8a8;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar6;
  puVar11 = puVar5;
  puVar9 = puVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  if (puVar2 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a7fca;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_160,puVar2);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar2 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_148,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar2 = puVar5;
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x000107c278b8(auStack_130,puVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_118,3);
    puVar7 = &UNK_110a58890;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar12 = 0;
    puVar8 = (undefined *)puVar4;
    puVar11 = puVar3;
    do {
      if ((&cStack_119)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = &uStack_180;
    } while (lVar12 != -0x48);
  }
  _objc_release(puVar5);
  _objc_release(puVar6);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_160);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar4 = &uStack_240;
  pcStack_188 = FUN_1085aab68;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar6 = puVar8;
  puVar5 = puVar11;
  ppuStack_190 = &puStack_d0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  _objc_retain(puVar11);
  if (puVar3 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_220,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar1 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_208,puVar1);
    _objc_retain(puVar11);
    if (puVar11 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar1 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x000107c278b8(auStack_1f0,puVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x000107c27984(&uStack_240,auStack_220,&lStack_1d8,3);
    puVar1 = &UNK_110a588e0;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a588e0,&uStack_240,puVar9);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x000107c278ac(&puStack_228);
    lVar12 = 0;
    puVar6 = (undefined *)puVar4;
    puVar5 = puVar9;
    do {
      if ((&cStack_1d9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = &uStack_240;
    } while (lVar12 != -0x48);
  }
  _objc_release(puVar11);
  _objc_release(puVar8);
  puVar4 = (undefined8 *)puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  puVar14 = auStack_220;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar14);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar2 = (undefined *)puVar4;
  __Unwind_Resume();
  puVar10 = &uStack_2c0;
  pcStack_248 = FUN_1085aae28;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar9 = puVar6;
  puStack_280 = unaff_x24;
  puStack_278 = puVar14;
  puStack_270 = (undefined *)puVar4;
  puStack_268 = puVar11;
  puStack_260 = puVar8;
  puStack_258 = puVar7;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(puVar1);
  plVar13 = (long *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar5 = &UNK_10f4a7fca;
    }
    else {
      puVar5 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    puVar14 = auStack_2a0;
    func_0x000107c278b8(auStack_2a0,puVar5);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x000107c27984(&uStack_2c0,auStack_2a0,&lStack_288,1);
    puVar3 = &UNK_110a58930;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a58930,&uStack_2c0,puVar6);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x000107c278ac(&puStack_2a8);
    puVar9 = (undefined *)puVar10;
    puVar5 = puVar6;
    puVar4 = &uStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      puVar9 = (undefined *)puVar10;
      puVar5 = puVar6;
      puVar4 = &uStack_2c0;
    }
  }
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar7 = puVar6;
  __Unwind_Resume();
  puVar10 = &uStack_340;
  pcStack_2c8 = FUN_1085aaf9c;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar3;
  puVar8 = puVar9;
  puStack_300 = unaff_x24;
  puStack_2f8 = puVar14;
  puStack_2f0 = (undefined *)puVar4;
  plStack_2e8 = plVar13;
  puStack_2e0 = puVar6;
  puStack_2d8 = puVar1;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(puVar3);
  plVar13 = (long *)0x0;
  if (puVar7 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar7 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    puVar14 = auStack_320;
    func_0x000107c278b8(auStack_320,puVar1);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x000107c27984(&uStack_340,auStack_320,&lStack_308,1);
    puVar2 = &UNK_110a58980;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a58980,&uStack_340,puVar9);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x000107c278ac(&puStack_328);
    puVar8 = (undefined *)puVar10;
    puVar5 = puVar9;
    puVar4 = &uStack_340;
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
      puVar8 = (undefined *)puVar10;
      puVar5 = puVar9;
      puVar4 = &uStack_340;
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_308) {
    ___stack_chk_fail();
    _objc_release(puVar3);
    _objc_release(puVar3);
    puVar7 = puVar1;
    __Unwind_Resume();
    pcStack_348 = FUN_1085ab110;
    lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = puVar2;
    puStack_380 = unaff_x24;
    puStack_378 = puVar14;
    puStack_370 = (undefined *)puVar4;
    plStack_368 = plVar13;
    puStack_360 = puVar1;
    puStack_358 = puVar3;
    pppuStack_350 = &pppuStack_2d0;
    _objc_retain(puVar2);
    _objc_retain(puVar8);
    if (puVar7 != (undefined *)0x0) {
      plVar13 = *(long **)(puVar7 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar1 = &UNK_10f4a7fca;
      }
      else {
        puVar1 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x000107c278b8(auStack_3b8,puVar1);
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar1 = &UNK_10f4a7fca;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar1 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x000107c278b8(auStack_3a0,puVar1);
      uStack_3d8 = 0;
      uStack_3d0 = 0;
      uStack_3c8 = 0;
      func_0x000107c27984(&uStack_3d8,auStack_3b8,&lStack_388,2);
      puVar6 = &UNK_110a589d0;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a589d0,&uStack_3d8,puVar5);
      puStack_3c0 = &uStack_3d8;
      func_0x000107c278ac(&puStack_3c0);
      lVar12 = 0;
      do {
        if ((&cStack_389)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x30);
    }
    _objc_release(puVar8);
    puVar1 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_388) {
      ___stack_chk_fail();
      _objc_release(puVar8);
      if (cStack_3a1 < '\0') {
        __ZdlPv(auStack_3b8[0]);
      }
      _objc_release(puVar8);
      _objc_release(puVar2);
      __Unwind_Resume();
      puStack_408 = (undefined1 *)&uStack_420;
      pcStack_3e8 = FUN_1085ab340;
      if (puVar1 != (undefined *)0x0) {
        uStack_420 = 0;
        uStack_418 = 0;
        uStack_410 = 0;
        puStack_400 = puVar8;
        puStack_3f8 = puVar2;
        pppuStack_3f0 = &pppuStack_350;
        (**(code **)(**(long **)(puVar1 + 8) + 0x18))
                  (*(long **)(puVar1 + 8),&UNK_110a58b10,&uStack_420,puVar6);
        func_0x000107c278ac(&puStack_408);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1085aa8a8; end: 1085aab67;  */

/* WARNING: Removing unreachable block (ram,0x0001085aab30) */
/* WARNING: Removing unreachable block (ram,0x0001085aadf0) */

void FUN_1085aa8a8(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *unaff_x24;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined *puStack_2b0;
  long *plStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined *puStack_230;
  long *plStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar3 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar7 = param_3;
  puVar4 = param_4;
  puVar6 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_110a58890;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar12 = 0;
    puVar7 = (undefined *)puVar3;
    puVar4 = param_5;
    do {
      if ((&cStack_59)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar12 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar3 = &uStack_180;
  pcStack_c8 = FUN_1085aab68;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar8 = puVar7;
  puVar11 = puVar4;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  _objc_retain(puVar4);
  if (puVar2 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a7fca;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_160,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar2 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_148,puVar2);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_130,puVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_118,3);
    puVar5 = &UNK_110a588e0;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a588e0,&uStack_180,puVar6);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar12 = 0;
    puVar8 = (undefined *)puVar3;
    puVar11 = puVar6;
    do {
      if ((&cStack_119)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = &uStack_180;
    } while (lVar12 != -0x48);
  }
  _objc_release(puVar4);
  _objc_release(puVar7);
  puVar3 = (undefined8 *)puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  puVar14 = auStack_160;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar14);
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar2 = (undefined *)puVar3;
  __Unwind_Resume();
  puVar10 = &uStack_200;
  pcStack_188 = FUN_1085aae28;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puVar9 = puVar8;
  puStack_1c0 = unaff_x24;
  puStack_1b8 = puVar14;
  puStack_1b0 = (undefined *)puVar3;
  puStack_1a8 = puVar4;
  puStack_1a0 = puVar7;
  puStack_198 = puVar1;
  ppuStack_190 = &puStack_d0;
  _objc_retain(puVar5);
  plVar13 = (long *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar2 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    puVar14 = auStack_1e0;
    func_0x000107c278b8(auStack_1e0,puVar1);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x000107c27984(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar6 = &UNK_110a58930;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a58930,&uStack_200,puVar8);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x000107c278ac(&puStack_1e8);
    puVar9 = (undefined *)puVar10;
    puVar11 = puVar8;
    puVar3 = &uStack_200;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar9 = (undefined *)puVar10;
      puVar11 = puVar8;
      puVar3 = &uStack_200;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
    ___stack_chk_fail();
    _objc_release(puVar5);
    _objc_release(puVar5);
    puVar4 = puVar1;
    __Unwind_Resume();
    puVar10 = &uStack_280;
    pcStack_208 = FUN_1085aaf9c;
    lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = puVar6;
    puVar2 = puVar9;
    puStack_240 = unaff_x24;
    puStack_238 = puVar14;
    puStack_230 = (undefined *)puVar3;
    plStack_228 = plVar13;
    puStack_220 = puVar1;
    puStack_218 = puVar5;
    pppuStack_210 = &ppuStack_190;
    _objc_retain(puVar6);
    plVar13 = (long *)0x0;
    if (puVar4 != (undefined *)0x0) {
      plVar13 = *(long **)(puVar4 + 8);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar1 = &UNK_10f4a7fca;
      }
      else {
        puVar1 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      puVar14 = auStack_260;
      func_0x000107c278b8(auStack_260,puVar1);
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_270 = 0;
      func_0x000107c27984(&uStack_280,auStack_260,&lStack_248,1);
      puVar7 = &UNK_110a58980;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a58980,&uStack_280,puVar9);
      puStack_268 = (undefined1 *)&uStack_280;
      func_0x000107c278ac(&puStack_268);
      puVar2 = (undefined *)puVar10;
      puVar11 = puVar9;
      puVar3 = &uStack_280;
      if (cStack_249 < '\0') {
        __ZdlPv(auStack_260[0]);
        puVar2 = (undefined *)puVar10;
        puVar11 = puVar9;
        puVar3 = &uStack_280;
      }
    }
    puVar1 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
      ___stack_chk_fail();
      _objc_release(puVar6);
      _objc_release(puVar6);
      puVar5 = puVar1;
      __Unwind_Resume();
      pcStack_288 = FUN_1085ab110;
      lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar4 = puVar7;
      puStack_2c0 = unaff_x24;
      puStack_2b8 = puVar14;
      puStack_2b0 = (undefined *)puVar3;
      plStack_2a8 = plVar13;
      puStack_2a0 = puVar1;
      puStack_298 = puVar6;
      pppuStack_290 = &pppuStack_210;
      _objc_retain(puVar7);
      _objc_retain(puVar2);
      if (puVar5 != (undefined *)0x0) {
        plVar13 = *(long **)(puVar5 + 8);
        _objc_retain(puVar7);
        if (puVar7 == (undefined *)0x0) {
          puVar1 = &UNK_10f4a7fca;
        }
        else {
          puVar1 = puVar7;
          _objc_retainAutorelease(puVar7);
          func_0x00010bdc3520();
        }
        _objc_release(puVar7);
        func_0x000107c278b8(auStack_2f8,puVar1);
        _objc_retain(puVar2);
        if (puVar2 == (undefined *)0x0) {
          puVar1 = &UNK_10f4a7fca;
        }
        else {
          _objc_retainAutorelease(puVar2);
          puVar1 = puVar2;
          func_0x00010bdc3520(puVar2);
        }
        _objc_release(puVar2);
        func_0x000107c278b8(auStack_2e0,puVar1);
        uStack_318 = 0;
        uStack_310 = 0;
        uStack_308 = 0;
        func_0x000107c27984(&uStack_318,auStack_2f8,&lStack_2c8,2);
        puVar4 = &UNK_110a589d0;
        (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a589d0,&uStack_318,puVar11);
        puStack_300 = &uStack_318;
        func_0x000107c278ac(&puStack_300);
        lVar12 = 0;
        do {
          if ((&cStack_2c9)[lVar12] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar12));
          }
          lVar12 = lVar12 + -0x18;
        } while (lVar12 != -0x30);
      }
      _objc_release(puVar2);
      puVar1 = puVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) {
        ___stack_chk_fail();
        _objc_release(puVar2);
        if (cStack_2e1 < '\0') {
          __ZdlPv(auStack_2f8[0]);
        }
        _objc_release(puVar2);
        _objc_release(puVar7);
        __Unwind_Resume();
        puStack_348 = (undefined1 *)&uStack_360;
        pcStack_328 = FUN_1085ab340;
        if (puVar1 != (undefined *)0x0) {
          uStack_360 = 0;
          uStack_358 = 0;
          uStack_350 = 0;
          puStack_340 = puVar2;
          puStack_338 = puVar7;
          pppuStack_330 = &pppuStack_290;
          (**(code **)(**(long **)(puVar1 + 8) + 0x18))
                    (*(long **)(puVar1 + 8),&UNK_110a58b10,&uStack_360,puVar4);
          func_0x000107c278ac(&puStack_348);
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1085aab68; end: 1085aae27;  */

/* WARNING: Removing unreachable block (ram,0x0001085aadf0) */

void FUN_1085aab68(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x24;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined *puStack_1f0;
  long *plStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined *puStack_170;
  long *plStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar2 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  puVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_110a588e0;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a588e0,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar11 = 0;
    puVar5 = (undefined *)puVar2;
    puVar4 = param_5;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar11 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = (undefined8 *)param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puVar13 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar13);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar3 = (undefined *)puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_140;
  pcStack_c8 = FUN_1085aae28;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar7 = puVar5;
  puStack_100 = unaff_x24;
  puStack_f8 = puVar13;
  puStack_f0 = (undefined *)puVar2;
  puStack_e8 = param_4;
  puStack_e0 = param_3;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar12 = (long *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar4 = &UNK_10f4a7fca;
    }
    else {
      puVar4 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    puVar13 = auStack_120;
    func_0x000107c278b8(auStack_120,puVar4);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x000107c27984(&uStack_140,auStack_120,&lStack_108,1);
    puVar8 = &UNK_110a58930;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a58930,&uStack_140,puVar5);
    puStack_128 = (undefined1 *)&uStack_140;
    func_0x000107c278ac(&puStack_128);
    puVar7 = (undefined *)puVar9;
    puVar4 = puVar5;
    puVar2 = &uStack_140;
    if (cStack_109 < '\0') {
      __ZdlPv(auStack_120[0]);
      puVar7 = (undefined *)puVar9;
      puVar4 = puVar5;
      puVar2 = &uStack_140;
    }
  }
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar6 = puVar5;
  __Unwind_Resume();
  puVar9 = &uStack_1c0;
  pcStack_148 = FUN_1085aaf9c;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar8;
  puVar10 = puVar7;
  puStack_180 = unaff_x24;
  puStack_178 = puVar13;
  puStack_170 = (undefined *)puVar2;
  plStack_168 = plVar12;
  puStack_160 = puVar5;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_d0;
  _objc_retain(puVar8);
  plVar12 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar6 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    puVar13 = auStack_1a0;
    func_0x000107c278b8(auStack_1a0,puVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x000107c27984(&uStack_1c0,auStack_1a0,&lStack_188,1);
    puVar3 = &UNK_110a58980;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a58980,&uStack_1c0,puVar7);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x000107c278ac(&puStack_1a8);
    puVar10 = (undefined *)puVar9;
    puVar4 = puVar7;
    puVar2 = &uStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar10 = (undefined *)puVar9;
      puVar4 = puVar7;
      puVar2 = &uStack_1c0;
    }
  }
  puVar1 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
    ___stack_chk_fail();
    _objc_release(puVar8);
    _objc_release(puVar8);
    puVar7 = puVar1;
    __Unwind_Resume();
    pcStack_1c8 = FUN_1085ab110;
    lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = puVar3;
    puStack_200 = unaff_x24;
    puStack_1f8 = puVar13;
    puStack_1f0 = (undefined *)puVar2;
    plStack_1e8 = plVar12;
    puStack_1e0 = puVar1;
    puStack_1d8 = puVar8;
    pppuStack_1d0 = &ppuStack_150;
    _objc_retain(puVar3);
    _objc_retain(puVar10);
    if (puVar7 != (undefined *)0x0) {
      plVar12 = *(long **)(puVar7 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f4a7fca;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x000107c278b8(auStack_238,puVar1);
      _objc_retain(puVar10);
      if (puVar10 == (undefined *)0x0) {
        puVar1 = &UNK_10f4a7fca;
      }
      else {
        _objc_retainAutorelease(puVar10);
        puVar1 = puVar10;
        func_0x00010bdc3520(puVar10);
      }
      _objc_release(puVar10);
      func_0x000107c278b8(auStack_220,puVar1);
      uStack_258 = 0;
      uStack_250 = 0;
      uStack_248 = 0;
      func_0x000107c27984(&uStack_258,auStack_238,&lStack_208,2);
      puVar5 = &UNK_110a589d0;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a589d0,&uStack_258,puVar4);
      puStack_240 = &uStack_258;
      func_0x000107c278ac(&puStack_240);
      lVar11 = 0;
      do {
        if ((&cStack_209)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x30);
    }
    _objc_release(puVar10);
    puVar1 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_208) {
      ___stack_chk_fail();
      _objc_release(puVar10);
      if (cStack_221 < '\0') {
        __ZdlPv(auStack_238[0]);
      }
      _objc_release(puVar10);
      _objc_release(puVar3);
      __Unwind_Resume();
      puStack_288 = (undefined1 *)&uStack_2a0;
      pcStack_268 = FUN_1085ab340;
      if (puVar1 != (undefined *)0x0) {
        uStack_2a0 = 0;
        uStack_298 = 0;
        uStack_290 = 0;
        puStack_280 = puVar10;
        puStack_278 = puVar3;
        pppuStack_270 = &pppuStack_1d0;
        (**(code **)(**(long **)(puVar1 + 8) + 0x18))
                  (*(long **)(puVar1 + 8),&UNK_110a58b10,&uStack_2a0,puVar5);
        func_0x000107c278ac(&puStack_288);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1085aae28; end: 1085aaf9b;  */

void FUN_1085aae28(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a58930;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a58930,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar3 = (undefined *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar5;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  pcStack_88 = FUN_1085aaf9c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar6 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a7fca;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_110a58980;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a58980,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar6 = (undefined *)puVar5;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined *)puVar5;
      param_4 = puVar3;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_1085ab110;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar4;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar4);
  _objc_retain(puVar6);
  if (puVar3 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar3 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_178,puVar1);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar1 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x000107c27984(&uStack_198,auStack_178,&lStack_148,2);
    puVar1 = &UNK_110a589d0;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a589d0,&uStack_198,param_4);
    puStack_180 = &uStack_198;
    func_0x000107c278ac(&puStack_180);
    lVar8 = 0;
    do {
      if ((&cStack_149)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(puVar6);
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(puVar6);
  _objc_release(puVar4);
  __Unwind_Resume();
  puStack_1c8 = (undefined1 *)&uStack_1e0;
  pcStack_1a8 = FUN_1085ab340;
  if (puVar3 != (undefined *)0x0) {
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    puStack_1c0 = puVar6;
    puStack_1b8 = puVar4;
    pppuStack_1b0 = &ppuStack_110;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110a58b10,&uStack_1e0,puVar1);
    func_0x000107c278ac(&puStack_1c8);
  }
  return;
}



/* Entry: 1085aaf9c; end: 1085ab10f;  */

void FUN_1085aaf9c(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a58980;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110a58980,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar4 = (undefined *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined *)puVar5;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1085ab110;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar4);
  if (puVar2 != (undefined *)0x0) {
    plVar6 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a7fca;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_f8,puVar2);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar3 = &UNK_110a589d0;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110a589d0,&uStack_118,param_4);
    puStack_100 = &uStack_118;
    func_0x000107c278ac(&puStack_100);
    lVar7 = 0;
    do {
      if ((&cStack_c9)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(puVar4);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
  __Unwind_Resume();
  puStack_148 = (undefined1 *)&uStack_160;
  pcStack_128 = FUN_1085ab340;
  if (puVar2 != (undefined *)0x0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    puStack_140 = puVar4;
    puStack_138 = puVar1;
    ppuStack_130 = &puStack_90;
    (**(code **)(**(long **)(puVar2 + 8) + 0x18))
              (*(long **)(puVar2 + 8),&UNK_110a58b10,&uStack_160,puVar3);
    func_0x000107c278ac(&puStack_148);
  }
  return;
}



/* Entry: 1085ab110; end: 1085ab33f;  */

void FUN_1085ab110(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110a589d0;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110a589d0,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x000107c278ac(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_1085ab340;
  if (puVar2 != (undefined *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    puStack_c0 = param_3;
    puStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar2 + 8) + 0x18))
              (*(long **)(puVar2 + 8),&UNK_110a58b10,&uStack_e0,puVar1);
    func_0x000107c278ac(&puStack_c8);
  }
  return;
}



/* Entry: 1085ab340; end: 1085ab3b7;  */

void FUN_1085ab340(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110a58b10,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 1085ab3b8; end: 1085ab52b;  */

void FUN_1085ab3b8(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a58b60;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a58b60,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1085ab52c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f4a7fca;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_110a58bb0;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a58bb0,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_1085ab6a0;
  if (puVar3 != (undefined *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    puStack_120 = puVar2;
    puStack_118 = puVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110a58c00,&uStack_140,puVar4);
    func_0x000107c278ac(&puStack_128);
  }
  return;
}



/* Entry: 1085ab52c; end: 1085ab69f;  */

void FUN_1085ab52c(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a58bb0;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110a58bb0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_1085ab6a0;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110a58c00,&uStack_c0,puVar1);
    func_0x000107c278ac(&puStack_a8);
  }
  return;
}



/* Entry: 1085ab6a0; end: 1085ab717;  */

void FUN_1085ab6a0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110a58c00,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 1085ab718; end: 1085ab88b;  */

void FUN_1085ab718(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f4a7fca;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a58c50;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110a58c50,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_1085ab88c;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110a58ca0,&uStack_c0,puVar1);
    func_0x000107c278ac(&puStack_a8);
  }
  return;
}



/* Entry: 1085ab88c; end: 1085ab903;  */

void FUN_1085ab88c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110a58ca0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 1085ab904; end: 1085ab907; -[SCNativeLoggerDefault logTimedEvent:interval:params:] */

void FUN_1085ab904(void)

{
  return;
}



/* Entry: 1085ab908; end: 1085ab97f; -[SCNativeLoggerDefault log:context:tag:message:] */

void FUN_1085ab908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar1 = param_6;
  func_0x00010c08fa60();
  uVar2 = param_6;
  if (0x76c < uVar1) {
    func_0x00010c260c20(param_6,param_2,0x76c);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1085ab980; end: 1085ab9ab; -[SCAppSession handleOpenAppFromNotificationSettings] */

void FUN_1085ab980(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c168f80(param_1,param_2,5);
                    /* WARNING: Could not recover jumptable at 0x00010c2002b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setShouldCheckCameraStatus__11265dad0,0);
  return;
}



/* Entry: 1085ab9ac; end: 1085ab9d7; -[SCAppSession handleOpenAppFromQuickAction] */

void FUN_1085ab9ac(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c168f80(param_1,param_2,3);
                    /* WARNING: Could not recover jumptable at 0x00010c2002b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setShouldCheckCameraStatus__11265dad0,0);
  return;
}



/* Entry: 1085ab9d8; end: 1085aba17; -[SCAppSession handleOpenAppToNonCameraVCFromNotif:] */

void FUN_1085ab9d8(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    func_0x00010c168f80(param_1,param_2,1);
  }
  func_0x00010c2002a0(param_1,param_2,0);
  *(undefined1 *)(param_1 + 0x32) = 1;
  return;
}



/* Entry: 1085aba18; end: 1085aba43; -[SCAppSession handleOpenAppFromDeepLink] */

void FUN_1085aba18(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c168f80(param_1,param_2,2);
                    /* WARNING: Could not recover jumptable at 0x00010c2002b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setShouldCheckCameraStatus__11265dad0,0);
  return;
}



/* Entry: 1085aba44; end: 1085aba6b; -[SCAppSession handleCapturerStartRunning] */

void FUN_1085aba44(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c177280(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bf6fc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_determineIfAppStartupComplete_1125b98a8);
  return;
}



/* Entry: 1085aba6c; end: 1085aba87; -[SCAppSession isAppOpenFromPushNotification] */

bool FUN_1085aba6c(long param_1)

{
  func_0x00010bf05cc0();
  return param_1 == 1;
}



/* Entry: 1085aba88; end: 1085abaa3; -[SCAppSession isAppOpenFromDeepLink] */

bool FUN_1085aba88(long param_1)

{
  func_0x00010bf05cc0();
  return param_1 == 2;
}



/* Entry: 1085abaa4; end: 1085ababf; -[SCAppSession isAppStatusActive] */

bool FUN_1085abaa4(long param_1)

{
  func_0x00010bf062e0();
  return param_1 == 1;
}



/* Entry: 1085abac0; end: 1085abac7; -[SCAppSession markAppLaunchFinish] */

void FUN_1085abac0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c168d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAppLaunchStatus__112637d70,2);
  return;
}



/* Entry: 1085abac8; end: 1085abb0b; -[SCAppSession didEnterBackground] */

void FUN_1085abac8(ulong param_1)

{
  ulong uVar1;
  
  _CACurrentMediaTime();
  func_0x00010c1b77a0(param_1);
  uVar1 = param_1;
  func_0x00010bf72420();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c23c2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_signalWhenAppStartupComplete_11266cad0);
  return;
}



/* Entry: 1085abb0c; end: 1085abb67; -[SCAppSession willEnterForeground] */

void FUN_1085abb0c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c169240(param_1,param_2,0);
  func_0x00010c177280(param_1);
  func_0x00010c18dce0(param_1);
  func_0x00010c18d4e0(param_1);
  func_0x00010c168f80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2002b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setShouldCheckCameraStatus__11265dad0,1);
  return;
}



/* Entry: 1085abb68; end: 1085abbbb; -[SCAppSession willLogin] */

void FUN_1085abb68(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c169240(param_1,param_2,0);
  func_0x00010c18d4e0(param_1);
  lVar1 = param_1;
  func_0x00010bf05cc0();
  if (lVar1 == 1) {
    func_0x00010c168f80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2002b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setShouldCheckCameraStatus__11265dad0,0);
  return;
}



/* Entry: 1085abbbc; end: 1085abbcf; -[SCAppSession didLogout] */

void FUN_1085abbbc(void)

{
  undefined *puVar1;
  
  func_0x00010c23c2a0();
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dea0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dea0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dea0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dea0();
  _objc_release(puVar1);
  uRam0000000113839535 = 0;
  uRam0000000113839438 = 0;
  uRam0000000113839430 = 0;
  uRam0000000113839448 = 0;
  uRam0000000113839440 = 0;
  return;
}



/* Entry: 1085abbd0; end: 1085abc0f; -[SCAppSession didCameraViewDisappear] */

void FUN_1085abbd0(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010bf72420();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010c2002a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf6fc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_determineIfAppStartupComplete_1125b98a8);
  return;
}



/* Entry: 1085abc10; end: 1085abc43; -[SCAppSession setDidAppStartupComplete:] */

void FUN_1085abc10(long param_1,undefined8 param_2,undefined1 param_3)

{
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x10),0xffffffffffffffff);
  *(undefined1 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1085abc44; end: 1085abc83; -[SCAppSession signalWhenAppStartupComplete] */

void FUN_1085abc44(long param_1)

{
  _CACurrentMediaTime();
  func_0x00010c1b77a0(param_1);
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x10),0xffffffffffffffff);
  *(undefined1 *)(param_1 + 0x30) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1085abc84; end: 1085abcb7; -[SCAppSession timeLapseBetweenLaunches] */

double FUN_1085abc84(double param_1)

{
  double dVar1;
  
  func_0x00010c0882a0();
  dVar1 = -1.0;
  if (param_1 != 0.0) {
    _CACurrentMediaTime(0xbff0000000000000);
    dVar1 = dVar1 - param_1;
  }
  return dVar1;
}



/* Entry: 1085abcb8; end: 1085abd0b; -[SCAppSession lastAppSessionEndTime] */

undefined8 FUN_1085abcb8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf88360();
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1085abd0c; end: 1085abd83; -[SCAppSession setLastAppSessionEndTime:] */

void FUN_1085abd0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110ee4e78);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085abd84; end: 1085abdb3; -[SCAppSession isTimeStampInCurrentAppSession:] */

bool FUN_1085abd84(double param_1)

{
  double dVar1;
  
  dVar1 = param_1;
  func_0x00010c0882a0();
  return dVar1 < param_1 || dVar1 == 0.0;
}



/* Entry: 1085abdb4; end: 1085abdbb; -[SCAppSession isLoggedIn] */

undefined1 FUN_1085abdb4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x31);
}



/* Entry: 1085abdbc; end: 1085abdc3; -[SCAppSession appOpeningToNonCameraVC] */

undefined1 FUN_1085abdbc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x32);
}



/* Entry: 1085abdc4; end: 1085abdcb; -[SCAppSession setAppOpeningToNonCameraVC:] */

void FUN_1085abdc4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x32) = param_3;
  return;
}



/* Entry: 1085abdcc; end: 1085abdd3; -[SCAppSession setDidBecomeActiveWithRemoteNotification:] */

void FUN_1085abdcc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x33) = param_3;
  return;
}



/* Entry: 1085abdd4; end: 1085abddb; -[SCAppSession didLaunchWithDidFinishLaunching] */

undefined1 FUN_1085abdd4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x34);
}



/* Entry: 1085abddc; end: 1085abde3; -[SCAppSession setShouldCheckCameraStatus:] */

void FUN_1085abddc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x35) = param_3;
  return;
}



/* Entry: 1085abde4; end: 1085abdeb; -[SCAppSession setCameraStatus:] */

void FUN_1085abde4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 1085abdec; end: 1085abdf3; -[SCAppSession appOpenType] */

undefined8 FUN_1085abdec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1085abdf4; end: 1085abdfb; -[SCAppSession setAppOpenType:] */

void FUN_1085abdf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 1085abdfc; end: 1085abe03; -[SCAppSession didSetCaptureVideoPreviewView] */

undefined1 FUN_1085abdfc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x36);
}



/* Entry: 1085abe04; end: 1085abe57; -[SCAppSession .cxx_destruct] */

void FUN_1085abe04(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


