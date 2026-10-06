/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054c3a50; end: 1054c3a57; -[SCCameraCircumstanceEngineImpl configProvider] */

undefined8 FUN_1054c3a50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1054c3a58; end: 1054c3a93; -[SCCameraCircumstanceEngineImpl .cxx_destruct] */

void FUN_1054c3a58(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c3a94; end: 1054c3ac3; -[SCCameraBIPAConfigurationImpl .cxx_destruct] */

void FUN_1054c3a94(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c3ac4; end: 1054c3acb; -[SCCameraBatchCaptureConfigurationImpl videoEnabled] */

undefined8 FUN_1054c3ac4(void)

{
  return 1;
}



/* Entry: 1054c3acc; end: 1054c3ad3; -[SCCameraBatchCaptureConfigurationImpl maxNumberOfSnaps] */

undefined8 FUN_1054c3acc(void)

{
  return 10;
}



/* Entry: 1054c3ad4; end: 1054c3b13; -[SCCameraBatchCaptureConfigurationImpl enabledOnReplyCamera] */

undefined8 FUN_1054c3ad4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa52e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c3b14; end: 1054c3b53; -[SCCameraBatchCaptureConfigurationImpl replyActionBarEnabled] */

undefined8 FUN_1054c3b14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa5300();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c3b54; end: 1054c3b5b; -[SCCameraBatchCaptureConfigurationImpl setActivated:] */

void FUN_1054c3b54(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1054c3b5c; end: 1054c3b67; -[SCCameraBatchCaptureConfigurationImpl .cxx_destruct] */

void FUN_1054c3b5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c3b68; end: 1054c3bdb; -[SCCameraBlurryScoreConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1054c3b68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e88a8;
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



/* Entry: 1054c3bdc; end: 1054c3c7f; -[SCCameraBlurryScoreConfigurationImpl fetchSampleRateWithCompletion:] */

void FUN_1054c3bdc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_1054c3c80;
    puStack_30 = &UNK_1108903a0;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x00010bfa5600(uVar1,param_2,&puStack_48);
    _objc_release(uVar1);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1054c3c80; end: 1054c3c8b;  */

void FUN_1054c3c80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001054c3c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1054c3c8c; end: 1054c3c97; -[SCCameraBlurryScoreConfigurationImpl .cxx_destruct] */

void FUN_1054c3c8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c3c98; end: 1054c3cd7; -[SCCameraLaunchingConfigurationImpl shouldSuspendIdleMonitorDuringOtherCameraLaunch] */

undefined8 FUN_1054c3c98(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c234dc0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c3cd8; end: 1054c3d13; -[SCCameraLaunchingConfigurationImpl .cxx_destruct] */

void FUN_1054c3cd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c3d14; end: 1054c3e2f; -[SCCameraPreviewLabelsConfigurationImpl initWithCircumstanceEngine:] */

undefined8 * FUN_1054c3d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e88b8;
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



/* Entry: 1054c3e30; end: 1054c3e6f;  */

void FUN_1054c3e30(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be13300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1054c3e70; end: 1054c3f4f; -[SCCameraPreviewLabelsConfigurationImpl _fetchPreviewLabelsConfig] */

void FUN_1054c3e70(long param_1)

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
  puVar5 = PTR_PTR_1126b9af8;
  _objc_alloc(PTR_PTR_1126b9af8);
  func_0x00010c008360();
  _objc_retain(puVar5);
  _objc_release(puVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1054c3f50; end: 1054c3fc3; -[SCCameraPreviewLabelsConfigurationImpl enablePreviewToolsLabels] */

undefined1 FUN_1054c3f50(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1054c3fc4;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc510 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136bc510,&puStack_38);
  }
  return uRam00000001136bc508;
}



/* Entry: 1054c3fc4; end: 1054c4003;  */

void FUN_1054c3fc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf91340();
  uRam00000001136bc508 = (undefined1)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054c4004; end: 1054c4057; -[SCCameraPreviewLabelsConfigurationImpl previewLabelsShowDurationSeconds] */

long FUN_1054c4004(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c111460();
  _objc_release(uVar1);
  return (long)((int)uVar2 / 1000);
}



/* Entry: 1054c4058; end: 1054c40eb; -[SCCameraPreviewLabelsConfigurationImpl previewLabelsShowFrequency] */

undefined8 FUN_1054c4058(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = 0x110bfe18;
  func_0x00010c067fc0();
  if (iVar3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1114a0();
    iVar3 = (int)uVar2;
    _objc_release(uVar1);
  }
  if (iVar3 < 2) {
    if ((iVar3 == -0x4524111) || (uVar1 = 1, iVar3 == 0)) {
      uVar1 = 0;
    }
  }
  else {
    uVar2 = 1;
    if (iVar3 == 2) {
      uVar2 = 2;
    }
    uVar1 = 3;
    if (iVar3 != 3) {
      uVar1 = uVar2;
    }
  }
  return uVar1;
}



/* Entry: 1054c40ec; end: 1054c412b; -[SCCameraPreviewLabelsConfigurationImpl previewLabelsShowLimit] */

long FUN_1054c40ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1120a0();
  _objc_release(uVar1);
  return (long)(int)uVar2;
}



/* Entry: 1054c412c; end: 1054c415b; -[SCCameraPreviewLabelsConfigurationImpl .cxx_destruct] */

void FUN_1054c412c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c415c; end: 1054c41cf; -[SCCameraResolutionOptimizationConfigurationImpl initWithConfiguration:] */

undefined1 * FUN_1054c415c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e88c0;
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



/* Entry: 1054c41d0; end: 1054c41f7; -[SCCameraResolutionOptimizationConfigurationImpl config] */

void FUN_1054c41d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054c41f8; end: 1054c4203; -[SCCameraResolutionOptimizationConfigurationImpl .cxx_destruct] */

void FUN_1054c41f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c4204; end: 1054c4207; -[SCCameraSwitcherConfigurationImpl showDismissButtonInNGS] */

void FUN_1054c4204(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isEnabled_1125fa010);
  return;
}



/* Entry: 1054c4208; end: 1054c42db; -[SCCameraSwitcherConfigurationImpl navigationResetFixEnabled] */

byte FUN_1054c4208(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010c071800();
  if ((int)uVar1 == 0) {
    bVar2 = 0;
  }
  else {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x1054c429c;
    puStack_30 = &UNK_110842e18;
    bVar2 = bRam00000001136bc518;
    if (lRam00000001136bc520 != -1) {
      uStack_28 = param_1;
      func_0x00010002a2fc(0x1136bc520,&puStack_48);
      bVar2 = bRam00000001136bc518;
    }
  }
  return bVar2 & 1;
}



/* Entry: 1054c42dc; end: 1054c4307; -[SCCameraSwitcherConfigurationImpl .cxx_destruct] */

void FUN_1054c42dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1054c4308; end: 1054c437b; -[SCCameraCloseupCaptureConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1054c4308(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e88d0;
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



/* Entry: 1054c437c; end: 1054c43f7; -[SCCameraCloseupCaptureConfigurationImpl closeupCaptureActivationLensPositionThresholdLower] */

undefined4 FUN_1054c437c(void)

{
  if (lRam00000001136bc538 != -1) {
    func_0x00010002a2fc(0x1136bc538,&PTR___NSConcreteGlobalBlock_110890430);
  }
  return uRam00000001136bc528;
}



/* Entry: 1054c43f8; end: 1054c4477; -[SCCameraCloseupCaptureConfigurationImpl closeupCaptureActivationLensPositionThresholdUpper] */

undefined4 FUN_1054c43f8(void)

{
  if (lRam00000001136bc540 != -1) {
    func_0x00010002a2fc(0x1136bc540,&PTR___NSConcreteGlobalBlock_110890450);
  }
  return uRam00000001136bc52c;
}



/* Entry: 1054c4478; end: 1054c44f7; -[SCCameraCloseupCaptureConfigurationImpl closeupCaptureActivationInitialZoomFactor] */

undefined4 FUN_1054c4478(void)

{
  if (lRam00000001136bc548 != -1) {
    func_0x00010002a2fc(0x1136bc548,&PTR___NSConcreteGlobalBlock_110890470);
  }
  return uRam00000001136bc530;
}



/* Entry: 1054c44f8; end: 1054c4503; -[SCCameraCloseupCaptureConfigurationImpl .cxx_destruct] */

void FUN_1054c44f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c4504; end: 1054c461f; -[SCCameraContextualSurveyPromptConfigurationImpl initWithCircumstanceEngine:] */

undefined8 * FUN_1054c4504(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e88d8;
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



/* Entry: 1054c4620; end: 1054c465f;  */

void FUN_1054c4620(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be127a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1054c4660; end: 1054c473f; -[SCCameraContextualSurveyPromptConfigurationImpl _fetchMediaQualitySurveyEntryPointConfig] */

void FUN_1054c4660(long param_1)

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
  puVar5 = PTR_PTR_1126b9b00;
  _objc_alloc(PTR_PTR_1126b9b00);
  func_0x00010c008360();
  _objc_retain(puVar5);
  _objc_release(puVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1054c4740; end: 1054c47b3; -[SCCameraContextualSurveyPromptConfigurationImpl enabled] */

undefined1 FUN_1054c4740(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1054c47b4;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc558 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136bc558,&puStack_38);
  }
  return uRam00000001136bc550;
}



/* Entry: 1054c47b4; end: 1054c47f3;  */

void FUN_1054c47b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90c60();
  uRam00000001136bc550 = (undefined1)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054c47f4; end: 1054c483b; -[SCCameraContextualSurveyPromptConfigurationImpl coolDownThresholdShort] */

double FUN_1054c47f4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf51a60();
  _objc_release(lVar1);
  return (double)lVar2;
}



/* Entry: 1054c483c; end: 1054c4883; -[SCCameraContextualSurveyPromptConfigurationImpl coolDownThresholdLong] */

double FUN_1054c483c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf51a80();
  _objc_release(lVar1);
  return (double)lVar2;
}



/* Entry: 1054c4884; end: 1054c48c3; -[SCCameraContextualSurveyPromptConfigurationImpl numberOfDiscardsThreshold] */

undefined8 FUN_1054c4884(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dec80();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c48c4; end: 1054c48f3; -[SCCameraContextualSurveyPromptConfigurationImpl .cxx_destruct] */

void FUN_1054c48c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c48f4; end: 1054c4a33; -[SCCameraDeviceSettingsConfigurationImpl fourByThreeDeviceSettingsMapForCameraUsageTier:] */

void FUN_1054c48f4(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b7128;
  func_0x00010bf29480(PTR_PTR_1126b7128);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b70f8;
  _objc_alloc(PTR_PTR_1126b70f8);
  func_0x00010bf31500(PTR_PTR_1126b7130);
  lVar4 = (long)param_2;
  func_0x00010bf314c0(PTR_PTR_1126b7130);
  func_0x00010c02c020(puVar2,param_4,lVar4,(long)param_2,2);
  func_0x00010c2b72a0(puVar1,param_4,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b9b08;
  func_0x00010bfb6500(PTR_PTR_1126b9b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2adb40(puVar1,param_4,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b9b08;
  func_0x00010bfb6500(PTR_PTR_1126b9b08);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfbf20(param_3,param_4,param_5,0,puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1054c4a34; end: 1054c4b13; -[SCCameraDeviceSettingsConfigurationImpl nightModeDeviceSettingsMapForCameraUsageTier:] */

void FUN_1054c4a34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b7128;
  func_0x00010bf29480(PTR_PTR_1126b7128);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9b08;
  func_0x00010c0da3e0(PTR_PTR_1126b9b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2adb40(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b9b08;
  func_0x00010c0da3e0(PTR_PTR_1126b9b08);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfbf40(param_1,param_2,param_3,puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1054c4b14; end: 1054c4c27; -[SCCameraDeviceSettingsConfigurationImpl highResDeviceSettingsMap] */

void FUN_1054c4b14(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b7128;
  func_0x00010bf29480(PTR_PTR_1126b7128);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b7130;
  func_0x00010c06b120();
  if ((int)puVar2 != 0) {
    puVar2 = PTR_PTR_1126b70f8;
    _objc_alloc(PTR_PTR_1126b70f8);
    func_0x00010bfe2f80(PTR_PTR_1126b7130);
    lVar4 = (long)param_2;
    func_0x00010bfe2f80(PTR_PTR_1126b7130);
    func_0x00010c02c020(puVar2,param_4,lVar4,(long)param_2,1);
    func_0x00010c2b72a0(puVar1,param_4,puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126b9b08;
  func_0x00010bf6aae0(PTR_PTR_1126b9b08);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfbf40(param_3,param_4,2,puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1054c4c28; end: 1054c4eb7; -[SCCameraDeviceSettingsConfigurationImpl defaultDeviceSettingsMapForVideoCall] */

void FUN_1054c4c28(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined auStack_160 [128];
  long lStack_e0;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf31500(PTR_PTR_1126b7130);
  lVar2 = *(long *)(param_3 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf15c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126b7128;
  func_0x00010bf294a0(PTR_PTR_1126b7128,param_4,lVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b70f8;
  _objc_alloc(PTR_PTR_1126b70f8);
  func_0x00010c02c020();
  func_0x00010c2b72a0(puVar4,param_4,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b70f0;
  _objc_alloc(PTR_PTR_1126b70f0);
  lVar2 = lVar3;
  func_0x00010bfb6f60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c0c2280();
  lVar18 = lVar3;
  func_0x00010bfb6f60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar18;
  func_0x00010c0c22a0();
  func_0x00010c028c60(puVar5,param_4,lVar6,lVar15,0x18,0x18,0);
  func_0x00010c2ae620(puVar4,param_4,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar18);
  _objc_release(lVar2);
  puVar7 = puVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_3 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar8;
  func_0x00010bf70fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar9 = *(undefined8 *)(param_3 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf70fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_68 = uVar17;
  uStack_60 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar16;
  func_0x00010bf72060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(uVar8);
  _objc_release(uVar17);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar3;
  func_0x00010bf69300();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar6 = lVar2;
  func_0x00010bf529e0();
  func_0x00010bf71fe0(puVar7,param_4,lVar6);
  _objc_retainAutoreleasedReturnValue();
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  plStack_190 = (long *)0x0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  _objc_retain(lVar2);
  puVar14 = &uStack_1a0;
  puVar4 = auStack_160;
  lVar6 = lVar2;
  func_0x00010bf52a60();
  if (lVar6 == 0) {
    _objc_release(lVar2);
    puVar5 = (undefined *)0x0;
  }
  else {
    bVar1 = false;
    lVar18 = *plStack_190;
    do {
      lVar15 = 0;
      do {
        if (*plStack_190 != lVar18) {
          _objc_enumerationMutation(lVar2);
        }
        uVar17 = *(undefined8 *)(lStack_198 + lVar15 * 8);
        lVar10 = lVar2;
        func_0x00010c0e00e0(lVar2,param_4,uVar17);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar3;
        func_0x00010bee8a40(lVar3,param_4,puVar12,lVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7,param_4,lVar11,uVar17);
        bVar1 = (bool)(bVar1 | lVar11 != lVar10);
        _objc_release(lVar11);
        _objc_release(lVar10);
        lVar15 = lVar15 + 1;
      } while (lVar6 != lVar15);
      puVar14 = &uStack_1a0;
      puVar4 = auStack_160;
      lVar6 = lVar2;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
    _objc_release(lVar2);
    puVar5 = puVar7;
    if (!bVar1) {
      puVar5 = (undefined *)0x0;
    }
  }
  _objc_retain(puVar5);
  _objc_release(puVar7);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar7 = puVar4;
  func_0x00010c13a3e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
LAB_1054c517c:
    _objc_retain(puVar4);
    puVar5 = puVar4;
  }
  else {
    puVar5 = puVar7;
    func_0x00010c0cd7e0();
    func_0x00010bf314c0(PTR_PTR_1126b7130);
    if (((long)puVar14 <= (long)puVar5) || (puVar16 = (undefined *)(long)param_2, puVar16 <= puVar5)
       ) goto LAB_1054c517c;
    puVar12 = PTR_PTR_1126b7128;
    func_0x00010bf294a0(PTR_PTR_1126b7128,param_4,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b70f8;
    _objc_alloc(PTR_PTR_1126b70f8);
    puVar13 = puVar7;
    func_0x00010bf0aca0(puVar7);
    func_0x00010c02c020(puVar5,param_4,puVar16,puVar16,puVar13);
    func_0x00010c2b72a0(puVar12,param_4,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar12;
    func_0x00010bf21f60(puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
  }
  _objc_release(puVar7);
  _objc_release(puVar4);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1054c4eb8; end: 1054c508b; -[SCCameraDeviceSettingsConfigurationImpl videoCallDeviceSettingsMapForEncoderShortSide:] */

void FUN_1054c4eb8(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_3;
  func_0x00010bf69300();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar3 = lVar2;
  func_0x00010bf529e0();
  func_0x00010bf71fe0(puVar4,param_4,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(lVar2);
  puVar10 = &uStack_130;
  puVar11 = auStack_f0;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 == 0) {
    _objc_release(lVar2);
    puVar7 = (undefined *)0x0;
  }
  else {
    bVar1 = false;
    lVar15 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(lVar2);
        }
        uVar14 = *(undefined8 *)(lStack_128 + lVar12 * 8);
        lVar5 = lVar2;
        func_0x00010c0e00e0(lVar2,param_4,uVar14);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_3;
        func_0x00010bee8a40(param_3,param_4,param_5,lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4,param_4,lVar6,uVar14);
        bVar1 = (bool)(bVar1 | lVar6 != lVar5);
        _objc_release(lVar6);
        _objc_release(lVar5);
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      puVar10 = &uStack_130;
      puVar11 = auStack_f0;
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    _objc_release(lVar2);
    puVar7 = puVar4;
    if (!bVar1) {
      puVar7 = (undefined *)0x0;
    }
  }
  _objc_retain(puVar7);
  _objc_release(puVar4);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar11);
  puVar4 = puVar11;
  func_0x00010c13a3e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
LAB_1054c517c:
    _objc_retain(puVar11);
    puVar7 = puVar11;
  }
  else {
    puVar7 = puVar4;
    func_0x00010c0cd7e0();
    func_0x00010bf314c0(PTR_PTR_1126b7130);
    if (((long)puVar10 <= (long)puVar7) || (puVar13 = (undefined *)(long)param_2, puVar13 <= puVar7)
       ) goto LAB_1054c517c;
    puVar8 = PTR_PTR_1126b7128;
    func_0x00010bf294a0(PTR_PTR_1126b7128,param_4,puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b70f8;
    _objc_alloc(PTR_PTR_1126b70f8);
    puVar9 = puVar4;
    func_0x00010bf0aca0(puVar4);
    func_0x00010c02c020(puVar7,param_4,puVar13,puVar13,puVar9);
    func_0x00010c2b72a0(puVar8,param_4,puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = puVar8;
    func_0x00010bf21f60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
  _objc_release(puVar4);
  _objc_release(puVar11);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1054c508c; end: 1054c51af; -[SCCameraDeviceSettingsConfigurationImpl _videoCallDeviceSettingsForEncoderShortSide:baselineSettings:] */

void FUN_1054c508c(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_6);
  puVar1 = param_6;
  func_0x00010c13a3e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010c0cd7e0();
    func_0x00010bf314c0(PTR_PTR_1126b7130);
    if (((long)puVar2 < param_5) && (puVar5 = (undefined *)(long)param_2, puVar2 < puVar5)) {
      puVar3 = PTR_PTR_1126b7128;
      func_0x00010bf294a0(PTR_PTR_1126b7128,param_4,param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b70f8;
      _objc_alloc(PTR_PTR_1126b70f8);
      puVar4 = puVar1;
      func_0x00010bf0aca0(puVar1);
      func_0x00010c02c020(puVar2,param_4,puVar5,puVar5,puVar4);
      func_0x00010c2b72a0(puVar3,param_4,puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = puVar3;
      func_0x00010bf21f60(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      goto LAB_1054c5188;
    }
  }
  _objc_retain(param_6);
  puVar2 = param_6;
LAB_1054c5188:
  _objc_release(puVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054c51b0; end: 1054c52ff; -[SCCameraDeviceSettingsConfigurationImpl slowMotionDeviceSettingsMapForTier:] */

void FUN_1054c51b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf15c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b7128;
  func_0x00010bf29480(PTR_PTR_1126b7128);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b70f0;
  _objc_alloc(PTR_PTR_1126b70f0);
  uVar1 = uVar2;
  func_0x00010bfb6f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0c22a0();
  func_0x00010c028c60(puVar4,param_2,0x3c,uVar5,0x3c,0x3c,0);
  func_0x00010c2ae620(puVar3,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b9b08;
  func_0x00010c23ea00(PTR_PTR_1126b9b08);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfbf40(param_1,param_2,param_3,puVar4,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1054c5300; end: 1054c5403; -[SCCameraDeviceSettingsConfigurationImpl multiCamModeDeviceSettingsMapForTier:] */

void FUN_1054c5300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b7128;
  func_0x00010bf29480(PTR_PTR_1126b7128);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b7110;
  _objc_alloc(PTR_PTR_1126b7110);
  func_0x00010c046160();
  func_0x00010c2bc660(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b9b08;
  func_0x00010c0d1c20(PTR_PTR_1126b9b08);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfbf40(param_1,param_2,param_3,puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1054c5404; end: 1054c55df; -[SCCameraDeviceSettingsConfigurationImpl highDefinitionDeviceSettingsMapForCameraUsageTier:] */

void FUN_1054c5404(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdc1600(PTR_PTR_1126b7130);
  lVar1 = (long)param_2;
  FUN_1054c55e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9b08;
  func_0x00010bfe2f20(PTR_PTR_1126b9b08);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf21f60(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bdfbee0(param_3,param_4,param_5,0,puVar2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(puVar2);
  func_0x00010bdc15e0(PTR_PTR_1126b7130);
  lVar5 = (long)param_2;
  FUN_1054c55e0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9b08;
  func_0x00010bfe2f20(PTR_PTR_1126b9b08);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bf21f60(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfbee0(param_3,param_4,param_5,1,puVar2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_68 = uVar4;
  uStack_60 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72060(puVar2,param_4,puVar6,&PTR__OBJC_CLASS___NSConstantArray_11117eb68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(param_3);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126b7128;
    func_0x00010bf29480(PTR_PTR_1126b7128);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b70f8;
    _objc_alloc(PTR_PTR_1126b70f8);
    func_0x00010bf314e0(PTR_PTR_1126b7130);
    func_0x00010c02c020(puVar6,param_4,lVar1,(long)param_2,0);
    func_0x00010c2b72a0(puVar2,param_4,puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b9b08;
    func_0x00010bfe2f20(PTR_PTR_1126b9b08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2adb40(puVar2,param_4,puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054c55e0; end: 1054c56a3;  */

void FUN_1054c55e0(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7128;
  func_0x00010bf29480(PTR_PTR_1126b7128);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b70f8;
  _objc_alloc(PTR_PTR_1126b70f8);
  func_0x00010bf314e0(PTR_PTR_1126b7130);
  func_0x00010c02c020(puVar2,param_4,param_3,(long)param_2,0);
  func_0x00010c2b72a0(puVar1,param_4,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b9b08;
  func_0x00010bfe2f20(PTR_PTR_1126b9b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2adb40(puVar1,param_4,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054c56a4; end: 1054c57bb; -[SCCameraDeviceSettingsConfigurationImpl _deviceSettingsMapForCameraUsageTier:devicePosition:featureName:fallbackSettings:] */

void FUN_1054c56a4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdfbee0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c57bc; end: 1054c57f3; -[SCCameraDeviceSettingsConfigurationImpl .cxx_destruct] */

void FUN_1054c57bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c57f4; end: 1054c5867; -[SCCameraDirectorModeCOFConfigurationImpl userEducationEnabled] */

undefined1 FUN_1054c57f4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1054c5868;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc568 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136bc568,&puStack_38);
  }
  return uRam00000001136bc560;
}



/* Entry: 1054c5868; end: 1054c58a7;  */

void FUN_1054c5868(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa65a0();
  uRam00000001136bc560 = (undefined1)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054c58a8; end: 1054c58ef; -[SCCameraDirectorModeCOFConfigurationImpl onboardingDialogGifDownloadableUrl] */

void FUN_1054c58a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa6540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054c58f0; end: 1054c5937; -[SCCameraDirectorModeCOFConfigurationImpl onboardingDialogImageDownloadableUrl] */

void FUN_1054c58f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa6560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054c5938; end: 1054c593f; -[SCCameraDirectorModeCOFConfigurationImpl alwaysShowUserEducation] */

undefined8 FUN_1054c5938(void)

{
  return 0;
}



/* Entry: 1054c5940; end: 1054c597f; -[SCCameraDirectorModeCOFConfigurationImpl contextUnlockEnabled] */

undefined8 FUN_1054c5940(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa64a0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c5980; end: 1054c5987; -[SCCameraDirectorModeCOFConfigurationImpl keepTimelineMode] */

undefined8 FUN_1054c5980(void)

{
  return 0;
}



/* Entry: 1054c5988; end: 1054c59fb; -[SCCameraDirectorModeCOFConfigurationImpl regularLensCarouselEnabled] */

undefined1 FUN_1054c5988(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1054c59fc;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc570 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136bc570,&puStack_38);
  }
  return uRam00000001136bc561;
}



/* Entry: 1054c59fc; end: 1054c5a3b;  */

void FUN_1054c59fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa6580();
  uRam00000001136bc561 = (undefined1)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054c5a3c; end: 1054c5a43; -[SCCameraDirectorModeCOFConfigurationImpl showLensExplorerInTrayUI] */

undefined8 FUN_1054c5a3c(void)

{
  return 0;
}



/* Entry: 1054c5a44; end: 1054c5a83; -[SCCameraDirectorModeCOFConfigurationImpl lensCollectionEnabled] */

undefined8 FUN_1054c5a44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa6500();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c5a84; end: 1054c5ac3; -[SCCameraDirectorModeCOFConfigurationImpl videoStabilizationEnabled] */

undefined8 FUN_1054c5a84(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa65c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c5ac4; end: 1054c5b03; -[SCCameraDirectorModeCOFConfigurationImpl directorModeDeepLinkEnabled] */

undefined8 FUN_1054c5ac4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa64c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c5b04; end: 1054c5c1b; -[SCCameraDirectorModeCOFConfigurationImpl directorModeGrowthEntryPointConfig] */

/* WARNING: Removing unreachable block (ram,0x0001054c5bc4) */

void FUN_1054c5b04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c1195e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126b9b10;
    _objc_alloc();
    func_0x00010c008360();
    _objc_retain(0);
    _objc_retain(puVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(0);
    _objc_release(uVar3);
    lVar6 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1054c5c1c; end: 1054c5c57; -[SCCameraDirectorModeCOFConfigurationImpl directorModeGrowthEntryPointEnabled] */

undefined8 FUN_1054c5c1c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf7f3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf90080();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1054c5c58; end: 1054c5c93; -[SCCameraDirectorModeCOFConfigurationImpl directorModeGrowthEntryPointTextOption] */

long FUN_1054c5c58(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf7f3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf87240();
  _objc_release(param_1);
  return (long)(int)uVar1;
}



/* Entry: 1054c5c94; end: 1054c5cd7; -[SCCameraDirectorModeCOFConfigurationImpl directorModeGrowthEntryPointIconUrl] */

void FUN_1054c5c94(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf7f3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf87220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054c5cd8; end: 1054c5cdf; -[SCCameraDirectorModeCOFConfigurationImpl hasShownLabelsOnColdStart] */

undefined1 FUN_1054c5cd8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 1054c5ce0; end: 1054c5ceb; -[SCCameraDirectorModeCOFConfigurationImpl setDidShowLabelsOnColdStart] */

void FUN_1054c5ce0(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1054c5cec; end: 1054c5d63; -[SCCameraDirectorModeCOFConfigurationImpl maxImportDurationForTimelineSeconds] */

double FUN_1054c5cec(long param_1)

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
  func_0x00010c067f00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (double)((int)uVar3 * 0x3c);
}



/* Entry: 1054c5d64; end: 1054c5d93; -[SCCameraDirectorModeCOFConfigurationImpl .cxx_destruct] */

void FUN_1054c5d64(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c5d94; end: 1054c5e07; -[SCCameraDirectorModeVideoQualityOptimizationConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1054c5d94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e88f0;
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



/* Entry: 1054c5e08; end: 1054c5e47; -[SCCameraDirectorModeVideoQualityOptimizationConfigurationImpl enable1080pVideoRecordingFrontCamera] */

undefined8 FUN_1054c5e08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa6740();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c5e48; end: 1054c5e87; -[SCCameraDirectorModeVideoQualityOptimizationConfigurationImpl enable1080pVideoRecordingBackCamera] */

undefined8 FUN_1054c5e48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa6720();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c5e88; end: 1054c5efb; -[SCCameraDirectorModeVideoQualityOptimizationConfigurationImpl enable1080pVideoTranscoding] */

undefined1 FUN_1054c5e88(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1054c5efc;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc580 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136bc580,&puStack_38);
  }
  return uRam00000001136bc578;
}



/* Entry: 1054c5efc; end: 1054c5f3b;  */

void FUN_1054c5efc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa6780();
  uRam00000001136bc578 = (undefined1)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054c5f3c; end: 1054c5faf; -[SCCameraDirectorModeVideoQualityOptimizationConfigurationImpl enable1080pVideoImporting] */

undefined1 FUN_1054c5f3c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1054c5fb0;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc588 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136bc588,&puStack_38);
  }
  return uRam00000001136bc579;
}



/* Entry: 1054c5fb0; end: 1054c5fef;  */

void FUN_1054c5fb0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa6760();
  uRam00000001136bc579 = (undefined1)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054c5ff0; end: 1054c5ffb; -[SCCameraDirectorModeVideoQualityOptimizationConfigurationImpl .cxx_destruct] */

void FUN_1054c5ff0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c5ffc; end: 1054c606f; -[SCCameraExposureBiasConfigurationImpl initWithAppStartExperimentReader:] */

undefined1 * FUN_1054c5ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e88f8;
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



/* Entry: 1054c6070; end: 1054c6087; -[SCCameraExposureBiasConfigurationImpl enableCameraExposureBias] */

void FUN_1054c6070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de5558,0,0);
  return;
}



/* Entry: 1054c6088; end: 1054c6093; -[SCCameraExposureBiasConfigurationImpl .cxx_destruct] */

void FUN_1054c6088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c6094; end: 1054c61af; -[SCFeatureFrameRateRelaxationConfigurationImpl initWithCircumstanceEngine:] */

undefined8 * FUN_1054c6094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e8900;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_48,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1054c61b0; end: 1054c6237;  */

void FUN_1054c61b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010be10760(lVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1054c6238; end: 1054c6277; -[SCFeatureFrameRateRelaxationConfigurationImpl isEnabled] */

undefined8 FUN_1054c6238(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf926c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c6278; end: 1054c62b7; -[SCFeatureFrameRateRelaxationConfigurationImpl layer1DefaultMinFpsBack] */

ulong FUN_1054c6278(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c100();
  _objc_release(uVar1);
  return uVar2 & 0xffffffff;
}



/* Entry: 1054c62b8; end: 1054c62f7; -[SCFeatureFrameRateRelaxationConfigurationImpl layer1DefaultMinFpsFront] */

ulong FUN_1054c62b8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c120();
  _objc_release(uVar1);
  return uVar2 & 0xffffffff;
}



/* Entry: 1054c62f8; end: 1054c6337; -[SCFeatureFrameRateRelaxationConfigurationImpl layer2LowLightMinFpsBack] */

ulong FUN_1054c62f8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c180();
  _objc_release(uVar1);
  return uVar2 & 0xffffffff;
}



/* Entry: 1054c6338; end: 1054c6377; -[SCFeatureFrameRateRelaxationConfigurationImpl layer2LowLightMinFpsFront] */

ulong FUN_1054c6338(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c1a0();
  _objc_release(uVar1);
  return uVar2 & 0xffffffff;
}



/* Entry: 1054c6378; end: 1054c63b7; -[SCFeatureFrameRateRelaxationConfigurationImpl layer3NightModeOrFlashMinFpsBack] */

ulong FUN_1054c6378(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c200();
  _objc_release(uVar1);
  return uVar2 & 0xffffffff;
}



/* Entry: 1054c63b8; end: 1054c63f7; -[SCFeatureFrameRateRelaxationConfigurationImpl layer3NightModeOrFlashMinFpsFront] */

ulong FUN_1054c63b8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c220();
  _objc_release(uVar1);
  return uVar2 & 0xffffffff;
}



/* Entry: 1054c63f8; end: 1054c64b7; -[SCFeatureFrameRateRelaxationConfigurationImpl _fetchConfigFromProvider:] */

/* WARNING: Removing unreachable block (ram,0x0001054c647c) */

void FUN_1054c63f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x00010c1195e0(param_3,param_2,&PTR____CFConstantStringClassReference_110de5578,0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b9b18;
    _objc_alloc(PTR_PTR_1126b9b18);
    func_0x00010c008360();
    _objc_retain(puVar3);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054c64b8; end: 1054c64c3; -[SCFeatureFrameRateRelaxationConfigurationImpl .cxx_destruct] */

void FUN_1054c64b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c64c4; end: 1054c6537; -[SCCameraGreenScreenModeConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1054c64c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8908;
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


