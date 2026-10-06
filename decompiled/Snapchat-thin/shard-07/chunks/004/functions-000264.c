/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054ca160; end: 1054ca19f; -[SCCameraTimelineModeConfigurationImpl promotionEnabled] */

undefined8 FUN_1054ca160(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfaae40();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054ca1a0; end: 1054ca1df; -[SCCameraTimelineModeConfigurationImpl previewTooltipActivationInterval] */

undefined8 FUN_1054ca1a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfaae00();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054ca1e0; end: 1054ca21f; -[SCCameraTimelineModeConfigurationImpl previewTooltipRepeatInterval] */

undefined8 FUN_1054ca1e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfaae20();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054ca220; end: 1054ca227; -[SCCameraTimelineModeConfigurationImpl enableExtendedScrollingForPreviewThumbnails] */

undefined8 FUN_1054ca220(void)

{
  return 0;
}



/* Entry: 1054ca228; end: 1054ca267; -[SCCameraTimelineModeConfigurationImpl timelineCameraRollImportWithContentManagerEnabled] */

undefined8 FUN_1054ca228(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfaade0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054ca268; end: 1054ca26f; -[SCCameraTimelineModeConfigurationImpl activated] */

undefined1 FUN_1054ca268(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 1054ca270; end: 1054ca277; -[SCCameraTimelineModeConfigurationImpl setActivated:] */

void FUN_1054ca270(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1054ca278; end: 1054ca283; -[SCCameraTimelineModeConfigurationImpl .cxx_destruct] */

void FUN_1054ca278(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054ca284; end: 1054ca28b; -[SCCameraTimerCountdownHideNgsBarConfigurationImpl hideNgsBar] */

undefined8 FUN_1054ca284(void)

{
  return 0;
}



/* Entry: 1054ca28c; end: 1054ca357; -[SCCameraCaptureUltraWideConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1054ca28c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e89a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c067f00();
    *(long *)((long)puVar1 + 0x10) = (long)(int)uVar4;
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054ca358; end: 1054ca373; -[SCCameraCaptureUltraWideConfigurationImpl enabled] */

bool FUN_1054ca358(long param_1)

{
  func_0x00010c27f0a0();
  return param_1 != 0;
}



/* Entry: 1054ca374; end: 1054ca3a7; -[SCCameraCaptureUltraWideConfigurationImpl enabledAsDefaultCamera] */

void FUN_1054ca374(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf926c0();
  if ((int)uVar1 != 0) {
    func_0x00010c27f0a0(param_1);
  }
  return;
}



/* Entry: 1054ca3a8; end: 1054ca3f7; -[SCCameraCaptureUltraWideConfigurationImpl enabledAsCameraMode] */

bool FUN_1054ca3a8(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c27f0a0();
  if ((lVar2 == 2) || (lVar2 = param_1, func_0x00010c27f0a0(), lVar2 == 3)) {
    bVar1 = true;
  }
  else {
    func_0x00010c27f0a0(param_1);
    bVar1 = param_1 == 4;
  }
  return bVar1;
}



/* Entry: 1054ca3f8; end: 1054ca42b; -[SCCameraCaptureUltraWideConfigurationImpl shouldShowDirectorModeActivationButton] */

undefined8 FUN_1054ca3f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c27f0a0();
  if (lVar1 != 2) {
    func_0x00010c27f0a0(param_1);
  }
  return 0;
}



/* Entry: 1054ca42c; end: 1054ca49f; -[SCCameraCaptureUltraWideConfigurationImpl ultraWideCameraStyle] */

undefined8 FUN_1054ca42c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1054ca4a0;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc698 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136bc698,&puStack_38);
  }
  return uRam00000001136bc690;
}



/* Entry: 1054ca4a0; end: 1054ca523;  */

void FUN_1054ca4a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001091a2608();
  if (lVar1 < 3) {
    if (lVar1 == 0) {
      uRam00000001136bc690 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
      return;
    }
    if (lVar1 == 2) {
      uRam00000001136bc690 = 1;
      return;
    }
  }
  else {
    if (lVar1 == 3) {
      uRam00000001136bc690 = 2;
      return;
    }
    if (lVar1 == 4) {
      uRam00000001136bc690 = 3;
      return;
    }
    if (lVar1 == 5) {
      uRam00000001136bc690 = 4;
      return;
    }
  }
  uRam00000001136bc690 = 0;
  return;
}



