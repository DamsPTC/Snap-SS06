/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054c6538; end: 1054c6573; -[SCCameraGreenScreenModeConfigurationImpl isEnabledInCameraViewType:] */

undefined8 FUN_1054c6538(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 0xc) {
    if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be40170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isEnabledInMainCamera_11256d9f8);
      return param_1;
    }
    if (param_3 == 9) {
                    /* WARNING: Could not recover jumptable at 0x00010be40130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isEnabledInDirectorMode_11256d9e8);
      return param_1;
    }
  }
  else {
    if (param_3 == 0xc) {
                    /* WARNING: Could not recover jumptable at 0x00010be401b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__isEnabledInSpotlightPostingModu_11256da08);
      return param_1;
    }
    if (param_3 == 0xd) {
                    /* WARNING: Could not recover jumptable at 0x00010be40190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isEnabledInSnapEditor_11256da00);
      return param_1;
    }
  }
  return 0;
}



/* Entry: 1054c6574; end: 1054c65e7; -[SCCameraGreenScreenModeConfigurationImpl _isEnabledInMainCamera] */

undefined1 FUN_1054c6574(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1054c65e8;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc598 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136bc598,&puStack_38);
  }
  return uRam00000001136bc590;
}



/* Entry: 1054c65e8; end: 1054c6627;  */

void FUN_1054c65e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa8300();
  uRam00000001136bc590 = (undefined1)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054c6628; end: 1054c66f7; -[SCCameraGreenScreenModeConfigurationImpl _isEnabledInSpotlightPostingModularGreenScreen] */

undefined * FUN_1054c6628(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR_PTR_1126b9b20;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2904c0(puVar3,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b9b20;
  if ((int)puVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfce200(puVar4,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  return puVar4;
}



/* Entry: 1054c66f8; end: 1054c676b; -[SCCameraGreenScreenModeConfigurationImpl _isEnabledInDirectorMode] */

undefined1 FUN_1054c66f8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1054c676c;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc5a0 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136bc5a0,&puStack_38);
  }
  return uRam00000001136bc591;
}



/* Entry: 1054c676c; end: 1054c67ab;  */

void FUN_1054c676c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa64e0();
  uRam00000001136bc591 = (undefined1)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054c67ac; end: 1054c685b; -[SCCameraGreenScreenModeConfigurationImpl _isEnabledInSnapEditor] */

undefined * FUN_1054c67ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126b9b20;
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2409e0(puVar5,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  return puVar5;
}



/* Entry: 1054c685c; end: 1054c689f; -[SCCameraGreenScreenModeConfigurationImpl cameraModeLensId] */

void FUN_1054c685c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  ppuVar1 = ppuVar2;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f76af8;
    _objc_retain(&PTR____CFConstantStringClassReference_110f76af8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1054c68a0; end: 1054c68ab; -[SCCameraGreenScreenModeConfigurationImpl cameraModeIdentifier] */

void FUN_1054c68a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfce230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b9b28,PTR_s_greenScreenMode_1125d1230);
  return;
}



/* Entry: 1054c68ac; end: 1054c68b3; -[SCCameraGreenScreenModeConfigurationImpl alwaysShowUserEducation] */

undefined8 FUN_1054c68ac(void)

{
  return 0;
}



/* Entry: 1054c68b4; end: 1054c68bb; -[SCCameraGreenScreenModeConfigurationImpl userEducationEnabled] */

undefined8 FUN_1054c68b4(void)

{
  return 0;
}



/* Entry: 1054c68bc; end: 1054c68c3; -[SCCameraGreenScreenModeConfigurationImpl onboardingDialogGifDownloadableUrl] */

undefined8 FUN_1054c68bc(void)

{
  return 0;
}



/* Entry: 1054c68c4; end: 1054c68cb; -[SCCameraGreenScreenModeConfigurationImpl onboardingDialogImageDownloadableUrl] */

