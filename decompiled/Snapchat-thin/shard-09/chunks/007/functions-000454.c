/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ffd620; end: 106ffd623; -[SCCameraViewController isCameraRunning] */

void FUN_106ffd620(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isCameraHardwareRequestHandlerAc_1125f9180);
  return;
}



/* Entry: 106ffd624; end: 106ffd653; -[SCCameraViewController stopCameraSoftly] */

void FUN_106ffd624(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  func_0x00010bf2afa0(PTR_PTR_1126c8130);
                    /* WARNING: Could not recover jumptable at 0x00010c255d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((float)(double)CONCAT44(uVar2,uVar1),param_2,PTR_s_stopCameraWithSoftDelay__112673178);
  return;
}



/* Entry: 106ffd654; end: 106ffd68f; -[SCCameraViewController stopCameraWithSoftDelay:] */

void FUN_106ffd654(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  fVar1 = (float)param_1;
  if (fVar1 < 0.0) {
    func_0x00010bf2afa0(PTR_PTR_1126c8130);
    fVar1 = (float)(double)CONCAT44(uVar2,fVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec2eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (fVar1,param_2,PTR_s__stopCameraSoftlyAndPreemptively_11258e550,0);
  return;
}



/* Entry: 106ffd690; end: 106ffd7e7; -[SCCameraViewController _stopCameraSoftlyAndPreemptivelyFlushPreviewBuffer:softStopDelay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffd690(double param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (SUB84(param_1,0) < 0.0) {
    func_0x00010bf2afa0(PTR_PTR_1126c8130);
    param_1 = (double)(ulong)(uint)(float)param_1;
  }
  lVar1 = param_2;
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c272ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c082b20();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    func_0x00010c1388e0(*(undefined8 *)(param_2 + _DAT_1127624cc),param_3,param_2);
    if (param_4 != 0) {
      uVar4 = *(undefined8 *)(param_2 + _DAT_1127624f4);
      func_0x00010bf29960(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c299c60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1066e0();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    func_0x00010bf2a5a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c272ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d20((double)SUB84(param_1,0));
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 106ffd7e8; end: 106ffd8a7; -[SCCameraViewController stopCameraImmediately] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffd7e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c272ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c082b20();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    func_0x00010c1388e0(*(undefined8 *)(param_1 + _DAT_1127624cc),param_2,param_1);
    func_0x00010bf2a5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c272ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d20(0);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106ffd8a8; end: 106ffd8b7; -[SCCameraViewController prepareCameraViewForDismissal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffd8a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1094b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127624cc),
             PTR_s_prepareForCameraViewControllerDi_11261ff48);
  return;
}



/* Entry: 106ffd8b8; end: 106ffd8c7; -[SCCameraViewController isDismissingAtSending] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffd8b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127624cc),PTR_s_cameraViewIsBeingDismissed_1125a8870);
  return;
}



/* Entry: 106ffd8c8; end: 106ffdd27; -[SCCameraViewController didCancelFromPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffd8c8(ulong param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  uVar2 = param_1;
  func_0x00010c1119e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c232060();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) != 0) {
    return;
  }
  uVar2 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139360();
  _objc_release(uVar2);
  lVar9 = (long)_DAT_1127624bc;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar9);
  func_0x00010c232b40();
  if (iVar1 != 0) {
    func_0x00010c200ee0(*(undefined8 *)(param_1 + lVar9),param_2,0);
    uVar2 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2bf380();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13c860();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar5 = *(long *)(param_1 + lVar9);
    func_0x00010c0b7e80();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar5;
    func_0x00010bf70d80();
    lVar8 = (long)_DAT_1127625d8;
    lVar10 = *(long *)(param_1 + lVar8);
    _objc_release(lVar5);
    if ((lVar9 != lVar10) && (*(ulong *)(param_1 + lVar8) < 2)) {
      uVar2 = param_1;
      func_0x00010bf29620(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c2726a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c272720();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
  uVar2 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c241880();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bfd3ba0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar6 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c241880();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137fe0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a960();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf7f4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c22da60();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar6 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf7f4a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137fe0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_1;
  func_0x00010c075580();
  if ((uVar2 & 1) == 0) {
    func_0x00010c1394e0(param_1);
  }
  uVar2 = param_1;
  func_0x00010be40e00();
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + (long)_DAT_112762578) == 0) goto LAB_106ffdcc4;
    puVar7 = PTR_PTR_1126b9b20;
    func_0x00010bf4fcc0();
    if ((int)puVar7 == 0) goto LAB_106ffdcc4;
  }
  uVar2 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4fca0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3c020();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4fca0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
LAB_106ffdcc4:
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010befe700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7db60();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ffdd28; end: 106ffdd2b; -[SCCameraViewController markCameraHelpTooltipAsCompletedIfNecessary] */

void FUN_106ffdd28(void)

{
  return;
}



/* Entry: 106ffdd2c; end: 106ffde67; -[SCCameraViewController handleDidCancelFromPreviewCompletion] */

void FUN_106ffdd2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c1119e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c232060();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    uVar1 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf7f4a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c22da60();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar4 == 0) {
      return;
    }
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf7f4a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beefa80();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10e4e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ffde68; end: 106ffdedf; -[SCCameraViewController didSendSnaps] */

void FUN_106ffde68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1380a0();
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010befe700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7db60();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ffdee0; end: 106ffdfb3; -[SCCameraViewController didPostStories] */

void FUN_106ffdee0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c1119e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c252440(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1920(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1380a0(param_1);
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010befe700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7db60();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ffdfb4; end: 106ffe01f; -[SCCameraViewController didSaveSnap] */

void FUN_106ffdfb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010befe700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7db60();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ffe020; end: 106ffe423; -[SCCameraViewController resetAfterSendingSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffe020(ulong param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  
  uVar2 = param_1;
  func_0x00010c075580();
  if ((int)uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010bf29c20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c093ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c096e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c138f00();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  lVar7 = (long)_DAT_1127624bc;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c232b40();
  if (iVar1 != 0) {
    func_0x00010c200ee0(*(undefined8 *)(param_1 + lVar7),param_2,0);
    func_0x00010c1388e0(*(undefined8 *)(param_1 + (long)_DAT_1127624cc),param_2,param_1);
  }
  uVar2 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139360();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c241880();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf7f1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c249ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c242aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf7f4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c075580();
  if ((uVar2 & 1) == 0) {
    func_0x00010c1394e0(param_1);
  }
  if (*(long *)(param_1 + (long)_DAT_112762578) != 0) {
    puVar6 = PTR_PTR_1126b9b20;
    func_0x00010bf4fcc0();
    if ((int)puVar6 != 0) {
      uVar2 = param_1;
      func_0x00010bf29620(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf4fca0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3c020();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      func_0x00010bf29620(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bf4fca0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c137fe0();
      _objc_release(uVar3);
      _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 106ffe424; end: 106ffe453;  */

void FUN_106ffe424(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1afc80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ffe454; end: 106ffe60b; -[SCCameraViewController startObservingCameraPermission] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffe454(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar9 = (long)_DAT_1127625e0;
  if (*(long *)(param_1 + lVar9) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar1;
    _objc_release(uVar8);
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127624f4);
    func_0x00010bf10e60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010bf2a240();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0e0ea0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    uVar7 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar8);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 106ffe60c; end: 106ffe637;  */

void FUN_106ffe60c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c125100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ffe638; end: 106ffe9eb; -[SCCameraViewController startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffe638(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
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
  _objc_initWeak(auStack_80,param_1);
  lVar6 = (long)_DAT_1127625e8;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c2528c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106ffe9ec;
    puStack_90 = &UNK_11090d240;
    _objc_copyWeak(auStack_88,auStack_80);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf70e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_106ffead8;
    puStack_b8 = &UNK_11086e3f0;
    _objc_copyWeak(auStack_b0,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0c42e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_106ffebc4;
    puStack_e0 = &UNK_11084e400;
    _objc_copyWeak(auStack_d8,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_100,auStack_80);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar5);
    _objc_release(uVar5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_88);
  }
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ffe9ec; end: 106ffea8f;  */

void FUN_106ffe9ec(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e39e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106ffea90; end: 106ffead7;  */

void FUN_106ffea90(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73680();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ffead8; end: 106ffeb7b;  */

void FUN_106ffead8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e39a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106ffeb7c; end: 106ffebc3;  */

void FUN_106ffeb7c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73560();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ffebc4; end: 106ffed0f;  */

void FUN_106ffebc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  pcStack_68 = FUN_106ffed10;
  puStack_60 = &UNK_11090b530;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  func_0x00010c0e3800(param_2);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x106ffed3c;
  puStack_88 = &UNK_11090b530;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0e3840(param_2);
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  func_0x00010c0e7be0(param_2);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 106ffed10; end: 106ffed67;  */

void FUN_106ffed10(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf729e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ffed68; end: 106ffedcf;  */

void FUN_106ffed68(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2a5b60();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ffedd0; end: 106ffee1f;  */

void FUN_106ffedd0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf73680();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ffee20; end: 106ffee77; -[SCCameraViewController stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffee20(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127625ec;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_1127625e8;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ffee78; end: 106ffeeef; -[SCCameraViewController didChangeRingFlashState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffee78(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  func_0x00010c1410c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c141120();
  _objc_release(param_3);
  if ((uVar1 & 0xfffffffffffffffe) == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010c12e0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___UIViewController_1126af898,PTR_s_removeRoundedCorners_112629258);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf58930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127624cc),
             PTR_s_createRoundedCornersIfNeededFrom_1125b3bf0,param_1);
  return;
}



/* Entry: 106ffeef0; end: 106ffeef3; -[SCCameraViewController willCapturePhoto:sampleMetadata:] */

void FUN_106ffeef0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7d7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentPreviewForImage_11257cf88);
  return;
}



/* Entry: 106ffeef4; end: 106fff0b7; -[SCCameraViewController didBeginRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffeef4(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  
  lVar2 = param_2;
  func_0x00010bfeb400();
  if ((int)lVar2 != 0) {
    func_0x00010be87b80(param_2);
    uVar1 = *(undefined8 *)(param_2 + _DAT_1127624bc);
    func_0x00010bf2a1a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf2b240();
    _objc_retainAutoreleasedReturnValue();
    dVar9 = param_1;
    func_0x00010c2502e0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
    lVar8 = (long)_DAT_1127625d4;
    lVar2 = *(long *)(param_2 + lVar8);
    if (lVar2 != 0) {
      _objc_retainBlock();
      uVar3 = *(undefined8 *)(param_2 + lVar8);
      *(undefined8 *)(param_2 + lVar8) = 0;
      _objc_release(uVar3);
      lVar8 = param_2;
      func_0x00010bf2a5a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar8;
      func_0x00010bf291c0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c123da0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar8);
      func_0x00010c123e40(lVar7);
      dVar10 = param_1 * dVar9;
      if (param_1 <= 0.0) {
        dVar10 = dVar9;
      }
      (**(code **)(lVar2 + 0x10))(dVar10,lVar2);
      _objc_release(lVar7);
      _objc_release(lVar2);
    }
    func_0x00010bf29620(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c242aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137fe0();
    _objc_release(lVar8);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 106fff0b8; end: 106fff16b; -[SCCameraViewController _didCancelRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fff0b8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127625d4);
  *(undefined8 *)(param_1 + _DAT_1127625d4) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127624bc);
  func_0x00010bf2a1a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c255c40();
  _objc_release(uVar1);
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfd3560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c177c00();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fff16c; end: 106fff39b; -[SCCameraViewController _presentPreviewForImage] */

void FUN_106fff16c(ulong param_1,undefined8 param_2)

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
  
  uVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c06b680();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf30b20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfe8800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar4 != 0) && (uVar1 = param_1, func_0x00010beb3100(), (uVar1 & 1) == 0)) {
      uVar1 = param_1;
      func_0x00010c1119e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bf29620(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf30b20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfe8800();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_1;
      func_0x00010c252440(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bfe6f80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c252440(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_1;
      func_0x00010c0b7e80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10dae0(uVar1,param_2,uVar6,1,uVar8,uVar9);
      _objc_release(uVar9);
      _objc_release(param_1);
      _objc_release(uVar8);
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
  }
  return;
}



/* Entry: 106fff39c; end: 106fff3d3; -[SCCameraViewController handleLensActivation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fff39c(long param_1,undefined8 param_2)

{
  func_0x00010c2726e0(param_1,param_2,1,0);
  _CACurrentMediaTime();
                    /* WARNING: Could not recover jumptable at 0x00010c1b8ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127624bc),
             PTR_s_setLastSuccessfulLensActivationT_11264bcd0);
  return;
}



/* Entry: 106fff3d4; end: 106fff4d7; -[SCCameraViewController activateLensBlockAfterUnlockWithActivationLens:lensLaunchData:activationSource:] */

void FUN_106fff3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_90;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106fff4d8;
  puStack_78 = &UNK_110871ae8;
  uStack_70 = param_4;
  uStack_68 = param_1;
  uStack_60 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_5;
  _objc_retainBlock(&puStack_90);
  puVar2 = (undefined1 *)ppuVar1;
  _objc_retainBlock();
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_70);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106fff4d8; end: 106fff677;  */

void FUN_106fff4d8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfd83c0();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c08b6e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08bbc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf64c80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c094540(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c228dc0(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  func_0x00010c2005c0(*(undefined8 *)(param_1 + 0x30));
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c090c60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = uVar2;
  _objc_retain(uVar2);
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  return;
}



/* Entry: 106fff678; end: 106fff81b;  */

void FUN_106fff678(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126b1bf8;
  if (((param_3 == 0) && (param_2 != 0)) && (lVar1 != 0)) {
    func_0x00010bef0200(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf32440(puVar3);
    puVar3 = PTR_PTR_1126b00f8;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c094540(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c158d00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b0240;
    _objc_alloc(PTR_PTR_1126b0240);
    func_0x00010bff0c60();
    lVar5 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,param_1 + 0x28);
    func_0x00010bef0080(lVar5);
    _objc_release(lVar5);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106fff81c; end: 106fff84f;  */

void FUN_106fff81c(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfd15e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106fff850; end: 106fff883; -[SCCameraViewController tryToActivateLensAfterUnlockWithActivationLens:lensLaunchData:activationSource:] */

void FUN_106fff850(long param_1)

{
  func_0x00010beefd20();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fff884; end: 106fffb9f; -[SCCameraViewController onMusicSelectionStartedInDirectorMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fff884(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_3 == 0) {
    func_0x00010be87680(param_1);
    lVar7 = (long)_DAT_11276259c;
    uVar2 = param_1 + lVar7;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      lVar4 = param_1 + lVar7;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c272680();
      _objc_release(lVar4);
    }
    func_0x00010c139ca0(*(undefined8 *)(param_1 + _DAT_1127624cc));
    func_0x00010c2726e0(param_1);
    uVar2 = param_1 + lVar7;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      lVar7 = param_1 + lVar7;
      _objc_loadWeakRetained(lVar7);
      func_0x00010c272680();
      _objc_release(lVar7);
    }
    lVar7 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar7;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c06b680();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar7);
    if ((int)lVar6 != 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_1127624bc);
      func_0x00010bf2a1a0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1762e0(0x3fb999999999999a);
      _objc_release(uVar1);
    }
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bf2b3c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar7;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c166ea0();
    _objc_release(lVar4);
    _objc_release(lVar7);
  }
  else {
    lVar7 = (long)_DAT_11276259c;
    uVar2 = param_1 + lVar7;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      lVar7 = param_1 + lVar7;
      _objc_loadWeakRetained(lVar7);
      func_0x00010c272680();
      _objc_release(lVar7);
    }
    func_0x00010c1cb900(0x3fb999999999999a,param_1);
    lVar8 = (long)_DAT_1127624bc;
    uVar1 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bf2a1a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1611a0(0x3fb999999999999a);
    _objc_release(uVar1);
    lVar7 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar7;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c06b680();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar7);
    if ((int)lVar6 == 0) {
      return;
    }
    param_1 = *(long *)(param_1 + lVar8);
    func_0x00010bf2a1a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1762e0(0x3fb999999999999a);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fffba0; end: 106fffbcb; -[SCCameraViewController navigationController:animationControllerForOperation:fromViewController:toViewController:] */

void FUN_106fffba0(void)

{
  long in_x3;
  
  if (in_x3 == 1) {
    _objc_alloc_init(PTR_PTR_1126d0d58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fffbcc; end: 106fffbcf; -[SCCameraViewController featureZoomingIsInitiatedRecording:] */

void FUN_106fffbcc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c064e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initiatedRecording_1125f6db0);
  return;
}



/* Entry: 106fffbd0; end: 106fffc2b; -[SCCameraViewController cameraFlipsWhileRecording] */

undefined8 FUN_106fffbd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1119e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf29820();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106fffc2c; end: 106fffc87; -[SCCameraViewController _ensureHapticsAllowedDuringRecording] */

void FUN_106fffc2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___AVAudioSession_1126b6de8;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf01100();
  if (((ulong)puVar2 & 1) == 0) {
    uStack_28 = 0;
    func_0x00010c1670a0(puVar1,param_2,1,&uStack_28);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 106fffc88; end: 106fffcc7; -[SCCameraViewController _shouldDisablePreviewAfterCapture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106fffc88(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + _DAT_112762524;
  _objc_loadWeakRetained(uVar1);
  uVar2 = uVar1;
  func_0x00010bfa3580();
  _objc_release(uVar1);
  return uVar2 >> 8 & 1;
}



/* Entry: 106fffcc8; end: 106fffe7f; -[SCCameraViewController _logCameraFlipDuringCapture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fffcc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010bf88580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dee40();
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar1);
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dc7858;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  uStack_60 = 0;
  puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar6,0,&uStack_60);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  func_0x00010c008340();
  func_0x00010c1119e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176640();
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = (long)_DAT_1127624bc;
  func_0x00010c200ee0(*(undefined8 *)(puVar6 + lVar9),param_2,1);
  lVar7 = *(long *)(puVar6 + lVar9);
  func_0x00010c0b7e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    uVar8 = *(undefined8 *)(puVar6 + lVar9);
    func_0x00010c0b7e80();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar8;
    func_0x00010bf70d80();
    *(undefined8 *)(puVar6 + _DAT_1127625d8) = uVar1;
    _objc_release(uVar8);
  }
  func_0x00010bf29620(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar6;
  func_0x00010c2bf380();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123c20();
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 106fffe80; end: 106ffff4b; -[SCCameraViewController _recordCurrentZoomStateForReset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fffe80(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127624bc;
  func_0x00010c200ee0(*(undefined8 *)(param_1 + lVar4),param_2,1);
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c0b7e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c0b7e80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf70d80();
    *(undefined8 *)(param_1 + _DAT_1127625d8) = uVar3;
    _objc_release(uVar2);
  }
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c2bf380();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123c20();
  _objc_release(lVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ffff4c; end: 107000563; -[SCCameraViewController activeCameraModes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ffff4c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c270700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0da400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c098a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c249ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf7f1c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfce220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c24d040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c15b000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1295e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf3e100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfdee60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  puVar5 = puVar2;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar18 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar2);
      }
      puVar12 = PTR_DAT_1126a58f8;
      uVar17 = *(undefined8 *)((long)puVar18 * 8);
      _objc_retain(uVar17);
      uVar6 = uVar17;
      func_0x00010010fab4(uVar17,puVar12);
      uVar11 = uVar17;
      if ((int)uVar6 == 0) {
        uVar11 = 0;
      }
      _objc_retain(uVar11);
      _objc_release(uVar17);
      uVar6 = uVar11;
      func_0x00010c06dea0();
      if ((int)uVar6 != 0) {
        uVar6 = uVar11;
        func_0x00010bf29fa0();
        uVar1 = (int)uVar6 - 1;
        if (uVar1 < 0x18) {
          uVar6 = *(undefined8 *)(&UNK_10de1e558 + (ulong)uVar1 * 8);
        }
        else {
          uVar6 = 3;
        }
        func_0x00010baee46c(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar16);
        _objc_release(uVar6);
      }
      _objc_release(uVar11);
      puVar18 = puVar18 + 1;
    } while (puVar5 != puVar18);
    puVar5 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  lVar7 = *(long *)(param_1 + _DAT_1127624f4);
  func_0x00010bf299a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf5e320();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010c24d060();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf60220();
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  uVar10 = 0x11;
  func_0x00010baee46c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar16;
  uVar14 = uVar10;
  func_0x00010bf4b900();
  _objc_release(uVar10);
  if ((((ulong)puVar5 & 1) == 0) && (lVar9 != 0)) {
    uVar10 = 0x11;
    func_0x00010baee46c();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar10;
    func_0x00010befa120(puVar16);
    _objc_release(uVar10);
  }
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(uVar14);
  uVar10 = uVar14;
  func_0x00010bf529e0();
  if (uVar10 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = 7;
    func_0x00010baee46c(7);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar14;
    func_0x00010bf4b900();
    _objc_release(uVar11);
    if ((int)uVar10 != 0) {
      puVar16 = puVar2;
      func_0x00010bf29620(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar16;
      func_0x00010c098a80();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar18;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010bf6f780();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = 7;
      func_0x00010baee46c(7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(uVar11);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar18);
      _objc_release(puVar16);
    }
    uVar11 = 3;
    func_0x00010baee46c(3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar14;
    func_0x00010bf4b900();
    _objc_release(uVar11);
    if ((int)uVar10 != 0) {
      puVar16 = puVar2;
      func_0x00010bf29620(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar16;
      func_0x00010bf16700();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar18;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010bf6f780();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = 3;
      func_0x00010baee46c(3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(uVar11);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar18);
      _objc_release(puVar16);
    }
    uVar6 = 1;
    uVar11 = 1;
    func_0x00010baee46c(1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar14;
    func_0x00010bf4b900();
    _objc_release(uVar11);
    if ((uVar10 & 1) == 0) {
      uVar6 = 8;
      uVar11 = 8;
      func_0x00010baee46c(8);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar14;
      func_0x00010bf4b900();
      _objc_release(uVar11);
      if ((int)uVar10 != 0) goto LAB_107000798;
    }
    else {
LAB_107000798:
      puVar16 = puVar2;
      func_0x00010bf29620(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar16;
      func_0x00010c270700();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar18;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010bf6f780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010baee46c(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(uVar6);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar18);
      _objc_release(puVar16);
    }
    uVar11 = 0xd;
    func_0x00010baee46c(0xd);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar14;
    func_0x00010bf4b900();
    _objc_release(uVar11);
    if ((int)uVar10 != 0) {
      puVar16 = puVar2;
      func_0x00010bf29620(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar16;
      func_0x00010bfce220();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar18;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010bf6f780();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = 0xd;
      func_0x00010baee46c(0xd);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(uVar11);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar18);
      _objc_release(puVar16);
    }
    uVar11 = 0x13;
    func_0x00010baee46c(0x13);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar14;
    func_0x00010bf4b900();
    _objc_release(uVar11);
    if ((int)uVar10 != 0) {
      puVar16 = puVar2;
      func_0x00010bf29620(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar16;
      func_0x00010c15b000();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar18;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010bf6f780();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = 0x13;
      func_0x00010baee46c(0x13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(uVar11);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar18);
      _objc_release(puVar16);
    }
    uVar11 = 0x15;
    func_0x00010baee46c(0x15);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar14;
    func_0x00010bf4b900();
    _objc_release(uVar11);
    if ((int)uVar10 != 0) {
      puVar16 = puVar2;
      func_0x00010bf29620(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar16;
      func_0x00010bf3e100();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar18;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010bf6f780();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = 0x15;
      func_0x00010baee46c(0x15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(uVar11);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar18);
      _objc_release(puVar16);
    }
    uVar11 = 0x12;
    func_0x00010baee46c(0x12);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar14;
    func_0x00010bf4b900();
    _objc_release(uVar11);
    if ((int)uVar10 != 0) {
      puVar16 = puVar2;
      func_0x00010bf29620(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar16;
      func_0x00010c1295e0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar18;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010bf6f780();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = 0x12;
      func_0x00010baee46c(0x12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(uVar11);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar18);
      _objc_release(puVar16);
    }
    uVar11 = 0xb;
    func_0x00010baee46c(0xb);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar14;
    func_0x00010bf4b900();
    _objc_release(uVar11);
    if ((int)uVar10 != 0) {
      puVar16 = puVar2;
      func_0x00010bf29620(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar16;
      func_0x00010bf7f1c0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar18;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010bf6f780();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = 0xb;
      func_0x00010baee46c(0xb);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(uVar11);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar18);
      _objc_release(puVar16);
    }
    uVar11 = 9;
    func_0x00010baee46c(9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar14;
    func_0x00010bf4b900();
    _objc_release(uVar11);
    if ((int)uVar10 != 0) {
      func_0x00010bf29620(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar2;
      func_0x00010c0da400();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar16;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar18;
      func_0x00010bf6f780();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = 9;
      func_0x00010baee46c(9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(uVar11);
      _objc_release(puVar12);
      _objc_release(puVar18);
      _objc_release(puVar16);
      _objc_release(puVar2);
    }
    uVar11 = 0x18;
    func_0x00010baee46c(0x18);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar14;
    func_0x00010bf4b900();
    _objc_release(uVar11);
    if ((int)uVar10 != 0) {
      uVar11 = 0x18;
      func_0x00010baee46c(0x18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(uVar11);
    }
    puVar16 = PTR_PTR_1126afff8;
    func_0x00010bf6f7c0(PTR_PTR_1126afff8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(uVar14);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 107000564; end: 107000d5b; -[SCCameraViewController _detailedCameraModesFromActiveCameraModes:] */

void FUN_107000564(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar1 == 0) {
    puVar7 = (undefined *)0x0;
    goto LAB_107000d38;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 7;
  func_0x00010baee46c(7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4b900(param_3,param_2,uVar3);
  _objc_release(uVar3);
  if ((int)uVar1 != 0) {
    uVar3 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010c098a80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf6f780();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 7;
    func_0x00010baee46c(7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,uVar6,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar8);
    _objc_release(uVar3);
  }
  uVar3 = 3;
  func_0x00010baee46c(3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4b900(param_3,param_2,uVar3);
  _objc_release(uVar3);
  if ((int)uVar1 != 0) {
    uVar3 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf6f780();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 3;
    func_0x00010baee46c(3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,uVar6,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar8);
    _objc_release(uVar3);
  }
  uVar8 = 1;
  uVar3 = 1;
  func_0x00010baee46c(1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4b900(param_3,param_2,uVar3);
  _objc_release(uVar3);
  if ((uVar1 & 1) == 0) {
    uVar8 = 8;
    uVar3 = 8;
    func_0x00010baee46c(8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bf4b900(param_3,param_2,uVar3);
    _objc_release(uVar3);
    if ((int)uVar1 != 0) goto LAB_107000798;
  }
  else {
LAB_107000798:
    uVar3 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c270700();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bf6f780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010baee46c(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,uVar5,uVar8);
    _objc_release(uVar8);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  uVar3 = 0xd;
  func_0x00010baee46c(0xd);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4b900(param_3,param_2,uVar3);
  _objc_release(uVar3);
  if ((int)uVar1 != 0) {
    uVar3 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bfce220();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf6f780();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0xd;
    func_0x00010baee46c(0xd);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,uVar6,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar8);
    _objc_release(uVar3);
  }
  uVar3 = 0x13;
  func_0x00010baee46c(0x13);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4b900(param_3,param_2,uVar3);
  _objc_release(uVar3);
  if ((int)uVar1 != 0) {
    uVar3 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010c15b000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf6f780();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x13;
    func_0x00010baee46c(0x13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,uVar6,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar8);
    _objc_release(uVar3);
  }
  uVar3 = 0x15;
  func_0x00010baee46c(0x15);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4b900(param_3,param_2,uVar3);
  _objc_release(uVar3);
  if ((int)uVar1 != 0) {
    uVar3 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bf3e100();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf6f780();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x15;
    func_0x00010baee46c(0x15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,uVar6,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar8);
    _objc_release(uVar3);
  }
  uVar3 = 0x12;
  func_0x00010baee46c(0x12);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4b900(param_3,param_2,uVar3);
  _objc_release(uVar3);
  if ((int)uVar1 != 0) {
    uVar3 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010c1295e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf6f780();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x12;
    func_0x00010baee46c(0x12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,uVar6,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar8);
    _objc_release(uVar3);
  }
  uVar3 = 0xb;
  func_0x00010baee46c(0xb);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4b900(param_3,param_2,uVar3);
  _objc_release(uVar3);
  if ((int)uVar1 != 0) {
    uVar3 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf6f780();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0xb;
    func_0x00010baee46c(0xb);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,uVar6,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar8);
    _objc_release(uVar3);
  }
  uVar3 = 9;
  func_0x00010baee46c(9);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4b900(param_3,param_2,uVar3);
  _objc_release(uVar3);
  if ((int)uVar1 != 0) {
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c0da400();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010bf6f780();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 9;
    func_0x00010baee46c(9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,uVar4,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar8);
    _objc_release(uVar3);
    _objc_release(param_1);
  }
  uVar3 = 0x18;
  func_0x00010baee46c(0x18);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4b900(param_3,param_2,uVar3);
  _objc_release(uVar3);
  if ((int)uVar1 != 0) {
    uVar3 = 0x18;
    func_0x00010baee46c(0x18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,PTR____NSArray0__struct_11034ab48,uVar3);
    _objc_release(uVar3);
  }
  puVar7 = PTR_PTR_1126afff8;
  func_0x00010bf6f7c0(PTR_PTR_1126afff8,param_2,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
LAB_107000d38:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107000d5c; end: 107000e6b; -[SCCameraViewController _activeFlashMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107000d5c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127624bc;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c0b7e80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c1410c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c141120();
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (lVar2 == 2) {
    lVar3 = 2;
  }
  else {
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x00010c0b7e80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c1410c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c141120();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar2 == 1) {
      lVar3 = 1;
    }
    else {
      lVar1 = *(long *)(param_1 + lVar4);
      func_0x00010c0b7e80();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c1410c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c141120();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 3) {
        lVar3 = 0;
      }
    }
  }
  return lVar3;
}



/* Entry: 107000e6c; end: 107000e7b; -[SCCameraViewController _audioSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107000e6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127625f0),PTR_s_target_112678178);
  return;
}



/* Entry: 107000e7c; end: 107000f73;  */

void FUN_107000e7c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_107000f4c;
  lVar1 = param_2;
  func_0x00010c067fc0();
  lVar2 = param_1;
  if (lVar1 < 2) {
    if (lVar1 == 0) goto LAB_107000f10;
    if (lVar1 != 1) goto LAB_107000f4c;
LAB_107000ee4:
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar1 == 6) {
      func_0x00010bde8a60(param_1);
      goto LAB_107000f4c;
    }
    if (lVar1 == 3) goto LAB_107000ee4;
    if (lVar1 != 2) goto LAB_107000f4c;
LAB_107000f10:
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1b0260();
  _objc_release(lVar1);
  _objc_release(lVar2);
LAB_107000f4c:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107000f74; end: 10700109b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107000f74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = param_2;
    func_0x00010c1582e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar2 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 10700109c; end: 1070010eb;  */

void FUN_10700109c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be27820(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070010ec; end: 10700114b; -[SCCameraViewController _handleContinuousCaptureSegmentEvent:] */

void FUN_1070010ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10700114c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010c0bd1c0(param_3,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_110988670);
  return;
}



/* Entry: 10700114c; end: 1070015fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700114c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  long lVar36;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1119e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = (long)_DAT_112762568;
  lVar3 = *(long *)(param_1 + 0x20) + lVar35;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf4fd80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar6;
  func_0x00010c0b7e80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
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
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c242c40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c129540();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c096000();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010c0d1c40();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010bfce220();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar26;
  func_0x00010c2bf380();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar27;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar29;
  func_0x00010c150e80();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar30;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = (long)_DAT_1127624f4;
  uVar32 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar36);
  func_0x00010bf299a0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar36);
  func_0x00010bf30c00();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = *(long *)(param_1 + 0x20) + (long)_DAT_112762528;
  _objc_loadWeakRetained();
  func_0x00010c10a060(uVar2,param_2,lVar5,uVar34,uVar10,uVar13,uVar16,uVar19,uVar22,uVar25,uVar28,
                      uVar31,uVar32,uVar33,lVar36);
  _objc_release(lVar36);
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
  _objc_release(uVar34);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar34 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1119e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar34;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = *(long *)(param_1 + 0x20) + lVar35;
  _objc_loadWeakRetained();
  lVar4 = lVar35;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar4;
  func_0x00010bf4fd80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar36;
  func_0x00010c2702a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5020(uVar2,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar36);
  _objc_release(lVar4);
  _objc_release(lVar35);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar34);
  return;
}



/* Entry: 1070015fc; end: 107001603;  */

void FUN_1070015fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a50b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_logDirectSnapDiscardIfNecessary_112606e38);
  return;
}



/* Entry: 107001604; end: 107001767; -[SCCameraViewController _continuousCaptureDidRequestPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107001604(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + (long)_DAT_112762578) != 0) {
    puVar1 = PTR_PTR_1126b9b20;
    func_0x00010bf4fcc0();
    if ((int)puVar1 != 0) {
      uVar2 = param_1;
      func_0x00010bf52280(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2e060();
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = param_1;
      func_0x00010beb3100();
      if ((uVar2 & 1) == 0) {
        uVar2 = param_1;
        func_0x00010c1119e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_1;
        func_0x00010c252440(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0b7e80();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_1;
        func_0x00010bef0520(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c10da80(uVar2);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
      uVar2 = param_1;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0b7e80();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0982a0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((int)uVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c27d4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_turnLensesOff_11267cf58);
        return;
      }
    }
  }
  return;
}



/* Entry: 107001768; end: 1070017c7; -[SCCameraViewController idleTimerManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107001768(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127625f4;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c1838;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1070017c8; end: 1070017ff; -[SCCameraViewController _setScreenAutoLockDisabledIfNeeded:] */

void FUN_1070017c8(undefined8 param_1)

{
  func_0x00010bfe6320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107001800; end: 107001803; -[SCCameraViewController shouldDisableShakeToReportOnCurrentPage] */

void FUN_107001800(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c123d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_recording_112626970);
  return;
}



/* Entry: 107001804; end: 107001817; -[SCCameraViewController willStartCensoringScreenshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107001804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c239430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127624cc),PTR_s_showPrivacyView__11266bf30,param_1);
  return;
}



/* Entry: 107001818; end: 10700182b; -[SCCameraViewController willEndCensoringScreenshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107001818(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe2670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127624cc),PTR_s_hidePrivacyView__1125d6358,param_1);
  return;
}



/* Entry: 10700182c; end: 1070019cf; -[SCCameraViewController tryToActivateLensFromPushNotification:] */

void FUN_10700182c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126b6ae8;
  func_0x00010c22ba80(PTR_PTR_1126b6ae8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae960;
  puVar2 = PTR_PTR_1126c82e8;
  func_0x00010beefd80(PTR_PTR_1126c82e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf28e80(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae970;
  func_0x00010c292920(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  func_0x00010c2a1620(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1070019d0; end: 107001a63;  */

void FUN_1070019d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0965c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2fe0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107001a64; end: 107001aab; -[SCCameraViewController isLensActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107001a64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127624bc);
  func_0x00010c0b7e80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0982a0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107001aac; end: 107001ab3; -[SCCameraViewController turnLensesOff] */

void FUN_107001aac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27d510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_turnLensesOffOnDisappear__11267cf68,0);
  return;
}



/* Entry: 107001ab4; end: 107001aff; -[SCCameraViewController turnLensesOffOnDisappear:] */

void FUN_107001ab4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0926e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27d500();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c27d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_turnCameraModesOff_11267cf48);
  return;
}



/* Entry: 107001b00; end: 107001c5b; -[SCCameraViewController turnCameraModesOff] */

void FUN_107001b00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d1c40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf11620();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfce220();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf11620();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15b000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf11620();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1295e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf11620();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107001c5c; end: 107001c8b; -[SCCameraViewController clearAllEffects] */

void FUN_107001c5c(undefined8 param_1)

{
  func_0x00010c0926e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107001c8c; end: 107001d2b; -[SCCameraViewController presentPreviewWithGeneratedVideoURL:] */

void FUN_107001c8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010be7d9a0();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c0926e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf099a0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      uVar1 = param_1;
      func_0x00010c0926e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3ade0();
      _objc_release(uVar1);
      func_0x00010c0926e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27d4c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 107001d2c; end: 1070020c7; -[SCCameraViewController _presentPreviewWithGeneratedVideoFile:] */

undefined8
FUN_107001d2c(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  double dVar11;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  func_0x00010c299e20(PTR_PTR_1126b0010,param_4,param_5);
  dVar11 = param_1;
  func_0x00010c29b240(PTR_PTR_1126b0010,param_4,param_5);
  uVar9 = 0;
  if ((0.0 < param_1) && (param_1 <= 300.0)) {
    bVar1 = false;
    if ((dVar11 == *(double *)PTR__CGSizeZero_110347620) &&
       (bVar1 = false, !NAN(param_2) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar1 = param_2 == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if (bVar1) {
      uVar9 = 0;
    }
    else {
      puVar2 = PTR_PTR_1126b5fb0;
      _objc_alloc(PTR_PTR_1126b5fb0);
      func_0x00010c0613a0(param_1);
      lVar3 = param_3;
      func_0x00010c1119e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16c080();
      _objc_release(lVar4);
      _objc_release(lVar3);
      lVar3 = param_3;
      func_0x00010c1119e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c5240(dVar11,param_2);
      _objc_release(lVar4);
      _objc_release(lVar3);
      lVar3 = param_3;
      func_0x00010c1119e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c40c0(dVar11 / param_2);
      _objc_release(lVar4);
      _objc_release(lVar3);
      lVar3 = param_3;
      func_0x00010bf2af80();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0cfdc0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      lVar3 = param_3;
      func_0x00010bdc5260();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c074540();
      _objc_release(lVar3);
      puVar10 = (undefined *)0x0;
      if ((int)lVar4 != 0) {
        puVar7 = PTR_PTR_1126affc8;
        func_0x00010c0cb140();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR_PTR_1126c8210;
        func_0x00010c0cb140(PTR_PTR_1126c8210);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c4ce0(puVar7,param_4,puVar10);
        _objc_release(puVar10);
        puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_80 = puVar7;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_80,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
      }
      puVar7 = PTR_PTR_1126affe0;
      if (lVar6 != 0) {
        puVar8 = PTR_PTR_1126affc0;
        func_0x00010c29a0a0(PTR_PTR_1126affc0,param_4,param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef70e0(puVar7,param_4,lVar6,puVar8,0,0,0,puVar10,0);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar8);
      }
      func_0x00010c1119e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126ae558;
      func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_4,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10db60(param_3,param_4,puVar7,0,0);
      _objc_release(puVar7);
      _objc_release(param_3);
      _objc_release(puVar10);
      _objc_release(lVar6);
      _objc_release(puVar2);
      uVar9 = 1;
    }
  }
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return uVar9;
  }
  ___stack_chk_fail();
  return param_5;
}



/* Entry: 1070020c8; end: 1070020cb; -[SCCameraViewController onDetectCameraViewVisible:] */

void FUN_1070020c8(void)

{
  return;
}



/* Entry: 1070020cc; end: 107002153; -[SCCameraViewController didTapMicrophoneNotification] */

void FUN_1070020cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c123d40();
  if ((int)uVar1 != 0) {
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf30b20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256760();
    _objc_release(uVar2);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107002154; end: 107002213; -[SCCameraViewController featureToggleCamera:willToggleToDevicePosition:] */

void FUN_107002154(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c064e80();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf29820();
    func_0x00010c1766a0(lVar2,param_2,lVar3 + 1);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c2726c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18ec60();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107002214; end: 107002273; -[SCCameraViewController featureToggleCamera:didToggleToDevicePosition:] */

void FUN_107002214(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107002274;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100c749e0(0x3dcccccd,"APPSTORE",&puStack_38);
  return;
}



/* Entry: 107002274; end: 1070022e3;  */

void FUN_107002274(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf29620(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2726c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18ec60();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070022e4; end: 1070022e7; -[SCCameraViewController featureToggleCameraIsRecording:] */

void FUN_1070022e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c064e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initiatedRecording_1125f6db0);
  return;
}



/* Entry: 1070022e8; end: 1070022eb; -[SCCameraViewController featureToggleCameraIsTakingPicture:] */

void FUN_1070022e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2687f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_takingPicture_112677c20);
  return;
}



/* Entry: 1070022ec; end: 107002343; -[SCCameraViewController exposeCaptureServiceScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070022ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11276250c;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107002344; end: 10700237f; -[SCCameraViewController removeCaptureServiceScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107002344(long param_1)

{
  param_1 = param_1 + _DAT_11276250c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107002380; end: 107002567; -[SCCameraViewController captureComponent:willCompleteWithStillImageData:discardRelatedData:captureConfiguration:] */

void FUN_107002380(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010beb3100();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178f00();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bfe6ac0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dcac0(uVar2,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar3 = param_4;
    func_0x00010bfe6ac0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bfe6f80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0b7e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10dae0(uVar1,param_2,puVar4,0,uVar5,uVar7);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
  func_0x00010bfafbe0(param_1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107002568; end: 10700260f; -[SCCameraViewController captureComponent:didCompleteWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107002568(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x00010c139ca0(*(undefined8 *)(param_1 + _DAT_1127624cc),param_2,param_1);
  func_0x00010bf2f0e0(param_1);
  func_0x00010c2726e0(param_1);
  lVar3 = (long)_DAT_11276259c;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c272680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107002610; end: 10700282b; -[SCCameraViewController captureComponent:didCompleteRecoveryWithImage:recoveryData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107002610(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + (long)_DAT_1127624bc);
  func_0x00010c07c740();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c10a560(), (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf31380(param_5);
    func_0x00010bf655e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209860(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dcac0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf088e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfe6f80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010c0b7e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10dae0(uVar1,param_2,puVar3,0,uVar4,uVar5);
    _objc_release(uVar5);
    _objc_release(param_1);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10700282c; end: 10700294f; -[SCCameraViewController imageCaptureDidComplete] */

/* WARNING: Possible PIC construction at 0x000107002870: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107002874) */
/* WARNING: Removing unreachable block (ram,0x0001070028e4) */
/* WARNING: Removing unreachable block (ram,0x000107002918) */
/* WARNING: Removing unreachable block (ram,0x000107002910) */
/* WARNING: Removing unreachable block (ram,0x00010700291c) */
/* WARNING: Removing unreachable block (ram,0x0001070028d0) */
/* WARNING: Removing unreachable block (ram,0x000107002928) */
/* WARNING: Removing unreachable block (ram,0x00010c255d40) */

void FUN_10700282c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c2687e0();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1e9010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setRecordingState__112657e28,uVar1);
  return;
}



/* Entry: 107002950; end: 107002997; -[SCCameraViewController featureToggleCameraButtonDidTap:] */

void FUN_107002950(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0926e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064e80(param_1);
  func_0x00010c0a2480(uVar1,param_2,1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107002998; end: 107002f7f; -[SCCameraViewController videoCaptureWillStartRecordingWithCaptureConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107002998(ulong param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  uVar3 = param_1;
  func_0x00010c064e80();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_1;
    func_0x00010bf2a5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0f9c60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf0ac00();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x00010bddab80(param_1);
      _objc_initWeak(auStack_78,param_1);
      uVar3 = param_1;
      func_0x00010bf29620(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfd3560();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      dVar14 = 1.60807493534087e-314;
      _objc_copyWeak(auStack_80,auStack_78);
      func_0x00010c177f80(uVar5);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar3 = param_1;
      func_0x00010bf29620(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0cd1c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c238840();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar3 = param_1;
      func_0x00010c234bc0();
      if ((uVar3 & 1) == 0) {
        lVar13 = (long)_DAT_1127624bc;
      }
      else {
        func_0x00010c123ea0(param_3);
        dVar15 = 1.0;
        if (0.0 < dVar14) {
          func_0x00010c123ea0(param_3);
          dVar15 = dVar14;
        }
        lVar13 = (long)_DAT_1127624bc;
        uVar6 = *(undefined8 *)(param_1 + lVar13);
        func_0x00010bf2a1a0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf2b240();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2502e0(dVar15);
        _objc_release(uVar7);
        _objc_release(uVar6);
      }
      uVar6 = *(undefined8 *)(param_1 + lVar13);
      func_0x00010c0b7e80();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0982a0();
      _objc_release(uVar6);
      if ((int)uVar7 == 0) {
        func_0x00010becf220(0x3fd3333333333333,param_1);
      }
      else {
        uVar3 = param_1;
        func_0x00010c0926e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ad860();
        _objc_release(uVar3);
      }
      uVar7 = *(undefined8 *)(param_1 + lVar13);
      func_0x00010bf2a1a0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1611a0(0x3fd3333333333333);
      _objc_release(uVar7);
      uVar7 = *(undefined8 *)(param_1 + lVar13);
      func_0x00010bf2a1a0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe1e00();
      _objc_release(uVar7);
      uVar3 = param_1;
      func_0x00010bf29620(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf2b3c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28b320(0x3fd3333333333333);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar3 = param_1;
      func_0x00010c246fe0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c09fca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c0040(*(undefined8 *)(param_1 + lVar13));
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      func_0x00010c1e9000(param_1);
      uVar3 = param_1;
      func_0x00010be40e00();
      if ((int)uVar3 == 0) {
        bVar1 = false;
      }
      else {
        lVar13 = param_1 + (long)_DAT_112762568;
        _objc_loadWeakRetained();
        lVar8 = lVar13;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010bf4fda0();
        bVar1 = lVar9 == 2;
        _objc_release(lVar8);
        _objc_release(lVar13);
      }
      lVar13 = param_3;
      func_0x00010bf31440();
      if ((lVar13 == 0) || (lVar13 = param_3, func_0x00010bf31440(), lVar13 == 1)) {
        bVar2 = true;
      }
      else {
        lVar13 = param_3;
        func_0x00010bf31440();
        bVar2 = lVar13 == 4;
      }
      if ((bool)(bVar1 & bVar2)) {
        uVar3 = param_1;
        func_0x00010bf29620(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bfd3560();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27d620();
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
      uVar3 = param_1;
      func_0x00010bdd1440();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c1238e0();
      _objc_release(uVar3);
      if (uVar4 == 0x67726e74) {
        uVar3 = param_1;
        func_0x00010bf29620();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0cd1c0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar5;
        func_0x00010c079ee0();
        if ((int)uVar10 != 0) {
          uVar10 = param_1;
          func_0x00010bf29620(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x00010c0cd1c0();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar11;
          func_0x00010bfa1820();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c07ed20();
          _objc_release(uVar12);
          _objc_release(uVar11);
          _objc_release(uVar10);
        }
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
      func_0x00010c1119e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16c080();
      _objc_release(uVar3);
      _objc_release(param_1);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107002f80; end: 10700305b;  */

void FUN_107002f80(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf30b20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beec5a0(lVar3,param_2,&PTR____CFConstantStringClassReference_110e96c98,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0926e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b880();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10700305c; end: 107003067; -[SCCameraViewController videoCaptureDidReachUnlimitedMovementThreshold] */

void FUN_10700305c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becf230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fb999999999999a,param_1,PTR_s__transitionToRecordingStateWithA_112591630);
  return;
}



/* Entry: 107003068; end: 107003203; -[SCCameraViewController captureComponent:willFinishRecordingWithVideoSize:placeholderImage:videoFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107003068(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_3;
  func_0x00010beb3100();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_3 + (long)_DAT_112762574);
    func_0x00010c077ea0();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c1119e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c5240(param_1,param_2);
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar1 = param_3;
      func_0x00010c1119e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dcac0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar1 = param_3;
      func_0x00010c1119e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c252440(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c2993e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c252440(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c0b7e80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10db60(uVar1,param_4,param_7,uVar3,uVar4);
      _objc_release(uVar4);
      _objc_release(param_3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
  }
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 107003204; end: 1070037a7; -[SCCameraViewController videoCaptureDidFinishRecordingWithRecordedVideo:captureConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107003204(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  lVar12 = param_1 + (long)_DAT_112762568;
  _objc_loadWeakRetained(lVar12);
  lVar3 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf4fce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be6c0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar12);
  uVar5 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c06b680();
  uVar11 = param_1;
  if ((uVar8 & 1) == 0) {
    bVar1 = *(byte *)(puStack_78 + 3);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    if ((bVar1 & 1) != 0) goto LAB_10700336c;
    uVar5 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c06b680();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    if ((int)uVar8 == 0) {
      lVar12 = (long)_DAT_112762574;
      iVar2 = (int)*(undefined8 *)(param_1 + lVar12);
      func_0x00010c077ea0();
      if (iVar2 == 0) {
        uVar5 = param_1;
        func_0x00010beb3100();
        if ((((uVar5 & 1) == 0) && (uVar5 = param_1, func_0x00010bfeb400(), (int)uVar5 != 0)) &&
           (uVar5 = param_1, func_0x00010c10a560(), (uVar5 & 1) == 0)) {
          puVar10 = PTR_PTR_1126ae558;
          func_0x00010bfe9ca0(PTR_PTR_1126ae558);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_1;
          func_0x00010c1119e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_1;
          func_0x00010c252440(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c2993e0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = param_1;
          func_0x00010c252440(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar8;
          func_0x00010c0b7e80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c10db60(uVar5);
          _objc_release(uVar11);
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(puVar10);
        }
        uVar9 = *(undefined8 *)(param_1 + (long)_DAT_1127624bc);
        func_0x00010c0b7e80();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar9;
        func_0x00010c0982a0();
        _objc_release(uVar9);
        if ((int)uVar13 != 0) {
          uVar5 = param_1;
          func_0x00010c0926e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0ad880();
          _objc_release(uVar5);
          uVar5 = param_1;
          func_0x00010c0926e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf3ade0();
          _objc_release(uVar5);
          func_0x00010c27d4c0(param_1);
        }
        goto LAB_1070033bc;
      }
      uVar13 = *(undefined8 *)(param_1 + lVar12);
      func_0x00010c252440(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar11;
      func_0x00010c2993e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_1;
      func_0x00010c252440(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c0b7e80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e8ee0(uVar13);
    }
    else {
      uVar5 = param_1;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c270700();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c0833c0();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      if ((int)uVar8 == 0) goto LAB_1070033bc;
      uVar5 = param_1;
      func_0x00010c0926e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf099a0();
      _objc_release(uVar5);
      if ((int)uVar6 == 0) goto LAB_1070033bc;
      func_0x00010bf29620(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar11;
      func_0x00010bf08e60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1 + (long)_DAT_112762530;
      _objc_loadWeakRetained(uVar5);
      uVar8 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c136e00(uVar7);
      _objc_release(uVar8);
    }
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  else {
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
LAB_10700336c:
    uVar9 = *(undefined8 *)(param_1 + (long)_DAT_1127624bc);
    func_0x00010c0b7e80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar9;
    func_0x00010c0982a0();
    _objc_release(uVar9);
    if ((int)uVar13 == 0) goto LAB_1070033bc;
    func_0x00010c0926e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ad880();
  }
  _objc_release(uVar11);
LAB_1070033bc:
  func_0x00010bfafbe0(param_1);
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c270700();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27d5a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1070037a8; end: 1070037c3;  */

void FUN_1070037a8(void)

{
  return;
}



/* Entry: 1070037c4; end: 1070039bb; -[SCCameraViewController videoCaptureDidAbortRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070037c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = param_1;
  func_0x00010be40e00();
  if ((int)lVar6 != 0) {
    lVar6 = param_1 + _DAT_112762568;
    _objc_loadWeakRetained();
    lVar1 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf4fd80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar6);
    if (lVar4 == 0) {
      lVar6 = param_1;
      func_0x00010bf29620(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar6;
      func_0x00010bf4fca0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c137fe0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(lVar6);
    }
  }
  lVar6 = (long)_DAT_1127624bc;
  func_0x00010c200ee0(*(undefined8 *)(param_1 + lVar6),param_2,0);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf2a1a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12bbc0();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf2a1a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c255c40();
  _objc_release(uVar5);
  lVar6 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010bfd3560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c177c00();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar6);
  lVar6 = param_1;
  func_0x00010c075580();
  if ((int)lVar6 != 0) {
    func_0x00010c1cb900(0x3fd3333333333333,param_1,param_2,0,1,1);
  }
  func_0x00010c1e9000(param_1,param_2,0);
  func_0x00010bf2f0e0(param_1);
  func_0x00010bf61c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070039bc; end: 1070039f7; -[SCCameraViewController videoCaptureDidFailRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070039bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127625d4);
  *(undefined8 *)(param_1 + _DAT_1127625d4) = 0;
  _objc_release(uVar1);
  func_0x00010c1380c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf2f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cancelSnapCaptureSession_1125a95e0);
  return;
}



/* Entry: 1070039f8; end: 107003a2b; -[SCCameraViewController videoCaptureDidCancelRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070039f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127625d4);
  *(undefined8 *)(param_1 + _DAT_1127625d4) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1380d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetAll_11262ba50);
  return;
}



/* Entry: 107003a2c; end: 107003b33; -[SCCameraViewController videoCaptureRecordingTooShort] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107003a2c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar1 = param_1;
  func_0x00010be40e00();
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar6 = (long)_DAT_1127624bc;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c2993e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c2993e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c094b40();
  func_0x00010c064e80(param_1);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c2993e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf31440();
  func_0x00010c24ef20(param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c221260(*(undefined8 *)(param_1 + lVar6));
                    /* WARNING: Could not recover jumptable at 0x00010c27cc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_tryCapturingStillImage_11267cd38);
  return;
}



/* Entry: 107003b34; end: 107003c77; -[SCCameraViewController videoCaptureDidReachEnd] */

void FUN_107003b34(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b9b20;
  func_0x00010bf4fcc0();
  if ((int)puVar1 != 0) {
    uVar2 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf4fca0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd23e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2a0e00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c110160();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((int)uVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beec570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_abortPressingVolumeButtonAndEndR_112598b00)
    ;
    return;
  }
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf30b20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256760();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107003c78; end: 107003e2f; -[SCCameraViewController videoCaptureDidStopRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107003c78(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = param_1 + (long)_DAT_112762568;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4fda0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 4) {
    func_0x00010be94460(param_1);
  }
  uVar4 = param_1;
  func_0x00010c10a580();
  if (((uVar4 & 1) != 0) || (uVar4 = param_1, func_0x00010c251e20(), (int)uVar4 != 0)) {
    func_0x00010c1e9000(param_1,param_2,5);
  }
  func_0x00010be51200(param_1);
  uVar4 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfd3560();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c177c00();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0cd1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6ae20();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar7 = *(undefined8 *)(param_1 + (long)_DAT_1127624bc);
  func_0x00010c153940(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar8,param_2,&PTR____CFConstantStringClassReference_110ed29f8,param_1,0);
  _objc_release(param_1);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 107003e30; end: 107003fb7; -[SCCameraViewController videoCaptureDidCompleteRecoveryWithRecoveryData:videoFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107003e30(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + (long)_DAT_1127624bc);
  func_0x00010c07c740();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c10a560(), (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf088e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16c080();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2993e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c0b7e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10db60(uVar1,param_2,param_4,uVar3,uVar4);
    _objc_release(uVar4);
    _objc_release(param_1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107003fb8; end: 107003fbb; -[SCCameraViewController videoCaptureShouldPrepareRecording] */

void FUN_107003fb8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10a590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_preparingRecording_112620380);
  return;
}



/* Entry: 107003fbc; end: 107003fbf; -[SCCameraViewController videoCaptureShouldStartRecording] */

void FUN_107003fbc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10a590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_preparingRecording_112620380);
  return;
}