/* Entry: 1054ca524; end: 1054ca52f; -[SCCameraCaptureUltraWideConfigurationImpl .cxx_destruct] */

void FUN_1054ca524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054ca530; end: 1054ca64b; -[SCCameraUltraWideRedesignConfigurationImpl initWithCircumstanceEngine:] */

undefined8 * FUN_1054ca530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e89a8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_48,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1054ca64c; end: 1054ca68b;  */

void FUN_1054ca64c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be151e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1054ca68c; end: 1054ca76b; -[SCCameraUltraWideRedesignConfigurationImpl _fetchUltraWideRedesignConfig] */

void FUN_1054ca68c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1195e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126b9ca0;
  _objc_alloc(PTR_PTR_1126b9ca0);
  func_0x00010c008360();
  _objc_retain(puVar5);
  _objc_release(puVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1054ca76c; end: 1054ca7df; -[SCCameraUltraWideRedesignConfigurationImpl enableZoomIndicatorView] */

undefined1 FUN_1054ca76c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1054ca7e0;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc6a8 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136bc6a8,&puStack_38);
  }
  return uRam00000001136bc6a0;
}



/* Entry: 1054ca7e0; end: 1054ca81f;  */

void FUN_1054ca7e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf926a0();
  uRam00000001136bc6a0 = (undefined1)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054ca820; end: 1054ca8b3; -[SCCameraUltraWideRedesignConfigurationImpl buttonType] */

undefined1 FUN_1054ca820(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = 0x110bfea8;
  func_0x00010c067fc0();
  if (iVar3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2bf1e0();
    iVar3 = (int)uVar2;
    _objc_release(uVar1);
  }
  if (iVar3 < 2) {
    if ((iVar3 != -0x4524111) && (iVar3 != 0)) {
      return false;
    }
  }
  else if (iVar3 != 3) {
    return iVar3 == 2;
  }
  return 2;
}



/* Entry: 1054ca8b4; end: 1054ca8e3; -[SCCameraUltraWideRedesignConfigurationImpl .cxx_destruct] */

void FUN_1054ca8b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054ca8e4; end: 1054ca97b; -[SCCameraVerticalToolbarConfigurationImpl fixedTopCameraModesForNonMainCameras] */

void FUN_1054ca8e4(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_1126b9cb0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23c920(puVar4,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_11117ec10;
  if ((int)puVar4 == 0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_11117ec28;
  }
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ca97c; end: 1054ca98f; -[SCCameraVerticalToolbarConfigurationImpl fixedTopLensActiveCameraModesForMainCamera] */

void FUN_1054ca97c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c225c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSSet_1126ae870,PTR_s_setWithArray__112667130,
             &PTR__OBJC_CLASS___NSConstantArray_11117ec40);
  return;
}



/* Entry: 1054ca990; end: 1054ca9a3; -[SCCameraVerticalToolbarConfigurationImpl fixedTopLensActiveCameraModesForNonMainCameras] */

void FUN_1054ca990(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c225c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSSet_1126ae870,PTR_s_setWithArray__112667130,
             &PTR__OBJC_CLASS___NSConstantArray_11117ec58);
  return;
}



/* Entry: 1054ca9a4; end: 1054caa1f; -[SCCameraVerticalToolbarConfigurationImpl setLabelsShownFor:] */

void FUN_1054ca9a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3,param_2,puVar1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054caa20; end: 1054caa7f; -[SCCameraVerticalToolbarConfigurationImpl didShowLabelsFor:] */

bool FUN_1054caa20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  return lVar2 != 0;
}



/* Entry: 1054caa80; end: 1054caab7; -[SCCameraVerticalToolbarConfigurationImpl .cxx_destruct] */

