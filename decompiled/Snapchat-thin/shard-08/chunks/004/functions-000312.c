/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061681f4; end: 106168233;  */

void FUN_1061681f4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdc1080(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bedaae0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106168234; end: 10616828b; -[SCFeatureFourByThreeAspectRatioImpl stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106168234(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740a68;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112740a6c;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10616828c; end: 106168383; -[SCFeatureFourByThreeAspectRatioImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616828c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112740a00;
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf318a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f8a0(param_1,param_2,uVar2,uVar5,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106168384; end: 1061684c7; -[SCFeatureFourByThreeAspectRatioImpl usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106168384(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c8510;
  func_0x00010bf25980();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_68 = puVar1;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined8 *)(param_1 + _DAT_112740a78));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c8510;
  puStack_58 = puVar2;
  func_0x00010c0cfd60();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + _DAT_112740a14) == '\x01') {
    uVar6 = *(undefined1 *)(param_1 + _DAT_112740a64);
  }
  else {
    uVar6 = 0;
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_60 = puVar3;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_58,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(puVar1 + _DAT_112740a78) = 0;
  return;
}



/* Entry: 1061684c8; end: 1061684d7; -[SCFeatureFourByThreeAspectRatioImpl resetMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061684c8(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_112740a78) = 0;
  return;
}



/* Entry: 1061684d8; end: 1061684e7; -[SCFeatureFourByThreeAspectRatioImpl didRegisterProviderToken:noFormatFoundError:] */

void FUN_1061684d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be18ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__fourByThreeAspectRatioDidActiva_112563d58,0);
    return;
  }
  return;
}



/* Entry: 1061684e8; end: 10616850b; -[SCFeatureFourByThreeAspectRatioImpl didUnregisterProviderToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061684e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112740a7c);
  if (lVar1 != param_3) {
    return;
  }
  *(undefined8 *)(param_1 + _DAT_112740a7c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10616850c; end: 106168517; -[SCFeatureFourByThreeAspectRatioImpl featureNameForToken:] */

undefined ** FUN_10616850c(void)

{
  return &PTR____CFConstantStringClassReference_110e42db8;
}



