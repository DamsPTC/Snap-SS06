/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b26ae3c; end: 10b26ae6b; -[SCRequest setClientSwitchboardConfigKey:] */

void FUN_10b26ae3c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b26ae6c; end: 10b26aeaf; -[SCRequest downloadProgress] */

void FUN_10b26ae6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c135880();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf88ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b26aeb0; end: 10b26aef3; -[SCRequest uploadProgress] */

void FUN_10b26aeb0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c135880();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c28e4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b26aef4; end: 10b26af43; -[SCRequest monitorDownloadProgressWithCallback:] */

void FUN_10b26aef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c135880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d0c40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b26af44; end: 10b26afb3; -[SCRequest monitorDownloadProgressWithQueue:callback:] */

void FUN_10b26af44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c135880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d0c60();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b26afb4; end: 10b26b003; -[SCRequest monitorUploadProgressWithCallback:] */

void FUN_10b26afb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c135880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d0d80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b26b004; end: 10b26b033; -[SCRequest removeDownloadProgressMonitoring] */

void FUN_10b26b004(undefined8 param_1)

{
  func_0x00010c135880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12bfe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b26b034; end: 10b26b0a3; -[SCRequest progressiveUpdateWithQueue:callback:] */

void FUN_10b26b034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c135880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d0d60();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b26b0a4; end: 10b26b0eb; +[SCRequest perfectMatchScoreWithDisplayContext:] */

uint FUN_10b26b0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf4f6c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  return ~(-1 << (ulong)((uint)uVar1 & 0x1f));
}



/* Entry: 10b26b0ec; end: 10b26b187; +[SCRequest mainPageScoreWithDisplayContext:] */

long FUN_10b26b0ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf4f6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf4f6c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    lVar2 = (long)(1 << (ulong)((int)lVar1 - 1U & 0x1f));
  }
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 10b26b188; end: 10b26b1b7; -[SCRequest setFallbackUrlProvider:] */

void FUN_10b26b188(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b26b1b8; end: 10b26b1bf; -[SCRequest loggingInfo] */

undefined8 FUN_10b26b1b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b26b1c0; end: 10b26b1c7; -[SCRequest setPageId:] */

void FUN_10b26b1c0(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x24) = param_3;
  return;
}



/* Entry: 10b26b1c8; end: 10b26b1cf; -[SCRequest URLSessionTaskPriority] */

undefined4 FUN_10b26b1c8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



/* Entry: 10b26b1d0; end: 10b26b1d7; -[SCRequest setURLSessionTaskPriority:] */

void FUN_10b26b1d0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 10b26b1d8; end: 10b26b1df; -[SCRequest setConnectivity:] */

void FUN_10b26b1d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 10b26b1e0; end: 10b26b1e7; -[SCRequest index] */

undefined8 FUN_10b26b1e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b26b1e8; end: 10b26b1ef; -[SCRequest setIndex:] */

void FUN_10b26b1e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 10b26b1f0; end: 10b26b1f7; -[SCRequest isStreamingRequest] */

undefined1 FUN_10b26b1f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a);
}



/* Entry: 10b26b1f8; end: 10b26b1ff; -[SCRequest setIsStreamingRequest:] */

void FUN_10b26b1f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1a) = param_3;
  return;
}



/* Entry: 10b26b200; end: 10b26b207; -[SCRequest requestBatchId] */

undefined8 FUN_10b26b200(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b26b208; end: 10b26b20f; -[SCRequest estimatedResponseSizeBytes] */

undefined8 FUN_10b26b208(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10b26b210; end: 10b26b217; -[SCRequest shouldTrace] */

undefined1 FUN_10b26b210(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1b);
}



/* Entry: 10b26b218; end: 10b26b21f; -[SCRequest setShouldTrace:] */

void FUN_10b26b218(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1b) = param_3;
  return;
}



/* Entry: 10b26b220; end: 10b26b227; -[SCRequest isResumable] */

