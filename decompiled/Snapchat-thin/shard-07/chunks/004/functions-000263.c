/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054c892c; end: 1054c89db; -[SCCameraPostModeConfigurationImpl _fetchPostModeConfigWithProvider:] */

void FUN_1054c892c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c1195e0(param_3,param_2,&PTR____CFConstantStringClassReference_110de5758,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b9b40;
  _objc_alloc(PTR_PTR_1126b9b40);
  func_0x00010c008360();
  _objc_retain(puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054c89dc; end: 1054c8a1f; -[SCCameraPostModeConfigurationImpl dmImportSideButtonEnabled] */

undefined1 FUN_1054c89dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf87260();
  uRam00000001136bc600 = (undefined1)uVar2;
  _objc_release(uVar1);
  return uRam00000001136bc600;
}



/* Entry: 1054c8a20; end: 1054c8a63; -[SCCameraPostModeConfigurationImpl dmImportSideButtonEnabledOnStartup] */

undefined1 FUN_1054c8a20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf87280();
  uRam00000001136bc601 = (undefined1)uVar2;
  _objc_release(uVar1);
  return uRam00000001136bc601;
}



/* Entry: 1054c8a64; end: 1054c8adb; -[SCCameraPostModeConfigurationImpl lensIconStyle] */

undefined8 FUN_1054c8a64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = 0x110bfe90;
  func_0x00010c067fc0();
  if (uVar3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0944e0();
    uVar3 = (uint)uVar2;
    _objc_release(uVar1);
  }
  uVar2 = 1;
  if (uVar3 == 3) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (1 < uVar3 && uVar3 != 0xfbadbeef) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 1054c8adc; end: 1054c8b4b; -[SCCameraPostModeConfigurationImpl snapEditorPreviewEventCallbackEnabled] */

undefined8 FUN_1054c8adc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1054c8b4c; end: 1054c8b7b; -[SCCameraPostModeConfigurationImpl .cxx_destruct] */

void FUN_1054c8b4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c8b7c; end: 1054c8c67; -[SCCameraRecordingDurationConfigurationImpl regularVideoTimerModeMaxDuration] */

undefined8 FUN_1054c8b7c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000109127dd4();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uVar4 = 0x405e000000000000;
    func_0x000109127f48(0x405e000000000000,lVar2);
  }
  else {
    lVar3 = lVar2;
    func_0x000109127dd4();
    uVar5 = 0x4072c00000000000;
    if (lVar3 != 2) {
      uVar5 = 0x405e000000000000;
    }
    uVar4 = 0x4066800000000000;
    if (lVar3 != 1) {
      uVar4 = uVar5;
    }
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return uVar4;
}



/* Entry: 1054c8c68; end: 1054c8c6b; -[SCCameraRecordingDurationConfigurationImpl directorModeSegmentRecordingTime] */

void FUN_1054c8c68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c276a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_totalRecordingTimeForDirectorMod_11267b4a8);
  return;
}



/* Entry: 1054c8c6c; end: 1054c8cf7; -[SCCameraRecordingDurationConfigurationImpl totalRecordingTimeWithMultiSnapEnabled:] */

undefined8 FUN_1054c8c6c(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_4 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000109127dd4();
    uVar4 = 0x4072c00000000000;
    if (lVar3 != 2) {
      uVar4 = 0x405e000000000000;
    }
    uVar5 = 0x4066800000000000;
    if (lVar3 != 1) {
      uVar5 = uVar4;
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
    return uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1584d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_segmentRecordingTime_112633b50);
  return param_1;
}



/* Entry: 1054c8cf8; end: 1054c8d7b; -[SCCameraRecordingDurationConfigurationImpl totalRecordingTimeForDirectorMode] */

undefined8 FUN_1054c8cf8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000109127dd4();
  uVar4 = 0x4072c00000000000;
  if (lVar3 != 2) {
    uVar4 = 0x405e000000000000;
  }
  uVar5 = 0x4066800000000000;
  if (lVar3 != 1) {
    uVar5 = uVar4;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return uVar5;
}



/* Entry: 1054c8d7c; end: 1054c8d87; -[SCCameraRecordingDurationConfigurationImpl .cxx_destruct] */

void FUN_1054c8d7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c8d88; end: 1054c8e27; -[SCCameraRemixCamModeConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1054c8d88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e8958;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(&PTR____CFConstantStringClassReference_110f76b38);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined ***)((long)puVar1 + 0x18) = &PTR____CFConstantStringClassReference_110f76b38;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054c8e28; end: 1054c8ed3; -[SCCameraRemixCamModeConfigurationImpl setupCofValuesIfNeeded] */

