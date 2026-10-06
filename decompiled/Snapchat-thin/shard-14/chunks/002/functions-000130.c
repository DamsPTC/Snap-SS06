/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0176bc; end: 10b0176c3; -[SCCameraShortcutContextAction snapSource] */

undefined8 FUN_10b0176bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b0176c4; end: 10b01770b; -[SCCameraShortcutContextAction .cxx_destruct] */

void FUN_10b0176c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b01770c; end: 10b017727; +[SCCameraShortcutContextActionBuilder cameraShortcutContextAction] */

void FUN_10b01770c(void)

{
  _objc_alloc_init(PTR_PTR_1126c8530);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b017728; end: 10b01790b; +[SCCameraShortcutContextActionBuilder cameraShortcutContextActionFromExistingCameraShortcutContextAction:] */

void FUN_10b017728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  
  puVar1 = PTR_PTR_1126c8530;
  _objc_retain(param_3);
  func_0x00010bf2ade0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c22d640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b8720(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c25b200(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ba680(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c277e80(param_3);
  puVar7 = puVar5;
  func_0x00010c2bba20(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c278900(param_3);
  puVar8 = puVar7;
  func_0x00010c2bbaa0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c094660(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c2b28a0(puVar8,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf29f40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2a9dc0(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c243400(param_3);
  _objc_release(param_3);
  puVar13 = puVar11;
  func_0x00010c2b9760(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10b01790c; end: 10b01794b; -[SCCameraShortcutContextActionBuilder build] */

void FUN_10b01790c(long param_1)

{
  _objc_alloc(PTR_PTR_1126b5b70);
  func_0x00010c045f20(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b01794c; end: 10b017983; -[SCCameraShortcutContextActionBuilder withShortcutId:] */

long FUN_10b01794c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b017984; end: 10b0179bb; -[SCCameraShortcutContextActionBuilder withStorySnapId:] */

long FUN_10b017984(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0179bc; end: 10b0179c3; -[SCCameraShortcutContextActionBuilder withTrackId:] */

void FUN_10b0179bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b0179c4; end: 10b0179cb; -[SCCameraShortcutContextActionBuilder withTrackStartOffsetSeconds:] */

void FUN_10b0179c4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 10b0179cc; end: 10b017a03; -[SCCameraShortcutContextActionBuilder withLensIds:] */

long FUN_10b0179cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b017a04; end: 10b017a3b; -[SCCameraShortcutContextActionBuilder withCameraModeParameters:] */

long FUN_10b017a04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b017a3c; end: 10b017a43; -[SCCameraShortcutContextActionBuilder withSnapSource:] */

void FUN_10b017a3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10b017a44; end: 10b017a8b; -[SCCameraShortcutContextActionBuilder .cxx_destruct] */

void FUN_10b017a44(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b017a8c; end: 10b017abb; -[SCCameraStabilityServices setFrameStabilityMonitor:] */

void FUN_10b017a8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b017abc; end: 10b017aeb; -[SCCameraStabilityServices setToSnappableMonitorFactory:] */

void FUN_10b017abc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b017aec; end: 10b017af3; -[SCCameraStabilityServices permissionStateStabilityMonitor] */

undefined8 FUN_10b017aec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b017af4; end: 10b017b23; -[SCCameraStabilityServices setPermissionStateStabilityMonitor:] */

void FUN_10b017af4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b017b24; end: 10b017b53; -[SCCameraStabilityServices setVideoStreamStabilityMonitor:] */

void FUN_10b017b24(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b017b54; end: 10b017b83; -[SCCameraStabilityServices setBlizzardPromiseKeeper:] */

void FUN_10b017b54(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b017b84; end: 10b017bd7; -[SCCameraStabilityServices .cxx_destruct] */

void FUN_10b017b84(long param_1)

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



/* Entry: 10b017bd8; end: 10b017c23; +[SCCaptureSessionFixEvent didDetectNoCameraOutput] */

void FUN_10b017bd8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d41c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b017c24; end: 10b017c6f; +[SCCaptureSessionFixEvent didReceiveSessionInterruptEnd] */

void FUN_10b017c24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d41c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b017c70; end: 10b017ccb; +[SCCaptureSessionFixEvent didReceiveSessionInterruptStartWithReason:] */

void FUN_10b017c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d41c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b017ccc; end: 10b017d33; +[SCCaptureSessionFixEvent didReceiveSessionRuntimeErrorWithError:] */

void FUN_10b017ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d41c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b017d34; end: 10b017d7f; +[SCCaptureSessionFixEvent didTryRecreateSession] */

void FUN_10b017d34(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d41c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b017d80; end: 10b017dc7; +[SCCaptureSessionFixEvent didTryStartSession] */

void FUN_10b017d80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d41c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b017dc8; end: 10b017deb; -[SCCaptureSessionFixEvent copyWithZone:] */

undefined8 FUN_10b017dc8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b017dec; end: 10b017e63; -[SCCaptureSessionFixEvent hash] */

void FUN_10b017dec(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar3 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar3;
  if (-1 < lVar3) {
    lStack_30 = lVar3;
  }
  uStack_38 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_112704508;
  puStack_70 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b017e64; end: 10b017ea7; -[SCCaptureSessionFixEvent internalInit] */

void FUN_10b017e64(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112704508;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b017ea8; end: 10b017f57; -[SCCaptureSessionFixEvent isEqual:] */

long FUN_10b017ea8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b017f3c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10b017f3c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b017f3c;
    }
  }
  lVar3 = 1;
LAB_10b017f3c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b017f58; end: 10b0180a3; -[SCCaptureSessionFixEvent matchDidTryStartSession:didTryRecreateSession:didReceiveSessionRuntimeError:didDetectNoCameraOutput:didReceiveSessionInterruptStart:didReceiveSessionInterruptEnd:] */

void FUN_10b017f58(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 3) {
    if (lVar2 == 0) {
      if (param_3 == 0) goto LAB_10b018060;
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    else {
      if (lVar2 != 1) {
        if ((lVar2 != 2) || (param_5 == 0)) goto LAB_10b018060;
        uVar1 = *(undefined8 *)(param_1 + 0x10);
        pcVar3 = *(code **)(param_5 + 0x10);
        lVar2 = param_5;
LAB_10b01805c:
        (*pcVar3)(lVar2,uVar1);
        goto LAB_10b018060;
      }
      if (param_4 == 0) goto LAB_10b018060;
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
  }
  else if (lVar2 == 3) {
    if (param_6 == 0) goto LAB_10b018060;
    pcVar3 = *(code **)(param_6 + 0x10);
    lVar2 = param_6;
  }
  else {
    if (lVar2 == 4) {
      if (param_7 == 0) goto LAB_10b018060;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_7 + 0x10);
      lVar2 = param_7;
      goto LAB_10b01805c;
    }
    if ((lVar2 != 5) || (param_8 == 0)) goto LAB_10b018060;
    pcVar3 = *(code **)(param_8 + 0x10);
    lVar2 = param_8;
  }
  (*pcVar3)(lVar2);
LAB_10b018060:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0180a4; end: 10b0180af; -[SCCaptureSessionFixEvent .cxx_destruct] */

void FUN_10b0180a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0180b0; end: 10b01810f; -[SCPreviewSpectaclesConfig initWithEnableRotationalPreview:hasMultipleExportFormats:manipulatorFormat:] */

void FUN_10b0180b0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112704510;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
  }
  return;
}



/* Entry: 10b018110; end: 10b018133; -[SCPreviewSpectaclesConfig copyWithZone:] */

undefined8 FUN_10b018110(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b018134; end: 10b018197; -[SCPreviewSpectaclesConfig hash] */

ulong * FUN_10b018134(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 9);
  uStack_20 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(char *)((long)puVar1 + 8) != param_3[8] || (*(char *)((long)puVar1 + 9) != param_3[9]))
         )) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x10) == *(long *)(param_3 + 0x10));
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar3;
}



/* Entry: 10b018198; end: 10b01823f; -[SCPreviewSpectaclesConfig isEqual:] */

bool FUN_10b018198(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b018240; end: 10b018247; -[SCPreviewSpectaclesConfig enableRotationalPreview] */

undefined1 FUN_10b018240(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b018248; end: 10b01824f; -[SCPreviewSpectaclesConfig hasMultipleExportFormats] */

undefined1 FUN_10b018248(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b018250; end: 10b018257; -[SCPreviewSpectaclesConfig manipulatorFormat] */

undefined8 FUN_10b018250(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b018258; end: 10b0182c3; +[SCPreviewLensSendStepConfig inLensCreationWithIlcMetadata:] */

void FUN_10b018258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b13c0;
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



/* Entry: 10b0182c4; end: 10b018327; +[SCPreviewLensSendStepConfig promptLensPostWithPromptLensMetadata:] */

void FUN_10b0182c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b13c0;
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



/* Entry: 10b018328; end: 10b018393; +[SCPreviewLensSendStepConfig promptLensRepostWithPromptRepostChatId:] */

void FUN_10b018328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b13c0;
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



/* Entry: 10b018394; end: 10b0183b7; -[SCPreviewLensSendStepConfig copyWithZone:] */

undefined8 FUN_10b018394(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0183b8; end: 10b01843b; -[SCPreviewLensSendStepConfig hash] */

void FUN_10b0183b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_112704518;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b01843c; end: 10b01847f; -[SCPreviewLensSendStepConfig internalInit] */

void FUN_10b01843c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112704518;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b018480; end: 10b01854f; -[SCPreviewLensSendStepConfig isEqual:] */

long FUN_10b018480(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b018528:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b018534;
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
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b018534;
          }
          goto LAB_10b018528;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b018534:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b018550; end: 10b0185fb; -[SCPreviewLensSendStepConfig matchPromptLensPost:promptLensRepost:inLensCreation:] */

void FUN_10b018550(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_10b0185d8;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else if (lVar1 == 1) {
    if (param_4 == 0) goto LAB_10b0185d8;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if ((lVar1 != 0) || (param_3 == 0)) goto LAB_10b0185d8;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10b0185d8:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0185fc; end: 10b018637; -[SCPreviewLensSendStepConfig .cxx_destruct] */

void FUN_10b0185fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b018638; end: 10b0186ff; -[SCPreviewQuickCutConfig initWithLensId:pickerTrack:lensSource:snapSource:templateSource:] */

undefined1 *
FUN_10b018638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_112704520;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b018700; end: 10b018723; -[SCPreviewQuickCutConfig copyWithZone:] */

undefined8 FUN_10b018700(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b018724; end: 10b0187b3; -[SCPreviewQuickCutConfig hash] */

undefined8 * FUN_10b018724(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  lVar5 = *(long *)(param_1 + 0x28);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_48 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b018864:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b018870;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b018870;
        }
        goto LAB_10b018864;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b018870:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b0187b4; end: 10b01888b; -[SCPreviewQuickCutConfig isEqual:] */

long FUN_10b0187b4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b018864:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b018870;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b018870;
        }
        goto LAB_10b018864;
      }
    }
    lVar3 = 0;
  }
LAB_10b018870:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b01888c; end: 10b018893; -[SCPreviewQuickCutConfig lensId] */

undefined8 FUN_10b01888c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b018894; end: 10b01889b; -[SCPreviewQuickCutConfig pickerTrack] */

undefined8 FUN_10b018894(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b01889c; end: 10b0188a3; -[SCPreviewQuickCutConfig lensSource] */

undefined8 FUN_10b01889c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0188a4; end: 10b0188ab; -[SCPreviewQuickCutConfig snapSource] */

undefined8 FUN_10b0188a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0188ac; end: 10b0188b3; -[SCPreviewQuickCutConfig templateSource] */

undefined8 FUN_10b0188ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0188b4; end: 10b0188e3; -[SCPreviewQuickCutConfig .cxx_destruct] */

void FUN_10b0188b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0188e4; end: 10b01892f; +[SCPreviewWorkflowEvent didAttachMusicEditor] */

void FUN_10b0188e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db9b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b018930; end: 10b018977; +[SCPreviewWorkflowEvent didCancelFromPreview] */

void FUN_10b018930(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db9b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b018978; end: 10b0189c3; +[SCPreviewWorkflowEvent didDetachMusicEditor] */

void FUN_10b018978(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db9b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0189c4; end: 10b018a0f; +[SCPreviewWorkflowEvent didDismissMusicPicker] */

void FUN_10b0189c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db9b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b018a10; end: 10b018a5b; +[SCPreviewWorkflowEvent didDismissSendTo] */

void FUN_10b018a10(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db9b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b018a5c; end: 10b018aa7; +[SCPreviewWorkflowEvent didDismissStoryPostingTray] */

void FUN_10b018a5c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db9b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b018aa8; end: 10b018af3; +[SCPreviewWorkflowEvent didPresentMusicPicker] */

void FUN_10b018aa8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db9b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b018af4; end: 10b018b3f; +[SCPreviewWorkflowEvent didPresentSendTo] */

void FUN_10b018af4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db9b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b018b40; end: 10b018b8b; +[SCPreviewWorkflowEvent didPresentStoryPostingTray] */

void FUN_10b018b40(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db9b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b018b8c; end: 10b018baf; -[SCPreviewWorkflowEvent copyWithZone:] */

undefined8 FUN_10b018b8c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b018bb0; end: 10b018bb7; -[SCPreviewWorkflowEvent hash] */

undefined8 FUN_10b018bb0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b018bb8; end: 10b018bfb; -[SCPreviewWorkflowEvent internalInit] */

void FUN_10b018bb8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112704528;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b018bfc; end: 10b018c83; -[SCPreviewWorkflowEvent isEqual:] */

bool FUN_10b018bfc(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b018c84; end: 10b018e3b; -[SCPreviewWorkflowEvent matchDidCancelFromPreview:didPresentSendTo:didDismissSendTo:didPresentStoryPostingTray:didDismissStoryPostingTray:didPresentMusicPicker:didDismissMusicPicker:didAttachMusicEditor:didDetachMusicEditor:] */

void FUN_10b018c84(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 4) {
    if (lVar2 < 2) {
      lVar1 = param_3;
      if ((lVar2 != 0) && (lVar1 = param_4, lVar2 != 1)) goto LAB_10b018da0;
    }
    else {
      lVar1 = param_5;
      if ((lVar2 != 2) && (lVar1 = param_6, lVar2 != 3)) goto LAB_10b018da0;
    }
  }
  else if (lVar2 < 6) {
    lVar1 = param_7;
    if ((lVar2 != 4) && (lVar1 = param_8, lVar2 != 5)) goto LAB_10b018da0;
  }
  else {
    lVar1 = param_9;
    if (((lVar2 != 6) && (lVar1 = param_10, lVar2 != 7)) && (lVar1 = param_11, lVar2 != 8))
    goto LAB_10b018da0;
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))();
  }
LAB_10b018da0:
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b018e3c; end: 10b018e6b; -[SCLensPromptDataServices setProvider:] */

void FUN_10b018e3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b018e6c; end: 10b018e77; -[SCLensPromptDataServices .cxx_destruct] */

void FUN_10b018e6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b018e78; end: 10b018ff3; -[SCLensPromptFetchResult initWithPromptId:creationTimestamp:userId:lensId:promptContent:lensSpecificData:turnBasedMetadata:] */

undefined1 *
FUN_10b018e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_112704538;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b018ff4; end: 10b019017; -[SCLensPromptFetchResult copyWithZone:] */

undefined8 FUN_10b018ff4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b019018; end: 10b0190df; -[SCLensPromptFetchResult hash] */

undefined8 * FUN_10b019018(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10b0191f4:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b019200;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x10) - *(double *)(param_3 + 0x10));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x10) + *(double *)(param_3 + 0x10)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((((bVar1) &&
           ((lVar6 = *(long *)((long)puVar4 + 8), lVar6 == *(long *)(param_3 + 8) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
          ((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((((lVar6 = *(long *)((long)puVar4 + 0x20), lVar6 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
           ((lVar6 = *(long *)((long)puVar4 + 0x28), lVar6 == *(long *)(param_3 + 0x28) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
          ((lVar6 = *(long *)((long)puVar4 + 0x30), lVar6 == *(long *)(param_3 + 0x30) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x38);
        if (puVar8 != *(undefined1 **)(param_3 + 0x38)) {
          func_0x00010c071ae0();
          goto LAB_10b019200;
        }
        goto LAB_10b0191f4;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10b019200:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10b0190e0; end: 10b01921b; -[SCLensPromptFetchResult isEqual:] */

long FUN_10b0190e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0191f4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b019200;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
           ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
        lVar4 = *(long *)(param_1 + 0x38);
        if (lVar4 != *(long *)(param_3 + 0x38)) {
          func_0x00010c071ae0();
          goto LAB_10b019200;
        }
        goto LAB_10b0191f4;
      }
    }
    lVar4 = 0;
  }
LAB_10b019200:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b01921c; end: 10b019223; -[SCLensPromptFetchResult promptId] */

undefined8 FUN_10b01921c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b019224; end: 10b01922b; -[SCLensPromptFetchResult creationTimestamp] */

undefined8 FUN_10b019224(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b01922c; end: 10b019233; -[SCLensPromptFetchResult userId] */

undefined8 FUN_10b01922c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b019234; end: 10b01923b; -[SCLensPromptFetchResult lensId] */

undefined8 FUN_10b019234(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b01923c; end: 10b019243; -[SCLensPromptFetchResult promptContent] */

undefined8 FUN_10b01923c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b019244; end: 10b01924b; -[SCLensPromptFetchResult lensSpecificData] */

undefined8 FUN_10b019244(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b01924c; end: 10b019253; -[SCLensPromptFetchResult turnBasedMetadata] */

undefined8 FUN_10b01924c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b019254; end: 10b0192b3; -[SCLensPromptFetchResult .cxx_destruct] */

void FUN_10b019254(long param_1)

{
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



/* Entry: 10b0192b4; end: 10b0193a3; +[SCLensPromptContent imageWithUrl:encryptionKey:previewUrl:previewEncryptionKey:] */

void FUN_10b0192b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126bbd50;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0193a4; end: 10b01940f; +[SCLensPromptContent textWithTextContent:] */

void FUN_10b0193a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bbd50;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b019410; end: 10b019433; -[SCLensPromptContent copyWithZone:] */

undefined8 FUN_10b019410(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b019434; end: 10b0194cf; -[SCLensPromptContent hash] */

void FUN_10b019434(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_112704540;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0194d0; end: 10b019513; -[SCLensPromptContent internalInit] */

void FUN_10b0194d0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112704540;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b019514; end: 10b019613; -[SCLensPromptContent isEqual:] */

long FUN_10b019514(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0195ec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0195f8;
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
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10b0195f8;
              }
              goto LAB_10b0195ec;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0195f8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b019614; end: 10b01969f; -[SCLensPromptContent matchImage:text:] */

void FUN_10b019614(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x30));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0196a0; end: 10b0196f3; -[SCLensPromptContent .cxx_destruct] */

void FUN_10b0196a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0196f4; end: 10b0197b7; -[SCLensTurnBasedPromptTurnResult initWithPromptId:receiverUserId:isFirstTurn:isComplete:] */

undefined1 *
FUN_10b0196f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_112704548;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0197b8; end: 10b0197db; -[SCLensTurnBasedPromptTurnResult copyWithZone:] */

undefined8 FUN_10b0197b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0197dc; end: 10b01985b; -[SCLensTurnBasedPromptTurnResult hash] */

undefined8 * FUN_10b0197dc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_48;
  uStack_40 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b0198fc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b019908;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[3];
        if (puVar6 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_10b019908;
        }
        goto LAB_10b0198fc;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b019908:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b01985c; end: 10b019923; -[SCLensTurnBasedPromptTurnResult isEqual:] */

long FUN_10b01985c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0198fc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b019908;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b019908;
        }
        goto LAB_10b0198fc;
      }
    }
    lVar3 = 0;
  }
LAB_10b019908:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b019924; end: 10b01992b; -[SCLensTurnBasedPromptTurnResult promptId] */

undefined8 FUN_10b019924(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b01992c; end: 10b019933; -[SCLensTurnBasedPromptTurnResult receiverUserId] */

undefined8 FUN_10b01992c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


