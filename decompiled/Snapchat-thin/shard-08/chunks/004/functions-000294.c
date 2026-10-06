/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10611b984; end: 10611b9cb;  */

void FUN_10611b984(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29000();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10611b9cc; end: 10611ba27; -[SCCameraPreviewTinselRegistrator _handleEvent:] */

void FUN_10611b9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10611ba28;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010c0bd4a0(param_3,param_2,&puStack_38,0);
  return;
}



/* Entry: 10611ba28; end: 10611ba6b;  */

void FUN_10611ba28(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf81000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611ba6c; end: 10611bab3; -[SCCameraPreviewTinselRegistrator .cxx_destruct] */

void FUN_10611ba6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10611bab4; end: 10611bafb; +[SCCameraPreviewWorkflowEvent didCancelFromPreview] */

void FUN_10611bab4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c8168;
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



/* Entry: 10611bafc; end: 10611bb57; +[SCCameraPreviewWorkflowEvent didSendSnapWithReturnToCamera:] */

void FUN_10611bafc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c8168;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  puVar2[0x10] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10611bb58; end: 10611bb7b; -[SCCameraPreviewWorkflowEvent copyWithZone:] */

undefined8 FUN_10611bb58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10611bb7c; end: 10611bbd7; -[SCCameraPreviewWorkflowEvent hash] */

void FUN_10611bb7c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 0x10);
  puVar1 = &uStack_28;
  func_0x000100505190(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126efc60;
  puStack_60 = puVar1;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10611bbd8; end: 10611bc1b; -[SCCameraPreviewWorkflowEvent internalInit] */

void FUN_10611bbd8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126efc60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10611bc1c; end: 10611bcb3; -[SCCameraPreviewWorkflowEvent isEqual:] */

bool FUN_10611bc1c(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10611bcb4; end: 10611bd37; -[SCCameraPreviewWorkflowEvent matchDidCancelFromPreview:didSendSnap:] */

void FUN_10611bcb4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined1 *)(param_1 + 0x10));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10611bd38; end: 10611bdbf; -[SCCameraPreviewExternalContent initWithIncludesExternalContentFromCameraRoll:contentData:] */

