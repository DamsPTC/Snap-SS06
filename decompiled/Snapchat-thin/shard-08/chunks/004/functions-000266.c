/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106092338; end: 106092367; -[SCCaptureVideoStrategyStateMachineInternalProxy setError:] */

void FUN_106092338(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106092368; end: 10609236f; -[SCCaptureVideoStrategyStateMachineInternalProxy shouldAbort] */

undefined1 FUN_106092368(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 106092370; end: 106092377; -[SCCaptureVideoStrategyStateMachineInternalProxy setShouldAbort:] */

void FUN_106092370(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 106092378; end: 1060923bb; -[SCCaptureVideoStrategyStateMachineInternalProxy .cxx_destruct] */

void FUN_106092378(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1060923bc; end: 106092633; -[SCCaptureServiceWorkflow initWithCaptureServiceActionObservable:imageCaptureStrategyEvents:videoCaptureStrategyEvents:recordingFileURLGenerator:cameraHardwareServicesAPI:captureDeviceManager:cameraConfigurationServices:cameraHardwareResource:cameraCaptureRequestHandler:circumstanceEngine:] */

undefined8 *
FUN_1060923bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_70 = PTR_PTR_1126ef7b8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c7890;
    _objc_alloc();
    func_0x00010c01c5a0();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c7898;
    _objc_alloc();
    func_0x00010c060ce0();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    uVar2 = puVar1[3];
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106092634; end: 1060927a7;  */

void FUN_106092634(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1060927a8;
  puStack_60 = &UNK_11090b7c8;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1060927f0;
  puStack_88 = &UNK_11090b7f8;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x106092838;
  puStack_b0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  _objc_copyWeak(auStack_d0,param_1 + 0x20);
  func_0x00010c0bcea0(param_2);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 1060927a8; end: 106092863;  */

void FUN_1060927a8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebfa60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106092864; end: 1060928d3;  */

void FUN_106092864(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddac40();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060928d4; end: 1060928db; -[SCCaptureServiceWorkflow _startCapturingImageWithConfiguration:] */

void FUN_1060928d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf31590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_captureWithConfiguration__1125a9f08);
  return;
}



/* Entry: 1060928dc; end: 1060928e3; -[SCCaptureServiceWorkflow _startRecordingVideoWithConfiguration:] */

void FUN_1060928dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2502b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_startRecordingWithConfiguration__112671ad0);
  return;
}



/* Entry: 1060928e4; end: 1060928eb; -[SCCaptureServiceWorkflow _stopRecordingVideo] */

void FUN_1060928e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_stopRecording_112673400);
  return;
}



/* Entry: 1060928ec; end: 1060928f3; -[SCCaptureServiceWorkflow _cancelRecordingWithShouldAbort:cancelReason:callsite:] */

void FUN_1060928ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ed70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_cancelRecordingWithShouldAbort_c_1125a9500);
  return;
}



/* Entry: 1060928f4; end: 10609293b; -[SCCaptureServiceWorkflow .cxx_destruct] */

void FUN_1060928f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10609293c; end: 1060929e3; +[SCCaptureVideoStrategyData cancelledCaptureDataWithShouldAbort:cancelReason:callsite:] */

void FUN_10609293c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c7850;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  puVar2[0x28] = param_3;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060929e4; end: 106092a4f; +[SCCaptureVideoStrategyData failedCaptureDataWithError:] */

void FUN_1060929e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c7850;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106092a50; end: 106092abb; +[SCCaptureVideoStrategyData postCaptureDataWithVideo:] */

void FUN_106092a50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c7850;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106092abc; end: 106092b1f; +[SCCaptureVideoStrategyData preCaptureDataWithConfiguration:] */

void FUN_106092abc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c7850;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106092b20; end: 106092b43; -[SCCaptureVideoStrategyData copyWithZone:] */

