/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052f7018; end: 1052f701f; -[SCCameraNotFoundAlertConfigurationImpl hasShownCameraNotFoundAlert] */

undefined1 FUN_1052f7018(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 1052f7020; end: 1052f7027; -[SCCameraNotFoundAlertConfigurationImpl setHasShownCameraNotFoundAlert:] */

void FUN_1052f7020(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1052f7028; end: 1052f7033; -[SCCameraNotFoundAlertConfigurationImpl .cxx_destruct] */

void FUN_1052f7028(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f7034; end: 1052f704b; -[SCCameraViewfinderConfigurationImpl performerPriorityUserInteractive] */

void FUN_1052f7034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd0db8,0,0);
  return;
}



/* Entry: 1052f704c; end: 1052f7057; -[SCCameraViewfinderConfigurationImpl .cxx_destruct] */

void FUN_1052f704c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f7058; end: 1052f7187; -[SCCameraMLRequestConfigurationImpl initWithCircumstanceEngine:] */

undefined8 * FUN_1052f7058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e7650;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_48,puVar1);
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1052f7188; end: 1052f71d7;  */

void FUN_1052f7188(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeea40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1052f71d8; end: 1052f72ab; -[SCCameraMLRequestConfigurationImpl superResolutionMLModelIdWhenIsMainCamera:isFrontCamera:] */

void FUN_1052f71d8(undefined **param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  if (param_3 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar1 = param_1;
    func_0x00010be16ac0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar1 != (undefined **)0x0) {
      ppuVar2 = ppuVar1;
      func_0x00010c0cffc0(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be16ae0(param_1,param_2,ppuVar2,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar2);
      ppuVar2 = param_1;
      func_0x00010c0cff20();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar3 = ppuVar2;
      }
      _objc_retain(ppuVar3);
      _objc_release(ppuVar2);
      _objc_release(param_1);
    }
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1052f72ac; end: 1052f733f; -[SCCameraMLRequestConfigurationImpl modelDeliveryConfigKeyWhenIsMainCamera:] */

void FUN_1052f72ac(undefined **param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  if (param_3 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    func_0x00010be16ac0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == (undefined **)0x0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar1 = param_1;
      func_0x00010c0cfe40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar1;
      func_0x00010c08fa60();
      ppuVar3 = &PTR____CFConstantStringClassReference_110dd0e38;
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar3 = ppuVar1;
      }
      _objc_retain(ppuVar3);
      _objc_release(ppuVar1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1052f7340; end: 1052f73f7; -[SCCameraMLRequestConfigurationImpl shouldApplySuperResolutionWhenIsMainCamera:isFlashEnabled:isFrontCamera:] */

bool FUN_1052f7340(long param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010be16ac0();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar2 == 0) || ((param_4 != 0 && (lVar3 = lVar2, func_0x00010bf92b00(), (int)lVar3 == 0))))
    {
      bVar1 = false;
    }
    else {
      lVar3 = lVar2;
      func_0x00010c0cffc0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be16ae0(param_1,param_2,lVar3,param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      bVar1 = param_1 != 0;
      _objc_release(param_1);
    }
    _objc_release(lVar2);
  }
  return bVar1;
}



/* Entry: 1052f73f8; end: 1052f74ab; -[SCCameraMLRequestConfigurationImpl _findMatchingModelFor:isFrontCamer:] */

void FUN_1052f73f8(undefined8 param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf529e0();
  if (uVar2 != 0) {
    uVar2 = 0;
    do {
      uVar3 = param_3;
      func_0x00010c0dfd20(param_3,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010bf7f0e0();
      if (param_4 == 0) {
        if ((int)uVar1 == 2) goto LAB_1052f7480;
      }
      else if ((int)uVar1 == 1) {
LAB_1052f7480:
        _objc_retain(uVar3);
        _objc_release(uVar3);
        goto LAB_1052f7490;
      }
      _objc_release(uVar3);
      uVar2 = uVar2 + 1;
      uVar3 = param_3;
      func_0x00010bf529e0();
    } while (uVar2 < uVar3);
  }
  uVar3 = 0;
LAB_1052f7490:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1052f74ac; end: 1052f74f7; -[SCCameraMLRequestConfigurationImpl _findMatchingConfigWhenIsMainCamera] */

void FUN_1052f74ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf926c0();
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052f74f8; end: 1052f759b; -[SCCameraMLRequestConfigurationImpl _createImageSuperResolutionConfigForCofKey:provider:] */

/* WARNING: Removing unreachable block (ram,0x0001052f7568) */

void FUN_1052f74f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c1195e0(param_4,param_2,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b70e8;
  _objc_alloc(PTR_PTR_1126b70e8);
  func_0x00010c008360();
  _objc_retain(puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1052f759c; end: 1052f75cb; -[SCCameraMLRequestConfigurationImpl .cxx_destruct] */

void FUN_1052f759c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f75cc; end: 1052f763f; -[SCCameraResolutionOptimizationStartupConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1052f75cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7658;
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



/* Entry: 1052f7640; end: 1052f76e7; -[SCCameraResolutionOptimizationStartupConfigurationImpl force720pRecordingCapEnabled] */

undefined1 FUN_1052f7640(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x1052f76b4;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136ba300 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136ba300,&puStack_38);
  }
  return uRam00000001136ba2f8;
}



/* Entry: 1052f76e8; end: 1052f76ff; -[SCCameraResolutionOptimizationStartupConfigurationImpl removeScreenSizeBasedHRSIEnabled] */

void FUN_1052f76e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd0e78,1,0);
  return;
}



/* Entry: 1052f7700; end: 1052f7717; -[SCCameraResolutionOptimizationStartupConfigurationImpl shouldKeepCameraVideoOutputSizeForFrontReplyCamera] */

void FUN_1052f7700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd0e98,0,0);
  return;
}



/* Entry: 1052f7718; end: 1052f772f; -[SCCameraResolutionOptimizationStartupConfigurationImpl shouldKeepCameraVideoOutputSizeForBackReplyCamera] */

void FUN_1052f7718(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd0eb8,0,0);
  return;
}