undefined1 *
FUN_10611bd38(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126efc68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10611bdc0; end: 10611bde3; -[SCCameraPreviewExternalContent copyWithZone:] */

undefined8 FUN_10611bdc0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10611bde4; end: 10611be47; -[SCCameraPreviewExternalContent hash] */

ulong * FUN_10611bde4(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (ulong *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10611becc;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || ((char)puVar2[1] != (char)param_3[1])) {
      puVar4 = (ulong *)0x0;
      goto LAB_10611becc;
    }
    puVar4 = (ulong *)puVar2[2];
    if (puVar4 != (ulong *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10611becc;
    }
  }
  puVar4 = (ulong *)0x1;
LAB_10611becc:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10611be48; end: 10611bee7; -[SCCameraPreviewExternalContent isEqual:] */

long FUN_10611be48(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10611becc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10611becc;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10611becc;
    }
  }
  lVar3 = 1;
LAB_10611becc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10611bee8; end: 10611beef; -[SCCameraPreviewExternalContent includesExternalContentFromCameraRoll] */

undefined1 FUN_10611bee8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10611bef0; end: 10611bef7; -[SCCameraPreviewExternalContent contentData] */

undefined8 FUN_10611bef0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10611bef8; end: 10611bf03; -[SCCameraPreviewExternalContent .cxx_destruct] */

void FUN_10611bef8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10611bf04; end: 10611bf47; -[SCRecordingMetadataProvider dealloc] */

void FUN_10611bf04(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c256420();
  puStack_28 = PTR_PTR_1126efc70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10611bf48; end: 10611bf5f; -[SCRecordingMetadataProvider recordingMetadata] */

void FUN_10611bf48(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10611bf60; end: 10611bf77; -[SCRecordingMetadataProvider deviceMotionData] */

void FUN_10611bf60(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10611bf78; end: 10611bf8f; -[SCRecordingMetadataProvider gyroData] */

void FUN_10611bf78(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10611bf90; end: 10611bfa7; -[SCRecordingMetadataProvider accelerometerData] */

void FUN_10611bf90(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10611bfa8; end: 10611bfbb; -[SCRecordingMetadataProvider firstCameraCaptureTimestamp] */

void FUN_10611bfa8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x34);
  param_1[1] = *(undefined8 *)(param_2 + 0x3c);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x44);
  return;
}



/* Entry: 10611bfbc; end: 10611c157;  */

void FUN_10611bfbc(long param_1,undefined8 param_2)

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
  pcStack_68 = FUN_10611c158;
  puStack_60 = &UNK_11090b530;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  func_0x00010c0e3800(param_2);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10611c1c0;
  puStack_88 = &UNK_11090b530;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0e3840(param_2);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x10611c228;
  puStack_b0 = &UNK_11084e3d0;
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  func_0x00010c0e37e0(param_2);
  _objc_copyWeak(auStack_d0,param_1 + 0x20);
  func_0x00010c0e7be0(param_2);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 10611c158; end: 10611c303;  */

void FUN_10611c158(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc4c0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10611c304; end: 10611c32f; -[SCRecordingMetadataProvider stopObservingCapturerStateUpdate] */

void FUN_10611c304(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x50));
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611c330; end: 10611c377; -[SCRecordingMetadataProvider _didCancelRecording:session:] */

void FUN_10611c330(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611c378; end: 10611c427; -[SCRecordingMetadataProvider _willCapturePhoto:sampleMetadata:] */

void FUN_10611c378(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = param_4;
  _objc_retain(param_4);
  func_0x00010bf0a140(puVar1,param_2,&uStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar2;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(puVar1 + 8);
  *(undefined **)(puVar1 + 8) = puVar2;
  _objc_release(uVar3);
  if (puVar1[0x30] == '\x01') {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined **)(puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  if (puVar1[0x31] == '\x01') {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(puVar1 + 0x18);
    *(undefined **)(puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(puVar1 + 0x20);
    *(undefined **)(puVar1 + 0x20) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10611c428; end: 10611c4c7; -[SCRecordingMetadataProvider _didBeginVideoRecording:session:] */

void FUN_10611c428(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar2);
  }
  if (*(char *)(param_1 + 0x31) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10611c4c8; end: 10611c57b; -[SCRecordingMetadataProvider _didAppendVideoSampleBuffer:sampleMetadata:] */

void FUN_10611c4c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,param_4);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10611c57c;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x58),param_2,&puStack_58);
  }
  if (*(char *)(param_1 + 0x31) == '\x01') {
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10611c6c0;
    puStack_68 = &UNK_110842e18;
    lStack_60 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x58),param_2,&puStack_80);
  }
  return;
}



/* Entry: 10611c57c; end: 10611c60f;  */

void FUN_10611c57c(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010bfc7ae0();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10611c610;
  puStack_38 = &UNK_110841f80;
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = uVar1;
  _objc_retain();
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(uVar1);
  return;
}



/* Entry: 10611c610; end: 10611c6bf;  */

void FUN_10611c610(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  
  if (*(long *)(param_2 + 0x20) == 0) {
    return;
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0x28) + 0x10);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x10);
    func_0x00010c089820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    dVar3 = param_1;
    func_0x00010c2709c0(*(undefined8 *)(param_2 + 0x20));
    _objc_release(uVar2);
    _objc_release(lVar1);
    if (param_1 == dVar3) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_2 + 0x28) + 0x10),PTR_s_addObject__11259c1f0,
             *(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 10611c6c0; end: 10611c78f;  */

void FUN_10611c6c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010bfc7b00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010bfc7ac0();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10611c790;
  puStack_50 = &UNK_110848ba8;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  uStack_38 = uVar2;
  _objc_retain();
  _objc_retain(uVar1);
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10611c790; end: 10611c8b3;  */

/* WARNING: Possible PIC construction at 0x00010611c818: Changing call to branch */

void FUN_10611c790(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = param_1;
  if (*(long *)(param_2 + 0x20) == 0) {
LAB_10611c81c:
    if (*(long *)(param_2 + 0x30) == 0) {
      return;
    }
    lVar1 = *(long *)(*(long *)(param_2 + 0x28) + 0x18);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x18);
      func_0x00010c089820(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2709c0();
      dVar4 = dVar5;
      func_0x00010c2709c0(*(undefined8 *)(param_2 + 0x30));
      _objc_release(uVar2);
      _objc_release(lVar1);
      if (dVar5 == dVar4) {
        return;
      }
    }
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x18);
  }
  else {
    lVar1 = *(long *)(*(long *)(param_2 + 0x28) + 0x20);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x20);
      func_0x00010c089820(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2709c0();
      dVar4 = param_1;
      func_0x00010c2709c0(*(undefined8 *)(param_2 + 0x20));
      dVar5 = dVar4;
      _objc_release(uVar2);
      _objc_release(lVar1);
      if (param_1 == dVar4) goto LAB_10611c81c;
    }
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_addObject__11259c1f0,uVar2);
  return;
}