/* Entry: 106168518; end: 10616856b; -[SCFeatureFourByThreeAspectRatioImpl _viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106168518(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740a24);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16a700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10616856c; end: 1061685ab; -[SCFeatureFourByThreeAspectRatioImpl _viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616856c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740a24);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16a700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061685ac; end: 10616861f; -[SCFeatureFourByThreeAspectRatioImpl _updateLensGestureViewFrameWithFrameRenderRegion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061685ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  
  uVar1 = param_5;
  _CGRectIsEmpty();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2872d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + (long)_DAT_112740a74),
             PTR_s_updateLensGestureViewFrameWithFr_11267f6d8);
  return;
}



/* Entry: 106168620; end: 10616865b; -[SCFeatureFourByThreeAspectRatioImpl _didTapAspectRatioToggleButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106168620(long param_1,undefined8 param_2)

{
  func_0x00010bea40e0(param_1,param_2,(*(byte *)(param_1 + _DAT_112740a14) ^ 0xff) & 1,1);
                    /* WARNING: Could not recover jumptable at 0x00010be50570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logAspectRatioButtonTap_112571af8);
  return;
}



/* Entry: 10616865c; end: 1061686e3; -[SCFeatureFourByThreeAspectRatioImpl _logAspectRatioButtonTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616865c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *(long *)(param_1 + _DAT_112740a78) = *(long *)(param_1 + _DAT_112740a78) + 1;
  lVar2 = (long)_DAT_112740a38;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b800();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061686e4; end: 10616896f; -[SCFeatureFourByThreeAspectRatioImpl _setFourByThreeAspectRatioActivated:isUserInitiated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061686e4(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  
  if ((param_4 & 1) == 0) {
    lVar10 = (long)_DAT_112740a5c;
  }
  else {
    if (*(long *)(param_1 + _DAT_112740a58) != 0) {
      func_0x00010bf9d480();
    }
    lVar10 = (long)_DAT_112740a5c;
    if (*(long *)(param_1 + lVar10) != 0) {
      puVar1 = PTR_PTR_1126affa8;
      func_0x00010c22bc20(PTR_PTR_1126affa8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8760();
      _objc_release(puVar1);
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_112740a08);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c236340();
    _objc_release(uVar2);
  }
  uVar8 = *(ulong *)(param_1 + lVar10);
  if (uVar8 < 8) {
    if ((1L << (uVar8 & 0x3f) & 0x54U) == 0) {
      if ((1L << (uVar8 & 0x3f) & 0xa8U) == 0) goto LAB_10616895c;
      func_0x00010bddb5a0(param_1,param_2,param_3);
      if ((int)param_3 == 0) goto LAB_1061688cc;
      bVar7 = *(byte *)(param_1 + _DAT_112740a4c);
    }
    else {
      func_0x00010bddb5a0(param_1,param_2,param_3);
      if ((param_3 & 1) == 0) {
LAB_1061688cc:
        func_0x00010beaa080(param_1,param_2,*(undefined1 *)(param_1 + _DAT_112740a50));
        func_0x00010be18ee0(param_1,param_2,param_3);
        goto LAB_1061688ec;
      }
      bVar7 = 1;
    }
    func_0x00010beaa080(param_1,param_2,bVar7 & 1);
    func_0x00010be18ee0(param_1,param_2,param_3);
LAB_106168808:
    if ((*(byte *)(param_1 + _DAT_112740a34) & 1) == 0) {
      lVar10 = (long)_DAT_112740a7c;
      if (*(long *)(param_1 + lVar10) != 0) {
        return;
      }
      uVar3 = *(undefined8 *)(param_1 + _DAT_1127409fc);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + _DAT_112740a0c);
      func_0x00010bf70f80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010bfb6520();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c1276a0(uVar3,param_2,uVar5,param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + lVar10);
      *(undefined8 *)(param_1 + lVar10) = uVar6;
      _objc_release(uVar9);
      _objc_release(uVar5);
      _objc_release(uVar2);
      _objc_release(uVar4);
      goto LAB_106168930;
    }
  }
  else {
LAB_10616895c:
    func_0x00010be18ee0(param_1,param_2,param_3);
    if ((int)param_3 != 0) goto LAB_106168808;
  }
LAB_1061688ec:
  lVar10 = (long)_DAT_112740a7c;
  if (*(long *)(param_1 + lVar10) == 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127409fc);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281f80();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  *(undefined8 *)(param_1 + lVar10) = 0;
LAB_106168930:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106168970; end: 10616897f; -[SCFeatureFourByThreeAspectRatioImpl _setIsRecording:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106168970(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112740a44) = param_3;
  return;
}



/* Entry: 106168980; end: 106168a0b; -[SCFeatureFourByThreeAspectRatioImpl _setVideoStabilization:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106168980(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x0001000cb554();
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740a04);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b00d0;
  func_0x00010c209000(PTR_PTR_1126b00d0,param_2,0,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f160(uVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106168a0c; end: 106168b07; -[SCFeatureFourByThreeAspectRatioImpl _captureCurrentStabilizationStateForActivating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106168a0c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  
  if ((*(char *)(param_1 + _DAT_112740a64) != '\x01') || (*(long *)(param_1 + _DAT_112740a04) == 0))
  {
    return;
  }
  lVar1 = *(long *)(param_1 + _DAT_112740a24);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5e320();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c24d060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x00010bf60220();
  if (param_3 == 0) {
    if (*(byte *)(param_1 + _DAT_112740a14) == 0) goto LAB_106168af0;
    piVar4 = (int *)&DAT_112740a4c;
  }
  else {
    if ((*(byte *)(param_1 + _DAT_112740a14) & 1) != 0) goto LAB_106168af0;
    piVar4 = (int *)&DAT_112740a50;
  }
  *(bool *)(param_1 + *piVar4) = lVar2 != 0;
LAB_106168af0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106168b08; end: 106168b2b; -[SCFeatureFourByThreeAspectRatioImpl _updateToggleButtonStateWithIsMultiCamActive:isMusicFeatureActive:isBatchCaptureActive:isLensCarouselActive:isFrontFacingCamera:isContinuousCaptureStateActive:] */

void FUN_106168b08(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5,
                  uint param_6,uint param_7,uint param_8)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea1f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setAspectRatioToggleButtonVisib_112586168,
             ((param_8 | param_6 | param_5 | param_4 | param_3 | param_7 ^ 1) ^ 0xffffffff) & 1);
  return;
}