/* Entry: 1052f7730; end: 1052f7747; -[SCCameraResolutionOptimizationStartupConfigurationImpl shouldKeepCameraVideoOutputSizeForFrontMainCamera] */

void FUN_1052f7730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd0ed8,0,0);
  return;
}



/* Entry: 1052f7748; end: 1052f775f; -[SCCameraResolutionOptimizationStartupConfigurationImpl shouldKeepCameraVideoOutputSizeForBackMainCamera] */

void FUN_1052f7748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd0ef8,0,0);
  return;
}



/* Entry: 1052f7760; end: 1052f7777; -[SCCameraResolutionOptimizationStartupConfigurationImpl shouldKeepCameraVideoOutputSizeForFrontMusicCamera] */

void FUN_1052f7760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd0f18,0,0);
  return;
}



/* Entry: 1052f7778; end: 1052f778f; -[SCCameraResolutionOptimizationStartupConfigurationImpl shouldKeepCameraVideoOutputSizeForBackMusicCamera] */

void FUN_1052f7778(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd0f38,0,0);
  return;
}



/* Entry: 1052f7790; end: 1052f77a7; -[SCCameraResolutionOptimizationStartupConfigurationImpl disableHRSIWhenLenseActive] */

void FUN_1052f7790(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd0f58,0,0);
  return;
}



/* Entry: 1052f77a8; end: 1052f77b3; -[SCCameraResolutionOptimizationStartupConfigurationImpl .cxx_destruct] */

void FUN_1052f77a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f77b4; end: 1052f77bf; -[SCCameraCaptureFormatSelectionFrameworkConfigurationImpl .cxx_destruct] */

void FUN_1052f77b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f77c0; end: 1052f7833; -[SCCameraDisableBracketCaptureConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1052f77c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7668;
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



/* Entry: 1052f7834; end: 1052f784b; -[SCCameraDisableBracketCaptureConfigurationImpl _disableBracketCapture] */

void FUN_1052f7834(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd1018,0,0);
  return;
}



/* Entry: 1052f784c; end: 1052f78bf; -[SCCameraDisableBracketCaptureConfigurationImpl bracketCaptureStrategy] */

undefined8 FUN_1052f784c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1052f78c0;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136ba330 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136ba330,&puStack_38);
  }
  return uRam00000001136ba328;
}