/* Entry: 10611c8b4; end: 10611c8bb; -[SCRecordingMetadataProvider performer] */

undefined8 FUN_10611c8b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10611c8bc; end: 10611c8eb; -[SCRecordingMetadataProvider setPerformer:] */

void FUN_10611c8bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611c8ec; end: 10611ca17; -[SCRecordingMetadataProvider .cxx_destruct] */

void FUN_10611c8ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10611ca18; end: 10611ca1b;  */

void FUN_10611ca18(void)

{
  return;
}



/* Entry: 10611ca1c; end: 10611ca3b; -[SCCameraNightModeActivationHandler isEnhancedNightModeEnabled] */

undefined * FUN_10611ca1c(long param_1)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    puVar1 = PTR_PTR_1126b7130;
                    /* WARNING: Could not recover jumptable at 0x00010c078bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b7130,PTR_s_isNightModeSupported_1125fbcf8);
    return puVar1;
  }
  return (undefined *)0x0;
}



/* Entry: 10611ca3c; end: 10611cbb7; -[SCCameraNightModeActivationHandler enableNightMode:nightModeEnhancementType:completionHandler:enableErrorHandler:] */

void FUN_10611ca3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((uint)*(byte *)(param_1 + 0x40) == (uint)param_3) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
    goto LAB_10611cb94;
  }
  *(char *)(param_1 + 0x40) = (char)param_3;
  if ((uint)param_3 == 0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = 0;
      _objc_release(uVar1);
      lVar5 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar5);
      lVar3 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c281f80();
      _objc_release(lVar3);
      _objc_release(lVar5);
      lVar5 = *(long *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = 0;
      goto LAB_10611cb78;
    }
  }
  else {
    uVar1 = param_6;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    _objc_release(uVar4);
    lVar5 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar3 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0da440(uVar1,param_2,*(undefined8 *)(param_1 + 0x50));
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c1276a0(lVar3,param_2,uVar1,param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = lVar2;
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(lVar3);
LAB_10611cb78:
    _objc_release(lVar5);
  }
  func_0x00010be08e00(param_1,param_2,param_3,param_4,param_5);
LAB_10611cb94:
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10611cbb8; end: 10611cc0f; -[SCCameraNightModeActivationHandler didRegisterProviderToken:noFormatFoundError:] */

void FUN_10611cbb8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x48);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar2);
  if ((param_4 != 0) && (lVar1 != 0)) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10611cc10; end: 10611cc3f; -[SCCameraNightModeActivationHandler didUnregisterProviderToken:] */

void FUN_10611cc10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611cc40; end: 10611cc4b; -[SCCameraNightModeActivationHandler featureNameForToken:] */

undefined ** FUN_10611cc40(void)

{
  return &PTR____CFConstantStringClassReference_110e41ff8;
}



/* Entry: 10611cc4c; end: 10611cc6f; -[SCCameraNightModeActivationHandler _pauseNightModeService] */

void FUN_10611cc4c(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x41) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be08e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__enableLowLightBoost_nightModeEn_11255fd20,0,
               *(undefined8 *)(param_1 + 0x58),0);
    return;
  }
  return;
}



/* Entry: 10611cc70; end: 10611cdfb; -[SCCameraNightModeActivationHandler _enableLowLightBoost:nightModeEnhancementType:completionHandler:] */