/* Entry: 106168b2c; end: 106168c1f; -[SCFeatureFourByThreeAspectRatioImpl _fourByThreeAspectRatioDidActivate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106168b2c(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(byte *)(param_1 + _DAT_112740a14) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112740a14) = (char)param_3;
  uVar2 = 0xd5;
  if (param_3 == 0) {
    uVar2 = 0x25;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112740a60;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fadc0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112740a24);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16a700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106168c20; end: 106168d77; -[SCFeatureFourByThreeAspectRatioImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106168c20(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112740a58,0);
  _objc_destroyWeak(param_1 + _DAT_112740a40);
  _objc_storeStrong(param_1 + _DAT_112740a28,0);
  _objc_storeStrong(param_1 + _DAT_112740a6c,0);
  _objc_storeStrong(param_1 + _DAT_112740a74,0);
  _objc_storeStrong(param_1 + _DAT_112740a38,0);
  _objc_storeStrong(param_1 + _DAT_112740a30,0);
  _objc_storeStrong(param_1 + _DAT_112740a2c,0);
  _objc_storeStrong(param_1 + _DAT_112740a20,0);
  _objc_storeStrong(param_1 + _DAT_112740a1c,0);
  _objc_destroyWeak(param_1 + _DAT_112740a18);
  _objc_storeStrong(param_1 + _DAT_112740a24,0);
  _objc_storeStrong(param_1 + _DAT_112740a7c,0);
  _objc_storeStrong(param_1 + _DAT_112740a68,0);
  _objc_storeStrong(param_1 + _DAT_112740a60,0);
  _objc_storeStrong(param_1 + _DAT_112740a0c,0);
  _objc_storeStrong(param_1 + _DAT_112740a08,0);
  _objc_storeStrong(param_1 + _DAT_112740a04,0);
  _objc_storeStrong(param_1 + _DAT_112740a00,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127409fc,0);
  return;
}



/* Entry: 106168d78; end: 106168f37; -[SCFeatureFrameProcessLatencyReporter initWithCameraHardwareResource:closeupCaptureMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106168d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR_PTR_1126efe98;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar8 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010bf318a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf51e00();
    uVar6 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0b7ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f8a0(puVar1);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar8);
    uVar8 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010bfb6e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112740a80),uVar2);
    _objc_release(uVar2);
    _objc_release(uVar8);
    lVar9 = (long)_DAT_112740a84;
    _objc_retain(param_4);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_4;
    _objc_release(uVar8);
  }
  func_0x00010bec0d80(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106168f38; end: 106168f97; -[SCFeatureFrameProcessLatencyReporter dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106168f38(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c256420();
  lVar2 = (long)_DAT_112740a88;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126efe98;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106168f98; end: 10616908b; -[SCFeatureFrameProcessLatencyReporter beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106168f98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112740a8c);
  *(undefined8 *)(param_1 + _DAT_112740a8c) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10616908c; end: 10616914f;  */

void FUN_10616908c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106169150; end: 106169197;  */

void FUN_106169150(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00160();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106169198; end: 1061693a3; -[SCFeatureFrameProcessLatencyReporter startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106169198(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_78,param_1);
  lVar5 = (long)_DAT_112740a90;
  if (*(long *)(param_1 + lVar5) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar4);
    uVar4 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c2528c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1061693a4;
    puStack_88 = &UNK_11090d240;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a8,auStack_78);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uVar4);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
  }
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1061693a4; end: 106169447;  */

void FUN_1061693a4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e39e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106169448; end: 1061694c3;  */

void FUN_106169448(long param_1,undefined8 param_2)

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



/* Entry: 1061694c4; end: 1061694f7; -[SCFeatureFrameProcessLatencyReporter stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061694c4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740a90;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061694f8; end: 106169637; -[SCFeatureFrameProcessLatencyReporter _startObservingUltraWideCameraActivation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061694f8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar5 = (long)_DAT_112740a88;
  if (*(long *)(param_1 + lVar5) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar4);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112740a84);
    func_0x00010bfa1820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0cfd80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar3 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 106169638; end: 10616968f;  */

