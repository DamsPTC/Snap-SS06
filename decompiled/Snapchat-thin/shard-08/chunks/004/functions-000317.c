/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10617e2dc; end: 10617e3eb; -[SCFeatureNightModeImpl _reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617e2dc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + (long)_DAT_112740f4c) == '\x01') {
    lVar3 = (long)_DAT_112740f58;
    func_0x00010bed2280(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
    *(undefined1 *)(param_1 + (long)_DAT_112740f94) = 0;
    uVar1 = param_1;
    func_0x00010beb6b60(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1 + (long)_DAT_112740f64;
      _objc_loadWeakRetained();
      uVar2 = uVar1;
      func_0x00010c071800();
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) {
        if (*(long *)(param_1 + (long)_DAT_112740f90) != 0) {
          lVar3 = param_1 + (long)_DAT_112740f8c;
          _objc_loadWeakRetained(lVar3);
          func_0x00010bfe2c00();
          _objc_release(lVar3);
        }
      }
      else if ((*(char *)(param_1 + (long)_DAT_112740fa4) != '\x01') ||
              (uVar1 = param_1,
              func_0x00010be3fec0(param_1,param_2,*(undefined8 *)(param_1 + lVar3)),
              (uVar1 & 1) == 0)) {
        func_0x00010be82e00(param_1,param_2,0);
      }
    }
    *(undefined1 *)(param_1 + (long)_DAT_112740fb0) = 0;
    *(undefined1 *)(param_1 + (long)_DAT_112740fb4) = 0;
  }
  return;
}



/* Entry: 10617e3ec; end: 10617e3f3; -[SCFeatureNightModeImpl _didStartRecording] */

void FUN_10617e3ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c177c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCanEnable__11263b920,0);
  return;
}



/* Entry: 10617e3f4; end: 10617e4bb; -[SCFeatureNightModeImpl _didEndRecording] */