void FUN_1054caa80(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054caab8; end: 1054cab2b; -[SCCameraVideoHEVCEncoderConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1054caab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e89b8;
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



/* Entry: 1054cab2c; end: 1054cab73; -[SCCameraVideoHEVCEncoderConfigurationImpl bitrateLadderConfig] */

void FUN_1054cab2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa5840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054cab74; end: 1054cabbb; -[SCCameraVideoHEVCEncoderConfigurationImpl bitrateLadderConfigForHDMode] */

void FUN_1054cab74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa5860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054cabbc; end: 1054cabc7; -[SCCameraVideoHEVCEncoderConfigurationImpl .cxx_destruct] */

void FUN_1054cabbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054cabc8; end: 1054cac6f; -[SCCameraVolumeButtonCaptureConfigurationImpl allowVolumeButtonCaptureDuringOtherAppPlaying] */

undefined1 FUN_1054cabc8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x1054cac3c;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc6d0 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136bc6d0,&puStack_38);
  }
  return uRam00000001136bc6c1;
}



/* Entry: 1054cac70; end: 1054cac9f; -[SCCameraVolumeButtonCaptureConfigurationImpl .cxx_destruct] */

void FUN_1054cac70(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054caca0; end: 1054cacf3;  */

bool FUN_1054caca0(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 1054cacf4; end: 1054cad6f;  */

undefined * FUN_1054cacf4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bc728 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110de5a78,
                        &UNK_10ddb0aec,&UNK_10ddb0b40,4,FUN_1054cad70,0);
    do {
      if (puRam00000001136bc728 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bc728;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bc728,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bc728 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bc728;
}



/* Entry: 1054cad70; end: 1054cad7b;  */

bool FUN_1054cad70(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1054cad7c; end: 1054cade3; +[SCCameraPostModeConfig descriptor] */

void FUN_1054cad7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc730 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3fe70,
                        &PTR____CFConstantStringClassReference_110de5a98,
                        &PTR_s_snapchat_camera_1130df808,&PTR_DAT_1130df820,6,8,0x1c);
    puRam00000001136bc730 = puVar1;
  }
  return;
}



/* Entry: 1054cade4; end: 1054cae4b; +[SCCameraFrameRateRelaxationConfig descriptor] */

void FUN_1054cade4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc738 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3ff10,
                        &PTR____CFConstantStringClassReference_110de5ab8,
                        &PTR_s_snapchat_camera_1130df8e0,&PTR_s_enabled_1130df8f8,7,0x1c,0x1c);
    puRam00000001136bc738 = puVar1;
  }
  return;
}



/* Entry: 1054cae4c; end: 1054caec7; +[DirectorModeGrowthEntryPointConfig descriptor] */

undefined * FUN_1054cae4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc740 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3ffb0,
                        &PTR____CFConstantStringClassReference_110de5ad8,
                        &PTR_s_snapchat_camera_1130df9d8,&PTR_DAT_1130df9f0,3,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bc740 = puVar1;
  }
  return puRam00000001136bc740;
}



/* Entry: 1054caec8; end: 1054caed3;  */

bool FUN_1054caec8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1054caed4; end: 1054cafcb; +[MediaQualitySurveyEntryPointConfig descriptor] */

undefined * FUN_1054caed4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc758 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a400f0,
                        &PTR____CFConstantStringClassReference_110de5b38,
                        &PTR_s_snapchat_camera_1130dfc08,&PTR_DAT_1130dfc20,4,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bc758 = puVar1;
  }
  return puRam00000001136bc758;
}



/* Entry: 1054cafcc; end: 1054cafd7;  */

bool FUN_1054cafcc(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1054cafd8; end: 1054cb03f; +[PreviewLabelsConfig descriptor] */

void FUN_1054cafd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc768 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a40190,
                        &PTR____CFConstantStringClassReference_110de5b78,
                        &PTR_s_snapchat_camera_1130dfca0,&PTR_DAT_1130dfcb8,5,0x10,0x1c);
    puRam00000001136bc768 = puVar1;
  }
  return;
}



/* Entry: 1054cb040; end: 1054cb057;  */

