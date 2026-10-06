/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061461c0; end: 1061461cf; -[SCFeatureStackingCameraModeActivationCoordinator onWillDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061461c0(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_1127404f8) = 0;
  return;
}



/* Entry: 1061461d0; end: 1061461e3; -[SCFeatureStackingCameraModeActivationCoordinator onMainCameraViewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061461d0(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_1127404f8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be956f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__restoreModeIfNecessary_112582f58);
  return;
}



/* Entry: 1061461e4; end: 1061461f3; -[SCFeatureStackingCameraModeActivationCoordinator onMainCameraViewDidPartiallyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061461e4(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_1127404f8) = 0;
  return;
}



/* Entry: 1061461f4; end: 106146203; -[SCFeatureStackingCameraModeActivationCoordinator onAppWillEnterForeground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061461f4(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_1127404fc) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be956f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__restoreModeIfNecessary_112582f58);
  return;
}



/* Entry: 106146204; end: 106146217; -[SCFeatureStackingCameraModeActivationCoordinator onAppDidEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106146204(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_1127404fc) = 1;
  return;
}



/* Entry: 106146218; end: 106146227; -[SCFeatureStackingCameraModeActivationCoordinator _isPreviousLensDummyLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106146218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c070fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127404f4),PTR_s_isDummyLens_1125f9df8);
  return;
}



/* Entry: 106146228; end: 1061463bf; -[SCFeatureStackingCameraModeActivationCoordinator _observeCaptureState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106146228(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar8 = (long)_DAT_112740514;
  if (*(long *)(param_1 + lVar8) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar1;
    _objc_release(uVar7);
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127404d0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0b7ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c160440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    uVar6 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 1061463c0; end: 106146463;  */

void FUN_1061463c0(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e38c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106146464; end: 10614648f;  */

void FUN_106146464(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e2d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106146490; end: 1061464c7; -[SCFeatureStackingCameraModeActivationCoordinator onCaptureDevicePositionDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106146490(long param_1,undefined8 param_2)

{
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + _DAT_1127404ec),param_2,
                      &PTR___NSConcreteGlobalBlock_110910d58);
                    /* WARNING: Could not recover jumptable at 0x00010be956f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__restoreModeIfNecessary_112582f58);
  return;
}



/* Entry: 1061464c8; end: 1061464cf;  */

void FUN_1061464c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e2d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_onCaptureDevicePositionDidChange_112616568);
  return;
}



/* Entry: 1061464d0; end: 1061465cf; -[SCFeatureStackingCameraModeActivationCoordinator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061464d0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127404e8,0);
  _objc_storeStrong(param_1 + _DAT_1127404dc,0);
  _objc_storeStrong(param_1 + _DAT_112740504,0);
  _objc_storeStrong(param_1 + _DAT_1127404e4,0);
  _objc_storeStrong(param_1 + _DAT_1127404f4,0);
  _objc_storeStrong(param_1 + _DAT_112740500,0);
  _objc_storeStrong(param_1 + _DAT_112740514,0);
  _objc_storeStrong(param_1 + _DAT_112740510,0);
  _objc_storeStrong(param_1 + _DAT_11274050c,0);
  _objc_destroyWeak(param_1 + _DAT_1127404d8);
  _objc_destroyWeak(param_1 + _DAT_1127404d4);
  _objc_storeStrong(param_1 + _DAT_1127404d0,0);
  _objc_storeStrong(param_1 + _DAT_1127404ec,0);
  _objc_destroyWeak(param_1 + _DAT_112740508);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127404cc);
  return;
}



/* Entry: 1061465d0; end: 1061466eb; -[SCFeatureCameraNotFoundAlert initWithCameraHardwareResource:notificationManager:cameraNotFoundAlertConfiguration:coreCameraLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1061465d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126efde0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112740518;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274051c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112740520;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112740524;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061466ec; end: 10614672f; -[SCFeatureCameraNotFoundAlert dealloc] */