void FUN_10611cc70(long param_1,undefined8 param_2,int param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b7130;
  func_0x00010c071a60();
  if ((int)puVar1 != 0) {
    lVar3 = param_1;
    if (param_3 == 0) {
      func_0x00010be21b40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        lVar4 = param_1 + 8;
        _objc_loadWeakRetained(lVar4);
        lVar5 = lVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e3960();
        _objc_release(lVar5);
        _objc_release(lVar4);
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    else {
      if (param_4 == *(long *)(param_1 + 0x58)) goto LAB_10611cdd0;
      func_0x00010be21b40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        lVar4 = param_1 + 8;
        _objc_loadWeakRetained(lVar4);
        lVar5 = lVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e3960();
        _objc_release(lVar5);
        _objc_release(lVar4);
      }
      lVar4 = param_1;
      func_0x00010be21b40(param_1,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        lVar5 = param_1 + 8;
        _objc_loadWeakRetained(lVar5);
        lVar2 = lVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e3960();
        _objc_release(lVar2);
        _objc_release(lVar5);
        *(long *)(param_1 + 0x58) = param_4;
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
LAB_10611cdd0:
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10611cdfc; end: 10611ce3f; -[SCCameraNightModeActivationHandler _getProcessingModule:] */

void FUN_10611cdfc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 1) {
    lVar1 = 0x18;
  }
  else {
    if (param_3 != 2) goto _objc_autoreleaseReturnValue;
    lVar1 = 0x20;
  }
  func_0x00010c269d40(*(undefined8 *)(param_1 + lVar1));
  _objc_retainAutoreleasedReturnValue();
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10611ce40; end: 10611ceff; -[SCCameraNightModeActivationHandler _createGammaCorrectionMetalRenderCommand] */

void FUN_10611ce40(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c8250;
  _objc_alloc(PTR_PTR_1126c8250);
  puVar2 = PTR_PTR_1126c8260;
  _objc_alloc(PTR_PTR_1126c8260);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbe480();
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  uVar5 = param_1;
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbe4a0();
  func_0x00010bff92c0(param_1,uVar5,puVar2);
  func_0x00010c02bc60(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10611cf00; end: 10611cf7b; -[SCCameraNightModeActivationHandler .cxx_destruct] */

void FUN_10611cf00(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10611cf7c; end: 10611cffb; -[SCCameraNightModeServiceEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10611cf7c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273fb48);
  func_0x00010bef02e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf90fe0();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126efc80;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10611cffc; end: 10611d083; -[SCCameraNightModeServiceEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10611cffc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273fb64,0);
  _objc_destroyWeak(param_1 + _DAT_11273fb60);
  _objc_destroyWeak(param_1 + _DAT_11273fb5c);
  _objc_destroyWeak(param_1 + _DAT_11273fb58);
  _objc_destroyWeak(param_1 + _DAT_11273fb54);
  _objc_destroyWeak(param_1 + _DAT_11273fb50);
  _objc_destroyWeak(param_1 + _DAT_11273fb4c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273fb48,0);
  return;
}



/* Entry: 10611d084; end: 10611d097; -[SCLegacyCameraTooltipsServicesEntryPoint setApplicationCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10611d084(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273fb78,param_3);
  return;
}



/* Entry: 10611d098; end: 10611d10f; -[SCLegacyCameraTooltipsServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10611d098(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273fb80,0);
  _objc_destroyWeak(param_1 + _DAT_11273fb7c);
  _objc_destroyWeak(param_1 + _DAT_11273fb78);
  _objc_destroyWeak(param_1 + _DAT_11273fb74);
  _objc_destroyWeak(param_1 + _DAT_11273fb70);
  _objc_destroyWeak(param_1 + _DAT_11273fb6c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273fb68);
  return;
}



/* Entry: 10611d110; end: 10611d11b; -[SCFeatureSettingsService hasSeenTakeSnap] */

void FUN_10611d110(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e42018);
  return;
}



/* Entry: 10611d11c; end: 10611d127; -[SCFeatureSettingsService seenTakeSnapServerParam] */

undefined ** FUN_10611d11c(void)

{
  return &PTR____CFConstantStringClassReference_110e42018;
}



/* Entry: 10611d128; end: 10611d137; -[SCFeatureSettingsService setSeenTakeSnap:] */

void FUN_10611d128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e42018,param_3);
  return;
}



/* Entry: 10611d138; end: 10611d13f; -[SCFeatureSettingsService snap_tooltip_client_value:] */

undefined * FUN_10611d138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10611d140; end: 10611d147; -[SCFeatureSettingsService snap_tooltip_server_value:] */

void FUN_10611d140(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10611d148; end: 10611d153; -[SCFeatureSettingsService hasSeenNewFriendRequest] */

void FUN_10611d148(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e42038);
  return;
}



/* Entry: 10611d154; end: 10611d15f; -[SCFeatureSettingsService seenNewFriendRequestServerParam] */

undefined ** FUN_10611d154(void)

{
  return &PTR____CFConstantStringClassReference_110e42038;
}



/* Entry: 10611d160; end: 10611d16f; -[SCFeatureSettingsService setSeenNewFriendRequest:] */

void FUN_10611d160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e42038,param_3);
  return;
}



