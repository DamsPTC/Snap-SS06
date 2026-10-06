/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106105a74; end: 106105a93; -[SCCameraPreviewDestinationStrategy shouldReturnToCameraWithRecipientsCount:groupCount:hasLiveCameraLens:] */

ulong FUN_106105a74(ulong param_1)

{
  bool bVar1;
  uint in_w4;
  
  bVar1 = *(long *)(param_1 + 0x10) == 3;
  if (((in_w4 & 1) == 0) && (bVar1)) {
                    /* WARNING: Could not recover jumptable at 0x00010beb5710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__shouldReturnToMainCameraAfterSn_11258af68)
    ;
    return param_1;
  }
  return (ulong)bVar1;
}



/* Entry: 106105a94; end: 106105aa3; -[SCCameraPreviewDestinationStrategy shouldNavigateToSpotlightWithWidget] */

bool FUN_106105a94(long param_1)

{
  return (*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffb) != 0;
}



/* Entry: 106105aa4; end: 106105aaf; -[SCCameraPreviewDestinationStrategy .cxx_destruct] */

void FUN_106105aa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106105ab0; end: 106105aef;  */

void FUN_106105ab0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf1ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106105af0; end: 106105b17; -[SCCameraPreviewPresenterImpl cameraPreviewPresenterEventObservable] */

void FUN_106105af0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106105b18; end: 106105b77; -[SCCameraPreviewPresenterImpl _isSnapEditorPresented] */

bool FUN_106105b18(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0xe0);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c108b60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 == 0;
    _objc_release();
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 106105b78; end: 106105bf3; -[SCCameraPreviewPresenterImpl isPresentingPreviewViewController] */

undefined4 FUN_106105b78(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1;
  func_0x00010be43ce0();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf2a3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar2 = uVar1;
    func_0x00010010fab4(uVar1,PTR_DAT_1126a5110);
    _objc_release(uVar1);
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = (undefined4)uVar2;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 106105bf4; end: 106105bf7; -[SCCameraPreviewPresenterImpl presentingPreview] */

void FUN_106105bf4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07ac90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isPresentingPreviewViewControlle_1125fc530);
  return;
}



/* Entry: 106105bf8; end: 106105d7b; -[SCCameraPreviewPresenterImpl presentingPreviewWithLens] */

bool FUN_106105bf8(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = param_1;
  func_0x00010be43ce0();
  if ((int)lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010c07ac80();
    if ((int)lVar2 == 0) {
      return false;
    }
    func_0x00010bf2a3a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar5 = lVar4;
    func_0x00010010fab4(lVar4,PTR_DAT_1126a5110);
    lVar2 = lVar4;
    if ((int)lVar5 == 0) {
      lVar2 = 0;
    }
    _objc_retain(lVar2);
    _objc_release(lVar4);
    lVar4 = lVar2;
    func_0x00010bf46560(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar4;
    func_0x00010c09a760(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar5 != 0;
    _objc_release();
  }
  else {
    lVar3 = *(long *)(param_1 + 0xb0);
    func_0x00010c0cfdc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar3);
    lVar2 = lVar4;
    func_0x00010bfd84e0();
    if ((int)lVar2 == 0) {
      bVar1 = false;
      goto LAB_106105d58;
    }
    lVar2 = lVar4;
    func_0x00010c08fb40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bfe5ea0();
    bVar1 = 0 < lVar5;
  }
  _objc_release(lVar2);
LAB_106105d58:
  _objc_release(lVar4);
  return bVar1;
}



/* Entry: 106105d7c; end: 106105dc7; -[SCCameraPreviewPresenterImpl willEnterPreview] */

void FUN_106105d7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c0acb20();
  uVar2 = *(undefined8 *)(param_1 + 0x168);
  puVar1 = PTR_PTR_1126c8128;
  func_0x00010c2a64a0(PTR_PTR_1126c8128);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106105dc8; end: 106105e07; -[SCCameraPreviewPresenterImpl logPresentPreview] */

void FUN_106105dc8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106105e08; end: 10610637f; -[SCCameraPreviewPresenterImpl presentPreviewForImageFuture:async:imageCaptureConfiguration:managedCapturerState:] */

void FUN_106105e08(ulong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  undefined8 uVar30;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010bf2a3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07ac60();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2507c0();
    _objc_release(uVar3);
    func_0x00010c2a64a0(param_1);
    uVar1 = param_1;
    func_0x00010bf2a3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e9000();
    _objc_release(uVar1);
    uVar3 = param_5;
    func_0x00010bf31440(param_5);
    func_0x00010bea2940(param_1,param_2,uVar3);
    uVar3 = param_5;
    func_0x00010bef0520(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea2840(param_1,param_2,uVar3);
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010c127860();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf300a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c242c40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c129540();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c096000();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010c0d1c40();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010bfce220();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar21;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar23;
    func_0x00010c2bf380();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar24;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar26;
    func_0x00010c150e80();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar27;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    uVar30 = *(undefined8 *)(param_1 + 0x50);
    lVar29 = param_1 + 0x70;
    _objc_loadWeakRetained();
    func_0x00010bf47940(uVar1,param_2,param_3,param_5,param_6,uVar7,uVar10,uVar13,uVar16,uVar19,
                        uVar22,uVar25,uVar28,uVar3,uVar30,lVar29,uVar4);
    _objc_release(lVar29);
    _objc_release(uVar28);
    _objc_release(uVar27);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c1119c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar30 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar30);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c110ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010be9f1c0(param_1);
    func_0x00010bf57fc0(uVar1,param_2,uVar3,uVar30,uVar6,0,0,uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar30);
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf2a3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c255e20();
    _objc_release(uVar1);
    func_0x00010c1af3a0(*(undefined8 *)(param_1 + 0x20),param_2,param_4);
    func_0x00010c21d7e0(*(undefined8 *)(param_1 + 0x20),param_2,1);
    func_0x00010be7d800(param_1,param_2,param_3,param_4,param_5,param_6);
    _objc_release(uVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106106380; end: 1061065e7; -[SCCameraPreviewPresenterImpl _presentPreviewForImageFuture:async:imageCaptureConfiguration:managedCapturerState:] */

void FUN_106106380(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_78,param_1);
  lVar1 = param_1;
  func_0x00010c1119c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf2a3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1061065e8;
  puStack_98 = &UNK_11085da78;
  uStack_88 = 0;
  _objc_copyWeak(auStack_90,auStack_78);
  uStack_80 = param_4;
  func_0x00010c10dbe0(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c1119c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_b8,lVar1);
  _objc_release(lVar1);
  _objc_copyWeak(auStack_c8,auStack_78);
  _objc_copyWeak(auStack_c0,auStack_b8);
  uVar3 = param_5;
  _objc_retain(param_5);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95360();
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1061065e8; end: 1061066ff;  */

void FUN_1061065e8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulong)param_1 >> 0x20);
  uVar4 = (undefined4)param_1;
  uVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2a67c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar2 = uVar1;
      func_0x00010bf2a3a0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e9000();
      _objc_release(uVar2);
    }
    if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
      uVar2 = uVar1;
      func_0x00010bf2a3a0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0926e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27d4c0();
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    uVar2 = uVar1;
    func_0x00010bf2a3a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b380(PTR_PTR_1126c8130);
    func_0x00010c255d40((float)(double)CONCAT44(uVar5,uVar4),uVar2);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010bf2a3a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb180();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106106700; end: 1061067d3;  */

void FUN_106106700(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0xa0);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf311e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2b540();
      func_0x00010c0a2440(uVar3);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061067d4; end: 1061070f7; -[SCCameraPreviewPresenterImpl presentPreviewForVideoFuture:videoCaptureConfiguration:managedCapturerState:] */

void FUN_1061067d4(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined **ppuVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined **ppuVar32;
  ulong uVar33;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
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
  uVar33 = param_1;
  func_0x00010bf2a3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar33;
  func_0x00010c07ac60();
  _objc_release(uVar33);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2507c0();
    _objc_release(uVar3);
    func_0x00010c2a64a0(param_1);
    uVar33 = param_1;
    func_0x00010bf2a3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e9000();
    _objc_release(uVar33);
    func_0x00010bf31440(param_4);
    func_0x00010bea2940(param_1);
    lVar4 = param_4;
    func_0x00010bef0520(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea2840(param_1);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010c127860();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = param_1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf300a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c242c40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c129540();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c096000();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010c0d1c40();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010bfce220();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar21;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar23;
    func_0x00010c2bf380();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar24;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar26;
    func_0x00010c150e80();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar27;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + 0x70;
    _objc_loadWeakRetained();
    func_0x00010bf47d00(uVar33);
    _objc_release(lVar4);
    _objc_release(uVar28);
    _objc_release(uVar27);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar33);
    uVar33 = param_1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar33;
    func_0x00010c1109c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c243400();
    _objc_release(uVar2);
    _objc_release(uVar33);
    if (uVar5 == 4) {
      uVar33 = param_1;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar33;
      func_0x00010bf7f4a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c06ba20();
      _objc_release(uVar5);
      _objc_release(uVar2);
      _objc_release(uVar33);
      if ((int)uVar6 == 0) {
        uVar33 = 0;
      }
      else {
        uVar2 = param_1;
        func_0x00010bf29620(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010bf7f4a0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        uVar33 = uVar6;
        func_0x00010c10ffa0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar2);
      }
      lVar4 = param_4;
      func_0x00010c243320(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c215ae0(uVar33);
      _objc_release(lVar4);
      uVar2 = param_1;
      func_0x00010c1119c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1654e0();
      _objc_release(uVar2);
      _objc_release(uVar33);
    }
    _objc_initWeak(auStack_80,param_1);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1061070f8;
    puStack_90 = &UNK_1108434b0;
    _objc_copyWeak(auStack_88,auStack_80);
    ppuVar29 = &puStack_a8;
    _objc_retainBlock();
    uVar33 = param_1;
    func_0x00010c1119c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar30 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar30);
    _objc_retainAutoreleasedReturnValue();
    uVar31 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar31);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c110ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9f1c0(param_1);
    func_0x00010bf57fc0(uVar33);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar31);
    _objc_release(uVar30);
    _objc_release(uVar33);
    uVar33 = param_1;
    func_0x00010bf2a3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c255e20();
    _objc_release(uVar33);
    func_0x00010c1af3a0(*(undefined8 *)(param_1 + 0x20));
    uVar33 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar33;
    func_0x00010c0d20c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaf0c0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar33);
    uVar33 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar33;
    func_0x00010c0d20c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf926c0();
    uVar1 = (uint)uVar6;
    if (param_4 == 0) {
      uVar1 = 1;
    }
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar33);
    if ((uVar1 & 1) == 0) {
      func_0x00010be7d840(param_1);
    }
    else {
      uVar33 = param_1;
      func_0x00010c1119c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_b0,uVar33);
      _objc_release(uVar33);
      _objc_copyWeak(auStack_c0,auStack_80);
      _objc_copyWeak(auStack_b8,auStack_b0);
      _objc_retain(param_4);
      ppuVar32 = ppuVar29;
      _objc_retain(ppuVar29);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(param_3);
      _objc_release(ppuVar32);
      _objc_release(ppuVar29);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_b8);
      _objc_destroyWeak(auStack_c0);
      _objc_destroyWeak(auStack_b0);
    }
    uVar30 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95360();
    _objc_release(uVar30);
    _objc_release(ppuVar29);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1061070f8; end: 106107247;  */