void FUN_10617e3f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010c177c00(param_1,param_2,1);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x10617e490;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100c749e0(0x3dcccccd,"APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10617e4bc; end: 10617e4c7; -[SCFeatureNightModeImpl detailedCameraModeLogInfo] */

undefined * FUN_10617e4bc(void)

{
  return PTR____NSDictionary0__struct_11034ab58;
}



/* Entry: 10617e4c8; end: 10617e507; -[SCFeatureNightModeImpl enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10617e4c8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112740f64;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c071800();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 10617e508; end: 10617e683; -[SCFeatureNightModeImpl beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617e508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10617e684;
  puStack_78 = &UNK_11090d050;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar1 = param_4;
  func_0x00010c25ff60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_copyWeak(auStack_98,auStack_68);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10617e684; end: 10617e7b7;  */

void FUN_10617e684(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  pcStack_68 = FUN_10617e7b8;
  puStack_60 = &UNK_11084ebd0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10617e7e4;
  puStack_88 = &UNK_11090d020;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  func_0x00010c0c17a0(param_2);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 10617e7b8; end: 10617e83b;  */

void FUN_10617e7b8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10617e83c; end: 10617e9d7;  */

void FUN_10617e83c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10617e9d8;
  puStack_70 = &UNK_11084ec30;
  _objc_copyWeak(auStack_68,param_1 + 0x20);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x10617ea04;
  puStack_98 = &UNK_11090d2a0;
  _objc_copyWeak(auStack_90,param_1 + 0x20);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x10617ea30;
  puStack_c0 = &UNK_11090d380;
  _objc_copyWeak(auStack_b8,param_1 + 0x20);
  _objc_copyWeak(auStack_e0,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 10617e9d8; end: 10617ea87;  */

void FUN_10617e9d8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10617ea88; end: 10617eb2b;  */

void FUN_10617ea88(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e3880(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10617eb2c; end: 10617ec03;  */

void FUN_10617eb2c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc760();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10617ec04; end: 10617ec37; -[SCFeatureNightModeImpl stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617ec04(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740fb8;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10617ec38; end: 10617eccb; -[SCFeatureNightModeImpl _didChangeARSessionActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617ec38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar3;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112740fb0;
  if (*(char *)(param_1 + lVar3) == '\x01') {
    uVar2 = param_3;
    func_0x00010bf093c0();
    uVar1 = (undefined1)uVar2;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + lVar3) = uVar1;
  uVar2 = param_3;
  func_0x00010bf093c0();
  if ((int)uVar2 == 0) {
    func_0x00010be466a0(param_1,param_2,param_3,1);
  }
  else {
    func_0x00010bed2280(param_1,param_2,param_3);
  }
  func_0x00010bedc2c0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10617eccc; end: 10617eda3; -[SCFeatureNightModeImpl _didChangeRingFlashState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617eccc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112740fbc;
  lVar4 = *(long *)(param_1 + lVar3);
  uVar1 = param_3;
  func_0x00010c1410c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c141120();
  *(undefined8 *)(param_1 + lVar3) = uVar2;
  _objc_release(uVar1);
  if ((*(long *)(param_1 + lVar3) != lVar4) && (*(char *)(param_1 + _DAT_112740f4c) == '\x01')) {
    if (*(long *)(param_1 + lVar3) == 2) {
      func_0x00010be466a0(param_1,param_2,param_3,0);
    }
    else {
      if (*(char *)(param_1 + _DAT_112740fa4) != '\x01') goto LAB_10617ed8c;
      *(undefined1 *)(param_1 + _DAT_112740fa4) = 0;
      func_0x00010bea5ea0(param_1,param_2,0);
    }
    func_0x00010bedc2c0(param_1,param_2,param_3);
  }
LAB_10617ed8c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10617eda4; end: 10617ee1f; -[SCFeatureNightModeImpl _unwindRingFlashNightModeIfNoLongerEligible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617eda4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112740fa4;
  if (((*(char *)(param_1 + lVar2) == '\x01') &&
      (*(char *)(param_1 + (long)_DAT_112740f4c) == '\x01')) &&
     (uVar1 = param_1, func_0x00010be3fec0(param_1,param_2,param_3), (uVar1 & 1) == 0)) {
    *(undefined1 *)(param_1 + lVar2) = 0;
    func_0x00010bea5ea0(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10617ee20; end: 10617ee87; -[SCFeatureNightModeImpl _shouldApplyNightModeWhenRingFlashEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10617ee20(long param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + _DAT_112740fc0) == '\x01') {
    uVar1 = (uint)*(byte *)(param_1 + _DAT_112740fc4);
  }
  else {
    *(undefined1 *)(param_1 + _DAT_112740fc0) = 1;
    uVar1 = (uint)*(undefined8 *)(param_1 + _DAT_112740f78);
    func_0x00010c22df40();
    *(char *)(param_1 + _DAT_112740fc4) = (char)uVar1;
  }
  return uVar1 & 1;
}



/* Entry: 10617ee88; end: 10617ee97; -[SCFeatureNightModeImpl nightModeActivationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10617ee88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740f70);
}



/* Entry: 10617ee98; end: 10617eea7; -[SCFeatureNightModeImpl managedCapturerState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10617ee98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740f58);
}



/* Entry: 10617eea8; end: 10617eee7; -[SCFeatureNightModeImpl setManagedCapturerState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617eea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740f58;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10617eee8; end: 10617ef07; -[SCFeatureNightModeImpl containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617eee8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112740f84);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10617ef08; end: 10617ef1b; -[SCFeatureNightModeImpl setContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617ef08(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112740f84,param_3);
  return;
}



/* Entry: 10617ef1c; end: 10617ef3b; -[SCFeatureNightModeImpl cameraToolbar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617ef1c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112740f8c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10617ef3c; end: 10617ef4f; -[SCFeatureNightModeImpl setCameraToolbar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617ef3c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112740f8c,param_3);
  return;
}



/* Entry: 10617ef50; end: 10617ef5f; -[SCFeatureNightModeImpl toolbarItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10617ef50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740f90);
}



/* Entry: 10617ef60; end: 10617ef9f; -[SCFeatureNightModeImpl setToolbarItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617ef60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740f90;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10617efa0; end: 10617efaf; -[SCFeatureNightModeImpl cameraUserActionLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10617efa0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740f48);
}



/* Entry: 10617efb0; end: 10617efef; -[SCFeatureNightModeImpl setCameraUserActionLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617efb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740f48;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10617eff0; end: 10617efff; -[SCFeatureNightModeImpl canEnable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10617eff0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112740f4c);
}



/* Entry: 10617f000; end: 10617f00f; -[SCFeatureNightModeImpl didUserToggleWithinCaptureSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10617f000(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112740f94);
}



/* Entry: 10617f010; end: 10617f01f; -[SCFeatureNightModeImpl setDidUserToggleWithinCaptureSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617f010(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112740f94) = param_3;
  return;
}



/* Entry: 10617f020; end: 10617f02f; -[SCFeatureNightModeImpl nightModeButtonTapCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10617f020(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740f88);
}



/* Entry: 10617f030; end: 10617f03f; -[SCFeatureNightModeImpl setNightModeButtonTapCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617f030(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112740f88) = param_3;
  return;
}



/* Entry: 10617f040; end: 10617f04f; -[SCFeatureNightModeImpl lastBrightnessValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10617f040(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740fa0);
}



/* Entry: 10617f050; end: 10617f05f; -[SCFeatureNightModeImpl setLastBrightnessValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617f050(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112740fa0) = param_1;
  return;
}



/* Entry: 10617f060; end: 10617f17b; -[SCFeatureNightModeImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617f060(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112740f48,0);
  _objc_storeStrong(param_1 + _DAT_112740f90,0);
  _objc_destroyWeak(param_1 + _DAT_112740f8c);
  _objc_destroyWeak(param_1 + _DAT_112740f84);
  _objc_storeStrong(param_1 + _DAT_112740f58,0);
  _objc_storeStrong(param_1 + _DAT_112740f7c,0);
  _objc_storeStrong(param_1 + _DAT_112740f9c,0);
  _objc_storeStrong(param_1 + _DAT_112740f78,0);
  _objc_storeStrong(param_1 + _DAT_112740fb8,0);
  _objc_storeStrong(param_1 + _DAT_112740f74,0);
  _objc_storeStrong(param_1 + _DAT_112740f70,0);
  _objc_destroyWeak(param_1 + _DAT_112740f68);
  _objc_destroyWeak(param_1 + _DAT_112740f64);
  _objc_destroyWeak(param_1 + _DAT_112740f5c);
  _objc_storeStrong(param_1 + _DAT_112740f54,0);
  _objc_storeStrong(param_1 + _DAT_112740f50,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740f6c,0);
  return;
}



/* Entry: 10617f17c; end: 10617f5e7; -[SCFeatureLensNightModeImpl initWithCameraConfiguration:cameraUserActionLogger:cameraHardwareResource:deviceCapacityAnalyzer:lensMode:featureUpdateEventSubject:cameraViewType:mainCameraScan:cameraUIServices:contentDeliveryServices:cameraTooltipsService:viewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:applicationLifecycleEvents:directorModePresenting:nightModeActivationHandler:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10617f17c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_8);
  _objc_retain(param_7);
  uVar3 = param_3;
  func_0x00010c090500();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR_PTR_1126eff40;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithCameraModeConfig_cameraH_112526150,uVar3,param_5,param_7,
                      param_8,param_9,param_10,param_11,param_12,param_13,param_14,param_15,param_16
                      ,param_17);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(uVar3);
  if (puVar2 != (undefined8 *)0x0) {
    lVar8 = (long)_DAT_112740fc8;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_5;
    _objc_release(uVar3);
    lVar10 = (long)_DAT_112740fcc;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar10);
    *(undefined8 *)((long)puVar2 + lVar10) = param_6;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112740fd0;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_4;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112740fd4) = 1;
    uVar3 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_112740fd8);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112740fd8) = uVar7;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c090500();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_112740fdc;
    uVar7 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = uVar4;
    _objc_release(uVar7);
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112740fe0;
    _objc_retain(param_19);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_19;
    _objc_release(uVar3);
    iVar1 = (int)*(undefined8 *)((long)puVar2 + lVar9);
    func_0x00010c2904e0();
    *(char *)((long)puVar2 + (long)_DAT_112740fe4) = (char)iVar1;
    if (iVar1 != 0) {
      uVar3 = *(undefined8 *)((long)puVar2 + lVar10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9980();
      _objc_release(uVar3);
    }
    uVar3 = param_3;
    func_0x00010bf29ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((long)puVar2 + (long)_DAT_112740fe8,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf318a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((long)puVar2 + (long)_DAT_112740fec,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112740ff0);
    *(undefined **)((long)puVar2 + (long)_DAT_112740ff0) = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112740ff4);
    *(undefined **)((long)puVar2 + (long)_DAT_112740ff4) = puVar5;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112740ff8) = 0;
    _objc_storeWeak((long)puVar2 + (long)_DAT_112740ffc,param_18);
    func_0x00010c139020(puVar2);
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 10617f5e8; end: 10617f5eb; -[SCFeatureLensNightModeImpl onAppDidEnterBackground] */

void FUN_10617f5e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be92150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reset_1125821f0);
  return;
}



/* Entry: 10617f5ec; end: 10617f6b7; -[SCFeatureLensNightModeImpl onViewDidAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617f5ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126eff40;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_onViewDidAppear_112617840);
  lVar1 = param_1 + _DAT_112740fec;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112740fc8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f8a0(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  func_0x00010be35fe0(param_1);
  return;
}



/* Entry: 10617f6b8; end: 10617f6ff; -[SCFeatureLensNightModeImpl onViewDidDisappear] */

void FUN_10617f6b8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126eff40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_onViewDidDisappear_112617850);
  func_0x00010c256420(param_1);
  return;
}



/* Entry: 10617f700; end: 10617f783; -[SCFeatureLensNightModeImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617f700(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c256420();
  if (*(char *)(param_1 + _DAT_112740fe4) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112740fcc);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cf80();
    _objc_release(uVar1);
  }
  puStack_28 = PTR_PTR_1126eff40;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10617f784; end: 10617f847; -[SCFeatureLensNightModeImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617f784(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126eff40;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_activate_112599760);
  lVar1 = param_1 + _DAT_112740fec;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112740fc8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f8a0(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 10617f848; end: 10617f85b; -[SCFeatureLensNightModeImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617f848(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112741000,param_3);
  return;
}



/* Entry: 10617f85c; end: 10617f86b; -[SCFeatureLensNightModeImpl resetMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617f85c(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_112741004) = 0;
  return;
}



/* Entry: 10617f86c; end: 10617fa13; -[SCFeatureLensNightModeImpl usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617f86c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_1;
  func_0x00010c0b7e80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be34260();
  _objc_release(uVar6);
  uVar6 = 1;
  if ((int)uVar4 != 0) {
    uVar6 = 2;
  }
  uVar1 = param_1;
  func_0x00010be63da0();
  uVar4 = 3;
  if ((int)uVar1 == 0) {
    uVar4 = uVar6;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb00d10();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar6 = param_1;
  func_0x00010c0b7e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70d80();
  func_0x00010be40ae0(param_1);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lVar5 = (long)_DAT_112741008;
    puVar7 = *(undefined **)(puVar2 + lVar5);
    if (puVar7 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126c7918;
      _objc_alloc();
      func_0x00010c037be0();
      uVar6 = *(undefined8 *)(puVar2 + lVar5);
      *(undefined **)(puVar2 + lVar5) = puVar3;
      _objc_release(uVar6);
      func_0x00010c1cdb60(*(undefined8 *)(puVar2 + lVar5));
      func_0x00010c1fb140(*(undefined8 *)(puVar2 + lVar5));
      uVar6 = *(undefined8 *)(puVar2 + lVar5);
      func_0x00010c160fc0(uVar6);
      func_0x0001008a88bc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161020(*(undefined8 *)(puVar2 + lVar5));
      _objc_release(uVar6);
      func_0x0001008a88bc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cdba0(*(undefined8 *)(puVar2 + lVar5));
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(puVar2 + lVar5);
      func_0x00010c0db340(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fb640(*(undefined8 *)(puVar2 + lVar5));
      _objc_release(uVar6);
      func_0x00010c177460(*(undefined8 *)(puVar2 + lVar5));
      _objc_initWeak(auStack_e8,puVar2);
      uVar4 = *(undefined8 *)(puVar2 + lVar5);
      func_0x00010bf735a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_108 = 0xc2000000;
      pcStack_100 = FUN_10617fca0;
      puStack_f8 = &UNK_11090ba70;
      _objc_copyWeak(auStack_f0,auStack_e8);
      uVar6 = uVar4;
      func_0x00010c25ff60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar6);
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(puVar2 + lVar5);
      func_0x00010bf2da40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_118,auStack_e8);
      uVar6 = uVar4;
      func_0x00010c25ff60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar6);
      _objc_release(uVar4);
      puVar7 = *(undefined **)(puVar2 + lVar5);
      _objc_retain(puVar7);
      _objc_destroyWeak(auStack_118);
      _objc_destroyWeak(auStack_f0);
      _objc_destroyWeak(auStack_e8);
    }
    else {
      _objc_retain(puVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10617fa14; end: 10617fc9f; -[SCFeatureLensNightModeImpl _createToolbarItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617fa14(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar5 = (long)_DAT_112741008;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126c7918;
    _objc_alloc();
    func_0x00010c037be0();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    func_0x00010c1cdb60(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c1fb140(*(undefined8 *)(param_1 + lVar5));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c160fc0(uVar3);
    func_0x0001008a88bc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x0001008a88bc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cdba0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c0db340(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb640(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x00010c177460(*(undefined8 *)(param_1 + lVar5));
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf735a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10617fca0;
    puStack_78 = &UNK_11090ba70;
    _objc_copyWeak(auStack_70,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf2da40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_98,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar4 = *(long *)(param_1 + lVar5);
    _objc_retain(lVar4);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  else {
    _objc_retain(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10617fca0; end: 10617fd17;  */

void FUN_10617fca0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c273a00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07d660();
    func_0x00010be63d60(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10617fd18; end: 10617fd6f;  */

void FUN_10617fd18(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf2c820(param_1);
    func_0x00010c200140(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10617fd70; end: 10617fd73; -[SCFeatureLensNightModeImpl isCameraModeActivated] */

void FUN_10617fd70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be63db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__nightModeIsEnabled_112576908);
  return;
}



/* Entry: 10617fd74; end: 10617fd7b; -[SCFeatureLensNightModeImpl cameraModeType] */

undefined8 FUN_10617fd74(void)

{
  return 3;
}



/* Entry: 10617fd7c; end: 10617fe63; -[SCFeatureLensNightModeImpl startObservingManagedDeviceCapacityAnalyzerEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617fd7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11274100c;
  if (*(long *)(param_1 + lVar3) == 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    uVar1 = param_3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = uVar1;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10617fe64; end: 10617ff1f;  */

void FUN_10617fe64(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd4e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10617ff20; end: 10617ff27;  */

void FUN_10617ff20(void)

{
  return;
}



/* Entry: 10617ff28; end: 10617fff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617ff28(float param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 == 0) goto LAB_10617ffd8;
  dVar2 = (double)param_1;
  lVar1 = (long)_DAT_112741010;
  if ((param_1 <= 0.0) || (0.0 < *(double *)(param_2 + lVar1))) {
    if (0.0 < param_1) {
      *(double *)(param_2 + lVar1) = dVar2;
      goto LAB_10617ffd8;
    }
    dVar3 = *(double *)(param_2 + lVar1);
    *(double *)(param_2 + lVar1) = dVar2;
    if (dVar3 <= 0.0) goto LAB_10617ffd8;
  }
  else {
    *(double *)(param_2 + lVar1) = dVar2;
  }
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10617fff4;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_58);
LAB_10617ffd8:
  _objc_release(param_2);
  return;
}



/* Entry: 10617fff4; end: 10618000b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617fff4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfc990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__didChangeLowLightCondition__11255cc00,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112740fd8));
  return;
}



/* Entry: 10618000c; end: 10618003f; -[SCFeatureLensNightModeImpl stopObservingManagedDeviceCapacityAnalyzerEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618000c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274100c;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106180040; end: 10618006f; -[SCFeatureLensNightModeImpl toolbarItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106180040(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112741008);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106180070; end: 1061800c3; -[SCFeatureLensNightModeImpl onCameraModeReady] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106180070(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + _DAT_112740ff8) = 1;
  lVar1 = param_1;
  func_0x00010c0753e0();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c125270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_refreshDirectorModeUI_112626eb8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bedc2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateNightModeButtonWithState__112594a58,
             *(undefined8 *)(param_1 + _DAT_112740fd8));
  return;
}



/* Entry: 1061800c4; end: 106180207; -[SCFeatureLensNightModeImpl configureWithCameraToolbar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061800c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf2b3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != param_3) {
    puStack_38 = PTR_PTR_1126eff40;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_configureWithCameraToolbar__1125af758,param_3);
    lVar1 = param_1;
    func_0x00010bf2b3c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bdf4da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc4a0(lVar1);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((*(byte *)(param_1 + _DAT_112740ff8) & 1) == 0) {
      lVar1 = param_1 + _DAT_112740ffc;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010c080420();
      _objc_release(lVar1);
      if ((int)lVar2 == 0) {
        func_0x00010bf2b3c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe2c00();
        _objc_release(param_1);
        goto LAB_1061801ec;
      }
    }
    func_0x00010bedc2c0(param_1);
  }
LAB_1061801ec:
  _objc_release(param_3);
  return;
}



/* Entry: 106180208; end: 10618026f; -[SCFeatureLensNightModeImpl forwardCameraOverlayTapGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106180208(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (((*(byte *)(param_1 + _DAT_112741014) & 1) == 0) &&
     (lVar1 = param_1,
     func_0x00010beb6b60(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112740fd8)), (int)lVar1 != 0
     )) {
    func_0x00010c1b4280(*(undefined8 *)(param_1 + _DAT_112741008),param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106180270; end: 106180297; -[SCFeatureLensNightModeImpl setCanEnable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106180270(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112740fd4) == param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bedc2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateNightModeButtonWithState__112594a58,
             *(undefined8 *)(param_1 + _DAT_112740fd8));
  return;
}



/* Entry: 106180298; end: 1061802eb; -[SCFeatureLensNightModeImpl _nightModeIsEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106180298(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_1;
  func_0x00010c06dec0();
  if ((uVar1 & 1) == 0) {
    lVar3 = param_1 + (long)_DAT_112740ffc;
    _objc_loadWeakRetained(lVar3);
    lVar2 = lVar3;
    func_0x00010c071800();
    _objc_release(lVar3);
  }
  else {
    lVar2 = 1;
  }
  return lVar2;
}



/* Entry: 1061802ec; end: 1061805fb; -[SCFeatureLensNightModeImpl _nightModeButtonDidChangeSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061802ec(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_a8 [8];
  undefined1 uStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  *(undefined1 *)(param_1 + _DAT_112741014) = 1;
  if ((*(byte *)(param_1 + _DAT_112740ff8) & 1) == 0) {
    lVar3 = (long)_DAT_112741000;
    lVar6 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c21e900();
    _objc_release(lVar6);
    puVar1 = (undefined *)(param_1 + lVar3);
    _objc_loadWeakRetained();
    _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + _DAT_112741008));
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1061805fc;
    puStack_78 = &UNK_1108434b0;
    _objc_copyWeak(auStack_70,auStack_68);
    ppuVar2 = &puStack_90;
    _objc_retainBlock(ppuVar2);
    _objc_initWeak(auStack_98,param_1);
    lVar6 = param_1 + _DAT_112740ffc;
    _objc_loadWeakRetained(lVar6);
    _objc_copyWeak(auStack_a8,auStack_98);
    _objc_retain(puVar1);
    uStack_a0 = (undefined1)param_3;
    func_0x00010bf90fe0(lVar6);
    _objc_release(lVar6);
    *(undefined1 *)(param_1 + _DAT_112741018) = 0;
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_98);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    goto LAB_106180540;
  }
  if (param_3 == 0) {
    func_0x00010bf7f9e0(param_1);
  }
  else {
    func_0x00010bf8ef20();
  }
  *(undefined1 *)(param_1 + _DAT_112741018) = 1;
  lVar3 = *(long *)(param_1 + _DAT_112740fdc);
  func_0x00010bf21220();
  lVar6 = (long)_DAT_112740ffc;
  if (lVar3 == 0) {
    lVar3 = param_1 + lVar6;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c071800();
    _objc_release(lVar3);
    if ((int)lVar4 != 0) goto LAB_1061804e0;
  }
  else {
LAB_1061804e0:
    lVar6 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bf90fe0();
    _objc_release(lVar6);
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_112740ff4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
LAB_106180540:
  _objc_release(puVar1);
  *(long *)(param_1 + _DAT_112741004) = *(long *)(param_1 + _DAT_112741004) + 1;
  lVar6 = (long)_DAT_112740fd0;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bfa1820(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b760();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bfa1820(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b740();
  _objc_release(uVar5);
  return;
}



/* Entry: 1061805fc; end: 10618062b;  */

void FUN_1061805fc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1b4280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10618062c; end: 1061806ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618062c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c21e900(*(undefined8 *)(param_1 + 0x20),param_2,1);
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112740ff4);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0x30)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061806ac; end: 10618075f; -[SCFeatureLensNightModeImpl _hasNightModeConditions:] */

bool FUN_1061806ac(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126aff08;
  puVar2 = param_3;
  func_0x00010bf70d80(param_3);
  func_0x00010c06cea0(puVar3,param_2,puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = param_3;
    func_0x00010bf70d80(param_3);
    uVar4 = param_1;
    func_0x00010be40ae0(param_1,param_2,puVar3);
    if ((int)uVar4 != 0) goto LAB_106180704;
  }
  else {
LAB_106180704:
    puVar3 = param_3;
    func_0x00010bf093c0();
    if ((((ulong)puVar3 & 1) == 0) && (func_0x00010be41b00(), (int)param_1 != 0)) {
      puVar3 = param_3;
      func_0x00010c154f00(param_3);
      puVar2 = PTR_PTR_1126afed0;
      func_0x00010c0db140(PTR_PTR_1126afed0);
      bVar1 = puVar3 == puVar2;
      goto LAB_106180744;
    }
  }
  bVar1 = false;
LAB_106180744:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106180760; end: 10618078f; -[SCFeatureLensNightModeImpl _shouldSuggestNightMode:] */

void FUN_106180760(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be34260();
  if ((int)uVar1 != 0) {
    func_0x00010be3e460(param_1);
  }
  return;
}



/* Entry: 106180790; end: 106180893; -[SCFeatureLensNightModeImpl _shouldShowNightModeButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106180790(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c154f00();
  puVar2 = PTR_PTR_1126afed0;
  func_0x00010c0db140();
  if ((puVar1 == puVar2) && (puVar1 = param_3, func_0x00010bf093c0(), ((ulong)puVar1 & 1) == 0)) {
    lVar3 = param_1;
    func_0x00010be63da0();
    if ((int)lVar3 != 0) {
      uVar5 = (uint)*(byte *)(param_1 + _DAT_112740fd4);
      goto LAB_1061807e0;
    }
    lVar3 = param_1;
    func_0x00010be41b00();
    if ((int)lVar3 == 0) {
      if (*(char *)(param_1 + _DAT_112740fd4) != '\0') {
        lVar3 = param_1;
        func_0x00010bf2b3c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c273a00(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c075da0(lVar3,param_2,param_1);
        uVar5 = (uint)lVar4 ^ 1;
        _objc_release(param_1);
        _objc_release(lVar3);
        goto LAB_1061807e0;
      }
    }
    else if (*(char *)(param_1 + _DAT_112740fd4) != '\0') {
      func_0x00010be3e460(param_1);
      uVar5 = (uint)param_1 ^ 1;
      goto LAB_1061807e0;
    }
  }
  uVar5 = 0;
LAB_1061807e0:
  _objc_release(param_3);
  return uVar5 & 1;
}



/* Entry: 106180894; end: 1061808c7; -[SCFeatureLensNightModeImpl _isAutoEnableFlashExperimentActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106180894(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8670;
  func_0x00010c27b800(PTR_PTR_1126c8670,param_2,*(undefined8 *)(param_1 + _DAT_112740fe0));
  return puVar1 != (undefined *)0x0;
}



/* Entry: 1061808c8; end: 1061808d3; -[SCFeatureLensNightModeImpl _isFrontFacing:] */

void FUN_1061808c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c073f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aff08,PTR_s_isFrontFacing__1125fa9d0);
  return;
}



/* Entry: 1061808d4; end: 10618094f; -[SCFeatureLensNightModeImpl _updateNightModeButtonWithState:] */

void FUN_1061808d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010beb6300();
  uVar2 = param_1;
  func_0x00010bf2b3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c273a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar1 == 0) {
    func_0x00010bfe2c00(uVar2,param_2,param_1,1);
  }
  else {
    func_0x00010c23a840();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106180950; end: 1061809ef; -[SCFeatureLensNightModeImpl _hideWithDelayIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106180950(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if (((*(char *)(param_1 + (long)_DAT_112740fd4) == '\x01') &&
      (uVar1 = param_1,
      func_0x00010beb6b60(param_1,param_2,*(undefined8 *)(param_1 + (long)_DAT_112740fd8)),
      (uVar1 & 1) == 0)) && (uVar1 = param_1, func_0x00010be63da0(), (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010bf2b3c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c273a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe2c00(uVar1,param_2,param_1,1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1061809f0; end: 106180ad3; -[SCFeatureLensNightModeImpl _reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061809f0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + (long)_DAT_112740fd4) == '\x01') {
    *(undefined1 *)(param_1 + (long)_DAT_112741014) = 0;
    uVar1 = param_1;
    func_0x00010beb6b60(param_1,param_2,*(undefined8 *)(param_1 + (long)_DAT_112740fd8));
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010be63da0();
      uVar2 = param_1;
      if ((uVar1 & 1) == 0) {
        func_0x00010bf2b3c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_1;
        func_0x00010c273a00(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe2c00(uVar2,param_2,uVar1,0);
        _objc_release(uVar1);
      }
      else {
        func_0x00010c273a00(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b4280();
      }
      _objc_release(uVar2);
    }
    *(undefined1 *)(param_1 + (long)_DAT_11274101c) = 0;
    *(undefined1 *)(param_1 + (long)_DAT_112741020) = 0;
  }
  return;
}



/* Entry: 106180ad4; end: 106180adb; -[SCFeatureLensNightModeImpl _didStartRecording] */

void FUN_106180ad4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c177c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCanEnable__11263b920,0);
  return;
}



/* Entry: 106180adc; end: 106180ba3; -[SCFeatureLensNightModeImpl _didEndRecording] */

void FUN_106180adc(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010c177c00(param_1,param_2,1);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x106180b78;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100c749e0(0x3dcccccd,"APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106180ba4; end: 106180c6b; -[SCFeatureLensNightModeImpl detailedCameraModeLogInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106180ba4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR____NSDictionary0__struct_11034ab58;
  if (*(char *)(param_1 + _DAT_112741018) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112740fdc);
    func_0x00010bf29f00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be63db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106180c6c; end: 106180c6f; -[SCFeatureLensNightModeImpl enabled] */

void FUN_106180c6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be63db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__nightModeIsEnabled_112576908);
  return;
}



/* Entry: 106180c70; end: 106180deb; -[SCFeatureLensNightModeImpl beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106180c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106180dec;
  puStack_78 = &UNK_11090d050;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar1 = param_4;
  func_0x00010c25ff60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_copyWeak(auStack_98,auStack_68);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106180dec; end: 106180f1f;  */

void FUN_106180dec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  pcStack_68 = FUN_106180f20;
  puStack_60 = &UNK_11084ebd0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x106180f4c;
  puStack_88 = &UNK_11090d020;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  func_0x00010c0c17a0(param_2);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 106180f20; end: 106180fa3;  */

void FUN_106180f20(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106180fa4; end: 10618113f;  */

void FUN_106180fa4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106181140;
  puStack_70 = &UNK_11084ec30;
  _objc_copyWeak(auStack_68,param_1 + 0x20);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x10618116c;
  puStack_98 = &UNK_11090d2a0;
  _objc_copyWeak(auStack_90,param_1 + 0x20);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x106181198;
  puStack_c0 = &UNK_11090d380;
  _objc_copyWeak(auStack_b8,param_1 + 0x20);
  _objc_copyWeak(auStack_e0,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 106181140; end: 1061811ef;  */

void FUN_106181140(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061811f0; end: 10618163f; -[SCFeatureLensNightModeImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061811f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
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
  lVar6 = (long)_DAT_112741024;
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
    func_0x00010c2528c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106181640;
    puStack_90 = &UNK_11090d240;
    _objc_copyWeak(auStack_88,auStack_80);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
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
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_10618172c;
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
    func_0x00010bf70e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_106181818;
    puStack_e0 = &UNK_11086e3f0;
    _objc_copyWeak(auStack_d8,auStack_80);
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
    func_0x00010c160440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = puVar1;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_106181904;
    puStack_108 = &UNK_110872b30;
    _objc_copyWeak(auStack_100,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_148 = 0xc2000000;
    pcStack_140 = FUN_106181a0c;
    puStack_138 = &UNK_110841fb0;
    _objc_copyWeak(auStack_128,auStack_80);
    _objc_retain(param_4);
    uStack_130 = param_4;
    func_0x000100162d98("APPSTORE",&puStack_150);
    _objc_release(uStack_130);
    _objc_destroyWeak(auStack_128);
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



/* Entry: 106181640; end: 1061816e3;  */

void FUN_106181640(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e39e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1061816e4; end: 10618172b;  */

void FUN_1061816e4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfcb00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10618172c; end: 1061817cf;  */

void FUN_10618172c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e3880(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1061817d0; end: 106181817;  */

void FUN_1061817d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc760();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106181818; end: 1061818bb;  */

void FUN_106181818(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e3980(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1061818bc; end: 106181903;  */

void FUN_1061818bc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc980();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106181904; end: 1061819a7;  */

void FUN_106181904(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e38c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1061819a8; end: 106181a0b;  */

void FUN_1061819a8(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf70d80();
  if (lVar1 != param_3) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdfc800();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106181a0c; end: 106181a77;  */

void FUN_106181a0c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdfc800();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdfc980();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfcb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106181a78; end: 106181aab; -[SCFeatureLensNightModeImpl stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106181a78(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112741024;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106181aac; end: 106181b67; -[SCFeatureLensNightModeImpl _didChangeCaptureDevicePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106181aac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar4 = PTR_PTR_1126aff08;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf70d80(param_3);
  func_0x00010c06cea0(puVar4,param_2,uVar3);
  lVar5 = (long)_DAT_112741008;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c07d660();
  if (iVar2 != 0) {
    lVar1 = 0x58;
    if ((int)puVar4 == 0) {
      lVar1 = 0x54;
    }
    *(undefined1 *)(param_1 + *(int *)(&DAT_112740fc8 + lVar1)) = 1;
  }
  lVar1 = 0x54;
  if ((int)puVar4 == 0) {
    lVar1 = 0x58;
  }
  iVar2 = *(int *)(&DAT_112740fc8 + lVar1);
  func_0x00010c1b4280(*(undefined8 *)(param_1 + lVar5),param_2,*(undefined1 *)(param_1 + iVar2));
  *(undefined1 *)(param_1 + iVar2) = 0;
  func_0x00010bedc2c0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106181b68; end: 106181bcf; -[SCFeatureLensNightModeImpl _didChangeARSessionActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106181b68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar3;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11274101c;
  if (*(char *)(param_1 + lVar3) == '\x01') {
    uVar2 = param_3;
    func_0x00010bf093c0();
    uVar1 = (undefined1)uVar2;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + lVar3) = uVar1;
  func_0x00010bedc2c0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106181bd0; end: 106181bd3; -[SCFeatureLensNightModeImpl _didChangeLowLightCondition:] */

void FUN_106181bd0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedc2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateNightModeButtonWithState__112594a58);
  return;
}



/* Entry: 106181bd4; end: 106181c0b; -[SCFeatureLensNightModeImpl _didChangeState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106181bd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740fd8);
  *(undefined8 *)(param_1 + _DAT_112740fd8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106181c0c; end: 106181c47; -[SCFeatureLensNightModeImpl _isLowLightCondition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106181c0c(long param_1)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + _DAT_112740fe4) == '\x01') {
    return (ulong)(*(double *)(param_1 + _DAT_112741010) < 0.0);
  }
  uVar1 = *(ulong *)(param_1 + _DAT_112740fd8);
                    /* WARNING: Could not recover jumptable at 0x00010c0b5990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_lowLightCondition_11260b078);
  return uVar1;
}



/* Entry: 106181c48; end: 106181c57; -[SCFeatureLensNightModeImpl nightModeActivationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106181c48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740ff4);
}



/* Entry: 106181c58; end: 106181c67; -[SCFeatureLensNightModeImpl managedCapturerState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106181c58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740fd8);
}


