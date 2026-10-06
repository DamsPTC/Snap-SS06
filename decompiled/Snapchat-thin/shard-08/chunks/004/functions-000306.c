/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10614abb4; end: 10614ac53;  */

void FUN_10614abb4(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c226420(*(undefined8 *)(param_1 + 0x20));
    if (param_2 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfc1620(lVar1);
      func_0x00010c19c020(uVar4);
    }
    lVar2 = lVar1;
    func_0x00010bf2b860(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10614ac54; end: 10614af3f; -[SCCameraViewController logCameraPageActionEventWithStartX:startY:endX:endY:duration:module:firstUsage:action:creativeKitMetadata:] */

void FUN_10614ac54(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_d4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126c8520;
  _objc_opt_new();
  func_0x00010c211fc0();
  func_0x00010c212020(puVar2);
  func_0x00010c211fa0(puVar2);
  func_0x00010c212000(puVar2);
  func_0x00010c161c40(puVar2);
  func_0x00010c222d20(in_d4,puVar2);
  if (param_3 == 2) {
    uVar3 = param_1;
    func_0x00010c0926e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c096b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcc00(puVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  uVar3 = param_1;
  func_0x00010c0924a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c19c220(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010bfc1840(param_1);
  func_0x00010c19c0e0(puVar2);
  func_0x00010c076400(param_1);
  func_0x00010c2262a0(puVar2);
  puVar1 = PTR_PTR_1126aff08;
  uVar3 = param_1;
  func_0x00010c252440(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b7e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70d80();
  func_0x00010c06cea0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c1d84e0(puVar2);
  func_0x00010c176a80(puVar2);
  func_0x00010c162980(puVar2);
  func_0x00010c185860(puVar2);
  _objc_initWeak(auStack_88,param_1);
  func_0x00010c09f200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_88);
  _objc_retain(puVar2);
  func_0x00010bfa8180(uVar3);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar2);
  _objc_release(param_6);
  return;
}



/* Entry: 10614af40; end: 10614afdf;  */

void FUN_10614af40(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c226420(*(undefined8 *)(param_1 + 0x20));
    if (param_2 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfc1620(lVar1);
      func_0x00010c19c020(uVar4);
    }
    lVar2 = lVar1;
    func_0x00010bf2b860(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10614afe0; end: 10614b17b; -[SCCameraViewController logCameraUserActionForCameraTimerWithGestureRecognizer:] */

void FUN_10614afe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c252440();
  uVar2 = param_3;
  if (lVar1 == 3) {
    func_0x00010bf29620(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf2b840();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252440(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf2b240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b740(uVar4,param_4,uVar6);
  }
  else {
    if (lVar1 != 1) goto LAB_10614b15c;
    func_0x00010c09ef00(param_5,param_4,0);
    func_0x00010bf29620(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf2b840();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252440(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf2b240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b7c0(param_1,param_2,uVar4,param_4,uVar6);
  }
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
LAB_10614b15c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10614b17c; end: 10614b29f; -[SCCameraViewController logCameraPermissionState:cameraPermissionGrantedUnexpectedly:] */

void FUN_10614b17c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x00010bf29980();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf10e60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf11020();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (((param_4 & 1) == 0) && (lVar4 == 3)) {
    return;
  }
  func_0x00010bdd9360(param_1,param_2,lVar4);
  puVar5 = PTR_PTR_1126c8528;
  _objc_opt_new(PTR_PTR_1126c8528);
  func_0x00010c176140();
  func_0x00010c18dae0(puVar5,param_2,param_3);
  func_0x00010bf2b860(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10614b2a0; end: 10614b2c3; -[SCCameraViewController _cameraPermissionStateForStatus:] */

undefined8 FUN_10614b2a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    return *(undefined8 *)(&UNK_10ddd9bc8 + (param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 10614b2c4; end: 10614b52b; -[SCFeatureCloseupCaptureImpl initWithCameraHardwareResource:cameraHardwareServicesAPI:captureDeviceManager:closeupCaptureConfig:cameraUserActionLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10614b2c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126efe00;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_1127405a4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127405a8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf318a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_1127405ac;
    _objc_storeWeak((long)puVar1 + lVar6,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127405b0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127405b0) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127405b4) = 0x3f800000;
    lVar7 = (long)_DAT_1127405b8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_6;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_1127405bc;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127405c0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127405c0) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0b7ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_1127405c4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    lVar6 = (long)puVar1 + lVar6;
    _objc_loadWeakRetained(lVar6);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f8a0(puVar1);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(lVar6);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10614b52c; end: 10614b56f; -[SCFeatureCloseupCaptureImpl dealloc] */

void FUN_10614b52c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c256420();
  puStack_28 = PTR_PTR_1126efe00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10614b570; end: 10614b5f7; -[SCFeatureCloseupCaptureImpl didTapToFocus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614b570(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127405c4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be33d00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be09290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enabledCloseupCapture_11255fe40);
    return;
  }
  return;
}



/* Entry: 10614b5f8; end: 10614b68b; -[SCFeatureCloseupCaptureImpl isCloseupCaptureEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10614b5f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  byte bVar5;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127405c4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf70d80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126aff08;
  func_0x00010c06cea0(PTR_PTR_1126aff08,param_2,uVar3);
  if ((int)puVar4 == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = *(byte *)(param_1 + _DAT_1127405c8);
  }
  return bVar5 & 1;
}



/* Entry: 10614b68c; end: 10614b69b; -[SCFeatureCloseupCaptureImpl lensPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10614b68c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_1127405b4);
}



/* Entry: 10614b69c; end: 10614b763; -[SCFeatureCloseupCaptureImpl backCameraDeviceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10614b69c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + _DAT_1127405a8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf2fa00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == *(long *)PTR__AVCaptureDeviceTypeBuiltInUltraWideCamera_110347f18) {
    uVar4 = 1;
  }
  else if (lVar3 == *(long *)PTR__AVCaptureDeviceTypeBuiltInWideAngleCamera_110347f20) {
    uVar4 = 0;
  }
  else {
    uVar4 = 2;
    if (lVar3 != *(long *)PTR__AVCaptureDeviceTypeBuiltInTelephotoCamera_110347f00) {
      uVar4 = 0xffffffffffffffff;
    }
  }
  _objc_release(lVar3);
  return uVar4;
}



/* Entry: 10614b764; end: 10614b9a3; -[SCFeatureCloseupCaptureImpl _enabledCloseupCapture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614b764(float param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_68 [8];
  double dStack_60;
  undefined1 auStack_58 [8];
  
  lVar10 = (long)_DAT_1127405c8;
  if ((*(byte *)(param_2 + lVar10) & 1) == 0) {
    lVar11 = (long)_DAT_1127405a8;
    uVar1 = *(undefined8 *)(param_2 + lVar11);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf2fa00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010bfdd020();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar9 != 0) {
      uVar3 = *(ulong *)(param_2 + lVar11);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf2fa00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c081d40();
      _objc_release(uVar4);
      _objc_release(uVar3);
      if ((uVar5 & 1) == 0) {
        lVar11 = (long)_DAT_1127405c4;
        puVar6 = *(undefined **)(param_2 + lVar11);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c252440();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c154f00();
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar7 = PTR_PTR_1126afed0;
        func_0x00010c0db140();
        if (puVar8 == puVar7) {
          *(undefined1 *)(param_2 + lVar10) = 1;
          uVar9 = *(undefined8 *)(param_2 + lVar11);
          func_0x00010c269d40(uVar9);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar9;
          func_0x00010c252440();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          func_0x00010c2bf100(uVar2);
          func_0x00010be5a620(param_2);
          _objc_initWeak(auStack_58,param_2);
          uVar9 = *(undefined8 *)(param_2 + _DAT_1127405a4);
          func_0x00010c269d40(uVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_copyWeak(auStack_68,auStack_58);
          dStack_60 = (double)param_1 + (double)param_1;
          func_0x00010c1c9320(uVar9);
          _objc_release(uVar9);
          _objc_destroyWeak(auStack_68);
          _objc_destroyWeak(auStack_58);
          _objc_release(uVar2);
        }
      }
    }
  }
  return;
}



/* Entry: 10614b9a4; end: 10614ba9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614b9a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar5 = (long)_DAT_1127405a8;
    uVar2 = *(undefined8 *)(lVar1 + lVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf2fa00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c081d40();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar4 != 0) {
      uVar4 = *(undefined8 *)(lVar1 + lVar5);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c2bf1a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c227b00(*(undefined8 *)(param_1 + 0x28));
      _objc_release(uVar3);
      _objc_release(uVar4);
      func_0x00010be5a5e0(lVar1);
      func_0x00010c0d9840(*(undefined8 *)(lVar1 + _DAT_1127405c0),param_2,
                          PTR____kCFBooleanTrue_11034ab68);
      *(long *)(lVar1 + _DAT_1127405cc) = *(long *)(lVar1 + _DAT_1127405cc) + 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10614baa0; end: 10614bbf7; -[SCFeatureCloseupCaptureImpl _hasCloseupCaptureModeConditions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10614baa0(float param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  byte bVar9;
  float fVar10;
  float fVar11;
  
  _objc_retain(param_4);
  uVar3 = *(ulong *)(param_2 + _DAT_1127405a8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf2fa00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c081d40();
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar7 = PTR_PTR_1126aff08;
  if ((uVar5 & 1) == 0) {
    puVar6 = param_4;
    func_0x00010bf70d80(param_4);
    func_0x00010c06cea0(puVar7,param_3,puVar6);
    if ((int)puVar7 != 0) {
      puVar7 = param_4;
      func_0x00010c154f00();
      puVar6 = PTR_PTR_1126afed0;
      func_0x00010c0db140();
      if (puVar7 == puVar6) {
        lVar1 = (long)_DAT_1127405b4;
        lVar2 = (long)_DAT_1127405b8;
        fVar11 = *(float *)(param_2 + lVar1);
        uVar8 = *(undefined8 *)(param_2 + lVar2);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3e0a0();
        fVar10 = param_1;
        _objc_release(uVar8);
        if (param_1 <= fVar11) {
          fVar11 = *(float *)(param_2 + lVar1);
          uVar8 = *(undefined8 *)(param_2 + lVar2);
          func_0x00010c269d40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf3e0c0();
          _objc_release(uVar8);
          if (fVar11 <= fVar10) {
            bVar9 = *(byte *)(param_2 + _DAT_1127405d0) ^ 1;
            goto LAB_10614bbc0;
          }
        }
      }
    }
  }
  bVar9 = 0;
LAB_10614bbc0:
  _objc_release(param_4);
  return bVar9 & 1;
}



/* Entry: 10614bbf8; end: 10614bfa3; -[SCFeatureCloseupCaptureImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614bbf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_80,param_1);
  lVar6 = (long)_DAT_1127405d4;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c160440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10614bfa4;
    puStack_90 = &UNK_110872b30;
    _objc_copyWeak(auStack_88,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0987a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_10614c090;
    puStack_b8 = &UNK_11090d210;
    _objc_copyWeak(auStack_b0,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0c42e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_10614c178;
    puStack_e0 = &UNK_11084e400;
    _objc_copyWeak(auStack_d8,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0xc2000000;
    uStack_118 = 0x10614c3dc;
    puStack_110 = &UNK_110841fb0;
    _objc_copyWeak(auStack_100,auStack_80);
    _objc_retain(param_4);
    uStack_108 = param_4;
    func_0x000100162d98("APPSTORE",&puStack_128);
    _objc_release(uStack_108);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_88);
  }
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10614bfa4; end: 10614c047;  */

void FUN_10614bfa4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e38c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10614c048; end: 10614c08f;  */

void FUN_10614c048(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc800();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10614c090; end: 10614c133;  */

void FUN_10614c090(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e3920(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10614c134; end: 10614c177;  */

void FUN_10614c134(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010bdfc920(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10614c178; end: 10614c31b;  */

void FUN_10614c178(long param_1,undefined8 param_2)

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
  pcStack_68 = FUN_10614c31c;
  puStack_60 = &UNK_110872b00;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  func_0x00010c0e7bc0(param_2);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10614c34c;
  puStack_88 = &UNK_11090b590;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0e3ae0(param_2);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x10614c37c;
  puStack_b0 = &UNK_11090b5c0;
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  func_0x00010c0e3ac0(param_2);
  _objc_copyWeak(auStack_d0,param_1 + 0x20);
  func_0x00010c0e3840(param_2);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 10614c31c; end: 10614c40f;  */

void FUN_10614c31c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea4f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10614c410; end: 10614c443; -[SCFeatureCloseupCaptureImpl stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614c410(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127405d4;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10614c444; end: 10614c4cf; -[SCFeatureCloseupCaptureImpl _didChangeCaptureDevicePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614c444(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127405c8;
  if (*(char *)(param_1 + lVar4) == '\x01') {
    uVar1 = *(ulong *)(param_1 + _DAT_1127405a8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf2fa00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c081d40();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      *(undefined1 *)(param_1 + lVar4) = 0;
    }
  }
  return;
}



/* Entry: 10614c4d0; end: 10614c4e7; -[SCFeatureCloseupCaptureImpl _didChangeLensPosition:devicePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614c4d0(undefined4 param_1,long param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 1) {
    *(undefined4 *)(param_2 + _DAT_1127405b4) = param_1;
  }
  return;
}



/* Entry: 10614c4e8; end: 10614c4f7; -[SCFeatureCloseupCaptureImpl _setIsVideoRecording:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614c4e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127405d0) = param_3;
  return;
}



/* Entry: 10614c4f8; end: 10614c54f; -[SCFeatureCloseupCaptureImpl _logUserTapActionDidStart] */

void FUN_10614c4f8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10614c550;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 10614c550; end: 10614c597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614c550(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127405bc);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10614c598; end: 10614c5ef; -[SCFeatureCloseupCaptureImpl _logUserTapActionDidEnd] */

void FUN_10614c598(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10614c5f0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 10614c5f0; end: 10614c637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614c5f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127405bc);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10614c638; end: 10614c63b; -[SCFeatureCloseupCaptureImpl disableMode] */

void FUN_10614c638(void)

{
  return;
}



/* Entry: 10614c63c; end: 10614c647; -[SCFeatureCloseupCaptureImpl incompatibleModes] */

undefined * FUN_10614c63c(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 10614c648; end: 10614c64f; -[SCFeatureCloseupCaptureImpl isHidden] */

undefined8 FUN_10614c648(void)

{
  return 0;
}



/* Entry: 10614c650; end: 10614c67f; -[SCFeatureCloseupCaptureImpl modeEnabledStateChangedObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614c650(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127405c0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10614c680; end: 10614c687; -[SCFeatureCloseupCaptureImpl modeType] */

undefined8 FUN_10614c680(void)

{
  return 0x17;
}



/* Entry: 10614c688; end: 10614c68b; -[SCFeatureCloseupCaptureImpl onTap:] */

void FUN_10614c688(void)

{
  return;
}



/* Entry: 10614c68c; end: 10614c693; -[SCFeatureCloseupCaptureImpl secondaryButtonState] */

undefined8 FUN_10614c68c(void)

{
  return 0;
}



/* Entry: 10614c694; end: 10614c697; -[SCFeatureCloseupCaptureImpl secondaryOnTap:] */

void FUN_10614c694(void)

{
  return;
}



/* Entry: 10614c698; end: 10614c6a7; -[SCFeatureCloseupCaptureImpl state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10614c698(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127405c8);
}



/* Entry: 10614c6a8; end: 10614c6ab; -[SCFeatureCloseupCaptureImpl toolbarButtonPositionDidChange:] */

void FUN_10614c6a8(void)

{
  return;
}



/* Entry: 10614c6ac; end: 10614c6bb; -[SCFeatureCloseupCaptureImpl resetMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614c6ac(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_1127405cc) = 0;
  return;
}



/* Entry: 10614c6bc; end: 10614c76f; -[SCFeatureCloseupCaptureImpl usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614c6bc(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110e42938;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined8 *)(param_1 + _DAT_1127405cc));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_30,&ppuStack_38,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    ppuVar4 = (undefined **)0x0;
    func_0x00010b9f9028();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar1 = ppuVar4;
    }
    func_0x00010c1d0560(puVar3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110db16f8);
    _objc_release(ppuVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10614c770; end: 10614c7d7; -[SCFeatureCloseupCaptureImpl detailedCameraModeLogInfo] */

void FUN_10614c770(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  ppuVar3 = (undefined **)0x0;
  func_0x00010b9f9028();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  func_0x00010c1d0560(puVar2,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110db16f8);
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10614c7d8; end: 10614c7db; -[SCFeatureCloseupCaptureImpl isCameraModeActivated] */

void FUN_10614c7d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06ea90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isCloseupCaptureEnabled_1125f94b0);
  return;
}



/* Entry: 10614c7dc; end: 10614c7e3; -[SCFeatureCloseupCaptureImpl cameraModeType] */

undefined8 FUN_10614c7dc(void)

{
  return 0x17;
}



/* Entry: 10614c7e4; end: 10614c7e7; -[SCFeatureCloseupCaptureImpl configureWithCameraToolbar:] */

void FUN_10614c7e4(void)

{
  return;
}



/* Entry: 10614c7e8; end: 10614c893; -[SCFeatureCloseupCaptureImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614c7e8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127405c4,0);
  _objc_storeStrong(param_1 + _DAT_1127405d4,0);
  _objc_storeStrong(param_1 + _DAT_1127405c0,0);
  _objc_storeStrong(param_1 + _DAT_1127405bc,0);
  _objc_storeStrong(param_1 + _DAT_1127405b8,0);
  _objc_destroyWeak(param_1 + _DAT_1127405ac);
  _objc_storeStrong(param_1 + _DAT_1127405a8,0);
  _objc_storeStrong(param_1 + _DAT_1127405a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127405b0,0);
  return;
}



/* Entry: 10614c894; end: 10614c897; -[SCFeatureContainerViewRemoteImpl beginObservingVideoCaptureEvents:imageCaptureEvents:] */

void FUN_10614c894(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be65d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__observeCaptureVideoStrategyEven_1125770f0);
  return;
}



/* Entry: 10614c898; end: 10614c977; -[SCFeatureContainerViewRemoteImpl _observeCaptureVideoStrategyEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614c898(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127405ec);
  *(undefined8 *)(param_1 + _DAT_1127405ec) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10614c978; end: 10614cbe3;  */

void FUN_10614c978(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10614cbe4;
  puStack_88 = &UNK_11084ec30;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10614cc4c;
  puStack_b0 = &UNK_11084ec30;
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x10614cc94;
  puStack_d8 = &UNK_11084ec30;
  _objc_copyWeak(auStack_d0,param_1 + 0x20);
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x10614ccc0;
  puStack_100 = &UNK_11084ec30;
  _objc_copyWeak(auStack_f8,param_1 + 0x20);
  puStack_140 = puVar1;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x10614ccec;
  puStack_128 = &UNK_11090d2a0;
  _objc_copyWeak(auStack_120,param_1 + 0x20);
  puStack_168 = puVar1;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x10614cd20;
  puStack_150 = &UNK_11090b9a8;
  _objc_copyWeak(auStack_148,param_1 + 0x20);
  puStack_190 = puVar1;
  uStack_188 = 0xc2000000;
  uStack_180 = 0x10614cd4c;
  puStack_178 = &UNK_11090b9a8;
  _objc_copyWeak(auStack_170,param_1 + 0x20);
  _objc_copyWeak(auStack_198,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_198);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_148);
  _objc_destroyWeak(auStack_120);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_2);
  return;
}



/* Entry: 10614cbe4; end: 10614cc4b;  */

void FUN_10614cbe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00120();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10614cc4c; end: 10614cda3;  */

void FUN_10614cc4c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00840();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10614cda4; end: 10614d04f; -[SCFeatureContainerViewRemoteImpl _didScheduleRecordRequestWithConfiguration:state:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614cda4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c123e40(*(undefined8 *)(param_2 + _DAT_1127405dc));
  lVar5 = (long)_DAT_1127405e8;
  uVar1 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010bf2b240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3c60(param_1);
  fVar6 = (float)param_1;
  _objc_release(uVar1);
  func_0x00010c0697c0(*(undefined8 *)(param_2 + lVar5));
  uVar2 = param_5;
  func_0x00010c0982a0();
  if ((uVar2 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_2 + lVar5);
    func_0x00010bf2b240(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c177360();
    _objc_release(uVar1);
  }
  else {
    _objc_initWeak(auStack_a0,param_2);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    fVar6 = -32.0;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10614d050;
    puStack_68 = &UNK_110846540;
    uStack_58 = 0;
    _objc_copyWeak(auStack_60,auStack_a0);
    uVar1 = 0;
    func_0x0001008553e8(0,&puStack_80);
    uVar4 = *(undefined8 *)(param_2 + _DAT_1127405f0);
    *(undefined8 *)(param_2 + _DAT_1127405f0) = uVar1;
    _objc_release(uVar4);
    _dispatch_time(0,200000000);
    func_0x00010058c530();
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_a0);
  }
  if (*(long *)(param_2 + _DAT_1127405d8) == 0) {
    _objc_initWeak(auStack_88,param_2);
    uVar1 = *(undefined8 *)(param_2 + _DAT_1127405e0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0861c0(PTR_PTR_1126c84e0);
    _CMTimeMake(auStack_a0,(long)(fVar6 * 1000.0),1000);
    uStack_a8 = 0;
    _objc_copyWeak(auStack_b0,auStack_88);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfa0(uVar1);
    _objc_release(puVar3);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10614d050; end: 10614d0a7;  */

void FUN_10614d050(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd3240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10614d0a8; end: 10614d0df; -[SCFeatureContainerViewRemoteImpl _didStartRecordWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614d0a8(long param_1)

{
  long lVar1;
  
  func_0x00010be99520();
  lVar1 = (long)_DAT_1127405e8;
  func_0x00010c13c4c0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c1d8ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setPanGestureRecognizerEnabled__112653dd8,1);
  return;
}



/* Entry: 10614d0e0; end: 10614d0f3; -[SCFeatureContainerViewRemoteImpl _willStopRecord] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614d0e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c255c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127405e8),
             PTR_s_stopCameraTimerAnimationAndSaveS_112673138,1);
  return;
}



/* Entry: 10614d0f4; end: 10614d117; -[SCFeatureContainerViewRemoteImpl _didStopRecord] */

void FUN_10614d0f4(undefined8 param_1)

{
  func_0x00010be04660();
                    /* WARNING: Could not recover jumptable at 0x00010be956d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__restoreLongPressGestureConfigur_112582f50);
  return;
}



/* Entry: 10614d118; end: 10614d15b; -[SCFeatureContainerViewRemoteImpl _didAbortRecord:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614d118(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    func_0x00010be92560(param_1);
  }
  func_0x00010c255c40(*(undefined8 *)(param_1 + _DAT_1127405e8));
                    /* WARNING: Could not recover jumptable at 0x00010be956d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__restoreLongPressGestureConfigur_112582f50);
  return;
}



/* Entry: 10614d15c; end: 10614d1bf; -[SCFeatureContainerViewRemoteImpl _beginCameraTimerCaptureAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614d15c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127405e8);
  func_0x00010bf2b240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c177360();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127405f0);
  *(undefined8 *)(param_1 + _DAT_1127405f0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10614d1c0; end: 10614d26b; -[SCFeatureContainerViewRemoteImpl _saveLongPressGestureConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614d1c0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if ((*(char *)(param_2 + _DAT_1127405e4) == '\x01') &&
     (lVar2 = (long)_DAT_1127405f4, (*(byte *)(param_2 + lVar2) & 1) == 0)) {
    lVar1 = *(long *)(param_2 + _DAT_1127405e8);
    func_0x00010c0b4ee0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010bf01700(lVar1);
      *(undefined8 *)(param_2 + _DAT_1127405f8) = param_1;
      func_0x00010c26f140(lVar1);
      *(undefined8 *)(param_2 + _DAT_1127405fc) = param_1;
      *(undefined1 *)(param_2 + lVar2) = 1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10614d26c; end: 10614d30b; -[SCFeatureContainerViewRemoteImpl _restoreLongPressGestureConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614d26c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*(char *)(param_1 + _DAT_1127405e4) == '\x01') &&
     (lVar2 = (long)_DAT_1127405f4, *(char *)(param_1 + lVar2) == '\x01')) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127405e8);
    func_0x00010c0b4ee0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167340(*(undefined8 *)(param_1 + _DAT_1127405f8));
    func_0x00010c214c60(*(undefined8 *)(param_1 + _DAT_1127405fc),uVar1);
    *(undefined1 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10614d30c; end: 10614d33f; -[SCFeatureContainerViewRemoteImpl _capturerDidFinishRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614d30c(long param_1,undefined8 param_2)

{
  func_0x00010c1d8ec0(*(undefined8 *)(param_1 + _DAT_1127405e8),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010be956d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__restoreLongPressGestureConfigur_112582f50);
  return;
}



/* Entry: 10614d340; end: 10614d373; -[SCFeatureContainerViewRemoteImpl _capturerDidFailRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614d340(long param_1,undefined8 param_2)

{
  func_0x00010c1d8ec0(*(undefined8 *)(param_1 + _DAT_1127405e8),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010be956d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__restoreLongPressGestureConfigur_112582f50);
  return;
}



/* Entry: 10614d374; end: 10614d3a7; -[SCFeatureContainerViewRemoteImpl _capturerDidCancelRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614d374(long param_1,undefined8 param_2)

{
  func_0x00010c1d8ec0(*(undefined8 *)(param_1 + _DAT_1127405e8),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010be956d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__restoreLongPressGestureConfigur_112582f50);
  return;
}



/* Entry: 10614d3a8; end: 10614d427; -[SCFeatureContainerViewRemoteImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614d3a8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127405e0,0);
  _objc_storeStrong(param_1 + _DAT_1127405dc,0);
  _objc_storeStrong(param_1 + _DAT_112740600,0);
  _objc_storeStrong(param_1 + _DAT_1127405f0,0);
  _objc_storeStrong(param_1 + _DAT_1127405e8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127405ec,0);
  return;
}



/* Entry: 10614d428; end: 10614d453; -[SCShortcutToastActionHandlingImpl onShortcutToastRemoveButtonTapped] */

void FUN_10614d428(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e6740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10614d454; end: 10614d47f; -[SCShortcutToastActionHandlingImpl onShortcutToastDismissed] */

void FUN_10614d454(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e6720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10614d480; end: 10614d48b; -[SCShortcutToastActionHandlingImpl pushToValdiMarshaller:] */

undefined8 FUN_10614d480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8798;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  FUN_1061a2e90();
  return param_3;
}



/* Entry: 10614d48c; end: 10614d4a3; -[SCShortcutToastActionHandlingImpl delegate] */

void FUN_10614d48c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10614d4a4; end: 10614d4af; -[SCShortcutToastActionHandlingImpl setDelegate:] */

void FUN_10614d4a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 10614d4b0; end: 10614d4b7; -[SCShortcutToastActionHandlingImpl .cxx_destruct] */

void FUN_10614d4b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10614d4b8; end: 10614d4cb; -[SCFeatureContextShortcutImpl _viewWillDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614d4b8(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112740644) = 1;
  return;
}



/* Entry: 10614d4cc; end: 10614d4ef; -[SCFeatureContextShortcutImpl _viewDidFullyDisappear] */

void FUN_10614d4cc(undefined8 param_1)

{
  func_0x00010c256420();
                    /* WARNING: Could not recover jumptable at 0x00010bea2fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setContextActionExpired_112586598);
  return;
}



/* Entry: 10614d4f0; end: 10614d607; -[SCFeatureContextShortcutImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614d4f0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar2 = *(long *)(param_1 + _DAT_112740648);
  _objc_retain(lVar2);
  lVar3 = *(long *)(param_1 + _DAT_11274064c);
  lVar1 = lVar3;
  _objc_retain(lVar3);
  if (lVar2 != 0 || lVar3 != 0) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10614d608;
    puStack_48 = &UNK_110841f80;
    _objc_retain(lVar2);
    lStack_40 = lVar2;
    _objc_retain(lVar3);
    lStack_38 = lVar3;
    func_0x00010c0f88c0(lVar1);
    _objc_release(lVar1);
    _objc_release(lStack_38);
    _objc_release(lStack_40);
  }
  func_0x00010c256420(param_1);
  func_0x00010bec3440(param_1);
  func_0x00010bec3400(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puStack_68 = PTR_PTR_1126efe10;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10614d608; end: 10614d637;  */

void FUN_10614d608(long param_1)

{
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bf65bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_deactivateConstraints__1125b70a0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10614d638; end: 10614d647; -[SCFeatureContextShortcutImpl isActivated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10614d638(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112740638);
}



/* Entry: 10614d648; end: 10614d72f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614d648(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    func_0x00010c1d0560(*(undefined8 *)(lVar1 + _DAT_112740660));
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10614d730; end: 10614d797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614d730(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && ((*(byte *)(param_1 + _DAT_112740664) & 1) == 0)) {
    func_0x00010bebb7a0(param_1);
    func_0x00010bec0b60(param_1);
    func_0x00010bec0b00(param_1);
    func_0x00010be51340(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11274063c));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10614d798; end: 10614d7ab; -[SCFeatureContextShortcutImpl _setContextActionExpired] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614d798(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112740664) = 1;
  return;
}



/* Entry: 10614d7ac; end: 10614d9bb; -[SCFeatureContextShortcutImpl _applySoundWithContextAction:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614d7ac(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c277e80();
  if (lVar1 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
  }
  else {
    func_0x00010bec3440(param_1);
    lVar1 = param_3;
    func_0x00010c277e80();
    _objc_initWeak(auStack_58,param_1);
    lVar7 = (long)_DAT_112740620;
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0d32c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,auStack_58);
    lStack_60 = lVar1;
    _objc_retain(param_4);
    uVar3 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_112740668);
    *(undefined8 *)(param_1 + _DAT_112740668) = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bfa1820(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c278900(param_3);
    func_0x00010c0df720(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47ca0(uVar4);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10614d9bc; end: 10614dbf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614d9bc(long param_1,undefined **param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    ppuVar2 = param_2;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c277e80();
    ppuVar9 = *(undefined ***)(param_1 + 0x30);
    _objc_release(ppuVar3);
    if (ppuVar4 == ppuVar9) {
      func_0x00010bec3440(lVar1);
      if (*(char *)(lVar1 + _DAT_112740664) == '\x01') {
        lVar5 = *(long *)(param_1 + 0x20);
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x10))(lVar5,0);
        }
      }
      else {
        ppuVar4 = ppuVar2;
        func_0x00010beff2a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar4;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar9;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
        if (ppuVar6 != (undefined **)0x0) {
          ppuVar3 = ppuVar6;
        }
        _objc_retain(ppuVar3);
        _objc_release(ppuVar6);
        _objc_release(ppuVar9);
        _objc_release(ppuVar4);
        puVar7 = PTR_PTR_1126aff90;
        _objc_alloc(PTR_PTR_1126aff90);
        func_0x00010c05a0e0();
        ppuVar4 = ppuVar3;
        func_0x00010c08fa60();
        _objc_release(ppuVar3);
        if (ppuVar4 != (undefined **)0x0) {
          puVar8 = PTR_PTR_1126aff98;
          _objc_alloc(PTR_PTR_1126aff98);
          ppuVar3 = ppuVar2;
          func_0x00010beff2a0(ppuVar2);
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar3;
          func_0x00010bf93ec0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c020da0(puVar8);
          _objc_release(ppuVar4);
          _objc_release(ppuVar3);
          ppuVar3 = ppuVar2;
          func_0x00010beff2a0(ppuVar2);
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar3;
          func_0x00010bf93e80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1b64a0(puVar8);
          _objc_release(ppuVar4);
          _objc_release(ppuVar3);
          func_0x00010c195c60(puVar7);
          _objc_release(puVar8);
        }
        lVar5 = *(long *)(param_1 + 0x20);
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x10))(lVar5,puVar7);
        }
        _objc_release(puVar7);
      }
    }
    _objc_release(ppuVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10614dbf4; end: 10614de23; -[SCFeatureContextShortcutImpl _applyLensWithContextAction:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614dbf4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  FUN_10614de24();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010bf29f40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf90100();
    _objc_release(lVar2);
    puVar5 = PTR_PTR_1126b1ab0;
    if ((int)lVar3 == 0) {
      puVar4 = PTR_PTR_1126b1ab8;
      _objc_alloc(PTR_PTR_1126b1ab8);
      func_0x00010c024960();
      func_0x00010c094620(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_initWeak(auStack_58,param_1);
      uVar6 = *(undefined8 *)(param_1 + _DAT_11274061c);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0f8040();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(param_4);
      lVar2 = lVar1;
      _objc_retain(lVar1);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar7);
      _objc_release(lVar2);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(lVar1);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      _objc_release(puVar5);
      goto LAB_10614ddcc;
    }
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
LAB_10614ddcc:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10614de24; end: 10614e09b;  */

void FUN_10614de24(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c094660();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1;
    func_0x00010c094660();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_release(lVar1);
    if (lVar3 == 0) {
      lVar4 = 0;
      goto LAB_10614dee8;
    }
    lVar1 = param_1;
    func_0x00010c094660(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
LAB_10614dee8:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10614e09c; end: 10614e37f; -[SCFeatureContextShortcutImpl _showToastWithIconInfoDictionaryIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614e09c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = (long)_DAT_11274066c;
  if (*(long *)(param_1 + lVar8) == 0) {
    lVar9 = (long)_DAT_112740660;
    lVar1 = *(long *)(param_1 + lVar9);
    func_0x00010c0dff20(lVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4b40);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + lVar9);
      func_0x00010c0dff20(lVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4b28);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) {
        return;
      }
    }
    else {
      _objc_release();
    }
    lVar10 = (long)_DAT_112740628;
    lVar2 = *(long *)(param_1 + lVar10);
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0c45a0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar1;
    func_0x00010c28fca0();
    _objc_release(lVar1);
    _objc_release(lVar2);
    if (lVar11 != 4) {
      uVar3 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c06b680();
      _objc_release(uVar3);
      if ((int)uVar4 != 0) {
        uVar3 = *(undefined8 *)(param_1 + lVar10);
        func_0x00010bfa1820(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ca180();
        _objc_release(uVar3);
      }
      puVar5 = PTR_PTR_1126c8538;
      _objc_alloc_init(PTR_PTR_1126c8538);
      uVar3 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c0dff20(uVar3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4b40);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bbd20(puVar5,param_2,uVar3);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c0dff20(uVar3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4b28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c9f00(puVar5,param_2,uVar3);
      _objc_release(uVar3);
      puVar6 = PTR_PTR_1126c8540;
      _objc_alloc_init();
      uVar3 = *(undefined8 *)(param_1 + lVar8);
      *(undefined **)(param_1 + lVar8) = puVar6;
      _objc_release(uVar3);
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar8),param_2,param_1);
      puVar6 = PTR_PTR_1126c8548;
      _objc_alloc_init(PTR_PTR_1126c8548);
      func_0x00010c161980();
      *(undefined1 *)(param_1 + _DAT_112740670) = 0;
      puVar7 = PTR_PTR_1126c8550;
      _objc_alloc();
      lVar8 = param_1 + _DAT_11274062c;
      _objc_loadWeakRetained(lVar8);
      lVar1 = lVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar1;
      func_0x00010c142e00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c061d40(puVar7,param_2,puVar5,puVar6,lVar9);
      lVar11 = (long)_DAT_112740650;
      uVar3 = *(undefined8 *)(param_1 + lVar11);
      *(undefined **)(param_1 + lVar11) = puVar7;
      _objc_release(uVar3);
      _objc_release(lVar9);
      _objc_release(lVar1);
      _objc_release(lVar8);
      lVar8 = param_1 + _DAT_112740654;
      _objc_loadWeakRetained(lVar8);
      lVar1 = lVar8;
      func_0x00010bfe12e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar1);
      _objc_release(lVar8);
      func_0x00010be3cd20(param_1,param_2,*(undefined8 *)(param_1 + lVar11),uVar4);
      _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar5);
      return;
    }
  }
  return;
}



/* Entry: 10614e380; end: 10614e4d3; -[SCFeatureContextShortcutImpl _startObservingMusicPickerSelectionIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614e380(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + _DAT_112740650) != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112740660);
    func_0x00010c0dff20(lVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4b28);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010bec3440(param_1);
      _objc_initWeak(auStack_38,param_1);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112740620);
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0d32c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_40,auStack_38);
      uVar4 = uVar3;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + _DAT_112740668);
      *(undefined8 *)(param_1 + _DAT_112740668) = uVar4;
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  return;
}



/* Entry: 10614e4d4; end: 10614e587;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614e4d4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c277e80();
    lVar4 = *(long *)(param_1 + _DAT_11274063c);
    func_0x00010c277e80();
    _objc_release(lVar2);
    if (lVar3 != lVar4) {
      func_0x00010c0e6720(param_1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10614e588; end: 10614e5cb; -[SCFeatureContextShortcutImpl _stopObservingMusicPickerSelection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614e588(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740668;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf86d40();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10614e5cc; end: 10614e857; -[SCFeatureContextShortcutImpl _startObservingLensSelectionIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614e5cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if (*(long *)(param_1 + _DAT_112740650) != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112740660);
    func_0x00010c0dff20(lVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4b40);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010bec3400(param_1);
      _objc_initWeak(auStack_68,param_1);
      lVar1 = (long)_DAT_112740624;
      uVar2 = *(undefined8 *)(param_1 + lVar1);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bef0b80();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0e0ec0();
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_10614e858;
      puStack_78 = &UNK_11084eff0;
      _objc_copyWeak(auStack_70,auStack_68);
      uVar6 = uVar5;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + _DAT_112740674);
      *(undefined8 *)(param_1 + _DAT_112740674) = uVar6;
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + lVar1);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bef1060();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0e0ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_98,auStack_68);
      uVar6 = uVar5;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + _DAT_112740678);
      *(undefined8 *)(param_1 + _DAT_112740678) = uVar6;
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
  }
  return;
}



/* Entry: 10614e858; end: 10614e923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614e858(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_11274063c);
      FUN_10614de24(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((uVar4 & 1) == 0) {
        func_0x00010c0e6720(param_1);
      }
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10614e924; end: 10614e98b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614e924(long param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_1 != 0) && ((*(byte *)(param_1 + _DAT_112740644) & 1) == 0)) &&
     (uVar1 = param_2, func_0x00010bf1f3c0(), (uVar1 & 1) == 0)) {
    func_0x00010c0e6720(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10614e98c; end: 10614e9ef; -[SCFeatureContextShortcutImpl _stopObservingLensSelection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614e98c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740674;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf86d40();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
  lVar2 = (long)_DAT_112740678;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf86d40();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10614e9f0; end: 10614eaab; -[SCFeatureContextShortcutImpl onShortcutToastRemoveButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614e9f0(long param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if ((*(byte *)(param_1 + _DAT_112740670) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112740670) = 1;
    func_0x00010be51360(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11274063c));
    func_0x00010bea2fc0(param_1);
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_10614eaac;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 10614eaac; end: 10614eb7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614eaac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar3 = (long)_DAT_112740660;
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010c0dff20(lVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4b28);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_112740620);
      func_0x00010bfa1820(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c137fe0();
      _objc_release(uVar2);
    }
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010c0dff20(lVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4b40);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_112740624);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf65b20();
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10614eb80; end: 10614ec17; -[SCFeatureContextShortcutImpl onShortcutToastDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614eb80(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + _DAT_112740650) != 0) {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_10614ec18;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 10614ec18; end: 10614ecf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614ec18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar3 = (long)_DAT_112740628;
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06b680();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010bfa1820(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ca180();
      _objc_release(uVar2);
    }
    func_0x00010be3da60(param_1);
    lVar3 = (long)_DAT_112740650;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274066c;
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,0);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar2);
    func_0x00010bec3440(param_1);
    func_0x00010bec3400(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10614ecf4; end: 10614edaf; -[SCFeatureContextShortcutImpl shouldBlockTouchAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10614ecf4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_3 + _DAT_112740650);
  if ((lVar2 == 0) || ((*(byte *)(param_3 + _DAT_11274067c) & 1) != 0)) {
    lVar2 = 0;
  }
  else {
    param_3 = param_3 + _DAT_112740654;
    _objc_loadWeakRetained(param_3);
    lVar1 = param_3;
    func_0x00010bfe12e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf512a0(param_1,param_2);
    func_0x00010c102b20(lVar2,param_4,0);
    _objc_release(lVar1);
    _objc_release(param_3);
  }
  return lVar2;
}



/* Entry: 10614edb0; end: 10614effb;  */

void FUN_10614edb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10614effc;
  puStack_80 = &UNK_110872b00;
  _objc_copyWeak(auStack_78,param_1 + 0x20);
  func_0x00010c0e7bc0(param_2);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x10614f028;
  puStack_a8 = &UNK_11090b530;
  _objc_copyWeak(auStack_a0,param_1 + 0x20);
  func_0x00010c0e3800(param_2);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x10614f058;
  puStack_d0 = &UNK_11090b590;
  _objc_copyWeak(auStack_c8,param_1 + 0x20);
  func_0x00010c0e3ae0(param_2);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x10614f088;
  puStack_f8 = &UNK_11090b5c0;
  _objc_copyWeak(auStack_f0,param_1 + 0x20);
  func_0x00010c0e3ac0(param_2);
  puStack_138 = puVar1;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x10614f0b8;
  puStack_120 = &UNK_11090b530;
  _objc_copyWeak(auStack_118,param_1 + 0x20);
  func_0x00010c0e3840(param_2);
  _objc_copyWeak(auStack_140,param_1 + 0x20);
  func_0x00010c0e7be0(param_2);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_2);
  return;
}



/* Entry: 10614effc; end: 10614f113;  */

void FUN_10614effc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea2fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10614f114; end: 10614f147; -[SCFeatureContextShortcutImpl stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614f114(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740680;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10614f148; end: 10614f437; -[SCFeatureContextShortcutImpl _installLayoutForToastView:directorModeActivated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614f148(double param_1,long param_2,undefined8 param_3,long param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar9 = (long)_DAT_112740654;
  lVar1 = param_2 + lVar9;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfe12e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010be3da60(param_2);
  *(char *)(param_2 + _DAT_11274065c) = (char)param_5;
  if (*(char *)(param_2 + _DAT_112740658) != '\x01') {
    func_0x00010c219b60(param_4,param_3,0);
    dVar11 = 12.0;
    if ((param_5 & 1) == 0) {
      func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
      dVar11 = param_1 + 12.0;
    }
    lVar1 = param_4;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010bf34860(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf493a0(lVar1,param_3,lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_4;
    lStack_88 = lVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c274200(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf493c0(dVar11,lVar4,param_3,lVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_80 = lVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_88,2);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_11274064c;
    uVar8 = *(undefined8 *)(param_2 + lVar10);
    *(undefined **)(param_2 + lVar10) = puVar7;
    _objc_release(uVar8);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar9);
    _objc_release(lVar1);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_3,
                        *(undefined8 *)(param_2 + lVar10));
    goto LAB_10614f3c8;
  }
  if (param_5 == 0) {
    lVar1 = param_2 + lVar9;
    _objc_loadWeakRetained();
    lVar3 = lVar1;
    func_0x00010bf2b180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar3 != 0) {
      lVar1 = lVar3;
      func_0x00010c0f0780();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_2 + lVar9;
      _objc_loadWeakRetained();
      _objc_release();
      _objc_release(lVar1);
      if (lVar1 == lVar9) {
        lVar1 = lVar3;
        func_0x00010c274200(lVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        lVar3 = lVar1;
        goto LAB_10614f1f8;
      }
    }
  }
  else {
    lVar3 = lVar2;
    func_0x00010c274200(lVar2);
    _objc_retainAutoreleasedReturnValue();
LAB_10614f1f8:
    puVar7 = PTR_PTR_1126c8558;
    _objc_alloc();
    func_0x00010c053d60(0x4028000000000000);
    uVar8 = *(undefined8 *)(param_2 + _DAT_112740648);
    *(undefined **)(param_2 + _DAT_112740648) = puVar7;
    _objc_release(uVar8);
  }
  _objc_release(lVar3);
LAB_10614f3c8:
  _objc_release(lVar2);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    param_4 = param_4 + 0x20;
    _objc_loadWeakRetained(param_4);
    func_0x00010bee9500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  return;
}