void FUN_1061070f8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulong)param_1 >> 0x20);
  uVar4 = (undefined4)param_1;
  uVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2a67c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar2 = uVar1;
      func_0x00010bf2a3a0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e9000();
      _objc_release(uVar2);
    }
    uVar2 = uVar1;
    func_0x00010bf2a3a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b380(PTR_PTR_1126c8130);
    func_0x00010c255d40((float)(double)CONCAT44(uVar5,uVar4),uVar2);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010bf2a3a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb180();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106107248; end: 10610778f; -[SCCameraPreviewPresenterImpl warmupPreview] */

void FUN_106107248(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  uVar1 = param_1;
  func_0x000100456ca0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf2a3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c10a560();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010bf2a3a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c07ac60();
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) {
        uVar1 = param_1;
        func_0x00010bf2a3a0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c252440();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c150aa0();
        _objc_release(uVar2);
        _objc_release(uVar1);
        if (uVar3 != 0xc) {
          uVar1 = param_1;
          func_0x00010c1119c0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_1;
          func_0x00010bf2a3a0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c252440();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0b7e80();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_1;
          func_0x00010bf29620();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf2fba0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010bfa1820();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bf300a0();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = param_1;
          func_0x00010bf29620();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010c242c40();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x00010bfa1820();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = param_1;
          func_0x00010bf29620();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar12;
          func_0x00010c129540();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar13;
          func_0x00010bfa1820();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = param_1;
          func_0x00010bf29620();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar15;
          func_0x00010c096000();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar16;
          func_0x00010bfa1820();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = param_1;
          func_0x00010bf29620();
          _objc_retainAutoreleasedReturnValue();
          uVar19 = uVar18;
          func_0x00010c0d1c40();
          _objc_retainAutoreleasedReturnValue();
          uVar20 = uVar19;
          func_0x00010bfa1820();
          _objc_retainAutoreleasedReturnValue();
          uVar21 = param_1;
          func_0x00010bf29620();
          _objc_retainAutoreleasedReturnValue();
          uVar22 = uVar21;
          func_0x00010bfce220();
          _objc_retainAutoreleasedReturnValue();
          uVar23 = uVar22;
          func_0x00010bfa1820();
          _objc_retainAutoreleasedReturnValue();
          uVar24 = param_1;
          func_0x00010bf29620();
          _objc_retainAutoreleasedReturnValue();
          uVar25 = uVar24;
          func_0x00010c2bf380();
          _objc_retainAutoreleasedReturnValue();
          uVar26 = uVar25;
          func_0x00010bfa1820();
          _objc_retainAutoreleasedReturnValue();
          uVar27 = param_1;
          func_0x00010bf29620();
          _objc_retainAutoreleasedReturnValue();
          uVar28 = uVar27;
          func_0x00010c150e80();
          _objc_retainAutoreleasedReturnValue();
          uVar29 = uVar28;
          func_0x00010bfa1820();
          _objc_retainAutoreleasedReturnValue();
          uVar31 = *(undefined8 *)(param_1 + 0x48);
          uVar32 = *(undefined8 *)(param_1 + 0x50);
          lVar30 = param_1 + 0x70;
          _objc_loadWeakRetained();
          func_0x00010bf47940(uVar1,param_2,0,0,uVar4,uVar8,uVar11,uVar14,uVar17,uVar20,uVar23,
                              uVar26,uVar29,uVar31,uVar32,lVar30,0);
          _objc_release(lVar30);
          _objc_release(uVar29);
          _objc_release(uVar28);
          _objc_release(uVar27);
          _objc_release(uVar26);
          _objc_release(uVar25);
          _objc_release(uVar24);
          _objc_release(uVar23);
          _objc_release(uVar22);
          _objc_release(uVar21);
          _objc_release(uVar20);
          _objc_release(uVar19);
          _objc_release(uVar18);
          _objc_release(uVar17);
          _objc_release(uVar16);
          _objc_release(uVar15);
          _objc_release(uVar14);
          _objc_release(uVar13);
          _objc_release(uVar12);
          _objc_release(uVar11);
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar2);
          _objc_release(uVar1);
          uVar1 = param_1;
          func_0x00010c1119c0(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar31 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c269d40(uVar31);
          _objc_retainAutoreleasedReturnValue();
          uVar32 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c269d40(uVar32);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_1;
          func_0x00010bf29620();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c110ba0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bfa1820();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_1;
          func_0x00010bf29620(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c241880();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010bfa1820();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = param_1;
          func_0x00010be9f1c0(param_1);
          func_0x00010bf57fc0(uVar1,param_2,uVar31,uVar32,uVar4,uVar8,1,uVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar2);
          _objc_release(uVar32);
          _objc_release(uVar31);
          _objc_release(uVar1);
          *(undefined1 *)(param_1 + 0xb8) = 1;
        }
      }
    }
  }
  return;
}



/* Entry: 106107790; end: 1061078df; -[SCCameraPreviewPresenterImpl releasePrewarmedPreviewIfNeeded] */

void FUN_106107790(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = param_1;
  func_0x00010be43ce0();
  if (((uVar1 & 1) == 0) && (*(char *)(param_1 + 0xb8) == '\x01')) {
    uVar1 = param_1;
    func_0x00010bf2a3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c07ac60();
    _objc_release(uVar1);
    if (((uVar2 & 1) == 0) && (uVar1 = param_1, func_0x00010c07ac80(), (uVar1 & 1) == 0)) {
      lVar3 = param_1 + 0x18;
      _objc_loadWeakRetained();
      lVar4 = lVar3;
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      if (lVar4 == 0) {
        func_0x00010c1e2060(param_1,param_2,0);
        *(undefined1 *)(param_1 + 0xb8) = 0;
      }
      else {
        lVar3 = lVar4;
        func_0x00010c27be60();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        lVar3 = lVar5;
        func_0x00010c27c360();
        if (lVar3 != 3) {
          lVar3 = lVar4;
          func_0x00010c27ece0(lVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c128720();
          _objc_release(lVar3);
          lVar3 = param_1 + 0x18;
          _objc_loadWeakRetained(lVar3);
          func_0x00010c12e1c0();
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(lVar3);
        }
        func_0x00010c1e2060(param_1,param_2,0);
        *(undefined1 *)(param_1 + 0xb8) = 0;
        _objc_release(lVar5);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar4);
      return;
    }
  }
  return;
}



/* Entry: 1061078e0; end: 1061078e7; -[SCCameraPreviewPresenterImpl isPreviewWarmedUp] */

undefined1 FUN_1061078e0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb8);
}



/* Entry: 1061078e8; end: 1061078ef; -[SCCameraPreviewPresenterImpl resetPreviewPresenter] */

void FUN_1061078e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e2070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setPreviewPresenter__112656240,0);
  return;
}



/* Entry: 1061078f0; end: 106107ac3; -[SCCameraPreviewPresenterImpl teardownInFlightRecoveredPreview] */