void FUN_1054c8e28(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfa9be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_retain(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar2;
    _objc_release(uVar3);
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bfa9bc0();
  *(char *)(param_1 + 0x20) = (char)uVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1054c8ed4; end: 1054c8edf; -[SCCameraRemixCamModeConfigurationImpl isEnabledWithScopedCameraType:] */

bool FUN_1054c8ed4(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 8;
}



/* Entry: 1054c8ee0; end: 1054c8ee7; -[SCCameraRemixCamModeConfigurationImpl isFaceSwapEnabled] */

undefined1 FUN_1054c8ee0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 1054c8ee8; end: 1054c8ef3; -[SCCameraRemixCamModeConfigurationImpl cameraModeIdentifier] */

void FUN_1054c8ee8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c129630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b9b28,PTR_s_remixCameraMode_112627fa8);
  return;
}



/* Entry: 1054c8ef4; end: 1054c8f3b; -[SCCameraRemixCamModeConfigurationImpl cameraModeLensId] */

void FUN_1054c8ef4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  ppuVar1 = ppuVar2;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    func_0x00010c228660(param_1);
    ppuVar2 = *(undefined ***)(param_1 + 0x18);
    _objc_retain(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1054c8f3c; end: 1054c8f43; -[SCCameraRemixCamModeConfigurationImpl alwaysShowUserEducation] */

undefined8 FUN_1054c8f3c(void)

{
  return 0;
}



/* Entry: 1054c8f44; end: 1054c8f4b; -[SCCameraRemixCamModeConfigurationImpl userEducationEnabled] */

undefined8 FUN_1054c8f44(void)

{
  return 0;
}



/* Entry: 1054c8f4c; end: 1054c8f53; -[SCCameraRemixCamModeConfigurationImpl onboardingDialogGifDownloadableUrl] */

undefined8 FUN_1054c8f4c(void)

{
  return 0;
}



/* Entry: 1054c8f54; end: 1054c8f5b; -[SCCameraRemixCamModeConfigurationImpl onboardingDialogImageDownloadableUrl] */

undefined8 FUN_1054c8f54(void)

{
  return 0;
}



/* Entry: 1054c8f5c; end: 1054c8f8b; -[SCCameraRemixCamModeConfigurationImpl .cxx_destruct] */

void FUN_1054c8f5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c8f8c; end: 1054c8f93; -[SCCameraRingFlashWidgetConfigurationImpl expose] */

void FUN_1054c8f8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_expose_1125c4ec8);
  return;
}



/* Entry: 1054c8f94; end: 1054c9007; -[SCCameraRingFlashWidgetConfigurationImpl ringFlashDidChangeStatePerfOptimizationEnabled] */

undefined1 FUN_1054c8f94(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1054c9008;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc630 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136bc630,&puStack_38);
  }
  return uRam00000001136bc611;
}



/* Entry: 1054c9008; end: 1054c906f;  */

