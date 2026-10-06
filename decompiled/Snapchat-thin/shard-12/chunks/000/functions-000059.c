/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108cc9810; end: 108cc9817; -[SCCameraCommonParametersBuilder withPreCaptureZoomLevel:] */

void FUN_108cc9810(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0xd8) = param_1;
  return;
}



/* Entry: 108cc9818; end: 108cc981f; -[SCCameraCommonParametersBuilder withZoomLevelGroup:] */

void FUN_108cc9818(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  return;
}



/* Entry: 108cc9820; end: 108cc9827; -[SCCameraCommonParametersBuilder withCaptureZoomSource:] */

void FUN_108cc9820(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xe8) = param_3;
  return;
}



/* Entry: 108cc9828; end: 108cc982f; -[SCCameraCommonParametersBuilder withIsAspectRatioButtonActivated:] */

void FUN_108cc9828(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xf0) = param_3;
  return;
}



/* Entry: 108cc9830; end: 108cc9837; -[SCCameraCommonParametersBuilder withIsDeviceInMotion:] */

void FUN_108cc9830(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xf1) = param_3;
  return;
}



/* Entry: 108cc9838; end: 108cc983f; -[SCCameraCommonParametersBuilder withMotionValue:] */

void FUN_108cc9838(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xf4) = param_1;
  return;
}



/* Entry: 108cc9840; end: 108cc9847; -[SCCameraCommonParametersBuilder withBrightnessValue:] */

void FUN_108cc9840(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0xf8) = param_1;
  return;
}



/* Entry: 108cc9848; end: 108cc984f; -[SCCameraCommonParametersBuilder withActiveMicrophoneMode:] */

void FUN_108cc9848(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x100) = param_3;
  return;
}



/* Entry: 108cc9850; end: 108cc9857; -[SCCameraCommonParametersBuilder withPreferredMicrophoneMode:] */

void FUN_108cc9850(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x108) = param_3;
  return;
}



/* Entry: 108cc9858; end: 108cc985f; -[SCCameraCommonParametersBuilder withLastPreferredMicrophoneMode:] */

void FUN_108cc9858(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x110) = param_3;
  return;
}



/* Entry: 108cc9860; end: 108cc9867; -[SCCameraCommonParametersBuilder withIsContinuousCapture:] */

void FUN_108cc9860(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x118) = param_3;
  return;
}



/* Entry: 108cc9868; end: 108cc98b3; +[SCPreviewLockScreenCameraLaunchTarget autoSave] */

void FUN_108cc9868(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ce8b0;
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



/* Entry: 108cc98b4; end: 108cc98fb; +[SCPreviewLockScreenCameraLaunchTarget none] */

void FUN_108cc98b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ce8b0;
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



/* Entry: 108cc98fc; end: 108cc9947; +[SCPreviewLockScreenCameraLaunchTarget sendTo] */

void FUN_108cc98fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ce8b0;
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



/* Entry: 108cc9948; end: 108cc9993; +[SCPreviewLockScreenCameraLaunchTarget stories] */

void FUN_108cc9948(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ce8b0;
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



/* Entry: 108cc9994; end: 108cc99eb; +[SCPreviewLockScreenCameraLaunchTarget toolWithType:] */

void FUN_108cc9994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ce8b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cc99ec; end: 108cc9a0f; -[SCPreviewLockScreenCameraLaunchTarget copyWithZone:] */

undefined8 FUN_108cc99ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108cc9a10; end: 108cc9a6f; -[SCPreviewLockScreenCameraLaunchTarget hash] */

void FUN_108cc9a10(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  lStack_20 = -lVar1;
  if (-1 < lVar1) {
    lStack_20 = lVar1;
  }
  puVar2 = &uStack_28;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126fe308;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cc9a70; end: 108cc9ab3; -[SCPreviewLockScreenCameraLaunchTarget internalInit] */

void FUN_108cc9a70(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fe308;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cc9ab4; end: 108cc9b4b; -[SCPreviewLockScreenCameraLaunchTarget isEqual:] */

bool FUN_108cc9ab4(ulong param_1,undefined8 param_2,ulong param_3)

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
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108cc9b4c; end: 108cc9c5f; -[SCPreviewLockScreenCameraLaunchTarget matchNone:stories:sendTo:autoSave:tool:] */

void FUN_108cc9b4c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_108cc9c28;
      pcVar2 = *(code **)(param_3 + 0x10);
      lVar1 = param_3;
    }
    else {
      if ((lVar1 != 1) || (param_4 == 0)) goto LAB_108cc9c28;
      pcVar2 = *(code **)(param_4 + 0x10);
      lVar1 = param_4;
    }
  }
  else if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_108cc9c28;
    pcVar2 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
  }
  else {
    if (lVar1 != 3) {
      if ((lVar1 == 4) && (param_7 != 0)) {
        (**(code **)(param_7 + 0x10))(param_7,*(undefined8 *)(param_1 + 0x10));
      }
      goto LAB_108cc9c28;
    }
    if (param_6 == 0) goto LAB_108cc9c28;
    pcVar2 = *(code **)(param_6 + 0x10);
    lVar1 = param_6;
  }
  (*pcVar2)(lVar1);
LAB_108cc9c28:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cc9c60; end: 108cc9c6b; -[SCMainCameraScopedCameraNightModeServices .cxx_destruct] */

void FUN_108cc9c60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cc9c6c; end: 108cc9c77; -[SCCameraNightModeServices .cxx_destruct] */

void FUN_108cc9c6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cc9c78; end: 108cc9d73; -[SCPreviewToolbarLongPressGestureRecognizerImpl touchesBegan:withEvent:] */

void FUN_108cc9c78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_touchesBegan_withEvent__11267b780;
  puStack_38 = PTR_PTR_1126fe320;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3,param_4);
  func_0x00010c1f5fa0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),param_1);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_1);
  func_0x00010c16fd00(param_1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf04a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf183e0(param_1);
  func_0x00010c218d00(param_1);
  func_0x00010c2709c0(uVar2);
  func_0x00010c218d80(param_1);
  func_0x00010c2709c0(uVar2);
  func_0x00010c16fd60(param_1);
  _objc_release(uVar2);
  return;
}