bool FUN_1054cb040(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 1054cb058; end: 1054cb0d3;  */

undefined * FUN_1054cb058(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bc790 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110de5c18,
                        &UNK_10ddb0d40,&UNK_10ddb0d98,4,FUN_1054cb0d4,0);
    do {
      if (puRam00000001136bc790 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bc790;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bc790,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bc790 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bc790;
}



/* Entry: 1054cb0d4; end: 1054cb0df;  */

bool FUN_1054cb0d4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1054cb0e0; end: 1054cb1a3; +[UltraWideRedesignConfig descriptor] */

void FUN_1054cb0e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc798 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a40370,
                        &PTR____CFConstantStringClassReference_110de5c38,
                        &PTR_s_snapchat_camera_1130dff48,&PTR_DAT_1130dff60,3,8,0x1c);
    puRam00000001136bc798 = puVar1;
  }
  return;
}



/* Entry: 1054cb1a4; end: 1054cb223;  */

void FUN_1054cb1a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR_PTR_1126b9cc0;
  _objc_alloc(PTR_PTR_1126b9cc0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c252360(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffb800(puVar4,param_2,uVar1,uVar3,uVar2,uVar5,*(undefined8 *)(param_1 + 0x40));
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1054cb224; end: 1054cb28b;  */

void FUN_1054cb224(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b9cc8;
  _objc_alloc(PTR_PTR_1126b9cc8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1cf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffbf20(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054cb28c; end: 1054cb377;  */

void FUN_1054cb28c(void)

{
  _objc_alloc(PTR_PTR_1126b9cd0);
  func_0x00010bffbf60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054cb378; end: 1054cb41b;  */

void FUN_1054cb378(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b9cf8;
  _objc_alloc(PTR_PTR_1126b9cf8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1cf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf29960(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf30c00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8620(puVar1,param_2,uVar2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054cb41c; end: 1054cb4b3; -[SCCameraFeatureLoggingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054cb41c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127244f8);
  _objc_destroyWeak(param_1 + _DAT_1127244f4);
  _objc_destroyWeak(param_1 + _DAT_1127244f0);
  _objc_destroyWeak(param_1 + _DAT_1127244ec);
  _objc_destroyWeak(param_1 + _DAT_1127244e8);
  _objc_destroyWeak(param_1 + _DAT_1127244e4);
  _objc_destroyWeak(param_1 + _DAT_1127244e0);
  _objc_destroyWeak(param_1 + _DAT_1127244dc);
  _objc_destroyWeak(param_1 + _DAT_1127244d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127244d4);
  return;
}



/* Entry: 1054cb4b4; end: 1054cb4ff; -[SCCameraFeaturePerformanceFeatureScopedLoggerFactoryImpl .cxx_destruct] */

void FUN_1054cb4b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054cb500; end: 1054cb543; -[SCCameraFeaturePerformanceLoggerFactoryImpl .cxx_destruct] */

void FUN_1054cb500(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054cb544; end: 1054cb633; -[SCCameraUserLoggingEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054cb544(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  lVar4 = (long)_DAT_11272452c;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf1cfc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1405c0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar4 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar4);
  lVar1 = lVar4;
  func_0x00010bf1cfc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99620();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  puStack_48 = PTR_PTR_1126e89d8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054cb634; end: 1054cb693; -[SCCameraUserLoggingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054cb634(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112724528,0);
  _objc_destroyWeak(param_1 + _DAT_11272452c);
  _objc_destroyWeak(param_1 + _DAT_112724538);
  _objc_destroyWeak(param_1 + _DAT_112724534);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112724530);
  return;
}



/* Entry: 1054cb694; end: 1054cb6db; -[SCCameraLoggingQueueImpl activate] */

void FUN_1054cb694(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _dispatch_resume();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054cb6dc; end: 1054cb723; -[SCCameraLoggingQueueImpl deactivate] */

void FUN_1054cb6dc(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11de00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_suspend();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1054cb724; end: 1054cb72f;  */

void FUN_1054cb724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001054cb72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1054cb730; end: 1054cb73b; -[SCCameraLoggingQueueImpl .cxx_destruct] */

void FUN_1054cb730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054cb73c; end: 1054cb833; -[SCCameraSystemBlizzardLogger logUserNotTrackedEvent:] */

void FUN_1054cb73c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c142ac0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054cb834; end: 1054cb8eb;  */

void FUN_1054cb834(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2b40();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054cb8ec; end: 1054cb91b; -[SCCameraSystemBlizzardLogger .cxx_destruct] */

void FUN_1054cb8ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054cb91c; end: 1054cb977;  */

void FUN_1054cb91c(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054cb978; end: 1054cb97f; -[SCCameraUserBlizzardLogger willLogEventsOfType:] */

undefined8 FUN_1054cb978(void)

{
  return 0;
}



/* Entry: 1054cb980; end: 1054cb9db;  */

void FUN_1054cb980(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24eb80();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054cb9dc; end: 1054cbab3; -[SCCameraUserBlizzardLogger endFeatureSession:] */

void FUN_1054cb9dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c142ac0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1054cbab4; end: 1054cbb0f;  */

void FUN_1054cbab4(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf948e0();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054cbb10; end: 1054cbb3f; -[SCCameraUserBlizzardLogger .cxx_destruct] */

void FUN_1054cbb10(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054cbb40; end: 1054cbbb3; -[SCCameraPerfLogger initWithQueue:] */

undefined1 * FUN_1054cbb40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e89f8;
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



/* Entry: 1054cbbb4; end: 1054cbbb7; -[SCCameraPerfLogger logLatencyMetricWithEventName:metricValue:params:] */

void FUN_1054cbbb4(void)

{
  return;
}



/* Entry: 1054cbbb8; end: 1054cbbc3; -[SCCameraPerfLogger .cxx_destruct] */

void FUN_1054cbbb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054cbbc4; end: 1054cbbeb;  */

void FUN_1054cbbc4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054cbbec; end: 1054cbc0b; -[SCCameraCaptureRequestHandlerEntryPoint applicationCircumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054cbbec(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112724574);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054cbc0c; end: 1054cbc1f; -[SCCameraCaptureRequestHandlerEntryPoint setApplicationCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054cbc0c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112724574,param_3);
  return;
}



/* Entry: 1054cbc20; end: 1054cbcd3; -[SCCameraCaptureRequestHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054cbc20(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112724558,0);
  _objc_destroyWeak(param_1 + _DAT_112724578);
  _objc_destroyWeak(param_1 + _DAT_11272456c);
  _objc_destroyWeak(param_1 + _DAT_112724568);
  _objc_destroyWeak(param_1 + _DAT_112724584);
  _objc_destroyWeak(param_1 + _DAT_112724570);
  _objc_destroyWeak(param_1 + _DAT_112724560);
  _objc_destroyWeak(param_1 + _DAT_112724564);
  _objc_destroyWeak(param_1 + _DAT_112724574);
  _objc_destroyWeak(param_1 + _DAT_112724580);
  _objc_destroyWeak(param_1 + _DAT_11272455c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272457c);
  return;
}



/* Entry: 1054cbcd4; end: 1054cbceb;  */

void FUN_1054cbcd4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1054cbcec; end: 1054cc043;  */

void FUN_1054cbcec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b9d58;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  lVar2 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffb4a0();
  _objc_release(param_3);
  _objc_release(param_2);
  lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar1;
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1054cc044; end: 1054cc0f7; -[SCCameraCaptureOperationFactory .cxx_destruct] */

void FUN_1054cc044(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1054cc0f8; end: 1054cc11f; -[SCCameraCaptureRequestHandler updates] */

void FUN_1054cc0f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054cc120; end: 1054cc137;  */

void FUN_1054cc120(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1054cc138; end: 1054cc19f;  */

void FUN_1054cc138(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054cc1a0; end: 1054cc313; -[SCCameraCaptureRequestHandler canStartCaptureOperation:] */

undefined1 * FUN_1054cc1a0(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  uVar7 = *(ulong *)(param_1 + 0x20);
  puVar1 = param_3;
  func_0x00010c27dd80();
  if (((ulong)puVar1 & uVar7) == 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    puVar1 = param_3;
    func_0x00010bf9c3a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      lVar8 = *plStack_120;
      do {
        puVar6 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(puVar1);
          }
          uVar7 = *(ulong *)(lStack_128 + (long)puVar6 * 8);
          puVar3 = param_1;
          func_0x00010c088a80();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = (undefined8 *)puVar3;
          func_0x00010c071ae0();
          _objc_release(puVar3);
          if ((uVar7 & 1) != 0) {
            puVar6 = (undefined1 *)0x1;
            goto LAB_1054cc2c4;
          }
          puVar6 = puVar6 + 1;
        } while (puVar2 != puVar6);
        puVar2 = puVar1;
        puVar4 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined1 *)0x0);
    }
    puVar6 = (undefined1 *)0x0;
LAB_1054cc2c4:
    _objc_release(puVar1);
  }
  else {
    puVar6 = (undefined1 *)0x0;
    puVar4 = (undefined8 *)puVar2;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar1 = (undefined1 *)puVar4;
  func_0x00010c27dd80();
  uVar7 = *(ulong *)(param_3 + 0x20);
  *(undefined1 **)(param_3 + 0x20) = (undefined1 *)(uVar7 | (ulong)puVar1);
  puVar2 = (undefined1 *)puVar4;
  func_0x00010c27dd80();
  _objc_release(puVar4);
  if ((undefined1 *)(uVar7 | (ulong)puVar1) == puVar2) {
    puVar5 = PTR_PTR_1126b9d70;
    func_0x00010bf728a0(PTR_PTR_1126b9d70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b7be0(param_3,param_2,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return puVar5;
  }
  return (undefined1 *)puVar4;
}



/* Entry: 1054cc314; end: 1054cc3ab; -[SCCameraCaptureRequestHandler willStartCaptureOperation:] */

void FUN_1054cc314(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c27dd80();
  uVar3 = *(ulong *)(param_1 + 0x20) | uVar3;
  *(ulong *)(param_1 + 0x20) = uVar3;
  uVar1 = param_3;
  func_0x00010c27dd80();
  _objc_release(param_3);
  if (uVar3 == uVar1) {
    puVar2 = PTR_PTR_1126b9d70;
    func_0x00010bf728a0(PTR_PTR_1126b9d70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b7be0(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1054cc3ac; end: 1054cc413; -[SCCameraCaptureRequestHandler didFinishCaptureOperation:] */

void FUN_1054cc3ac(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  func_0x00010c27dd80();
  uVar1 = *(ulong *)(param_1 + 0x20) & (param_3 ^ 0xffffffffffffffff);
  *(ulong *)(param_1 + 0x20) = uVar1;
  if (uVar1 != 0) {
    return;
  }
  puVar2 = PTR_PTR_1126b9d70;
  func_0x00010bf728c0(PTR_PTR_1126b9d70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7be0(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054cc414; end: 1054cc43b; -[SCCameraCaptureRequestHandler lastEvent] */

void FUN_1054cc414(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054cc43c; end: 1054cc4a7; -[SCCameraCaptureRequestHandler .cxx_destruct] */

void FUN_1054cc43c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054cc4a8; end: 1054cc4bf;  */

void FUN_1054cc4a8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1054cc4c0; end: 1054cc533;  */

void FUN_1054cc4c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b9d88;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c00a9c0();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054cc534; end: 1054cc65f;  */

void FUN_1054cc534(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_x5;
  long lVar7;
  
  puVar1 = PTR_PTR_1126b9d90;
  _objc_retain(in_x5);
  _objc_alloc();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf29900();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06de60();
  func_0x00010c00a420();
  _objc_release(in_x5);
  lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar1;
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054cc660; end: 1054cc70f;  */

void FUN_1054cc660(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b9d98;
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00a980();
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054cc710; end: 1054cc76f;  */

void FUN_1054cc710(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b9da0;
  _objc_alloc();
  func_0x00010c00a960();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054cc770; end: 1054cc84b;  */

void FUN_1054cc770(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b9db0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00a720();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054cc84c; end: 1054cc8af;  */

void FUN_1054cc84c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b9db8;
  _objc_alloc();
  func_0x00010c00a9e0();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054cc8b0; end: 1054cc8b7;  */

void FUN_1054cc8b0(void)

{
  return;
}



/* Entry: 1054cc8b8; end: 1054cc953; -[SCCameraHardwareOperationFactory .cxx_destruct] */

void FUN_1054cc8b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 1054cc954; end: 1054cc95f; -[SCCameraHardwareRequestHandler _deactivateQueue] */

void FUN_1054cc954(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2104b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setSuspended__112661b50,1);
  return;
}