void FUN_1061078f0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_1;
  func_0x00010bf2a3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c1109c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c073e40();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010bf2a3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c07ac60();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0xe0);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 != 0) {
        func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xe0));
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      uVar5 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c0cfdc0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c137fe0();
      _objc_release(uVar6);
      _objc_release(uVar5);
      uVar7 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c0cfdc0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179060();
      _objc_release(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar7);
      uVar7 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c0cfdc0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195460();
      _objc_release(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar7);
      func_0x00010c139360(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106107ac4; end: 106108147; -[SCCameraPreviewPresenterImpl handleNavigationAfterStoryPostedWithReplyConfiguration:] */

void FUN_106107ac4(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_2f8 [8];
  undefined1 auStack_2f0 [8];
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  puStack_2c8 = &uStack_90;
  uStack_90 = 0;
  dVar8 = 6.81691147847594e-313;
  uStack_80 = 0x2020000000;
  uStack_78 = 0xffffffffffffffff;
  puStack_2c0 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0xffffffffffffffff;
  puStack_1c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x2020000000;
  uStack_b8 = 0;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_106108148;
  puStack_e8 = &UNK_11090f118;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  uStack_120 = 0x1061081b0;
  puStack_118 = &UNK_11090f148;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x106108218;
  puStack_148 = &UNK_11090f178;
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  uStack_180 = 0x106108280;
  puStack_178 = &UNK_11090f1a8;
  puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b8 = 0xc2000000;
  uStack_1b0 = 0x1061082e8;
  puStack_1a8 = &UNK_11090f1d8;
  puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f0 = 0xc2000000;
  uStack_1e8 = 0x106108350;
  puStack_1e0 = &UNK_11090f208;
  puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_220 = 0xc2000000;
  uStack_218 = 0x1061083e4;
  puStack_210 = &UNK_11090f238;
  puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_250 = 0xc2000000;
  uStack_248 = 0x10610844c;
  puStack_240 = &UNK_11090f268;
  puStack_288 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_280 = 0xc2000000;
  uStack_278 = 0x1061084b4;
  puStack_270 = &UNK_11090f298;
  puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2b0 = 0xc2000000;
  uStack_2a8 = 0x10610851c;
  puStack_2a0 = &UNK_11090f2c8;
  puStack_2e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2e0 = 0xc2000000;
  uStack_2d8 = 0x106108584;
  puStack_2d0 = &UNK_11090f2f8;
  puStack_298 = puStack_2c8;
  puStack_290 = puStack_2c0;
  puStack_268 = puStack_2c8;
  puStack_260 = puStack_2c0;
  puStack_238 = puStack_2c8;
  puStack_230 = puStack_2c0;
  puStack_208 = puStack_2c8;
  puStack_200 = puStack_2c0;
  puStack_1d8 = puStack_2c8;
  puStack_1d0 = puStack_2c0;
  puStack_1a0 = puStack_2c8;
  puStack_198 = puStack_2c0;
  puStack_170 = puStack_2c8;
  puStack_168 = puStack_2c0;
  puStack_140 = puStack_2c8;
  puStack_138 = puStack_2c0;
  puStack_110 = puStack_2c8;
  puStack_108 = puStack_2c0;
  puStack_e0 = puStack_2c8;
  puStack_d8 = puStack_2c0;
  puStack_c8 = puStack_1c8;
  puStack_a8 = puStack_2c0;
  puStack_88 = puStack_2c8;
  func_0x00010c0bcaa0(param_3);
  uVar6 = puStack_88[3];
  if ((((uVar6 < 0x21) && ((1L << (uVar6 & 0x3f) & 0x100001200U) != 0)) || (puStack_a8[3] == 0x11))
     || ((*(byte *)(puStack_c8 + 3) & 1) != 0)) {
    if (((param_3 == 0) || (0x21 < uVar6)) || ((1L << (uVar6 & 0x3f) & 0x210041000U) == 0)) {
      func_0x00010bf2a3a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_1;
      func_0x00010c112540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7b520();
      uVar2 = param_1;
      param_1 = uVar6;
    }
    else {
      uVar6 = param_1;
      func_0x00010bf2a3a0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar6;
      func_0x00010c112540();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      _objc_opt_respondsToSelector();
      _objc_release(uVar1);
      _objc_release(uVar6);
      if ((uVar2 & 1) == 0) goto LAB_106107df8;
      func_0x00010bf2a3a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_1;
      func_0x00010c112540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf78540();
      uVar2 = param_1;
      param_1 = uVar6;
    }
LAB_106107de8:
    _objc_release(param_1);
  }
  else {
    uVar6 = param_1;
    func_0x00010bf2a3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar6);
    _objc_retain(uVar2);
    uVar6 = uVar2;
    func_0x00010010fab4(uVar2,PTR_DAT_1126a5110);
    _objc_release(uVar2);
    iVar7 = 0;
    if (uVar2 != 0) {
      iVar7 = (int)uVar6;
    }
    if (iVar7 == 1) {
      uVar6 = param_1;
      func_0x00010bf2a3a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar6;
      func_0x00010c0d66a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      _objc_release(uVar6);
      uVar1 = param_1;
      func_0x00010bf2a3a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c8138;
      _objc_opt_class(PTR_PTR_1126c8138);
      uVar4 = uVar1;
      _objc_opt_isKindOfClass(uVar1,puVar3);
      uVar6 = uVar1;
      if ((uVar4 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar1);
      uVar1 = uVar6;
      func_0x00010c29bf00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c148fc0();
      dVar9 = dVar8;
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010bf2a3a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfdfd40();
      _objc_release(uVar1);
      puVar3 = PTR_PTR_1126c8140;
      _objc_alloc(PTR_PTR_1126c8140);
      func_0x00010c039d40(dVar9,dVar8 * 0.5);
      func_0x00010c188220(*(undefined8 *)(param_1 + 0x20));
      _objc_initWeak(auStack_2f0,param_1);
      uVar1 = uVar5;
      func_0x00010c10fd00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_2f8,auStack_2f0);
      func_0x00010bf84b00(uVar1);
      _objc_release(uVar1);
      _objc_destroyWeak(auStack_2f8);
      _objc_destroyWeak(auStack_2f0);
      _objc_release(puVar3);
      param_1 = uVar5;
LAB_1061080d0:
      _objc_release(uVar6);
      goto LAB_106107de8;
    }
    uVar6 = param_1;
    func_0x00010bf2a3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010c112540();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    _objc_release(uVar6);
    if ((uVar5 & 1) != 0) {
      func_0x00010bf2a3a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_1;
      func_0x00010c112540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf78540();
      goto LAB_1061080d0;
    }
  }
  _objc_release(uVar2);
LAB_106107df8:
  __Block_object_dispose(&uStack_d0,8);
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(param_3);
  return;
}



/* Entry: 106108148; end: 1061086a3;  */

void FUN_106108148(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c243400();
  func_0x0001091ef74c();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar1;
  uVar1 = param_2;
  func_0x00010c0d6ca0();
  _objc_release(param_2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 1061086a4; end: 106108c5f; -[SCCameraPreviewPresenterImpl presentPreviewForBatchCaptureWithManagedCapturerState:activeCameraModes:] */

void FUN_1061086a4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  undefined **ppuVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf2a3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07ac60();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c2a64a0(param_1);
    uVar1 = param_1;
    func_0x00010bf2a3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e9000();
    _objc_release(uVar1);
    func_0x00010bea2840(param_1);
    uVar1 = param_1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf300a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c242c40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c129540();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010c096000();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010c0d1c40();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar22;
    func_0x00010bfce220();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar23;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar25;
    func_0x00010c2bf380();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar26;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar28;
    func_0x00010c150e80();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = uVar29;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar31 = param_1 + 0x70;
    _objc_loadWeakRetained();
    func_0x00010bf476a0(uVar1);
    _objc_release(lVar31);
    _objc_release(uVar30);
    _objc_release(uVar29);
    _objc_release(uVar28);
    _objc_release(uVar27);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_initWeak(auStack_70,param_1);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106108c60;
    puStack_80 = &UNK_1108434b0;
    _objc_copyWeak(auStack_78,auStack_70);
    ppuVar32 = &puStack_98;
    _objc_retainBlock(ppuVar32);
    uVar1 = param_1;
    func_0x00010c1119c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar33 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar33);
    _objc_retainAutoreleasedReturnValue();
    uVar34 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar34);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9f1c0(param_1);
    func_0x00010bf57fc0(uVar1);
    _objc_release(uVar34);
    _objc_release(uVar33);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf2a3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c255e20();
    _objc_release(uVar1);
    func_0x00010c1af3a0(*(undefined8 *)(param_1 + 0x20));
    uVar1 = param_1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16f680();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2a3a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10dbe0(uVar1);
    _objc_release(param_1);
    _objc_release(uVar1);
    _objc_release(ppuVar32);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106108c60; end: 106108cff;  */

void FUN_106108c60(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2a67c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar2 = uVar1;
      func_0x00010bf2a3a0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e9000();
      _objc_release(uVar2);
    }
    uVar2 = uVar1;
    func_0x00010bf2a3a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c255c00();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106108d00; end: 106109057; -[SCCameraPreviewPresenterImpl _prepareTimelineLoggingWithConfiguration:managedCapturerState:] */