undefined8 FUN_106092b20(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106092b44; end: 106092be3; -[SCCaptureVideoStrategyData hash] */

void FUN_106092b44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126ef7c0;
  puStack_90 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106092be4; end: 106092c27; -[SCCaptureVideoStrategyData internalInit] */

void FUN_106092be4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ef7c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106092c28; end: 106092d37; -[SCCaptureVideoStrategyData isEqual:] */

long FUN_106092c28(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106092d10:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106092d1c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x28) == *(char *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if (lVar3 != *(long *)(param_3 + 0x38)) {
                func_0x00010c071ae0();
                goto LAB_106092d1c;
              }
              goto LAB_106092d10;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106092d1c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106092d38; end: 106092e2f; -[SCCaptureVideoStrategyData matchPreCaptureData:postCaptureData:failedCaptureData:cancelledCaptureData:] */

void FUN_106092d38(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (param_3 == 0) goto LAB_106092e00;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    else {
      if ((lVar2 != 1) || (param_4 == 0)) goto LAB_106092e00;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
  }
  else {
    if (lVar2 != 2) {
      if ((lVar2 == 3) && (param_6 != 0)) {
        (**(code **)(param_6 + 0x10))
                  (param_6,*(undefined1 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                   *(undefined8 *)(param_1 + 0x38));
      }
      goto LAB_106092e00;
    }
    if (param_5 == 0) goto LAB_106092e00;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_106092e00:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106092e30; end: 106092e83; -[SCCaptureVideoStrategyData .cxx_destruct] */

void FUN_106092e30(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106092e84; end: 106092f1b; +[SCCaptureImageStrategyData failedCaptureDataWithConfiguration:error:] */

void FUN_106092e84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c7838;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106092f1c; end: 106093013; +[SCCaptureImageStrategyData postCaptureDataWithConfiguration:stillImageData:discardRelatedData:currentCapturerState:] */

void FUN_106092f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c7838;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106093014; end: 106093077; +[SCCaptureImageStrategyData preCaptureDataWithConfiguration:] */

void FUN_106093014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c7838;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106093078; end: 10609309b; -[SCCaptureImageStrategyData copyWithZone:] */

undefined8 FUN_106093078(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10609309c; end: 10609314f; -[SCCaptureImageStrategyData hash] */

void FUN_10609309c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_1126ef7c8;
  puStack_a0 = puVar3;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106093150; end: 106093193; -[SCCaptureImageStrategyData internalInit] */

void FUN_106093150(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ef7c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106093194; end: 1060932c3; -[SCCaptureImageStrategyData isEqual:] */

long FUN_106093194(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10609329c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1060932a8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if (lVar3 != *(long *)(param_3 + 0x40)) {
                    func_0x00010c071ae0();
                    goto LAB_1060932a8;
                  }
                  goto LAB_10609329c;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1060932a8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1060932c4; end: 10609337f; -[SCCaptureImageStrategyData matchPreCaptureData:postCaptureData:failedCaptureData:] */

void FUN_1060932c4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
    }
  }
  else if (lVar1 == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                 *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    }
  }
  else if ((lVar1 == 0) && (param_3 != 0)) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106093380; end: 1060933eb; -[SCCaptureImageStrategyData .cxx_destruct] */

void FUN_106093380(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1060933ec; end: 106093807; -[SCLensBitmojiCreationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060933ec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
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
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  
  lVar1 = param_1 + _DAT_11273e508;
  _objc_loadWeakRetained();
  lVar25 = lVar1;
  func_0x00010bf2b640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar25;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar25);
  _objc_release(lVar1);
  lVar3 = lVar2;
  func_0x00010bf4b340();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0cfca0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c78a0;
  _objc_alloc();
  lVar6 = lVar3;
  func_0x00010bfe12e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010bf2b240();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_11273e50c;
  lVar1 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar8 = lVar1;
  func_0x00010bf1bda0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_11273e510;
  _objc_loadWeakRetained();
  lVar10 = lVar25;
  func_0x00010bf99fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11273e514;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c292c40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11273e518;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c25df60();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11273e51c;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11273e520;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c033da0(puVar5,param_2,lVar6,lVar7,lVar4,lVar9,lVar10,lVar13,lVar15,lVar17,lVar19);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar25);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  puVar20 = PTR_PTR_1126c78a8;
  _objc_alloc();
  lVar25 = (long)_DAT_11273e524;
  lVar1 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar16 = lVar1;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_1 + lVar25;
  _objc_loadWeakRetained();
  uVar22 = uVar21;
  func_0x00010c232460();
  lVar25 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar18 = lVar25;
  func_0x00010c0995c0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar6 = lVar23;
  func_0x00010bf1bda0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11273e528;
  _objc_loadWeakRetained(lVar11);
  lVar8 = lVar11;
  func_0x00010c08f040();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11273e52c;
  _objc_loadWeakRetained(lVar14);
  lVar9 = lVar14;
  func_0x00010c097cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022a40(puVar20,param_2,lVar16,uVar22 & 0xffffffff,lVar18,lVar7,lVar8,lVar9,puVar5);
  uVar24 = *(undefined8 *)(param_1 + _DAT_11273e530);
  *(undefined **)(param_1 + _DAT_11273e530) = puVar20;
  _objc_release(uVar24);
  _objc_release(lVar9);
  _objc_release(lVar14);
  _objc_release(lVar8);
  _objc_release(lVar11);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar23);
  _objc_release(lVar18);
  _objc_release(lVar25);
  _objc_release(uVar21);
  _objc_release(lVar16);
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106093808; end: 106093863; -[SCLensBitmojiCreationEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106093808(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + _DAT_11273e530) != 0) {
    func_0x00010bf832c0();
  }
  puStack_28 = PTR_PTR_1126ef7d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106093864; end: 10609395f; -[SCLensBitmojiCreationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106093864(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273e520);
  _objc_destroyWeak(param_1 + _DAT_11273e51c);
  _objc_destroyWeak(param_1 + _DAT_11273e518);
  _objc_destroyWeak(param_1 + _DAT_11273e50c);
  _objc_destroyWeak(param_1 + _DAT_11273e510);
  _objc_destroyWeak(param_1 + _DAT_11273e528);
  _objc_destroyWeak(param_1 + _DAT_11273e52c);
  _objc_destroyWeak(param_1 + _DAT_11273e514);
  _objc_destroyWeak(param_1 + _DAT_11273e508);
  _objc_destroyWeak(param_1 + _DAT_11273e524);
  _objc_destroyWeak(param_1 + _DAT_11273e534);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273e530,0);
  return;
}



/* Entry: 106093960; end: 1060939e7; -[SCLensBitmojiNavigationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106093960(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273e550,0);
  _objc_storeStrong(param_1 + _DAT_11273e548,0);
  _objc_destroyWeak(param_1 + _DAT_11273e54c);
  _objc_destroyWeak(param_1 + _DAT_11273e544);
  _objc_destroyWeak(param_1 + _DAT_11273e540);
  _objc_destroyWeak(param_1 + _DAT_11273e53c);
  _objc_destroyWeak(param_1 + _DAT_11273e538);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273e554);
  return;
}



/* Entry: 1060939e8; end: 106093bdb; -[SCLensBitmojiCreationNavigator initWithBitmojiAvatarProvider:lensCarouselManager:avatarBuilderPresenter:avatarEditBuilderPresenter:bitmojiEditAvatarBuilderScopeExposer:bitmojiEditAvatarBuilderScopeServices:deepLinkHandling:] */

undefined8 *
FUN_1060939e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126ef7d8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[4];
    puVar1[4] = param_9;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c297260(param_4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106093bdc; end: 106093c2b;  */

void FUN_106093bdc(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1bafa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106093c2c; end: 106093c53; -[SCLensBitmojiCreationNavigator lensIdForBitmojiCreation] */

void FUN_106093c2c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106093c54; end: 106093cfb; -[SCLensBitmojiCreationNavigator goToCreateBitmojiFromLensId:inUIContainer:] */

void FUN_106093c54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126af678;
  _objc_alloc(PTR_PTR_1126af678);
  func_0x00010c04a940();
  _objc_release(param_4);
  func_0x00010c10f020(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106093cfc; end: 106093d63; -[SCLensBitmojiCreationNavigator loadBitmojiCreationState:] */

void FUN_106093cfc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfd46e0();
  _objc_release(uVar2);
  (**(code **)(param_3 + 0x10))(param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106093d64; end: 106093def; -[SCLensBitmojiCreationNavigator goToEditBitmojiFromLensId:inUIContainer:lensAttachmentUri:] */

void FUN_106093d64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010c082c00(param_1,param_2,param_5);
  if ((int)uVar1 == 0) {
    func_0x00010c08b740(param_1,param_2,param_3,param_4);
  }
  else {
    func_0x00010be26660(param_1,param_2,param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106093df0; end: 106093e4b; -[SCLensBitmojiCreationNavigator _handleBitmojiDeeplink:] */

void FUN_106093df0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1bc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106093e4c; end: 106093f77; -[SCLensBitmojiCreationNavigator launchEditAvatarBuilderWithLensId:inUIContainer:] */

void FUN_106093e4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126afdc8;
    _objc_alloc_init(PTR_PTR_1126afdc8);
    func_0x00010c2ae460();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a9340(puVar2,param_2,param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    puVar3 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23c20(uVar5,param_2,param_4,puVar3,param_1,0x12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10f040();
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = param_3;
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106093f78; end: 106094013; -[SCLensBitmojiCreationNavigator isValidBitmojiLensAttachmentUri:] */

undefined * FUN_106093f78(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b1068;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010c057c40();
    _objc_release(param_3);
    puVar2 = puVar1;
    func_0x00010bfa1820(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    return puVar3;
  }
  return (undefined *)0x0;
}



/* Entry: 106094014; end: 1060940a7; -[SCLensBitmojiCreationNavigator bitmojiCreateFlowDidCompleteWithAvatarId:] */

void FUN_106094014(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83b00();
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010c090c40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c158ca0();
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1060940a8; end: 10609413b; -[SCLensBitmojiCreationNavigator bitmojiAvatarBuilderCancelled] */

void FUN_1060940a8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83b00();
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010c090c40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c158ca0();
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10609413c; end: 1060941cf; -[SCLensBitmojiCreationNavigator bitmojiAvatarBuilderCompleted] */

void FUN_10609413c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83b00();
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010c090c40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c158ca0();
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1060941d0; end: 106094263; -[SCLensBitmojiCreationNavigator bitmojiAvatarBuilderFailedWithError:] */

void FUN_1060941d0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83b00();
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010c090c40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c158ca0();
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106094264; end: 10609427b; -[SCLensBitmojiCreationNavigator lensCarouselManager] */

void FUN_106094264(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10609427c; end: 106094287; -[SCLensBitmojiCreationNavigator setLensCarouselManager:] */

void FUN_10609427c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 106094288; end: 1060942fb; -[SCLensBitmojiCreationNavigator .cxx_destruct] */

void FUN_106094288(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 1060942fc; end: 106094303; -[SCLensBitmojiNavigationServices bitmojiNavigator] */

undefined8 FUN_1060942fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106094304; end: 10609430f; -[SCLensBitmojiNavigationServices .cxx_destruct] */

void FUN_106094304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106094310; end: 10609449f; -[SCLensBitmojiAlertUIController initWithParentView:bottomAnchorView:bitmojiCreationUiContainer:bitmojiCreationNavigator:bitmojiLogger:bitmojiUserLinkingContentServices:nglStudySettings:resourceDownloader:preferences:] */

undefined1 *
FUN_106094310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

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
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ef7e8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x50),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x58),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_7);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_9);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_10);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_11);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060944a0; end: 1060944cb; -[SCLensBitmojiAlertUIController _setupLegacyUI] */

void FUN_1060944a0(undefined8 param_1)

{
  func_0x00010bead8c0();
  func_0x00010beabc00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bead830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupLegacyAlert_112588fb0);
  return;
}



/* Entry: 1060944cc; end: 106094583; -[SCLensBitmojiAlertUIController _setupLegacyView] */

void FUN_1060944cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (*(long *)(param_1 + 0xd0) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126c78c0;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined **)(param_1 + 0xd0) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar2);
  func_0x00010befbb60();
  _objc_release(lVar2);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106094584;
  puStack_30 = &UNK_1108471b0;
  lStack_28 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + 0xd0),param_2,&puStack_48);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c182220(*(undefined8 *)(param_1 + 0xd0),param_2,3);
  return;
}



/* Entry: 106094584; end: 10609485f;  */

void FUN_106094584(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20) + 0x50;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0bbf80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x401c000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20) + 0x50;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0bc040();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  dVar7 = -7.0;
  (**(code **)(lVar6 + 0x10))(0xc01c000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20) + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0bbee0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf203a0(*(undefined8 *)(param_1 + 0x20));
  (**(code **)(lVar6 + 0x10))(-43.0 - dVar7,lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20) + 0x50;
  _objc_loadWeakRetained(lVar3);
  (**(code **)(lVar2 + 0x10))(lVar2,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106094860; end: 106094cdb; -[SCLensBitmojiAlertUIController _setupLegacyAlert] */

void FUN_106094860(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  if (*(long *)(param_1 + 0x88) == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    *(undefined **)(param_1 + 0x88) = puVar1;
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + 0x88),param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + 0x88),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c213040(*(undefined8 *)(param_1 + 0x88),param_2,1);
    func_0x00010c1cfce0(*(undefined8 *)(param_1 + 0x88),param_2,0);
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf54b40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + 0x88),param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0x78),param_2,*(undefined8 *)(param_1 + 0x88));
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106094cdc;
    puStack_50 = &UNK_1108471b0;
    lStack_48 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + 0x88),param_2,&puStack_68);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (*(long *)(param_1 + 0x90) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    *(undefined **)(param_1 + 0x90) = puVar1;
    _objc_release(uVar4);
    func_0x00010c181e40(0,0x4034000000000000,0,0x4034000000000000,*(undefined8 *)(param_1 + 0x90));
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6a);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar4,param_2,puVar1,0);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c271420(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4034000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(uVar4,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf54b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar4,param_2,lVar3,0);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010befbd60(*(undefined8 *)(param_1 + 0x90),param_2,param_1,PTR_s__linkBitmoji_11252eb08
                        ,0x40);
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4036000000000000);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6a);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar4);
    _objc_release(puVar1);
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0x78),param_2,*(undefined8 *)(param_1 + 0x90));
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x106094f5c;
    puStack_78 = &UNK_1108471b0;
    lStack_70 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + 0x90),param_2,&puStack_90);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (*(long *)(param_1 + 0xa0) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined **)(param_1 + 0xa0) = puVar1;
    _objc_release(uVar4);
    func_0x00010c182220(*(undefined8 *)(param_1 + 0xa0),param_2,1);
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0x78),param_2,*(undefined8 *)(param_1 + 0xa0));
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x106095274;
    puStack_a0 = &UNK_1108471b0;
    lStack_98 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + 0xa0),param_2,&puStack_b8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c08d140(*(undefined8 *)(param_1 + 0x78));
    puVar1 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    uVar4 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined **)(param_1 + 0xa8) = puVar1;
    _objc_release(uVar4);
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0x78),param_2,*(undefined8 *)(param_1 + 0xa8));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0xa8),param_2,0);
    func_0x00010c23d620(*(undefined8 *)(param_1 + 0xa8));
    func_0x00010bf345e0(*(undefined8 *)(param_1 + 0xa0));
    func_0x00010c17a6a0(*(undefined8 *)(param_1 + 0xa8));
    func_0x00010c24dbc0(*(undefined8 *)(param_1 + 0xa8));
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0xa0));
    uVar4 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010bfe8f00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be13440(param_1,param_2,uVar4);
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 106094cdc; end: 10609549b;  */