void FUN_106169638(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf1f3c0(param_2);
    func_0x00010bdfcb60(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106169690; end: 1061696e7; -[SCFeatureFrameProcessLatencyReporter _didScheduleRecordWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106169690(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112740a80;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7e920();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061696e8; end: 10616973f; -[SCFeatureFrameProcessLatencyReporter _didChangeState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061696e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112740a80;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73100();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106169740; end: 10616977b; -[SCFeatureFrameProcessLatencyReporter _didChangeUltraWideCameraActiveState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106169740(long param_1)

{
  param_1 = param_1 + _DAT_112740a80;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf737a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10616977c; end: 1061697f7; -[SCFeatureFrameProcessLatencyReporter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616977c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112740a90,0);
  _objc_storeStrong(param_1 + _DAT_112740a84,0);
  _objc_destroyWeak(param_1 + _DAT_112740a80);
  _objc_storeStrong(param_1 + _DAT_112740a88,0);
  _objc_storeStrong(param_1 + _DAT_112740a8c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740a94,0);
  return;
}



/* Entry: 1061697f8; end: 106169a2f; -[SCFeatureFrameRateRelaxationImpl initWithConfiguration:cameraHardwareResource:deviceCapacityAnalyzer:nightModeActivationObservable:cameraDeviceSettingsResolver:cameraViewControllerLifecycleObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1061697f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126efea0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112740a98;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112740a9c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112740aa0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112740aa4;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112740aa8;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112740aac;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740ab0) = 1;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740ab4);
    *(undefined **)((long)puVar1 + (long)_DAT_112740ab4) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740ab8);
    *(undefined **)((long)puVar1 + (long)_DAT_112740ab8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740abc);
    *(undefined **)((long)puVar1 + (long)_DAT_112740abc) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106169a30; end: 106169b6b; -[SCFeatureFrameRateRelaxationImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106169a30(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740aa0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  lVar5 = (long)_DAT_112740ab4;
  lVar2 = *(long *)(param_1 + lVar5);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112740aa8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106169b6c;
    puStack_48 = &UNK_110841f80;
    uStack_40 = uVar4;
    uStack_38 = uVar3;
    _objc_retain(uVar3);
    _objc_retain(uVar4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(uVar1);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  puStack_68 = PTR_PTR_1126efea0;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106169b6c; end: 106169c63;  */

void FUN_106169b6c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010c281f80(*(undefined8 *)(param_1 + 0x28),param_2,
                            *(undefined8 *)(lStack_108 + lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 106169c64; end: 106169c67; -[SCFeatureFrameRateRelaxationImpl configureWithView:] */

void FUN_106169c64(void)

{
  return;
}



/* Entry: 106169c68; end: 106169e0f; -[SCFeatureFrameRateRelaxationImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106169c68(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112740a98);
  func_0x00010c071800();
  if ((iVar1 != 0) && (lVar6 = (long)_DAT_112740ac0, *(long *)(param_1 + lVar6) == 0)) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar2;
    _objc_release(uVar5);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112740a9c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf51e00();
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,param_1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112740abc);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(uVar4);
    func_0x00010c0f7fc0(uVar5);
    func_0x00010bec0d40(param_1);
    func_0x00010bec0ba0(param_1);
    func_0x00010bec0a20(param_1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112740aa0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 106169e10; end: 106169e43;  */

void FUN_106169e10(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9d1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106169e44; end: 106169e47; -[SCFeatureFrameRateRelaxationImpl resetMetrics] */

void FUN_106169e44(void)

{
  return;
}



/* Entry: 106169e48; end: 106169e53; -[SCFeatureFrameRateRelaxationImpl usageMetrics] */

undefined * FUN_106169e48(void)

{
  return PTR____NSDictionary0__struct_11034ab58;
}



/* Entry: 106169e54; end: 106169ecb; -[SCFeatureFrameRateRelaxationImpl _seedInitialStateFrom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106169e54(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bfb24e0();
    *(char *)(param_1 + _DAT_112740ac4) = (char)lVar1;
    lVar1 = param_3;
    func_0x00010bf70d80();
    _objc_release(param_3);
    *(long *)(param_1 + _DAT_112740ab0) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010be87350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__reconcileLayersWithReason__11257f670,
               &PTR____CFConstantStringClassReference_110dd6058);
    return;
  }
  return;
}



/* Entry: 106169ecc; end: 10616a12f; -[SCFeatureFrameRateRelaxationImpl _startObservingState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106169ecc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740a9c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_78,param_1);
  uVar1 = uVar2;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c2528c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10616a130;
  puStack_88 = &UNK_11090d240;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c160440();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2880c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar2);
  return;
}



/* Entry: 10616a130; end: 10616a1d3;  */

void FUN_10616a130(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e39e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10616a1d4; end: 10616a21b;  */

void FUN_10616a1d4(long param_1,undefined8 param_2)

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



/* Entry: 10616a21c; end: 10616a2bf;  */

void FUN_10616a21c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e38c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10616a2c0; end: 10616a323;  */

void FUN_10616a2c0(long param_1,long param_2,long param_3)

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



/* Entry: 10616a324; end: 10616a42b; -[SCFeatureFrameRateRelaxationImpl _startObservingNightMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616a324(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740aa4);
  func_0x00010c0e0ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10616a42c; end: 10616a48b;  */

void FUN_10616a42c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010bdfc9a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10616a48c; end: 10616a593; -[SCFeatureFrameRateRelaxationImpl _startObservingCameraPageLifecycle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616a48c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740aac);
  func_0x00010c0e0ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10616a594; end: 10616a6ff;  */

void FUN_10616a594(long param_1,undefined8 param_2)

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
  pcStack_78 = FUN_10616a704;
  puStack_70 = &UNK_110849200;
  _objc_copyWeak(auStack_68,param_1 + 0x20);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x10616a734;
  puStack_98 = &UNK_110849200;
  _objc_copyWeak(auStack_90,param_1 + 0x20);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x10616a764;
  puStack_c0 = &UNK_110849200;
  _objc_copyWeak(auStack_b8,param_1 + 0x20);
  _objc_copyWeak(auStack_e0,param_1 + 0x20);
  func_0x00010c0c15c0(param_2);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 10616a700; end: 10616a703;  */

void FUN_10616a700(void)

{
  return;
}



/* Entry: 10616a704; end: 10616a7c3;  */

void FUN_10616a704(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea2880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10616a7c4; end: 10616a7ef; -[SCFeatureFrameRateRelaxationImpl _setCameraPageActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616a7c4(long param_1,undefined8 param_2,uint param_3)

{
  if ((*(byte *)(param_1 + _DAT_112740ad0) != param_3) &&
     (*(char *)(param_1 + _DAT_112740ad0) = (char)param_3, param_3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be87350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__reconcileLayersWithReason__11257f670,
               &PTR____CFConstantStringClassReference_110e42dd8);
    return;
  }
  return;
}



/* Entry: 10616a7f0; end: 10616a843; -[SCFeatureFrameRateRelaxationImpl _didChangeState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616a7f0(long param_1,undefined8 param_2,uint param_3)

{
  func_0x00010bfb24e0();
  if (*(byte *)(param_1 + _DAT_112740ac4) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112740ac4) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be87350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__reconcileLayersWithReason__11257f670,
             &PTR____CFConstantStringClassReference_110e42df8);
  return;
}



/* Entry: 10616a844; end: 10616a867; -[SCFeatureFrameRateRelaxationImpl _shouldTransitionLowLightWithBrightness:isCurrentlyLowLight:] */

bool FUN_10616a844(float param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  
  bVar1 = 0.5 < param_1;
  if (param_4 == 0) {
    bVar1 = param_1 < -0.5;
  }
  return bVar1;
}



/* Entry: 10616a868; end: 10616a94f; -[SCFeatureFrameRateRelaxationImpl startObservingManagedDeviceCapacityAnalyzerEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616a868(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112740ad4;
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



/* Entry: 10616a950; end: 10616aa0b;  */

void FUN_10616a950(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd4e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10616aa0c; end: 10616aa13;  */

void FUN_10616aa0c(void)

{
  return;
}



/* Entry: 10616aa14; end: 10616aa9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616aa14(undefined4 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined4 uStack_38;
  
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10616aaa0;
    puStack_48 = &UNK_110868698;
    lStack_40 = param_2;
    uStack_38 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_2 + _DAT_112740abc),param_3,&puStack_60);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10616aaa0; end: 10616aab3;  */

void FUN_10616aaa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdff210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR_s__didReceiveBrightness__11255d620);
  return;
}



/* Entry: 10616aab4; end: 10616ab13; -[SCFeatureFrameRateRelaxationImpl _didReceiveBrightness:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616aab4(undefined4 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  *(undefined4 *)(param_2 + _DAT_112740ad8) = param_1;
  lVar2 = (long)_DAT_112740ac8;
  lVar1 = param_2;
  func_0x00010beb6c80(param_2,param_3,*(undefined1 *)(param_2 + lVar2));
  if ((int)lVar1 != 0) {
    *(byte *)(param_2 + lVar2) = *(byte *)(param_2 + lVar2) ^ 1;
                    /* WARNING: Could not recover jumptable at 0x00010be87350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s__reconcileLayersWithReason__11257f670,
               &PTR____CFConstantStringClassReference_110e42e18);
    return;
  }
  return;
}



/* Entry: 10616ab14; end: 10616ab47; -[SCFeatureFrameRateRelaxationImpl stopObservingManagedDeviceCapacityAnalyzerEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616ab14(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740ad4;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10616ab48; end: 10616ab9b; -[SCFeatureFrameRateRelaxationImpl _didChangeCaptureDevicePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616ab48(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf70d80();
  if (param_3 == *(long *)(param_1 + _DAT_112740ab0)) {
    return;
  }
  *(long *)(param_1 + _DAT_112740ab0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be87350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__reconcileLayersWithReason__11257f670,
             &PTR____CFConstantStringClassReference_110e42e38);
  return;
}



/* Entry: 10616ab9c; end: 10616abc3; -[SCFeatureFrameRateRelaxationImpl _didChangeNightModeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616ab9c(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112740acc) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112740acc) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be87350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__reconcileLayersWithReason__11257f670,
             &PTR____CFConstantStringClassReference_110e42e58);
  return;
}



/* Entry: 10616abc4; end: 10616ad4f; -[SCFeatureFrameRateRelaxationImpl _reconcileLayersWithReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616abc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112740ab0;
  lVar2 = param_1;
  func_0x00010be48b20();
  if (*(char *)(param_1 + _DAT_112740ac8) == '\x01') {
    lVar3 = param_1;
    func_0x00010be48b20();
  }
  else {
    lVar3 = 0;
  }
  if (((*(byte *)(param_1 + _DAT_112740acc) & 1) == 0) &&
     (*(char *)(param_1 + _DAT_112740ac4) != '\x01')) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1;
    func_0x00010be48b20();
  }
  uVar6 = *(undefined8 *)(param_1 + lVar5);
  uVar1 = *(undefined1 *)(param_1 + _DAT_112740ad0);
  _objc_initWeak(auStack_58,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10616ad50;
  puStack_90 = &UNK_110911640;
  _objc_copyWeak(auStack_88,auStack_58);
  lStack_80 = lVar2;
  uStack_78 = uVar6;
  lStack_70 = lVar3;
  lStack_68 = lVar4;
  uStack_60 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_a8);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10616ad50; end: 10616add7;  */

void FUN_10616ad50(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be87320();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be87320();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be87320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10616add8; end: 10616b057; -[SCFeatureFrameRateRelaxationImpl _reconcileLayer:desiredFloor:forPosition:cameraPageActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616add8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  ulong param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112740aa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112740ab4;
  lVar4 = *(long *)(param_1 + lVar9);
  func_0x00010c0e00e0(lVar4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_112740ab8;
  lVar5 = *(long *)(param_1 + lVar10);
  func_0x00010c0e00e0(lVar5,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0 || lVar5 == 0) {
    bVar1 = false;
  }
  else {
    lVar6 = lVar5;
    func_0x00010c067fc0();
    bVar1 = lVar6 != param_5;
  }
  if (param_4 == 0) {
    if (lVar4 != 0) {
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + lVar9),param_2,puVar2);
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + lVar10),param_2,puVar2);
      func_0x00010c281f80(uVar3,param_2,lVar4);
    }
  }
  else if (((param_6 & 1) != 0) || ((bool)(lVar4 != 0 & (bVar1 ^ 1U)))) {
    lVar6 = param_1;
    if (lVar4 == 0) {
      func_0x00010bebdc40(param_1,param_2,param_3,param_4,param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c1276a0(uVar3,param_2,lVar6,param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar9),param_2,uVar7,puVar2);
      _objc_release(uVar7);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar10),param_2,puVar8,puVar2);
      _objc_release(puVar8);
    }
    else {
      if (!bVar1) goto LAB_10616b01c;
      func_0x00010bebdc40(param_1,param_2,param_3,param_4,param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c1276a0(uVar3,param_2,lVar6,param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar9),param_2,uVar7,puVar2);
      _objc_release(uVar7);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar10),param_2,puVar8,puVar2);
      _objc_release(puVar8);
      func_0x00010c281f80(uVar3,param_2,lVar4);
    }
    _objc_release(lVar6);
  }
LAB_10616b01c:
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10616b058; end: 10616b1cf; -[SCFeatureFrameRateRelaxationImpl _softMapForLayer:floor:position:] */

void FUN_10616b058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b70f0;
  _objc_alloc(PTR_PTR_1126b70f0);
  func_0x00010c028c60();
  puVar2 = PTR_PTR_1126b7128;
  func_0x00010bf29480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ae620();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e42e78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2adb40(puVar2,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  puStack_58 = puVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &puStack_50;
  puStack_50 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar5,&puStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) &&
     (___stack_chk_fail(), ppuVar5 != (undefined **)0x0)) {
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e42e98);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10616b1d0; end: 10616b217; -[SCFeatureFrameRateRelaxationImpl _layerDescription:] */

void FUN_10616b1d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e42e98);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10616b218; end: 10616b283; -[SCFeatureFrameRateRelaxationImpl didRegisterProviderToken:noFormatFoundError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616b218(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    lVar1 = param_1;
    func_0x00010be48ac0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + _DAT_112740ab4),param_2,lVar1);
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + _DAT_112740ab8),param_2,lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10616b284; end: 10616b2e7; -[SCFeatureFrameRateRelaxationImpl didUnregisterProviderToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616b284(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be48ac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + _DAT_112740ab4),param_2,lVar1);
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + _DAT_112740ab8),param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10616b2e8; end: 10616b363; -[SCFeatureFrameRateRelaxationImpl featureNameForToken:] */

void FUN_10616b2e8(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  func_0x00010be48ac0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_1 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e42eb8;
  }
  else {
    func_0x00010c2827c0();
    func_0x00010c14de00(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e42e78);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10616b364; end: 10616b4bb; -[SCFeatureFrameRateRelaxationImpl _layerKeyForToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10616b364(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar8 = (long)_DAT_112740ab4;
  lVar1 = *(long *)(param_1 + lVar8);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = auStack_e8;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  iVar6 = (int)puVar4;
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        puVar7 = *(undefined1 **)(lStack_128 + lVar10 * 8);
        lVar3 = *(long *)(param_1 + lVar8);
        puVar5 = (undefined8 *)puVar7;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        iVar6 = (int)puVar4;
        if (lVar3 == param_3) {
          _objc_retain(puVar7);
          goto LAB_10616b46c;
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      puVar4 = auStack_e8;
      lVar2 = lVar1;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
      iVar6 = (int)puVar4;
    } while (lVar2 != 0);
  }
  puVar7 = (undefined1 *)0x0;
LAB_10616b46c:
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  if (puVar5 == (undefined8 *)0x3) {
    puVar4 = *(undefined1 **)(param_3 + _DAT_112740a98);
    if (iVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c08c1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (puVar4,PTR_s_layer3NightModeOrFlashMinFpsBack_112600a80);
      return puVar4;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c08c1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar4,PTR_s_layer3NightModeOrFlashMinFpsFron_112600a88);
    return puVar4;
  }
  if (puVar5 == (undefined8 *)0x2) {
    puVar4 = *(undefined1 **)(param_3 + _DAT_112740a98);
    if (iVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c08c150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(puVar4,PTR_s_layer2LowLightMinFpsBack_112600a60);
      return puVar4;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c08c170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar4,PTR_s_layer2LowLightMinFpsFront_112600a68);
    return puVar4;
  }
  if (puVar5 == (undefined8 *)0x1) {
    puVar4 = *(undefined1 **)(param_3 + _DAT_112740a98);
    if (iVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c08c110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(puVar4,PTR_s_layer1DefaultMinFpsBack_112600a50);
      return puVar4;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c08c130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar4,PTR_s_layer1DefaultMinFpsFront_112600a58);
    return puVar4;
  }
  return (undefined1 *)0x0;
}



/* Entry: 10616b4bc; end: 10616b523; -[SCFeatureFrameRateRelaxationImpl _layerValueForLayer:isBack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10616b4bc(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_3 == 3) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112740a98);
    if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c08c1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_layer3NightModeOrFlashMinFpsBack_112600a80)
      ;
      return uVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c08c1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_layer3NightModeOrFlashMinFpsFron_112600a88);
    return uVar1;
  }
  if (param_3 == 2) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112740a98);
    if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c08c150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_layer2LowLightMinFpsBack_112600a60);
      return uVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c08c170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_layer2LowLightMinFpsFront_112600a68);
    return uVar1;
  }
  if (param_3 != 1) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740a98);
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c08c110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_layer1DefaultMinFpsBack_112600a50);
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c08c130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_layer1DefaultMinFpsFront_112600a58);
  return uVar1;
}



/* Entry: 10616b524; end: 10616b57f; -[SCFeatureFrameRateRelaxationImpl _devicePositionDescription:] */

void FUN_10616b524(undefined8 param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 1) && (param_3 != 0)) {
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e42ed8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10616b580; end: 10616b64f; -[SCFeatureFrameRateRelaxationImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616b580(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112740ab8,0);
  _objc_storeStrong(param_1 + _DAT_112740ab4,0);
  _objc_storeStrong(param_1 + _DAT_112740abc,0);
  _objc_storeStrong(param_1 + _DAT_112740ad4,0);
  _objc_storeStrong(param_1 + _DAT_112740ac0,0);
  _objc_storeStrong(param_1 + _DAT_112740aac,0);
  _objc_storeStrong(param_1 + _DAT_112740aa8,0);
  _objc_storeStrong(param_1 + _DAT_112740aa4,0);
  _objc_storeStrong(param_1 + _DAT_112740aa0,0);
  _objc_storeStrong(param_1 + _DAT_112740a9c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740a98,0);
  return;
}



/* Entry: 10616b650; end: 10616b81b; -[SCFeatureGreenScreenModeImpl initWithValdiRuntimeProvider:lensMode:cameraHardwareResource:cameraHardwareServicesAPI:greenScreenModeConfig:cameraViewType:cameraUserActionLogger:mainCameraScan:toggleCameraRef:featureUpdateEventSubject:viewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:applicationLifecycleEvents:directorModePresenting:cameraFeaturePerformanceFeatureScopedLoggerFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10616b650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126efea8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithCameraModeConfig_cameraH_112526150,param_7,param_5,
                      param_4,param_12,param_8,param_10,0,0,0,param_13,param_14,param_15,param_16);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740adc,param_6);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740ae0,param_3);
    lVar6 = (long)_DAT_112740ae4;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_9;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112740ae8;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_11;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740aec);
    *(undefined **)((long)puVar1 + (long)_DAT_112740aec) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_17;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf54f40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740af0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740af0) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  _objc_release(param_17);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10616b81c; end: 10616b8e7; -[SCFeatureGreenScreenModeImpl usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616b81c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)(param_1 + _DAT_112740aec);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e42f18;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e42ef8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined8 *)(param_1 + _DAT_112740af4));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_38,&ppuStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  func_0x00010c12adc0(*(undefined8 *)(puVar1 + _DAT_112740aec));
  *(undefined8 *)(puVar1 + _DAT_112740af4) = 0;
  return;
}



/* Entry: 10616b8e8; end: 10616b91f; -[SCFeatureGreenScreenModeImpl resetMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616b8e8(long param_1)

{
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112740aec));
  *(undefined8 *)(param_1 + _DAT_112740af4) = 0;
  return;
}



/* Entry: 10616b920; end: 10616b96b; -[SCFeatureGreenScreenModeImpl loggingParameters] */

void FUN_10616b920(int param_1)

{
  func_0x00010c06dec0();
  if (param_1 != 0) {
    _objc_alloc(PTR_PTR_1126c85f0);
    func_0x00010c018900();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10616b96c; end: 10616ba6f; -[SCFeatureGreenScreenModeImpl detailedCameraModeLogInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616b96c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar4 = param_1;
  func_0x00010bf2b3c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bfecd60();
  _objc_release(lVar4);
  if (lVar2 != 0x7fffffffffffffff) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e42758);
    _objc_release(puVar3);
  }
  lVar4 = *(long *)(param_1 + _DAT_112740afc);
  if (lVar4 == 0) {
    func_0x00010c1d0560(puVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8,
                        &PTR____CFConstantStringClassReference_110db16f8);
  }
  else {
    func_0x0001061a7e54();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1,param_2,lVar4,&PTR____CFConstantStringClassReference_110db16f8);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10616ba70; end: 10616ba83; -[SCFeatureGreenScreenModeImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616ba70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112740b00,param_3);
  return;
}



/* Entry: 10616ba84; end: 10616ba87; -[SCFeatureGreenScreenModeImpl isCameraModeActivated] */

void FUN_10616ba84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06ded0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isCameraModeEnabled_1125f91c0);
  return;
}



/* Entry: 10616ba88; end: 10616ba8f; -[SCFeatureGreenScreenModeImpl cameraModeType] */

undefined8 FUN_10616ba88(void)

{
  return 0xf;
}



/* Entry: 10616ba90; end: 10616ba93; -[SCFeatureGreenScreenModeImpl toolbarItem] */

void FUN_10616ba90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf4dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createToolbarItemIfNeeded_11255ad10);
  return;
}