void FUN_106108d00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar3 = param_1;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf300a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c242c40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c129540();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c096000();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c0d1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010bfce220();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c2bf380();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010c150e80();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar27;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  func_0x00010c10a060(lVar3,param_2,param_3,param_4,lVar7,lVar10,lVar13,lVar16,lVar19,lVar22,lVar25,
                      lVar28,uVar1,uVar2,param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106109058; end: 106109267; -[SCCameraPreviewPresenterImpl presentPreviewForContinuousCaptureWithManagedCapturerState:activeCameraModes:] */

void FUN_106109058(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf2a3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07ac60();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    lVar3 = param_1 + 0x170;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf4fce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0be6c0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_1 + 0x170;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf4fd80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = lVar5;
    func_0x00010c1585e0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(lVar3);
    lVar3 = lVar5;
    func_0x00010c2702a0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10daa0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar5);
    __Block_object_dispose(&uStack_60,8);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106109268; end: 10610929b;  */

void FUN_106109268(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 10610929c; end: 10610991b; -[SCCameraPreviewPresenterImpl presentPreviewForContinuousCaptureWithTimelineConfiguration:snapSessionID:managedCapturerState:activeCameraModes:] */

void FUN_10610929c(ulong param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  undefined **ppuVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010bf2a3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07ac60();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = param_3;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      lVar3 = param_4;
      func_0x00010c08fa60();
      if (lVar3 == 0) {
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(param_4);
        lVar3 = param_4;
      }
      func_0x00010c2a64a0(param_1);
      uVar1 = param_1;
      func_0x00010bf2a3a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e9000();
      _objc_release(uVar1);
      func_0x00010bea2840(param_1);
      uVar1 = param_1;
      func_0x00010c1119c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b0260();
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010c1119c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c205640();
      _objc_release(uVar1);
      uVar5 = *(undefined8 *)(param_1 + 0xf0);
      func_0x00010c127860();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010bf2fba0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf300a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_1;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bf7f1c0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_1;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010c242c40();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = param_1;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      func_0x00010c129540();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar16;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = param_1;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar18;
      func_0x00010c096000();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar19;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = param_1;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar21;
      func_0x00010c0d1c40();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = uVar22;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar24 = param_1;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar25 = uVar24;
      func_0x00010bfce220();
      _objc_retainAutoreleasedReturnValue();
      uVar26 = uVar25;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar27 = param_1;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar28 = uVar27;
      func_0x00010c2bf380();
      _objc_retainAutoreleasedReturnValue();
      uVar29 = uVar28;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar30 = param_1;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar31 = uVar30;
      func_0x00010c150e80();
      _objc_retainAutoreleasedReturnValue();
      uVar32 = uVar31;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1 + 0x70;
      _objc_loadWeakRetained();
      func_0x00010bf47840(uVar1);
      _objc_release(lVar4);
      _objc_release(uVar32);
      _objc_release(uVar31);
      _objc_release(uVar30);
      _objc_release(uVar29);
      _objc_release(uVar28);
      _objc_release(uVar27);
      _objc_release(uVar26);
      _objc_release(uVar25);
      _objc_release(uVar24);
      _objc_release(uVar23);
      _objc_release(uVar22);
      _objc_release(uVar21);
      _objc_release(uVar20);
      _objc_release(uVar19);
      _objc_release(uVar18);
      _objc_release(uVar17);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_initWeak(auStack_70,param_1);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_10610991c;
      puStack_80 = &UNK_1108434b0;
      _objc_copyWeak(auStack_78,auStack_70);
      ppuVar33 = &puStack_98;
      _objc_retainBlock(ppuVar33);
      uVar1 = param_1;
      func_0x00010c1119c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar34 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar34);
      _objc_retainAutoreleasedReturnValue();
      uVar35 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be9f1c0();
      func_0x00010bf57fc0(uVar1);
      _objc_release(uVar35);
      _objc_release(uVar34);
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010bf2a3a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c255e20();
      _objc_release(uVar1);
      func_0x00010c1af3a0(*(undefined8 *)(param_1 + 0x20));
      uVar1 = param_1;
      func_0x00010c1119c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2a3a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10dbe0(uVar1);
      _objc_release(param_1);
      _objc_release(uVar1);
      _objc_release(ppuVar33);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_70);
      _objc_release(uVar5);
      _objc_release(lVar3);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10610991c; end: 1061099bb;  */

void FUN_10610991c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2a67c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar2 = uVar1;
      func_0x00010bf2a3a0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e9000();
      _objc_release(uVar2);
    }
    uVar2 = uVar1;
    func_0x00010bf2a3a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c255c00();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061099bc; end: 106109edb; -[SCCameraPreviewPresenterImpl recoverPreviewForContinuousCaptureWithTimelineConfiguration:snapSessionContext:contentLossReason:managedCapturerState:activeCameraModes:] */