void FUN_106094cdc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  func_0x00010c0bbf80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x403c000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  func_0x00010c0bc040(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc03c000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc029000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10609549c; end: 1060956e3; -[SCLensBitmojiAlertUIController _fetchPromptImageWithURL:] */

void FUN_10609549c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  lVar1 = param_3;
  func_0x00010c08fa60();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar1 == 0) {
    puVar5 = (undefined *)(param_1 + 0x30);
    _objc_loadWeakRetained(puVar5);
    puVar6 = puVar5;
    func_0x00010bfa8080();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = PTR_PTR_1126aebd8;
    func_0x00010c14e320(PTR_PTR_1126aebd8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae560;
    _objc_alloc_init();
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar4);
    puStack_90 = puVar6;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1060956e4;
    puStack_78 = &UNK_11084d858;
    _objc_retain(puVar2);
    puStack_70 = puVar2;
    func_0x00010bf88c20(lVar3);
    _objc_release(puVar4);
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(lVar1);
    puVar6 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_70);
    _objc_release(puVar2);
  }
  _objc_release(puVar5);
  puVar7 = auStack_98;
  _objc_copyWeak(puVar7,auStack_68);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar6);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 1060956e4; end: 1060956ef;  */

void FUN_1060956e4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1060956f0; end: 10609579f;  */