void FUN_1054c9008(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f440();
  uRam00000001136bc611 = (undefined1)uVar3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054c9070; end: 1054c90db; -[SCCameraRingFlashWidgetConfigurationImpl .cxx_destruct] */

void FUN_1054c9070(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c90dc; end: 1054c90f7;  */

void FUN_1054c90dc(void)

{
  _objc_alloc_init(PTR_PTR_1126b9b68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c90f8; end: 1054c9127;  */

void FUN_1054c90f8(void)

{
  _objc_alloc(PTR_PTR_1126b9b70);
  func_0x00010bffe1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c9128; end: 1054c9143;  */

void FUN_1054c9128(void)

{
  _objc_alloc_init(PTR_PTR_1126b9b78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c9144; end: 1054c9233;  */

void FUN_1054c9144(void)

{
  _objc_alloc(PTR_PTR_1126b9b88);
  func_0x00010bff3620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c9234; end: 1054c924f;  */

void FUN_1054c9234(void)

{
  _objc_alloc_init(PTR_PTR_1126b9bd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c9250; end: 1054c951b;  */

void FUN_1054c9250(void)

{
  _objc_alloc(PTR_PTR_1126b9be8);
  func_0x00010bffe1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c951c; end: 1054c9523; -[SCCameraConfigurationImpl timelineMode] */

undefined8 FUN_1054c951c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1054c9524; end: 1054c952b; -[SCCameraConfigurationImpl hideNgsBar] */

undefined8 FUN_1054c9524(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1054c952c; end: 1054c9533; -[SCCameraConfigurationImpl cropping] */

undefined8 FUN_1054c952c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1054c9534; end: 1054c953b; -[SCCameraConfigurationImpl snapRecovery] */

undefined8 FUN_1054c9534(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1054c953c; end: 1054c9543; -[SCCameraConfigurationImpl exposureBias] */

undefined8 FUN_1054c953c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1054c9544; end: 1054c954b; -[SCCameraConfigurationImpl blurryScoreConfig] */

undefined8 FUN_1054c9544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1054c954c; end: 1054c9553; -[SCCameraConfigurationImpl captureUltraWideConfig] */

undefined8 FUN_1054c954c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1054c9554; end: 1054c955b; -[SCCameraConfigurationImpl cameraSpeedModeConfig] */

undefined8 FUN_1054c9554(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1054c955c; end: 1054c9563; -[SCCameraConfigurationImpl frameRateRelaxationConfig] */

undefined8 FUN_1054c955c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1054c9564; end: 1054c956b; -[SCCameraConfigurationImpl videoHEVCEncoderConfig] */

undefined8 FUN_1054c9564(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 1054c956c; end: 1054c9573; -[SCCameraConfigurationImpl optimizedExposure] */

undefined8 FUN_1054c956c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 1054c9574; end: 1054c957b; -[SCCameraConfigurationImpl contextualSurveyPromptConfig] */

undefined8 FUN_1054c9574(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 1054c957c; end: 1054c9583; -[SCCameraConfigurationImpl directorModeVideoOptimizationConfig] */

undefined8 FUN_1054c957c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 1054c9584; end: 1054c958b; -[SCCameraConfigurationImpl previewLabelsConfig] */

undefined8 FUN_1054c9584(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 1054c958c; end: 1054c9593; -[SCCameraConfigurationImpl ultraWideRedesignConfig] */

undefined8 FUN_1054c958c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 1054c9594; end: 1054c959b; -[SCCameraConfigurationImpl closeupCaptureConfig] */

undefined8 FUN_1054c9594(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 1054c959c; end: 1054c95a3; -[SCCameraConfigurationImpl resolutionOptimizationConfig] */

undefined8 FUN_1054c959c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 1054c95a4; end: 1054c95ab; -[SCCameraConfigurationImpl postModeConfig] */

undefined8 FUN_1054c95a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 1054c95ac; end: 1054c95b3; -[SCCameraConfigurationImpl muteStateManagementConfig] */

undefined8 FUN_1054c95ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 1054c95b4; end: 1054c95bb; -[SCCameraConfigurationImpl imageDegradationLevelLoggerConfig] */

undefined8 FUN_1054c95b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 1054c95bc; end: 1054c95c3; -[SCCameraConfigurationImpl screenBrightnessHandlerConfig] */

undefined8 FUN_1054c95bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 1054c95c4; end: 1054c97bb; -[SCCameraConfigurationImpl .cxx_destruct] */

void FUN_1054c95c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
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



/* Entry: 1054c97bc; end: 1054c97fb; -[SCCameraSimpleUIFeatureGatingConfigurationImpl disableFixForDoubleLensEffects] */

undefined8 FUN_1054c97bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa65e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c97fc; end: 1054c9803; -[SCCameraSimpleUIFeatureGatingConfigurationImpl remixAsCameraModeEnabled] */

undefined8 FUN_1054c97fc(void)

{
  return 1;
}



/* Entry: 1054c9804; end: 1054c989b; -[SCCameraSimpleUIFeatureGatingConfigurationImpl isCaptureButtonBlockedWithSnapchatPlus] */

undefined8 FUN_1054c9804(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25d780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110de57f8);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 1054c989c; end: 1054c98cb; -[SCCameraSimpleUIFeatureGatingConfigurationImpl .cxx_destruct] */

void FUN_1054c989c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c98cc; end: 1054c993f; -[SCCameraScreenBrightnessHandlerConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1054c98cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8978;
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



/* Entry: 1054c9940; end: 1054c9987; -[SCCameraScreenBrightnessHandlerConfigurationImpl ringFlashPreviewBrightnessLevel] */

undefined8 FUN_1054c9940(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa9e20();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1054c9988; end: 1054c99cf; -[SCCameraScreenBrightnessHandlerConfigurationImpl regularFlashPreviewBrightnessLevel] */

undefined8 FUN_1054c9988(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa9ba0();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1054c99d0; end: 1054c99db; -[SCCameraScreenBrightnessHandlerConfigurationImpl .cxx_destruct] */

void FUN_1054c99d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c99dc; end: 1054c9a4b; -[SCCameraSelfieSettingsConfigurationImpl isUIV2Enabled] */

undefined8 FUN_1054c99dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1054c9a4c; end: 1054c9a63; -[SCCameraSelfieSettingsConfigurationImpl isCrashFuseEnabled] */

void FUN_1054c9a4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de5838,0,0);
  return;
}



/* Entry: 1054c9a64; end: 1054c9ad3; -[SCCameraSelfieSettingsConfigurationImpl shouldRestoreDisplacedFooterItem] */

undefined8 FUN_1054c9a64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1054c9ad4; end: 1054c9aeb; -[SCCameraSelfieSettingsConfigurationImpl isAIAutoApplyPaywallEnabled] */

void FUN_1054c9ad4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de5878,0,0);
  return;
}



/* Entry: 1054c9aec; end: 1054c9b83; -[SCCameraSelfieSettingsConfigurationImpl enableLensUpdateOptimizationCheck] */

undefined1 FUN_1054c9aec(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x1054c9b60;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc660 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136bc660,&puStack_38);
  }
  return uRam00000001136bc643;
}



/* Entry: 1054c9b84; end: 1054c9ba7; -[SCCameraSelfieSettingsConfigurationImpl isAutoApplyEnabled] */

undefined1 FUN_1054c9b84(long param_1)

{
  func_0x00010c228660();
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 1054c9ba8; end: 1054c9bff; -[SCCameraSelfieSettingsConfigurationImpl _isEnabledInChatCamera] */

uint FUN_1054c9ba8(undefined8 param_1)

{
  if (lRam00000001136bc670 != -1) {
    func_0x00010002a2fc(0x1136bc670,&PTR___NSConcreteGlobalBlock_110890698);
  }
  func_0x00010c071800(param_1);
  return (uint)param_1 & (uint)bRam00000001136bc645;
}



/* Entry: 1054c9c00; end: 1054c9c0f;  */

void FUN_1054c9c00(void)

{
  uRam00000001136bc645 = 1;
  return;
}



/* Entry: 1054c9c10; end: 1054c9c13; -[SCCameraSelfieSettingsConfigurationImpl _isEnabledInLiveLensPreviewCamera] */

void FUN_1054c9c10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isEnabled_1125fa010);
  return;
}



/* Entry: 1054c9c14; end: 1054c9cab; -[SCCameraSelfieSettingsConfigurationImpl disableOnDefaultSettings] */

undefined1 FUN_1054c9c14(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x1054c9c88;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc678 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136bc678,&puStack_38);
  }
  return uRam00000001136bc646;
}



/* Entry: 1054c9cac; end: 1054c9d1f; -[SCCameraSelfieSettingsConfigurationImpl shouldDisableAutoRestorationInReplyCamera] */

bool FUN_1054c9cac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b9c98;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f97c0(puVar3,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return puVar3 == (undefined *)0x2;
}



/* Entry: 1054c9d20; end: 1054c9d2b; -[SCCameraSelfieSettingsConfigurationImpl cameraModeIdentifier] */

void FUN_1054c9d20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15b0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b9b28,PTR_s_selfieSettingsMode_112634650);
  return;
}



/* Entry: 1054c9d2c; end: 1054c9dc7; -[SCCameraSelfieSettingsConfigurationImpl cameraModeLensId] */

void FUN_1054c9d2c(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  ppuVar1 = ppuVar4;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c15b0a0();
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar2 < 1) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110f76b18;
      _objc_retain(&PTR____CFConstantStringClassReference_110f76b18);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c15b0a0(uVar3);
      func_0x00010c0df7c0(ppuVar1,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar1;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 1054c9dc8; end: 1054c9dcf; -[SCCameraSelfieSettingsConfigurationImpl alwaysShowUserEducation] */

undefined8 FUN_1054c9dc8(void)

{
  return 0;
}



/* Entry: 1054c9dd0; end: 1054c9e0b; -[SCCameraSelfieSettingsConfigurationImpl userEducationEnabled] */

long FUN_1054c9dd0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010bf910a0();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf021d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_alwaysShowUserEducation_11259e218);
  return param_1;
}



/* Entry: 1054c9e0c; end: 1054c9e13; -[SCCameraSelfieSettingsConfigurationImpl onboardingDialogGifDownloadableUrl] */

undefined8 FUN_1054c9e0c(void)

{
  return 0;
}



/* Entry: 1054c9e14; end: 1054c9e1f; -[SCCameraSelfieSettingsConfigurationImpl onboardingDialogImageDownloadableUrl] */

undefined ** FUN_1054c9e14(void)

{
  return &PTR____CFConstantStringClassReference_110de5898;
}



/* Entry: 1054c9e20; end: 1054c9e5b; -[SCCameraSelfieSettingsConfigurationImpl .cxx_destruct] */

void FUN_1054c9e20(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c9e5c; end: 1054c9e67; -[SCCameraCroppingConfigurationImpl tallMediaHeightPercentageThreshold] */

undefined8 FUN_1054c9e5c(void)

{
  return 0x3fbeb851eb851eb8;
}



/* Entry: 1054c9e68; end: 1054c9e6f; -[SCCameraCroppingConfigurationImpl tallMediaWidthPercentageThreshold] */

undefined8 FUN_1054c9e68(void)

{
  return 0;
}



/* Entry: 1054c9e70; end: 1054c9e7b; -[SCCameraCroppingConfigurationImpl shortMediaHeightPercentageThreshold] */

undefined8 FUN_1054c9e70(void)

{
  return 0x3fc47ae147ae147b;
}



/* Entry: 1054c9e7c; end: 1054c9e83; -[SCCameraCroppingConfigurationImpl shortMediaWidthPercentageThreshold] */

undefined8 FUN_1054c9e7c(void)

{
  return 0;
}



/* Entry: 1054c9e84; end: 1054c9ef7; -[SCCameraSnapRecoveryConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1054c9e84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8988;
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



/* Entry: 1054c9ef8; end: 1054c9eff; -[SCCameraSnapRecoveryConfigurationImpl enabled] */

undefined8 FUN_1054c9ef8(void)

{
  return 0;
}



/* Entry: 1054c9f00; end: 1054c9f07; -[SCCameraSnapRecoveryConfigurationImpl forceQuitRecoveryEnabled] */

undefined8 FUN_1054c9f00(void)

{
  return 1;
}



/* Entry: 1054c9f08; end: 1054c9f47; -[SCCameraSnapRecoveryConfigurationImpl disableWaitForImagePersistence] */

undefined8 FUN_1054c9f08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfaa360();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c9f48; end: 1054c9f53; -[SCCameraSnapRecoveryConfigurationImpl .cxx_destruct] */

void FUN_1054c9f48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c9f54; end: 1054c9fc7; -[SCCameraSpeedModeConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1054c9f54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8990;
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



/* Entry: 1054c9fc8; end: 1054ca03b; -[SCCameraSpeedModeConfigurationImpl isEnabledInDirectorMode] */

undefined1 FUN_1054c9fc8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1054ca03c;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc688 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136bc688,&puStack_38);
  }
  return uRam00000001136bc680;
}



/* Entry: 1054ca03c; end: 1054ca07b;  */

void FUN_1054ca03c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfaa5c0();
  uRam00000001136bc680 = (undefined1)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054ca07c; end: 1054ca087; -[SCCameraSpeedModeConfigurationImpl .cxx_destruct] */

void FUN_1054ca07c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054ca088; end: 1054ca0fb; -[SCCameraTimelineModeConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1054ca088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8998;
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



/* Entry: 1054ca0fc; end: 1054ca103; -[SCCameraTimelineModeConfigurationImpl alwaysShowTooltips] */

undefined8 FUN_1054ca0fc(void)

{
  return 0;
}



/* Entry: 1054ca104; end: 1054ca10b; -[SCCameraTimelineModeConfigurationImpl longPressThreshold] */

undefined8 FUN_1054ca104(void)

{
  return 0x3fe0000000000000;
}



/* Entry: 1054ca10c; end: 1054ca10f; -[SCCameraTimelineModeConfigurationImpl anyImportEnabled] */

void FUN_1054ca10c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2a8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cameraRollImportEnabled_1125a83e0);
  return;
}



/* Entry: 1054ca110; end: 1054ca117; -[SCCameraTimelineModeConfigurationImpl cameraRollImageImportEnabled] */

undefined8 FUN_1054ca110(void)

{
  return 1;
}



/* Entry: 1054ca118; end: 1054ca11f; -[SCCameraTimelineModeConfigurationImpl cameraRollImportEnabled] */

undefined8 FUN_1054ca118(void)

{
  return 1;
}



/* Entry: 1054ca120; end: 1054ca15f; -[SCCameraTimelineModeConfigurationImpl imageOverlayBehavior] */

undefined8 FUN_1054ca120(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa8d60();
  _objc_release(uVar1);
  return uVar2;
}