/* Entry: 10616ba94; end: 10616ba9b; -[SCFeatureGreenScreenModeImpl featureName] */

undefined8 FUN_10616ba94(void)

{
  return 0x1e;
}



/* Entry: 10616ba9c; end: 10616baa3; -[SCFeatureGreenScreenModeImpl loadTimeout] */

undefined8 FUN_10616ba9c(void)

{
  return 1000;
}



/* Entry: 10616baa4; end: 10616baaf; -[SCFeatureGreenScreenModeImpl pendingDependencies] */

undefined * FUN_10616baa4(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 10616bab0; end: 10616babf; -[SCFeatureGreenScreenModeImpl onCameraModePreparationStarted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616bab0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09cd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112740af0),PTR_s_loadingDidStart_112604d60);
  return;
}



/* Entry: 10616bac0; end: 10616bb63; -[SCFeatureGreenScreenModeImpl onCameraModeReady] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616bac0(long param_1)

{
  long lVar1;
  
  func_0x00010c09cd80(*(undefined8 *)(param_1 + _DAT_112740af0));
  lVar1 = param_1;
  func_0x00010c0753e0();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c125270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_refreshDirectorModeUI_112626eb8);
    return;
  }
  if (*(long *)(param_1 + _DAT_112740af8) != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010bf2b3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf4dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc4a0(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10616bb64; end: 10616bbab; -[SCFeatureGreenScreenModeImpl onCameraModePreparationFailed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616bb64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740af0);
  func_0x00010c09e4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09cd00(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10616bbac; end: 10616bddf; -[SCFeatureGreenScreenModeImpl _createToolbarItemIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616bbac(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar5 = (long)_DAT_112740af8;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126c7918;
    _objc_alloc();
    func_0x00010c037be0();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    func_0x00010c1cdb60(*(undefined8 *)(param_1 + lVar5));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c1fb140(uVar3);
    func_0x00010b0aec0c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cdba0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x00010b0aec0c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb640(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x00010c177460(*(undefined8 *)(param_1 + lVar5));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c160fc0(uVar3);
    func_0x0001008b0f58();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1610c0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x0001008b0f70();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1610e0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112740b04);
    *(undefined **)(param_1 + _DAT_112740b04) = puVar1;
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf735a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar4 = *(long *)(param_1 + lVar5);
    _objc_retain(lVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
    _objc_retain(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10616bde0; end: 10616be97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616bde0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c07d660(*(undefined8 *)(param_1 + _DAT_112740af8));
    func_0x00010bea3a80(param_1);
    lVar1 = param_2;
    func_0x00010c273a00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c104260();
    _objc_release(lVar1);
    if (lVar2 == 2) {
      *(long *)(param_1 + _DAT_112740af4) = *(long *)(param_1 + _DAT_112740af4) + 1;
      *(undefined8 *)(param_1 + _DAT_112740afc) = 4;
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10616be98; end: 10616bf17; -[SCFeatureGreenScreenModeImpl _setEnable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616be98(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c06dec0();
  if (param_3 == (int)lVar1) {
    return;
  }
  lVar1 = param_1 + _DAT_112740b00;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c21e900();
  _objc_release(lVar1);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf8ef30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_enable_1125c1570);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf7f9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_disable_1125bd820);
  return;
}



/* Entry: 10616bf18; end: 10616bff7; -[SCFeatureGreenScreenModeImpl enable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616bf18(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126efea8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_enable_1125c1570);
  func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_112740aec));
  puVar3 = PTR_PTR_1126aff08;
  lVar1 = param_1 + _DAT_112740adc;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70d80();
  func_0x00010c06cea0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)puVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112740ae8);
    func_0x00010bfa1820(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c272720();
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 10616bff8; end: 10616c007; -[SCFeatureGreenScreenModeImpl cameraUserActionLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10616bff8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740ae4);
}



/* Entry: 10616c008; end: 10616c047; -[SCFeatureGreenScreenModeImpl setCameraUserActionLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616c008(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740ae4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