/* Entry: 1052f78c0; end: 1052f791b;  */

void FUN_1052f78c0(long param_1)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf308;
  func_0x00010c2827c0();
  if (1 < (long)ppuVar2 - 1U) {
    if (ppuVar2 == (undefined **)0x0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010be01ba0();
      ppuVar2 = (undefined **)0x2;
      if (iVar1 == 0) {
        ppuVar2 = (undefined **)0x0;
      }
    }
    else {
      ppuVar2 = (undefined **)0x0;
    }
  }
  ppuRam00000001136ba328 = ppuVar2;
  return;
}



/* Entry: 1052f791c; end: 1052f7927; -[SCCameraDisableBracketCaptureConfigurationImpl .cxx_destruct] */

void FUN_1052f791c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f7928; end: 1052f799b; -[SCCameraExactResolutionConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1052f7928(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7670;
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



/* Entry: 1052f799c; end: 1052f7a43; -[SCCameraExactResolutionConfigurationImpl enabled2ByteAlignmentForAllVideoRecording] */

undefined1 FUN_1052f799c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x1052f7a10;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136ba340 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136ba340,&puStack_38);
  }
  return uRam00000001136ba338;
}



/* Entry: 1052f7a44; end: 1052f7aeb; -[SCCameraExactResolutionConfigurationImpl enabled2ByteAlignmentForDirectorModeVideoRecording] */

undefined1 FUN_1052f7a44(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x1052f7ab8;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136ba348 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136ba348,&puStack_38);
  }
  return uRam00000001136ba339;
}



/* Entry: 1052f7aec; end: 1052f7af7; -[SCCameraExactResolutionConfigurationImpl .cxx_destruct] */

