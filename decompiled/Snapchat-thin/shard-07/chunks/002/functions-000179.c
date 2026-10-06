/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105346f68; end: 105346f6f; -[SCDeviceMotionServicesImpl startDeviceAccelerometerAndGyroUpdatesWithFrequency:] */

void FUN_105346f68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c250130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_startRawMotionUpdatesWithFrequen_112671a70);
  return;
}



/* Entry: 105346f70; end: 105346f77; -[SCDeviceMotionServicesImpl stopDeviceAccelerometerAndGyroUpdatesWithToken:] */

void FUN_105346f70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_stopRawMotionUpdates__1126733e8);
  return;
}



/* Entry: 105346f78; end: 105346f7f; -[SCDeviceMotionServicesImpl isDeviceInMotion] */

void FUN_105346f78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c070870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isDeviceInMotion_1125f9c28);
  return;
}



/* Entry: 105346f80; end: 105346f87; -[SCDeviceMotionServicesImpl normalizedMotionValue] */

void FUN_105346f80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0db610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_normalizedMotionValue_112614798);
  return;
}



/* Entry: 105346f88; end: 105346f93; -[SCDeviceMotionServicesImpl .cxx_destruct] */

void FUN_105346f88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105346f94; end: 105347047; -[SCDeviceOrientationAndMotionManager _startDeviceMotionUpdates] */