/* Entry: 10611d170; end: 10611d18f; -[SCFeatureSettingsService new_friend_request_tooltip_client_value:] */

void FUN_10611d170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b257c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  return;
}



/* Entry: 10611d190; end: 10611d1af; -[SCFeatureSettingsService new_friend_request_tooltip_server_value:] */

void FUN_10611d190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b257ce8(param_3);
  _objc_retainAutoreleasedReturnValue();
  return;
}



/* Entry: 10611d1b0; end: 10611d1bf; -[SCFeatureSettingsService seenNewFriendRequest] */

void FUN_10611d1b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e42038,0);
  return;
}



/* Entry: 10611d1c0; end: 10611d1cb; -[SCFeatureSettingsService hasSeenLensesActivationTooltip] */

void FUN_10611d1c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e42058);
  return;
}



/* Entry: 10611d1cc; end: 10611d1d7; -[SCFeatureSettingsService seenLensesActivationTooltipServerParam] */

undefined ** FUN_10611d1cc(void)

{
  return &PTR____CFConstantStringClassReference_110e42058;
}



/* Entry: 10611d1d8; end: 10611d1e7; -[SCFeatureSettingsService setSeenLensesActivationTooltip:] */

void FUN_10611d1d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e42058,param_3);
  return;
}



/* Entry: 10611d1e8; end: 10611d1ef; -[SCFeatureSettingsService lenses_first_appearance_tooltip_client_value:] */

undefined * FUN_10611d1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10611d1f0; end: 10611d1f7; -[SCFeatureSettingsService lenses_first_appearance_tooltip_server_value:] */

void FUN_10611d1f0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10611d1f8; end: 10611d207; -[SCFeatureSettingsService seenLensesActivationTooltip] */

void FUN_10611d1f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e42058,0);
  return;
}



/* Entry: 10611d208; end: 10611d213; -[SCFeatureSettingsService hasSeenMultiSnapCaptureTooltip] */

void FUN_10611d208(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e42078);
  return;
}



/* Entry: 10611d214; end: 10611d21f; -[SCFeatureSettingsService seenMultiSnapCaptureTooltipServerParam] */

undefined ** FUN_10611d214(void)

{
  return &PTR____CFConstantStringClassReference_110e42078;
}



/* Entry: 10611d220; end: 10611d22f; -[SCFeatureSettingsService setSeenMultiSnapCaptureTooltip:] */

void FUN_10611d220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e42078,param_3);
  return;
}



/* Entry: 10611d230; end: 10611d237; -[SCFeatureSettingsService multisnap_capture_tooltip_tooltip_client_value:] */

undefined * FUN_10611d230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10611d238; end: 10611d23f; -[SCFeatureSettingsService multisnap_capture_tooltip_tooltip_server_value:] */

void FUN_10611d238(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10611d240; end: 10611d24f; -[SCFeatureSettingsService seenMultiSnapCaptureTooltip] */

void FUN_10611d240(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e42078,0);
  return;
}



/* Entry: 10611d250; end: 10611d25b; -[SCFeatureSettingsService hasSeenCreativeKitOnboardingTooltip] */

void FUN_10611d250(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e42098);
  return;
}



/* Entry: 10611d25c; end: 10611d267; -[SCFeatureSettingsService seenCreativeKitOnboardingTooltipServerParam] */

undefined ** FUN_10611d25c(void)

{
  return &PTR____CFConstantStringClassReference_110e42098;
}



/* Entry: 10611d268; end: 10611d277; -[SCFeatureSettingsService setSeenCreativeKitOnboardingTooltip:] */