void FUN_1052f7aec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f7af8; end: 1052f7b6b; -[SCCameraImageCaptureFallbackDeadlineConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1052f7af8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7678;
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



/* Entry: 1052f7b6c; end: 1052f7b9b; -[SCCameraImageCaptureFallbackDeadlineConfigurationImpl mainBack] */

double FUN_1052f7b6c(long param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = 1.4444;
  func_0x00010bfb2cc0(0x3fb8e219,*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110dd1078,0);
  return (double)fVar1;
}



/* Entry: 1052f7b9c; end: 1052f7bcb; -[SCCameraImageCaptureFallbackDeadlineConfigurationImpl mainFront] */

double FUN_1052f7b9c(long param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = 1.071;
  func_0x00010bfb2cc0(0x3f891687,*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110dd1098,0);
  return (double)fVar1;
}



/* Entry: 1052f7bcc; end: 1052f7bfb; -[SCCameraImageCaptureFallbackDeadlineConfigurationImpl replyBack] */

double FUN_1052f7bcc(long param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = 0.867;
  func_0x00010bfb2cc0(0x3f5df3b6,*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110dd10b8,0);
  return (double)fVar1;
}



/* Entry: 1052f7bfc; end: 1052f7c2b; -[SCCameraImageCaptureFallbackDeadlineConfigurationImpl replyFront] */

double FUN_1052f7bfc(long param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = 0.694;
  func_0x00010bfb2cc0(0x3f31a9fc,*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110dd10d8,0);
  return (double)fVar1;
}



/* Entry: 1052f7c2c; end: 1052f7c37; -[SCCameraImageCaptureFallbackDeadlineConfigurationImpl .cxx_destruct] */

void FUN_1052f7c2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f7c38; end: 1052f7c3f; -[SCCameraMainCameraQualityConfigurationImpl photoQualityPrioritizationForHDMode] */

undefined8 FUN_1052f7c38(void)

{
  return 3;
}



/* Entry: 1052f7c40; end: 1052f7c4b; -[SCCameraMainCameraQualityConfigurationImpl .cxx_destruct] */

void FUN_1052f7c40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f7c4c; end: 1052f7c53; -[SCCameraPhotoQualityPrioritizationConfigurationImpl photoQualityPrioritization] */

undefined8 FUN_1052f7c4c(void)

{
  return 1;
}



/* Entry: 1052f7c54; end: 1052f7caf;  */

void FUN_1052f7c54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7140;
  _objc_alloc(PTR_PTR_1126b7140);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe1e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1052f7cb0; end: 1052f7ccb;  */

void FUN_1052f7cb0(void)

{
  _objc_opt_new(PTR_PTR_1126b7148);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1052f7ccc; end: 1052f7f4f;  */

void FUN_1052f7ccc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7150;
  _objc_alloc(PTR_PTR_1126b7150);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe1e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1052f7f50; end: 1052f7f57; -[SCSystemConfigurationImpl imageCaptureFallbackDeadline] */

undefined8 FUN_1052f7f50(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1052f7f58; end: 1052f7f5f; -[SCSystemConfigurationImpl photoQualityPrioritization] */

undefined8 FUN_1052f7f58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1052f7f60; end: 1052f7f67; -[SCSystemConfigurationImpl disableBracketCapture] */

undefined8 FUN_1052f7f60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1052f7f68; end: 1052f7f6f; -[SCSystemConfigurationImpl exactResolution] */

undefined8 FUN_1052f7f68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1052f7f70; end: 1052f7f77; -[SCSystemConfigurationImpl cameraShutterSoundConfiguration] */

undefined8 FUN_1052f7f70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1052f7f78; end: 1052f7f7f; -[SCSystemConfigurationImpl resolutionOptimizationStartupConfiguration] */

undefined8 FUN_1052f7f78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1052f7f80; end: 1052f7f87; -[SCSystemConfigurationImpl cameraMLRequestConfiguration] */

undefined8 FUN_1052f7f80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1052f7f88; end: 1052f7f8f; -[SCSystemConfigurationImpl cameraNotFoundAlertConfiguration] */

undefined8 FUN_1052f7f88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1052f7f90; end: 1052f7f97; -[SCSystemConfigurationImpl cameraAudioCaptureConfiguration] */

undefined8 FUN_1052f7f90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1052f7f98; end: 1052f8063; -[SCSystemConfigurationImpl .cxx_destruct] */

void FUN_1052f7f98(long param_1)

{
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



/* Entry: 1052f8064; end: 1052f80d7; -[SCCameraShutterSoundConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1052f8064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7690;
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



/* Entry: 1052f80d8; end: 1052f818f; -[SCCameraShutterSoundConfigurationImpl shutterSoundAutoMuteEnabled] */

undefined * FUN_1052f80d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110dd1118,0,0);
  puVar4 = (undefined *)0x0;
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    puVar4 = (undefined *)0x1;
    func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110dd1138,1,0);
    if ((int)uVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
      func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf53280();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  return puVar4;
}



/* Entry: 1052f8190; end: 1052f819b; -[SCCameraShutterSoundConfigurationImpl .cxx_destruct] */

void FUN_1052f8190(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f819c; end: 1052f81a7; -[SCCameraVideoStabilizationByDefaultConfigurationImpl .cxx_destruct] */

void FUN_1052f819c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f81a8; end: 1052f81af; -[SCCameraZoomFactorsConfigurationImpl dialViewDismissThresholdInSecond] */

undefined8 FUN_1052f81a8(void)

{
  return 0x3fe8000000000000;
}



/* Entry: 1052f81b0; end: 1052f81bb; -[SCCameraZoomFactorsConfigurationImpl .cxx_destruct] */

void FUN_1052f81b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f81bc; end: 1052f8237;  */

undefined * FUN_1052f81bc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136ba368 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dd11b8,
                        &UNK_10dd942e0,&UNK_10dd94300,3,FUN_1052f8238,0);
    do {
      if (puRam00000001136ba368 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136ba368;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136ba368,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136ba368 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136ba368;
}



/* Entry: 1052f8238; end: 1052f8243;  */

bool FUN_1052f8238(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1052f8244; end: 1052f82bf;  */

undefined * FUN_1052f8244(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136ba370 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dd11d8,
                        &UNK_10dd9430c,&UNK_10dd9433c,3,FUN_1052f82c0,0);
    do {
      if (puRam00000001136ba370 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136ba370;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136ba370,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136ba370 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136ba370;
}



/* Entry: 1052f82c0; end: 1052f82cb;  */

bool FUN_1052f82c0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1052f82cc; end: 1052f8333; +[SCCameraModelMapping descriptor] */

void FUN_1052f82cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136ba378 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a289a0,
                        &PTR____CFConstantStringClassReference_110dd11f8,
                        &PTR_s_snapchat_camera_1130cdb98,&PTR_s_direction_1130cdbb0,2,0x10,0x1c);
    puRam00000001136ba378 = puVar1;
  }
  return;
}



/* Entry: 1052f8334; end: 1052f8417; +[SCCameraImageSuperResolutionConfig descriptor] */

void FUN_1052f8334(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136ba380 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a289f0,
                        &PTR____CFConstantStringClassReference_110dd1218,
                        &PTR_s_snapchat_camera_1130cdb98,&PTR_s_enabled_1130cdbf0,10,0x30,0x1c);
    puRam00000001136ba380 = puVar1;
  }
  return;
}