void FUN_105346f94(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c24e940(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105347048; end: 1053470d7;  */

void FUN_105347048(double param_1,double param_2,double param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_5);
  param_4 = param_4 + 0x20;
  _objc_loadWeakRetained(param_4);
  if (param_6 == 0) {
    func_0x00010bfce0a0(param_5);
    dVar1 = param_1;
    dVar2 = param_2;
    dVar3 = param_3;
    func_0x00010c291000(param_5);
    func_0x00010bedc8a0(param_1 + dVar1,param_2 + dVar2,param_3 + dVar3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1053470d8; end: 1053471af; -[SCDeviceOrientationAndMotionManager stopMonitoring:] */

void FUN_1053470d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010befa3a0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1053471b0; end: 105347207;  */

void FUN_1053471b0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(lVar1 + 8),param_2,*(undefined8 *)(param_1 + 0x20));
    lVar2 = *(long *)(lVar1 + 8);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      func_0x00010c2557c0(*(undefined8 *)(lVar1 + 0x10));
      func_0x00010c12adc0(*(undefined8 *)(lVar1 + 0x40));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105347208; end: 10534720f; -[SCDeviceOrientationAndMotionManager accelerometerUpdateInterval] */

void FUN_105347208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beec970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_accelerometerUpdateInterval_112598c00);
  return;
}



/* Entry: 105347210; end: 1053472c7; -[SCDeviceOrientationAndMotionManager setAccelerometerUpdateInterval:] */

void FUN_105347210(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010befa3a0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1053472c8; end: 105347303;  */

void FUN_1053472c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c160c00(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105347304; end: 1053473e7; -[SCDeviceOrientationAndMotionManager isDeviceOrientationPossible:] */

bool FUN_105347304(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  if (param_4 != 0) {
    func_0x00010c2be880(*(undefined8 *)(param_2 + 0x20));
    uVar2 = param_1;
    func_0x00010c2beba0(*(undefined8 *)(param_2 + 0x20));
    uVar3 = uVar2;
    func_0x00010c2bef20(*(undefined8 *)(param_2 + 0x20));
    func_0x00010bdca780(param_1,uVar2,uVar3,param_2,param_3,&UNK_10dd97910 + param_4 * 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar4 = param_1;
    func_0x00010beec940(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beec920();
    _objc_release(uVar1);
    func_0x00010bdca780(uVar4,uVar2,uVar3,param_2,param_3,&UNK_10dd97910 + param_4 * 0x20);
    dVar5 = (double)NEON_fminnm(uVar4,param_1);
    return dVar5 < 60.0;
  }
  return true;
}



/* Entry: 1053473e8; end: 105347453; -[SCDeviceOrientationAndMotionManager isDeviceInMotion] */

bool FUN_1053473e8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = *(double *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c07e220();
  dVar3 = 0.1;
  if ((int)puVar2 == 0) {
    dVar3 = 0.2;
  }
  _objc_release(puVar1);
  return dVar3 < dVar4;
}



/* Entry: 105347454; end: 10534745b; -[SCDeviceOrientationAndMotionManager normalizedMotionValue] */

undefined8 FUN_105347454(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10534745c; end: 1053475ff;  */

void FUN_10534745c(long param_1,undefined8 param_2)

{
  long lVar1;
  double dVar2;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  func_0x00010bfcbfc0(param_2,param_2,&dStack_38);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  dVar2 = *(double *)(lVar1 + 0x18);
  if (dStack_38 <= dVar2) {
    dVar2 = dStack_38;
  }
  *(double *)(lVar1 + 0x18) = dVar2;
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  dVar2 = *(double *)(lVar1 + 0x18);
  if (dStack_30 <= dVar2) {
    dVar2 = dStack_30;
  }
  *(double *)(lVar1 + 0x18) = dVar2;
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  dVar2 = *(double *)(lVar1 + 0x18);
  if (dStack_28 <= dVar2) {
    dVar2 = dStack_28;
  }
  *(double *)(lVar1 + 0x18) = dVar2;
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  dVar2 = *(double *)(lVar1 + 0x18);
  if (dStack_38 <= dVar2) {
    dStack_38 = dVar2;
  }
  *(double *)(lVar1 + 0x18) = dStack_38;
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  dVar2 = *(double *)(lVar1 + 0x18);
  if (dStack_30 <= dVar2) {
    dStack_30 = dVar2;
  }
  *(double *)(lVar1 + 0x18) = dStack_30;
  lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  dVar2 = *(double *)(lVar1 + 0x18);
  if (dStack_28 <= dVar2) {
    dStack_28 = dVar2;
  }
  *(double *)(lVar1 + 0x18) = dStack_28;
  return;
}



/* Entry: 105347600; end: 1053476e7; -[SCDeviceOrientationAndMotionManager startDeviceMotionUpdatesWithFrequency:] */

void FUN_105347600(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar1 = param_2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_2);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(lVar1);
  uStack_50 = param_1;
  func_0x00010befa3a0(uVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1053476e8; end: 105347757;  */

void FUN_1053476e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010befa120(*(undefined8 *)(lVar1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x20));
    lVar2 = *(long *)(lVar1 + 0x30);
    func_0x00010bf529e0();
    if (lVar2 == 1) {
      if (0.0 < *(double *)(param_1 + 0x30)) {
        func_0x00010c18cbe0(1.0 / *(double *)(param_1 + 0x30),*(undefined8 *)(lVar1 + 0x10));
      }
      func_0x00010bebfca0(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105347758; end: 105347833; -[SCDeviceOrientationAndMotionManager stopDeviceMotionUpdates:] */

void FUN_105347758(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010befa3a0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105347834; end: 105347883;  */

void FUN_105347834(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(lVar1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x20));
    lVar2 = *(long *)(lVar1 + 0x30);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      func_0x00010c255e20(*(undefined8 *)(lVar1 + 0x10));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105347884; end: 10534788b; -[SCDeviceOrientationAndMotionManager getDeviceMotion] */

void FUN_105347884(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf70b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_deviceMotion_1125b9c70);
  return;
}



/* Entry: 10534788c; end: 105347973; -[SCDeviceOrientationAndMotionManager startRawMotionUpdatesWithFrequency:] */

void FUN_10534788c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar1 = param_2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_2);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(lVar1);
  uStack_50 = param_1;
  func_0x00010befa3a0(uVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105347974; end: 1053479fb;  */

void FUN_105347974(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010befa120(*(undefined8 *)(lVar1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x20));
    lVar2 = *(long *)(lVar1 + 0x38);
    func_0x00010bf529e0();
    if (lVar2 == 1) {
      if (0.0 < *(double *)(param_1 + 0x30)) {
        func_0x00010c160c00(1.0 / *(double *)(param_1 + 0x30),*(undefined8 *)(lVar1 + 0x10));
        func_0x00010c289620(*(undefined8 *)(param_1 + 0x30),0x4014000000000000,
                            *(undefined8 *)(lVar1 + 0x20));
      }
      func_0x00010c24ee40(*(undefined8 *)(lVar1 + 0x10));
      func_0x00010bebf4e0(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1053479fc; end: 105347ad7; -[SCDeviceOrientationAndMotionManager stopRawMotionUpdates:] */

void FUN_1053479fc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010befa3a0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105347ad8; end: 105347b67;  */

void FUN_105347ad8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(lVar1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x20));
    lVar2 = *(long *)(lVar1 + 0x38);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      func_0x00010c2560a0(*(undefined8 *)(lVar1 + 0x10));
      func_0x00010c160c00(0x3fb999999999999a,*(undefined8 *)(lVar1 + 0x10));
      func_0x00010c289620(0x4024000000000000,0x4014000000000000,*(undefined8 *)(lVar1 + 0x20));
    }
    lVar2 = *(long *)(lVar1 + 0x38);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      lVar2 = *(long *)(lVar1 + 8);
      func_0x00010bf529e0();
      if (lVar2 == 0) {
        func_0x00010c2557c0(*(undefined8 *)(lVar1 + 0x10));
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105347b68; end: 105347b6f; -[SCDeviceOrientationAndMotionManager getGyroData] */

void FUN_105347b68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcfc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_gyroData_1125d18c0);
  return;
}



/* Entry: 105347b70; end: 105347b77; -[SCDeviceOrientationAndMotionManager getAccelerometerData] */

void FUN_105347b70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beec950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_accelerometerData_112598bf8);
  return;
}



/* Entry: 105347b78; end: 105347b7f; -[SCDeviceOrientationAndMotionManager deviceOrientation] */

undefined8 FUN_105347b78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105347b80; end: 105347b87; -[SCDeviceOrientationAndMotionManager imageOrientation] */

undefined8 FUN_105347b80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105347b88; end: 105347b93; -[SCDeviceOrientationAndMotionManager acceleration] */

undefined8 FUN_105347b88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105347b94; end: 105347bff; -[SCDeviceOrientationAndMotionManager .cxx_destruct] */

void FUN_105347b94(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105347c00; end: 105347d0f; -[SCCountryCodePickerBusinessLogic initWithDataProvider:phoneNumberFormatter:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105347c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126e7988;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112721a00;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112721a04;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112721a08),param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010bfca860();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112721a0c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112721a0c) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105347d10; end: 105347da3; -[SCCountryCodePickerBusinessLogic handleAction:] */

void FUN_105347d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105347da4;
  puStack_20 = &UNK_1108450c8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105347db0;
  puStack_48 = &UNK_1108450c8;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105347dbc;
  puStack_70 = &UNK_110842e18;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bfc00(param_3,param_2,&puStack_38,&puStack_60,&puStack_88);
  return;
}



/* Entry: 105347da4; end: 105347dbb;  */

void FUN_105347da4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__selectedCountryCodeAbbreviation_112585128,
             param_2);
  return;
}



/* Entry: 105347dbc; end: 105347df3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105347dbc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112721a08;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf53400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105347df4; end: 105347e2b; -[SCCountryCodePickerBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105347df4(void)

{
  _objc_alloc(PTR_PTR_1126b78b0);
  func_0x00010c04a420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105347e2c; end: 105347e97; -[SCCountryCodePickerBusinessLogic _updateCountryCodesWithQueryString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105347e2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721a00);
  func_0x00010bfca860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721a0c);
  *(undefined8 *)(param_1 + _DAT_112721a0c) = uVar1;
  _objc_release(uVar2);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105347e98; end: 105347f1b; -[SCCountryCodePickerBusinessLogic _selectedCountryCodeAbbreviation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105347e98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112721a08;
  _objc_retain(param_3);
  lVar2 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721a04);
  func_0x00010bfc8be0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf533e0(lVar2,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105347f1c; end: 105347f77; -[SCCountryCodePickerBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105347f1c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721a04,0);
  _objc_storeStrong(param_1 + _DAT_112721a0c,0);
  _objc_destroyWeak(param_1 + _DAT_112721a08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721a00,0);
  return;
}



/* Entry: 105347f78; end: 10534805f; -[SCPhoneCountryCode sig_sortingKey] */

void FUN_105347f78(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c261e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf53640(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x000105347ffc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c261e00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105348060; end: 1053480af; -[SCPhoneCountryCode sig_predefinedGroupType] */

void FUN_105348060(long param_1)

{
  undefined **ppuVar1;
  
  func_0x00010c261e00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = (undefined **)0x0;
  if (param_1 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f8a498;
  }
  _objc_retain(ppuVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1053480b0; end: 105348243; -[SCPhoneCountryCode containsString:] */

ulong FUN_1053480b0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain(param_3);
  func_0x00010bf01c80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c06a520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = param_3;
  FUN_105348244(param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x000105347ffc(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar7 = param_1;
  func_0x00010bf53640();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  FUN_105348244();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x000105347ffc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar7);
  uVar7 = param_1;
  func_0x00010bf536a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  FUN_105348244();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar7 = uVar6;
  func_0x00010c09e760();
  if (((uVar7 & 1) == 0) && (uVar7 = uVar5, func_0x00010c09e760(), (uVar7 & 1) == 0)) {
    func_0x00010bf53380(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010c09e760();
    _objc_release(param_1);
  }
  else {
    uVar7 = 1;
  }
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(puVar2);
  return uVar7;
}



/* Entry: 105348244; end: 105348293;  */

void FUN_105348244(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf44700(param_1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105348294; end: 1053483ff; -[SCCountryCodePickerDataProvider initWithPhoneNumberFormatter:circumstanceEngine:] */

undefined8 *
FUN_105348294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_50 = PTR_PTR_1126e7990;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126af7d0;
    _objc_retain(param_4);
    func_0x00010c0cb140(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c1195e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b78c8;
    uVar4 = uVar2;
    func_0x00010c296d80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uStack_48 = 0;
    func_0x00010c0f40e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar5 = puVar1;
    func_0x00010bfca860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar5;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105348400; end: 105348673; -[SCCountryCodePickerDataProvider getSortedCountryCodesWithQueryString:] */

undefined * FUN_105348400(long param_1,undefined **param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar8 = *(undefined **)(param_1 + 0x10);
    if (puVar8 == (undefined *)0x0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
      func_0x00010bf926c0();
      uVar9 = *(undefined8 *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x00010bfc8c00(uVar9);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar2 = param_1;
        func_0x00010bde4460(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfc8c20(uVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
      }
      puVar4 = PTR_PTR_1126b78b8;
      _objc_alloc();
      puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
      ppuStack_60 = &PTR____CFConstantStringClassReference_110f8a498;
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ecd40(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c059580();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar4;
      _objc_release(uVar3);
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(uVar9);
      puVar8 = *(undefined **)(param_1 + 0x10);
    }
    _objc_retain(puVar8);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfc8c00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105348674;
    puStack_70 = &UNK_11087d150;
    _objc_retain(param_3);
    param_2 = &puStack_88;
    uVar9 = uVar3;
    lStack_68 = param_3;
    func_0x0001006372a4(uVar3);
    _objc_release(uVar3);
    puVar8 = PTR_PTR_1126b78b8;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c059560(puVar8);
    _objc_release(puVar4);
    _objc_release(uVar9);
    _objc_release(lStack_68);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  ppuVar7 = param_2;
  func_0x00010bf4bb00();
  if ((int)ppuVar7 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    ppuVar7 = param_2;
    func_0x00010c261e00(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined *)(ulong)(ppuVar7 == (undefined **)0x0);
    _objc_release();
  }
  _objc_release(param_2);
  return puVar8;
}



/* Entry: 105348674; end: 1053486db;  */

bool FUN_105348674(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf4bb00();
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_2;
    func_0x00010c261e00(param_2);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 == 0;
    _objc_release();
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 1053486dc; end: 105348793; -[SCCountryCodePickerDataProvider _computeOrderedSuggestedCountriesSet] */

void FUN_1053486dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfc45a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf53740(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf53200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd80(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160();
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105348794; end: 1053487cf; -[SCCountryCodePickerDataProvider .cxx_destruct] */

void FUN_105348794(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053487d0; end: 1053489db; -[SCCountryCodePickerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053487d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = (long)_DAT_112721a1c;
  lVar8 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar8);
  lVar1 = lVar8;
  func_0x00010bf53520();
  _objc_release(lVar8);
  puVar2 = PTR_PTR_1126af348;
  _objc_alloc(PTR_PTR_1126af348);
  lVar8 = param_1 + _DAT_112721a20;
  _objc_loadWeakRetained(lVar8);
  lVar3 = lVar8;
  func_0x00010c0d2660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a560(puVar2,param_2,lVar1,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar8);
  puVar4 = PTR_PTR_1126b78d0;
  _objc_alloc(PTR_PTR_1126b78d0);
  lVar8 = param_1 + _DAT_112721a24;
  _objc_loadWeakRetained(lVar8);
  lVar1 = lVar8;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035b00(puVar4,param_2,puVar2,lVar1);
  _objc_release(lVar1);
  _objc_release(lVar8);
  puVar5 = PTR_PTR_1126b78d8;
  _objc_alloc(PTR_PTR_1126b78d8);
  lVar8 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar8);
  lVar1 = lVar8;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008ba0(puVar5,param_2,puVar4,puVar2,lVar1);
  _objc_release(lVar1);
  _objc_release(lVar8);
  puVar6 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  lVar8 = (long)_DAT_112721a28;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar6;
  _objc_release(uVar7);
  puVar6 = PTR_PTR_1126b78e0;
  _objc_alloc(PTR_PTR_1126b78e0);
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c150e00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042340(puVar6,param_2,uVar7);
  _objc_release(uVar7);
  param_1 = param_1 + lVar9;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1053489dc; end: 105348a67; -[SCCountryCodePickerEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053489dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_112721a1c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126e7998;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105348a68; end: 105348abb; -[SCCountryCodePickerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105348a68(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112721a24);
  _objc_destroyWeak(param_1 + _DAT_112721a20);
  _objc_destroyWeak(param_1 + _DAT_112721a1c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721a28,0);
  return;
}



/* Entry: 105348abc; end: 105348ba7; -[SCCountryCodePickerViewController initWithScreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105348abc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e79a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112721a2c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    func_0x000105349e84();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar1);
    _objc_release(uVar2);
    func_0x00010c20eaa0(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8460();
    _objc_release(puVar3);
    func_0x00010c21e060(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105348ba8; end: 105348c2b; -[SCCountryCodePickerViewController viewWillAppear:] */

void FUN_105348ba8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e79a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillAppear__1126853f0);
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c153980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 105348c2c; end: 105348c63; -[SCCountryCodePickerViewController loadScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105348c2c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010be39840();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721a30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105348c64; end: 105348cb3; -[SCCountryCodePickerViewController loadView] */

void FUN_105348c64(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e79a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_loadView_112604be0);
  func_0x00010be39e00(param_1);
  func_0x00010bec1580(param_1);
  return;
}



/* Entry: 105348cb4; end: 105348d7f; -[SCCountryCodePickerViewController viewDidLoad] */

void FUN_105348cb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e79a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  uVar1 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c153980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c153980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195580();
  _objc_release(uVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 105348d80; end: 105348e23; -[SCCountryCodePickerViewController _initIndexView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105348d80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b78e8;
  _objc_alloc();
  func_0x00010c019120();
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9b40(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112721a34);
  *(undefined **)(param_1 + _DAT_112721a34) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105348e24; end: 105348f5b; -[SCCountryCodePickerViewController _initCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105348e24(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1c8300(0);
  uVar5 = 0;
  func_0x00010c1c82c0(0,puVar1);
  lVar2 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010bfe09e0(PTR_PTR_1126b78f0,param_5,0);
  func_0x00010c1a7960(param_3,uVar5,puVar1);
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar4 = PTR_PTR_1126b2780;
  _objc_opt_class(PTR_PTR_1126b2780);
  func_0x00010c126000(puVar3,param_5,puVar4,&PTR____CFConstantStringClassReference_110dd2ff8);
  puVar4 = PTR_PTR_1126b78f8;
  _objc_opt_class(PTR_PTR_1126b78f8);
  func_0x00010c126060(puVar3,param_5,puVar4,
                      *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00,
                      &PTR____CFConstantStringClassReference_110dd3018);
  func_0x00010c189840(puVar3,param_5,param_4);
  func_0x00010c18b5e0(puVar3,param_5,param_4);
  uVar5 = *(undefined8 *)(param_4 + _DAT_112721a30);
  *(undefined **)(param_4 + _DAT_112721a30) = puVar3;
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105348f5c; end: 10534900b; -[SCCountryCodePickerViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105348f5c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721a2c);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10534900c; end: 105349053;  */

void FUN_10534900c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beaa120();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105349054; end: 105349123; -[SCCountryCodePickerViewController _setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105349054(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c246d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf4f9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2166c0(*(undefined8 *)(param_1 + _DAT_112721a34));
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c246d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112721a38);
  *(undefined8 *)(param_1 + _DAT_112721a38) = uVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112721a30),PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 105349124; end: 10534916f; -[SCCountryCodePickerViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105349124(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721a2c);
  puVar1 = PTR_PTR_1126b7900;
  func_0x00010bf9b400(PTR_PTR_1126b7900);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105349170; end: 10534925f; -[SCCountryCodePickerViewController indexView:userDidSelectTitleAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105349170(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112721a34);
  func_0x00010c271860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (param_4 < uVar2) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112721a38);
    func_0x00010bfed140(uVar3,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112721a30;
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c08c9c0(uVar4,param_2,
                        *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1525a0(*(undefined8 *)(param_1 + lVar6),param_2,uVar3,1,0);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bfb68e0(uVar4);
    func_0x00010c1521c0(uVar5,param_2,0);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 105349260; end: 10534932b; -[SCCountryCodePickerViewController textField:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_105349260(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c25cf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112721a2c);
  puVar2 = PTR_PTR_1126b7900;
  func_0x00010c289080(PTR_PTR_1126b7900,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return 1;
}



/* Entry: 10534932c; end: 105349383; -[SCCountryCodePickerViewController textFieldShouldClear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10534932c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721a2c);
  puVar1 = PTR_PTR_1126b7900;
  func_0x00010c289080(PTR_PTR_1126b7900,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return 1;
}



/* Entry: 105349384; end: 10534945b; -[SCCountryCodePickerViewController collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105349384(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdea060(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b7900;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112721a2c);
  lVar2 = lVar1;
  func_0x00010bf536a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c158960(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar2);
  func_0x00010bf6e840(param_3,param_2,param_4,0);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10534945c; end: 1053495af; -[SCCountryCodePickerViewController scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534945c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c081660();
  if ((int)uVar3 != 0) {
    lVar4 = (long)_DAT_112721a30;
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puStack_58 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0x7fffffffffffffff;
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010bfed1a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf97e80();
      _objc_release(uVar3);
      if (puStack_58[3] != 0x7fffffffffffffff) {
        func_0x00010bfecca0(*(undefined8 *)(param_1 + _DAT_112721a38));
        func_0x00010c1fb160(*(undefined8 *)(param_1 + _DAT_112721a34));
      }
      __Block_object_dispose(&uStack_60,8);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1053495b0; end: 10534962f;  */

void FUN_1053495b0(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c1554e0();
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18);
  if (lVar1 < lVar2) {
    lVar1 = param_2;
    func_0x00010c1554e0();
    *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1;
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18);
  }
  if (lVar2 == 0) {
    *param_4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105349630; end: 1053496b7; -[SCCountryCodePickerViewController collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_105349630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  _objc_retain(param_8);
  func_0x00010bfb68e0(param_6);
  puVar1 = PTR_PTR_1126b2780;
  func_0x00010bde7720(param_4);
  _objc_release(param_8);
  func_0x00010bfe0740(puVar1);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 1053496b8; end: 1053496bb; -[SCCountryCodePickerViewController numberOfSectionsInCollectionView:] */

void FUN_1053496b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be656b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__numberOfSections_112576f48);
  return;
}



/* Entry: 1053496bc; end: 1053496c3; -[SCCountryCodePickerViewController collectionView:numberOfItemsInSection:] */

void FUN_1053496bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be65670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__numberOfRowsInSection__112576f38,param_4);
  return;
}



/* Entry: 1053496c4; end: 10534976f; -[SCCountryCodePickerViewController collectionView:cellForItemAtIndexPath:] */

void FUN_1053496c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010bf6e0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c27f7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde4d80(param_1);
  _objc_release(uVar1);
  func_0x00010bde7720(param_1);
  _objc_release(param_4);
  func_0x00010c20eaa0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105349770; end: 105349833; -[SCCountryCodePickerViewController collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

void FUN_105349770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  func_0x00010bf6e120(param_3,param_2,param_4,&PTR____CFConstantStringClassReference_110dd3018,
                      param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c1554e0(param_5);
  _objc_release(param_5);
  func_0x00010becc4e0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c27f7c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_release(uVar1);
  _objc_release(param_1);
  func_0x00010c20eaa0(param_3,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105349834; end: 10534987b; -[SCCountryCodePickerViewController _numberOfSections] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105349834(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721a38);
  func_0x00010c2480e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10534987c; end: 10534990f; -[SCCountryCodePickerViewController _numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10534987c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112721a38;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c2480e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c246da0(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf529e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 105349910; end: 1053499e7; -[SCCountryCodePickerViewController _countryCodeAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105349910(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112721a38;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  _objc_retain(param_3);
  func_0x00010c2480e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c1554e0(param_3);
  uVar2 = uVar4;
  func_0x00010c0dfd20(uVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c246da0(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c142240(param_3);
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010c0dfd20(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1053499e8; end: 105349beb; -[SCCountryCodePickerViewController _configureCell:forItemAtIndexPath:] */

void FUN_1053499e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  func_0x00010bdea060(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126aed98;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_1;
  func_0x00010bf536a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc42c0(puVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf53640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110db27b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216540(param_3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc(PTR_PTR_1126aea58);
  uVar4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),uVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x81);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(puVar2,param_2,2);
  uVar3 = param_1;
  func_0x00010bf53380(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bf53640(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010c21ad00(puVar2,param_2,7);
  func_0x00010bfb68e0(param_3);
  uVar3 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(0x7fefffffffffffff,uVar4,puVar2);
  func_0x00010c19f0e0(0,0,uVar3,uVar4,puVar2);
  func_0x00010c2194c0(param_3,param_2,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105349bec; end: 105349c6b; -[SCCountryCodePickerViewController _containerStyleForCellAtIndexPath:] */

undefined1  [16] FUN_105349bec(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  _objc_retain(param_3);
  func_0x00010c1554e0(param_3);
  func_0x00010be65660();
  lVar2 = param_3;
  func_0x00010c142240();
  _objc_release(param_3);
  uVar1 = 0;
  if (param_1 <= lVar2 + 1U) {
    uVar1 = 4;
  }
  if (lVar2 == 0) {
    uVar1 = uVar1 + 1;
  }
  auVar3._8_8_ = uVar1 | 10;
  auVar3._0_8_ = 2;
  return auVar3;
}



/* Entry: 105349c6c; end: 105349d03; -[SCCountryCodePickerViewController _titleForSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105349c6c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112721a38);
  func_0x00010c2480e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f8a498);
  if ((uVar1 & 1) == 0) {
    _objc_retain(uVar2);
    uVar1 = uVar2;
  }
  else {
    func_0x000105349e9c();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105349d04; end: 105349d63; -[SCCountryCodePickerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105349d04(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721a38,0);
  _objc_storeStrong(param_1 + _DAT_112721a34,0);
  _objc_storeStrong(param_1 + _DAT_112721a30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721a2c,0);
  return;
}



/* Entry: 105349d64; end: 105349dd7; -[SCCountryCodePickerViewModel initWithSortedCodes:] */

undefined1 * FUN_105349d64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e79a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105349dd8; end: 105349ddf; -[SCCountryCodePickerViewModel hash] */

void FUN_105349dd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 105349de0; end: 105349e6f; -[SCCountryCodePickerViewModel isEqual:] */

long FUN_105349de0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105349e54;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_105349e54;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_105349e54;
    }
  }
  lVar3 = 1;
LAB_105349e54:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105349e70; end: 105349e77; -[SCCountryCodePickerViewModel sortedCodes] */

undefined8 FUN_105349e70(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105349e78; end: 105349eb3; -[SCCountryCodePickerViewModel .cxx_destruct] */

void FUN_105349e78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105349eb4; end: 105349eff; +[SCCountryCodePickerAction exit] */

void FUN_105349eb4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7900;
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



/* Entry: 105349f00; end: 105349f63; +[SCCountryCodePickerAction selectCountryCodeWithCountryCodeAbbreviation:] */

void FUN_105349f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7900;
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



/* Entry: 105349f64; end: 105349fcf; +[SCCountryCodePickerAction updateQueryStringWithQueryString:] */

void FUN_105349f64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7900;
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



/* Entry: 105349fd0; end: 105349ff3; -[SCCountryCodePickerAction copyWithZone:] */

undefined8 FUN_105349fd0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105349ff4; end: 10534a06b; -[SCCountryCodePickerAction hash] */

void FUN_105349ff4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126e79b0;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10534a06c; end: 10534a0af; -[SCCountryCodePickerAction internalInit] */

void FUN_10534a06c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e79b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10534a0b0; end: 10534a167; -[SCCountryCodePickerAction isEqual:] */

long FUN_10534a0b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10534a140:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10534a14c;
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
          goto LAB_10534a14c;
        }
        goto LAB_10534a140;
      }
    }
    lVar3 = 0;
  }
LAB_10534a14c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10534a168; end: 10534a217; -[SCCountryCodePickerAction matchSelectCountryCode:updateQueryString:exit:] */

void FUN_10534a168(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
  }
  else {
    if (lVar2 == 1) {
      if (param_4 == 0) goto LAB_10534a1f4;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
    else {
      if ((lVar2 != 0) || (param_3 == 0)) goto LAB_10534a1f4;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    (*pcVar3)(lVar2,uVar1);
  }
LAB_10534a1f4:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10534a218; end: 10534a247; -[SCCountryCodePickerAction .cxx_destruct] */

void FUN_10534a218(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10534a248; end: 10534a2af; +[SCActivationPbRegistrationCountrySuggestion descriptor] */

void FUN_10534a248(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb550 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2bbf0,
                        &PTR____CFConstantStringClassReference_110dd3098,
                        &PTR_s_snapchat_activation_cof_1130cfc40,&PTR_s_enabled_1130cfc78,2,0x10,
                        0x1c);
    puRam00000001136bb550 = puVar1;
  }
  return;
}



/* Entry: 10534a2b0; end: 10534a317; +[SCActivationPbCountrySuggestions descriptor] */

void FUN_10534a2b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb558 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2bc40,
                        &PTR____CFConstantStringClassReference_110dd30b8,
                        &PTR_s_snapchat_activation_cof_1130cfc40,&PTR_s_countriesArray_1130cfc58,1,
                        0x10,0x1c);
    puRam00000001136bb558 = puVar1;
  }
  return;
}



/* Entry: 10534a318; end: 10534a5b3; -[SCNGOCodeVerificationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534a318(ulong param_1)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  uVar2 = param_1;
  FUN_10534a5b4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) != 0) {
    uVar2 = param_1;
    FUN_10534a5b4(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ee40();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  puVar5 = PTR_PTR_1126af450;
  _objc_alloc(PTR_PTR_1126af450);
  func_0x00010c01de60(0x3ff0000000000000);
  puVar6 = PTR_PTR_1126b7908;
  _objc_alloc(PTR_PTR_1126b7908);
  uVar2 = param_1;
  FUN_10534a5b4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf35520();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  FUN_10534a5b4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c15f680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006280(puVar6);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar8 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  lVar11 = (long)_DAT_112721a4c;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar8;
  _objc_release(uVar10);
  uVar2 = param_1;
  FUN_10534a5b4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4e080();
  _objc_release(uVar2);
  ppuVar1 = &PTR_PTR_1126b7910;
  if (uVar3 != 2) {
    ppuVar1 = &PTR_PTR_1126b7918;
  }
  puVar8 = *ppuVar1;
  _objc_alloc(puVar8);
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c150e00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + (long)_DAT_112721a50;
  _objc_loadWeakRetained(lVar11);
  lVar9 = lVar11;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0423c0(puVar8);
  _objc_release(lVar9);
  _objc_release(lVar11);
  _objc_release(uVar10);
  lVar11 = param_1 + (long)_DAT_112721a54;
  _objc_loadWeakRetained(lVar11);
  lVar9 = lVar11;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar9);
  _objc_release(lVar11);
  _objc_release(puVar8);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10534a5b4; end: 10534a5d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10534a5b4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112721a54);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10534a5d8; end: 10534a65f; -[SCNGOCodeVerificationEntryPoint codeVerificationFinished:] */

void FUN_10534a5d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10534a660;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10534a660; end: 10534a6f7;  */

void FUN_10534a660(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10534a5b4(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10534a5b4(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3eee0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