void FUN_1060956f0(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 != 0) {
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + 0xa0));
      func_0x00010bf03400(0x3fd99999a0000000,PTR__OBJC_CLASS___UIView_1126aec20);
    }
    func_0x00010c2558c0(*(undefined8 *)(param_1 + 0xa8));
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1060957a0; end: 1060957af;  */

void FUN_1060957a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1060957b0; end: 1060957eb; -[SCLensBitmojiAlertUIController _setupUI] */

void FUN_1060957b0(undefined8 param_1)

{
  func_0x00010beb1160();
  func_0x00010beabc00(param_1);
  func_0x00010beaa780(param_1);
  func_0x00010beab3e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beab410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupCTAImage_1125886a8);
  return;
}



/* Entry: 1060957ec; end: 106095c13; -[SCLensBitmojiAlertUIController _setupBlurBackgroundView] */

void FUN_1060957ec(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *unaff_x19;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  double dVar10;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puStack_e8 = unaff_x19;
  if (*(long *)(param_2 + 0x80) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_3,0x10);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    puStack_a0 = puVar1;
    _objc_alloc();
    func_0x00010c00ee20();
    uVar9 = *(undefined8 *)(param_2 + 0x80);
    *(undefined **)(param_2 + 0x80) = puVar8;
    _objc_release(uVar9);
    func_0x00010c219b60(*(undefined8 *)(param_2 + 0x80),param_3,0);
    uVar9 = *(undefined8 *)(param_2 + 0x98);
    func_0x00010c08c0e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf525a0();
    uVar2 = *(undefined8 *)(param_2 + 0x80);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(param_1);
    _objc_release(uVar2);
    _objc_release(uVar9);
    uVar9 = *(undefined8 *)(param_2 + 0x80);
    func_0x00010c08c0e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar9);
    uVar9 = *(undefined8 *)(param_2 + 0x80);
    func_0x00010c08c0e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3fc99999a0000000);
    _objc_release(uVar9);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar9 = *(undefined8 *)(param_2 + 0x80);
    func_0x00010c08c0e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar9);
    _objc_release(puVar1);
    func_0x00010c066fa0(*(undefined8 *)(param_2 + 0x78),param_3,*(undefined8 *)(param_2 + 0x80),0);
    func_0x00010befbb60(*(undefined8 *)(param_2 + 0x78),param_3,*(undefined8 *)(param_2 + 0x98));
    puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)(param_2 + 0x80);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_2 + 0x98);
    uStack_a8 = uVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar9;
    func_0x00010bf493a0(uVar2,param_3,uVar9);
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = *(undefined8 *)(param_2 + 0x80);
    uStack_b8 = uVar2;
    uStack_98 = uVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = *(undefined8 *)(param_2 + 0x98);
    uStack_c0 = unaff_x27;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0(unaff_x27,param_3,unaff_x25);
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = *(undefined8 *)(param_2 + 0x80);
    uStack_90 = unaff_x27;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_2 + 0x98);
    func_0x00010bf1ff80(uVar9);
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = unaff_x28;
    func_0x00010bf493a0(unaff_x28,param_3,uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + 0x80);
    uStack_88 = unaff_x26;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x98);
    func_0x00010c08de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = uVar2;
    func_0x00010bf493a0(uVar2,param_3,uVar3);
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = unaff_x23;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_98,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_c8,param_3,unaff_x24);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(unaff_x26);
    _objc_release(uVar9);
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    _objc_release(unaff_x25);
    _objc_release(uStack_c0);
    _objc_release(uStack_b8);
    _objc_release(uStack_b0);
    _objc_release(uStack_a8);
    unaff_x20 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_alloc();
    unaff_x22 = puStack_a0;
    puVar1 = PTR__OBJC_CLASS___UIVibrancyEffect_1126c78c8;
    func_0x00010bf8cd80(PTR__OBJC_CLASS___UIVibrancyEffect_1126c78c8,param_3,puStack_a0,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00ee20(unaff_x20,param_3,puVar1);
    _objc_release(puVar1);
    uVar9 = *(undefined8 *)(param_2 + 0x80);
    func_0x00010bf4dce0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(uVar9);
    unaff_x21 = unaff_x20;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
    puVar1 = unaff_x22;
    _objc_release();
    puStack_e8 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_106095c14;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar4 = puStack_e8;
  uStack_130 = unaff_x28;
  uStack_128 = unaff_x27;
  uStack_120 = unaff_x26;
  uStack_118 = unaff_x25;
  puStack_110 = unaff_x24;
  uStack_108 = unaff_x23;
  puStack_100 = unaff_x22;
  puStack_f8 = unaff_x21;
  puStack_f0 = unaff_x20;
  puStack_e0 = &stack0xfffffffffffffff0;
  if (*(long *)(puVar1 + 0xd0) == 0) {
    puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar9 = *(undefined8 *)(puVar1 + 0xd0);
    *(undefined **)(puVar1 + 0xd0) = puVar8;
    _objc_release(uVar9);
    puVar8 = puVar1 + 0x50;
    _objc_loadWeakRetained(puVar8);
    func_0x00010befbb60();
    _objc_release(puVar8);
    func_0x00010c219b60(*(undefined8 *)(puVar1 + 0xd0),param_3,0);
    puStack_190 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar9 = *(undefined8 *)(puVar1 + 0xd0);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1 + 0x50;
    uStack_168 = uVar9;
    _objc_loadWeakRetained();
    puStack_160 = puVar8;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_170 = puVar8;
    func_0x00010bf49480(0x4010000000000000,uVar9,param_3,puVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(puVar1 + 0xd0);
    uStack_178 = uVar9;
    uStack_158 = uVar9;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1 + 0x50;
    uStack_188 = uVar2;
    _objc_loadWeakRetained();
    puStack_180 = puVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    dVar10 = -4.0;
    puStack_198 = puVar8;
    func_0x00010bf49520(0xc010000000000000,uVar2,param_3,puVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar1 + 0xd0);
    uStack_1a0 = uVar2;
    uStack_150 = uVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = puVar1 + 0x58;
    _objc_loadWeakRetained();
    puVar4 = unaff_x20;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf203a0(puVar1);
    uVar9 = uVar3;
    func_0x00010bf493c0(-43.0 - dVar10,uVar3,param_3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar1 + 0xd0);
    uStack_148 = uVar9;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1 + 0x50;
    _objc_loadWeakRetained(puVar8);
    puVar6 = puVar8;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf493a0(uVar5,param_3,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_140 = uVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_158,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_190,param_3,puVar7);
    _objc_release(puVar7);
    _objc_release(uVar2);
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_release(uVar5);
    _objc_release(uVar9);
    _objc_release(puVar4);
    _objc_release(unaff_x20);
    _objc_release(uVar3);
    _objc_release(uStack_1a0);
    _objc_release(puStack_198);
    _objc_release(puStack_180);
    _objc_release(uStack_188);
    _objc_release(uStack_178);
    _objc_release(puStack_170);
    _objc_release(puStack_160);
    _objc_release(uStack_168);
    puVar8 = *(undefined **)(puVar1 + 0xd0);
    func_0x00010c182220(puVar8,param_3,3);
    puVar4 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar8 + 0x78) != 0) {
    return;
  }
  pcStack_1a8 = FUN_106095ef0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_1c0 = unaff_x20;
  puStack_1b8 = puVar4;
  ppuStack_1b0 = &puStack_e0;
  _objc_alloc_init();
  uVar9 = *(undefined8 *)(puVar8 + 0x78);
  *(undefined **)(puVar8 + 0x78) = puVar1;
  _objc_release(uVar9);
  func_0x00010befbb60(*(undefined8 *)(puVar8 + 0xd0),param_3,*(undefined8 *)(puVar8 + 0x78));
  puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e0 = 0xc2000000;
  pcStack_1d8 = FUN_106095f8c;
  puStack_1d0 = &UNK_1108471b0;
  puStack_1c8 = puVar8;
  func_0x00010c0bbfc0(*(undefined8 *)(puVar8 + 0x78),param_3,&puStack_1e8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106095c14; end: 106095eef; -[SCLensBitmojiAlertUIController _setupView] */

void FUN_106095c14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x20;
  double dVar9;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_1;
  lStack_e8 = unaff_x19;
  if (*(long *)(param_1 + 0xd0) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar8 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined **)(param_1 + 0xd0) = puVar1;
    _objc_release(uVar8);
    lVar7 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar7);
    func_0x00010befbb60();
    _objc_release(lVar7);
    func_0x00010c219b60(*(undefined8 *)(param_1 + 0xd0),param_2,0);
    puStack_c0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar8 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + 0x50;
    uStack_98 = uVar8;
    _objc_loadWeakRetained();
    lStack_90 = lVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lStack_a0 = lVar7;
    func_0x00010bf49480(0x4010000000000000,uVar8,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    uStack_a8 = uVar8;
    uStack_88 = uVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + 0x50;
    uStack_b8 = uVar2;
    _objc_loadWeakRetained();
    lStack_b0 = lVar7;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    dVar9 = -4.0;
    lStack_c8 = lVar7;
    func_0x00010bf49520(0xc010000000000000,uVar2,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0xd0);
    uStack_d0 = uVar2;
    uStack_80 = uVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = param_1 + 0x58;
    _objc_loadWeakRetained();
    lVar4 = unaff_x20;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf203a0(param_1);
    uVar8 = uVar3;
    func_0x00010bf493c0(-43.0 - dVar9,uVar3,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0xd0);
    uStack_78 = uVar8;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar7);
    lVar6 = lVar7;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf493a0(uVar5,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_c0,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(uVar2);
    _objc_release(lVar6);
    _objc_release(lVar7);
    _objc_release(uVar5);
    _objc_release(uVar8);
    _objc_release(lVar4);
    _objc_release(unaff_x20);
    _objc_release(uVar3);
    _objc_release(uStack_d0);
    _objc_release(lStack_c8);
    _objc_release(lStack_b0);
    _objc_release(uStack_b8);
    _objc_release(uStack_a8);
    _objc_release(lStack_a0);
    _objc_release(lStack_90);
    _objc_release(uStack_98);
    lVar7 = *(long *)(param_1 + 0xd0);
    func_0x00010c182220(lVar7,param_2,3);
    lStack_e8 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar7 + 0x78) != 0) {
    return;
  }
  pcStack_d8 = FUN_106095ef0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  lStack_f0 = unaff_x20;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_alloc_init();
  uVar8 = *(undefined8 *)(lVar7 + 0x78);
  *(undefined **)(lVar7 + 0x78) = puVar1;
  _objc_release(uVar8);
  func_0x00010befbb60(*(undefined8 *)(lVar7 + 0xd0),param_2,*(undefined8 *)(lVar7 + 0x78));
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_106095f8c;
  puStack_100 = &UNK_1108471b0;
  lStack_f8 = lVar7;
  func_0x00010c0bbfc0(*(undefined8 *)(lVar7 + 0x78),param_2,&puStack_118);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106095ef0; end: 106095f8b; -[SCLensBitmojiAlertUIController _setupContentView] */