void FUN_1061466ec(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c256420();
  puStack_28 = PTR_PTR_1126efde0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106146730; end: 1061468a3; -[SCFeatureCameraNotFoundAlert activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106146730(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((*(byte *)(param_1 + _DAT_112740528) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_112740528) = 1;
  lVar8 = (long)_DAT_112740518;
  uVar1 = *(ulong *)(param_1 + lVar8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf70d80();
  if ((uVar1 == 0) && (uVar1 = uVar2, func_0x00010c073ec0(), (uVar1 & 1) != 0)) {
    uVar7 = 0;
  }
  else {
    uVar1 = uVar2;
    func_0x00010bf70d80();
    if ((uVar1 != 1) || (uVar1 = uVar2, func_0x00010c06ce60(), (int)uVar1 == 0)) goto LAB_1061467e0;
    uVar7 = 1;
  }
  func_0x00010bdc4c20(param_1,param_2,uVar7);
LAB_1061467e0:
  uVar3 = *(ulong *)(param_1 + _DAT_112740520);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfdc0e0();
  _objc_release(uVar3);
  if ((uVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bf318a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0b7ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f8a0(param_1,param_2,uVar7,uVar2,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1061468a4; end: 106146a3f; -[SCFeatureCameraNotFoundAlert startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061468a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar6 = (long)_DAT_11274052c;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
    _objc_initWeak(auStack_68,param_1);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf70e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106146a40; end: 106146ae3;  */

void FUN_106146a40(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e21c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106146ae4; end: 106146b17;  */

void FUN_106146ae4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc4c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106146b18; end: 106146b4b; -[SCFeatureCameraNotFoundAlert stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106146b18(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274052c;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106146b4c; end: 106146b4f; -[SCFeatureCameraNotFoundAlert _activateDeviceDidFailForDevicePosition:] */

void FUN_106146b4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb8410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showCameraNotFoundAlertIfNeeded_11258baa8);
  return;
}



/* Entry: 106146b50; end: 106146d87; -[SCFeatureCameraNotFoundAlert _showCameraNotFoundAlertIfNeededForDevicePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106146b50(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112740520;
  uVar1 = *(ulong *)(param_1 + lVar8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdc0e0();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a6d80();
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b1370;
  func_0x00010c25d500(PTR_PTR_1126b1370,param_2,0xed);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4,param_2,puVar5,&PTR____CFConstantStringClassReference_110dad058);
  _objc_release(puVar5);
  func_0x00010703d028();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4,param_2,puVar5,&PTR____CFConstantStringClassReference_110dad0b8);
  _objc_release(puVar5);
  func_0x00010703d040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4,param_2,puVar5,&PTR____CFConstantStringClassReference_110dad858);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b1370;
  _objc_alloc(PTR_PTR_1126b1370);
  puVar6 = puVar4;
  func_0x00010bf51e00(puVar4);
  func_0x00010c030320(puVar5,param_2,puVar6,2);
  _objc_release(puVar6);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274051c);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa0a0();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112740524);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2160(uVar3,param_2,param_3,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar3);
  func_0x00010c256420(param_1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106146d88; end: 106146df7; -[SCFeatureCameraNotFoundAlert .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106146d88(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274052c,0);
  _objc_storeStrong(param_1 + _DAT_112740524,0);
  _objc_storeStrong(param_1 + _DAT_112740520,0);
  _objc_storeStrong(param_1 + _DAT_11274051c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740518,0);
  return;
}



/* Entry: 106146df8; end: 106146e7b; -[SCFeatureCameraUserActionLogger initWithCameraUserActionLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106146df8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126efde8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112740530;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106146e7c; end: 106146ebf; -[SCFeatureCameraUserActionLogger cameraUserActionDidStartWithItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106146e7c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740530);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106146ec0; end: 106146f13; -[SCFeatureCameraUserActionLogger cameraUserActionDidStartWithItem:isActivatingMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106146ec0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740530);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106146f14; end: 106146f83; -[SCFeatureCameraUserActionLogger cameraUserActionDidStart:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106146f14(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_112740530);
  _objc_retain(param_5);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b7c0(param_1,param_2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106146f84; end: 106147003; -[SCFeatureCameraUserActionLogger cameraUserActionDidStart:touchLocation:isActivatingMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106146f84(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_112740530);
  _objc_retain(param_5);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b7e0(param_1,param_2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106147004; end: 10614705b; -[SCFeatureCameraUserActionLogger cameraUserActionDidEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106147004(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740530);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b740();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10614705c; end: 1061470cb; -[SCFeatureCameraUserActionLogger cameraUserActionDidEndWithItem:action:cameraStateTransitions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614705c(long param_1)

{
  undefined8 in_x4;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740530);
  _objc_retain(in_x4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b780();
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061470cc; end: 10614711f; -[SCFeatureCameraUserActionLogger cameraUserActionDidEndWithItem:action:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061470cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740530);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106147120; end: 106147177; -[SCFeatureCameraUserActionLogger cameraUserActionDidNotComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106147120(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740530);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b7a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106147178; end: 10614718b; -[SCFeatureCameraUserActionLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106147178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740530,0);
  return;
}



/* Entry: 10614718c; end: 1061472bf;  */

void FUN_10614718c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
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
  pcStack_68 = FUN_1061472c0;
  puStack_60 = &UNK_11084ebd0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1061472ec;
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



/* Entry: 1061472c0; end: 1061472eb;  */

void FUN_1061472c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec23a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061472ec; end: 10614736b;  */

void FUN_1061472ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc680();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10614736c; end: 1061473b3;  */

void FUN_10614736c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be36e40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061473b4; end: 10614771f;  */

void FUN_1061473b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_238 [8];
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  undefined1 auStack_1c0 [8];
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
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
  pcStack_90 = FUN_106147720;
  puStack_88 = &UNK_11084ec30;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106147788;
  puStack_b0 = &UNK_11084ec30;
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x1061477b4;
  puStack_d8 = &UNK_11084ec30;
  _objc_copyWeak(auStack_d0,param_1 + 0x20);
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x1061477fc;
  puStack_100 = &UNK_11084ec30;
  _objc_copyWeak(auStack_f8,param_1 + 0x20);
  puStack_140 = puVar1;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x106147828;
  puStack_128 = &UNK_11084ec30;
  _objc_copyWeak(auStack_120,param_1 + 0x20);
  puStack_168 = puVar1;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x106147854;
  puStack_150 = &UNK_11090d2a0;
  _objc_copyWeak(auStack_148,param_1 + 0x20);
  puStack_190 = puVar1;
  uStack_188 = 0xc2000000;
  uStack_180 = 0x106147888;
  puStack_178 = &UNK_11084ec30;
  _objc_copyWeak(auStack_170,param_1 + 0x20);
  puStack_1b8 = puVar1;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_1061478b4;
  puStack_1a0 = &UNK_11090cff0;
  _objc_copyWeak(auStack_198,param_1 + 0x20);
  puStack_1e0 = puVar1;
  uStack_1d8 = 0xc2000000;
  pcStack_1d0 = FUN_10614794c;
  puStack_1c8 = &UNK_11090b9a8;
  _objc_copyWeak(auStack_1c0,param_1 + 0x20);
  puStack_208 = puVar1;
  uStack_200 = 0xc2000000;
  uStack_1f8 = 0x106147978;
  puStack_1f0 = &UNK_11090b9a8;
  _objc_copyWeak(auStack_1e8,param_1 + 0x20);
  puStack_230 = puVar1;
  uStack_228 = 0xc2000000;
  pcStack_220 = FUN_1061479a4;
  puStack_218 = &UNK_11090d380;
  _objc_copyWeak(auStack_210,param_1 + 0x20);
  _objc_copyWeak(auStack_238,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_238);
  _objc_destroyWeak(auStack_210);
  _objc_destroyWeak(auStack_1e8);
  _objc_destroyWeak(auStack_1c0);
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



/* Entry: 106147720; end: 106147787;  */

void FUN_106147720(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9bac0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106147788; end: 1061478b3;  */

void FUN_106147788(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddb0a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061478b4; end: 10614794b;  */

void FUN_1061478b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010bddba80(param_1,param_2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10614794c; end: 1061479a3;  */

void FUN_10614794c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddb8e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061479a4; end: 106147a0b;  */

void FUN_1061479a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc6e0();
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106147a0c; end: 106147a53;  */

void FUN_106147a0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee8a60();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106147a54; end: 106147c6f; -[SCFeatureCaptureComponentImpl stopRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106147a54(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_68 [12];
  uint uStack_5c;
  
  lVar5 = param_2 + _DAT_112740558;
  _objc_loadWeakRetained();
  lVar1 = lVar5;
  func_0x00010c2995c0();
  _objc_release(lVar5);
  if ((int)lVar1 == 0) {
    return;
  }
  lVar5 = (long)_DAT_11274055c;
  if (*(long *)(param_2 + lVar5) == 0) {
    return;
  }
  lVar2 = *(long *)(param_2 + _DAT_112740534);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bef0fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_retain(lVar1);
  if (lVar1 == 0) {
    dVar8 = 0.0;
  }
  else {
    func_0x00010c250f20(auStack_68,lVar1);
    dVar8 = 0.0;
    if ((uStack_5c & 1) != 0) {
      func_0x00010bf95780(auStack_68,lVar1);
      if ((uStack_5c & 1) == 0) {
        _CACurrentMediaTime();
        dVar7 = param_1;
        func_0x00010c250f20(auStack_68,lVar1);
        _CMTimeGetSeconds(auStack_68);
        dVar8 = param_1 - dVar7;
        param_1 = dVar7;
      }
      else {
        func_0x00010bf8b160(auStack_68,lVar1);
        _CMTimeGetSeconds(auStack_68);
        dVar8 = param_1;
      }
    }
  }
  _objc_release(lVar1);
  func_0x00010c0ce520(*(undefined8 *)(param_2 + lVar5));
  puVar4 = PTR_PTR_1126c84d0;
  if (param_1 < dVar8) {
    func_0x00010bf951a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_2 + _DAT_112740560);
    *(undefined **)(param_2 + _DAT_112740560) = puVar4;
    goto LAB_106147c24;
  }
  uVar3 = *(ulong *)(param_2 + lVar5);
  func_0x00010c2701a0();
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_2 + lVar5);
    func_0x00010c0753e0();
    if ((uVar3 & 1) != 0) goto LAB_106147bbc;
    uVar6 = *(undefined8 *)(param_2 + lVar5);
    func_0x00010c06f5e0(uVar6);
  }
  else {
LAB_106147bbc:
    uVar6 = 1;
  }
  lVar5 = param_2;
  _objc_opt_class(param_2);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2ed60(puVar4,param_3,uVar6,&PTR____CFConstantStringClassReference_110e428d8,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + _DAT_112740560);
  *(undefined **)(param_2 + _DAT_112740560) = puVar4;
  _objc_release(uVar6);
LAB_106147c24:
  _objc_release(lVar5);
  func_0x00010bf31100(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(param_2);
  _objc_release(lVar1);
  return;
}



/* Entry: 106147c70; end: 106147d33; -[SCFeatureCaptureComponentImpl abortRecordingWithReason:callsite:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106147c70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = param_1 + _DAT_112740558;
  _objc_loadWeakRetained();
  lVar1 = lVar4;
  func_0x00010c2995c0();
  _objc_release(lVar4);
  if ((int)lVar1 != 0) {
    puVar2 = PTR_PTR_1126c84d0;
    func_0x00010bf2ed60(PTR_PTR_1126c84d0,param_2,1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112740560;
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112740564),param_2,
                        *(undefined8 *)(param_1 + lVar4));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106147d34; end: 106147ddb; -[SCFeatureCaptureComponentImpl prepareForRecordingWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106147d34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274055c);
  *(undefined8 *)(param_1 + _DAT_11274055c) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126c84d0;
  func_0x00010c123c00(PTR_PTR_1126c84d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112740560);
  *(undefined **)(param_1 + _DAT_112740560) = puVar1;
  _objc_release(uVar2);
  func_0x00010bf31100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106147ddc; end: 106148073; -[SCFeatureCaptureComponentImpl captureImageWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106147ddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  double dVar10;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740534);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5e320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b9e08;
  func_0x00010bfe6fa0(PTR_PTR_1126b9e08);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bdd0020();
  if ((int)lVar4 != 0) {
    puVar5 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar1 = *(undefined8 *)(param_1 + _DAT_112740568);
    *(undefined **)(param_1 + _DAT_112740568) = puVar5;
    _objc_release(uVar1);
  }
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740568);
  func_0x00010bfbc3e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  dVar10 = 1.60807493534087e-314;
  puVar6 = auStack_60;
  _objc_copyWeak(puVar6,auStack_58);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1);
  _objc_release(puVar6);
  _objc_release(uVar1);
  func_0x00010bf0aca0(param_3);
  if (dVar10 == 0.0) {
    func_0x0001008e3740();
    func_0x00010c2a87a0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar5 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11274056c;
  lVar4 = param_1 + lVar9;
  _objc_loadWeakRetained();
  _objc_release();
  puVar8 = puVar5;
  if (lVar4 != 0) {
    puVar7 = (undefined *)(param_1 + lVar9);
    _objc_loadWeakRetained(puVar7);
    puVar8 = puVar7;
    func_0x00010c284260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar7);
  }
  puVar5 = PTR_PTR_1126c84d0;
  func_0x00010bf30d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740560);
  *(undefined **)(param_1 + _DAT_112740560) = puVar5;
  _objc_release(uVar1);
  func_0x00010bf31100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(param_1);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106148074; end: 1061480f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148074(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && ((param_2 == 0 || (param_3 != 0)))) {
    lVar1 = param_1 + _DAT_112740558;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf30b40();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061480f4; end: 1061480f7; -[SCFeatureCaptureComponentImpl logTimerModeImageCaptureWithSessionId:filterLensId:] */

void FUN_1061480f4(void)

{
  return;
}



/* Entry: 1061480f8; end: 106148133; -[SCFeatureCaptureComponentImpl activateAudioSessionIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061480f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740534);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106148134; end: 10614816f; -[SCFeatureCaptureComponentImpl relinquishAudioSessionIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148134(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740534);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1288a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106148170; end: 1061483b7; -[SCFeatureCaptureComponentImpl captureServiceActionObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148170(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_112740564;
  lVar6 = *(long *)(param_1 + lVar12);
  if (lVar6 == 0) {
    lVar6 = (long)_DAT_112740570;
    if ((*(byte *)(param_1 + lVar6) & 1) == 0) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      lVar7 = *(long *)(param_1 + _DAT_11274053c);
      _objc_retain(lVar7);
      lVar1 = lVar7;
      func_0x00010bf52a60(lVar7,param_2,&uStack_130,auStack_f0,0x10);
      if (lVar1 != 0) {
        lVar13 = *plStack_120;
        do {
          lVar14 = 0;
          do {
            if (*plStack_120 != lVar13) {
              _objc_enumerationMutation(lVar7);
            }
            uVar2 = *(undefined8 *)(lStack_128 + lVar14 * 8);
            func_0x00010c269d40(uVar2);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = param_1;
            func_0x00010c299620(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = param_1;
            func_0x00010bfe7040(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf18700(uVar2,param_2,lVar3,lVar4);
            _objc_release(lVar4);
            _objc_release(lVar3);
            _objc_release(uVar2);
            lVar14 = lVar14 + 1;
          } while (lVar1 != lVar14);
          lVar1 = lVar7;
          func_0x00010bf52a60(lVar7,param_2,&uStack_130,auStack_f0,0x10);
        } while (lVar1 != 0);
      }
      _objc_release(lVar7);
      *(undefined1 *)(param_1 + lVar6) = 1;
    }
    puVar5 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar12);
    *(undefined **)(param_1 + lVar12) = puVar5;
    _objc_release(uVar2);
    uVar8 = *(undefined8 *)(param_1 + _DAT_112740538);
    uVar9 = *(undefined8 *)(param_1 + lVar12);
    uVar10 = *(undefined8 *)(param_1 + _DAT_112740544);
    uVar11 = *(undefined8 *)(param_1 + _DAT_112740548);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112740540);
    func_0x00010bfa1820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf22920(uVar8,param_2,uVar9,uVar10,uVar11,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    lVar6 = param_1 + _DAT_112740558;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bf9d500();
    _objc_release(lVar6);
    _objc_release(uVar8);
    lVar6 = *(long *)(param_1 + lVar12);
  }
  lVar12 = lVar6;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(lVar12 + _DAT_11274054c);
  puVar5 = PTR_PTR_1126c84d8;
  func_0x00010bf79800(PTR_PTR_1126c84d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar2,param_2,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1061483b8; end: 106148403; -[SCFeatureCaptureComponentImpl recoverWithSnapSessionContext:contentLossReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061483b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274054c);
  puVar1 = PTR_PTR_1126c84d8;
  func_0x00010bf79800(PTR_PTR_1126c84d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106148404; end: 10614848f; -[SCFeatureCaptureComponentImpl _captureServiceScopeCleanup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148404(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740564);
  *(undefined8 *)(param_1 + _DAT_112740564) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274055c);
  *(undefined8 *)(param_1 + _DAT_11274055c) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740568);
  *(undefined8 *)(param_1 + _DAT_112740568) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740560);
  *(undefined8 *)(param_1 + _DAT_112740560) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_112740574) = 0;
  *(undefined1 *)(param_1 + _DAT_112740578) = 0;
  param_1 = param_1 + _DAT_112740558;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12b640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106148490; end: 106148783; -[SCFeatureCaptureComponentImpl _scheduledStartRecordingRequest:state:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148490(float param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  double dVar7;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [16];
  double dVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar3 = (long)_DAT_112740558;
  lVar4 = param_2 + lVar3;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c1e9000();
  _objc_release(lVar4);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1049a0();
  _objc_release(puVar1);
  _objc_copyWeak(auStack_80,param_2 + lVar3);
  lVar4 = (long)_DAT_112740534;
  uVar2 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0861c0(PTR_PTR_1126c84e0);
  fVar5 = param_1 * 0.33 * 1000.0;
  dVar6 = (double)(ulong)(uint)fVar5;
  _CMTimeMake(auStack_98,(long)fVar5,1000);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_106148784;
  puStack_b8 = &UNK_110910d78;
  uStack_a0 = 0;
  _objc_retain(param_5);
  uStack_b0 = param_5;
  _objc_copyWeak(auStack_a8,auStack_80);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfa0(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar2);
  func_0x00010bf6a120(param_4);
  dVar7 = dVar6;
  func_0x00010c123ea0(param_4);
  func_0x00010bdc95c0(dVar6,dVar7,param_2);
  uVar2 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _CMTimeMake(auStack_98,(long)(dVar6 * 1000.0),1000);
  uStack_d8 = 0;
  _objc_copyWeak(auStack_e0,auStack_80);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfa0(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_b0);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106148784; end: 1061487f7;  */

void FUN_106148784(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c0982a0();
  if (iVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c299500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1061487f8; end: 106148807; -[SCFeatureCaptureComponentImpl _adjustedDuration:forSpeedMultiplier:] */

double FUN_1061487f8(double param_1,double param_2)

{
  double dVar1;
  
  dVar1 = param_1 * param_2;
  if (param_2 <= 0.0) {
    dVar1 = param_1;
  }
  return dVar1;
}



/* Entry: 106148808; end: 10614885f; -[SCFeatureCaptureComponentImpl _willStartRecord:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148808(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112740558;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c299640();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106148860; end: 106148897; -[SCFeatureCaptureComponentImpl _startedRecordingVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148860(long param_1)

{
  param_1 = param_1 + _DAT_112740558;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1e9000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106148898; end: 1061488f3; -[SCFeatureCaptureComponentImpl _stoppedRecordingVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148898(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740558;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c299520();
  _objc_release(lVar1);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1e9000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061488f4; end: 1061488ff; -[SCFeatureCaptureComponentImpl _abortedRecordingVideoWithDidCancelCapturerRecording:] */

void FUN_1061488f4(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc3c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__abortedRecordingDelegateMethods_11254e8b0)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec3c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopppedRecordingDelegateMethod_11258e8c8);
  return;
}



/* Entry: 106148900; end: 1061489bb; -[SCFeatureCaptureComponentImpl _canceledStartRecordingRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148900(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740560);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0bcea0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1061489bc; end: 106148a07;  */

void FUN_1061489bc(long param_1,int param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 0) {
      func_0x00010bec3c80(param_1);
    }
    else {
      func_0x00010bdc3c40();
      func_0x00010bddb8e0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106148a08; end: 106148a5f; -[SCFeatureCaptureComponentImpl _stopppedRecordingDelegateMethods] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148a08(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740558;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2995a0();
  _objc_release(lVar1);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  func_0x00010c299520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106148a60; end: 106148ab7; -[SCFeatureCaptureComponentImpl _abortedRecordingDelegateMethods] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148a60(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740558;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c299460();
  _objc_release(lVar1);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  func_0x00010c299440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106148ab8; end: 106148aff; -[SCFeatureCaptureComponentImpl _startedCapturingImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148ab8(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112740578) = 1;
  param_1 = param_1 + _DAT_112740558;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1e9000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106148b00; end: 106148b23; -[SCFeatureCaptureComponentImpl _finishedCapturingImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148b00(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112740578) = 0;
  if ((*(byte *)(param_1 + _DAT_112740574) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bddb790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__captureServiceScopeCleanup_112554780);
  return;
}



/* Entry: 106148b24; end: 106148c0f; -[SCFeatureCaptureComponentImpl _didCaptureImage:discardRelatedData:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148b24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112740558;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf30b60();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar1);
  uVar2 = param_3;
  func_0x00010bfe6ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + _DAT_112740568),param_2,uVar2);
  lVar3 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bfe6fc0();
  _objc_release(lVar3);
  func_0x00010be175e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106148c10; end: 106148c3f; -[SCFeatureCaptureComponentImpl _imageCaptureDidReceiveError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148c10(long param_1)

{
  func_0x00010bf43ca0(*(undefined8 *)(param_1 + _DAT_112740568));
                    /* WARNING: Could not recover jumptable at 0x00010bddb790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__captureServiceScopeCleanup_112554780);
  return;
}



/* Entry: 106148c40; end: 106148caf; -[SCFeatureCaptureComponentImpl _didCaptureVideo:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148c40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112740558;
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2994c0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106148cb0; end: 106148ceb; -[SCFeatureCaptureComponentImpl _videoCaptureDidReceiveError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148cb0(long param_1)

{
  func_0x00010bddb8e0();
  param_1 = param_1 + _DAT_112740558;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2994a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106148cec; end: 106148d77; -[SCFeatureCaptureComponentImpl _capturerWillFinishRecordingWithRecordedVideoFuture:videoSize:placeholderImage:session:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148cec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112740558;
  _objc_retain(param_6);
  _objc_retain(param_5);
  param_3 = param_3 + lVar1;
  _objc_loadWeakRetained(param_3);
  func_0x00010bf30b80(param_1,param_2);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106148d78; end: 106148d8b; -[SCFeatureCaptureComponentImpl _capturerWillBeginRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148d78(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112740574) = 1;
  return;
}



/* Entry: 106148d8c; end: 106148daf; -[SCFeatureCaptureComponentImpl _capturerDidEndRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148d8c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112740574) = 0;
  if ((*(byte *)(param_1 + _DAT_112740578) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bddb790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__captureServiceScopeCleanup_112554780);
  return;
}



/* Entry: 106148db0; end: 106148e03; -[SCFeatureCaptureComponentImpl _asynchronousImageCaptureEnabled:configuration:] */

uint FUN_106148db0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  _objc_retain(param_4);
  func_0x00010bfb24e0();
  if ((param_3 & 1) == 0) {
    uVar1 = param_4;
    func_0x00010c14f160(param_4);
    uVar2 = (uint)uVar1 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 106148e04; end: 106148e23; -[SCFeatureCaptureComponentImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148e04(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112740558);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106148e24; end: 106148e33; -[SCFeatureCaptureComponentImpl imagePromise] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106148e24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740568);
}



/* Entry: 106148e34; end: 106148e73; -[SCFeatureCaptureComponentImpl setImagePromise:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148e34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740568;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106148e74; end: 106148e83; -[SCFeatureCaptureComponentImpl imageCaptureStrategyEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106148e74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740544);
}



/* Entry: 106148e84; end: 106148ec3; -[SCFeatureCaptureComponentImpl setImageCaptureStrategyEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148e84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740544;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106148ec4; end: 106148ed3; -[SCFeatureCaptureComponentImpl videoCaptureStrategyEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106148ec4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740548);
}



/* Entry: 106148ed4; end: 106148f13; -[SCFeatureCaptureComponentImpl setVideoCaptureStrategyEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740548;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106148f14; end: 106148f33; -[SCFeatureCaptureComponentImpl captureConfigurationDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148f14(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274056c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106148f34; end: 106148f73; -[SCFeatureCaptureComponentImpl setCaptureServiceActionObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148f34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740564;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106148f74; end: 10614908b; -[SCFeatureCaptureComponentImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106148f74(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112740564,0);
  _objc_destroyWeak(param_1 + _DAT_11274056c);
  _objc_storeStrong(param_1 + _DAT_112740568,0);
  _objc_destroyWeak(param_1 + _DAT_112740558);
  _objc_storeStrong(param_1 + _DAT_11274053c,0);
  _objc_storeStrong(param_1 + _DAT_112740554,0);
  _objc_storeStrong(param_1 + _DAT_112740550,0);
  _objc_storeStrong(param_1 + _DAT_11274054c,0);
  _objc_storeStrong(param_1 + _DAT_112740548,0);
  _objc_storeStrong(param_1 + _DAT_112740544,0);
  _objc_storeStrong(param_1 + _DAT_11274055c,0);
  _objc_storeStrong(param_1 + _DAT_112740534,0);
  _objc_storeStrong(param_1 + _DAT_11274057c,0);
  _objc_storeStrong(param_1 + _DAT_112740538,0);
  _objc_storeStrong(param_1 + _DAT_112740540,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740560,0);
  return;
}



/* Entry: 10614908c; end: 106149307; -[SCFeatureCaptureControlsImpl initWithCameraHardwareServicesAPI:captureDeviceManager:cameraHardwareResource:circumstanceEngine:cameraUserActionLogger:zoomFactorsFeature:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10614908c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126efdf8;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112740580;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_3;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112740584;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_4;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112740588;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_5;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11274058c;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_6;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112740590;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_7;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112740594;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_8;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010bfef240();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112740598);
    *(undefined **)((long)puVar2 + (long)_DAT_112740598) = puVar4;
    _objc_release(uVar3);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      _objc_initWeak(auStack_78,puVar2);
      puVar4 = PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_80,auStack_78);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11274059c);
      *(undefined **)((long)puVar2 + (long)_DAT_11274059c) = puVar4;
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 106149308; end: 106149347;  */

void FUN_106149308(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf5d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106149348; end: 1061493cb; -[SCFeatureCaptureControlsImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106149348(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    func_0x00010bdec7e0(param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112740580);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1061493cc; end: 10614940b; -[SCFeatureCaptureControlsImpl resetMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061493cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274059c);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ae040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10614940c; end: 106149523; -[SCFeatureCaptureControlsImpl usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614940c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined *)0x2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)puVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c84e8;
    func_0x00010bdc2540();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = *(undefined8 *)(param_1 + _DAT_11274059c);
    func_0x00010bfe6360(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c068520();
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    puVar4 = PTR_PTR_1126b7010;
    func_0x00010bf92680();
    if ((int)puVar4 != 0) {
      func_0x00010befa120(puVar6);
    }
    puVar4 = puVar6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(puVar2 + _DAT_1127405a0);
    *(undefined **)(puVar2 + _DAT_1127405a0) = puVar4;
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  return;
}



/* Entry: 106149524; end: 1061495c7; -[SCFeatureCaptureControlsImpl _createControls] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106149524(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    puVar3 = PTR_PTR_1126b7010;
    func_0x00010bf92680();
    if ((int)puVar3 != 0) {
      func_0x00010befa120(puVar2);
    }
    puVar3 = puVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127405a0);
    *(undefined **)(param_1 + _DAT_1127405a0) = puVar3;
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1061495c8; end: 106149623; -[SCFeatureCaptureControlsImpl _createZoomControl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061495c8(void)

{
  _objc_alloc(PTR_PTR_1126c84e8);
  func_0x00010c034aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106149624; end: 106149627; -[SCFeatureCaptureControlsImpl beginObservingVideoCaptureEvents:imageCaptureEvents:] */

void FUN_106149624(void)

{
  return;
}



/* Entry: 106149628; end: 1061496d7; -[SCFeatureCaptureControlsImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106149628(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112740594,0);
  _objc_storeStrong(param_1 + _DAT_112740590,0);
  _objc_storeStrong(param_1 + _DAT_11274058c,0);
  _objc_storeStrong(param_1 + _DAT_112740598,0);
  _objc_storeStrong(param_1 + _DAT_1127405a0,0);
  _objc_storeStrong(param_1 + _DAT_11274059c,0);
  _objc_storeStrong(param_1 + _DAT_112740588,0);
  _objc_storeStrong(param_1 + _DAT_112740584,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740580,0);
  return;
}



/* Entry: 1061496d8; end: 10614970b; -[SCCameraViewController logCameraOpenCameraRunning] */

void FUN_1061496d8(undefined8 param_1)

{
  func_0x00010bfb6e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24e2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10614970c; end: 106149783; -[SCCameraViewController logCameraOpenPermissionBeingRequested] */

void FUN_10614970c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c0f9d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f9d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2a200(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106149784; end: 10614983f; -[SCCameraViewController scheduleLogForCameraOpenFirstFrameReceivedSuccessfully] */

void FUN_106149784(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x2) {
    return;
  }
  uVar3 = param_1;
  func_0x00010c12f720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb6e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab560(uVar4,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106149840; end: 10614a8a7; -[SCCameraViewController logLivePreview] */

void FUN_106149840(double param_1,undefined **param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  undefined **ppuVar31;
  undefined **ppuVar32;
  undefined **ppuVar33;
  double dVar34;
  double dVar35;
  
  ppuVar2 = param_2;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b080();
  dVar34 = param_1;
  _objc_release(ppuVar2);
  if (param_1 <= 0.0) {
    return;
  }
  puVar3 = PTR_PTR_1126c84f0;
  _objc_alloc_init(PTR_PTR_1126c84f0);
  ppuVar2 = param_2;
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010c0ccac0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c28fc80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008340();
  _objc_release(puVar7);
  if (puVar6 == (undefined *)0x0) goto LAB_10614a860;
  ppuVar2 = param_2;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010bfe6f80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = param_2;
  if (ppuVar4 == (undefined **)0x0) {
    _objc_release(ppuVar2);
LAB_1061499f4:
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar11;
    func_0x00010c2993e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
      goto LAB_106149ac0;
    }
    ppuVar4 = param_2;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar4;
    func_0x00010c2993e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar8;
    func_0x00010bf311e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar8);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
    _objc_release(ppuVar11);
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar11 = param_2;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar11;
      func_0x00010c2993e0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106149a98;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar8 = param_2;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar8;
    func_0x00010bfe6f80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar9;
    func_0x00010bf311e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
    if (ppuVar10 == (undefined **)0x0) goto LAB_1061499f4;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar11;
    func_0x00010bfe6f80();
    _objc_retainAutoreleasedReturnValue();
LAB_106149a98:
    ppuVar2 = ppuVar4;
    func_0x00010bf311e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
LAB_106149ac0:
    _objc_release(ppuVar11);
  }
  func_0x00010c179280(puVar3);
  ppuVar4 = ppuVar5;
  func_0x00010c0e00e0(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baf9ee0();
  func_0x00010c19dbc0(puVar3);
  _objc_release(ppuVar4);
  ppuVar4 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1cfb20(puVar3);
  ppuVar11 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1cfd40(puVar3);
  ppuVar8 = ppuVar5;
  func_0x00010c0e00e0(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1b15e0(puVar3);
  _objc_release(ppuVar8);
  ppuVar8 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1d0160(puVar3);
  ppuVar9 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1d0180(puVar3);
  ppuVar10 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1cfbc0(puVar3);
  ppuVar12 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1cfbe0(puVar3);
  ppuVar13 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1cf940(puVar3);
  ppuVar14 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1cf960(puVar3);
  puVar7 = PTR_PTR_1126c84f8;
  func_0x00010bf25960(PTR_PTR_1126c84f8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  func_0x00010c0b4ca0(ppuVar15);
  func_0x00010c1cfc20(puVar3);
  ppuVar16 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1cf9a0(puVar3);
  ppuVar17 = ppuVar5;
  func_0x00010c0e00e0(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb00d30();
  func_0x00010c1c1040(puVar3);
  _objc_release(ppuVar17);
  ppuVar17 = ppuVar5;
  func_0x00010c0e00e0(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c2271c0(puVar3);
  _objc_release(ppuVar17);
  func_0x00010c21e080(puVar3);
  puVar7 = PTR_PTR_1126c7b68;
  func_0x00010c15a2e0(PTR_PTR_1126c7b68);
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126c7b68;
  func_0x00010bf25980(PTR_PTR_1126c7b68);
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = ppuVar5;
  func_0x00010c0e00e0(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1cfde0(puVar3);
  _objc_release(ppuVar18);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126c7b68;
  func_0x00010bf92880(PTR_PTR_1126c7b68);
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = ppuVar5;
  func_0x00010c0e00e0(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1c9d60(puVar3);
  _objc_release(ppuVar18);
  _objc_release(puVar7);
  func_0x00010c1ca500(puVar3);
  func_0x00010bf529e0(ppuVar17);
  func_0x00010c1ca520(puVar3);
  _CACurrentMediaTime();
  ppuVar18 = param_2;
  dVar35 = dVar34;
  func_0x00010c252440(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b080();
  _objc_release(ppuVar18);
  func_0x00010c222d20(dVar34 - dVar35,puVar3);
  ppuVar18 = param_2;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = ppuVar18;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar19 == (undefined **)0x0) {
LAB_106149fbc:
    _objc_release(ppuVar18);
  }
  else {
    ppuVar20 = param_2;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = ppuVar20;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = ppuVar21;
    func_0x00010c1109c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar21);
    _objc_release(ppuVar20);
    _objc_release(ppuVar19);
    _objc_release(ppuVar18);
    if (ppuVar22 != (undefined **)0x0) {
      ppuVar18 = param_2;
      func_0x00010c252440(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = ppuVar18;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfca720();
      _objc_release(ppuVar19);
      goto LAB_106149fbc;
    }
  }
  func_0x00010c2056c0(puVar3);
  puVar7 = PTR_PTR_1126c8500;
  func_0x00010c1594a0(PTR_PTR_1126c8500);
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  func_0x00010c1ee3a0(puVar3);
  puVar7 = PTR_PTR_1126c8500;
  func_0x00010c159680(PTR_PTR_1126c8500);
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  func_0x00010c19db60(puVar3);
  puVar7 = PTR_PTR_1126c8500;
  func_0x00010c141220(PTR_PTR_1126c8500);
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  func_0x00010c0b4ca0(ppuVar20);
  func_0x00010c1cff80(puVar3);
  puVar7 = PTR_PTR_1126c8500;
  func_0x00010c141200(PTR_PTR_1126c8500);
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  func_0x00010c0b4ca0(ppuVar21);
  func_0x00010c1cff60(puVar3);
  ppuVar22 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1cff40(puVar3);
  ppuVar23 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1cffa0(puVar3);
  ppuVar24 = param_2;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  ppuVar25 = ppuVar24;
  func_0x00010bf2bbc0();
  _objc_release(ppuVar24);
  if (ppuVar25 == (undefined **)0x9) {
    ppuVar24 = ppuVar5;
    func_0x00010c0e00e0(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c18e500(puVar3);
    _objc_release(ppuVar24);
    ppuVar24 = ppuVar5;
    func_0x00010c0e00e0(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c1cfa40(puVar3);
    _objc_release(ppuVar24);
  }
  ppuVar24 = ppuVar5;
  func_0x00010c0e00e0(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1cfdc0(puVar3);
  _objc_release(ppuVar24);
  ppuVar24 = ppuVar5;
  func_0x00010c0e00e0(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9340(puVar3);
  _objc_release(ppuVar24);
  ppuVar24 = ppuVar5;
  func_0x00010c0e00e0(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9380(puVar3);
  _objc_release(ppuVar24);
  ppuVar24 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar25 = ppuVar24;
  func_0x00010bf1f3c0();
  _objc_release(ppuVar24);
  func_0x00010c1b29e0(puVar3);
  if ((int)ppuVar25 != 0) {
    ppuVar24 = ppuVar5;
    func_0x00010c0e00e0(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c93a0(puVar3);
    _objc_release(ppuVar24);
    ppuVar24 = ppuVar5;
    func_0x00010c0e00e0(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c19ca20(puVar3);
    _objc_release(ppuVar24);
    ppuVar24 = ppuVar5;
    func_0x00010c0e00e0(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c1c94a0(puVar3);
    _objc_release(ppuVar24);
  }
  ppuVar24 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4400(puVar3);
  ppuVar25 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1cfba0(puVar3);
  puVar7 = PTR_PTR_1126c8508;
  func_0x00010bf69ea0(PTR_PTR_1126c8508);
  _objc_retainAutoreleasedReturnValue();
  ppuVar26 = ppuVar5;
  func_0x00010c0e00e0(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x00010c1cf140(puVar3);
  _objc_release(ppuVar26);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126c8508;
  func_0x00010c27f0e0(PTR_PTR_1126c8508);
  _objc_retainAutoreleasedReturnValue();
  ppuVar26 = ppuVar5;
  func_0x00010c0e00e0(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x00010c1cf1a0(puVar3);
  _objc_release(ppuVar26);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126c8508;
  func_0x00010c26acc0(PTR_PTR_1126c8508);
  _objc_retainAutoreleasedReturnValue();
  ppuVar26 = ppuVar5;
  func_0x00010c0e00e0(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x00010c1cf180(puVar3);
  _objc_release(ppuVar26);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126c8508;
  func_0x00010bf71c60(PTR_PTR_1126c8508);
  _objc_retainAutoreleasedReturnValue();
  ppuVar26 = ppuVar5;
  func_0x00010c0e00e0(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x00010c1cf160(puVar3);
  _objc_release(ppuVar26);
  _objc_release(puVar7);
  ppuVar26 = ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21d240(puVar3);
  ppuVar27 = ppuVar5;
  func_0x00010c0e00e0(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1d0040(puVar3);
  ppuVar28 = ppuVar5;
  func_0x00010c0e00e0(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1d0020(puVar3);
  ppuVar29 = ppuVar5;
  func_0x00010c0e00e0(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1d0060(puVar3);
  ppuVar30 = ppuVar5;
  func_0x00010c0e00e0(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1d0000(puVar3);
  puVar7 = PTR_PTR_1126c8510;
  func_0x00010bf25980(PTR_PTR_1126c8510);
  _objc_retainAutoreleasedReturnValue();
  ppuVar31 = ppuVar5;
  func_0x00010c0e00e0(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x00010c1ceea0(puVar3);
  _objc_release(ppuVar31);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126c8510;
  func_0x00010c0cfd60(PTR_PTR_1126c8510);
  _objc_retainAutoreleasedReturnValue();
  ppuVar31 = ppuVar5;
  func_0x00010c0e00e0(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1af380(puVar3);
  _objc_release(ppuVar31);
  _objc_release(puVar7);
  ppuVar31 = param_2;
  func_0x00010bf29620(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar32 = ppuVar31;
  func_0x00010c0cd1c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar33 = ppuVar32;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c079ee0();
  func_0x00010c1b2860(puVar3);
  _objc_release(ppuVar33);
  _objc_release(ppuVar32);
  _objc_release(ppuVar31);
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    puVar7 = PTR_PTR_1126c84e8;
    func_0x00010bdc2540(PTR_PTR_1126c84e8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar31 = ppuVar5;
    func_0x00010c0e00e0(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    func_0x00010c0b4ca0(ppuVar31);
    func_0x00010c1cf120(puVar3);
    _objc_release(ppuVar31);
  }
  func_0x00010bf2b860(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar31 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(ppuVar31);
  _objc_release(param_2);
  _objc_release(ppuVar30);
  _objc_release(ppuVar29);
  _objc_release(ppuVar28);
  _objc_release(ppuVar27);
  _objc_release(ppuVar26);
  _objc_release(ppuVar25);
  _objc_release(ppuVar24);
  _objc_release(ppuVar23);
  _objc_release(ppuVar22);
  _objc_release(ppuVar21);
  _objc_release(ppuVar20);
  _objc_release(ppuVar19);
  _objc_release(ppuVar18);
  _objc_release(ppuVar17);
  _objc_release(ppuVar16);
  _objc_release(ppuVar15);
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  _objc_release(ppuVar12);
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar11);
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
LAB_10614a860:
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(puVar3);
  return;
}



/* Entry: 10614a8a8; end: 10614a8df; -[SCCameraViewController logPageViewOnAppear:] */

void FUN_10614a8a8(undefined8 param_1)

{
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24fc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10614a8e0; end: 10614abb3; -[SCCameraViewController logPageViewOnExit:] */

void FUN_10614a8e0(double param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _CACurrentMediaTime();
  uVar3 = param_2;
  dVar4 = param_1;
  func_0x00010c252440(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b080();
  dVar5 = dVar4;
  _objc_release(uVar3);
  uVar3 = param_2;
  func_0x00010c252440(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b080();
  _objc_release(uVar3);
  if ((dVar5 != 0.0) && (uVar3 = (ulong)((param_1 - dVar4) * 1000.0), 199 < (long)uVar3)) {
    uVar1 = param_2;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1771e0(0);
    _objc_release();
    _arc4random();
    if ((uint)((int)uVar1 + (int)((uVar1 & 0xffffffff) / 100) * -100) < 10) {
      puVar2 = PTR_PTR_1126c8518;
      _objc_opt_new();
      func_0x00010c222d20((double)uVar3 / 1000.0);
      func_0x00010c198340(puVar2);
      uVar3 = param_2;
      func_0x00010c0924a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c098240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c19c220(puVar2);
      _objc_release(uVar1);
      _objc_release(uVar3);
      func_0x00010bfc1840(param_2);
      func_0x00010c19c0e0(puVar2);
      func_0x00010c076400(param_2);
      func_0x00010c2262a0(puVar2);
      func_0x00010c07e600(param_2);
      func_0x00010c1b4700(puVar2);
      uVar3 = param_2;
      func_0x00010c252440(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c0b7e80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf70d80();
      _objc_release(uVar1);
      _objc_release(uVar3);
      func_0x00010c1d84e0(puVar2);
      _objc_initWeak(auStack_68,param_2);
      func_0x00010c09f200(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(puVar2);
      func_0x00010bfa8180(uVar3);
      _objc_release(uVar3);
      _objc_release(param_2);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_release(puVar2);
    }
  }
  return;
}