undefined8 FUN_1054c68c4(void)

{
  return 0;
}



/* Entry: 1054c68cc; end: 1054c68d7; -[SCCameraGreenScreenModeConfigurationImpl .cxx_destruct] */

void FUN_1054c68cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c68d8; end: 1054c6943; -[SCCameraImageDegradationLevelLoggerConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1054c68d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8910;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054c6944; end: 1054c69c3; -[SCCameraImageDegradationLevelLoggerConfigurationImpl loggerEnabled] */

long FUN_1054c6944(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 1054c69c4; end: 1054c6a4f; -[SCCameraImageDegradationLevelLoggerConfigurationImpl imageDegradationLevelModelName] */

void FUN_1054c69c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25d780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1054c6a50; end: 1054c6ad7; -[SCCameraImageDegradationLevelLoggerConfigurationImpl sampleRate] */

undefined8 FUN_1054c6a50(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  func_0x00010bfb2cc0(0);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1054c6ad8; end: 1054c6b57; -[SCCameraImageDegradationLevelLoggerConfigurationImpl shouldScaleImage] */

long FUN_1054c6ad8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 1054c6b58; end: 1054c6bdf; -[SCCameraImageDegradationLevelLoggerConfigurationImpl imageScaleFactorThreshold] */

float FUN_1054c6b58(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained(uVar1);
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f440();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (float)(uVar4 & 0xffffffff);
}



/* Entry: 1054c6be0; end: 1054c6c5f; -[SCCameraImageDegradationLevelLoggerConfigurationImpl shouldRotateImage] */

long FUN_1054c6be0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 1054c6c60; end: 1054c6cdf; -[SCCameraImageDegradationLevelLoggerConfigurationImpl excludeMainCamera] */

long FUN_1054c6c60(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 1054c6ce0; end: 1054c6ce7; -[SCCameraImageDegradationLevelLoggerConfigurationImpl .cxx_destruct] */

void FUN_1054c6ce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1054c6ce8; end: 1054c6d27; -[SCCameraLensNightModeConfigurationImpl shouldApplyNightModeWhenRingFlashEnabled] */

undefined8 FUN_1054c6ce8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa4ea0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c6d28; end: 1054c6d33; -[SCCameraLensNightModeConfigurationImpl cameraModeIdentifier] */

void FUN_1054c6d28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0da410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b9b28,PTR_s_nightMode_112614318);
  return;
}



/* Entry: 1054c6d34; end: 1054c6e4b; -[SCCameraLensNightModeConfigurationImpl cameraModeLensId] */

void FUN_1054c6d34(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  if (lRam00000001136bc5a8 != -1) {
    func_0x00010002a2fc(0x1136bc5a8,&PTR___NSConcreteGlobalBlock_110890520);
  }
  ppuVar5 = ppuRam00000001136bc5b0;
  if (ppuRam00000001136bc5b0 == (undefined **)0x0) {
    lVar1 = param_1;
    func_0x00010bed0880();
    if (lVar1 - 1U < 3) {
      ppuVar5 = (undefined **)(&PTR_PTR_110890540)[lVar1 - 1U];
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf928a0();
      _objc_release(uVar2);
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)uVar3 == 0) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0da460();
        func_0x00010c0df7c0(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar4;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar4);
        _objc_release(uVar3);
      }
    }
  }
  else {
    _objc_retain(ppuRam00000001136bc5b0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 1054c6e4c; end: 1054c6e8f;  */

void FUN_1054c6e4c(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c08fa60();
  uVar1 = ppuRam00000001136bc5b0;
  if (ppuVar2 != (undefined **)0x0) {
    ppuRam00000001136bc5b0 = &PTR____CFConstantStringClassReference_110daafd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1054c6e90; end: 1054c6f3b; -[SCCameraLensNightModeConfigurationImpl brightnessBoostAlgorithm] */

undefined8 FUN_1054c6e90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010bed0880();
  if (lVar1 - 1U < 3) {
    uVar2 = *(undefined8 *)(&UNK_10ddb0810 + (lVar1 - 1U) * 8);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf928a0();
    _objc_release(uVar3);
    if ((int)uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf21220();
      _objc_release(uVar2);
      uVar2 = 2;
      if ((int)uVar3 != 2) {
        uVar2 = 0;
      }
      if ((int)uVar3 == 1) {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



/* Entry: 1054c6f3c; end: 1054c6fc7; -[SCCameraLensNightModeConfigurationImpl minimumScreenBrightness] */

double FUN_1054c6f3c(float param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  lVar1 = param_2;
  func_0x00010bf91920();
  dVar4 = -1.0;
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ce5c0();
    if (param_1 <= 0.0) {
      dVar4 = 0.8;
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ce5c0();
      dVar4 = (double)param_1;
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
  }
  return dVar4;
}



/* Entry: 1054c6fc8; end: 1054c714b; -[SCCameraLensNightModeConfigurationImpl sceneBrightnessControlPoints] */

void FUN_1054c6fc8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar1 = param_1;
  func_0x00010bed0880();
  if (lVar1 - 1U < 3) {
    puVar6 = (&PTR_PTR_110890558)[lVar1 - 1U];
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf928a0();
    _objc_release(uVar2);
    puVar6 = PTR____NSArray0__struct_11034ab48;
    if ((int)uVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf25d60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      lVar5 = *(long *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar5;
      func_0x00010bf25d80();
      _objc_release(lVar5);
      if (lVar1 != 0) {
        uVar9 = 0;
        do {
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c296de0(uVar3,param_2,uVar9);
          func_0x00010c0df740(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4,param_2,puVar6);
          _objc_release(puVar6);
          uVar9 = uVar9 + 1;
          uVar7 = *(ulong *)(param_1 + 0x10);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bf25d80();
          _objc_release(uVar7);
        } while (uVar9 < uVar8);
      }
      puVar6 = puVar4;
      func_0x00010bf51e00(puVar4);
      _objc_release(uVar3);
      _objc_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1054c714c; end: 1054c72cf; -[SCCameraLensNightModeConfigurationImpl screenBrightnessControlPoints] */

void FUN_1054c714c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar1 = param_1;
  func_0x00010bed0880();
  if (lVar1 - 1U < 3) {
    puVar6 = (&PTR_PTR_110890570)[lVar1 - 1U];
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf928a0();
    _objc_release(uVar2);
    puVar6 = PTR____NSArray0__struct_11034ab48;
    if ((int)uVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c150e40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      lVar5 = *(long *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar5;
      func_0x00010c150e60();
      _objc_release(lVar5);
      if (lVar1 != 0) {
        uVar9 = 0;
        do {
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c296de0(uVar3,param_2,uVar9);
          func_0x00010c0df740(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4,param_2,puVar6);
          _objc_release(puVar6);
          uVar9 = uVar9 + 1;
          uVar7 = *(ulong *)(param_1 + 0x10);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c150e60();
          _objc_release(uVar7);
        } while (uVar9 < uVar8);
      }
      puVar6 = puVar4;
      func_0x00010bf51e00(puVar4);
      _objc_release(uVar3);
      _objc_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1054c72d0; end: 1054c7367; -[SCCameraLensNightModeConfigurationImpl shouldPreventScreenBrightnessOverrideWhenFlashIsOn] */

ulong FUN_1054c72d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  lVar1 = param_1;
  func_0x00010bed0880();
  if (lVar1 - 1U < 3) {
    uVar6 = (uint)(lVar1 - 1U) ^ 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf928a0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar4 = *(ulong *)(param_1 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c232120();
      _objc_release(uVar4);
      return uVar5;
    }
    uVar6 = 0;
  }
  return (ulong)(uVar6 & 1);
}



/* Entry: 1054c7368; end: 1054c7433; -[SCCameraLensNightModeConfigurationImpl gammaCorrectionBoostStrength] */

double FUN_1054c7368(float param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  lVar1 = param_2;
  func_0x00010bed0880();
  if (lVar1 - 1U < 3) {
    dVar4 = *(double *)(&UNK_10ddb0828 + (lVar1 - 1U) * 8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf928a0();
    _objc_release(uVar2);
    dVar4 = 0.0;
    if ((int)uVar3 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f960();
      dVar4 = 0.75;
      if (0.0 < param_1) {
        uVar2 = *(undefined8 *)(param_2 + 0x10);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f960();
        dVar4 = (double)param_1;
        _objc_release(uVar2);
      }
      _objc_release(uVar3);
    }
  }
  return dVar4;
}



/* Entry: 1054c7434; end: 1054c7507; -[SCCameraLensNightModeConfigurationImpl gammaCorrectionMidTone] */

double FUN_1054c7434(float param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  lVar1 = param_2;
  func_0x00010bed0880();
  if (lVar1 - 1U < 3) {
    dVar4 = *(double *)(&UNK_10ddb0840 + (lVar1 - 1U) * 8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf928a0();
    _objc_release(uVar2);
    dVar4 = 0.0;
    if ((int)uVar3 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cd2e0();
      if (param_1 <= 0.0) {
        dVar4 = 0.3;
      }
      else {
        uVar2 = *(undefined8 *)(param_2 + 0x10);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cd2e0();
        dVar4 = (double)param_1;
        _objc_release(uVar2);
      }
      _objc_release(uVar3);
    }
  }
  return dVar4;
}



/* Entry: 1054c7508; end: 1054c750f; -[SCCameraLensNightModeConfigurationImpl alwaysShowUserEducation] */

undefined8 FUN_1054c7508(void)

{
  return 0;
}



/* Entry: 1054c7510; end: 1054c7517; -[SCCameraLensNightModeConfigurationImpl userEducationEnabled] */

undefined8 FUN_1054c7510(void)

{
  return 0;
}



/* Entry: 1054c7518; end: 1054c751f; -[SCCameraLensNightModeConfigurationImpl onboardingDialogGifDownloadableUrl] */

undefined8 FUN_1054c7518(void)

{
  return 0;
}



/* Entry: 1054c7520; end: 1054c7527; -[SCCameraLensNightModeConfigurationImpl onboardingDialogImageDownloadableUrl] */

undefined8 FUN_1054c7520(void)

{
  return 0;
}



/* Entry: 1054c7528; end: 1054c7557; -[SCCameraLensNightModeConfigurationImpl .cxx_destruct] */

void FUN_1054c7528(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c7558; end: 1054c76eb; -[SCCameraLensStackingConfigurationImpl init] */

undefined1 * FUN_1054c7558(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar1 = &uStack_130;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_128 = PTR_PTR_1126e8920;
  uStack_130 = param_1;
  _objc_msgSendSuper2(&uStack_130,PTR_s_init_1125d9248);
  lVar4 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined ***)((long)puVar1 + 8) = &PTR__OBJC_CLASS___NSConstantArray_11117ebe0;
    _objc_release(uVar6);
    lVar7 = *(long *)((long)puVar1 + 8);
    _objc_retain(lVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    _objc_retain(lVar7);
    param_3 = &uStack_120;
    lVar4 = lVar7;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar8 = *plStack_110;
      do {
        lVar9 = 0;
        do {
          if (*plStack_110 != lVar8) {
            _objc_enumerationMutation(lVar7);
          }
          func_0x00010befa160(puVar2);
          lVar9 = lVar9 + 1;
        } while (lVar4 != lVar9);
        param_3 = &uStack_120;
        lVar4 = lVar7;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar7);
    puVar3 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar2);
    _objc_release(lVar7);
    lVar4 = *(long *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c08fa60();
  if (puVar1 == (undefined8 *)0x0) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    puVar5 = *(undefined1 **)(lVar4 + 0x10);
    func_0x00010bf4b900(puVar5);
  }
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 1054c76ec; end: 1054c7743; -[SCCameraLensStackingConfigurationImpl enabledForCameraModeIdentifier:] */

undefined8 FUN_1054c76ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf4b900(uVar2,param_2,param_3);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1054c7744; end: 1054c776b; -[SCCameraLensStackingConfigurationImpl stackCombinations] */

void FUN_1054c7744(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054c776c; end: 1054c776f; -[SCCameraLensStackingConfigurationImpl test_updateBestCombination:] */

void FUN_1054c776c(void)

{
  return;
}



/* Entry: 1054c7770; end: 1054c778b; -[SCCameraLensStackingConfigurationImpl test_bestCombination] */

void FUN_1054c7770(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054c778c; end: 1054c77c7; -[SCCameraLensStackingConfigurationImpl .cxx_destruct] */

void FUN_1054c778c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c77c8; end: 1054c7837; -[SCCameraMiniCarouselConfigurationImpl bottomActionBarVariant] */

undefined8 FUN_1054c77c8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = 0x110bfe60;
  func_0x00010c067fc0();
  if (iVar1 == 0) {
    uVar3 = uVar2;
    func_0x00010beee060();
    iVar1 = (int)uVar3;
  }
  if (iVar1 - 2U < 3) {
    uVar3 = *(undefined8 *)(&UNK_10ddb0860 + (ulong)(iVar1 - 2U) * 8);
  }
  else {
    uVar3 = 2;
  }
  _objc_release(uVar2);
  return uVar3;
}



/* Entry: 1054c7838; end: 1054c789b; -[SCCameraMiniCarouselConfigurationImpl creativeToolbarVariant] */

undefined1 FUN_1054c7838(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  iVar2 = 0x110bfe60;
  func_0x00010c067fc0();
  if (iVar2 == 0) {
    uVar4 = uVar3;
    func_0x00010bf5ae80();
    iVar2 = (int)uVar4;
  }
  uVar1 = 2;
  if (iVar2 != 3) {
    uVar1 = iVar2 == 2;
  }
  _objc_release(uVar3);
  return uVar1;
}



/* Entry: 1054c789c; end: 1054c78db; -[SCCameraMiniCarouselConfigurationImpl memoriesModalScrollDelegateDisabled] */

undefined8 FUN_1054c789c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c8f00();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c78dc; end: 1054c791b; -[SCCameraMiniCarouselConfigurationImpl memoriesFetchBeforeStartupCompletionEnabled] */

undefined8 FUN_1054c78dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c8a80();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c791c; end: 1054c7963; -[SCCameraMiniCarouselConfigurationImpl memoriesMaxCameraRollItemsCount] */

int FUN_1054c791c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c27c0();
  iVar1 = 10;
  if ((int)uVar3 != 0) {
    iVar1 = (int)uVar3;
  }
  _objc_release(uVar2);
  return iVar1;
}



/* Entry: 1054c7964; end: 1054c79a7; -[SCCameraMiniCarouselConfigurationImpl lensCarouselCellTapZone] */

bool FUN_1054c7964(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf32ba0();
  _objc_release(uVar1);
  return (int)uVar2 == 2;
}



/* Entry: 1054c79a8; end: 1054c79e7; -[SCCameraMiniCarouselConfigurationImpl lensCarouselAlwaysOnRequired] */

undefined8 FUN_1054c79a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf32400();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c79e8; end: 1054c7a27; -[SCCameraMiniCarouselConfigurationImpl lensCarouselStopDecelerationOnOriginal] */

undefined8 FUN_1054c79e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf32b60();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c7a28; end: 1054c7a67; -[SCCameraMiniCarouselConfigurationImpl lensCarouselLensBorderCropEnabled] */

undefined8 FUN_1054c7a28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf328c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c7a68; end: 1054c7aa7; -[SCCameraMiniCarouselConfigurationImpl lensCarouselHapticsOnScrollEnabled] */

undefined8 FUN_1054c7a68(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf32800();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c7aa8; end: 1054c7aff; -[SCCameraMiniCarouselConfigurationImpl cameraRollItemResetButtonPosition] */

bool FUN_1054c7aa8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = 0x110bfe60;
  func_0x00010c067fc0();
  if (iVar1 == 0) {
    uVar3 = uVar2;
    func_0x00010bf2a900(uVar2);
    iVar1 = (int)uVar3;
  }
  _objc_release(uVar2);
  return iVar1 == 2;
}



/* Entry: 1054c7b00; end: 1054c7b3f; -[SCCameraMiniCarouselConfigurationImpl alwyasShowEmptyMemoriesButton] */

undefined8 FUN_1054c7b00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22de00();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c7b40; end: 1054c7b7f; -[SCCameraMiniCarouselConfigurationImpl isSwipeToDismissEnabled] */

undefined8 FUN_1054c7b40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c080660();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c7b80; end: 1054c7bbf; -[SCCameraMiniCarouselConfigurationImpl isMemoriesCameraWarmupEnabled] */

undefined8 FUN_1054c7b80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c077a00();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c7bc0; end: 1054c7bff; -[SCCameraMiniCarouselConfigurationImpl isMiniCarouselToSnappableImprovementsEnabled] */

undefined8 FUN_1054c7bc0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c077dc0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c7c00; end: 1054c7c3f; -[SCCameraMiniCarouselConfigurationImpl isOperaPresentationAnimationEnabled] */

undefined8 FUN_1054c7c00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c079360();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c7c40; end: 1054c7c9b; -[SCCameraMiniCarouselConfigurationImpl thumbnailLoadingStyle] */

undefined8 FUN_1054c7c40(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = 0x110bfe60;
  func_0x00010c067fc0();
  if (iVar1 == 0) {
    uVar3 = uVar2;
    func_0x00010c26dfc0();
    iVar1 = (int)uVar3;
  }
  uVar3 = 2;
  if (iVar1 != 3) {
    uVar3 = 0;
  }
  _objc_release(uVar2);
  return uVar3;
}



/* Entry: 1054c7c9c; end: 1054c7cdb; -[SCCameraMiniCarouselConfigurationImpl shouldShowGradientBackgroundView] */

undefined8 FUN_1054c7c9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22dbc0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c7cdc; end: 1054c7d37; -[SCCameraMiniCarouselConfigurationImpl navigationResetTimeout] */

double FUN_1054c7cdc(double param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d6aa0();
  dVar2 = 3.0;
  if (0.0 < param_1) {
    func_0x00010c0d6aa0(uVar1);
    dVar2 = param_1;
  }
  _objc_release(uVar1);
  return dVar2;
}



/* Entry: 1054c7d38; end: 1054c7d77; -[SCCameraMiniCarouselConfigurationImpl operaSwipeToDismissImmediatelyResetCarouselEnabled] */

undefined8 FUN_1054c7d38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0eb5c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c7d78; end: 1054c7db7; -[SCCameraMiniCarouselConfigurationImpl operaPresentationAnimationUnblockCarouselEnabled] */

undefined8 FUN_1054c7d78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ead00();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c7db8; end: 1054c7df7; -[SCCameraMiniCarouselConfigurationImpl captureButtonCarouselSwipeEnabled] */

undefined8 FUN_1054c7db8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06e240();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c7df8; end: 1054c7e37; -[SCCameraMiniCarouselConfigurationImpl shouldActionBarUseCapriPreviewButtonSize] */

undefined8 FUN_1054c7df8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beee040();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c7e38; end: 1054c7e77; -[SCCameraMiniCarouselConfigurationImpl shouldActionBarHighlightButtonUseCapriPreviewButtonColor] */

undefined8 FUN_1054c7e38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beede80();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c7e78; end: 1054c7eb7; -[SCCameraMiniCarouselConfigurationImpl backgroundFadingTransitionOnCrSwipeEnabled] */

undefined8 FUN_1054c7e78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf13fa0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c7eb8; end: 1054c7ef7; -[SCCameraMiniCarouselConfigurationImpl inlineCarouselCaptureButtonScaleDownOnCrSwipeEnabled] */

undefined8 FUN_1054c7eb8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c065340();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c7ef8; end: 1054c7f47; -[SCCameraMiniCarouselConfigurationImpl enableGalleryCarouselCopyLinkButton] */

undefined8 FUN_1054c7ef8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f440();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c7f48; end: 1054c7f77; -[SCCameraMiniCarouselConfigurationImpl .cxx_destruct] */

void FUN_1054c7f48(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c7f78; end: 1054c8023; -[SCCameraMultiCamModeConfigurationImpl setupCofValuesIfNeeded] */

void FUN_1054c7f78(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  if (((*(byte *)(param_1 + 0x10) & 1) == 0) &&
     (lVar1 = param_1, func_0x00010be44680(), (int)lVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x10) = 1;
    ppuVar2 = *(undefined ***)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bfa8c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    ppuVar4 = ppuVar3;
    func_0x00010c08fa60();
    ppuVar2 = &PTR____CFConstantStringClassReference_110f76ad8;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar2 = ppuVar3;
    }
    _objc_retain(ppuVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(undefined ***)(param_1 + 0x18) = ppuVar2;
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
    return;
  }
  return;
}



/* Entry: 1054c8024; end: 1054c8087; -[SCCameraMultiCamModeConfigurationImpl isEnabledInCameraViewType:] */

void FUN_1054c8024(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be44680();
  if (((((int)uVar1 != 0) && (param_3 < 0xd)) && ((1L << (param_3 & 0x3f) & 0x1540U) == 0)) &&
     (param_3 == 9)) {
                    /* WARNING: Could not recover jumptable at 0x00010be40130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isEnabledInDirectorMode_11256d9e8);
    return;
  }
  return;
}



/* Entry: 1054c8088; end: 1054c815b; -[SCCameraMultiCamModeConfigurationImpl _isEnabledInDirectorMode] */

void FUN_1054c8088(undefined8 param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1054c811c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bc5d0 != -1) {
    func_0x00010002a2fc(0x1136bc5d0,&puStack_48);
  }
  if ((bRam00000001136bc5c8 & 1) != 0) {
    func_0x00010be44680(param_1);
  }
  return;
}



/* Entry: 1054c815c; end: 1054c81a3; -[SCCameraMultiCamModeConfigurationImpl cameraModeLensId] */

void FUN_1054c815c(long param_1)

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



/* Entry: 1054c81a4; end: 1054c81af; -[SCCameraMultiCamModeConfigurationImpl cameraModeIdentifier] */

void FUN_1054c81a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d1d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b9b28,PTR_s_multiCameraMode_112612158);
  return;
}



/* Entry: 1054c81b0; end: 1054c81b7; -[SCCameraMultiCamModeConfigurationImpl alwaysShowUserEducation] */

undefined8 FUN_1054c81b0(void)

{
  return 0;
}



/* Entry: 1054c81b8; end: 1054c81bf; -[SCCameraMultiCamModeConfigurationImpl userEducationEnabled] */

undefined8 FUN_1054c81b8(void)

{
  return 0;
}



/* Entry: 1054c81c0; end: 1054c8207; -[SCCameraMultiCamModeConfigurationImpl onboardingDialogGifDownloadableUrl] */

void FUN_1054c81c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa8ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054c8208; end: 1054c824f; -[SCCameraMultiCamModeConfigurationImpl onboardingDialogImageDownloadableUrl] */

void FUN_1054c8208(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa8cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054c8250; end: 1054c8327; -[SCCameraMultiCamModeConfigurationImpl isReverseCameraActivatorEnabled] */

void FUN_1054c8250(undefined8 param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1054c82e8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bc5d8 != -1) {
    func_0x00010002a2fc(0x1136bc5d8,&puStack_48);
  }
  if (cRam00000001136bc5c9 == '\x01') {
    func_0x00010be44680(param_1);
  }
  return;
}



/* Entry: 1054c8328; end: 1054c8367; -[SCCameraMultiCamModeConfigurationImpl dualCamInLensCarouselLabelSeenCountMax] */

undefined8 FUN_1054c8328(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa6680();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c8368; end: 1054c83a7; -[SCCameraMultiCamModeConfigurationImpl dualCamInLensCarouselTooltipSeenCountMax] */

undefined8 FUN_1054c8368(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa66a0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c83a8; end: 1054c83e7; -[SCCameraMultiCamModeConfigurationImpl selectDualCameraButtonOnDualCameraLens] */

undefined8 FUN_1054c83a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa9fe0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c83e8; end: 1054c8417; -[SCCameraMultiCamModeConfigurationImpl .cxx_destruct] */

void FUN_1054c83e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c8418; end: 1054c848b; -[SCCameraMuteStateManagementConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1054c8418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8938;
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



/* Entry: 1054c848c; end: 1054c84cb; -[SCCameraMuteStateManagementConfigurationImpl consistentMuteStateInCameraEnabled] */

undefined8 FUN_1054c848c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa5ca0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054c84cc; end: 1054c84d7; -[SCCameraMuteStateManagementConfigurationImpl .cxx_destruct] */

void FUN_1054c84cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c84d8; end: 1054c854b; -[SCCameraOptimizedExposureConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1054c84d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8940;
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



/* Entry: 1054c854c; end: 1054c85bf; -[SCCameraOptimizedExposureConfigurationImpl isOptimizedExposureEnabled] */

undefined1 FUN_1054c854c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1054c85c0;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc5e8 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136bc5e8,&puStack_38);
  }
  return uRam00000001136bc5e0;
}



/* Entry: 1054c85c0; end: 1054c85ff;  */

void FUN_1054c85c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa9060();
  uRam00000001136bc5e0 = (undefined1)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054c8600; end: 1054c8673; -[SCCameraOptimizedExposureConfigurationImpl isFaceDrivenAutoExposureEnabledForBackCamera] */

undefined1 FUN_1054c8600(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1054c8674;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc5f0 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136bc5f0,&puStack_38);
  }
  return uRam00000001136bc5e1;
}



/* Entry: 1054c8674; end: 1054c86b3;  */

void FUN_1054c8674(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa6a00();
  uRam00000001136bc5e1 = (undefined1)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054c86b4; end: 1054c8727; -[SCCameraOptimizedExposureConfigurationImpl isFaceDrivenAutoExposureEnabledForFrontCamera] */

undefined1 FUN_1054c86b4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1054c8728;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc5f8 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136bc5f8,&puStack_38);
  }
  return uRam00000001136bc5e2;
}



/* Entry: 1054c8728; end: 1054c8767;  */

void FUN_1054c8728(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa6a20();
  uRam00000001136bc5e2 = (undefined1)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054c8768; end: 1054c8773; -[SCCameraOptimizedExposureConfigurationImpl .cxx_destruct] */

void FUN_1054c8768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054c8774; end: 1054c88a3; -[SCCameraPostModeConfigurationImpl initWithCircumstanceEngine:] */

undefined8 * FUN_1054c8774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e8948;
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



/* Entry: 1054c88a4; end: 1054c892b;  */

void FUN_1054c88a4(long param_1,undefined8 param_2)

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
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010be13240(lVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}