void FUN_106095ef0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x78) = puVar1;
  _objc_release(uVar2);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0xd0),param_2,*(undefined8 *)(param_1 + 0x78));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106095f8c;
  puStack_30 = &UNK_1108471b0;
  lStack_28 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + 0x78),param_2,&puStack_48);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106095f8c; end: 10609605b;  */

void FUN_106095f8c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0,0,0x4020000000000000,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10609605c; end: 10609607b; -[SCLensBitmojiAlertUIController _setupAlert] */

void FUN_10609605c(long param_1)

{
  if (*(long *)(param_1 + 0x98) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0xca) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010beb0eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupUpdateAlert_112589d50);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beabd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupCreateAlert_112588908);
  return;
}



/* Entry: 10609607c; end: 1060961d3; -[SCLensBitmojiAlertUIController _setupUpdateAlert] */

void FUN_10609607c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  *(undefined **)(param_1 + 0x98) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x98),param_2,0);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c25dfa0(uVar3);
  func_0x00010c20eaa0(uVar4,param_2,uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010bfe54e0(uVar3);
  func_0x00010c1aab40(uVar4,param_2,uVar3,0);
  func_0x00010c1732a0(*(undefined8 *)(param_1 + 0x98),param_2,0x68,0);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c26b700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar4,param_2,uVar3,0);
  _objc_release(uVar3);
  lVar2 = *(long *)(param_1 + 0xb8);
  func_0x00010bf25460();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010bf25460(uVar3);
    func_0x00010c16e480(uVar4,param_2,uVar3,0);
  }
  puVar1 = PTR_PTR_1126b0c40;
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010bfe5400(uVar3);
  func_0x00010bfe8d40(0x4030000000000000,0x4030000000000000,puVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(*(undefined8 *)(param_1 + 0x98),param_2,puVar1,0);
  func_0x00010befbd60(*(undefined8 *)(param_1 + 0x98),param_2,param_1,PTR_s__changeOutfit_11252eb10,
                      0x40);
  func_0x00010beab020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060961d4; end: 10609632f; -[SCLensBitmojiAlertUIController _setupCreateAlert] */

void FUN_1060961d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  *(undefined **)(param_1 + 0x98) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x98),param_2,0);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c25dfa0(uVar3);
  func_0x00010c20eaa0(uVar4,param_2,uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010bfe54e0(uVar3);
  func_0x00010c1aab40(uVar4,param_2,uVar3,0);
  func_0x00010c1732a0(*(undefined8 *)(param_1 + 0x98),param_2,0x68,0);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c26b700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar4,param_2,uVar3,0);
  _objc_release(uVar3);
  lVar2 = *(long *)(param_1 + 0xb8);
  func_0x00010bf25460();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010bf25460(uVar3);
    func_0x00010c16e480(uVar4,param_2,uVar3,0);
  }
  puVar1 = PTR_PTR_1126b0c40;
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010bfe5400(uVar3);
  func_0x00010bfe8d40(0x4038000000000000,0x4038000000000000,puVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(*(undefined8 *)(param_1 + 0x98),param_2,puVar1,0);
  func_0x00010befbd60(*(undefined8 *)(param_1 + 0x98),param_2,param_1,PTR_s__linkBitmoji_11252eb08,
                      0x40);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x78),param_2,*(undefined8 *)(param_1 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106096330; end: 106096677; -[SCLensBitmojiAlertUIController _setupCTAImage] */

void FUN_106096330(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0xa0) == 0) {
    lVar1 = *(long *)(param_1 + 0xb8);
    func_0x00010bfe8f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c01bf60();
      uVar13 = *(undefined8 *)(param_1 + 0xa0);
      *(undefined **)(param_1 + 0xa0) = puVar2;
      _objc_release(uVar13);
      func_0x00010c182220(*(undefined8 *)(param_1 + 0xa0),param_2,1);
      func_0x00010c1f61a0(*(undefined8 *)(param_1 + 0xa0),param_2,1);
      func_0x00010c066fe0(*(undefined8 *)(param_1 + 0x78),param_2,*(undefined8 *)(param_1 + 0xa0),
                          *(undefined8 *)(param_1 + 0x98));
      func_0x00010c219b60(*(undefined8 *)(param_1 + 0xa0),param_2,0);
      puStack_b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar3 = *(undefined8 *)(param_1 + 0xa0);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_1 + 0x78);
      uStack_90 = uVar3;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uStack_98 = uVar13;
      func_0x00010bf493a0(uVar3,param_2,uVar13);
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = *(undefined8 *)(param_1 + 0xa0);
      uStack_a0 = uVar3;
      uStack_88 = uVar3;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = *(undefined8 *)(param_1 + 0x98);
      uStack_a8 = unaff_x26;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf493c0(0xc030000000000000,unaff_x26,param_2,unaff_x24);
      _objc_retainAutoreleasedReturnValue();
      unaff_x27 = *(undefined8 *)(param_1 + 0xa0);
      uStack_80 = unaff_x26;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = *(undefined8 *)(param_1 + 0x78);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = unaff_x27;
      func_0x00010bf493a0(unaff_x27,param_2,unaff_x28);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_1 + 0xa0);
      uStack_78 = unaff_x25;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = *(undefined8 *)(param_1 + 0x98);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe8b80(*(undefined8 *)(param_1 + 0xb8));
      unaff_x22 = uVar13;
      func_0x00010bf493c0(uVar13,param_2,unaff_x21);
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_70 = unaff_x22;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puStack_b0,param_2,unaff_x23);
      _objc_release(unaff_x23);
      _objc_release(unaff_x22);
      _objc_release(unaff_x21);
      _objc_release(uVar13);
      _objc_release(unaff_x25);
      _objc_release(unaff_x28);
      _objc_release(unaff_x27);
      _objc_release(unaff_x26);
      _objc_release(unaff_x24);
      _objc_release(uStack_a8);
      _objc_release(uStack_a0);
      _objc_release(uStack_98);
      _objc_release(uStack_90);
    }
  }
  puVar2 = PTR_PTR_1126afd30;
  _objc_alloc();
  func_0x00010bfffc60();
  uVar13 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined **)(param_1 + 0xa8) = puVar2;
  _objc_release(uVar13);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x78),param_2,*(undefined8 *)(param_1 + 0xa8));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0xa8),param_2,0);
  func_0x00010c23d620(*(undefined8 *)(param_1 + 0xa8));
  func_0x00010bf345e0(*(undefined8 *)(param_1 + 0xa0));
  func_0x00010c17a6a0(*(undefined8 *)(param_1 + 0xa8));
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + 0xa8));
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0xa0));
  uVar13 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010bfe8f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be13440(param_1,param_2,uVar13);
  _objc_release(uVar13);
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c08d140();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_106096678;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(lVar1 + 0xb8);
  uStack_110 = unaff_x28;
  uStack_108 = unaff_x27;
  uStack_100 = unaff_x26;
  uStack_f8 = unaff_x25;
  uStack_f0 = unaff_x24;
  puStack_e8 = unaff_x23;
  uStack_e0 = unaff_x22;
  uStack_d8 = unaff_x21;
  uStack_d0 = uVar13;
  lStack_c8 = param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010bfe8f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  if (lVar4 == 0) {
    func_0x00010befbb60(*(undefined8 *)(lVar1 + 0x78),param_2,*(undefined8 *)(lVar1 + 0x98));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar4 = *(long *)(lVar1 + 0x98);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uStack_158 = *(undefined8 *)(lVar1 + 0x78);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lStack_160 = lVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar1 + 0x78);
    lStack_138 = lStack_160;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar1 + 0x98);
    func_0x00010c2a5060(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar5;
    func_0x00010bf493a0(uVar5,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar1 + 0x98);
    uStack_130 = uVar13;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(lVar1 + 0x78);
    func_0x00010bf1ff80(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf493c0(0xc014000000000000,uVar7,param_2,uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = *(undefined **)(lVar1 + 0x78);
    uStack_128 = uVar3;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar1 + 0x98);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493a0(puVar9,param_2,uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_120 = puVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_138,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2,param_2,puVar12);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(uVar10);
  }
  else {
    lVar4 = *(long *)(lVar1 + 0x98);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uStack_158 = *(undefined8 *)(lVar1 + 0x78);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lStack_160 = lVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar1 + 0x98);
    lStack_150 = lStack_160;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar1 + 0x78);
    func_0x00010bf1ff80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar5;
    func_0x00010bf493c0(0xc014000000000000,uVar5,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar1 + 0x98);
    uStack_148 = uVar13;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(lVar1 + 0x78);
    func_0x00010c2a5060(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf493a0(uVar7,param_2,uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_140 = uVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_150,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2,param_2,puVar9);
  }
  _objc_release(puVar9);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lStack_160);
  _objc_release(uStack_158);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c12c960(*(undefined8 *)(lVar4 + 0xd0));
  uVar13 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 *)(lVar4 + 0xa0) = 0;
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(lVar4 + 0x90);
  *(undefined8 *)(lVar4 + 0x90) = 0;
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(lVar4 + 0x88);
  *(undefined8 *)(lVar4 + 0x88) = 0;
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(lVar4 + 0x78);
  *(undefined8 *)(lVar4 + 0x78) = 0;
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(lVar4 + 0x98);
  *(undefined8 *)(lVar4 + 0x98) = 0;
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(lVar4 + 0xd0);
  *(undefined8 *)(lVar4 + 0xd0) = 0;
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(lVar4 + 0x70);
  *(undefined8 *)(lVar4 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar13);
  return;
}