/* Entry: 108cc9d74; end: 108cc9ee7; -[SCPreviewToolbarLongPressGestureRecognizerImpl touchesMoved:withEvent:] */

void FUN_108cc9d74(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR_s_touchesMoved_withEvent__11252ca58;
  puStack_68 = PTR_PTR_1126fe320;
  uStack_70 = param_3;
  _objc_retain(param_5);
  _objc_msgSendSuper2(&uStack_70,puVar1,param_5,param_6);
  uVar2 = param_5;
  func_0x00010bf04a20(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c277520(param_3);
  dVar4 = param_1;
  func_0x00010c2709c0(uVar2);
  param_1 = param_1 - dVar4;
  uVar3 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_3);
  dVar7 = dVar4;
  dVar8 = param_2;
  _objc_release(uVar3);
  func_0x00010c2772a0(param_3);
  func_0x00010c2772a0(param_3);
  dVar5 = dVar4;
  func_0x00010c218d00(dVar4,param_2,param_3);
  func_0x00010c2709c0(uVar2);
  func_0x00010c218d80(param_3);
  func_0x00010c2709c0(uVar2);
  dVar6 = dVar5;
  func_0x00010bf18ca0(param_3);
  func_0x00010c1f5f60(dVar5 - dVar6,param_3);
  dVar7 = (dVar4 - dVar7) / param_1;
  param_1 = (param_2 - dVar8) / param_1;
  func_0x00010c1f5fa0(dVar7,param_1,param_3);
  func_0x00010bf183e0(param_3);
  func_0x00010bf183e0(param_3);
  func_0x00010c1f5f80(dVar4 - dVar7,param_2 - param_1,param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 108cc9ee8; end: 108cc9f97; -[SCPreviewToolbarLongPressGestureRecognizerImpl touchesEnded:withEvent:] */

void FUN_108cc9ee8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_touchesEnded_withEvent__11267b788;
  puStack_48 = PTR_PTR_1126fe320;
  uStack_50 = param_2;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&uStack_50,puVar1,param_4,param_5);
  uVar2 = param_4;
  func_0x00010bf04a20(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c2709c0(uVar2);
  dVar3 = param_1;
  func_0x00010bf18ca0(param_2);
  func_0x00010c1f5f60(param_1 - dVar3,param_2);
  _objc_release(uVar2);
  return;
}



/* Entry: 108cc9f98; end: 108cca047; -[SCPreviewToolbarLongPressGestureRecognizerImpl touchesCancelled:withEvent:] */

void FUN_108cc9f98(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_touchesCancelled_withEvent__112526c90;
  puStack_48 = PTR_PTR_1126fe320;
  uStack_50 = param_2;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&uStack_50,puVar1,param_4,param_5);
  uVar2 = param_4;
  func_0x00010bf04a20(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c2709c0(uVar2);
  dVar3 = param_1;
  func_0x00010bf18ca0(param_2);
  func_0x00010c1f5f60(param_1 - dVar3,param_2);
  _objc_release(uVar2);
  return;
}



/* Entry: 108cca048; end: 108cca05b; -[SCPreviewToolbarLongPressGestureRecognizerImpl sc_velocity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108cca048(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277a718);
}



/* Entry: 108cca05c; end: 108cca06f; -[SCPreviewToolbarLongPressGestureRecognizerImpl setSc_velocity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cca05c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277a718;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 108cca070; end: 108cca083; -[SCPreviewToolbarLongPressGestureRecognizerImpl sc_translation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108cca070(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277a71c);
}



/* Entry: 108cca084; end: 108cca097; -[SCPreviewToolbarLongPressGestureRecognizerImpl setSc_translation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cca084(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277a71c;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 108cca098; end: 108cca0a7; -[SCPreviewToolbarLongPressGestureRecognizerImpl sc_touchDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cca098(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a720);
}



/* Entry: 108cca0a8; end: 108cca0b7; -[SCPreviewToolbarLongPressGestureRecognizerImpl setSc_touchDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cca0a8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277a720) = param_1;
  return;
}



/* Entry: 108cca0b8; end: 108cca0cb; -[SCPreviewToolbarLongPressGestureRecognizerImpl beginLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108cca0b8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277a724);
}



/* Entry: 108cca0cc; end: 108cca0df; -[SCPreviewToolbarLongPressGestureRecognizerImpl setBeginLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cca0cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277a724;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 108cca0e0; end: 108cca0ef; -[SCPreviewToolbarLongPressGestureRecognizerImpl beginTouchTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cca0e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a728);
}



/* Entry: 108cca0f0; end: 108cca0ff; -[SCPreviewToolbarLongPressGestureRecognizerImpl setBeginTouchTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cca0f0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277a728) = param_1;
  return;
}



/* Entry: 108cca100; end: 108cca113; -[SCPreviewToolbarLongPressGestureRecognizerImpl touchLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108cca100(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277a72c);
}



/* Entry: 108cca114; end: 108cca127; -[SCPreviewToolbarLongPressGestureRecognizerImpl setTouchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cca114(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277a72c;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 108cca128; end: 108cca137; -[SCPreviewToolbarLongPressGestureRecognizerImpl touchTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cca128(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a730);
}



/* Entry: 108cca138; end: 108cca147; -[SCPreviewToolbarLongPressGestureRecognizerImpl setTouchTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cca138(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277a730) = param_1;
  return;
}



/* Entry: 108cca148; end: 108cca1cb; -[SCPreviewAiModeToolbarButtonItem setDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cca148(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long unaff_x20;
  long lStack_40;
  undefined *puStack_38;
  
  if ((param_3 & 1) == 0) {
    unaff_x20 = param_1 + _DAT_11277a734;
    _objc_loadWeakRetained(unaff_x20);
    lVar1 = unaff_x20;
    func_0x00010c22ece0();
  }
  else {
    lVar1 = 1;
  }
  puStack_38 = PTR_PTR_1126fe328;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setDisabled__112641538,lVar1);
  if ((param_3 & 1) == 0) {
    _objc_release(unaff_x20);
  }
  return;
}



/* Entry: 108cca1cc; end: 108cca283; -[SCPreviewAiModeToolbarButtonItem setSelected:] */

void FUN_108cca1cc(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fe328;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setSelected__11265c598);
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010bf1ff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar1 = param_1;
      func_0x00010bdea2e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar2);
      _objc_release(lVar1);
      func_0x00010c1734c0(param_1);
      _objc_release(puVar2);
    }
  }
  return;
}