/* Entry: 1052f8418; end: 1052f8423;  */

bool FUN_1052f8418(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1052f8424; end: 1052f8507; +[SCCameraMainCameraScreenshotStrategy descriptor] */

void FUN_1052f8424(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136ba390 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a28a90,
                        &PTR____CFConstantStringClassReference_110dd1258,
                        &PTR_s_snapchat_camera_1130cdd30,&PTR_s_enabled_1130cdd48,5,0xc,0x1c);
    puRam00000001136ba390 = puVar1;
  }
  return;
}



/* Entry: 1052f8508; end: 1052f8513;  */

bool FUN_1052f8508(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 1052f8514; end: 1052f857b; +[SCCameraZoomFactorsConfig descriptor] */

void FUN_1052f8514(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136ba3a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a28b30,
                        &PTR____CFConstantStringClassReference_110dd1298,
                        &PTR_s_snapchat_camera_1130cdde8,&PTR_s_enabled_1130cde00,0x13,0x1c,0x1c);
    puRam00000001136ba3a0 = puVar1;
  }
  return;
}



/* Entry: 1052f857c; end: 1052f85ab; -[SCSecretFeatureCheckingFactoryServiceImpl createSecretFeatureCheckerInContext:] */

void FUN_1052f857c(void)

{
  _objc_alloc(PTR_PTR_1126b71b8);
  func_0x00010c034960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1052f85ac; end: 1052f85b7; -[SCSecretFeatureCheckingFactoryServiceImpl .cxx_destruct] */

void FUN_1052f85ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f85b8; end: 1052f8617; -[SCSecretFeatureCheckingImpl _checkSecretFeatureWithOldAPI] */

undefined8 FUN_1052f85b8(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  func_0x00010bdde220();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf1f3c0();
    uVar2 = 1;
    if ((int)uVar1 != 0) {
      uVar2 = 2;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1052f8618; end: 1052f86bf; -[SCSecretFeatureCheckingImpl _checkSecretFeatureWithOldAPIHelper] */

ulong FUN_1052f8618(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  char acStack_60 [32];
  undefined7 uStack_40;
  undefined1 uStack_39;
  undefined7 uStack_38;
  char acStack_30 [24];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  acStack_30[8] = -0x54;
  acStack_30[9] = -0x78;
  acStack_30[10] = -0x6a;
  acStack_30[0xb] = -0x75;
  acStack_30[0xc] = -100;
  acStack_30[0xd] = -0x69;
  acStack_30[0xe] = -0x50;
  acStack_30[0] = -0x4e;
  acStack_30[1] = -0x4f;
  acStack_30[2] = -0x53;
  acStack_30[3] = -0x6a;
  acStack_30[4] = -0x6f;
  acStack_30[5] = -0x68;
  acStack_30[6] = -0x66;
  acStack_30[7] = -0x73;
  acStack_30[0xf] = 0x9d;
  acStack_30[0x10] = -0x74;
  acStack_30[0x11] = -0x66;
  acStack_30[0x12] = -0x73;
  acStack_30[0x13] = -0x77;
  acStack_30[0x14] = -0x66;
  acStack_30[0x15] = -0x73;
  acStack_30[0x16] = '\0';
  uStack_40 = 0xb09b9a8d9e978c;
  uStack_39 = 0x9d;
  uStack_38 = 0x8d9a898d9a8c;
  acStack_60[8] = -0x6a;
  acStack_60[9] = -0x75;
  acStack_60[10] = -100;
  acStack_60[0xb] = -0x69;
  acStack_60[0xc] = -0x46;
  acStack_60[0xd] = -0x6f;
  acStack_60[0xe] = -0x62;
  acStack_60[0xf] = -99;
  acStack_60[0] = -0x73;
  acStack_60[1] = -0x6a;
  acStack_60[2] = -0x6f;
  acStack_60[3] = -0x68;
  acStack_60[4] = -0x66;
  acStack_60[5] = -0x73;
  acStack_60[6] = -0x54;
  acStack_60[7] = -0x78;
  acStack_60[0x10] = -0x6d;
  acStack_60[0x11] = -0x66;
  acStack_60[0x12] = -0x65;
  acStack_60[0x13] = '\0';
  func_0x00010be9cb40(param_1,param_2,acStack_30,&uStack_40,acStack_60);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    func_0x00010bdde1e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    _objc_opt_respondsToSelector();
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar2 = param_1;
      func_0x00010c067ec0();
      uVar1 = 2;
      if ((int)uVar2 != 1) {
        uVar1 = (ulong)((int)uVar2 == 2);
      }
    }
    _objc_release(param_1);
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return param_1;
}



/* Entry: 1052f86c0; end: 1052f8727; -[SCSecretFeatureCheckingImpl _checkSecretFeatureWithNewAPI] */

undefined1 FUN_1052f86c0(ulong param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  
  func_0x00010bdde1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c067ec0();
    uVar2 = 2;
    if ((int)uVar1 != 1) {
      uVar2 = (int)uVar1 == 2;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1052f8728; end: 1052f87c7; -[SCSecretFeatureCheckingImpl _checkSecretFeatureWithNewAPIHelper] */

void FUN_1052f8728(long param_1,undefined8 param_2)

{
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined7 uStack_50;
  undefined1 uStack_49;
  undefined7 uStack_48;
  char acStack_40 [40];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  acStack_40[8] = -0x53;
  acStack_40[9] = -0x6a;
  acStack_40[10] = -0x6f;
  acStack_40[0xb] = -0x68;
  acStack_40[0xc] = -0x66;
  acStack_40[0] = -0x42;
  acStack_40[1] = -0x47;
  acStack_40[2] = -0x45;
  acStack_40[3] = -0x66;
  acStack_40[4] = -0x77;
  acStack_40[5] = -0x6a;
  acStack_40[6] = -100;
  acStack_40[7] = -0x66;
  acStack_40[0x15] = -99;
  acStack_40[0x16] = -0x74;
  acStack_40[0x17] = -0x66;
  acStack_40[0x18] = -0x73;
  acStack_40[0x19] = -0x77;
  acStack_40[0x1a] = -0x66;
  acStack_40[0x1b] = -0x73;
  acStack_40[0x1c] = '\0';
  acStack_40[0xd] = -0x73;
  acStack_40[0xe] = -0x54;
  acStack_40[0xf] = -0x78;
  acStack_40[0x10] = -0x6a;
  acStack_40[0x11] = -0x75;
  acStack_40[0x12] = -100;
  acStack_40[0x13] = -0x69;
  acStack_40[0x14] = -0x50;
  uStack_50 = 0xb09b9a8d9e978c;
  uStack_49 = 0x9d;
  uStack_48 = 0x8d9a898d9a8c;
  uStack_54 = 0x9a;
  uStack_58 = 0x8b9e8b8c;
  func_0x00010be9cb40(param_1,param_2,acStack_40,&uStack_50,&uStack_58);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f87c8; end: 1052f87d3; -[SCSecretFeatureCheckingImpl .cxx_destruct] */

void FUN_1052f87c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f87d4; end: 1052f88ab; -[SCSecretFeaturePeriodicUpdatingImpl setPeriodicUpdateInterval:] */

void FUN_1052f87d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1052f88ac; end: 1052f88e7;  */

void FUN_1052f88ac(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bea63c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052f88e8; end: 1052f89af; -[SCSecretFeaturePeriodicUpdatingImpl stopPeriodicUpdate] */

void FUN_1052f88e8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1052f89b0; end: 1052f89f3;  */

void FUN_1052f89b0(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x20) = 0;
    func_0x00010c069d00(*(undefined8 *)(param_1 + 0x10));
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052f89f4; end: 1052f8a47; -[SCSecretFeaturePeriodicUpdatingImpl .cxx_destruct] */

void FUN_1052f89f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f8a48; end: 1052f8a77; -[SCAsyncQueueProviderImpl .cxx_destruct] */

void FUN_1052f8a48(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f8a78; end: 1052f8a83; -[SCAsyncQueueImpl cleanupQueuesForScope:callback:] */

void FUN_1052f8a78(void)

{
  long in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x0001052f8a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x3 + 0x10))(in_x3);
  return;
}



/* Entry: 1052f8a84; end: 1052f8af7; -[SCAsyncQueueProviderFactoryServices initWithAsyncQueueProviderFactory:] */

undefined1 * FUN_1052f8a84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e76c8;
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



/* Entry: 1052f8af8; end: 1052f8aff; -[SCAsyncQueueProviderFactoryServices asyncQueueProviderFactory] */

undefined8 FUN_1052f8af8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1052f8b00; end: 1052f8b0b; -[SCAsyncQueueProviderFactoryServices .cxx_destruct] */

void FUN_1052f8b00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f8b0c; end: 1052f8b5f; -[SCAppTerminationShim dealloc] */

void FUN_1052f8b0c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    _munmap(*(long *)(param_1 + 0x30),1);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  puStack_28 = PTR_PTR_1126e76d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1052f8b60; end: 1052f8b87; -[SCAppTerminationShim forceTerminationObservable] */

void FUN_1052f8b60(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052f8b88; end: 1052f8bef; -[SCAppTerminationShim forceAppTermination] */

void FUN_1052f8b88(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  uVar1 = 1;
  func_0x0001001d3a80(1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cd2e0(param_1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_new();
  func_0x00010c0d9840(uVar1);
  _objc_release(puVar2);
  lVar3 = 0;
  _exit(0);
  _objc_storeStrong(lVar3 + 0x28,0);
  _objc_storeStrong(lVar3 + 0x20,0);
  _objc_storeStrong(lVar3 + 0x18,0);
  _objc_storeStrong(lVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + 8,0);
  return;
}



/* Entry: 1052f8bf0; end: 1052f8c43; -[SCAppTerminationShim .cxx_destruct] */

void FUN_1052f8bf0(long param_1)

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



/* Entry: 1052f8c44; end: 1052f8c5f;  */

void FUN_1052f8c44(long param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_2 != 0) {
    uVar1 = 2;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 1052f8c60; end: 1052f8c63; -[SCInternalDistributorNoOp startCheckForUpdatesForced:] */

void FUN_1052f8c60(void)

{
  return;
}



/* Entry: 1052f8c64; end: 1052f8c67; -[SCInternalDistributorS2REntryPoint begin] */

void FUN_1052f8c64(void)

{
  return;
}



/* Entry: 1052f8c68; end: 1052f8d7b; -[SCInternalDistributorS2REntryPoint _check] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052f8c68(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_1127213cc;
    _objc_loadWeakRetained(lVar5);
  }
  lVar1 = lVar5;
  func_0x00010c069300(lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar1;
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24e480();
  _objc_release(lVar5);
  lVar5 = 0;
  if (param_1 != 0) {
    lVar5 = param_1 + _DAT_1127213d0;
    _objc_loadWeakRetained(lVar5);
  }
  lVar2 = lVar5;
  func_0x00010c0dc640(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar5);
  puVar4 = PTR_PTR_1126afde0;
  func_0x00010bf57f80(PTR_PTR_1126afde0,param_2,&PTR____CFConstantStringClassReference_110dd12f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(lVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052f8d7c; end: 1052f8dbf; -[SCInternalDistributorS2REntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052f8d7c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127213d0);
  _objc_destroyWeak(param_1 + _DAT_1127213cc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127213c8);
  return;
}



/* Entry: 1052f8dc0; end: 1052f8dc3; -[SCInternalDistributor initWithPreferences:] */

void FUN_1052f8dc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_init_1125d9248);
  return;
}