/* Entry: 106096678; end: 1060969d3; -[SCLensBitmojiAlertUIController _setupCTAConstraints] */

void FUN_106096678(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0xb8);
  func_0x00010bfe8f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  if (lVar2 == 0) {
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0x78),param_2,*(undefined8 *)(param_1 + 0x98));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar2 = *(long *)(param_1 + 0x98);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lStack_b0 = lVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    lStack_88 = lStack_b0;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c2a5060(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar3;
    func_0x00010bf493a0(uVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    uStack_80 = uVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf1ff80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493c0(0xc014000000000000,uVar5,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = *(undefined **)(param_1 + 0x78);
    uStack_78 = uVar7;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493a0(puVar8,param_2,uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar11);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x98);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lStack_b0 = lVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    lStack_a0 = lStack_b0;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf1ff80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar3;
    func_0x00010bf493c0(0xc014000000000000,uVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    uStack_98 = uVar12;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c2a5060(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493a0(uVar5,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_a0,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar8);
  }
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar12);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lStack_b0);
  _objc_release(uStack_a8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c12c960(*(undefined8 *)(lVar2 + 0xd0));
  uVar12 = *(undefined8 *)(lVar2 + 0xa0);
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(lVar2 + 0x90);
  *(undefined8 *)(lVar2 + 0x90) = 0;
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(lVar2 + 0x88);
  *(undefined8 *)(lVar2 + 0x88) = 0;
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(lVar2 + 0x78);
  *(undefined8 *)(lVar2 + 0x78) = 0;
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(lVar2 + 0x98);
  *(undefined8 *)(lVar2 + 0x98) = 0;
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(lVar2 + 0xd0);
  *(undefined8 *)(lVar2 + 0xd0) = 0;
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(lVar2 + 0x70);
  *(undefined8 *)(lVar2 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar12);
  return;
}



/* Entry: 1060969d4; end: 106096a47; -[SCLensBitmojiAlertUIController _cleanupUI] */

void FUN_1060969d4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0xd0));
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106096a48; end: 106096aaf; -[SCLensBitmojiAlertUIController _showWithTimers] */

