/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054cf92c; end: 1054cf933; -[SCManagedStillImageCapturerV2 observeSampleBuffer:] */

void FUN_1054cf92c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e0ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_observeSampleBuffer__112615e10);
  return;
}



/* Entry: 1054cf934; end: 1054cf93b; -[SCManagedStillImageCapturerV2 observeSampleBufferAsynchronously:completion:] */

void FUN_1054cf934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e1010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_observeSampleBufferAsynchronousl_112615e18);
  return;
}



/* Entry: 1054cf93c; end: 1054cf943; -[SCManagedStillImageCapturerV2 stopObservingManagedVideoDataSourceOutputEvent] */

void FUN_1054cf93c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_stopObservingManagedVideoDataSou_112673348);
  return;
}



/* Entry: 1054cf944; end: 1054cf94b; -[SCManagedStillImageCapturerV2 cameraCreationDelayLogger] */

undefined8 FUN_1054cf944(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 1054cf94c; end: 1054cf97b; -[SCManagedStillImageCapturerV2 setCameraCreationDelayLogger:] */

void FUN_1054cf94c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1054cf97c; end: 1054cf983; -[SCManagedStillImageCapturerV2 cameraCaptureLensProvider] */

undefined8 FUN_1054cf97c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1054cf984; end: 1054cf98b; -[SCManagedStillImageCapturerV2 cameraMLRequestHandler] */

undefined8 FUN_1054cf984(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 1054cf98c; end: 1054cf993; -[SCManagedStillImageCapturerV2 setIsCapturingPhoto:] */

void FUN_1054cf98c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa0) = param_3;
  return;
}



/* Entry: 1054cf994; end: 1054cf99b; -[SCManagedStillImageCapturerV2 didFinishPhotoCapture] */

undefined1 FUN_1054cf994(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa1);
}



/* Entry: 1054cf99c; end: 1054cf9a3; -[SCManagedStillImageCapturerV2 setDidFinishPhotoCapture:] */

void FUN_1054cf99c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa1) = param_3;
  return;
}



/* Entry: 1054cf9a4; end: 1054cfa8f; -[SCManagedStillImageCapturerV2 .cxx_destruct] */