/* Entry: 108cca284; end: 108cca36f; -[SCPreviewAiModeToolbarButtonItem _createAccesoryButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cca284(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar2 = PTR_PTR_1126c3e40;
  func_0x00010beed120(PTR_PTR_1126c3e40,param_2,&PTR____CFConstantStringClassReference_110db18b8,0);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11277a738;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c3e40;
  func_0x00010beed120(PTR_PTR_1126c3e40,param_2,&PTR____CFConstantStringClassReference_110db4078,0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11277a73c;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  func_0x00010befbd40(*(undefined8 *)(param_1 + lVar5),param_2,param_1,
                      PTR_s__handleDeleteButtonTap_11253ccf8);
  func_0x00010befbd40(*(undefined8 *)(param_1 + lVar4),param_2,param_1,
                      PTR_s__handleReportButtonTap_11253cd00);
  func_0x00010befa120(puVar1,param_2,*(undefined8 *)(param_1 + lVar4));
  func_0x00010befa120(puVar1,param_2,*(undefined8 *)(param_1 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108cca370; end: 108cca3a7; -[SCPreviewAiModeToolbarButtonItem _handleDeleteButtonTap] */

void FUN_108cca370(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cca3a8; end: 108cca3df; -[SCPreviewAiModeToolbarButtonItem _handleReportButtonTap] */

void FUN_108cca3a8(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff1a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cca3e0; end: 108cca3ef; -[SCPreviewAiModeToolbarButtonItem setDeleteButtonHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cca3e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277a738),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 108cca3f0; end: 108cca3ff; -[SCPreviewAiModeToolbarButtonItem setReportButtonHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cca3f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277a73c),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 108cca400; end: 108cca41f; -[SCPreviewAiModeToolbarButtonItem delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cca400(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277a734);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cca420; end: 108cca433; -[SCPreviewAiModeToolbarButtonItem setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cca420(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277a734,param_3);
  return;
}



/* Entry: 108cca434; end: 108cca47f; -[SCPreviewAiModeToolbarButtonItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cca434(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277a734);
  _objc_storeStrong(param_1 + _DAT_11277a73c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277a738,0);
  return;
}



/* Entry: 108cca480; end: 108cca68b; -[SCPreviewAttachmentToolBarButtonItem setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cca480(undefined *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fe330;
  puStack_50 = param_1;
  _objc_msgSendSuper2(&puStack_50,PTR_s_setSelected__11265c598);
  if (param_3 != 0) {
    puVar1 = param_1;
    func_0x00010bf1ff20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = param_1;
      func_0x00010c257540();
      if ((int)puVar1 == 0) {
        return;
      }
      puVar1 = PTR_PTR_1126c3e40;
      func_0x00010beed100(0x4044000000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = (long)_DAT_11277a744;
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(undefined **)(param_1 + lVar3) = puVar1;
      _objc_release(uVar2);
      func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar3));
      func_0x00010c161020(*(undefined8 *)(param_1 + lVar3));
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3));
      func_0x00010befbd40(*(undefined8 *)(param_1 + lVar3));
      dVar4 = 40.0;
      puVar1 = PTR_PTR_1126c3e40;
      func_0x00010beed100(0x4044000000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = (long)_DAT_11277a748;
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(undefined **)(param_1 + lVar3) = puVar1;
      _objc_release(uVar2);
      func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar3));
      func_0x00010c161020(*(undefined8 *)(param_1 + lVar3));
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3));
      func_0x00010c182220(*(undefined8 *)(param_1 + lVar3));
      func_0x00010c21d680(*(undefined8 *)(param_1 + lVar3));
      puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      func_0x00010c1aa420((40.0 - dVar4) * 0.5,0,*(undefined8 *)(param_1 + lVar3));
      _objc_release(puVar1);
      func_0x00010befbd40(*(undefined8 *)(param_1 + lVar3));
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a120(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1734c0(param_1);
    }
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 108cca68c; end: 108cca6c7; -[SCPreviewAttachmentToolBarButtonItem _webButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cca68c(long param_1)

{
  param_1 = param_1 + _DAT_11277a74c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf0d460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cca6c8; end: 108cca703; -[SCPreviewAttachmentToolBarButtonItem _storeButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cca6c8(long param_1)

{
  param_1 = param_1 + _DAT_11277a74c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf0d440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cca704; end: 108cca723; -[SCPreviewAttachmentToolBarButtonItem delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cca704(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277a74c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cca724; end: 108cca737; -[SCPreviewAttachmentToolBarButtonItem setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cca724(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277a74c,param_3);
  return;
}



/* Entry: 108cca738; end: 108cca747; -[SCPreviewAttachmentToolBarButtonItem storeButtonEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108cca738(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277a740);
}



/* Entry: 108cca748; end: 108cca757; -[SCPreviewAttachmentToolBarButtonItem setStoreButtonEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cca748(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277a740) = param_3;
  return;
}



/* Entry: 108cca758; end: 108cca7a3; -[SCPreviewAttachmentToolBarButtonItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cca758(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277a74c);
  _objc_storeStrong(param_1 + _DAT_11277a748,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277a744,0);
  return;
}



/* Entry: 108cca7a4; end: 108ccaa1b; -[SCPreviewCaptionToolBarButtonItem setShouldShowButtonText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cca7a4(long param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126dba60;
  uVar4 = *(ulong *)(param_1 + _DAT_11277a750);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c087500(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1a7f60(uVar3);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126dba60;
  uVar4 = *(ulong *)(param_1 + _DAT_11277a754);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c087500(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1a7f60(uVar3);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126dba60;
  uVar4 = *(ulong *)(param_1 + _DAT_11277a758);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c087500(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1a7f60(uVar3);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126dba60;
  uVar4 = *(ulong *)(param_1 + _DAT_11277a75c);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c087500(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1a7f60(uVar3);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126dba60;
  uVar4 = *(ulong *)(param_1 + _DAT_11277a760);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c087500(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1a7f60(uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277a764),PTR_s_setState__112660218,param_3);
  return;
}



/* Entry: 108ccaa1c; end: 108ccab07; -[SCPreviewCaptionToolBarButtonItem setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccaa1c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fe338;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setSelected__11265c598);
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010bf1ff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + _DAT_11277a768);
      *(undefined **)(param_1 + _DAT_11277a768) = puVar2;
      _objc_release(uVar3);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar1 = param_1;
      func_0x00010be1ac00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar2);
      _objc_release(lVar1);
      func_0x00010c1734c0(param_1);
      _objc_release(puVar2);
    }
  }
  return;
}



/* Entry: 108ccab08; end: 108ccab17; -[SCPreviewCaptionToolBarButtonItem setColorPickerHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccab08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277a76c),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 108ccab18; end: 108ccab6b; -[SCPreviewCaptionToolBarButtonItem setAlignmentButtonHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccab18(long param_1)

{
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277a750));
  func_0x00010c084240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ccab6c; end: 108ccabbf; -[SCPreviewCaptionToolBarButtonItem setDurationButtonHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccab6c(long param_1)

{
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277a758));
  func_0x00010c084240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ccabc0; end: 108ccac0b; -[SCPreviewCaptionToolBarButtonItem setDurationButtonAlpha:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccabc0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11277a758);
  func_0x00010bfe90c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ccac0c; end: 108ccac5f; -[SCPreviewCaptionToolBarButtonItem setTextToSpeechButtonHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccac0c(long param_1)

{
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277a75c));
  func_0x00010c084240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ccac60; end: 108ccacab; -[SCPreviewCaptionToolBarButtonItem setTextToSpeechButtonAlpha:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccac60(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11277a75c);
  func_0x00010bfe90c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ccacac; end: 108ccad0f; -[SCPreviewCaptionToolBarButtonItem setTextToSpeechButtonSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccacac(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef1a18;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ef19f8;
  }
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277a75c),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108ccad10; end: 108ccad1f; -[SCPreviewCaptionToolBarButtonItem moveDropletToColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccad10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d1450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277a76c),PTR_s_moveDropletToColor__112611f28);
  return;
}



/* Entry: 108ccad20; end: 108ccad87; -[SCPreviewCaptionToolBarButtonItem setAlignmentImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccad20(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 - 1U < 3) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        (&PTR_PTR_110ac1b08)[param_3 - 1U]);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277a750),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 108ccad88; end: 108ccaddb; -[SCPreviewCaptionToolBarButtonItem setBackgroundButtonHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccad88(long param_1)

{
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277a754));
  func_0x00010c084240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ccaddc; end: 108ccae63; -[SCPreviewCaptionToolBarButtonItem setBackgroundButtonType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccaddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  *(undefined8 *)(param_1 + _DAT_11277a770) = param_3;
  puVar2 = PTR_PTR_1126cbf68;
  func_0x00010c06cf40();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef1a38;
  if ((int)puVar2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ef1978;
  }
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277a754),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108ccae64; end: 108ccaeaf; -[SCPreviewCaptionToolBarButtonItem setBackgroundButtonAlpha:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccae64(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11277a754);
  func_0x00010bfe90c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ccaeb0; end: 108ccaf2f; -[SCPreviewCaptionToolBarButtonItem setMagicCaptionButtonIsLoading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccaeb0(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef19b8;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ef1998;
  }
  uVar2 = 2;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11277a764;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar4),PTR_s_setState__112660218,uVar2);
  return;
}



/* Entry: 108ccaf30; end: 108ccaf83; -[SCPreviewCaptionToolBarButtonItem setMagicCaptionButtonHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccaf30(long param_1)

{
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277a764));
  func_0x00010c084240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ccaf84; end: 108ccb19f; -[SCPreviewCaptionToolBarButtonItem setCustomojiButtonImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccaf84(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  lVar8 = (long)_DAT_11277a774;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = param_3;
  _objc_release(uVar1);
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    goto LAB_108ccb130;
  }
  puVar9 = param_3;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  puVar2 = PTR__OBJC_CLASS___CIImage_1126b3128;
  if (puVar9 == (undefined *)0x0) {
    puVar2 = param_3;
    func_0x00010bdc10e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar9 = param_3;
    _objc_retainAutorelease(param_3);
    func_0x00010bdc1020();
    func_0x00010bfe9240(puVar2,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar2 == (undefined *)0x0) {
    _objc_retain(param_3);
    puVar9 = param_3;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___CIContext_1126b3120;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___CIFilter_1126c7620;
    func_0x00010bf40dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ad400();
    uVar1 = 0;
    func_0x00010c1f54c0(0,puVar4);
    puVar5 = puVar4;
    func_0x00010c0eedc0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
LAB_108ccb0f4:
      _objc_retain(param_3);
      puVar9 = param_3;
    }
    else {
      func_0x00010bf9de20(puVar2);
      puVar6 = puVar3;
      func_0x00010bf54e00(puVar3,param_2,puVar5);
      puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
      if (puVar6 == (undefined *)0x0) goto LAB_108ccb0f4;
      func_0x00010c14e120(param_3);
      puVar7 = param_3;
      func_0x00010bfe8380(param_3);
      func_0x00010bfe9260(uVar1,puVar9,param_2,puVar6,puVar7);
      _objc_retainAutoreleasedReturnValue();
      _CGImageRelease(puVar6);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
LAB_108ccb130:
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277a778);
  *(undefined **)(param_1 + _DAT_11277a778) = puVar9;
  _objc_release(uVar1);
  func_0x00010bdcdfc0(param_1);
  func_0x00010c084240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084120();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ccb1a0; end: 108ccb1af; -[SCPreviewCaptionToolBarButtonItem setCustomojiButtonDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccb1a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277a77c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdcdfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyCustomojiButtonState_112551190);
  return;
}



/* Entry: 108ccb1b0; end: 108ccb26f; -[SCPreviewCaptionToolBarButtonItem _applyCustomojiButtonState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccb1b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = (long)_DAT_11277a774;
  lVar2 = (long)_DAT_11277a760;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,*(long *)(param_1 + lVar3) == 0);
  lVar3 = *(long *)(param_1 + lVar3);
  if (lVar3 != 0) {
    if (*(char *)(param_1 + _DAT_11277a77c) == '\x01') {
      lVar3 = *(long *)(param_1 + _DAT_11277a778);
      uVar4 = 0x3fe0000000000000;
    }
    else {
      uVar4 = 0x3ff0000000000000;
    }
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar2),param_2,lVar3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010bfe90c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 108ccb270; end: 108ccb2eb; -[SCPreviewCaptionToolBarButtonItem toolbarColorPickerView:didChangeColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccb270(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277a768);
  *(undefined8 *)(param_1 + _DAT_11277a768) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf306c0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ccb2ec; end: 108ccb2ef; -[SCPreviewCaptionToolBarButtonItem toolbarColorPickerView:didTogglePaletteToType:selectedColor:] */

void FUN_108ccb2ec(void)

{
  return;
}



/* Entry: 108ccb2f0; end: 108ccb78f; -[SCPreviewCaptionToolBarButtonItem _generateButtonViewsWithVisibleLabels:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccb2f0(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126c3e40;
  if (param_3 == 0) {
    func_0x00010beed0e0(PTR_PTR_1126c3e40,param_2,&PTR____CFConstantStringClassReference_110ef1938);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_11277a750;
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126c3e40;
    func_0x00010beed0e0(PTR_PTR_1126c3e40,param_2,&PTR____CFConstantStringClassReference_110ef1978);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_11277a754;
    uVar4 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126c3e40;
    func_0x00010beed0e0(PTR_PTR_1126c3e40,param_2,&PTR____CFConstantStringClassReference_110ef19d8);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_11277a758;
    uVar4 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126c3e40;
    func_0x00010beed0e0(PTR_PTR_1126c3e40,param_2,&PTR____CFConstantStringClassReference_110ef19f8);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = (long)_DAT_11277a75c;
    uVar4 = *(undefined8 *)(param_1 + lVar11);
    *(undefined **)(param_1 + lVar11) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126c3e40;
    func_0x00010beed0e0(PTR_PTR_1126c3e40,param_2,&PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11277a760;
    puVar7 = *(undefined **)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
  }
  else {
    puVar7 = puVar1;
    func_0x000108cd472c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beed120(puVar2,param_2,&PTR____CFConstantStringClassReference_110ef1938,puVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_11277a750;
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar7);
    puVar2 = PTR_PTR_1126c3e40;
    func_0x000108cd4744();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beed120(puVar2,param_2,&PTR____CFConstantStringClassReference_110ef1978,puVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_11277a754;
    uVar4 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar7);
    puVar2 = PTR_PTR_1126c3e40;
    func_0x000108cd475c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beed120(puVar2,param_2,&PTR____CFConstantStringClassReference_110ef19d8,puVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_11277a758;
    uVar4 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar7);
    puVar2 = PTR_PTR_1126c3e40;
    func_0x000108cd47d4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beed120(puVar2,param_2,&PTR____CFConstantStringClassReference_110ef19f8,puVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = (long)_DAT_11277a75c;
    uVar4 = *(undefined8 *)(param_1 + lVar11);
    *(undefined **)(param_1 + lVar11) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar7);
    puVar2 = PTR_PTR_1126c3e40;
    func_0x000108cd4774();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beed120(puVar2,param_2,&PTR____CFConstantStringClassReference_110daafd8,puVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11277a760;
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(puVar7);
  puVar2 = PTR_PTR_1126c3e40;
  func_0x000108cd4804();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  func_0x000108cd481c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beed140(puVar2,param_2,&PTR____CFConstantStringClassReference_110ef1998,puVar7,puVar3,
                      param_3 != 0);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11277a764;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar7);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar8),param_2,
                      &PTR____CFConstantStringClassReference_110f03218);
  func_0x00010befbd40(*(undefined8 *)(param_1 + lVar8),param_2,param_1,
                      PTR_s__alignmentPressed_11253cd18);
  func_0x00010befa120(puVar1,param_2,*(undefined8 *)(param_1 + lVar8));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar9),param_2,
                      &PTR____CFConstantStringClassReference_110f03258);
  func_0x00010befbd40(*(undefined8 *)(param_1 + lVar9),param_2,param_1,
                      PTR_s__backgroundPressed_11253cd20);
  *(undefined8 *)(param_1 + _DAT_11277a770) = 0;
  func_0x00010befa120(puVar1,param_2,*(undefined8 *)(param_1 + lVar9));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar10),param_2,
                      &PTR____CFConstantStringClassReference_110f03238);
  func_0x00010befbd40(*(undefined8 *)(param_1 + lVar10),param_2,param_1,
                      PTR_s__durationPressed_11253cd28);
  func_0x00010befa120(puVar1,param_2,*(undefined8 *)(param_1 + lVar10));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar11),param_2,
                      &PTR____CFConstantStringClassReference_110f032b8);
  func_0x00010befbd40(*(undefined8 *)(param_1 + lVar11),param_2,param_1,
                      PTR_s__textToSpeechPressed_11253cd30);
  func_0x00010befa120(puVar1,param_2,*(undefined8 *)(param_1 + lVar11));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar5),param_2,
                      &PTR____CFConstantStringClassReference_110f03318);
  func_0x00010c1aa420(0x4030000000000000,0x4030000000000000,*(undefined8 *)(param_1 + lVar5));
  func_0x00010befbd40(*(undefined8 *)(param_1 + lVar5),param_2,param_1,
                      PTR_s__customojiPressed_11253cd38);
  func_0x00010bdcdfc0(param_1);
  func_0x00010befa120(puVar1,param_2,*(undefined8 *)(param_1 + lVar5));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar6),param_2,
                      &PTR____CFConstantStringClassReference_110f032d8);
  func_0x00010befbd40(*(undefined8 *)(param_1 + lVar6),param_2,param_1,
                      PTR_s__magicCaptionPressed_11253cd40);
  func_0x00010befa120(puVar1,param_2,*(undefined8 *)(param_1 + lVar6));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ccb790; end: 108ccb7c7; -[SCPreviewCaptionToolBarButtonItem _alignmentPressed] */

void FUN_108ccb790(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf30780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ccb7c8; end: 108ccb7ff; -[SCPreviewCaptionToolBarButtonItem _durationPressed] */

void FUN_108ccb7c8(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf30720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ccb800; end: 108ccb837; -[SCPreviewCaptionToolBarButtonItem _textToSpeechPressed] */

void FUN_108ccb800(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf30760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ccb838; end: 108ccb86f; -[SCPreviewCaptionToolBarButtonItem _backgroundPressed] */

void FUN_108ccb838(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf306e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ccb870; end: 108ccb8a7; -[SCPreviewCaptionToolBarButtonItem _magicCaptionPressed] */

void FUN_108ccb870(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf30740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ccb8a8; end: 108ccb8f3; -[SCPreviewCaptionToolBarButtonItem _customojiPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccb8a8(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11277a77c) & 1) != 0) {
    return;
  }
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf30700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ccb8f4; end: 108ccb913; -[SCPreviewCaptionToolBarButtonItem delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccb8f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277a780);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ccb914; end: 108ccb927; -[SCPreviewCaptionToolBarButtonItem setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccb914(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277a780,param_3);
  return;
}



/* Entry: 108ccb928; end: 108ccb937; -[SCPreviewCaptionToolBarButtonItem backgroundButtonType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ccb928(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a770);
}



/* Entry: 108ccb938; end: 108ccba23; -[SCPreviewCaptionToolBarButtonItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccb938(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277a780);
  _objc_storeStrong(param_1 + _DAT_11277a778,0);
  _objc_storeStrong(param_1 + _DAT_11277a774,0);
  _objc_storeStrong(param_1 + _DAT_11277a760,0);
  _objc_storeStrong(param_1 + _DAT_11277a784,0);
  _objc_storeStrong(param_1 + _DAT_11277a764,0);
  _objc_storeStrong(param_1 + _DAT_11277a75c,0);
  _objc_storeStrong(param_1 + _DAT_11277a754,0);
  _objc_storeStrong(param_1 + _DAT_11277a758,0);
  _objc_storeStrong(param_1 + _DAT_11277a750,0);
  _objc_storeStrong(param_1 + _DAT_11277a76c,0);
  _objc_storeStrong(param_1 + _DAT_11277a788,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277a768,0);
  return;
}



/* Entry: 108ccba24; end: 108ccbb7b; -[SCPreviewDrawingToolBarButtonItem initWithBarButtonItemType:iconStyle:target:selector:initialColorPickerColor:colorPickerPaletteType:needEmojiBrushOnboardingAnimation:emojiBrushDisplayList:emojiBrushExtendList:interactionStateLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108ccba24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126fe340;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithBarButtonItemType_iconSt_1125db448,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277a78c) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277a790) = param_9;
    lVar3 = (long)_DAT_11277a794;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11277a798;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11277a79c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277a7a0) = param_8;
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11277a7a4),param_13);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 108ccbb7c; end: 108ccbe93; -[SCPreviewDrawingToolBarButtonItem setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccbb7c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_1 + _DAT_11277a7a4;
  _objc_loadWeakRetained();
  iVar4 = (int)param_3;
  if (iVar4 == 0) {
    func_0x00010c292040(lVar5);
  }
  else {
    func_0x00010c293a40(lVar5);
  }
  _objc_release(lVar5);
  puStack_48 = PTR_PTR_1126fe340;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_setSelected__11265c598);
  if (iVar4 == 0) {
    func_0x00010be85ae0();
  }
  else {
    lVar5 = param_1;
    func_0x00010c08e380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) {
      puVar1 = PTR_PTR_1126c3e40;
      func_0x00010beed0e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)_DAT_11277a7a8;
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar1;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c160fc0(uVar3);
      func_0x000108edefd8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161020(*(undefined8 *)(param_1 + lVar5));
      _objc_release(uVar3);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5));
      func_0x00010befbd40(*(undefined8 *)(param_1 + lVar5));
      uStack_40 = *(undefined8 *)(param_1 + lVar5);
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      param_3 = puVar1;
      func_0x00010c1ba120(param_1);
      _objc_release(puVar1);
    }
    lVar5 = param_1;
    func_0x00010bf1ff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beaeaa0(param_1);
      func_0x00010befa120(puVar1);
      lVar5 = *(long *)(param_1 + _DAT_11277a794);
      func_0x00010bf529e0();
      if (lVar5 != 0) {
        lVar5 = *(long *)(param_1 + _DAT_11277a798);
        func_0x00010bf529e0();
        if (lVar5 != 0) {
          puVar2 = PTR_PTR_1126dba68;
          _objc_alloc();
          func_0x00010c00f660();
          lVar5 = (long)_DAT_11277a7b4;
          uVar3 = *(undefined8 *)(param_1 + lVar5);
          *(undefined **)(param_1 + lVar5) = puVar2;
          _objc_release(uVar3);
          func_0x00010c23d620(*(undefined8 *)(param_1 + lVar5));
          uVar3 = *(undefined8 *)(param_1 + lVar5);
          func_0x00010c160fc0(uVar3);
          func_0x000108ede870();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c161020(*(undefined8 *)(param_1 + lVar5));
          _objc_release(uVar3);
          func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5));
          func_0x00010c2226a0(*(undefined8 *)(param_1 + lVar5));
          func_0x00010befa120(puVar1);
        }
      }
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a0c0();
      _objc_retainAutoreleasedReturnValue();
      param_3 = puVar2;
      func_0x00010c1734c0(param_1);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    func_0x00010bed72e0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11277a7b8;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  func_0x00010c284660(*(undefined8 *)(param_1 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ccbe94; end: 108ccbf03; -[SCPreviewDrawingToolBarButtonItem setDrawingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccbe94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11277a7b8;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c284660(*(undefined8 *)(param_1 + lVar2),param_2,
                      *(undefined8 *)(param_1 + _DAT_11277a79c));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ccbf04; end: 108ccbf13; -[SCPreviewDrawingToolBarButtonItem setUndoButtonEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccbf04(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277a7ac) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bee2cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateUndoButtonStatus_1125964e0);
  return;
}



/* Entry: 108ccbf14; end: 108ccc02f; -[SCPreviewDrawingToolBarButtonItem _updateUndoButtonStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccbf14(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = *(long *)(param_1 + _DAT_11277a7b8);
  func_0x00010c25dbe0();
  lVar6 = (long)_DAT_11277a7ac;
  *(bool *)(param_1 + lVar6) = 0 < lVar2;
  iVar1 = _DAT_11277a7a8;
  if (*(long *)(param_1 + _DAT_11277a78c) == 0) {
    lVar7 = (long)_DAT_11277a7a8;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar7),param_2,lVar2 < 1);
    uVar5 = *(undefined1 *)(param_1 + lVar6);
    uVar3 = *(undefined8 *)(param_1 + lVar7);
  }
  else {
    lVar6 = (long)_DAT_11277a7a8;
    if (lVar2 < 1) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6),param_2,1);
      func_0x00010c21e900(*(undefined8 *)(param_1 + lVar6),param_2,0);
      goto LAB_108ccbff8;
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6),param_2,0);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    uVar5 = 1;
  }
  func_0x00010c21e900(uVar3,param_2,uVar5);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ef1a58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + iVar1),param_2,puVar4);
  _objc_release(puVar4);
LAB_108ccbff8:
  func_0x00010c084240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ccc030; end: 108ccc0bf; -[SCPreviewDrawingToolBarButtonItem selectItemAnimationFinished] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccc030(long param_1)

{
  long lVar1;
  
  if ((*(char *)(param_1 + _DAT_11277a790) == '\x01') &&
     (lVar1 = (long)_DAT_11277a7b4, *(long *)(param_1 + lVar1) != 0)) {
    *(undefined1 *)(param_1 + _DAT_11277a790) = 0;
    func_0x00010bf02f60(*(undefined8 *)(param_1 + lVar1));
    lVar1 = param_1 + _DAT_11277a7bc;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf8a120();
    _objc_release(lVar1);
  }
  param_1 = param_1 + _DAT_11277a7a4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c292100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ccc0c0; end: 108ccc133; -[SCPreviewDrawingToolBarButtonItem parentToolbarBecameEnabled:] */

void FUN_108ccc0c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe340;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_parentToolbarBecameEnabled__11253cd68);
  uVar1 = param_1;
  func_0x00010c07d660();
  if ((int)uVar1 != 0) {
    func_0x00010bf8a2c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 108ccc134; end: 108ccc1bf; -[SCPreviewDrawingToolBarButtonItem _undoPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccc134(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_11277a78c) != 0) {
    return;
  }
  func_0x00010c27f920(*(undefined8 *)(param_1 + _DAT_11277a7b8));
  lVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8a100();
  _objc_release(lVar1);
  func_0x00010bee2ce0(param_1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8a180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ccc1c0; end: 108ccc25b; -[SCPreviewDrawingToolBarButtonItem _updateDrawingMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccc1c0(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_11277a78c) == 0) {
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8a0e0();
    _objc_release(lVar1);
    if (*(long *)(param_1 + _DAT_11277a79c) == 0) {
      if (*(long *)(param_1 + _DAT_11277a7c0) != 0) {
        func_0x00010c285760(*(undefined8 *)(param_1 + _DAT_11277a7b8));
      }
    }
    else {
      func_0x00010c284660(*(undefined8 *)(param_1 + _DAT_11277a7b8));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bee2cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateUndoButtonStatus_1125964e0);
  return;
}