void FUN_106096a48(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c069d00(*(undefined8 *)(param_2 + 0x60));
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010bf6af40(*(undefined8 *)(param_2 + 0xb8));
  func_0x00010c1503c0(ABS(param_1),puVar1,param_3,param_2,PTR_s__showAfterDelay_11252eb18,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  *(undefined **)(param_2 + 0x60) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106096ab0; end: 106096b53; -[SCLensBitmojiAlertUIController _showAfterDelay] */

void FUN_106096ab0(double param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  iVar1 = (int)*(undefined8 *)(param_2 + 0xb8);
  func_0x00010c234ec0();
  if ((iVar1 == 0) || (lVar2 = param_2, func_0x00010beb5b00(), (int)lVar2 != 0)) {
    func_0x00010beb0d80(param_2);
    func_0x00010c069d00(*(undefined8 *)(param_2 + 0x60));
    func_0x00010bf84700(*(undefined8 *)(param_2 + 0xb8));
    puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    if (param_1 != 0.0) {
      func_0x00010bf84700(*(undefined8 *)(param_2 + 0xb8));
      func_0x00010c1503c0(ABS(param_1),puVar3,param_3,param_2,PTR_s__dismissTimerFired_11252eb20,0,0
                         );
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_2 + 0x60);
      *(undefined **)(param_2 + 0x60) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
  }
  return;
}



/* Entry: 106096b54; end: 106096b93; -[SCLensBitmojiAlertUIController _dismissTimerFired] */

void FUN_106096b54(long param_1,undefined8 param_2)

{
  int iVar1;
  
  func_0x00010bfe1840(param_1,param_2,1);
  iVar1 = (int)*(undefined8 *)(param_1 + 0xb8);
  func_0x00010c234ec0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010becdcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__trackAlertImpression_1125910d8);
    return;
  }
  return;
}



/* Entry: 106096b94; end: 106096c1b; -[SCLensBitmojiAlertUIController _trackAlertImpression] */

void FUN_106096b94(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067ec0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010becdcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__trackAlertImpressionWithCount__1125910e0,(long)(int)lVar4);
  return;
}



/* Entry: 106096c1c; end: 106096d1f; -[SCLensBitmojiAlertUIController _trackAlertImpressionWithCount:] */

void FUN_106096c1c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106096d20; end: 106096e5f; -[SCLensBitmojiAlertUIController _shouldShowAlertBasedOnImpressionLimits] */

bool FUN_106096d20(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  undefined *puVar6;
  
  lVar1 = param_2 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c0e00e0(lVar2,param_3,&PTR____CFConstantStringClassReference_110e3cb38);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c067ec0();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c0e00e0(lVar2,param_3,&PTR____CFConstantStringClassReference_110e3cb58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(lVar1);
  if (param_1 <= 0.0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 != (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      _objc_release(puVar4);
      if (param_1 <= 604800.0) {
        bVar5 = (int)lVar3 < 5;
        goto LAB_106096e34;
      }
    }
  }
  func_0x00010be921e0(param_2);
  bVar5 = true;
LAB_106096e34:
  _objc_release(puVar6);
  _objc_release(lVar2);
  return bVar5;
}



/* Entry: 106096e60; end: 106096ef7; -[SCLensBitmojiAlertUIController _resetAlertPreferences] */

void FUN_106096e60(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106096ef8; end: 1060971fb; -[SCLensBitmojiAlertUIController showAnimated:lensId:isBitmojiAvailable:lensPrimaryCategory:lensAttachmentUri:] */

void FUN_106096ef8(long param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  *(char *)(param_1 + 0xca) = (char)param_5;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_4;
  _objc_release(uVar2);
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_6;
  _objc_release(uVar2);
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_7;
  _objc_release(uVar2);
  if (*(char *)(param_1 + 0xc9) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12aaa0();
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + 0xc9) = 0;
    func_0x00010bfe1840(param_1,param_2,0);
  }
  if (((*(byte *)(param_1 + 0xcc) & 1) != 0) || ((*(byte *)(param_1 + 200) & 1) != 0))
  goto LAB_1060971c0;
  puVar3 = PTR_PTR_1126c78d0;
  _objc_alloc();
  lVar4 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar4);
  lVar5 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar5);
  func_0x00010bff8420(puVar3,param_2,lVar4,lVar5,param_6);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined **)(param_1 + 0xb0) = puVar3;
  _objc_release(uVar2);
  _objc_release(lVar5);
  _objc_release(lVar4);
  if (param_5 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    _objc_release(uVar2);
    if (*(long *)(param_1 + 0xb8) != 0) goto LAB_106097078;
    func_0x00010bead8a0(param_1);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010bf550c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = uVar2;
    _objc_release(uVar7);
    if (*(long *)(param_1 + 0xb8) == 0) goto LAB_1060971c0;
LAB_106097078:
    func_0x00010bebbd60(param_1);
  }
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1060971fc;
  puStack_80 = &UNK_110842e18;
  ppuVar6 = &puStack_98;
  lStack_78 = param_1;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar2);
  *(undefined2 *)(param_1 + 200) = 0;
  if (param_3 == 0) {
    func_0x00010c08cdc0(*(undefined8 *)(param_1 + 0xd0));
    (*(code *)ppuVar6[2])(ppuVar6);
  }
  else {
    *(undefined1 *)(param_1 + 200) = 1;
    func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
    puVar1 = PTR__OBJC_CLASS___CATransaction_1126b5718;
    puStack_c8 = puVar3;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10609728c;
    puStack_b0 = &UNK_11084aaa8;
    lStack_a8 = param_1;
    _objc_retain(ppuVar6);
    ppuStack_a0 = ppuVar6;
    func_0x00010c17fb40(puVar1,param_2,&puStack_c8);
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___CAAnimation_1126c78d8;
    func_0x00010c095f00(PTR__OBJC_CLASS___CAAnimation_1126c78d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20(uVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110dc8978);
    _objc_release(puVar3);
    _objc_release(uVar2);
    func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
    _objc_release(ppuStack_a0);
  }
  _objc_release(ppuVar6);
LAB_1060971c0:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 1060971fc; end: 10609728b;  */

void FUN_1060971fc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xcc) = 1;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 200) = 0;
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aef00();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0902a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10609728c; end: 1060972b3;  */