void FUN_1061099bc(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar15 = param_4;
  func_0x00010c2407e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar15;
  func_0x00010bfdc2e0();
  _objc_release(lVar15);
  if ((int)lVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    if (uVar3 != 0) {
      lVar15 = param_4;
      func_0x00010c2407e0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar15;
      func_0x00010c240200();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010bf9e140();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c08fa60();
      _objc_release(lVar4);
      _objc_release(lVar1);
      _objc_release(lVar15);
      if (lVar5 == 0) {
        puVar12 = (undefined *)0x0;
      }
      else {
        puVar12 = PTR_PTR_1126b25b8;
        _objc_alloc();
        lVar15 = param_4;
        func_0x00010c2407e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar15;
        func_0x00010c240200();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar1;
        func_0x00010bf9e140();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_4;
        func_0x00010c2407e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c240200();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c0c46a0();
        func_0x00010c011280(puVar12,param_2,lVar4,lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar1);
        _objc_release(lVar15);
      }
      uVar8 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c0cfdc0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar13;
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = param_4;
      func_0x00010c2407e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar15;
      func_0x00010c23fe00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c139f20(uVar9,param_2,lVar1,puVar12);
      _objc_release(lVar1);
      _objc_release(lVar15);
      _objc_release(uVar9);
      _objc_release(uVar13);
      _objc_release(uVar8);
      lVar15 = param_4;
      func_0x00010c2407e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar15;
      func_0x00010bf51e00();
      uVar9 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c0cfdc0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2042c0();
      _objc_release(uVar13);
      _objc_release(uVar9);
      _objc_release(lVar1);
      _objc_release(lVar15);
      uVar8 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c0cfdc0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar13;
      func_0x00010c2407e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c203f00();
      _objc_release(uVar9);
      _objc_release(uVar13);
      _objc_release(uVar8);
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uVar2 = param_3;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf52a60();
      if (uVar3 != 0) {
        lVar15 = *plStack_120;
        do {
          uVar14 = 0;
          do {
            if (*plStack_120 != lVar15) {
              _objc_enumerationMutation(uVar2);
            }
            uVar13 = *(undefined8 *)(lStack_128 + uVar14 * 8);
            uVar10 = param_3;
            func_0x00010c2702a0(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c18e120(uVar13,param_2,uVar10,0,0);
            _objc_release(uVar10);
            func_0x00010c1e9040(uVar13);
            func_0x00010c182160(uVar13,param_2,param_5);
            uVar14 = uVar14 + 1;
          } while (uVar3 != uVar14);
          uVar3 = uVar2;
          func_0x00010bf52a60(uVar2,param_2,&uStack_130,auStack_f0,0x10);
        } while (uVar3 != 0);
      }
      _objc_release(uVar2);
      func_0x00010be79460(param_1,param_2,param_3,param_6);
      lVar15 = param_1;
      func_0x00010c1119c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar15;
      func_0x00010c1109c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c182160();
      _objc_release(lVar1);
      _objc_release(lVar15);
      lVar15 = param_1;
      func_0x00010c1119c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar15;
      func_0x00010c1109c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b1580();
      _objc_release(lVar1);
      _objc_release(lVar15);
      uVar2 = param_3;
      func_0x00010c2702a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10daa0(param_1,param_2,param_3,uVar2,param_6,param_7);
      _objc_release(uVar2);
      _objc_release(puVar12);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = param_3;
  func_0x00010bf2a3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07ac60();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    return;
  }
  func_0x00010c2a64a0(param_3);
  uVar2 = param_3;
  func_0x00010bf2a3a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9000();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c1119c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf29620(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar3;
  func_0x00010c110ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar14;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010be9f1c0(param_3);
  func_0x00010bf57fc0(uVar2,param_2,uVar13,uVar9,uVar10,0,0,uVar11);
  _objc_release(uVar10);
  _objc_release(uVar14);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uVar13);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf2a3a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c255e20();
  _objc_release(uVar2);
  func_0x00010c1af3a0(*(undefined8 *)(param_3 + 0x20),param_2,0);
  uVar2 = param_3;
  func_0x00010c1119c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf2a3a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10dbe0(uVar2,param_2,uVar3,*(undefined8 *)(param_3 + 0x20),0);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106109edc; end: 10610a0b3; -[SCCameraPreviewPresenterImpl presentPreview] */

void FUN_106109edc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = param_1;
  func_0x00010bf2a3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07ac60();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  func_0x00010c2a64a0(param_1);
  uVar1 = param_1;
  func_0x00010bf2a3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9000();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c1119c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c110ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010be9f1c0(param_1);
  func_0x00010bf57fc0(uVar1,param_2,uVar3,uVar4,uVar6,0,0,uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf2a3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c255e20();
  _objc_release(uVar1);
  func_0x00010c1af3a0(*(undefined8 *)(param_1 + 0x20),param_2,0);
  uVar1 = param_1;
  func_0x00010c1119c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf2a3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10dbe0(uVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x20),0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10610a0b4; end: 10610a24b; -[SCCameraPreviewPresenterImpl presentSnapEditor] */

void FUN_10610a0b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  func_0x00010c2a64a0();
  lVar1 = param_1;
  func_0x00010bf2a3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9000();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c1119c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c110ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010be9f1c0(param_1);
  func_0x00010bf57fc0(lVar1,param_2,uVar2,uVar3,lVar6,0,0,lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf2a3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c255e20();
  _objc_release(lVar1);
  func_0x00010c1af3a0(*(undefined8 *)(param_1 + 0x20),param_2,0);
  lVar1 = param_1;
  func_0x00010c1119c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf2a3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10dbe0(lVar1,param_2,lVar4,*(undefined8 *)(param_1 + 0x20),0);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10610a24c; end: 10610a90f; -[SCCameraPreviewPresenterImpl presentPreviewForDirectorModeWithManagedCapturerState:activeCameraModes:] */

void FUN_10610a24c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  long lVar39;
  undefined **ppuVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf2a3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07ac60();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c2a64a0(param_1);
    uVar1 = param_1;
    func_0x00010bf2a3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e9000();
    _objc_release(uVar1);
    func_0x00010bea2840(param_1);
    uVar3 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010c127860();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0c45a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf300a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c242c40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010c129540();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010c096000();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar21;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar23;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar24;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar25;
    func_0x00010c26e700();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar27;
    func_0x00010c0d1c40();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar28;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar31 = uVar30;
    func_0x00010bfce220();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar31;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = uVar33;
    func_0x00010c2bf380();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = uVar34;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = uVar36;
    func_0x00010c150e80();
    _objc_retainAutoreleasedReturnValue();
    uVar38 = uVar37;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar39 = param_1 + 0x70;
    _objc_loadWeakRetained();
    func_0x00010bf47840(uVar1);
    _objc_release(lVar39);
    _objc_release(uVar38);
    _objc_release(uVar37);
    _objc_release(uVar36);
    _objc_release(uVar35);
    _objc_release(uVar34);
    _objc_release(uVar33);
    _objc_release(uVar32);
    _objc_release(uVar31);
    _objc_release(uVar30);
    _objc_release(uVar29);
    _objc_release(uVar28);
    _objc_release(uVar27);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_initWeak(auStack_70,param_1);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10610a910;
    puStack_80 = &UNK_1108434b0;
    _objc_copyWeak(auStack_78,auStack_70);
    ppuVar40 = &puStack_98;
    _objc_retainBlock();
    uVar1 = param_1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    uVar41 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar42 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar42);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c110ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9f1c0(param_1);
    func_0x00010bf57fc0(uVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar42);
    _objc_release(uVar41);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf2a3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c255e20();
    _objc_release(uVar1);
    func_0x00010c1af3a0(*(undefined8 *)(param_1 + 0x20));
    uVar1 = param_1;
    func_0x00010c1119c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2a3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10dbe0(uVar1);
    _objc_release(param_1);
    _objc_release(uVar1);
    _objc_release(ppuVar40);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10610a910; end: 10610aa13;  */

void FUN_10610a910(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulong)param_1 >> 0x20);
  uVar5 = (undefined4)param_1;
  uVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2a67c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar2 = uVar1;
      func_0x00010bf2a3a0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e9000();
      _objc_release(uVar2);
    }
    uVar2 = uVar1;
    func_0x00010bf2a3a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b380(PTR_PTR_1126c8130);
    func_0x00010c255d40((float)(double)CONCAT44(uVar6,uVar5),uVar2);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010bf29620(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe2620();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10610aa14; end: 10610aae3; -[SCCameraPreviewPresenterImpl preloadSnapEditor] */

void FUN_10610aa14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = param_1;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0c3760();
  _objc_release(lVar4);
  if ((int)lVar5 != 0) {
    lVar4 = param_1;
    func_0x00010bf2a3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR_PTR_1126c8148;
    if (lVar4 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0xe0);
      uVar2 = *(undefined8 *)(param_1 + 0xe8);
      uVar6 = *(undefined8 *)(param_1 + 0x100);
      uVar7 = *(undefined8 *)(param_1 + 0xd8);
      func_0x00010bf2a3a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c108c40(puVar3,param_2,uVar1,uVar2,uVar6,uVar7,param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10610aae4; end: 10610ab63; -[SCCameraPreviewPresenterImpl didComeFromCameraWithoutSendingSnapForCameraVC] */

void FUN_10610aae4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf73c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10610ab64; end: 10610ad4b; -[SCCameraPreviewPresenterImpl setPreviewPresenter:] */

void FUN_10610ab64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf2a3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1109c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c078260();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar5 != 0) {
    *(undefined1 *)(param_1 + 0xb9) = 1;
    lVar1 = param_1;
    func_0x00010bf2a3a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c1109c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c23a220();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar5 != 0) {
      *(undefined1 *)(param_1 + 0xba) = 1;
    }
    lVar1 = param_1;
    func_0x00010bf2a3a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c1109c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c24ae40();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar5 != 0) {
      *(undefined1 *)(param_1 + 0xbb) = 1;
    }
  }
  *(undefined1 *)(param_1 + 0xb8) = 0;
  func_0x00010bf2a3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2060();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10610ad4c; end: 10610ae13; -[SCCameraPreviewPresenterImpl scanCameraShortcutSessionStartWithId:scanSessionId:] */

void FUN_10610ad4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c1119c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1109c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1770a0();
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1119c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1109c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f64c0();
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10610ae14; end: 10610aea7; -[SCCameraPreviewPresenterImpl scanCameraShortcutSessionEnd] */

void FUN_10610ae14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1109c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1770a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1119c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1109c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f64c0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10610aea8; end: 10610aefb; -[SCCameraPreviewPresenterImpl _setCaptureSourceFromRecordingMethod:] */

void FUN_10610aea8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if ((param_3 < 5) && (param_3 != 3)) {
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1792c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10610aefc; end: 10610b067; -[SCCameraPreviewPresenterImpl _presentPreviewForRecordedVideoFuture:videoCaptureConfiguration:completion:] */

void FUN_10610aefc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010c1119c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf2a3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10dbe0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(param_3);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10610b068; end: 10610b1af;  */

void FUN_10610b068(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0xa0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf311e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b540();
    func_0x00010c0a2440(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c299d80(param_3);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (11.0 < param_1) {
      uVar2 = *(undefined8 *)(lVar1 + 0x30);
      func_0x00010c299d80(param_3);
      func_0x00010c14de00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001085a987c(uVar2,puVar4,1);
      _objc_release(puVar4);
    }
    func_0x00010beae260(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10610b1b0; end: 10610b247; -[SCCameraPreviewPresenterImpl _presentPreviewForRecordedVideo:videoCaptureConfiguration:completion:] */

void FUN_10610b1b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_5);
  func_0x00010beae260(param_1,param_2,param_3,param_4);
  lVar1 = param_1;
  func_0x00010c1119c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf2a3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10dbe0(lVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x20),param_5);
  _objc_release(param_5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10610b248; end: 10610b63b; -[SCCameraPreviewPresenterImpl _setupMultiSnapConfigurationWithVideo:videoCaptureConfiguration:] */

void FUN_10610b248(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c299d80(param_4);
  if (param_1 <= 11.0) goto LAB_10610b44c;
  puVar1 = param_2;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d20c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c299d80(param_4);
  _CMTimeMakeWithSeconds(auStack_68,600);
  puVar4 = puVar3;
  func_0x00010bf46940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar4 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar5 = 0x19;
    func_0x0001000819a8(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x10610b478;
    puStack_90 = &UNK_11084c4a0;
    _objc_retain(param_4);
    uStack_88 = param_4;
    puStack_80 = param_2;
    _objc_retain(param_5);
    uStack_78 = param_5;
    puStack_70 = puVar1;
    _objc_retain(puVar1);
    func_0x00010007380c(uVar5,&puStack_a8);
    _objc_release(uVar5);
    func_0x00010c1119c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c9720(param_2);
    _objc_release(puVar2);
    _objc_release(param_2);
    _objc_release(puStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_88);
LAB_10610b43c:
    _objc_release(puVar1);
  }
  else {
    puVar1 = puVar4;
    func_0x00010c26f640();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf529e0();
    _objc_release(puVar1);
    if (puVar2 != (undefined *)0x0) {
      func_0x00010c1119c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c9700();
      puVar1 = param_2;
      goto LAB_10610b43c;
    }
  }
  _objc_release(puVar4);
LAB_10610b44c:
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10610b63c; end: 10610b763; -[SCCameraPreviewPresenterImpl _setCameraModesInfoFromActiveCameraModes:] */

void FUN_10610b63c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c1119c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162560();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126afff8;
  uVar1 = param_1;
  func_0x00010c1119c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1109c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf6f7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2a000(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1119c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126afff8;
  func_0x00010bf6f7c0(PTR_PTR_1126afff8,param_2,param_3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c18c600(param_1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10610b764; end: 10610b817; -[SCCameraPreviewPresenterImpl _sendFlowSource] */

undefined8 FUN_10610b764(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010bf2a3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf2bbc0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 10) {
    uVar4 = 9;
  }
  else {
    func_0x00010bf2a3a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c150aa0();
    uVar4 = 0xb;
    if (lVar2 != 3) {
      uVar4 = 0;
    }
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  return uVar4;
}



/* Entry: 10610b818; end: 10610b94b; -[SCCameraPreviewPresenterImpl _createPreviewWorkflowNavigationHandler] */

void FUN_10610b818(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar3 = param_1;
  func_0x00010bf2a3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c150aa0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126c8158;
  _objc_alloc(PTR_PTR_1126c8158);
  func_0x00010bffe3a0();
  puVar6 = PTR_PTR_1126c8160;
  _objc_alloc(PTR_PTR_1126c8160);
  lVar3 = param_1 + 0x1b8;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar4);
  uVar8 = *(undefined8 *)(param_1 + 0x88);
  uVar9 = *(undefined8 *)(param_1 + 0x118);
  uVar10 = *(undefined8 *)(param_1 + 0x130);
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  uVar2 = *(undefined8 *)(param_1 + 0x148);
  uVar7 = *(undefined8 *)(param_1 + 0x198);
  func_0x00010bfe9b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc0c0(puVar6,param_2,lVar3,lVar4,puVar5,uVar8,uVar9,uVar10,uVar2,uVar1,uVar7);
  _objc_release(uVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10610b94c; end: 10610bbcf; -[SCCameraPreviewPresenterImpl .cxx_destruct] */

void FUN_10610b94c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x1b8);
  _objc_destroyWeak(param_1 + 0x1b0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_destroyWeak(param_1 + 0x170);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
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
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10610bbd0; end: 10610be0f; -[SCCameraPreviewWorkflowNavigationHandler initWithCameraViewController:sendflowScopeExposer:destinationStrategy:circumstanceEngine:contentPostSendUpsellServices:sendToFeedLogger:storyAutoSavingScopeExposer:mainTabNavigationServices:imagineLensService:] */

undefined8 *
FUN_10610bbd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126efc28;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    uVar2 = param_3;
    func_0x00010c112540(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(puVar1 + 2,uVar2);
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010c2bd4c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[8];
    puVar1[8] = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10610be10; end: 10610bfc7; -[SCCameraPreviewWorkflowNavigationHandler didCancelFromPreview:] */

void FUN_10610be10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd13c0();
  _objc_release(uVar1);
  uVar2 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    lVar4 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar4);
    func_0x00010bf72d00();
    _objc_release(lVar4);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    lVar4 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar4);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf72d20(lVar4);
    _objc_release(lVar4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = PTR_PTR_1126c8168;
  func_0x00010bf72ce0(PTR_PTR_1126c8168);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
  _objc_release(puVar5);
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bf72ce0();
  _objc_release(lVar4);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bf61c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbd20();
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 10610bfc8; end: 10610c00b;  */

void FUN_10610bfc8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfd0d80();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10610c00c; end: 10610c07b; -[SCCameraPreviewWorkflowNavigationHandler didComeFromCameraWithoutSendingSnap] */

void FUN_10610c00c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf73c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10610c07c; end: 10610c0eb; -[SCCameraPreviewWorkflowNavigationHandler didSendToGallery] */

void FUN_10610c07c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7b580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10610c0ec; end: 10610c0f3; -[SCCameraPreviewWorkflowNavigationHandler didSendSnapsAndPostToStory:storyTypes:] */

void FUN_10610c0ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be00550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__didSendSnapsAndPostToStory_stor_11255daf0,param_3,param_4,0);
  return;
}



/* Entry: 10610c0f4; end: 10610c0f7; -[SCCameraPreviewWorkflowNavigationHandler didSendSnapsAndPostToStory:storyTypes:shouldReturnToCamera:] */

void FUN_10610c0f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be00550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didSendSnapsAndPostToStory_stor_11255daf0);
  return;
}



/* Entry: 10610c0f8; end: 10610c16f; -[SCCameraPreviewWorkflowNavigationHandler didSendDiscoverSharedMessageWithParameters:] */

void FUN_10610c0f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7b440();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10610c170; end: 10610c1df; -[SCCameraPreviewWorkflowNavigationHandler didSendChatMessage] */

void FUN_10610c170(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7b400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10610c1e0; end: 10610c26f; -[SCCameraPreviewWorkflowNavigationHandler didSaveSnapWithParameters:] */

void FUN_10610c1e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf7a380();
    _objc_release(lVar3);
  }
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7a340();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10610c270; end: 10610c57f; -[SCCameraPreviewWorkflowNavigationHandler didPostStoryWithStoryTypes:] */

void FUN_10610c270(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  
  _objc_retain(param_3);
  uVar2 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    lVar4 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar4);
    func_0x00010bf78540();
    _objc_release(lVar4);
  }
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bf784c0();
  _objc_release(lVar4);
  uVar2 = param_3;
  func_0x00010bf4b900();
  if (((uVar2 & 1) != 0) || (uVar2 = param_3, func_0x00010bf4b900(), (int)uVar2 != 0)) {
    func_0x00010c251700(*(undefined8 *)(param_1 + 0x40));
  }
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = param_3;
  func_0x00010bf4b900();
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c24b780();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar2 != 0) {
    func_0x00010bf529e0(param_3);
  }
  uVar6 = uVar11;
  func_0x00010c231a00();
  _objc_release(uVar11);
  _objc_release(uVar5);
  if ((int)uVar6 == 0) {
LAB_10610c3f4:
    lVar7 = *(long *)(param_1 + 0x78);
    func_0x00010bf529e0();
    if ((lVar7 == 0) || (lVar4 == 0)) goto LAB_10610c528;
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    func_0x000108f4841c(uVar11,1);
    if ((int)uVar11 == 0) goto LAB_10610c528;
    lVar7 = *(long *)(param_1 + 0x48);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar12 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar8 = PTR_PTR_1126c8170;
    _objc_alloc(PTR_PTR_1126c8170);
    func_0x00010c058760();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x48));
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c231a20();
    if (iVar1 == 0) goto LAB_10610c3f4;
    lVar7 = *(long *)(param_1 + 0x80);
    func_0x00010c08fa60();
    if (lVar7 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar8 = *(undefined **)(param_1 + 0x50);
    func_0x00010c24b780(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar12 == (undefined *)0x0) {
      func_0x00010c23a360(puVar9);
    }
    else {
      puVar10 = PTR_PTR_1126ae558;
      func_0x00010bfe9ca0(PTR_PTR_1126ae558);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23a360(puVar9);
      _objc_release(puVar10);
    }
    _objc_release(puVar9);
  }
  _objc_release(puVar8);
  _objc_release(puVar12);
LAB_10610c528:
  uVar11 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar11);
  *(undefined1 *)(param_1 + 0x88) = 0;
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10610c580; end: 10610c613; -[SCCameraPreviewWorkflowNavigationHandler didPostStoryWithStoryTypes:clientIds:spotlightTileBytes:isCrossPostingSpotlightToStories:] */

void FUN_10610c580(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_5;
  _objc_release(uVar1);
  _objc_release(param_4);
  *(undefined1 *)(param_1 + 0x88) = param_6;
  func_0x00010bf78540(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10610c614; end: 10610c6b3; -[SCCameraPreviewWorkflowNavigationHandler didPresentSendTo] */

void FUN_10610c614(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf61c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbd20();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf786c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10610c6b4; end: 10610c753; -[SCCameraPreviewWorkflowNavigationHandler didDismissSendTo] */

void FUN_10610c6b4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf61c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbd20();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf75120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10610c754; end: 10610c7c3; -[SCCameraPreviewWorkflowNavigationHandler didComeFromCameraWithoutSendingSnapForCameraVC] */

void FUN_10610c754(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf73c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10610c7c4; end: 10610c89f; -[SCCameraPreviewWorkflowNavigationHandler willSendWithRecipientsCount:groupCount:] */

void FUN_10610c7c4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (0 < param_3) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010be34040(param_1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar5 = *(ulong *)(param_1 + 0x28);
    func_0x00010c232c60(uVar5,param_2,param_3,param_4,lVar4);
    if ((uVar5 & 1) == 0) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      func_0x00010c109060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10610c8a0; end: 10610ca0b; -[SCCameraPreviewWorkflowNavigationHandler didSendWithEvent:] */

void FUN_10610c8a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x89) = 1;
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010be34040(param_1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10610ca0c;
    puStack_58 = &UNK_11090f358;
    uStack_48 = (undefined1)lVar4;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10610ca98;
    puStack_80 = &UNK_11090f388;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10610cc50;
    puStack_a8 = &UNK_110842e18;
    lStack_a0 = param_1;
    lStack_78 = param_1;
    lStack_50 = param_1;
    func_0x00010c0bfee0(param_3,param_2,&puStack_70,&puStack_98,&puStack_c0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10610ca0c; end: 10610ca97;  */

void FUN_10610ca0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  _objc_retain(param_3);
  func_0x00010c232c60();
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x89) = uVar1;
  func_0x00010be00540(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10610ca98; end: 10610cc4f;  */

void FUN_10610ca98(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(lVar3 + 0x60);
  *(undefined8 *)(lVar3 + 0x60) = param_4;
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(lVar3 + 0x68);
  *(undefined8 *)(lVar3 + 0x68) = param_5;
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(lVar3 + 0x70);
  *(undefined8 *)(lVar3 + 0x70) = param_6;
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(lVar3 + 0x78);
  *(undefined8 *)(lVar3 + 0x78) = param_7;
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_8);
  uVar1 = *(undefined8 *)(lVar3 + 0x80);
  *(undefined8 *)(lVar3 + 0x80) = param_8;
  _objc_release(uVar1);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x88) = param_9;
  uVar2 = *(ulong *)(param_1 + 0x20);
  _objc_opt_respondsToSelector(uVar2,PTR_s_didPostStoryWithStoryTypes__1125bbaf8);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf78540(*(undefined8 *)(param_1 + 0x20));
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  _objc_opt_respondsToSelector(uVar2,PTR_s_didPostNewlyCreatedGroupStoriesW_1125bbad0);
  if (((uVar2 & 1) != 0) && (lVar3 = param_2, func_0x00010bf529e0(), lVar3 != 0)) {
    func_0x00010bf784a0(*(undefined8 *)(param_1 + 0x20));
  }
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e6e0();
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10610cc50; end: 10610cc8f;  */

void FUN_10610cc50(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  _objc_opt_respondsToSelector(uVar1,PTR_s_didSendChatMessage_1125bc6a8);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf7b410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_didSendChatMessage_1125bc6a8);
    return;
  }
  return;
}



/* Entry: 10610cc90; end: 10610cc93; -[SCCameraPreviewWorkflowNavigationHandler didDismissSendFlow] */

void FUN_10610cc90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be93ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetSendFlowScope_112582848);
  return;
}



/* Entry: 10610cc94; end: 10610cceb; -[SCCameraPreviewWorkflowNavigationHandler didSendComplete:] */

void FUN_10610cc94(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  if ((param_3 != 0) && (*(char *)(param_1 + 0x89) != '\x01')) {
    return;
  }
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1119e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a2040();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10610ccec; end: 10610cdf7; -[SCCameraPreviewWorkflowNavigationHandler _resetSendFlowScope] */

void FUN_10610ccec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _objc_initWeak(auStack_38,param_1);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c12e1c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c2a4ae0(lVar1);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 10610cdf8; end: 10610ce5b;  */

void FUN_10610cdf8(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c1119e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a2040();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10610ce5c; end: 10610cfb3; -[SCCameraPreviewWorkflowNavigationHandler _didSendSnapsAndPostToStory:storyTypes:shouldReturnToCamera:] */

void FUN_10610ce5c(long param_1,undefined8 param_2,int param_3,ulong param_4,int param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf7b500();
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126c8168;
  func_0x00010bf7b4e0(PTR_PTR_1126c8168);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar1);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  if (param_5 == 0) {
    func_0x00010bf7b520();
  }
  else {
    func_0x00010bf72d00();
    _objc_release(lVar2);
    lVar2 = *(long *)(param_1 + 0x38);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e6e0();
  }
  _objc_release(lVar2);
  if (param_3 != 0) {
    if (lRam00000001136c3390 != -1) {
      func_0x00010002a2fc(0x1136c3390,&PTR___NSConcreteGlobalBlock_11090f418);
    }
    if (((bRam00000001136c3388 & 1) == 0) &&
       ((uVar3 = param_4, func_0x00010bf4b900(), (uVar3 & 1) != 0 ||
        (uVar3 = param_4, func_0x00010bf4b900(), (int)uVar3 != 0)))) {
      func_0x00010c251700(*(undefined8 *)(param_1 + 0x40));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10610cfb4; end: 10610d07b; -[SCCameraPreviewWorkflowNavigationHandler _hasLiveCameraLensInSendConfig:] */

undefined1 FUN_10610cfb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0220(param_3);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10610d07c; end: 10610d07f;  */

void FUN_10610d07c(void)

{
  return;
}



/* Entry: 10610d080; end: 10610d0c3;  */

void FUN_10610d080(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c110980();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c07ec80();
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10610d0c4; end: 10610d0c7;  */

void FUN_10610d0c4(void)

{
  return;
}



/* Entry: 10610d0c8; end: 10610d0ef; -[SCCameraPreviewWorkflowNavigationHandler cameraPreviewWorkflowEventObservable] */

void FUN_10610d0c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10610d0f0; end: 10610d21b; -[SCCameraPreviewWorkflowNavigationHandler .cxx_destruct] */

void FUN_10610d0f0(long param_1)

{
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
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10610d21c; end: 10610d297; -[SCCameraSendFlowUIContainer initWithPresentBlock:] */

undefined1 * FUN_10610d21c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126efc30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x30) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10610d298; end: 10610d2f7; -[SCCameraSendFlowUIContainer dealloc] */

void FUN_10610d298(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be44e40(param_1);
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126efc30;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10610d2f8; end: 10610d37f; -[SCCameraSendFlowUIContainer configPresentPreviewWithCameraViewController:previewTransitionDelegate:completion:] */

void FUN_10610d2f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_storeWeak(param_1 + 0x18,param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  uVar2 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10610d380; end: 10610d3b7; -[SCCameraSendFlowUIContainer isPreviewPresent] */

long FUN_10610d380(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c06d1e0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 10610d3b8; end: 10610d4bb; -[SCCameraSendFlowUIContainer attachUI:] */

void FUN_10610d3b8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) goto LAB_10610d4a8;
  lVar2 = param_1;
  func_0x00010be44e40();
  if ((int)lVar2 == 0) {
LAB_10610d430:
    *(undefined1 *)(param_1 + 0x30) = 1;
    _objc_storeWeak(param_1 + 0x10,param_3);
    lVar2 = param_1 + 0x18;
    _objc_loadWeakRetained();
    if ((lVar2 == 0) || (lVar2 = *(long *)(param_1 + 0x20), _objc_release(), lVar2 == 0))
    goto LAB_10610d4a8;
    lVar3 = *(long *)(param_1 + 8);
    lVar2 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar2);
    (**(code **)(lVar3 + 0x10))
              (lVar3,param_3,lVar2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    _objc_release(lVar2);
  }
  else {
    _objc_loadWeakRetained(param_1 + 0x10);
    _objc_release();
    uVar1 = param_3;
    func_0x00010c06d1e0();
    if ((uVar1 & 1) == 0) {
      func_0x00010c10fd00(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    uVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    _objc_release();
    if (uVar1 != param_3) goto LAB_10610d430;
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    }
  }
  func_0x00010bddefc0(param_1);
LAB_10610d4a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10610d4bc; end: 10610d507; -[SCCameraSendFlowUIContainer detachUI:] */

void FUN_10610d4bc(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x30) = 0;
  _objc_storeWeak(param_1 + 0x10,0);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10610d508; end: 10610d573; -[SCCameraSendFlowUIContainer _isUIPresented:] */

long FUN_10610d508(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_3;
    func_0x00010c06d1e0(param_3);
  }
  else {
    lVar2 = 1;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 10610d574; end: 10610d5af; -[SCCameraSendFlowUIContainer _cleanUp] */

void FUN_10610d574(long param_1)

{
  undefined8 uVar1;
  
  _objc_storeWeak(param_1 + 0x18,0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10610d5b0; end: 10610d5b7; -[SCCameraSendFlowUIContainer isPreviewAttached] */

undefined1 FUN_10610d5b0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 10610d5b8; end: 10610d603; -[SCCameraSendFlowUIContainer .cxx_destruct] */

void FUN_10610d5b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10610d604; end: 10610d663; -[SCPreviewPresenterImpl dealloc] */

void FUN_10610d604(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c27aa60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126efc38;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10610d664; end: 10610d8a3; -[SCPreviewPresenterImpl configureWithImageFuture:imageCaptureConfiguration:managedCapturerState:captionManager:snapReplyFeature:remixFeature:lensPreviewActionFeature:multiCamModeFeature:greenScreenModeFeature:zoomFeature:screenBrightnessHandler:cameraHardwareServicesAPI:captureDeviceManager:nightModeServices:externalContent:] */

void FUN_10610d664(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bde4ee0(param_1,param_2,param_5,param_6,0,param_7,param_8,param_9,param_10,param_11,
                      param_12,param_13,param_14,param_15,1);
  func_0x00010c1c5440(*(undefined8 *)(param_1 + 0x1a8),param_2,0);
  func_0x00010c1a1660(*(undefined8 *)(param_1 + 0x1a8),param_2,param_3);
  _objc_release(param_3);
  func_0x00010c16f620(*(undefined8 *)(param_1 + 0x1a8),param_2,0);
  func_0x00010c215940(*(undefined8 *)(param_1 + 0x1a8),param_2,0);
  func_0x00010c1654e0(*(undefined8 *)(param_1 + 0x1a8),param_2,0);
  lVar1 = param_1;
  func_0x00010be7fd40(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bee0(*(undefined8 *)(param_1 + 0x1a8),param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x1a8);
  func_0x00010c0fdb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000109045b18();
    func_0x000100841590();
    func_0x00010c013de0(puVar2);
    func_0x00010c1dcbe0(*(undefined8 *)(param_1 + 0x1a8),param_2,puVar2);
    _objc_release(puVar2);
  }
  uVar3 = *(ulong *)(param_1 + 0x1a8);
  func_0x00010c073e40();
  if ((uVar3 & 1) == 0) {
    uVar4 = param_4;
    func_0x00010c096b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcbe0(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar4);
    func_0x00010c1bcc00(*(undefined8 *)(param_1 + 0x1b0),param_2,uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x1d0);
    func_0x00010c0972c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x1d0);
    func_0x00010c08fb40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    func_0x00010bde52c0(param_1,param_2,uVar4,uVar5,uVar7);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  if (param_3 != 0) {
    func_0x00010c0a5000(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10610d8a4; end: 10610d987; -[SCPreviewPresenterImpl configureWithImageFuture:] */

void FUN_10610d8a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x1a8);
  _objc_retain(param_3);
  func_0x00010c1c5440(uVar3,param_2,0);
  func_0x00010c1a1660(*(undefined8 *)(param_1 + 0x1a8),param_2,param_3);
  _objc_release(param_3);
  lVar1 = param_1;
  func_0x00010be7fd40(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bee0(*(undefined8 *)(param_1 + 0x1a8),param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x1a8);
  func_0x00010c0fdb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000109045b18();
  func_0x000100841590();
  func_0x00010c013de0(puVar2);
  func_0x00010c1dcbe0(*(undefined8 *)(param_1 + 0x1a8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10610d988; end: 10610da17; -[SCPreviewPresenterImpl configureWithVideoFuture:] */

void FUN_10610d988(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x1a8);
  _objc_retain(param_3);
  func_0x00010c1c5440(uVar3,param_2,1);
  func_0x00010c1e8f00(*(undefined8 *)(param_1 + 0x1a8),param_2,param_3);
  _objc_release(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x1a8);
  func_0x00010bf0f7a0();
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 3;
  }
  lVar2 = param_1;
  func_0x00010be7fd40(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bee0(*(undefined8 *)(param_1 + 0x1a8),param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10610da18; end: 10610de63; -[SCPreviewPresenterImpl configureWithVideoFuture:videoCaptureConfiguration:managedCapturerState:captionManager:snapReplyFeature:remixFeature:lensPreviewActionFeature:multiCamModeFeature:greenScreenModeFeature:zoomFeature:screenBrightnessHandler:cameraHardwareServicesAPI:captureDeviceManager:nightModeServices:externalContent:] */

void FUN_10610da18(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  double param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  long param_14,undefined8 param_15)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 auStack_90 [12];
  uint uStack_84;
  
  _objc_retain(param_4);
  _objc_retain(param_14);
  _objc_retain(param_3);
  func_0x00010bde4ee0(param_1,param_2,param_5,param_6,0,param_7,param_8,param_9,param_10,param_11,
                      param_12,param_13,param_14,param_15,1);
  lVar2 = param_4;
  func_0x00010bf30ec0();
  *(char *)(param_1 + 0x1a0) = (char)lVar2;
  func_0x00010c1c5440(*(undefined8 *)(param_1 + 0x1a8),param_2,1);
  func_0x00010c1e8f00(*(undefined8 *)(param_1 + 0x1a8),param_2,param_3);
  _objc_release(param_3);
  lVar2 = param_14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_14);
  lVar3 = lVar2;
  func_0x00010bef0fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar3 == 0) {
    dVar11 = 0.0;
  }
  else {
    func_0x00010c250f20(auStack_90,lVar3);
    dVar11 = 0.0;
    if ((uStack_84 & 1) != 0) {
      func_0x00010bf95780(auStack_90,lVar3);
      if ((uStack_84 & 1) == 0) {
        _CACurrentMediaTime();
        dVar11 = param_10;
        func_0x00010c250f20(auStack_90,lVar3);
        _CMTimeGetSeconds(auStack_90);
        dVar11 = param_10 - dVar11;
      }
      else {
        func_0x00010bf8b160(auStack_90,lVar3);
        _CMTimeGetSeconds(auStack_90);
        dVar11 = param_10;
      }
    }
  }
  _objc_release(lVar3);
  func_0x00010c197560(dVar11,*(undefined8 *)(param_1 + 0x1a8));
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c1dcbe0(*(undefined8 *)(param_1 + 0x1a8),param_2,0);
  func_0x00010c16f620(*(undefined8 *)(param_1 + 0x1a8),param_2,0);
  func_0x00010c215940(*(undefined8 *)(param_1 + 0x1a8),param_2,0);
  func_0x00010c1654e0(*(undefined8 *)(param_1 + 0x1a8),param_2,0);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x1a8);
  func_0x00010bf0f7a0();
  uVar9 = 2;
  if (iVar1 == 0) {
    uVar9 = 3;
  }
  lVar2 = param_1;
  func_0x00010be7fd40(param_1,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bee0(*(undefined8 *)(param_1 + 0x1a8),param_2,lVar2);
  _objc_release(lVar2);
  uVar4 = *(ulong *)(param_1 + 0x1a8);
  func_0x00010c073e40();
  if ((uVar4 & 1) == 0) {
    lVar2 = param_4;
    func_0x00010c096b40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    lVar5 = lVar2;
    if (lVar3 == 0) {
      lVar5 = *(long *)(param_1 + 0x1d0);
      func_0x00010c091100(lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    func_0x00010c1bcbe0(*(undefined8 *)(param_1 + 0x1a8),param_2,lVar5);
    func_0x00010c1bcc00(*(undefined8 *)(param_1 + 0x1b0),param_2,lVar5);
    lVar2 = param_4;
    func_0x00010bef0b60(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bdd2ae0(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16f3c0(*(undefined8 *)(param_1 + 0x1a8),param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010bef0b60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c277e80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c08fa60();
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar7 != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0cfdc0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_10610de64;
      puStack_a0 = &UNK_110853ea0;
      _objc_retain(param_4);
      lStack_98 = param_4;
      func_0x00010c2849a0(uVar10,param_2,&puStack_b8);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(lStack_98);
    }
    uVar10 = *(undefined8 *)(param_1 + 0x1d0);
    func_0x00010c0972c0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x1d0);
    func_0x00010c08fb40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    func_0x00010bde52c0(param_1,param_2,lVar5,uVar10,uVar9);
    _objc_release(uVar9);
    _objc_release(uVar10);
    _objc_release(lVar5);
  }
  if (param_3 != 0) {
    func_0x00010c0a5000(param_1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10610de64; end: 10610df1b;  */

void FUN_10610de64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bef0b60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c277e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  uVar3 = param_2;
  func_0x00010c0d3a00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c218f80(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10610df1c; end: 10610e1e3; -[SCPreviewPresenterImpl configureWithBatchCaptureConfiguration:managedCapturerState:captionManager:snapReplyFeature:remixFeature:lensPreviewActionFeature:multiCamModeFeature:greenScreenModeFeature:zoomFeature:screenBrightnessHandler:cameraHardwareServicesAPI:captureDeviceManager:nightModeServices:] */

void FUN_10610df1c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  _objc_retain(param_3);
  func_0x00010bde4ee0(param_1,param_2,param_4,param_5,0,param_6,param_7,param_8,param_9,param_10,
                      param_11,param_12,param_13,param_14,1);
  func_0x00010c16f620(*(undefined8 *)(param_1 + 0x1a8),param_2,param_3);
  func_0x00010c1e8f00(*(undefined8 *)(param_1 + 0x1a8),param_2,0);
  func_0x00010c1dcbe0(*(undefined8 *)(param_1 + 0x1a8),param_2,0);
  func_0x00010c215940(*(undefined8 *)(param_1 + 0x1a8),param_2,0);
  lVar1 = param_3;
  func_0x00010bfb1260(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c221700(*(undefined8 *)(param_1 + 0x1a8),param_2,lVar1);
  _objc_release(lVar1);
  func_0x00010c1c5440(*(undefined8 *)(param_1 + 0x1a8),param_2,1);
  func_0x00010c19bee0(*(undefined8 *)(param_1 + 0x1a8),param_2,0);
  lVar1 = param_3;
  func_0x00010c1585e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c095740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bdd2ae0(param_1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f3c0(*(undefined8 *)(param_1 + 0x1a8),param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c095740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c277e80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0cfdc0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10610e1e4;
    puStack_78 = &UNK_110853ea0;
    _objc_retain(param_3);
    lStack_70 = param_3;
    func_0x00010c2849a0(uVar9,param_2,&puStack_90);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(lStack_70);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10610e1e4; end: 10610e2d3;  */

void FUN_10610e1e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c1585e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c095740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c277e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  uVar5 = param_2;
  func_0x00010c0d3a00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c218f80(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 10610e2d4; end: 10610e3ff; -[SCPreviewPresenterImpl prepareBatchCaptureLoggingWithConfiguration:managedCapturerState:captionManager:snapReplyFeature:remixFeature:lensPreviewActionFeature:multiCamModeFeature:greenScreenModeFeature:zoomFeature:screenBrightnessHandler:cameraHardwareServicesAPI:captureDeviceManager:nightModeServices:] */

void FUN_10610e2d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bde4ee0(param_1);
  func_0x00010c16f620(*(undefined8 *)(param_1 + 0x1a8));
  uVar1 = param_3;
  func_0x00010bfb1260(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c221700(*(undefined8 *)(param_1 + 0x1a8));
  _objc_release(uVar1);
  func_0x00010c1c5440(*(undefined8 *)(param_1 + 0x1a8));
  func_0x00010c1e8f00(*(undefined8 *)(param_1 + 0x1a8));
  func_0x00010c1dcbe0(*(undefined8 *)(param_1 + 0x1a8));
  func_0x00010c215940(*(undefined8 *)(param_1 + 0x1a8));
                    /* WARNING: Could not recover jumptable at 0x00010c1654f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1a8),PTR_s_setAddSnapConfiguration__112636f58,0);
  return;
}


