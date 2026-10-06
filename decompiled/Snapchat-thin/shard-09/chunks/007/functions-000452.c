/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106fee404; end: 106fee40b; -[SCCameraViewControllerInternalState lastSuccessfulLensActivationTime] */

undefined8 FUN_106fee404(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106fee40c; end: 106fee413; -[SCCameraViewControllerInternalState setCameraViewType:] */

void FUN_106fee40c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 106fee414; end: 106fee41b; -[SCCameraViewControllerInternalState setRecordingState:] */

void FUN_106fee414(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 106fee41c; end: 106fee44b; -[SCCameraViewControllerInternalState setLockRingingToken:] */

void FUN_106fee41c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fee44c; end: 106fee453; -[SCCameraViewControllerInternalState isResigningActive] */

undefined1 FUN_106fee44c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106fee454; end: 106fee45b; -[SCCameraViewControllerInternalState setShouldRestoreStartRecordingState:] */

void FUN_106fee454(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 106fee45c; end: 106fee463; -[SCCameraViewControllerInternalState viewSourceType] */

undefined4 FUN_106fee45c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 106fee464; end: 106fee46b; -[SCCameraViewControllerInternalState setViewSourceType:] */

void FUN_106fee464(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 106fee46c; end: 106fee49b; -[SCCameraViewControllerInternalState setImageCaptureConfiguration:] */

void FUN_106fee46c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fee49c; end: 106fee4cb; -[SCCameraViewControllerInternalState setVideoCaptureConfiguration:] */

void FUN_106fee49c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fee4cc; end: 106fee5a3; -[SCCameraViewControllerInternalState .cxx_destruct] */

void FUN_106fee4cc(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106fee5a4; end: 106fee5cb;  */

undefined ** FUN_106fee5a4(long param_1)

{
  if (param_1 - 1U < 7) {
    return (undefined **)(&PTR_PTR_1109887c0)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e96a98;
}



/* Entry: 106fee5cc; end: 106fee5d7; +[SCCameraViewController announcerIdentifier] */

undefined ** FUN_106fee5cc(void)

{
  return &PTR____CFConstantStringClassReference_110e96b78;
}



/* Entry: 106fee5d8; end: 106fee677; -[SCCameraViewController initWithSystemScope:appStartExperimentReader:] */

undefined8
FUN_106fee5d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae720;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&PTR___NSConcreteGlobalBlock_110988460);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023980(param_1,param_2,0,0,param_3,puVar1,0,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 106fee678; end: 106fee67f;  */

undefined8 FUN_106fee678(void)

{
  return 0;
}



/* Entry: 106fee680; end: 106fee74f; -[SCCameraViewController initWithStartupWorkflow:delegate:systemScope:appInsightsMetadataStorage:simpleSnapchatExperimentConfigProvider:appStartExperimentReader:] */

undefined8
FUN_106fee680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c18b5e0(param_1,param_2,param_4);
  func_0x00010c023980(param_1,param_2,0,param_3,param_5,param_6,param_7,param_8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106fee750; end: 106fee767; -[SCCameraViewController initWithLensDataProvider:systemScope:appInsightsMetadataStorage:appStartExperimentReader:] */

void FUN_106fee750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c023990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithLensDataProvider_startup_1125e6848,param_3,0,param_4,param_5,0,
             param_6);
  return;
}



/* Entry: 106fee768; end: 106fee843;  */

void FUN_106fee768(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf2a1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c094220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a3080(param_2);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf2a1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfc1b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2fe0(param_2);
  _objc_release(param_2);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fee844; end: 106fee887; -[SCCameraViewController dealloc] */

void FUN_106fee844(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c256420();
  puStack_28 = PTR_PTR_1126f8378;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106fee888; end: 106fee88f; -[SCCameraViewController currentAllocatedCameraCount] */

undefined8 FUN_106fee888(void)

{
  return 0;
}



/* Entry: 106fee890; end: 106fee89f; -[SCCameraViewController userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fee890(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c293750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127624e4),PTR_s_userSession_1126827f8);
  return;
}



/* Entry: 106fee8a0; end: 106fee8a7; +[SCCameraViewController cameraPageViewName] */

undefined8 FUN_106fee8a0(void)

{
  return 0x1f;
}



/* Entry: 106fee8a8; end: 106fee92b; -[SCCameraViewController compatibilityZoomingMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106fee8a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127624f4);
  func_0x00010bf30c00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c2bf1a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c082a40();
  _objc_release(uVar1);
  _objc_release(uVar2);
  return uVar3;
}



/* Entry: 106fee92c; end: 106ff001b; -[SCCameraViewController startImageCaptureSessionWithSessionId:lensIntiatedCapture:initiatedRecording:captureTrigger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fee92c(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126aff08;
  lVar19 = (long)_DAT_1127624bc;
  uVar1 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010c0b7e80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar1;
  func_0x00010bf70d80();
  func_0x00010c06cea0(puVar2,param_3,uVar10);
  _objc_release(uVar1);
  uVar3 = *(ulong *)(param_2 + _DAT_112762518);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf2ad60();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b9e08;
  func_0x00010bfe6f80(PTR_PTR_1126b9e08);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_2;
  func_0x00010be36e60(param_2);
  func_0x00010c2aa180(puVar5,param_3,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa1a0(puVar5,param_3,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = param_2;
  func_0x00010be3e5c0();
  if (((ulong)puVar6 & 1) == 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9720(puVar5,param_3,puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    puVar6 = param_2;
    func_0x00010bf29620(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar8;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar15;
    func_0x00010bf16c80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9720(puVar5,param_3,puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar15);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
  puVar6 = param_2;
  func_0x00010c0926e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c096b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2c60(puVar5,param_3,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c2b2960(puVar5,param_3,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = param_2;
  func_0x00010bdc5260();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a76e0(puVar5,param_3,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar6;
  func_0x00010c074540(puVar6);
  func_0x00010c2b0a20(puVar5,param_3,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = param_2;
  func_0x00010be41b40(param_2);
  func_0x00010c2b0de0(puVar5,param_3,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = param_2;
  func_0x00010be3e5c0(param_2);
  func_0x00010c2a9280(puVar5,param_3,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010c0b7e80(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa2a0(puVar5,param_3,uVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  uVar11 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010c0b7e80(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar11;
  func_0x00010bf70d80();
  uVar12 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010c0b7e80(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar12;
  func_0x00010c098f60();
  puVar7 = param_2;
  func_0x00010bf29620(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0da400();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar8;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar15;
  func_0x00010bf926c0();
  puVar13 = param_2;
  func_0x00010beb2c00(param_2,param_3,uVar10,uVar1,puVar9);
  func_0x00010c2b8780(puVar5,param_3,puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar12);
  _objc_release(uVar11);
  puVar7 = param_2;
  func_0x00010bde9880(param_2);
  func_0x00010c2b75e0(puVar5,param_3,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = param_2;
  func_0x00010c252440(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c150aa0();
  func_0x0001005d3b6c();
  func_0x00010c2a9f00(puVar5,param_3,puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = param_2;
  func_0x00010bf29620(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0da400();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar8;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar15;
  func_0x00010c06dea0();
  func_0x00010c2b0fe0(puVar5,param_3,puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = param_2;
  func_0x00010c0da4a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bef02e0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar8;
  func_0x00010c071a40();
  func_0x00010c2b06c0(puVar5,param_3,puVar15);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = param_2;
  func_0x00010be43360();
  if ((int)puVar7 != 0) {
    func_0x00010c2b8780(puVar5,param_3,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar7 = param_2;
  func_0x00010bf29980();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf29960();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar15;
  func_0x00010c154f00();
  puVar13 = PTR_PTR_1126afed0;
  func_0x00010c0db140();
  _objc_release(puVar15);
  _objc_release(puVar8);
  _objc_release(puVar7);
  if (puVar9 == puVar13) {
    puVar7 = param_2;
    func_0x00010bf2a5a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf291c0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar8;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar15;
    func_0x00010c23c780();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf7ff60();
    func_0x00010c2b8820(puVar5,param_3,puVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(puVar9);
    _objc_release(puVar15);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  else {
    func_0x00010c2b8820(puVar5,param_3,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010c2afe60(puVar5,param_3,param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = param_2;
  func_0x00010bf29620(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf0fd40();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar8;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar15;
  func_0x00010c272ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8c20(puVar5,param_3,puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar15);
  _objc_release(puVar8);
  _objc_release(puVar7);
  func_0x00010c2b03c0(puVar5,param_3,uVar4 & 0xffffffff);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa260(puVar5,param_3,param_7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = param_2;
  func_0x00010be40d40(param_2);
  func_0x00010c2b0aa0(puVar5,param_3,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = param_2;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 == (undefined *)0x0) {
    puVar15 = (undefined *)0x8;
    func_0x0001008cc2b4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar9 = param_2;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar9;
    func_0x00010c131bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c2720a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010c0f1ce0();
    func_0x0001008cc2b4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar9);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  func_0x00010c2b9760(puVar5,param_3,puVar15);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar8 = param_2;
  func_0x00010bef0520(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_2;
  func_0x00010bdfb8a0(param_2,param_3,puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a76a0(puVar5,param_3,puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac340(puVar5,param_3,puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126d3ff0;
  puVar13 = param_2;
  func_0x00010be41b40(param_2);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112762578);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c074a60(puVar7,param_3,puVar13,(ulong)puVar2 & 0xffffffff,uVar10);
  func_0x00010c2b88c0(puVar5,param_3,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar1);
  puVar2 = param_2;
  func_0x00010bf29620(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c14e820();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar7;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c076280();
  func_0x00010c2b79c0(puVar5,param_3,puVar14);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010bf29980(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010bf29960();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c299ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c40c0();
  dVar21 = param_1;
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar7);
  _objc_release(puVar2);
  if (0.0 < param_1) {
    func_0x00010c2a87a0(param_1,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x00010c1119e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c40c0();
    _objc_release(puVar7);
    _objc_release(puVar2);
    dVar21 = param_1;
  }
  puVar2 = param_2;
  func_0x00010bf29980(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010bf29960();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb6900();
  dVar22 = dVar21;
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar7);
  _objc_release(puVar2);
  func_0x0001008e3740();
  fVar20 = ABS((float)dVar21 - (float)dVar22);
  puVar2 = param_2;
  if ((1.1754944e-38 <= fVar20) && (ABS((float)dVar21 + (float)dVar22) * 1.1920929e-07 <= fVar20)) {
    puVar7 = param_2;
    func_0x00010bf29980();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar7;
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar14;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bf0acc0();
    _objc_release(puVar16);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar7);
    if ((int)puVar17 != 0) {
      func_0x00010c2a87a0(dVar21,puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1119e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c40c0(dVar21);
      goto LAB_106fef428;
    }
  }
  func_0x00010c1119e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001008e3740();
  func_0x00010c1c40c0(puVar7);
LAB_106fef428:
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010c1119e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16a700();
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010beb2800();
  if ((int)puVar2 != 0) {
    func_0x00010c2b8740(puVar5,param_3,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x00010c266ee0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bf29d40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_2;
    func_0x00010be41b40(param_2);
    puVar16 = param_2;
    func_0x00010be40ac0(param_2);
    puVar17 = puVar13;
    func_0x00010c262be0(puVar13,param_3,puVar14,puVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2baae0(puVar5,param_3,puVar17);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar17);
    _objc_release(puVar13);
    _objc_release(puVar7);
    _objc_release(puVar2);
  }
  puVar2 = param_2;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010bfaf560();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar7;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c13e860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar7);
  _objc_release(puVar2);
  if (puVar14 != (undefined *)0x0) {
    func_0x00010c2ae220(puVar5,param_3,puVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = param_2;
  func_0x00010bf29620(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010bfce220();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar7;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010c0b3c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b0a60(puVar5,param_3,puVar16 != (undefined *)0x0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(puVar13);
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar2 = puVar5;
  func_0x00010bf21f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa100(*(undefined8 *)(param_2 + lVar19),param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010c1119e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010bfe6f80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar1;
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179260(puVar7,param_3,uVar10);
  _objc_release(uVar10);
  _objc_release(uVar1);
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010c1119e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010bfe6f80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar1;
  func_0x00010c243320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205640(puVar7,param_3,uVar10);
  _objc_release(uVar10);
  _objc_release(uVar1);
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010c1119e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162560();
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010c1119e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c600();
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010c1119e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b4600();
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010c1119e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_2;
  func_0x00010bf29980(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010bf29960();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010bfb6c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f340(puVar7,param_3,puVar18);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar13);
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010c1119e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_2;
  func_0x00010bf29620(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010c269520();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010bf9d760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199000(puVar7,param_3,puVar18);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar13);
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010c1119e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_2;
  func_0x00010bdc5220(param_2);
  func_0x00010c19db40(puVar7,param_3,puVar13);
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010c1119e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_2;
  func_0x00010bf29620(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010c140f60();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010bfc44e0();
  func_0x00010c1ee380(puVar7,param_3,puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar13);
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010c1119e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_2;
  func_0x00010bf29620(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010c140f60();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc4600();
  func_0x00010c1ee400(puVar7);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar13);
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010c1119e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_2;
  func_0x00010bde9880(param_2);
  func_0x00010c1ee4c0(puVar7,param_3,puVar13);
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010c1119e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_2;
  func_0x00010bf29620(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010c140f60();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010c140fa0();
  func_0x00010c1ee360(puVar7,param_3,puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar13);
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar17 = param_2;
  func_0x00010c1119e0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = param_2;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar16;
  func_0x00010c140f60();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar13;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  func_0x00010c141000();
  func_0x00010c1ee340(puVar18,param_3,puVar2);
  _objc_release(puVar7);
  _objc_release(puVar13);
  _objc_release(puVar16);
  _objc_release(puVar18);
  _objc_release(puVar17);
  puVar7 = param_2;
  func_0x00010c1119e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_2;
  func_0x00010bf29620(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010c2bf120();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010c2bf140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227ba0(puVar2,param_3,puVar18);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar13);
  _objc_release(puVar2);
  _objc_release(puVar7);
  puVar17 = param_2;
  func_0x00010c1119e0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar17;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_2;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar13;
  func_0x00010c2bf120();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c105cc0();
  func_0x00010c1df9c0(puVar16);
  _objc_release(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar13);
  _objc_release(puVar16);
  _objc_release(puVar17);
  puVar18 = param_2;
  func_0x00010c1119e0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar18;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = param_2;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar16;
  func_0x00010c2bf120();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar13;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  func_0x00010c2bf240();
  func_0x00010c227c40(puVar17,param_3,puVar2);
  _objc_release(puVar7);
  _objc_release(puVar13);
  _objc_release(puVar16);
  _objc_release(puVar17);
  _objc_release(puVar18);
  puVar2 = param_2;
  func_0x00010c1119e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_2;
  func_0x00010bf29620(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar13;
  func_0x00010c2bf120();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar18;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar17;
  func_0x00010bf316a0();
  func_0x00010c179420(puVar7,param_3,puVar16);
  _objc_release(puVar17);
  _objc_release(puVar18);
  _objc_release(puVar13);
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar16 = param_2;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar16;
  func_0x00010bf3e100();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar13;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  func_0x00010c06ea80();
  _objc_release(puVar7);
  _objc_release(puVar13);
  _objc_release(puVar16);
  if ((int)puVar2 != 0) {
    puVar2 = param_2;
    func_0x00010c1119e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_2;
    func_0x00010bf29620(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar13;
    func_0x00010bf3e100();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c095f40();
    func_0x00010c1bc620(puVar7);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar13);
    _objc_release(puVar7);
    _objc_release(puVar2);
    puVar2 = param_2;
    func_0x00010c1119e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf29620(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_2;
    func_0x00010bf3e100();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar13;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bf13940();
    func_0x00010c16e1e0(puVar7,param_3,puVar17);
    _objc_release(puVar16);
    _objc_release(puVar13);
    _objc_release(param_2);
    _objc_release(puVar7);
    _objc_release(puVar2);
  }
  _objc_release(puVar14);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar15);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106ff001c; end: 106ff0ea3; -[SCCameraViewController startVideoCaptureSessionForLensInitiatedCapture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff001c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  long lStack_78;
  
  lVar1 = param_1;
  func_0x00010be3e5c0();
  lVar3 = param_1;
  if ((int)lVar1 == 0) {
    lStack_78 = param_1;
    func_0x00010be3fa40();
    if ((int)lStack_78 != 0) {
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar3;
      func_0x00010bf7f1c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      lStack_78 = lVar4;
      func_0x00010c243320();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106ff0100;
    }
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_78 = lVar2;
    func_0x00010bf16c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
LAB_106ff0100:
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  puVar5 = PTR_PTR_1126d3ff8;
  func_0x00010c2993e0(PTR_PTR_1126d3ff8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bee8aa0(param_1);
  func_0x00010c2aa180(puVar5,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be3e5c0(param_1);
  func_0x00010c2a9280(puVar5,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be43f20(param_1);
  func_0x00010c2b9c40(puVar5,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be87b80(param_1);
  func_0x00010c2b6a80(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be3fa40(param_1);
  func_0x00010c2b0b80(puVar5,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112762578);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar7;
  func_0x000109128224();
  func_0x00010c2b0ac0(puVar5,param_2,uVar15);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  dVar18 = 1.0;
  func_0x00010c2af020(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0926e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c096b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2c60(puVar5,param_2,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bde9880(param_1);
  func_0x00010c2b75e0(puVar5,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar16 = (long)_DAT_1127624bc;
  uVar6 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c131bc0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c2720a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar7;
  func_0x00010c1297c0();
  func_0x00010c2b6bc0(puVar5,param_2,uVar15);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  lVar1 = param_1;
  func_0x00010bddb540(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa140(puVar5,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c252440(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c150aa0();
  func_0x0001005d3b6c();
  func_0x00010c2a9f00(puVar5,param_2,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0da400();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c06dea0();
  func_0x00010c2b0fe0(puVar5,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010beb4420(param_1);
  func_0x00010c2b8a20(puVar5,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be40d40(param_1);
  func_0x00010c2b0aa0(puVar5,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be3f360(param_1);
  func_0x00010c2b0480(puVar5,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c22ed20();
  func_0x00010c2a8c00(puVar5,param_2,(uint)lVar2 ^ 1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c150aa0();
  _objc_release(lVar1);
  dVar19 = dVar18;
  if (lVar3 == 0xc) {
    lVar1 = param_1;
    func_0x00010bf29980(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c299ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c40c0();
    dVar19 = dVar18;
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (0.0 < dVar18) {
      func_0x00010c2a87a0(dVar18,puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c1119e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c40c0();
      _objc_release(lVar3);
      _objc_release(lVar1);
      dVar19 = dVar18;
    }
  }
  lVar1 = param_1;
  func_0x00010bdc5260(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c074540();
  func_0x00010c2b0a20(puVar5,param_2,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfce220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c0b3c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b0a60(puVar5,param_2,lVar8 != 0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf29980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf29960();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb6900();
  dVar18 = dVar19;
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x0001008e3740();
  fVar17 = ABS((float)dVar19 - (float)dVar18);
  lVar3 = param_1;
  if ((1.1754944e-38 <= fVar17) && (ABS((float)dVar19 + (float)dVar18) * 1.1920929e-07 <= fVar17)) {
    lVar4 = param_1;
    func_0x00010bf29980();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf0acc0();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar2);
    _objc_release(lVar4);
    if ((int)lVar10 != 0) {
      func_0x00010c2a87a0(dVar19,puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1119e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c40c0(dVar19);
      goto LAB_106ff0798;
    }
  }
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001008e3740();
  func_0x00010c1c40c0(lVar4);
LAB_106ff0798:
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16a700();
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar5;
  func_0x00010c2aa1a0(puVar5,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c2b9720();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c2b2960();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c221260(*(undefined8 *)(param_1 + lVar16),param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c2993e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar15;
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179260(lVar4,param_2,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar15);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c2993e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar15;
  func_0x00010c243320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205640(lVar4,param_2,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar15);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf29980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar2;
  func_0x00010bf29960();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bfb6c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f340(lVar4,param_2,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar16);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar2;
  func_0x00010c269520();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar16;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf9d760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199000(lVar4,param_2,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar16);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf3e100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar2;
  func_0x00010c06ea80();
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  if ((int)lVar16 != 0) {
    lVar3 = param_1;
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar2;
    func_0x00010bf3e100();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar16;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c095f40();
    func_0x00010c1bc620(lVar4);
    _objc_release(lVar8);
    _objc_release(lVar16);
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar2;
    func_0x00010bf3e100();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar16;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf13940();
    func_0x00010c16e1e0(lVar4,param_2,lVar9);
    _objc_release(lVar8);
    _objc_release(lVar16);
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  lVar3 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar2;
  func_0x00010c2bf120();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar16;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2bf140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227ba0(lVar4,param_2,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar16);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar2;
  func_0x00010c2bf120();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar16;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c105cc0();
  func_0x00010c1df9c0(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar16);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar2;
  func_0x00010c2bf120();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar16;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2bf240();
  func_0x00010c227c40(lVar4,param_2,lVar9);
  _objc_release(lVar8);
  _objc_release(lVar16);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2bf120();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar16;
  func_0x00010bf316a0();
  func_0x00010c179420(lVar4,param_2,lVar8);
  _objc_release(lVar16);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lStack_78);
  return;
}



/* Entry: 106ff0ea4; end: 106ff0f07; -[SCCameraViewController cameraLensesInfoProvider] */

void FUN_106ff0ea4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0926e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf29b60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf29b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106ff0f08; end: 106ff0f3f; -[SCCameraViewController cancelSnapCaptureSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff0f08(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127624bc;
  func_0x00010c1aa100(*(undefined8 *)(param_1 + lVar1),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c221270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setVideoCaptureConfiguration__112665ec0,0);
  return;
}



/* Entry: 106ff0f40; end: 106ff0f77; -[SCCameraViewController finishSnapCaptureSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff0f40(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127624bc;
  func_0x00010c1aa100(*(undefined8 *)(param_1 + lVar1),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c221270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setVideoCaptureConfiguration__112665ec0,0);
  return;
}



/* Entry: 106ff0f78; end: 106ff10c7; -[SCCameraViewController captureSessionIDForLog] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff0f78(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_1127624bc;
  lVar1 = *(long *)(param_1 + lVar7);
  func_0x00010bfe6f80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
LAB_106ff1000:
    lVar1 = *(long *)(param_1 + lVar7);
    func_0x00010c2993e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_1 + lVar7);
      func_0x00010c2993e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf311e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010c2993e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106ff1064;
      }
    }
    ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    lVar2 = *(long *)(param_1 + lVar7);
    func_0x00010bfe6f80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf311e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) goto LAB_106ff1000;
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bfe6f80(uVar4);
    _objc_retainAutoreleasedReturnValue();
LAB_106ff1064:
    uVar5 = uVar4;
    func_0x00010bf311e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR____CFConstantStringClassReference_110db3eb8;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110db3eb8,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 106ff10c8; end: 106ff10d7; -[SCCameraViewController setSwipingState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff10c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11276257c) = param_3;
  return;
}



/* Entry: 106ff10d8; end: 106ff10e7; -[SCCameraViewController isBlockingUnifiedCameraSwipe] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106ff10d8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112762580);
}



/* Entry: 106ff10e8; end: 106ff1143; -[SCCameraViewController recording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff10e8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127624bc;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c123ee0();
  if (lVar1 != 1) {
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x00010c123ee0();
    if (lVar1 != 2) {
      func_0x00010c123ee0(*(undefined8 *)(param_1 + lVar2));
    }
  }
  return;
}



/* Entry: 106ff1144; end: 106ff116b; -[SCCameraViewController preparingRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106ff1144(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_1127624bc);
  func_0x00010c123ee0(lVar1);
  return lVar1 == 1;
}



/* Entry: 106ff116c; end: 106ff11b7; -[SCCameraViewController initiatedRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106ff116c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127624bc;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c123ee0();
  if (lVar2 == 2) {
    bVar1 = true;
  }
  else {
    lVar2 = *(long *)(param_1 + lVar3);
    func_0x00010c123ee0(lVar2);
    bVar1 = lVar2 == 5;
  }
  return bVar1;
}



/* Entry: 106ff11b8; end: 106ff11df; -[SCCameraViewController startedRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106ff11b8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_1127624bc);
  func_0x00010c123ee0(lVar1);
  return lVar1 == 2;
}



/* Entry: 106ff11e0; end: 106ff1207; -[SCCameraViewController takingPicture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106ff11e0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_1127624bc);
  func_0x00010c123ee0(lVar1);
  return lVar1 == 3;
}



/* Entry: 106ff1208; end: 106ff122f; -[SCCameraViewController hasTakenPicture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106ff1208(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_1127624bc);
  func_0x00010c123ee0(lVar1);
  return lVar1 == 4;
}



/* Entry: 106ff1230; end: 106ff1257; -[SCCameraViewController finishingRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106ff1230(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_1127624bc);
  func_0x00010c123ee0(lVar1);
  return lVar1 == 5;
}



/* Entry: 106ff1258; end: 106ff127f; -[SCCameraViewController preparingPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106ff1258(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_1127624bc);
  func_0x00010c123ee0(lVar1);
  return lVar1 == 6;
}



/* Entry: 106ff1280; end: 106ff12a7; -[SCCameraViewController inCaptureCountingDown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106ff1280(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_1127624bc);
  func_0x00010c123ee0(lVar1);
  return lVar1 == 7;
}



/* Entry: 106ff12a8; end: 106ff131b; -[SCCameraViewController shouldDisplayHandsFreeTooltip] */

undefined8 FUN_106ff12a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfd3560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22f7a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 106ff131c; end: 106ff1423; -[SCCameraViewController forceReloadViewWillAndDidAppearIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff131c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _objc_initWeak(auStack_38,param_1);
    lVar2 = (long)_DAT_1127624bc;
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x00010bf068e0();
    if (lVar1 == 0) {
      func_0x00010c169600(*(undefined8 *)(param_1 + lVar2));
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_106ff1424;
      puStack_48 = &UNK_1108434b0;
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x0001000d76cc("APPSTORE",&puStack_60);
      _objc_destroyWeak(auStack_40);
    }
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 106ff1424; end: 106ff145f;  */

void FUN_106ff1424(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29e720();
  func_0x00010c29c6a0(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ff1460; end: 106ff148f; -[SCCameraViewController notifyUserAfterStartCameraIfNecessary] */

void FUN_106ff1460(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c0dd6a0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c0dd700(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0dd750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_notifyUserOfRestrictedCameraIfNe_112614fe8);
  return;
}



/* Entry: 106ff1490; end: 106ff1533; -[SCCameraViewController refreshCameraPermissionUI] */

void FUN_106ff1490(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010be948e0(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106ff1534; end: 106ff1597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff1534(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127624bc);
    func_0x00010bf2a1a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176b60();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ff1598; end: 106ff171f; -[SCCameraViewController _resolveCameraPermissionModeWithCompletion:] */

void FUN_106ff1598(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf29980();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf10e60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf11020();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 < 2) {
    if (lVar4 == 0) {
      pcVar6 = *(code **)(param_3 + 0x10);
      uVar5 = 2;
    }
    else {
      if (lVar4 != 1) goto LAB_106ff16e4;
      pcVar6 = *(code **)(param_3 + 0x10);
      uVar5 = 4;
    }
  }
  else {
    if (lVar4 != 2) {
      if (lVar4 == 3) {
        _objc_initWeak(auStack_48,param_1);
        _objc_copyWeak(auStack_50,auStack_48);
        _objc_retain(param_3);
        func_0x00010bdde080(param_1);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_50);
        _objc_destroyWeak(auStack_48);
      }
      goto LAB_106ff16e4;
    }
    pcVar6 = *(code **)(param_3 + 0x10);
    uVar5 = 3;
  }
  (*pcVar6)(param_3,uVar5);
LAB_106ff16e4:
  _objc_release(param_3);
  return;
}



/* Entry: 106ff1720; end: 106ff17cb;  */

void FUN_106ff1720(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_106ff17b4;
  if (((param_2 & 1) == 0) && (param_3 == 0)) {
    uVar2 = 5;
LAB_106ff1798:
    func_0x00010be56540(lVar1);
  }
  else {
    if ((param_2 == 0) || ((param_3 & 1) == 0)) {
      uVar2 = 1;
      goto LAB_106ff1798;
    }
    uVar2 = 1;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar2);
LAB_106ff17b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ff17cc; end: 106ff18d3; -[SCCameraViewController cameraPermissionAllowButtonTappedForMode:] */

/* WARNING: Possible PIC construction at 0x0001000d7714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d779c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000d7750) */
/* WARNING: Removing unreachable block (ram,0x0001000d7718) */
/* WARNING: Removing unreachable block (ram,0x0001000d77a0) */

void FUN_106ff17cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  if (param_3 != 3) {
    if (param_3 == 2) {
      uVar2 = param_1;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c2722e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2bc40();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      func_0x00010bf2a5a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c0f9c60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c134dc0();
      _objc_release(uVar2);
      _objc_release(param_1);
    }
    return;
  }
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_1109884b0);
  func_0x000107c4a02c();
  if ((int)puVar1 == 0) {
    func_0x0001000d77b8();
    func_0x000107c61180();
  }
  else {
    func_0x0001005855a8();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(&PTR___NSConcreteGlobalBlock_1109884b0);
  return;
}



/* Entry: 106ff18d4; end: 106ff192f;  */

void FUN_106ff18d4(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106ff1930;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 106ff1930; end: 106ff1937;  */

void FUN_106ff1930(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c125110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_refreshCameraPermissionUI_112626e60);
  return;
}



/* Entry: 106ff1938; end: 106ff196f;  */

void FUN_106ff1938(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ff1970; end: 106ff1a4f; -[SCCameraViewController cameraPermissionDidBecomeCameraReadyShouldStartCamera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff1970(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 != 0) {
    func_0x00010c1380c0(param_1);
    lVar2 = param_1;
    func_0x00010c252400(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24e280(lVar2);
    _objc_release(puVar1);
    _objc_release(lVar2);
  }
  lVar3 = (long)_DAT_1127624bc;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010bf068e0();
  if (lVar2 != 2) {
    lVar2 = *(long *)(param_1 + lVar3);
    func_0x00010bf068e0();
    if (lVar2 != 1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0dd730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_notifyUserOfMicrophoneUsageIfNec_112614fe0);
  return;
}



/* Entry: 106ff1a50; end: 106ff1bd7; -[SCCameraViewController notifyUserOfMicrophoneUsageIfNecessary] */

void FUN_106ff1a50(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bdd1440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1238e0();
  _objc_release(lVar1);
  if (lVar2 == 0x756e6474) {
    lVar1 = param_1;
    func_0x00010bf2a5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f9c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16a660();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_initWeak(auStack_38,param_1);
    func_0x00010bf2a5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0f9c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c135e20(lVar1);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    return;
  }
  func_0x00010c252400(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8f860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ff1bd8; end: 106ff1ed3;  */

void FUN_106ff1bd8(long param_1,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  ppuVar3 = &puStack_60;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf2a5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f9c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16a660();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c252400(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8f860();
    _objc_release(lVar1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x106ff1cd8;
    puStack_48 = &UNK_110845ce0;
    lStack_40 = param_1;
    uStack_38 = param_2;
    _objc_retainBlock(&puStack_60);
    func_0x0001000d76cc("APPSTORE",ppuVar3);
    _objc_release(ppuVar3);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 106ff1ed4; end: 106ff1f67; -[SCCameraViewController notifyUserOfContactsUsageIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff1ed4(long param_1)

{
  long lVar1;
  
  if (lRam00000001136c9f78 != -1) {
    func_0x00010002a2fc(0x1136c9f78,&PTR___NSConcreteGlobalBlock_1109887a0);
  }
  if ((bRam00000001136c9f60 & 1) != 0) {
    return;
  }
  param_1 = param_1 + _DAT_112762554;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135020();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ff1f68; end: 106ff1faf; -[SCCameraViewController notifyUserOfAdsTrackingUsageIfNecessary] */

void FUN_106ff1f68(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f9c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1348a0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ff1fb0; end: 106ff20af; -[SCCameraViewController notifyUserOfCameraRollUsageIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff1fb0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*(char *)(param_1 + _DAT_112762540) == '\x01') {
    lVar1 = param_1 + _DAT_11276253c;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c0fb4c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c079fa0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (((int)lVar4 != 0) && ((*(byte *)(param_1 + _DAT_11276258c) & 1) == 0)) {
      *(undefined1 *)(param_1 + _DAT_11276258c) = 1;
      param_1 = param_1 + _DAT_112762554;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c136240();
      _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 106ff20b0; end: 106ff20b3;  */

void FUN_106ff20b0(void)

{
  return;
}



/* Entry: 106ff20b4; end: 106ff223f; -[SCCameraViewController notifyUserOfCameraAndMicrophoneUsageIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ff20b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127624f4);
  func_0x00010bf10e60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0831c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    lVar4 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2722e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2bc40();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    func_0x00010bf2a5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c0f9c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c134dc0(lVar4);
    _objc_release(lVar4);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return uVar3;
}



/* Entry: 106ff2240; end: 106ff22d3;  */

void FUN_106ff2240(long param_1,undefined1 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106ff22d4;
  puStack_38 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_30,param_1 + 0x20);
  uStack_28 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  return;
}



/* Entry: 106ff22d4; end: 106ff23d3;  */

void FUN_106ff22d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1380c0(lVar1);
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      func_0x00010c0dd700(lVar1);
    }
    else {
      lVar2 = lVar1;
      func_0x00010bf2a5a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0f9c60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16a680();
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = lVar1;
      func_0x00010c252400(lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110db92b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24e280(lVar2,param_2,lVar1,0xffffffffffffffff,puVar4);
      _objc_release(puVar4);
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ff23d4; end: 106ff2453; -[SCCameraViewController notifyUserOfDeniedCameraIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff23d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127624f4);
  func_0x00010bf10e60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0831a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be65230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyUserOfDeniedCamera_112576e28);
    return;
  }
  return;
}



/* Entry: 106ff2454; end: 106ff25e3; -[SCCameraViewController _notifyUserOfDeniedCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff2454(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  undefined1 auStack_38 [8];
  
  uVar1 = param_1;
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f9c60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c23b1c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf2a5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0f9c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c202420();
    _objc_release(uVar2);
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + (long)_DAT_112762590) = 0;
    _objc_initWeak(auStack_38,param_1);
    uVar1 = param_1;
    func_0x00010bf2a5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0f9c60();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106ff25e4;
    puStack_48 = &UNK_110841f20;
    uStack_40 = param_1;
    _objc_copyWeak(auStack_68,auStack_38);
    func_0x00010c1184c0(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 106ff25e4; end: 106ff25fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff25e4(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112762590) = 1;
  return;
}



/* Entry: 106ff25fc; end: 106ff26a7;  */

void FUN_106ff25fc(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf2a5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f9c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c202420();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf2a5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f9c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16a680();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ff26a8; end: 106ff26af; -[SCCameraViewController notifyUserOfRestrictedCameraIfNecessary] */

void FUN_106ff26a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be65250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyUserOfRestrictedCameraIfN_112576e30,0)
  ;
  return;
}



/* Entry: 106ff26b0; end: 106ff2783; -[SCCameraViewController _notifyUserOfRestrictedCameraIfNecessaryWithCompletion:] */

void FUN_106ff26b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bdde080(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106ff2784; end: 106ff284b;  */

void FUN_106ff2784(long param_1,uint param_2,ulong param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  if (param_4 == 1) {
    func_0x00010bdc9ac0(lVar1);
  }
  else if (((param_2 & 1) == 0) && ((param_3 & 1) == 0)) {
    func_0x00010be56540(lVar1);
    func_0x00010bdc9c20(lVar1);
  }
  else {
    if ((param_2 == 0) || ((param_3 & 1) == 0)) {
      func_0x00010be56540(lVar1);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ff284c; end: 106ff28c3; -[SCCameraViewController _alertCameraRestrictionOn:] */

void FUN_106ff284c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010700d274();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010700d25c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc9c80(param_1,param_2,uVar1,uVar2,param_3);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ff28c4; end: 106ff2967; -[SCCameraViewController _alertNoCamera:] */

void FUN_106ff28c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_3;
  _objc_retain(param_3);
  if (cRam00000001136c9f58 == '\x01') {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  else {
    cRam00000001136c9f58 = '\x01';
    func_0x00010700d2a4();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010700d28c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc9c80(param_1,param_2,lVar1,lVar2,param_3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ff2968; end: 106ff2b8b; -[SCCameraViewController _alertWithTitle:description:completion:] */

void FUN_106ff2968(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_88,param_1);
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af180;
  ppuVar2 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_88);
  _objc_retain(param_5);
  lVar5 = param_3;
  func_0x00010c235c40(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  __Unwind_Resume(param_3);
  _objc_retain(lVar5);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010c18f620(lVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 106ff2b8c; end: 106ff2bd7;  */

void FUN_106ff2b8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c18f620(param_3,param_2,0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106ff2bd8; end: 106ff2beb;  */

void FUN_106ff2bd8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106ff2be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106ff2bec; end: 106ff2bef; -[SCCameraViewController _logNoCamera:authorization:] */

void FUN_106ff2bec(void)

{
  return;
}



/* Entry: 106ff2bf0; end: 106ff2def; -[SCCameraViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff2bf0(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uStack_70;
  undefined *puStack_68;
  ulong uVar3;
  
  puStack_68 = PTR_PTR_1126f8378;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_viewWillDisappear__112685438);
  func_0x00010c169600(*(undefined8 *)(param_1 + (long)_DAT_1127624bc));
  uVar2 = param_1;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_class();
  iVar1 = (int)uVar3;
  _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  func_0x00010c080080();
  _objc_release(uVar2);
  if (iVar1 != 0) {
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2a7380();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2a72c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c252da0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c07f8c0();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    if (((int)puVar9 != 0) && (uVar2 = param_1, func_0x00010c1070e0(), (uVar2 & 1) == 0)) {
      puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14dc20();
      _objc_release(puVar4);
    }
  }
  func_0x00010c255e20(param_1);
  func_0x00010c2560c0(param_1);
  func_0x00010c0e36c0(param_1);
  func_0x00010bde0f60(param_1);
  func_0x00010bf2a5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29c280();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bd5f8;
  func_0x00010c29e8a0(PTR_PTR_1126bd5f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(param_1);
  return;
}



/* Entry: 106ff2df0; end: 106ff2dfb; -[SCCameraViewController headerProfileButtonCenterX] */

undefined8 FUN_106ff2df0(void)

{
  return 0x47efffffe0000000;
}



/* Entry: 106ff2dfc; end: 106ff2e07; -[SCCameraViewController headerItemYOffset] */

undefined8 FUN_106ff2dfc(void)

{
  return 0x47efffffe0000000;
}



/* Entry: 106ff2e08; end: 106ff3187; -[SCCameraViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff2e08(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  undefined1 auStack_88 [8];
  float fStack_80;
  undefined1 auStack_78 [8];
  ulong uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f8378;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_viewDidDisappear__112684c48);
  lVar7 = (long)_DAT_1127624cc;
  func_0x00010bf2bbe0(*(undefined8 *)(param_2 + lVar7));
  lVar6 = (long)_DAT_1127624bc;
  func_0x00010c169600(*(undefined8 *)(param_2 + lVar6));
  uVar1 = param_2;
  func_0x00010bf29620(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c242c40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e220();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4e080();
  _objc_release(uVar1);
  if (uVar2 != 1) {
    uVar1 = param_2;
    func_0x00010c0b3a20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a9b20();
    _objc_release(uVar1);
  }
  func_0x00010c138460(*(undefined8 *)(param_2 + lVar7));
  uVar1 = param_2;
  func_0x00010c10a560();
  if ((uVar1 & 1) == 0) {
    func_0x00010c27d500(param_2);
  }
  uVar1 = param_2;
  func_0x00010bf2a5a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29c280();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bd5f8;
  func_0x00010c29c8e0(PTR_PTR_1126bd5f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar6 = *(long *)(param_2 + lVar6);
  func_0x00010bf2bbc0();
  if (lVar6 != 0) {
    func_0x00010bf2afa0(PTR_PTR_1126c8130);
    uVar1 = param_2;
    dVar8 = param_1;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfcbb00();
    _objc_release(uVar1);
    if (uVar2 == 0xce) {
      func_0x00010bf2b380(PTR_PTR_1126c8130);
      param_1 = dVar8;
    }
    uVar1 = param_2;
    func_0x00010bf2a5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c272ec0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      _objc_release(uVar1);
    }
    else {
      uVar3 = param_2;
      func_0x00010c10a560();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) == 0) {
        _objc_initWeak(auStack_78,param_2);
        func_0x00010bf2a5a0(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_2;
        func_0x00010c272ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = auStack_88;
        _objc_copyWeak(puVar5,auStack_78);
        fStack_80 = (float)param_1;
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c079160(uVar1);
        _objc_release(puVar5);
        _objc_release(uVar1);
        _objc_release(param_2);
        _objc_destroyWeak(auStack_88);
        _objc_destroyWeak(auStack_78);
        goto LAB_106ff310c;
      }
    }
    func_0x00010bec2ea0((float)param_1,param_2);
  }
LAB_106ff310c:
  puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar4);
  return;
}



/* Entry: 106ff3188; end: 106ff31cb;  */

void FUN_106ff3188(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bec2ea0(*(undefined4 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ff31cc; end: 106ff320f; -[SCCameraViewController prefersStatusBarHidden] */

bool FUN_106ff31cc(long param_1)

{
  long lVar1;
  
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf4e080();
  _objc_release(param_1);
  return lVar1 - 3U < 3;
}



/* Entry: 106ff3210; end: 106ff322f; -[SCCameraViewController preferredScreenEdgesDeferringSystemGestures] */

undefined8 FUN_106ff3210(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010c064e80();
  uVar1 = 0xf;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 106ff3230; end: 106ff329f; -[SCCameraViewController didReceiveMemoryWarning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff3230(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127624d4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08e120();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f8378;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didReceiveMemoryWarning_1125bbe28);
  return;
}



/* Entry: 106ff32a0; end: 106ff336f; -[SCCameraViewController viewWillTransitionToSize:withTransitionCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff32a0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f8378;
  uStack_50 = param_3;
  _objc_msgSendSuper2(param_1,param_2,&uStack_50,PTR_s_viewWillTransitionToSize_withTra_112685490,
                      param_5);
  uVar1 = param_3;
  func_0x00010bee9fc0();
  if ((int)uVar1 != 0) {
    func_0x00010beca080(param_3);
  }
  if ((*(char *)(param_3 + (long)_DAT_112762560) == '\x01') &&
     (func_0x00010c0f93e0(param_1,param_2,*(undefined8 *)(param_3 + (long)_DAT_1127624cc)),
     (uVar1 & 1) == 0)) {
    func_0x00010bed4aa0(param_3);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 106ff3370; end: 106ff3393; -[SCCameraViewController _imageCaptureOrientationFixEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106ff3370(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + _DAT_1127624dc) != 0) {
    puVar1 = PTR_PTR_1126d4000;
                    /* WARNING: Could not recover jumptable at 0x00010bfe7030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126d4000,PTR_s_imageCaptureOrientationFixEnable_1125d75d0);
    return puVar1;
  }
  return (undefined *)0x0;
}



/* Entry: 106ff3394; end: 106ff33b7; -[SCCameraViewController _videoCaptureOrientationFixEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106ff3394(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + _DAT_1127624dc) != 0) {
    puVar1 = PTR_PTR_1126d4000;
                    /* WARNING: Could not recover jumptable at 0x00010c299590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126d4000,PTR_s_videoCaptureOrientationFixEnable_112683f88);
    return puVar1;
  }
  return (undefined *)0x0;
}



/* Entry: 106ff33b8; end: 106ff3477; -[SCCameraViewController _synchronizeCameraViewportOrientation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff33b8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2a72c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c0690e0();
  if ((lVar3 != 0) && (lVar1 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127624f4);
    func_0x00010bf299a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21af00();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106ff3478; end: 106ff34e7; -[SCCameraViewController _lockInterfaceOrientation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff3478(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  
  if ((*(char *)(param_1 + _DAT_112762560) == '\x01') &&
     (*(byte *)(param_1 + _DAT_112762564) != param_3)) {
    *(char *)(param_1 + _DAT_112762564) = (char)param_3;
    iVar1 = 2;
    func_0x000100029b9c(2,0x10,0,0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1cbfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s_setNeedsUpdateOfSupportedInterfa_112650a10);
      return;
    }
  }
  return;
}



/* Entry: 106ff34e8; end: 106ff356b; -[SCCameraViewController shouldPopToRootViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106ff34e8(double param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_2 + (long)_DAT_1127624bc);
  func_0x00010bf2bbc0();
  if (lVar2 == 6) {
    uVar4 = param_2;
    func_0x00010c075580();
  }
  else {
    uVar4 = 0;
  }
  uVar3 = param_2;
  func_0x00010c123d40();
  bVar1 = false;
  if (((uVar3 & 1) == 0) && ((uVar4 & 1) == 0)) {
    uVar4 = param_2;
    func_0x00010be33c00();
    if ((uVar4 & 1) == 0) {
      func_0x00010bf14400(param_2);
      bVar1 = param_1 <= 0.0;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}



/* Entry: 106ff356c; end: 106ff3583; -[SCCameraViewController shouldPopToRootViewControllerLater] */

uint FUN_106ff356c(uint param_1)

{
  func_0x00010be33c00();
  return param_1 ^ 1;
}



/* Entry: 106ff3584; end: 106ff35a7; -[SCCameraViewController timeBeforeReturningToCamera] */

void FUN_106ff3584(void)

{
  func_0x00010bf14400();
  return;
}



/* Entry: 106ff35a8; end: 106ff36ef; -[SCCameraViewController backgroundRestorationWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ff35a8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  
  uVar1 = *(ulong *)(param_2 + (long)_DAT_112762598);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bef03e0();
  if ((uVar5 & 1) == 0) {
    uVar5 = param_2;
    func_0x00010c0926e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c096e00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd86e0();
    if ((uVar3 & 1) == 0) {
      uVar3 = param_2;
      func_0x00010c0926e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfd3b80();
      iVar8 = (int)uVar4;
      _objc_release(uVar3);
    }
    else {
      iVar8 = 1;
    }
    _objc_release(uVar2);
    _objc_release(uVar5);
  }
  else {
    iVar8 = 1;
  }
  _objc_release(uVar1);
  uVar5 = *(ulong *)(param_2 + (long)_DAT_1127624bc);
  func_0x00010bf2bbc0();
  if ((uVar5 < 9 && (1L << (uVar5 & 0x3f) & 0x186U) != 0) && iVar8 != 0) {
    lVar6 = param_2 + (long)_DAT_11276252c;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d0920();
    _objc_release(lVar7);
    _objc_release(lVar6);
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 106ff36f0; end: 106ff36f7; -[SCCameraViewController shouldPreventOperaBackgroundDismiss] */

undefined8 FUN_106ff36f0(void)

{
  return 1;
}



/* Entry: 106ff36f8; end: 106ff3713; -[SCCameraViewController viewControllerPrefersSelfDismiss] */

bool FUN_106ff36f8(double param_1)

{
  func_0x00010bf14400();
  return 0.0 < param_1;
}



/* Entry: 106ff3714; end: 106ff37af; -[SCCameraViewController viewControllerDismissSelf:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff3714(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11276259c;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf295c0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ff37b0; end: 106ff37d7; -[SCCameraViewController isInReplyingMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106ff37b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_1127624bc);
  func_0x00010bf2bbc0(lVar1);
  return lVar1 != 0;
}



/* Entry: 106ff37d8; end: 106ff3dc7; -[SCCameraViewController setReplyWithConfiguration:cameraViewType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff37d8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  
  _objc_retain(param_3);
  func_0x00010c177780(param_1,param_2,param_4);
  lVar11 = (long)_DAT_1127624bc;
  func_0x00010c1eafc0(*(undefined8 *)(param_1 + lVar11),param_2,param_3);
  lVar1 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c131bc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eafe0(lVar2,param_2,uVar3,param_4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c138320(*(undefined8 *)(param_1 + _DAT_1127624cc),param_2,param_1);
  lVar1 = param_1;
  func_0x00010bf2a5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf506a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eafc0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c242c40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eafc0();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c122c20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eafc0();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eafe0();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c2720a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c093d00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb140();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c094840();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb140();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0d1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bf29f40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176a00(lVar5,param_2,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c1295e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bf29f40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176a00(lVar5,param_2,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bf29f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = lVar1;
    func_0x00010bf29f40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c22d640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010bebd2e0(param_1,param_2,lVar1);
    lVar2 = param_1;
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1770c0();
    _objc_release(lVar5);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204fa0();
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar4);
  }
  uVar7 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c2720a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c06d2e0();
  _objc_release(uVar3);
  _objc_release(uVar7);
  if ((int)uVar8 != 0) {
    lVar2 = param_1;
    func_0x00010bf29980(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf299a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126afed0;
    func_0x00010c0db140(PTR_PTR_1126afed0);
    puVar12 = &UNK_10f3f58c9;
    uVar3 = 0x73f;
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db92b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18cd00(lVar5,param_2,0,puVar9,&PTR___NSConcreteGlobalBlock_110988550,puVar10,
                        param_7,param_8,puVar12,uVar3);
    _objc_release(puVar10);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c2726c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24e900();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  func_0x00010be357c0(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ff3dc8; end: 106ff3dcb;  */

void FUN_106ff3dc8(void)

{
  return;
}



/* Entry: 106ff3dcc; end: 106ff3e4b; -[SCCameraViewController _snapSourceFromReplyParameters:] */

ulong FUN_106ff3dcc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar2 = 8;
  }
  else {
    uVar2 = param_3;
    func_0x00010bf29f40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf90100();
    _objc_release(uVar2);
    if ((uVar1 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0f1ce0(param_3);
    }
    else {
      uVar2 = 0x4a;
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106ff3e4c; end: 106ff40eb; -[SCCameraViewController resetReplyConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ff3e4c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127624bc;
  func_0x00010c1eafc0(*(undefined8 *)(param_1 + lVar5),param_2,0);
  lVar1 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2bbc0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1eafe0(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c138320(*(undefined8 *)(param_1 + _DAT_1127624cc));
  lVar1 = param_1;
  func_0x00010bf2a5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf506a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eafc0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c242c40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c131bc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eafc0(lVar3);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c122c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c131bc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eafc0(lVar3);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c131bc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2bbc0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1eafe0(lVar3);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c093d00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb140();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be357d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideHeaderTitleRow__11256af90,0);
  return;
}