void FUN_10609728c(long param_1)

{
  if ((*(char *)(*(long *)(param_1 + 0x20) + 200) == '\x01') &&
     ((*(byte *)(*(long *)(param_1 + 0x20) + 0xc9) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001060972b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1060972b4; end: 106097497; -[SCLensBitmojiAlertUIController hideAnimated:] */

void FUN_1060972b4(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x60));
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar2);
  if (*(char *)(param_1 + 200) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12aaa0();
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + 200) = 0;
    func_0x00010c235da0(param_1,param_2,0,*(undefined8 *)(param_1 + 0x38),
                        *(undefined1 *)(param_1 + 0xca),*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x48));
  }
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  if ((*(char *)(param_1 + 0xcc) == '\x01') && ((*(byte *)(param_1 + 0xc9) & 1) == 0)) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106097498;
    puStack_60 = &UNK_110842e18;
    ppuVar3 = &puStack_78;
    lStack_58 = param_1;
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12aaa0();
    _objc_release(uVar2);
    *(undefined2 *)(param_1 + 200) = 0;
    if (param_3 == 0) {
      func_0x00010c08cdc0(*(undefined8 *)(param_1 + 0xd0));
      (*(code *)ppuVar3[2])(ppuVar3);
    }
    else {
      *(undefined1 *)(param_1 + 0xc9) = 1;
      func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
      puVar1 = PTR__OBJC_CLASS___CATransaction_1126b5718;
      puStack_a8 = puVar4;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_1060974fc;
      puStack_90 = &UNK_11084aaa8;
      lStack_88 = param_1;
      _objc_retain(ppuVar3);
      ppuStack_80 = ppuVar3;
      func_0x00010c17fb40(puVar1,param_2,&puStack_a8);
      uVar2 = *(undefined8 *)(param_1 + 0xd0);
      func_0x00010c08c0e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___CAAnimation_1126c78d8;
      func_0x00010c095f20(PTR__OBJC_CLASS___CAAnimation_1126c78d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6c20(uVar2,param_2,puVar4,&PTR____CFConstantStringClassReference_110dc8958);
      _objc_release(puVar4);
      _objc_release(uVar2);
      func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
      _objc_release(ppuStack_80);
    }
    _objc_release(ppuVar3);
  }
  return;
}



/* Entry: 106097498; end: 1060974fb;  */

void FUN_106097498(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bddfb40(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xcc) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xc9) = 0;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0902c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060974fc; end: 106097523;  */

void FUN_1060974fc(long param_1)

{
  if ((*(char *)(*(long *)(param_1 + 0x20) + 0xc9) == '\x01') &&
     ((*(byte *)(*(long *)(param_1 + 0x20) + 200) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000106097520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106097524; end: 10609757b; -[SCLensBitmojiAlertUIController pointInside:view:] */

undefined8 FUN_106097524(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0xcc) == '\x01') {
    func_0x00010bf51200(*(undefined8 *)(param_1 + 0xd0));
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010bf20c00(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGRectContainsPoint_110347550)();
    return uVar1;
  }
  return 0;
}



/* Entry: 10609757c; end: 1060975b3; -[SCLensBitmojiAlertUIController _linkBitmoji] */

void FUN_10609757c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfcd3c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060975b4; end: 106097613; -[SCLensBitmojiAlertUIController _changeOutfit] */

void FUN_1060975b4(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0xb8);
  func_0x00010c234ec0();
  if (iVar1 != 0) {
    func_0x00010bfe1840(param_1,param_2,1);
    func_0x00010becdce0(param_1,param_2,5);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfcd3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106097614; end: 10609761b; -[SCLensBitmojiAlertUIController view] */

undefined8 FUN_106097614(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 10609761c; end: 106097623; -[SCLensBitmojiAlertUIController isShown] */

undefined1 FUN_10609761c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xcc);
}



/* Entry: 106097624; end: 10609762b; -[SCLensBitmojiAlertUIController setIsShown:] */

void FUN_106097624(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xcc) = param_3;
  return;
}



/* Entry: 10609762c; end: 106097643; -[SCLensBitmojiAlertUIController delegate] */

void FUN_10609762c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106097644; end: 10609764f; -[SCLensBitmojiAlertUIController setDelegate:] */

void FUN_106097644(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd8,param_3);
  return;
}



/* Entry: 106097650; end: 106097657; -[SCLensBitmojiAlertUIController bottomOffset] */

undefined8 FUN_106097650(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 106097658; end: 10609765f; -[SCLensBitmojiAlertUIController setBottomOffset:] */

void FUN_106097658(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0xe0) = param_1;
  return;
}



/* Entry: 106097660; end: 10609777f; -[SCLensBitmojiAlertUIController .cxx_destruct] */

void FUN_106097660(long param_1)

{
  _objc_destroyWeak(param_1 + 0xd8);
  _objc_storeStrong(param_1 + 0xd0,0);
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
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106097780; end: 106097847; -[SCLensBitmojiCTAConfigCreator initWithBitmojiUserLinkingContentServices:nglStudySettings:lensPrimaryCategory:] */

undefined1 *
FUN_106097780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ef7f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