void FUN_1054cf9a4(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054cfa90; end: 1054cfb9f; -[SCCaptureFallbackCaptureComponent initWithSystemCaptureComponent:videoBufferCaptureComponent:capturePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1054cfa90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e8a70;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112724790;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112724794;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112724798);
    *(undefined **)((long)puVar1 + (long)_DAT_112724798) = puVar3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272479c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127247a0) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054cfba0; end: 1054cfd27; -[SCCaptureFallbackCaptureComponent capturePhotoImpl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054cfba0(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = param_1;
  func_0x00010c29a000();
  if ((uVar1 & 1) == 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112724790);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfe6fe0();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1054cfd28;
    puStack_68 = &UNK_110890dc8;
    _objc_copyWeak(auStack_60,auStack_58);
    uVar3 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11272479c);
    _objc_copyWeak(auStack_88,auStack_58);
    func_0x00010c0f88c0(uVar4);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 1054cfd28; end: 1054cfdcf;  */

void FUN_1054cfd28(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be80f00(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054cfdd0; end: 1054cfe8f; -[SCCaptureFallbackCaptureComponent deadlineCapturePhotoImpl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054cfdd0(float param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + _DAT_11272479c);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fe0((double)param_1,uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1054cfe90; end: 1054cfec3;  */

void FUN_1054cfe90(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be0e5a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054cfec4; end: 1054d0033; -[SCCaptureFallbackCaptureComponent _fallbackToVideoBufferCapture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054cfec4(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = param_1;
  func_0x00010c255660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((uVar1 == 0) && (uVar1 = param_1, func_0x00010c29a000(), (uVar1 & 1) == 0)) {
    func_0x00010c221680(param_1);
    _objc_initWeak(auStack_48,param_1);
    lVar5 = (long)_DAT_112724794;
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfe6fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar3 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf30f40();
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 1054d0034; end: 1054d0087;  */

void FUN_1054d0034(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be80f00(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054d0088; end: 1054d01db; -[SCCaptureFallbackCaptureComponent _processEvent:isSystem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d0088(ulong param_1,undefined8 param_2,long param_3,int param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_4 != 0) {
    uVar1 = param_1;
    func_0x00010c29a000();
    if ((uVar1 & 1) != 0) goto LAB_1054d0198;
    lVar2 = param_3;
    func_0x00010c24d4a0();
    if (lVar2 == 4) {
      lVar2 = param_3;
      func_0x00010c255660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) {
        func_0x00010be0e5a0(param_1);
        goto LAB_1054d0198;
      }
    }
  }
  lVar2 = param_3;
  func_0x00010c255660(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20be80(param_1);
  _objc_release(lVar2);
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + (long)_DAT_11272479c);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
LAB_1054d0198:
  _objc_release(param_3);
  return;
}



/* Entry: 1054d01dc; end: 1054d0237;  */

void FUN_1054d01dc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bfe6f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054d0238; end: 1054d027f; -[SCCaptureFallbackCaptureComponent setVideoFallbackStarted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d0238(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127247a0;
  _os_unfair_lock_lock(param_1 + lVar1);
  *(undefined1 *)(param_1 + _DAT_1127247a4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + lVar1);
  return;
}



/* Entry: 1054d0280; end: 1054d02cb; -[SCCaptureFallbackCaptureComponent videoFallbackStarted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1054d0280(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127247a0;
  _os_unfair_lock_lock(param_1 + lVar2);
  uVar1 = *(undefined1 *)(param_1 + _DAT_1127247a4);
  _os_unfair_lock_unlock(param_1 + lVar2);
  return uVar1;
}



/* Entry: 1054d02cc; end: 1054d0323; -[SCCaptureFallbackCaptureComponent setStillImageData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d02cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_1127247a0;
  _os_unfair_lock_lock(param_1 + lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127247a8);
  *(undefined8 *)(param_1 + _DAT_1127247a8) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + lVar2);
  return;
}



/* Entry: 1054d0324; end: 1054d0377; -[SCCaptureFallbackCaptureComponent stillImageData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d0324(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127247a0;
  _os_unfair_lock_lock(param_1 + lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127247a8);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054d0378; end: 1054d03e7; -[SCCaptureFallbackCaptureComponent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d0378(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272479c,0);
  _objc_storeStrong(param_1 + _DAT_1127247a8,0);
  _objc_storeStrong(param_1 + _DAT_112724798,0);
  _objc_storeStrong(param_1 + _DAT_112724794,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112724790,0);
  return;
}



/* Entry: 1054d03e8; end: 1054d044f; -[SCCaptureImageCaptureBaseComponent init] */

undefined1 * FUN_1054d03e8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8a78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0xc) = 0;
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1054d0450; end: 1054d048f; -[SCCaptureImageCaptureBaseComponent capturePhoto] */

void FUN_1054d0450(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010bf30fa0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010c1790e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf30f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_capturePhotoImpl_1125a9d80);
  return;
}



/* Entry: 1054d0490; end: 1054d04e3; -[SCCaptureImageCaptureBaseComponent deadlineCapturePhoto:] */

void FUN_1054d0490(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_2;
  func_0x00010bf65ea0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010c189e40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bf65e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2,PTR_s_deadlineCapturePhotoImpl__1125b7148);
  return;
}



/* Entry: 1054d04e4; end: 1054d04e7; -[SCCaptureImageCaptureBaseComponent capturePhotoImpl] */

void FUN_1054d04e4(void)

{
  return;
}



/* Entry: 1054d04e8; end: 1054d04eb; -[SCCaptureImageCaptureBaseComponent deadlineCapturePhotoImpl:] */

void FUN_1054d04e8(void)

{
  return;
}



/* Entry: 1054d04ec; end: 1054d0513; -[SCCaptureImageCaptureBaseComponent imageCaptureComponentEventSubject] */

void FUN_1054d04ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054d0514; end: 1054d0543; -[SCCaptureImageCaptureBaseComponent setCapturePhotoProcessed:] */

void FUN_1054d0514(long param_1,undefined8 param_2,undefined1 param_3)

{
  _os_unfair_lock_lock(param_1 + 0xc);
  *(undefined1 *)(param_1 + 9) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0xc);
  return;
}



/* Entry: 1054d0544; end: 1054d0577; -[SCCaptureImageCaptureBaseComponent capturePhotoProcessed] */

undefined1 FUN_1054d0544(long param_1)

{
  undefined1 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0xc);
  uVar1 = *(undefined1 *)(param_1 + 9);
  _os_unfair_lock_unlock(param_1 + 0xc);
  return uVar1;
}



/* Entry: 1054d0578; end: 1054d05a7; -[SCCaptureImageCaptureBaseComponent setDeadlineCapturePhotoProcessed:] */

void FUN_1054d0578(long param_1,undefined8 param_2,undefined1 param_3)

{
  _os_unfair_lock_lock(param_1 + 0xc);
  *(undefined1 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0xc);
  return;
}



/* Entry: 1054d05a8; end: 1054d05db; -[SCCaptureImageCaptureBaseComponent deadlineCapturePhotoProcessed] */

undefined1 FUN_1054d05a8(long param_1)

{
  undefined1 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0xc);
  uVar1 = *(undefined1 *)(param_1 + 8);
  _os_unfair_lock_unlock(param_1 + 0xc);
  return uVar1;
}



/* Entry: 1054d05dc; end: 1054d05e3; -[SCCaptureImageCaptureBaseComponent imageCaptureEventObservable] */

undefined8 FUN_1054d05dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1054d05e4; end: 1054d05ef; -[SCCaptureImageCaptureBaseComponent .cxx_destruct] */

void FUN_1054d05e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1054d05f0; end: 1054d0c7f; +[SCCaptureImageCaptureComponentFactory captureComponentWithCaptureSession:captureConfiguration:captureResource:captureDeviceManager:cameraCreationDelayLogger:videoDataSourceObserver:cameraCaptureLensProvider:systemConfiguration:audioSession:capturePerformer:cameraMLRequestHandler:error:] */

void FUN_1054d05f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 *param_14)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
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
  _objc_retain(param_13);
  uVar1 = param_5;
  func_0x00010c076b60();
  if ((uVar1 & 1) == 0) {
    puVar10 = PTR_PTR_1126b9e20;
    _objc_alloc(PTR_PTR_1126b9e20);
    func_0x00010bffc880();
  }
  else {
    uVar1 = param_5;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf51e00();
    _objc_release(uVar1);
    lVar3 = param_1;
    func_0x00010beb7500();
    uVar1 = param_5;
    func_0x00010bf70ba0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c070860();
    _objc_release(uVar4);
    _objc_release(uVar1);
    uVar5 = param_7;
    func_0x00010c269d40(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_5;
    func_0x00010bf70ba0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0db600();
    func_0x00010c0a1f80(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar5);
    if ((int)lVar3 == 0) {
      lVar3 = param_1;
      func_0x00010be45720();
      func_0x00010befa880(param_3);
      uVar5 = param_3;
      func_0x00010c0fb4a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bddb560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      puVar9 = PTR_PTR_1126b9e30;
      if (param_1 == 0) {
        puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        puVar10 = (undefined *)0x0;
        *param_14 = puVar9;
      }
      else {
        uVar5 = param_3;
        func_0x00010c0fb4a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_9;
        func_0x00010bef0ae0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        func_0x00010c0fb720();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(uVar5);
        puVar10 = PTR__OBJC_CLASS___AVCapturePhotoBracketSettings_1126b9e38;
        _objc_opt_class(PTR__OBJC_CLASS___AVCapturePhotoBracketSettings_1126b9e38);
        puVar7 = puVar9;
        _objc_opt_isKindOfClass(puVar9,puVar10);
        if (((ulong)puVar7 & 1) != 0) {
          uVar5 = param_7;
          func_0x00010c269d40(param_7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a1f20();
          _objc_release(uVar5);
        }
        puVar7 = PTR_PTR_1126ae720;
        if ((int)lVar3 == 0) {
          puVar10 = PTR_PTR_1126b9e40;
          _objc_alloc(PTR_PTR_1126b9e40);
          func_0x00010bffc9a0();
        }
        else {
          _objc_retain(param_3);
          _objc_retain(param_5);
          _objc_retain(puVar9);
          _objc_retain(param_4);
          _objc_retain(param_9);
          _objc_retain(param_11);
          _objc_retain(param_7);
          _objc_retain(param_12);
          func_0x00010bf11fe0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR_PTR_1126ae720;
          _objc_retain(param_5);
          _objc_retain(param_4);
          _objc_retain(param_7);
          _objc_retain(param_9);
          _objc_retain(param_8);
          _objc_retain(param_12);
          _objc_retain(param_13);
          func_0x00010bf11fe0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR_PTR_1126b9e48;
          _objc_alloc(PTR_PTR_1126b9e48);
          func_0x00010c04fe80();
          _objc_release(puVar8);
          _objc_release(param_13);
          _objc_release(param_12);
          _objc_release(param_8);
          _objc_release(param_9);
          _objc_release(param_7);
          _objc_release(param_4);
          _objc_release(param_5);
          _objc_release(puVar7);
          _objc_release(param_12);
          _objc_release(param_7);
          _objc_release(param_11);
          _objc_release(param_9);
          _objc_release(param_4);
          _objc_release(puVar9);
          _objc_release(param_5);
          _objc_release(param_3);
        }
        _objc_release(puVar9);
        _objc_release(param_1);
      }
    }
    else {
      puVar10 = PTR_PTR_1126b9e28;
      _objc_alloc(PTR_PTR_1126b9e28);
      func_0x00010bffc8c0();
    }
    _objc_release(uVar2);
  }
  _objc_release(param_13);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1054d0c80; end: 1054d0d0f;  */

void FUN_1054d0c80(void)

{
  _objc_alloc(PTR_PTR_1126b9e40);
  func_0x00010bffc9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054d0d10; end: 1054d0dbf; +[SCCaptureImageCaptureComponentFactory _shouldUseVideoBufferCaptureWithCaptureSession:captureConfiguation:capturerState:] */

uint FUN_1054d0d10(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_5;
  _objc_retain();
  func_0x0001091a2614();
  if (lVar1 == 0) {
    uVar2 = param_3;
    func_0x00010c078000();
    if ((uVar2 & 1) == 0) {
      func_0x00010be45720(param_1,param_2,param_4,param_5);
      uVar3 = param_4;
      func_0x00010c22e820(param_4);
      uVar4 = (uint)uVar3 & (uint)param_1;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = (uint)(lVar1 == 1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1054d0dc0; end: 1054d0e6b; +[SCCaptureImageCaptureComponentFactory _isVideoBufferCaptureSupportedWithCaptureConfiguation:capturerState:] */

byte FUN_1054d0dc0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00010bfb24e0();
  if ((int)lVar3 == 0) {
    bVar1 = true;
  }
  else {
    lVar3 = param_4;
    func_0x00010c1410c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c141120();
    bVar1 = lVar4 == 2;
    _objc_release(lVar3);
  }
  lVar3 = param_3;
  func_0x00010c078b80();
  if ((int)lVar3 == 0) {
    bVar2 = true;
  }
  else {
    lVar3 = param_3;
    func_0x00010c0fb6a0(param_3);
    bVar2 = lVar3 == 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1 & bVar2;
}



/* Entry: 1054d0e6c; end: 1054d107b; +[SCCaptureImageCaptureComponentFactory _captureConnectionFromPhotoOutput:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 **
FUN_1054d0e6c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 **unaff_x21;
  undefined8 **ppuVar11;
  undefined8 **unaff_x23;
  undefined8 **unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *puStack_270;
  undefined *puStack_268;
  undefined8 *puStack_260;
  long lStack_258;
  ulong uStack_250;
  ulong uStack_248;
  undefined8 **ppuStack_240;
  undefined8 **ppuStack_238;
  undefined8 **ppuStack_230;
  undefined8 **ppuStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined8 **ppuStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf48e00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  _objc_retain(puVar3);
  puVar7 = &uStack_1b0;
  puVar8 = auStack_f0;
  uVar9 = 0x10;
  puVar4 = puVar3;
  func_0x00010bf52a60();
  puStack_1f8 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    unaff_x21 = (undefined8 **)*plStack_1a0;
    param_3 = *(undefined8 **)PTR__AVMediaTypeVideo_110348090;
    ppuStack_200 = unaff_x21;
    do {
      unaff_x28 = (undefined8 *)0x0;
      do {
        if ((undefined8 **)*plStack_1a0 != unaff_x21) {
          _objc_enumerationMutation(puVar3);
        }
        ppuVar11 = *(undefined8 ***)(lStack_1a8 + (long)unaff_x28 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        unaff_x23 = ppuVar11;
        func_0x00010c065e00();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = auStack_170;
        uVar9 = 0x10;
        ppuVar5 = unaff_x23;
        func_0x00010bf52a60();
        if (ppuVar5 != (undefined8 **)0x0) {
          unaff_x27 = *plStack_1e0;
          unaff_x24 = ppuVar5;
          do {
            unaff_x21 = (undefined8 **)0x0;
            do {
              if (*plStack_1e0 != unaff_x27) {
                _objc_enumerationMutation(unaff_x23);
              }
              unaff_x25 = *(ulong *)(lStack_1e8 + (long)unaff_x21 * 8);
              func_0x00010c0c6c20();
              _objc_retainAutoreleasedReturnValue();
              unaff_x26 = unaff_x25;
              puVar7 = param_3;
              func_0x00010c071ae0();
              _objc_release(unaff_x25);
              if ((unaff_x26 & 1) != 0) {
                _objc_retain(ppuVar11);
                _objc_release(unaff_x23);
                goto LAB_1054d102c;
              }
              unaff_x21 = (undefined8 **)((long)unaff_x21 + 1);
            } while (unaff_x24 != unaff_x21);
            puVar8 = auStack_170;
            uVar9 = 0x10;
            unaff_x24 = unaff_x23;
            func_0x00010bf52a60();
          } while (unaff_x24 != (undefined8 **)0x0);
        }
        _objc_release(unaff_x23);
        unaff_x21 = ppuStack_200;
        unaff_x28 = (undefined8 *)((long)unaff_x28 + 1);
      } while (unaff_x28 != puStack_1f8);
      puVar7 = &uStack_1b0;
      puVar8 = auStack_f0;
      uVar9 = 0x10;
      puVar4 = puVar3;
      func_0x00010bf52a60();
      puStack_1f8 = puVar4;
    } while (puVar4 != (undefined8 *)0x0);
  }
  ppuVar11 = (undefined8 **)0x0;
LAB_1054d102c:
  _objc_release(puVar3);
  puVar4 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar11);
    return ppuVar11;
  }
  ___stack_chk_fail();
  puVar2 = puStack_1f8;
  ppuVar1 = ppuStack_200;
  pcStack_208 = FUN_1054d107c;
  puStack_260 = unaff_x28;
  lStack_258 = unaff_x27;
  uStack_250 = unaff_x26;
  uStack_248 = unaff_x25;
  ppuStack_240 = unaff_x24;
  ppuStack_238 = unaff_x23;
  ppuStack_230 = ppuVar11;
  ppuStack_228 = unaff_x21;
  puStack_220 = param_3;
  puStack_218 = puVar3;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  _objc_retain(uVar9);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(ppuVar1);
  _objc_retain(puVar2);
  puStack_268 = PTR_PTR_1126e8a80;
  ppuVar5 = &puStack_270;
  puStack_270 = puVar4;
  _objc_msgSendSuper2(ppuVar5,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined8 **)0x0) {
    lVar10 = (long)_DAT_1127247bc;
    _objc_retain(puVar7);
    uVar6 = *(undefined8 *)((long)ppuVar5 + lVar10);
    *(undefined8 **)((long)ppuVar5 + lVar10) = puVar7;
    _objc_release(uVar6);
    _objc_storeWeak((long)ppuVar5 + (long)_DAT_1127247c0,puVar8);
    lVar10 = (long)_DAT_1127247c4;
    _objc_retain(uVar9);
    uVar6 = *(undefined8 *)((long)ppuVar5 + lVar10);
    *(undefined8 *)((long)ppuVar5 + lVar10) = uVar9;
    _objc_release(uVar6);
    lVar10 = (long)_DAT_1127247c8;
    _objc_retain(param_6);
    uVar6 = *(undefined8 *)((long)ppuVar5 + lVar10);
    *(undefined8 *)((long)ppuVar5 + lVar10) = param_6;
    _objc_release(uVar6);
    lVar10 = (long)_DAT_1127247cc;
    _objc_retain(param_7);
    uVar6 = *(undefined8 *)((long)ppuVar5 + lVar10);
    *(undefined8 *)((long)ppuVar5 + lVar10) = param_7;
    _objc_release(uVar6);
    lVar10 = (long)_DAT_1127247d0;
    _objc_retain(param_8);
    uVar6 = *(undefined8 *)((long)ppuVar5 + lVar10);
    *(undefined8 *)((long)ppuVar5 + lVar10) = param_8;
    _objc_release(uVar6);
    lVar10 = (long)_DAT_1127247d4;
    _objc_retain(ppuVar1);
    uVar6 = *(undefined8 *)((long)ppuVar5 + lVar10);
    *(undefined8 ***)((long)ppuVar5 + lVar10) = ppuVar1;
    _objc_release(uVar6);
    lVar10 = (long)_DAT_1127247d8;
    _objc_retain(puVar2);
    uVar6 = *(undefined8 *)((long)ppuVar5 + lVar10);
    *(undefined8 **)((long)ppuVar5 + lVar10) = puVar2;
    _objc_release(uVar6);
  }
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  return ppuVar5;
}



/* Entry: 1054d107c; end: 1054d124b; -[SCCaptureSystemCaptureComponent initWithCaptureSession:captureResource:photoSettings:captureConfiguration:cameraCaptureLensProvider:audioSession:cameraCreationDelayLogger:capturePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1054d107c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e8a80;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127247bc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127247c0,param_4);
    lVar3 = (long)_DAT_1127247c4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127247c8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127247cc;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127247d0;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127247d4;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127247d8;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
  }
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



/* Entry: 1054d124c; end: 1054d12fb; -[SCCaptureSystemCaptureComponent capturePhotoImpl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d124c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127247d8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f88c0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1054d12fc; end: 1054d13cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d12fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010beafc20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_1127247d4);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a2060();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + _DAT_1127247bc);
      func_0x00010c0fb4a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf30fc0();
      _objc_release(uVar2);
    }
    else {
      func_0x00010be83fa0(param_1,param_2,0,0,lVar1);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054d13d0; end: 1054d1437; -[SCCaptureSystemCaptureComponent captureOutput:willBeginCaptureForResolvedSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d13d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127247d4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1fa0();
  _objc_release(uVar1);
  func_0x00010be83fa0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be052f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__disposeShutterSound_11255ee58);
  return;
}



/* Entry: 1054d1438; end: 1054d149f; -[SCCaptureSystemCaptureComponent captureOutput:willCapturePhotoForResolvedSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d1438(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127247d4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1fa0();
  _objc_release(uVar1);
  func_0x00010be83fa0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be052f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__disposeShutterSound_11255ee58);
  return;
}



/* Entry: 1054d14a0; end: 1054d1517; -[SCCaptureSystemCaptureComponent captureOutput:didCapturePhotoForResolvedSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d14a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127247d4);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1fe0();
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be83fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__publishEventWithStage_stillImag_11257e988,3,0,0);
  return;
}



/* Entry: 1054d1518; end: 1054d165b; -[SCCaptureSystemCaptureComponent captureOutput:didFinishProcessingPhoto:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d1518(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127247d4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1fa0();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127247d8);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054d165c; end: 1054d17a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d165c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar5 = PTR_PTR_1126b9e50;
  if (lVar1 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(lVar1 + _DAT_1127247c8);
    uVar9 = *(undefined8 *)(lVar1 + _DAT_1127247cc);
    lVar2 = lVar1 + _DAT_1127247c0;
    _objc_loadWeakRetained(lVar2);
    uVar10 = *(undefined8 *)(lVar1 + _DAT_1127247d4);
    _objc_retain();
    lVar3 = lVar2;
    func_0x00010c299c60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c29f620();
    func_0x00010c255680(puVar5,param_2,uVar7,uVar8,uVar9,lVar2,uVar10,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar2);
    if (puVar5 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110de5ed8,0x2714,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be83fa0(lVar1,param_2,4,0,puVar6);
      _objc_release(puVar6);
    }
    else {
      func_0x00010be83fa0(lVar1,param_2,4,puVar5,0);
    }
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054d17a8; end: 1054d18bf; -[SCCaptureSystemCaptureComponent _publishEventWithStage:stillImageData:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d17a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127247d8);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1054d18c0; end: 1054d1943;  */

void FUN_1054d18c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bfe6f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b9e58;
    _objc_alloc(PTR_PTR_1126b9e58);
    func_0x00010c04b7c0();
    func_0x00010c0d9840(lVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054d1944; end: 1054d1a9b; -[SCCaptureSystemCaptureComponent _setupShutterSoundDisposingTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d1944(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_1127247d0;
  uVar1 = *(ulong *)(param_1 + lVar7);
  func_0x00010c154dc0();
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + _DAT_1127247c8);
    func_0x00010bf0ef40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010c162480(*(undefined8 *)(param_1 + lVar7));
    }
  }
  func_0x00010bec18e0(param_1);
  puVar3 = (undefined *)0x0;
  while( true ) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
      return;
    }
    ___stack_chk_fail();
    if (param_2 != 1) break;
    _objc_begin_catch();
    _objc_retain();
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_end_catch();
    puVar3 = puVar5;
  }
  __Unwind_Resume(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdb9f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__AudioServicesDisposeSystemSoundID_11034af60)(0x454);
  return;
}



/* Entry: 1054d1a9c; end: 1054d1aa3; -[SCCaptureSystemCaptureComponent _disposeShutterSound] */

void FUN_1054d1a9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__AudioServicesDisposeSystemSoundID_11034af60)(0x454);
  return;
}



/* Entry: 1054d1aa4; end: 1054d1c7b; -[SCCaptureSystemCaptureComponent _startShutterSoundDisposingTimerIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d1aa4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  *(undefined1 *)(param_1 + _DAT_1127247dc) = 0;
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1054d1c7c;
  puStack_78 = &UNK_1108434b0;
  _objc_copyWeak(auStack_70,auStack_68);
  _AudioServicesPlaySystemSoundWithCompletion(0x454,&puStack_90);
  lVar5 = (long)_DAT_1127247e0;
  if (*(long *)(param_1 + lVar5) == 0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar4);
  }
  lVar6 = (long)_DAT_1127247e4;
  if (*(long *)(param_1 + lVar6) == 0) {
    _objc_initWeak(auStack_98,param_1);
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1054d1ca8;
    puStack_b8 = &UNK_110890e58;
    _objc_copyWeak(auStack_b0,auStack_98);
    uStack_a0 = 0x3ff0000000000000;
    uStack_a8 = 0x40c3880000000000;
    ppuVar3 = &puStack_d0;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined ***)(param_1 + lVar6) = ppuVar3;
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_98);
  }
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  _objc_copyWeak(auStack_d8,auStack_68);
  func_0x00010c0f7fc0(uVar4);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 1054d1c7c; end: 1054d1ca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d1c7c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_1127247dc) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1054d1ca8; end: 1054d1d7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d1ca8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _AudioServicesDisposeSystemSoundID(0x454);
    dVar3 = *(double *)(param_1 + 0x28);
    if (2.220446049250313e-16 < dVar3) {
      _usleep((int)dVar3);
    }
    if ((*(byte *)(lVar1 + _DAT_1127247dc) & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      dVar4 = *(double *)(param_1 + 0x30);
      _objc_release(puVar2);
      if (dVar3 < dVar4) {
        (**(code **)(*(long *)(lVar1 + _DAT_1127247e4) + 0x10))
                  (*(long *)(lVar1 + _DAT_1127247e4),param_2);
      }
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054d1d80; end: 1054d1def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d1d80(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_1127247e4);
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054d1df0; end: 1054d1eab; -[SCCaptureSystemCaptureComponent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d1df0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127247d8,0);
  _objc_storeStrong(param_1 + _DAT_1127247e4,0);
  _objc_storeStrong(param_1 + _DAT_1127247e0,0);
  _objc_storeStrong(param_1 + _DAT_1127247d0,0);
  _objc_storeStrong(param_1 + _DAT_1127247d4,0);
  _objc_storeStrong(param_1 + _DAT_1127247cc,0);
  _objc_storeStrong(param_1 + _DAT_1127247c8,0);
  _objc_storeStrong(param_1 + _DAT_1127247c4,0);
  _objc_storeStrong(param_1 + _DAT_1127247bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127247c0);
  return;
}



/* Entry: 1054d1eac; end: 1054d2053; -[SCCaptureVideoBufferCaptureComponent initWithCaptureResource:captureConfiguration:cameraCreationDelayLogger:cameraCaptureLensProvider:videoDataSourceObserver:capturePerformer:cameraMLRequestHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1054d1eac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
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
  puStack_68 = PTR_PTR_1126e8a88;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127247e8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127247ec;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127247f0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127247f4;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127247f8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127247fc;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112724800;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
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



/* Entry: 1054d2054; end: 1054d217f; -[SCCaptureVideoBufferCaptureComponent capturePhotoImpl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d2054(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  lVar1 = *(long *)(param_1 + _DAT_1127247f8);
  func_0x00010bfaf580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127247fc);
  if (lVar1 == 0) {
    puVar3 = auStack_58;
    _objc_copyWeak(puVar3,auStack_28);
    func_0x00010c0f88c0(uVar2);
  }
  else {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1054d2180;
    puStack_38 = &UNK_1108434b0;
    puVar3 = auStack_30;
    _objc_copyWeak(puVar3,auStack_28);
    func_0x00010c0f88c0(uVar2);
  }
  _objc_destroyWeak(puVar3);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1054d2180; end: 1054d2257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d2180(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127247f8);
    func_0x00010bfaf580(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be81240(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054d2258; end: 1054d231f; -[SCCaptureVideoBufferCaptureComponent _orientationOfImageCreatedFromVideoSourceWithDevicePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1054d2258(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_1127247e8;
  uVar2 = *(ulong *)(param_1 + lVar7);
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29a740();
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c299c60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c29f620();
  func_0x000100709514(uVar3,uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c076b60();
  if (iVar1 != 0) {
    puVar6 = PTR_PTR_1126aff08;
    func_0x00010c06cea0();
    if (((ulong)puVar6 & 1) == 0) {
      if (uVar3 < 8) {
        return *(ulong *)(&UNK_10dfb2a20 + uVar3 * 8);
      }
      return 7;
    }
  }
  return uVar3;
}



/* Entry: 1054d2320; end: 1054d2513; -[SCCaptureVideoBufferCaptureComponent _processFingerDownCaptureData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d2320(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  
  lVar7 = (long)_DAT_1127247ec;
  uVar6 = *(undefined8 *)(param_2 + lVar7);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1fa0();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_2 + lVar7);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1f60();
  _objc_release(uVar6);
  func_0x00010be83fa0(param_2,param_3,1,0,0);
  uVar1 = param_4;
  func_0x00010c083f60(param_4);
  func_0x00010bf9d880(param_4);
  uVar8 = (undefined4)param_1;
  func_0x00010bf21200(param_4);
  puVar4 = PTR_PTR_1126b9e50;
  uVar2 = param_4;
  func_0x00010bfe6ac0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + _DAT_1127247f8);
  uVar3 = param_4;
  func_0x00010bf29a20(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c2556a0(puVar4,param_3,uVar2,uVar6,uVar1 & 0xffffffff | param_1 << 0x20,uVar8,uVar3,
                      *(undefined8 *)(param_2 + _DAT_1127247f0),
                      *(undefined8 *)(param_2 + _DAT_1127247e8),*(undefined8 *)(param_2 + lVar7),1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_3,
                        &PTR____CFConstantStringClassReference_110de5ed8,0x2718,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be83fa0(param_2,param_3,4,0,puVar5);
    _objc_release(puVar5);
  }
  else {
    func_0x00010be83fa0(param_2,param_3,4,puVar4,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1054d2514; end: 1054d25df; -[SCCaptureVideoBufferCaptureComponent _didCaptureVideoBuffer:devicePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d2514(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _CFRetain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127247fc);
  _objc_copyWeak(auStack_50,auStack_38);
  uStack_48 = param_4;
  uStack_40 = param_3;
  func_0x00010c0f88c0(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1054d25e0; end: 1054d2963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d25e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_70 [16];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_1054d2940;
  lVar9 = (long)_DAT_1127247ec;
  uVar2 = *(undefined8 *)(lVar1 + lVar9);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1fa0();
  _objc_release(uVar2);
  func_0x00010be83fa0(lVar1);
  func_0x00010be6e5a0(lVar1);
  lVar10 = (long)_DAT_1127247f8;
  uVar2 = *(undefined8 *)(lVar1 + lVar10);
  func_0x00010c22df60();
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if ((int)uVar2 == 0) {
    _CMSampleBufferGetImageBuffer(*(undefined8 *)(param_1 + 0x30));
    func_0x00010bfe96e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) goto LAB_1054d2798;
LAB_1054d28e8:
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be83fa0(lVar1);
    _CFRelease(*(undefined8 *)(param_1 + 0x30));
  }
  else {
    _objc_autoreleasePoolPush();
    lVar8 = *(long *)(lVar1 + _DAT_112724800);
    uVar3 = *(undefined8 *)(lVar1 + lVar10);
    func_0x00010c262c00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _CMSampleBufferGetImageBuffer(*(undefined8 *)(param_1 + 0x30));
    func_0x00010bf086a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    lVar10 = lVar8;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar10 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + lVar9);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c0b3ae0(lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a2120(uVar3);
      _objc_release(lVar9);
      _objc_release(uVar3);
    }
    lVar9 = lVar8;
    func_0x00010c0fca00();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (lVar9 == 0) {
      _CMSampleBufferGetImageBuffer(*(undefined8 *)(param_1 + 0x30));
    }
    else {
      func_0x00010c0fca00(lVar8);
    }
    func_0x00010bfe96e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_autoreleasePoolPop(uVar2);
    if (puVar4 == (undefined *)0x0) goto LAB_1054d28e8;
LAB_1054d2798:
    func_0x000100709e4c(*(undefined8 *)(param_1 + 0x30),auStack_70);
    puVar5 = *(undefined **)(param_1 + 0x30);
    func_0x000109046798(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0d3c80();
    _objc_release(puVar5);
    func_0x00010c1d0640(puVar6);
    _CFRelease(*(undefined8 *)(param_1 + 0x30));
    puVar5 = PTR_PTR_1126b9e50;
    func_0x00010c2556a0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be83fa0(lVar1);
      _objc_release(puVar7);
    }
    else {
      func_0x00010be83fa0(lVar1);
    }
    _objc_release(puVar5);
  }
  _objc_release(puVar6);
  _objc_release(puVar4);
LAB_1054d2940:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054d2964; end: 1054d2a13; -[SCCaptureVideoBufferCaptureComponent _fetchVideoBufferAndCapture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d2964(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127247f4);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bfa79a0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1054d2a14; end: 1054d2a5f;  */

void FUN_1054d2a14(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdfc720(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054d2a60; end: 1054d2b2b; -[SCCaptureVideoBufferCaptureComponent _publishEventWithStage:stillImageData:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d2a60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127247fc);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1054d2b2c;
  puStack_68 = &UNK_11084d788;
  lStack_60 = param_1;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_3;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f88c0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1054d2b2c; end: 1054d2b8f;  */

void FUN_1054d2b2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe6f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9e58;
  _objc_alloc(PTR_PTR_1126b9e58);
  func_0x00010c04b7c0();
  func_0x00010c0d9840(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054d2b90; end: 1054d2c1f; -[SCCaptureVideoBufferCaptureComponent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d2b90(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112724800,0);
  _objc_storeStrong(param_1 + _DAT_1127247fc,0);
  _objc_storeStrong(param_1 + _DAT_1127247f4,0);
  _objc_storeStrong(param_1 + _DAT_1127247f0,0);
  _objc_storeStrong(param_1 + _DAT_1127247f8,0);
  _objc_storeStrong(param_1 + _DAT_1127247e8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127247ec,0);
  return;
}



/* Entry: 1054d2c20; end: 1054d2e2b; -[SCCaptureVideoFileCaptureComponent initWithCaptureResource:cameraCaptureLensProvider:captureConfiguration:cameraCreationDelayLogger:capturePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1054d2c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e8a90;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112724804),param_3);
    lVar7 = (long)_DAT_112724808;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(long *)((long)puVar1 + lVar7) = param_4;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272480c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272480c) = uVar6;
    _objc_release(uVar5);
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112724810;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_5;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112724814);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112724814) = uVar2;
    _objc_release(uVar6);
    lVar7 = (long)_DAT_112724818;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_6;
    _objc_release(uVar2);
    lVar7 = param_4;
    func_0x00010bef0ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010bf529e0();
    _objc_release(lVar7);
    if (lVar3 == 0) {
      puVar4 = PTR_PTR_1126b9e68;
      _objc_alloc();
      func_0x00010bffb300();
    }
    else {
      puVar4 = PTR_PTR_1126b9e60;
      _objc_alloc();
      func_0x00010bffb060();
    }
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272481c);
    *(undefined **)((long)puVar1 + (long)_DAT_11272481c) = puVar4;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112724820;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054d2e2c; end: 1054d2edb; -[SCCaptureVideoFileCaptureComponent capturePhotoImpl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d2e2c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112724820);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f88c0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1054d2edc; end: 1054d3097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d2edc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112724818);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1fa0();
    _objc_release(uVar2);
    lVar3 = lVar1;
    func_0x00010bfe6f60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b9e58;
    _objc_alloc(PTR_PTR_1126b9e58);
    func_0x00010c04b7c0();
    func_0x00010c0d9840(lVar3);
    _objc_release(puVar4);
    _objc_release(lVar3);
    lVar3 = lVar1;
    func_0x00010c255600(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1054d3098;
    puStack_70 = &UNK_110890eb8;
    _objc_copyWeak(auStack_68,param_1 + 0x20);
    _objc_copyWeak(auStack_90,param_1 + 0x20);
    func_0x00010bf31320(lVar3);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1054d3098; end: 1054d311f;  */

void FUN_1054d3098(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be69880(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054d3120; end: 1054d316f;  */

void FUN_1054d3120(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be69860(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054d3170; end: 1054d3293; -[SCCaptureVideoFileCaptureComponent _onImageCaptureSucceedWithImage:cameraInfo:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d3170(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112724820);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054d3294; end: 1054d347f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d3294(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined *)(param_1 + 0x30);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010bfe6f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b9e58;
    _objc_alloc(PTR_PTR_1126b9e58);
    func_0x00010c04b7c0();
    func_0x00010c0d9840(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b9e50;
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      uVar7 = *(undefined8 *)(puVar1 + _DAT_112724810);
      uVar8 = *(undefined8 *)(puVar1 + _DAT_112724808);
      puVar3 = puVar1 + _DAT_112724804;
      _objc_loadWeakRetained();
      func_0x00010c2556a0(puVar2,param_2,uVar6,uVar7,0x3d072b0200000000,0,0,uVar8,puVar3,
                          *(undefined8 *)(puVar1 + _DAT_112724818),0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                            &PTR____CFConstantStringClassReference_110de5ed8,0x2717,0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        func_0x00010bfe6f60(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126b9e58;
        _objc_alloc(PTR_PTR_1126b9e58);
        func_0x00010c04b7c0();
        func_0x00010c0d9840(puVar4,param_2,puVar5);
        _objc_release(puVar5);
      }
      else {
        puVar3 = puVar1;
        func_0x00010bfe6f60(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126b9e58;
        _objc_alloc(PTR_PTR_1126b9e58);
        func_0x00010c04b7c0();
        func_0x00010c0d9840(puVar3,param_2,puVar4);
      }
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054d3480; end: 1054d355f; -[SCCaptureVideoFileCaptureComponent _onImageCaptureFailed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d3480(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112724820);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054d3560; end: 1054d35e7;  */

void FUN_1054d3560(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bfe6f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b9e58;
    _objc_alloc(PTR_PTR_1126b9e58);
    func_0x00010c04b7c0();
    func_0x00010c0d9840(lVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054d35e8; end: 1054d3617; -[SCCaptureVideoFileCaptureComponent stillImageCaptureVideoInputMethod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d35e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272481c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054d3618; end: 1054d36b3; -[SCCaptureVideoFileCaptureComponent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d3618(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112724820,0);
  _objc_storeStrong(param_1 + _DAT_11272481c,0);
  _objc_storeStrong(param_1 + _DAT_112724818,0);
  _objc_storeStrong(param_1 + _DAT_112724814,0);
  _objc_storeStrong(param_1 + _DAT_112724810,0);
  _objc_storeStrong(param_1 + _DAT_11272480c,0);
  _objc_storeStrong(param_1 + _DAT_112724808,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112724804);
  return;
}



/* Entry: 1054d36b4; end: 1054d3767; -[SCCaptureImageCaptureComponentEvent initWithStage:stillImageData:error:] */

undefined1 *
FUN_1054d36b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e8a98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1054d3768; end: 1054d378b; -[SCCaptureImageCaptureComponentEvent copyWithZone:] */

undefined8 FUN_1054d3768(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1054d378c; end: 1054d380b; -[SCCaptureImageCaptureComponentEvent hash] */

long * FUN_1054d378c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar3 = &lStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&lStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == (long *)param_3) {
LAB_1054d389c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1054d38a8;
    puVar6 = (undefined1 *)plVar3;
    _objc_opt_class(plVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)plVar3 + 8) == *(long *)(param_3 + 8))) {
      lVar5 = *(long *)((long)plVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)plVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1054d38a8;
        }
        goto LAB_1054d389c;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1054d38a8:
  _objc_release(param_3);
  return (long *)puVar6;
}



/* Entry: 1054d380c; end: 1054d38c3; -[SCCaptureImageCaptureComponentEvent isEqual:] */

long FUN_1054d380c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1054d389c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1054d38a8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1054d38a8;
        }
        goto LAB_1054d389c;
      }
    }
    lVar3 = 0;
  }
LAB_1054d38a8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1054d38c4; end: 1054d38cb; -[SCCaptureImageCaptureComponentEvent stage] */

undefined8 FUN_1054d38c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1054d38cc; end: 1054d38d3; -[SCCaptureImageCaptureComponentEvent stillImageData] */

undefined8 FUN_1054d38cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1054d38d4; end: 1054d38db; -[SCCaptureImageCaptureComponentEvent error] */

undefined8 FUN_1054d38d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1054d38dc; end: 1054d390b; -[SCCaptureImageCaptureComponentEvent .cxx_destruct] */

void FUN_1054d38dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1054d390c; end: 1054d392f;  */

undefined8 FUN_1054d390c(long param_1)

{
  if (param_1 - 2U < 7) {
    return *(undefined8 *)(&UNK_10ddb0dd0 + (param_1 - 2U) * 8);
  }
  return 0;
}



/* Entry: 1054d3930; end: 1054d3ef3; +[SCCaptureImageProcessingUtils stillImageDataFromPhoto:captureConfiguration:cameraCaptureLensProvider:captureResource:cameraCreationDelayLogger:viewportOrientation:] */

void FUN_1054d3930(double param_1,ulong param_2,undefined8 param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6,undefined **param_7,undefined **param_8,
                  long param_9)

{
  char cVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  undefined ***pppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined ***pppuVar19;
  uint uVar20;
  double dVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  long lStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined **ppuStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  ulong uStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  ulong uStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar17 = param_5;
  ppuVar4 = param_6;
  ppuVar3 = param_7;
  ppuVar16 = param_8;
  _objc_retain(param_4);
  uVar20 = (uint)ppuVar3;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  ppuVar3 = param_8;
  func_0x00010c269d40(param_8);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110f4c0f8;
  func_0x00010c2507c0();
  _objc_release(ppuVar3);
  _objc_retain(param_5);
  uStack_c8 = param_2;
  func_0x00010beb27c0();
  ppuStack_b8 = param_8;
  if ((int)param_2 == 0) {
LAB_1054d3aa8:
    ppuVar3 = param_4;
    _objc_retainAutorelease();
    func_0x00010c0fc940();
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar4 = param_4;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      ppuVar4 = ppuVar3;
      func_0x00010c067fc0();
      FUN_1054d390c();
      func_0x000109046e48();
      _objc_retainAutorelease(param_4);
      func_0x00010c0fc940();
      ppuVar17 = (undefined **)0x1;
      ppuVar22 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe96e0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1054d3b98;
    }
LAB_1054d3ba0:
    ppuVar23 = param_4;
    func_0x00010bfacb20(param_4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar22;
    func_0x00010bfe8380();
    ppuVar6 = ppuVar5;
    func_0x000109046e48();
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
    if (ppuVar5 != ppuVar6) {
      _objc_retainAutorelease();
      func_0x00010bdc1020();
      func_0x00010c14e120(ppuVar22);
      func_0x00010bfe9260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar22);
      ppuVar17 = ppuVar6;
      ppuVar22 = ppuVar3;
    }
    _objc_release(ppuVar23);
    ppuVar3 = ppuStack_b8;
    if (ppuVar22 != (undefined **)0x0) goto LAB_1054d3c3c;
    ppuVar22 = ppuStack_b8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuStack_c0;
    func_0x00010bf95360();
    ppuVar23 = (undefined **)0x0;
  }
  else {
    ppuVar3 = param_4;
    _objc_retainAutorelease();
    func_0x00010c0fc940();
    if (ppuVar3 == (undefined **)0x0) goto LAB_1054d3aa8;
    _objc_retainAutorelease(param_4);
    func_0x00010c0fc940();
    ppuVar4 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2507c0();
    _objc_release(ppuVar4);
    ppuVar4 = param_4;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    ppuVar17 = ppuVar3;
    func_0x00010c067fc0();
    FUN_1054d390c();
    func_0x000109046e48();
    if (param_4 == (undefined **)0x0) {
      uStack_b0 = (undefined *)0x0;
      uStack_a8 = 0;
      uStack_a0 = 0;
    }
    else {
      func_0x00010c2709c0(&uStack_b0,param_4);
    }
    func_0x00010bfac7a0(param_5);
    ppuVar4 = (undefined **)&uStack_b0;
    ppuVar22 = param_6;
    func_0x00010c115160();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95360();
    _objc_release(param_8);
LAB_1054d3b98:
    _objc_release(ppuVar3);
    if (ppuVar22 == (undefined **)0x0) goto LAB_1054d3ba0;
LAB_1054d3c3c:
    ppuVar4 = param_4;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar4;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d8 = ppuVar3;
    _objc_release(ppuVar4);
    func_0x00010070a074(ppuVar3,&uStack_b0);
    ppuVar4 = param_6;
    func_0x00010c0c29a0(param_6);
    uVar13 = uStack_c8;
    uVar7 = uStack_c8;
    func_0x00010bdf6280((double)(long)ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = (undefined **)PTR_PTR_1126b9e70;
    uStack_e0 = uVar7;
    _objc_alloc();
    ppuVar3 = param_4;
    func_0x00010c0cc0c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d0 = param_7;
    func_0x00010c01c1e0();
    ppuStack_e8 = ppuVar4;
    _objc_release(ppuVar3);
    ppuStack_98 = &PTR____CFConstantStringClassReference_110de5e78;
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_90 = &PTR____CFConstantStringClassReference_110de5e98;
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_80 = puVar8;
    func_0x00010c0df740(uStack_b0._4_4_);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_88 = &PTR____CFConstantStringClassReference_110de5eb8;
    param_1 = (double)(uStack_a8 & 0xffffffff);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_78 = puVar9;
    func_0x00010c0df740();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = (undefined **)0x0;
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar10;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c0d3c80();
    _objc_release(puVar11);
    _objc_release(puVar10);
    param_7 = ppuStack_d0;
    _objc_release(puVar9);
    _objc_release(puVar8);
    ppuVar23 = ppuStack_e8;
    ppuVar17 = param_7;
    func_0x00010be34ee0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar12);
    _objc_release(uVar13);
    func_0x00010c1a7c60(ppuVar23);
    ppuVar3 = ppuStack_b8;
    ppuVar6 = ppuStack_b8;
    func_0x00010c269d40(ppuStack_b8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuStack_c0;
    func_0x00010bf95360();
    _objc_release(ppuVar6);
    _objc_release(puVar12);
    _objc_release(uStack_e0);
    _objc_release(ppuStack_d8);
  }
  _objc_release(ppuVar22);
  _objc_release(param_5);
  _objc_release(ppuVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  ppuVar3 = ppuStack_e8;
  pcStack_f8 = FUN_1054d3ef4;
  cVar1 = (char)uStack_e0;
  ppuVar22 = (undefined **)(uStack_e0 & 0xff);
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar5;
  ppuVar18 = ppuVar17;
  puStack_100 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar16);
  _objc_retain(param_9);
  _objc_retain(uStack_f0);
  _objc_retain(ppuVar3);
  if (ppuVar5 == (undefined **)0x0) {
    ppuVar23 = (undefined **)0x0;
  }
  else {
    _objc_retain(ppuVar17);
    _objc_retain(ppuVar5);
    lVar14 = param_9;
    func_0x00010c0c29a0();
    param_1 = (double)lVar14;
    ppuVar23 = param_4;
    func_0x00010bdf6280();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1a0 = ppuVar23;
    _objc_release(ppuVar17);
    _objc_release(ppuVar5);
    if (cVar1 == '\0') {
      param_1 = (double)(ulong)uVar20;
      ppuStack_198 = &PTR____CFConstantStringClassReference_110de5e78;
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_190 = &PTR____CFConstantStringClassReference_110de5e98;
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_180 = puVar8;
      func_0x00010c0df740((ulong)ppuVar4 >> 0x20);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_188 = &PTR____CFConstantStringClassReference_110de5eb8;
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_178 = puVar9;
      func_0x00010c0df740();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_170 = puVar10;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      ppuVar22 = ppuVar4;
      func_0x00010c0d3c80();
      _objc_release(ppuVar4);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      func_0x00010be34ee0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(ppuVar22);
      _objc_release(param_4);
      ppuVar23 = (undefined **)PTR_PTR_1126b9e70;
      _objc_alloc();
      ppuVar4 = ppuStack_1a0;
      ppuVar18 = (undefined **)0x0;
      func_0x00010c01c1e0();
      ppuVar6 = ppuVar22;
      func_0x00010c1a7c60();
      _objc_release(ppuVar22);
    }
    else {
      ppuVar4 = ppuVar3;
      func_0x00010c269d40(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a1fa0();
      _objc_release(ppuVar4);
      ppuVar23 = (undefined **)PTR_PTR_1126b9e70;
      _objc_alloc();
      ppuVar4 = ppuStack_1a0;
      ppuVar6 = ppuStack_1a0;
      ppuVar18 = ppuVar16;
      func_0x00010c01c1e0();
    }
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar3);
  _objc_release(uStack_f0);
  _objc_release(param_9);
  _objc_release(ppuVar16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  ppuStack_1d0 = ppuVar3;
  uStack_1c8 = uStack_f0;
  pcStack_1a8 = FUN_1054d41b4;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1e0 = ppuVar23;
  ppuStack_1d8 = ppuVar22;
  lStack_1c0 = param_9;
  ppuStack_1b8 = ppuVar16;
  ppuStack_1b0 = &puStack_100;
  _objc_retain(ppuVar18);
  func_0x00010bef0ae0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = (undefined **)PTR____NSArray0__struct_11034ab48;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar4 = ppuVar6;
  }
  _objc_retain(ppuVar4);
  _objc_release(ppuVar6);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_218 = &PTR____CFConstantStringClassReference_110de5e38;
  ppuVar3 = ppuVar18;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar18);
  func_0x00010c0982a0(ppuVar3);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_210 = &PTR____CFConstantStringClassReference_110db19f8;
  ppuVar17 = ppuVar4;
  puStack_200 = puVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1f8 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar17 != (undefined **)0x0) {
    ppuStack_1f8 = ppuVar17;
  }
  ppuStack_208 = &PTR____CFConstantStringClassReference_110de5e58;
  ppuVar16 = &puStack_200;
  pppuVar19 = &ppuStack_218;
  ppuVar23 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_1f0 = ppuVar4;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(ppuVar17);
  _objc_release(puVar8);
  _objc_release(ppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  dVar24 = param_1;
  _objc_retain(ppuVar16);
  _objc_retain(pppuVar19);
  ppuVar4 = ppuVar16;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  _objc_retain(ppuVar16);
  puVar8 = PTR_PTR_1126b9e78;
  func_0x00010c072be0();
  func_0x00010bf0aca0(pppuVar19);
  ppuVar23 = ppuVar16;
  if (dVar24 <= 0.0) {
    func_0x00010bf30ec0(pppuVar19);
LAB_1054d4448:
    iVar2 = 0;
    if (((ulong)puVar8 & 1) == 0) goto LAB_1054d4408;
LAB_1054d4450:
    if (iVar2 != 0) {
      func_0x00010bf0aca0(pppuVar19);
      _objc_retain(ppuVar16);
      ppuVar4 = ppuVar16;
      _objc_retainAutorelease();
      func_0x00010bdc1020();
      ppuVar3 = ppuVar16;
      func_0x00010bfe8380();
      dVar21 = 1.0 / dVar24;
      if (((ulong)((long)ppuVar3 + -2) & 0xfffffffffffffffa) != 0) {
        dVar21 = dVar24;
      }
      ppuVar3 = ppuVar4;
      _CGImageGetWidth();
      ppuVar17 = ppuVar4;
      _CGImageGetHeight();
      dVar25 = (double)ppuVar17;
      dVar24 = 0.0;
      if (dVar21 != 0.0) {
        dVar26 = (double)ppuVar3;
        if (dVar21 == INFINITY) {
          dVar25 = 0.0;
          dVar24 = dVar26;
        }
        else {
          dVar24 = dVar21 * dVar25;
          if (dVar26 <= dVar21 * dVar25) {
            dVar25 = dVar26 / dVar21;
            dVar24 = dVar26;
          }
        }
      }
      func_0x000109046468(ppuVar3,ppuVar17,(long)dVar24,(long)dVar25);
      _CGImageCreateWithImageInRect();
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
      if (ppuVar4 == (undefined **)0x0) {
        _objc_retain(ppuVar16);
        ppuVar3 = ppuVar16;
      }
      else {
        func_0x00010c14e120(ppuVar16);
        func_0x00010bfe8380(ppuVar16);
        func_0x00010bfe9260(dVar25,ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        _CGImageRelease(ppuVar4);
      }
      _objc_release(ppuVar16);
      func_0x00010c2bf100(pppuVar19);
      fVar27 = (float)dVar25;
      func_0x00010bf0aca0(pppuVar19);
      ppuVar23 = ppuVar3;
      func_0x00010904651c(fVar27,dVar25,param_1,ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar16);
      goto LAB_1054d45b0;
    }
  }
  else {
    func_0x00010bf0aca0();
    dVar21 = ABS(dVar24);
    pppuVar15 = pppuVar19;
    func_0x00010bf30ec0();
    if ((((uint)pppuVar15 & (uint)puVar8) != 1 || 0x7fefffffffffffff < (ulong)dVar21) ||
        ppuVar4 == (undefined **)0x0) goto LAB_1054d4448;
    ppuVar4 = ppuVar16;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    ppuVar3 = ppuVar16;
    func_0x00010bfe8380(ppuVar16);
    func_0x00010bf0aca0(pppuVar19);
    func_0x000109045e04(ppuVar4,ppuVar3);
    iVar2 = (int)ppuVar4;
    if (((ulong)puVar8 & 1) != 0) goto LAB_1054d4450;
LAB_1054d4408:
    func_0x00010c2bf100(pppuVar19);
    fVar27 = (float)dVar24;
    func_0x00010bf0aca0(pppuVar19);
    func_0x00010904651c(fVar27,dVar24,param_1,ppuVar16);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar16;
LAB_1054d45b0:
    _objc_release(ppuVar3);
  }
  _objc_retainAutorelease(ppuVar23);
  func_0x00010bdc1020();
  _objc_release(pppuVar19);
  _objc_release(ppuVar16);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar23);
  return;
}



/* Entry: 1054d3ef4; end: 1054d41b3; +[SCCaptureImageProcessingUtils stillImageDataFromVideoImage:captureConfiguration:sampleBufferMetadata:cameraInfo:cameraCaptureLensProvider:captureResource:cameraCreationDelayLogger:isLiveStream:] */

void FUN_1054d3ef4(double param_1,undefined **param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5,ulong param_6,uint param_7,undefined8 param_8,long param_9,
                  undefined8 param_10,undefined8 param_11,byte param_12)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined ***pppuVar11;
  double dVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  ppuVar13 = (undefined **)(ulong)param_12;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = param_4;
  uVar10 = param_5;
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  if (param_4 == (undefined **)0x0) {
    ppuVar14 = (undefined **)0x0;
  }
  else {
    _objc_retain(param_5);
    _objc_retain(param_4);
    lVar2 = param_9;
    func_0x00010c0c29a0();
    param_1 = (double)lVar2;
    ppuVar3 = param_2;
    func_0x00010bdf6280();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b0 = ppuVar3;
    _objc_release(param_5);
    _objc_release(param_4);
    if (param_12 == 0) {
      param_1 = (double)(ulong)param_7;
      ppuStack_a8 = &PTR____CFConstantStringClassReference_110de5e78;
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110de5e98;
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_90 = puVar4;
      func_0x00010c0df740(param_6 >> 0x20);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_98 = &PTR____CFConstantStringClassReference_110de5eb8;
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_88 = puVar5;
      func_0x00010c0df740();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_80 = puVar6;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar3;
      func_0x00010c0d3c80();
      _objc_release(ppuVar3);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010be34ee0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(ppuVar13);
      _objc_release(param_2);
      ppuVar14 = (undefined **)PTR_PTR_1126b9e70;
      _objc_alloc();
      ppuVar9 = ppuStack_b0;
      uVar10 = 0;
      func_0x00010c01c1e0();
      ppuVar3 = ppuVar13;
      func_0x00010c1a7c60();
      _objc_release(ppuVar13);
    }
    else {
      uVar10 = param_11;
      func_0x00010c269d40(param_11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a1fa0();
      _objc_release(uVar10);
      ppuVar14 = (undefined **)PTR_PTR_1126b9e70;
      _objc_alloc();
      ppuVar9 = ppuStack_b0;
      ppuVar3 = ppuStack_b0;
      uVar10 = param_8;
      func_0x00010c01c1e0();
    }
    _objc_release(ppuVar9);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  uStack_e0 = param_11;
  uStack_d8 = param_10;
  pcStack_b8 = FUN_1054d41b4;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_f0 = ppuVar14;
  ppuStack_e8 = ppuVar13;
  lStack_d0 = param_9;
  uStack_c8 = param_8;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(uVar10);
  func_0x00010bef0ae0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = (undefined **)PTR____NSArray0__struct_11034ab48;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar13 = ppuVar3;
  }
  _objc_retain(ppuVar13);
  _objc_release(ppuVar3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110de5e38;
  uVar7 = uVar10;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  func_0x00010c0982a0(uVar7);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_120 = &PTR____CFConstantStringClassReference_110db19f8;
  ppuVar3 = ppuVar13;
  puStack_110 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_108 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuStack_108 = ppuVar3;
  }
  ppuStack_118 = &PTR____CFConstantStringClassReference_110de5e58;
  ppuVar9 = &puStack_110;
  pppuVar11 = &ppuStack_128;
  ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_100 = ppuVar13;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar13);
  _objc_release(ppuVar3);
  _objc_release(puVar4);
  _objc_release(uVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  dVar15 = param_1;
  _objc_retain(ppuVar9);
  _objc_retain(pppuVar11);
  ppuVar13 = ppuVar9;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  _objc_retain(ppuVar9);
  puVar4 = PTR_PTR_1126b9e78;
  func_0x00010c072be0();
  func_0x00010bf0aca0(pppuVar11);
  ppuVar14 = ppuVar9;
  if (dVar15 <= 0.0) {
    func_0x00010bf30ec0(pppuVar11);
LAB_1054d4448:
    iVar1 = 0;
    if (((ulong)puVar4 & 1) == 0) goto LAB_1054d4408;
LAB_1054d4450:
    if (iVar1 != 0) {
      func_0x00010bf0aca0(pppuVar11);
      _objc_retain(ppuVar9);
      ppuVar13 = ppuVar9;
      _objc_retainAutorelease();
      func_0x00010bdc1020();
      ppuVar3 = ppuVar9;
      func_0x00010bfe8380();
      dVar12 = 1.0 / dVar15;
      if (((ulong)((long)ppuVar3 + -2) & 0xfffffffffffffffa) != 0) {
        dVar12 = dVar15;
      }
      ppuVar3 = ppuVar13;
      _CGImageGetWidth();
      ppuVar14 = ppuVar13;
      _CGImageGetHeight();
      dVar16 = (double)ppuVar14;
      dVar15 = 0.0;
      if (dVar12 != 0.0) {
        dVar17 = (double)ppuVar3;
        if (dVar12 == INFINITY) {
          dVar16 = 0.0;
          dVar15 = dVar17;
        }
        else {
          dVar15 = dVar12 * dVar16;
          if (dVar17 <= dVar12 * dVar16) {
            dVar16 = dVar17 / dVar12;
            dVar15 = dVar17;
          }
        }
      }
      func_0x000109046468(ppuVar3,ppuVar14,(long)dVar15,(long)dVar16);
      _CGImageCreateWithImageInRect();
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
      if (ppuVar13 == (undefined **)0x0) {
        _objc_retain(ppuVar9);
        ppuVar3 = ppuVar9;
      }
      else {
        func_0x00010c14e120(ppuVar9);
        func_0x00010bfe8380(ppuVar9);
        func_0x00010bfe9260(dVar16,ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        _CGImageRelease(ppuVar13);
      }
      _objc_release(ppuVar9);
      func_0x00010c2bf100(pppuVar11);
      fVar18 = (float)dVar16;
      func_0x00010bf0aca0(pppuVar11);
      ppuVar14 = ppuVar3;
      func_0x00010904651c(fVar18,dVar16,param_1,ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      goto LAB_1054d45b0;
    }
  }
  else {
    func_0x00010bf0aca0();
    dVar12 = ABS(dVar15);
    pppuVar8 = pppuVar11;
    func_0x00010bf30ec0();
    if ((((uint)pppuVar8 & (uint)puVar4) != 1 || 0x7fefffffffffffff < (ulong)dVar12) ||
        ppuVar13 == (undefined **)0x0) goto LAB_1054d4448;
    ppuVar13 = ppuVar9;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    ppuVar3 = ppuVar9;
    func_0x00010bfe8380(ppuVar9);
    func_0x00010bf0aca0(pppuVar11);
    func_0x000109045e04(ppuVar13,ppuVar3);
    iVar1 = (int)ppuVar13;
    if (((ulong)puVar4 & 1) != 0) goto LAB_1054d4450;
LAB_1054d4408:
    func_0x00010c2bf100(pppuVar11);
    fVar18 = (float)dVar15;
    func_0x00010bf0aca0(pppuVar11);
    func_0x00010904651c(fVar18,dVar15,param_1,ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar9;
LAB_1054d45b0:
    _objc_release(ppuVar3);
  }
  _objc_retainAutorelease(ppuVar14);
  func_0x00010bdc1020();
  _objc_release(pppuVar11);
  _objc_release(ppuVar9);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar14);
  return;
}



/* Entry: 1054d41b4; end: 1054d432f; +[SCCaptureImageProcessingUtils _healthInfoDataForLens:captureResource:] */

void FUN_1054d41b4(double param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  func_0x00010bef0ae0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = (undefined **)PTR____NSArray0__struct_11034ab48;
  if (param_4 != (undefined **)0x0) {
    ppuVar6 = param_4;
  }
  _objc_retain(ppuVar6);
  _objc_release(param_4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110de5e38;
  uVar2 = param_5;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c0982a0(uVar2);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110db19f8;
  ppuVar4 = ppuVar6;
  puStack_60 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuStack_58 = ppuVar4;
  }
  ppuStack_68 = &PTR____CFConstantStringClassReference_110de5e58;
  ppuVar8 = &puStack_60;
  pppuVar9 = &ppuStack_78;
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_50 = ppuVar6;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  dVar11 = param_1;
  _objc_retain(ppuVar8);
  _objc_retain(pppuVar9);
  ppuVar6 = ppuVar8;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  _objc_retain(ppuVar8);
  puVar3 = PTR_PTR_1126b9e78;
  func_0x00010c072be0();
  func_0x00010bf0aca0(pppuVar9);
  ppuVar5 = ppuVar8;
  if (dVar11 <= 0.0) {
    func_0x00010bf30ec0(pppuVar9);
LAB_1054d4448:
    iVar1 = 0;
    if (((ulong)puVar3 & 1) == 0) goto LAB_1054d4408;
LAB_1054d4450:
    if (iVar1 != 0) {
      func_0x00010bf0aca0(pppuVar9);
      _objc_retain(ppuVar8);
      ppuVar6 = ppuVar8;
      _objc_retainAutorelease();
      func_0x00010bdc1020();
      ppuVar4 = ppuVar8;
      func_0x00010bfe8380();
      dVar10 = 1.0 / dVar11;
      if (((ulong)((long)ppuVar4 + -2) & 0xfffffffffffffffa) != 0) {
        dVar10 = dVar11;
      }
      ppuVar4 = ppuVar6;
      _CGImageGetWidth();
      ppuVar5 = ppuVar6;
      _CGImageGetHeight();
      dVar12 = (double)ppuVar5;
      dVar11 = 0.0;
      if (dVar10 != 0.0) {
        dVar13 = (double)ppuVar4;
        if (dVar10 == INFINITY) {
          dVar12 = 0.0;
          dVar11 = dVar13;
        }
        else {
          dVar11 = dVar10 * dVar12;
          if (dVar13 <= dVar10 * dVar12) {
            dVar12 = dVar13 / dVar10;
            dVar11 = dVar13;
          }
        }
      }
      func_0x000109046468(ppuVar4,ppuVar5,(long)dVar11,(long)dVar12);
      _CGImageCreateWithImageInRect();
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
      if (ppuVar6 == (undefined **)0x0) {
        _objc_retain(ppuVar8);
        ppuVar4 = ppuVar8;
      }
      else {
        func_0x00010c14e120(ppuVar8);
        func_0x00010bfe8380(ppuVar8);
        func_0x00010bfe9260(dVar12,ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        _CGImageRelease(ppuVar6);
      }
      _objc_release(ppuVar8);
      func_0x00010c2bf100(pppuVar9);
      fVar14 = (float)dVar12;
      func_0x00010bf0aca0(pppuVar9);
      ppuVar5 = ppuVar4;
      func_0x00010904651c(fVar14,dVar12,param_1,ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      goto LAB_1054d45b0;
    }
  }
  else {
    func_0x00010bf0aca0();
    dVar10 = ABS(dVar11);
    pppuVar7 = pppuVar9;
    func_0x00010bf30ec0();
    if ((((uint)pppuVar7 & (uint)puVar3) != 1 || 0x7fefffffffffffff < (ulong)dVar10) ||
        ppuVar6 == (undefined **)0x0) goto LAB_1054d4448;
    ppuVar6 = ppuVar8;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    ppuVar4 = ppuVar8;
    func_0x00010bfe8380(ppuVar8);
    func_0x00010bf0aca0(pppuVar9);
    func_0x000109045e04(ppuVar6,ppuVar4);
    iVar1 = (int)ppuVar6;
    if (((ulong)puVar3 & 1) != 0) goto LAB_1054d4450;
LAB_1054d4408:
    func_0x00010c2bf100(pppuVar9);
    fVar14 = (float)dVar11;
    func_0x00010bf0aca0(pppuVar9);
    func_0x00010904651c(fVar14,dVar11,param_1,ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar8;
LAB_1054d45b0:
    _objc_release(ppuVar4);
  }
  _objc_retainAutorelease(ppuVar5);
  func_0x00010bdc1020();
  _objc_release(pppuVar9);
  _objc_release(ppuVar8);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 1054d4330; end: 1054d45ef; +[SCCaptureImageProcessingUtils _croppedImageFromFullScreenImage:captureConfiguration:maxPixelSize:] */

void FUN_1054d4330(double param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  
  dVar8 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = param_4;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126b9e78;
  func_0x00010c072be0();
  func_0x00010bf0aca0(param_5);
  puVar6 = param_4;
  if (dVar8 <= 0.0) {
    func_0x00010bf30ec0(param_5);
LAB_1054d4448:
    iVar1 = 0;
    if (((ulong)puVar3 & 1) == 0) goto LAB_1054d4408;
LAB_1054d4450:
    if (iVar1 == 0) goto LAB_1054d45b8;
    func_0x00010bf0aca0(param_5);
    _objc_retain(param_4);
    puVar2 = param_4;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    puVar3 = param_4;
    func_0x00010bfe8380();
    dVar7 = 1.0 / dVar8;
    if (((ulong)(puVar3 + -2) & 0xfffffffffffffffa) != 0) {
      dVar7 = dVar8;
    }
    puVar3 = puVar2;
    _CGImageGetWidth();
    puVar6 = puVar2;
    _CGImageGetHeight();
    dVar9 = (double)puVar6;
    dVar8 = 0.0;
    if (dVar7 != 0.0) {
      dVar10 = (double)puVar3;
      if (dVar7 == INFINITY) {
        dVar9 = 0.0;
        dVar8 = dVar10;
      }
      else {
        dVar8 = dVar7 * dVar9;
        if (dVar10 <= dVar7 * dVar9) {
          dVar9 = dVar10 / dVar7;
          dVar8 = dVar10;
        }
      }
    }
    func_0x000109046468(puVar3,puVar6,(long)dVar8,(long)dVar9);
    _CGImageCreateWithImageInRect();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (puVar2 == (undefined *)0x0) {
      _objc_retain(param_4);
      puVar3 = param_4;
    }
    else {
      func_0x00010c14e120(param_4);
      func_0x00010bfe8380(param_4);
      func_0x00010bfe9260(dVar9,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _CGImageRelease(puVar2);
    }
    _objc_release(param_4);
    func_0x00010c2bf100(param_5);
    fVar11 = (float)dVar9;
    func_0x00010bf0aca0(param_5);
    puVar6 = puVar3;
    func_0x00010904651c(fVar11,dVar9,param_1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
  }
  else {
    func_0x00010bf0aca0();
    dVar7 = ABS(dVar8);
    uVar4 = param_5;
    func_0x00010bf30ec0();
    if ((((uint)uVar4 & (uint)puVar3) != 1 || 0x7fefffffffffffff < (ulong)dVar7) ||
        puVar2 == (undefined *)0x0) goto LAB_1054d4448;
    puVar2 = param_4;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    puVar5 = param_4;
    func_0x00010bfe8380(param_4);
    func_0x00010bf0aca0(param_5);
    func_0x000109045e04(puVar2,puVar5);
    iVar1 = (int)puVar2;
    if (((ulong)puVar3 & 1) != 0) goto LAB_1054d4450;
LAB_1054d4408:
    func_0x00010c2bf100(param_5);
    fVar11 = (float)dVar8;
    func_0x00010bf0aca0(param_5);
    func_0x00010904651c(fVar11,dVar8,param_1,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_4;
  }
  _objc_release(puVar3);
LAB_1054d45b8:
  _objc_retainAutorelease(puVar6);
  func_0x00010bdc1020();
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1054d45f0; end: 1054d4633; +[SCCaptureImageProcessingUtils _shouldApplyLensEffectWithCameraCaptureLensProvider:] */

bool FUN_1054d45f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010bef0ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 1054d4634; end: 1054d47bf; +[SCManagedStillImageCapturerUtils photoSettingsWithPhotoOutput:captureConnection:captureState:captureResource:captureDeviceManager:lightingConditionType:systemConfiguration:captureConfiguration:lensEffectApplied:] */

void FUN_1054d4634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_7;
  func_0x00010bf9d820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c072580();
  _objc_release(uVar1);
  _objc_release(param_7);
  uVar1 = param_1;
  func_0x00010beb70e0(param_1,param_2,param_5,param_6,param_9,param_10);
  if (((int)uVar1 == 0) || ((int)uVar2 == 0)) {
    func_0x00010bdf95c0(param_1,param_2,param_3,param_5,param_9,param_10,param_11);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bdd5760(param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_9,param_10,
                        param_11);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1054d47c0; end: 1054d49b7; +[SCManagedStillImageCapturerUtils _shouldUseBracketPhotoSettingsWithCaptureState:captureResource:systemConfiguration:captureConfiguration:] */

uint FUN_1054d47c0(float param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bf70ba0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c070860();
  _objc_release(uVar2);
  _objc_release(param_5);
  lVar4 = param_6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  lVar5 = lVar4;
  func_0x00010bf7fb40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf20de0();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  if (lVar7 == 1) {
    uVar11 = 1;
  }
  else {
    if (lVar7 != 2) {
      uVar8 = param_4;
      func_0x00010c1410c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c141120();
      _objc_release(uVar8);
      uVar8 = param_4;
      func_0x00010bfb24e0();
      if ((int)uVar8 == 0) {
        bVar1 = false;
      }
      else {
        uVar8 = param_4;
        func_0x00010c1410c0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar8;
        func_0x00010c141120();
        bVar1 = (uVar10 & 0xfffffffffffffffd) == 1;
        _objc_release(uVar8);
      }
      uVar8 = param_4;
      func_0x00010c1410c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010bf9c240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      _objc_release(uVar10);
      _objc_release(uVar8);
      if (!bVar1) {
        uVar2 = param_7;
        func_0x00010c071a20(param_7);
        uVar11 = (uint)uVar2 | (uint)uVar3 |
                 (uint)(1.0 < param_1 && (uVar9 & 0xfffffffffffffffe) == 2);
        goto LAB_1054d4988;
      }
    }
    uVar11 = 0;
  }
LAB_1054d4988:
  _objc_release(param_7);
  _objc_release(param_4);
  return uVar11 & 1;
}



/* Entry: 1054d49b8; end: 1054d4cd7; +[SCManagedStillImageCapturerUtils _defaultPhotoSettingsWithPhotoOutput:captureState:systemConfiguration:captureConfiguration:lensEffectApplied:] */

void FUN_1054d49b8(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  ulong param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010be73b40(param_1,param_2,param_3,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___AVCapturePhotoSettings_1126b9e80;
  func_0x00010c0fb700(PTR__OBJC_CLASS___AVCapturePhotoSettings_1126b9e80,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c074d20();
  uVar3 = param_6;
  func_0x00010c2300c0();
  if ((int)puVar7 != (int)uVar3) {
    uVar3 = param_6;
    func_0x00010c2300c0(param_6);
    func_0x00010c1a86a0(puVar2,param_2,uVar3);
  }
  uVar3 = param_4;
  func_0x00010bfb24e0();
  if (((int)uVar3 != 0) && (uVar3 = param_4, func_0x00010bfb25a0(), (int)uVar3 != 0)) {
    uVar3 = param_4;
    func_0x00010c1410c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c141120();
    _objc_release(uVar3);
    if ((uVar4 & 0xfffffffffffffffd) == 1) {
      func_0x00010c19db40(puVar2,param_2,1);
    }
  }
  uVar3 = param_6;
  func_0x00010c07f6c0();
  if ((uVar3 & 1) == 0) {
    puVar7 = puVar2;
    func_0x00010c06cd60(puVar2);
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  func_0x00010c16d080(puVar2,param_2,puVar7);
  uVar3 = param_6;
  func_0x00010c0773c0();
  if ((int)uVar3 == 0) {
    uVar3 = param_6;
    func_0x00010c078b80();
    if (((int)uVar3 == 0) || (uVar3 = param_6, func_0x00010c0fb6a0(), uVar3 == 0)) {
      uVar3 = param_5;
      func_0x00010c269d40(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0fb6a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0fb6a0();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    else {
      uVar6 = param_6;
      func_0x00010c0fb6a0(param_6);
    }
    func_0x00010be94900(param_1,param_2,param_3,uVar6,2);
  }
  else {
    uVar3 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0b67a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0fb6e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0b67a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    param_1 = uVar5;
    func_0x00010c0fb6c0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = param_6;
    func_0x00010c0749e0();
    if ((int)uVar3 == 0) {
      param_1 = uVar6;
    }
  }
  func_0x00010c1db580(puVar2,param_2,param_1);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054d4cd8; end: 1054d4d8f; +[SCManagedStillImageCapturerUtils _pixelBufferFormatTypeWithPhotoOutput:expectedType:] */

void FUN_1054d4cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf12920(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