undefined1 FUN_10b26b220(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1c);
}



/* Entry: 10b26b228; end: 10b26b22f; -[SCRequest contextScore] */

undefined8 FUN_10b26b228(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10b26b230; end: 10b26b237; -[SCRequest requestId] */

undefined8 FUN_10b26b230(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10b26b238; end: 10b26b23f; -[SCRequest requestTimestamp] */

undefined8 FUN_10b26b238(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10b26b240; end: 10b26b26f; -[SCRequest setTrackingInfo:] */

void FUN_10b26b240(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b26b270; end: 10b26b277; -[SCRequest setRetryPolicy:] */

void FUN_10b26b270(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  return;
}



/* Entry: 10b26b278; end: 10b26b27f; -[SCRequest setRetryIntervalInMs:] */

void FUN_10b26b278(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  return;
}



/* Entry: 10b26b280; end: 10b26b287; -[SCRequest setRetryableResponseStatusCodes:] */

void FUN_10b26b280(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b26b288; end: 10b26b28f; -[SCRequest appState] */

undefined8 FUN_10b26b288(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 10b26b290; end: 10b26b297; -[SCRequest task] */

undefined8 FUN_10b26b290(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 10b26b298; end: 10b26b2c7; -[SCRequest setRequestParser:] */

void FUN_10b26b298(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b26b2c8; end: 10b26b2f7; -[SCRequest setRequestInfoContainer:] */

void FUN_10b26b2c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b26b2f8; end: 10b26b327; -[SCRequest setInfo:] */

void FUN_10b26b2f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b26b328; end: 10b26b357; -[SCRequest setClientSBConfig:] */

void FUN_10b26b328(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b26b358; end: 10b26b35f; -[SCRequest originalHost] */

undefined8 FUN_10b26b358(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 10b26b360; end: 10b26b38f; -[SCRequest setOriginalHost:] */

void FUN_10b26b360(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b26b390; end: 10b26b397; -[SCRequest taskId] */

undefined8 FUN_10b26b390(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 10b26b398; end: 10b26b39f; -[SCRequest setTracingId:] */

void FUN_10b26b398(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x138) = param_3;
  return;
}



/* Entry: 10b26b3a0; end: 10b26b3a7; -[SCRequest queuingLatency] */

undefined8 FUN_10b26b3a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 10b26b3a8; end: 10b26b3af; -[SCRequest accumulatedUserInitiatedQueuingLatency] */

undefined8 FUN_10b26b3a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 10b26b3b0; end: 10b26b3b7; -[SCRequest lastUserInitiatedTime] */

undefined8 FUN_10b26b3b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 10b26b3b8; end: 10b26b3bf; -[SCRequest setWillUseBackgroundSession:] */

void FUN_10b26b3b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b26b3c0; end: 10b26b3c7; -[SCRequest estimatedRequestSize] */

undefined8 FUN_10b26b3c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}



/* Entry: 10b26b3c8; end: 10b26b3cf; -[SCRequest enqueueTime] */

undefined8 FUN_10b26b3c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 10b26b3d0; end: 10b26b3d7; -[SCRequest authLatency] */

undefined8 FUN_10b26b3d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}



/* Entry: 10b26b3d8; end: 10b26b3df; -[SCRequest attestationLatency] */

undefined8 FUN_10b26b3d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x170);
}



/* Entry: 10b26b3e0; end: 10b26b3e7; -[SCRequest argosSuccess] */

undefined1 FUN_10b26b3e0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 10b26b3e8; end: 10b26b3ef; -[SCRequest urlRequestResponseInfo] */

undefined8 FUN_10b26b3e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x178);
}



/* Entry: 10b26b3f0; end: 10b26b3f7; -[SCRequest userContextWhenEnqueued] */

undefined8 FUN_10b26b3f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x180);
}



/* Entry: 10b26b3f8; end: 10b26b3ff; -[SCRequest setTaskContextWhenCompleted:] */

void FUN_10b26b3f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b26b400; end: 10b26b407; -[SCRequest hasSubmitted] */

undefined1 FUN_10b26b400(long param_1)

{
  return *(undefined1 *)(param_1 + 0x22);
}



/* Entry: 10b26b408; end: 10b26b40f; -[SCRequest setHasSubmitted:] */

void FUN_10b26b408(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x22) = param_3;
  return;
}



/* Entry: 10b26b410; end: 10b26b43f; -[SCRequest setBaseHeaders:] */

void FUN_10b26b410(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b26b440; end: 10b26b527; -[SCRequestBatch initWithRequestManager:] */

undefined1 * FUN_10b26b440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705fc8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release();
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b26b528; end: 10b26b65f; -[SCRequestBatch addRequest:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_10b26b528(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10b26b660;
  puStack_88 = &UNK_1108b24d8;
  lStack_80 = param_1;
  uStack_78 = param_3;
  uStack_70 = param_4;
  uStack_68 = param_5;
  uStack_60 = param_6;
  uStack_58 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_a0);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b26b660; end: 10b26b6bf;  */

void FUN_10b26b660(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c1ebae0(*(undefined8 *)(param_1 + 0x28),param_2,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  puVar1 = PTR_PTR_1126dfec8;
  _objc_alloc(PTR_PTR_1126dfec8);
  func_0x00010c03eb80();
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b26b6c0; end: 10b26b7a3; -[SCRequestBatch addRequest:completionQueue:completionBlock:] */

void FUN_10b26b6c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10b26b7a4;
  puStack_68 = &UNK_1108465d0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b26b7a4; end: 10b26b7ff;  */

void FUN_10b26b7a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c1ebae0(*(undefined8 *)(param_1 + 0x28),param_2,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  puVar1 = PTR_PTR_1126dfec8;
  _objc_alloc(PTR_PTR_1126dfec8);
  func_0x00010c03eb60();
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b26b800; end: 10b26b8b7; -[SCRequestBatch submitBatchWithCompletionQueue:batchRequestsCompletion:] */

void FUN_10b26b800(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b26b8b8;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b26b8b8; end: 10b26bc53;  */

void FUN_10b26b8b8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined1 auStack_108 [128];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x18) = 1;
  lVar2 = param_1;
  _dispatch_group_create();
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x2020000000;
  uStack_110 = 1;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(lVar9);
  puVar7 = auStack_108;
  lVar8 = 0x10;
  lVar11 = lVar9;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    lVar13 = *plStack_160;
    do {
      lVar8 = 0;
      do {
        if (*plStack_160 != lVar13) {
          _objc_enumerationMutation(lVar9);
        }
        lVar10 = *(long *)(lStack_168 + lVar8 * 8);
        _dispatch_group_enter(lVar2);
        lVar3 = lVar10;
        func_0x00010bf96f00();
        if (lVar3 == 0) {
          uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
          lVar3 = lVar10;
          func_0x00010c134680();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar10;
          func_0x00010bf44140(lVar10);
          _objc_retainAutoreleasedReturnValue();
          puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1a0 = 0xc2000000;
          pcStack_198 = FUN_10b26bc54;
          puStack_190 = &UNK_110ccc020;
          puStack_178 = &uStack_128;
          lStack_188 = lVar10;
          _objc_retain(lVar2);
          lStack_180 = lVar2;
          func_0x00010c25f5e0(uVar12);
          _objc_release(lVar5);
          _objc_release(lVar3);
          _objc_release(lStack_180);
        }
        else {
          lVar3 = lVar10;
          func_0x00010bf96f00();
          if (lVar3 == 1) {
            uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
            lVar3 = lVar10;
            func_0x00010c134680();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar10;
            func_0x00010c261780(lVar10);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar10;
            func_0x00010bfa0000(lVar10);
            _objc_retainAutoreleasedReturnValue();
            puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_1d0 = 0xc2000000;
            uStack_1c8 = 0x10b26bd1c;
            puStack_1c0 = &UNK_110ccc050;
            lStack_1b8 = lVar10;
            _objc_retain(lVar2);
            puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_208 = 0xc2000000;
            uStack_200 = 0x10b26bdbc;
            puStack_1f8 = &UNK_110ccc080;
            puStack_1e0 = &uStack_128;
            lStack_1f0 = lVar10;
            lStack_1b0 = lVar2;
            _objc_retain(lVar2);
            lStack_1e8 = lVar2;
            func_0x00010c25f660(uVar12);
            _objc_release(lVar4);
            _objc_release(lVar5);
            _objc_release(lVar3);
            _objc_release(lStack_1e8);
            _objc_release(lStack_1b0);
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar11 != lVar8);
      puVar7 = auStack_108;
      lVar8 = 0x10;
      lVar11 = lVar9;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _objc_release(lVar9);
  puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_240 = 0xc2000000;
  pcStack_238 = FUN_10b26be68;
  puStack_230 = &UNK_110883360;
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  puStack_218 = &uStack_128;
  uStack_228 = *(undefined8 *)(param_1 + 0x20);
  ppuVar6 = &puStack_248;
  uStack_220 = uVar1;
  func_0x000107c27d98(lVar2,uVar12,ppuVar6);
  _objc_release(uStack_220);
  __Block_object_dispose(&uStack_128,8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  uVar12 = 8;
  __Block_object_dispose(&uStack_128,8);
  __Unwind_Resume();
  lVar11 = *(long *)(lVar2 + 0x20);
  _objc_retain(lVar8);
  _objc_retain(puVar7);
  _objc_retain(ppuVar6);
  _objc_retain(uVar12);
  func_0x00010bf44000();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar11 + 0x10))();
  _objc_release(lVar8);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_release(uVar12);
  _objc_release(lVar11);
  if (lVar8 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(lVar2 + 0x30) + 8) + 0x18) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(lVar2 + 0x28));
  return;
}



/* Entry: 10b26bc54; end: 10b26be67;  */

void FUN_10b26bc54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf44000();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(lVar1);
  if (param_5 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b26be68; end: 10b26beab;  */

void FUN_10b26be68(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))
              (lVar1,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18));
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b26beac; end: 10b26bf47; -[SCRequestBatch .cxx_destruct] */

void FUN_10b26beac(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b26bf48; end: 10b26c04f;  */

undefined ** FUN_10b26bf48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f3e8d8;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110f3e8f8;
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d33f0;
  ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3468;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f3e918;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f3e938;
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3498;
  ppuStack_38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d34b0;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f3e958;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f3e978;
  ppuStack_30 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3480;
  ppuStack_28 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3438;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f3e998;
  ppuStack_20 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d34c8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_50,&ppuStack_88,7);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuRam00000001137f4528;
  ppuRam00000001137f4528 = (undefined **)puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126b19f8;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_2;
  _objc_retain(param_2);
  _objc_retain(ppuVar2);
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(puVar3);
  puVar4 = PTR_PTR_1126b19f8;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b19f8;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b19f8;
  func_0x00010bf81400();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar8 = PTR_PTR_1126b19f8;
  func_0x00010c2595c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(uVar9);
    _objc_retain(puVar1);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c246d00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar6 = PTR_PTR_1126b19f8;
    func_0x00010c0cbb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
      ___stack_chk_fail();
      return &PTR____CFConstantStringClassReference_110e01958;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return ppuVar2;
}



/* Entry: 10b26c050; end: 10b26c237;  */

undefined ** FUN_10b26c050(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126b19f8;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126b19f8;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b19f8;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b19f8;
  func_0x00010bf81400();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar7 = PTR_PTR_1126b19f8;
  func_0x00010c2595c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(uVar9);
    _objc_retain(puVar2);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c246d00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar5 = PTR_PTR_1126b19f8;
    func_0x00010c0cbb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
      ___stack_chk_fail();
      return &PTR____CFConstantStringClassReference_110e01958;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return ppuVar8;
}



/* Entry: 10b26c238; end: 10b26c387;  */

undefined ** FUN_10b26c238(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c246d00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = PTR_PTR_1126b19f8;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
    return ppuVar5;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110e01958;
}



/* Entry: 10b26c388; end: 10b26c393; -[JSONRequestParser acceptHeader] */

undefined ** FUN_10b26c388(void)

{
  return &PTR____CFConstantStringClassReference_110e01958;
}



/* Entry: 10b26c394; end: 10b26c3ff; -[JSONRequestParser parseData:MIMEType:error:] */

void FUN_10b26c394(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3,0,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b26c400; end: 10b26c407; -[NoopRequestParser acceptHeader] */

undefined8 FUN_10b26c400(void)

{
  return 0;
}



/* Entry: 10b26c408; end: 10b26c42f; -[SOJURequestParser initWithSojuClass:] */

void FUN_10b26c408(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfee200();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b26c430; end: 10b26c457; -[SOJURequestParser acceptHeader] */

undefined ** FUN_10b26c430(long param_1)

{
  undefined **ppuVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010bf2cca0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd6998;
  if (iVar2 == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



/* Entry: 10b26c458; end: 10b26c52f; -[SOJURequestParser parseData:MIMEType:error:] */

void FUN_10b26c458(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010c0b5ac0(param_4);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = 0x10dd6998;
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110dd6998,param_2,param_4);
  _objc_release(param_4);
  if (iVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3,0,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_alloc(uVar2);
    func_0x00010c0206e0();
    _objc_release(puVar3);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_alloc(uVar2);
    func_0x00010c03b880();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b26c530; end: 10b26c577; -[ProtobufRequestParser initWithProtobufClass:] */

void FUN_10b26c530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705fd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b26c578; end: 10b26c583; -[ProtobufRequestParser acceptHeader] */

undefined ** FUN_10b26c578(void)

{
  return &PTR____CFConstantStringClassReference_110dd6998;
}



/* Entry: 10b26c584; end: 10b26c5db; -[ProtobufRequestParser parseData:MIMEType:error:] */

void FUN_10b26c584(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  _objc_alloc(uVar1);
  func_0x00010c008360();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b26c5dc; end: 10b26c62f; +[SCRequestParser JSONParser] */

void FUN_10b26c5dc(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f4530 != -1) {
    func_0x000107c27d9c(0x1137f4530,&PTR___NSConcreteGlobalBlock_110ccc0f8);
  }
  uVar1 = uRam00000001137f4538;
  _objc_retain(uRam00000001137f4538);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b26c630; end: 10b26c65b;  */

void FUN_10b26c630(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bfb08;
  _objc_alloc_init();
  uVar1 = puRam00000001137f4538;
  puRam00000001137f4538 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b26c65c; end: 10b26c68b; +[SCRequestParser SOJUParser:] */

void FUN_10b26c65c(void)

{
  _objc_alloc(PTR_PTR_1126dfed8);
  func_0x00010c04a3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b26c68c; end: 10b26c6bb; +[SCRequestParser ProtobufParser:] */

void FUN_10b26c68c(void)

{
  _objc_alloc(PTR_PTR_1126dfee0);
  func_0x00010c03b900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b26c6bc; end: 10b26c7a3;  */

ulong FUN_10b26c6bc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010bf4bb00(uVar1,param_2,&PTR____CFConstantStringClassReference_110f600b8);
    if ((uVar2 & 1) == 0) {
      uVar2 = uVar1;
      func_0x00010bf4bb00(uVar1,param_2,&PTR____CFConstantStringClassReference_110f600d8);
    }
    else {
      uVar2 = 1;
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b26c7a4; end: 10b26c7c3;  */

void FUN_10b26c7a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_code_userInfo__1125c3e38,
             *(undefined8 *)PTR__NSURLErrorDomain_110345620,0xfffffffffffffc18,0);
  return;
}



/* Entry: 10b26c7c4; end: 10b26c7fb; -[SCRequestTrackingInfo initWithTrackingId:type:mediaType:expirationInDays:] */

void FUN_10b26c7c4(void)

{
  func_0x00010c054fa0();
  return;
}



/* Entry: 10b26c7fc; end: 10b26c93b; -[SCRequestTrackingInfo initWithTrackingId:mediaId:type:mediaType:contentResolveTime:mediaContextType:expirationInDays:] */

long FUN_10b26c7fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  ulong param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010bfee200();
  if (param_1 != 0) {
    uVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar1;
    _objc_release(uVar2);
    uVar1 = param_4;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    _objc_release(uVar2);
    uVar1 = param_5;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    _objc_release(uVar2);
    uVar1 = param_6;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    _objc_release(uVar2);
    uVar1 = param_7;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    _objc_release(uVar2);
    *(undefined8 *)(param_1 + 0x38) = param_8;
    if (0x1d < param_9) {
      param_9 = 0x1e;
    }
    *(ulong *)(param_1 + 0x10) = param_9;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b26c93c; end: 10b26c9db; -[SCRequestTrackingInfo initWithCoder:] */

long FUN_10b26c93c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    uVar1 = param_3;
    func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_110f60158);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar1;
    _objc_release(uVar2);
    uVar1 = param_3;
    func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_110f60178);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2827c0();
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b26c9dc; end: 10b26ca83; -[SCRequestTrackingInfo encodeWithCoder:] */

void FUN_10b26c9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c278ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f60158);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf9c780(param_1);
  func_0x00010c0df840(puVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar2,&PTR____CFConstantStringClassReference_110f60178);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b26ca84; end: 10b26ca8b; -[SCRequestTrackingInfo trackingId] */

undefined8 FUN_10b26ca84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b26ca8c; end: 10b26ca93; -[SCRequestTrackingInfo expirationInDays] */

undefined8 FUN_10b26ca8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b26ca94; end: 10b26ca9b; -[SCRequestTrackingInfo type] */

undefined8 FUN_10b26ca94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b26ca9c; end: 10b26caa3; -[SCRequestTrackingInfo mediaType] */

undefined8 FUN_10b26ca9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b26caa4; end: 10b26caab; -[SCRequestTrackingInfo mediaId] */

undefined8 FUN_10b26caa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b26caac; end: 10b26cab3; -[SCRequestTrackingInfo contentResolveTime] */

undefined8 FUN_10b26caac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b26cab4; end: 10b26cabb; -[SCRequestTrackingInfo mediaContextType] */

undefined8 FUN_10b26cab4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b26cabc; end: 10b26cac3; -[SCRequestTrackingInfo requestId] */

undefined8 FUN_10b26cabc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b26cac4; end: 10b26cacb; -[SCRequestTrackingInfo setRequestId:] */

void FUN_10b26cac4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b26cacc; end: 10b26cb2b; -[SCRequestTrackingInfo .cxx_destruct] */

void FUN_10b26cacc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b26cb2c; end: 10b26cc7f; -[SCResumeableDownloadRequest initWithResumeData:key:contexts:priority:connectivity:trackingInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b26cb2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126bbf20;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bdc1d20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  puStack_58 = PTR_PTR_112705fd8;
  puVar2 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithKey_contexts_priority_co_112542720,param_4,param_5,
                      param_6,param_7,0,puVar1,0,0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11278dcf8);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11278dcf8) = uVar3;
    _objc_release(uVar4);
    func_0x00010c219320(puVar2);
    func_0x00010c1b3f60(puVar2);
    func_0x00010c1b53c0(puVar2);
  }
  _objc_release(param_8);
  _objc_release(param_3);
  return puVar2;
}