void FUN_10611d268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e42098,param_3);
  return;
}



/* Entry: 10611d278; end: 10611d27f; -[SCFeatureSettingsService snap_kit_creative_kit_onboarding_tooltip_client_value:] */

undefined * FUN_10611d278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10611d280; end: 10611d287; -[SCFeatureSettingsService snap_kit_creative_kit_onboarding_tooltip_server_value:] */

void FUN_10611d280(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10611d288; end: 10611d297; -[SCFeatureSettingsService seenCreativeKitOnboardingTooltip] */

void FUN_10611d288(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e42098,0);
  return;
}



/* Entry: 10611d298; end: 10611d2a3; -[SCFeatureSettingsService hasSeenMyStoryManagementTooltip] */

void FUN_10611d298(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e420b8);
  return;
}



/* Entry: 10611d2a4; end: 10611d2af; -[SCFeatureSettingsService seenMyStoryManagementTooltipServerParam] */

undefined ** FUN_10611d2a4(void)

{
  return &PTR____CFConstantStringClassReference_110e420b8;
}



/* Entry: 10611d2b0; end: 10611d2bf; -[SCFeatureSettingsService setSeenMyStoryManagementTooltip:] */

void FUN_10611d2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e420b8,param_3);
  return;
}



/* Entry: 10611d2c0; end: 10611d2c7; -[SCFeatureSettingsService my_story_management_tooltip_tooltip_client_value:] */

undefined * FUN_10611d2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10611d2c8; end: 10611d2cf; -[SCFeatureSettingsService my_story_management_tooltip_tooltip_server_value:] */

void FUN_10611d2c8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10611d2d0; end: 10611d2df; -[SCFeatureSettingsService seenMyStoryManagementTooltip] */

void FUN_10611d2d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e420b8,0);
  return;
}



/* Entry: 10611d2e0; end: 10611d2eb; -[SCFeatureSettingsService hasSeenMyStoryViewTooltip] */

void FUN_10611d2e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e420d8);
  return;
}



/* Entry: 10611d2ec; end: 10611d2f7; -[SCFeatureSettingsService seenMyStoryViewTooltipServerParam] */

undefined ** FUN_10611d2ec(void)

{
  return &PTR____CFConstantStringClassReference_110e420d8;
}



/* Entry: 10611d2f8; end: 10611d307; -[SCFeatureSettingsService setSeenMyStoryViewTooltip:] */

void FUN_10611d2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e420d8,param_3);
  return;
}



/* Entry: 10611d308; end: 10611d30f; -[SCFeatureSettingsService my_story_view_tooltip_tooltip_client_value:] */

undefined * FUN_10611d308(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10611d310; end: 10611d317; -[SCFeatureSettingsService my_story_view_tooltip_tooltip_server_value:] */

void FUN_10611d310(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10611d318; end: 10611d327; -[SCFeatureSettingsService seenMyStoryViewTooltip] */

void FUN_10611d318(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e420d8,0);
  return;
}



/* Entry: 10611d328; end: 10611d333; -[SCFeatureSettingsService hasSeenSeenTimelineMemoriesAddFromCameraRollTooltip] */

void FUN_10611d328(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e420f8);
  return;
}



/* Entry: 10611d334; end: 10611d33f; -[SCFeatureSettingsService seenSeenTimelineMemoriesAddFromCameraRollTooltipServerParam] */

undefined ** FUN_10611d334(void)

{
  return &PTR____CFConstantStringClassReference_110e420f8;
}



/* Entry: 10611d340; end: 10611d34f; -[SCFeatureSettingsService setSeenSeenTimelineMemoriesAddFromCameraRollTooltip:] */

void FUN_10611d340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e420f8,param_3);
  return;
}



/* Entry: 10611d350; end: 10611d357; -[SCFeatureSettingsService seen_timeline_memories_add_from_camera_roll_tooltip_client_value:] */

undefined * FUN_10611d350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10611d358; end: 10611d35f; -[SCFeatureSettingsService seen_timeline_memories_add_from_camera_roll_tooltip_server_value:] */

void FUN_10611d358(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10611d360; end: 10611d36f; -[SCFeatureSettingsService seenSeenTimelineMemoriesAddFromCameraRollTooltip] */

void FUN_10611d360(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e420f8,0);
  return;
}


