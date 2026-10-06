/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107003fc0; end: 107004003; -[SCCameraViewController videoCaptureShouldEndRecording] */

ulong FUN_107003fc0(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c123d40();
  if (((int)uVar1 != 0) && (uVar1 = param_1, func_0x00010bfb0040(), (uVar1 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bfeb410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_inCaptureFlow_1125d86c8);
    return param_1;
  }
  return 0;
}



/* Entry: 107004004; end: 107004007; -[SCCameraViewController videoCaptureHasStartedRecording] */

void FUN_107004004(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c251e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_startedRecording_1126721b0);
  return;
}



/* Entry: 107004008; end: 10700400b; -[SCCameraViewController didRemoveInvalidRecordedVideo] */

void FUN_107004008(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1380d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetAll_11262ba50);
  return;
}



/* Entry: 10700400c; end: 107004143; -[SCCameraViewController featureMultiSnap:willDisplayWithViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700400c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_4);
  func_0x00010bef76c0(param_1,param_2,param_4);
  lVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c242c40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c242d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar1);
  lVar6 = (long)_DAT_1127624bc;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf2a1a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c070780(lVar3,param_2,uVar4);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf2a1a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if ((int)lVar1 == 0) {
    func_0x00010c066fc0(uVar5,param_2,uVar4,0);
  }
  else {
    func_0x00010c066f80();
  }
  _objc_release(uVar4);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107004144; end: 10700414b; -[SCCameraViewController featureMultiSnap:willResetWithViewController:] */

void FUN_107004144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12b770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeChildVC__1126287f8,param_4);
  return;
}



/* Entry: 10700414c; end: 107004233; -[SCCameraViewController featureMultiSnap:didRecoverWithMultiSnapConfiguration:startRecordingTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700414c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  
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
    func_0x00010c1c9700();
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209860();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107004234; end: 10700426f; -[SCCameraViewController featureCaptionDidTap:] */

void FUN_107004234(undefined8 param_1)

{
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107004270; end: 107004753; -[SCCameraViewController featureTimerModeWillStartCountingDown:captureTrigger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107004270(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c075580();
  if ((uVar1 & 1) == 0) {
    lVar10 = (long)_DAT_11276259c;
    uVar1 = param_1 + lVar10;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      lVar10 = param_1 + lVar10;
      _objc_loadWeakRetained(lVar10);
      func_0x00010c272ca0();
      _objc_release(lVar10);
    }
  }
  func_0x00010c1cb900(0x3fb999999999999a,param_1);
  lVar10 = (long)_DAT_1127624bc;
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf2a1a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1611a0(0x3fb999999999999a);
  _objc_release(uVar3);
  uVar1 = param_1;
  func_0x00010c0926e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf099a0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010bf2a5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf291c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfe2420();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfe2420();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar7 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010bf29620(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf08e60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_1 + (long)_DAT_112762530;
      _objc_loadWeakRetained(lVar9);
      lVar8 = lVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c136e00(uVar4);
      _objc_release(lVar8);
      _objc_release(lVar9);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    uVar1 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf2b4c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c093800();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c136e00(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  func_0x00010c1e9000(param_1);
  uVar1 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c215d00(uVar2);
  uVar1 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c098a80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06b700();
  func_0x00010c1bd860(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar3 = param_3;
  func_0x00010c0833c0();
  _objc_release(param_3);
  if ((int)uVar3 != 0) {
    uVar1 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c177560();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c270700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0833c0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  if ((uVar6 & 1) == 0) {
    lVar9 = *(long *)(param_1 + lVar10);
    func_0x00010c2993e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf311e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar10 == 0) {
      lVar8 = lVar10;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24ef20(param_1);
      _objc_release(lVar8);
    }
    else {
      func_0x00010c24ef20(param_1);
    }
    _objc_release(lVar10);
    _objc_release(lVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107004754; end: 107004a8f; -[SCCameraViewController featureTimerModeDidFinishCountingDown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107004754(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    func_0x00010be87680(param_1);
    uVar1 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c270700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0833c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar4 == 0) {
      uVar1 = param_1;
      func_0x00010bf29620(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf30b20();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + (long)_DAT_1127624bc);
      func_0x00010bfe6f80(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf311e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010bdc5260(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar4;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b1ac0(uVar3);
      _objc_release(uVar10);
      _objc_release(uVar4);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      func_0x00010bf312c0(param_1);
      uVar1 = param_1;
      func_0x00010c075580();
      if ((uVar1 & 1) == 0) {
        lVar11 = (long)_DAT_11276259c;
        uVar1 = param_1 + lVar11;
        _objc_loadWeakRetained();
        uVar2 = uVar1;
        _objc_opt_respondsToSelector();
        _objc_release(uVar1);
        if ((uVar2 & 1) != 0) {
          lVar11 = param_1 + lVar11;
          _objc_loadWeakRetained(lVar11);
          func_0x00010c272ca0();
          _objc_release(lVar11);
        }
      }
    }
    else {
      lVar11 = param_1 + (long)_DAT_112762568;
      _objc_loadWeakRetained();
      lVar5 = lVar11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf4fda0();
      _objc_release(lVar5);
      _objc_release(lVar11);
      if (lVar6 == 4) {
        uVar1 = param_1;
        func_0x00010bf29620();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf4fca0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf78ec0();
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((uVar4 & 1) != 0) goto LAB_1070047a8;
        puVar7 = PTR_PTR_1126affa8;
        func_0x00010c22bc20(PTR_PTR_1126affa8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f8760();
        _objc_release(puVar7);
        uVar1 = param_1;
        func_0x00010bf29620(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf4fca0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1151a0();
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
      }
      func_0x00010c251820(param_1);
      func_0x00010bef05c0(param_3);
      func_0x00010c109720(param_1);
    }
  }
  else {
    func_0x00010bfa2de0(param_1);
  }
LAB_1070047a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107004a90; end: 107004cf7; -[SCCameraViewController featureTimerModeDidAbortCountingDown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107004a90(ulong param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  func_0x00010c0833c0();
  if (param_3 != 0) {
    uVar1 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c177560();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  func_0x00010c1cb900(0x3fb999999999999a,param_1);
  uVar4 = *(undefined8 *)(param_1 + (long)_DAT_1127624bc);
  func_0x00010bf2a1a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1611a0(0x3fb999999999999a);
  _objc_release(uVar4);
  uVar1 = param_1;
  func_0x00010c075580();
  if ((uVar1 & 1) == 0) {
    lVar8 = (long)_DAT_11276259c;
    uVar1 = param_1 + lVar8;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      lVar8 = param_1 + lVar8;
      _objc_loadWeakRetained(lVar8);
      func_0x00010c272ca0();
      _objc_release(lVar8);
    }
  }
  uVar1 = param_1;
  func_0x00010c0926e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf099a0();
  if ((int)uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf29e60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c06c220();
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar6 & 1) != 0) goto LAB_107004cd0;
    uVar1 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf08e60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + (long)_DAT_112762530;
    _objc_loadWeakRetained(lVar8);
    lVar7 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c136e00(uVar3);
    _objc_release(lVar7);
    _objc_release(lVar8);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
LAB_107004cd0:
  func_0x00010c1e9000(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf2f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cancelSnapCaptureSession_1125a95e0);
  return;
}



/* Entry: 107004cf8; end: 107004d3f; -[SCCameraViewController parentViewControllerForCameraFeature] */

void FUN_107004cf8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    param_1 = lVar1;
  }
  _objc_retain(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107004d40; end: 107004e7f; -[SCCameraViewController featureTimerModeVideoTimerMaxDuration:] */

undefined8 FUN_107004d40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2;
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf291c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c123da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010be3fa40();
  if ((int)uVar1 == 0) {
    uVar1 = param_2;
    func_0x00010be3f360();
    if ((int)uVar1 == 0) {
      param_2 = uVar4;
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c127f40();
    }
    else {
      func_0x00010bf29620(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_2;
      func_0x00010bf4fca0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c2ac0();
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
  }
  else {
    param_2 = uVar4;
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c276a00();
  }
  _objc_release(param_2);
  _objc_release(uVar4);
  return param_1;
}



/* Entry: 107004e80; end: 107004f9b; -[SCCameraViewController featureTimerModeVideoTimerStartOffset:] */

undefined8 FUN_107004e80(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_2;
  func_0x00010be3fa40();
  if ((int)lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010be3f360();
    if ((int)lVar1 == 0) {
      return 0;
    }
    func_0x00010bf29620(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010bf4fca0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2769e0();
  }
  else {
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c0c45a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
    }
    else {
      func_0x00010c276460(&uStack_58,lVar2);
    }
    _CMTimeGetSeconds(&uStack_58);
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107004f9c; end: 10700502f; -[SCCameraViewController featureTimerModeWillPresentVideoTimerDurationTray:] */

void FUN_107004f9c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c0833c0();
  if (param_3 != 0) {
    uVar1 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c177560();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c224250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setVolumeButtonHandlingEnabled__112666ab8,0);
  return;
}



/* Entry: 107005030; end: 1070050c3; -[SCCameraViewController featureTimerModeDidDismissVideoTimerDurationTray:] */

void FUN_107005030(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c0833c0();
  if (param_3 != 0) {
    uVar1 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c177560();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c224250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setVolumeButtonHandlingEnabled__112666ab8,1);
  return;
}



/* Entry: 1070050c4; end: 1070050db; -[SCCameraViewController shouldStartRecordingRingAnimationEarly] */

uint FUN_1070050c4(uint param_1)

{
  func_0x00010be3fa40();
  return param_1 ^ 1;
}



/* Entry: 1070050dc; end: 10700511f; -[SCCameraViewController _activeLens] */

void FUN_1070050dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf29b80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bef0a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107005120; end: 107005193; -[SCCameraViewController _isBatchCaptureActive] */

undefined8 FUN_107005120(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06b680();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 107005194; end: 107005243; -[SCCameraViewController _hasBatchCaptureSegments] */

bool FUN_107005194(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar5 != 0;
}



/* Entry: 107005244; end: 1070052a3; -[SCCameraViewController _shouldShowBatchCaptureAlertWhenExit] */

long FUN_107005244(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf2bbc0();
  if ((lVar2 == 0) || (lVar2 = param_1, func_0x00010be3e5c0(), (int)lVar2 == 0)) {
    param_1 = 0;
  }
  else {
    func_0x00010be33c00(param_1);
  }
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 1070052a4; end: 107005317; -[SCCameraViewController _ringFlashWidgetShouldDisablePageNavigation] */

undefined8 FUN_1070052a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c140f60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22eee0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 107005318; end: 10700538b; -[SCCameraViewController _isSpeedModeActive] */

undefined8 FUN_107005318(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c249ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06b700();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 10700538c; end: 1070053cb; -[SCCameraViewController _isDirectorMode] */

bool FUN_10700538c(long param_1)

{
  long lVar1;
  
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf2bbc0();
  _objc_release(param_1);
  return lVar1 == 9;
}



/* Entry: 1070053cc; end: 1070054e7; -[SCCameraViewController _isHandsFreeCameraModeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1070053cc(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  param_1 = param_1 + _DAT_112762568;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfd3480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be6c0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 1070054e8; end: 10700550f;  */

void FUN_1070054e8(void)

{
  return;
}



/* Entry: 107005510; end: 10700562b; -[SCCameraViewController _isContinuousCaptureActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107005510(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  param_1 = param_1 + _DAT_112762568;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4fce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be6c0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 10700562c; end: 107005653;  */

void FUN_10700562c(void)

{
  return;
}



/* Entry: 107005654; end: 107005763; -[SCCameraViewController _shouldUseRegularTimerPipelineForContinuousCaptureResume] */

uint FUN_107005654(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  
  uVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c270700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf926c0();
  if ((int)uVar4 == 0) {
    uVar8 = 0;
  }
  else {
    uVar4 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c270700();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0833c0();
    if ((int)uVar7 == 0) {
      uVar8 = 0;
    }
    else {
      func_0x00010c0926e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_1;
      func_0x00010c06fc40();
      uVar8 = (uint)uVar7 ^ 1;
      _objc_release(param_1);
    }
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar8;
}



/* Entry: 107005764; end: 1070057db; -[SCCameraViewController _isContinuousCaptureTapToggleEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107005764(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be3f360();
  if ((int)lVar1 != 0) {
    param_1 = param_1 + _DAT_112762568;
    _objc_loadWeakRetained();
    lVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4fda0();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 1070057dc; end: 1070057f3; -[SCCameraViewController isCoolRecordingEnabled] */

uint FUN_1070057dc(uint param_1)

{
  func_0x00010be3fa40();
  return param_1 ^ 1;
}



/* Entry: 1070057f4; end: 1070058d3; -[SCCameraViewController _coolRecordingRingStyle] */

undefined8 FUN_1070057f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf51b20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c072ba0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  if ((int)uVar3 == 0) {
    uVar4 = 0xffffffffffffffff;
  }
  else {
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf51b20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c1412c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  return uVar4;
}



/* Entry: 1070058d4; end: 107005947; -[SCCameraViewController _isMusicFavoritesButtonActive] */

undefined8 FUN_1070058d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0d2ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef0100();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 107005948; end: 107005c73; -[SCCameraViewController _showBatchCaptureDiscardAlertWhenExit] */

void FUN_107005948(ulong param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_80,param_1);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db1898;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1898,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_107005c74;
  puStack_90 = &UNK_1108482a8;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  uVar19 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  uVar4 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c282500();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar9 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar10 = puVar9;
  func_0x00010703cde8();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar11 = puVar10;
  if (uVar8 < 2) {
    func_0x00010703ce18();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
  }
  else {
    func_0x00010703ce00();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar8;
    func_0x00010c14de00(puVar12);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar2;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar9);
  _objc_release(puVar13);
  if (uVar8 >= 2) {
    _objc_release(puVar12);
  }
  _objc_release(puVar11);
  _objc_release(puVar10);
  func_0x00010c211b40(puVar9);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  puVar14 = auStack_80;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  puVar15 = puVar14;
  __Unwind_Resume();
  pcStack_b8 = FUN_107005c74;
  puStack_f0 = puVar11;
  puStack_e8 = puVar10;
  uStack_e0 = (ulong)(uVar8 < 2);
  puStack_d8 = puVar3;
  puStack_d0 = puVar2;
  puStack_c8 = puVar14;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(uVar19);
  puVar14 = puVar15 + 0x20;
  _objc_loadWeakRetained();
  if (puVar14 != (undefined1 *)0x0) {
    puVar16 = puVar14;
    func_0x00010bf29620(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137fe0();
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_copyWeak(auStack_f8,puVar15 + 0x20);
    func_0x00010bf84b00(uVar19);
    _objc_destroyWeak(auStack_f8);
  }
  _objc_release(puVar14);
  _objc_release(uVar19);
  return;
}



/* Entry: 107005c74; end: 107005d8b;  */

void FUN_107005c74(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bf29620(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137fe0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    func_0x00010bf84b00(param_2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 107005d8c; end: 107005dbf;  */

void FUN_107005d8c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be0c1a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107005dc0; end: 107005dcf;  */

void FUN_107005dc0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 107005dd0; end: 10700602b; -[SCCameraViewController _showTimelineDiscardAlertWhenExit] */

void FUN_107005dd0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_70,param_1);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db1898;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1898,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10700602c;
  puStack_80 = &UNK_1108482a8;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  uVar10 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x00010703ce48();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010703ce60();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar2;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c211b40(puVar4);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_78);
  puVar8 = auStack_70;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  puVar9 = puVar8;
  __Unwind_Resume();
  pcStack_a8 = FUN_10700602c;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = puVar2;
  puStack_b8 = puVar8;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(uVar10);
  puVar8 = puVar9 + 0x20;
  _objc_loadWeakRetained();
  if (puVar8 != (undefined1 *)0x0) {
    _objc_copyWeak(auStack_d8,puVar9 + 0x20);
    func_0x00010bf84b00(uVar10);
    _objc_destroyWeak(auStack_d8);
  }
  _objc_release(puVar8);
  _objc_release(uVar10);
  return;
}



/* Entry: 10700602c; end: 1070060eb;  */

void FUN_10700602c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    func_0x00010bf84b00(param_2);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1070060ec; end: 10700611f;  */

void FUN_1070060ec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be0c1a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107006120; end: 10700612f;  */

void FUN_107006120(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 107006130; end: 10700642b; -[SCCameraViewController _showTimelineDraftAddSnapAlert] */

void FUN_107006130(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_98,param_1);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db18b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db18b8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10700642c;
  puStack_a8 = &UNK_1108482a8;
  _objc_copyWeak(auStack_a0,auStack_98);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010703ce78();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aed70;
  ppuVar3 = &PTR____CFConstantStringClassReference_110db1898;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1898,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar5;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_107006520;
  puStack_d0 = &UNK_1108482a8;
  _objc_copyWeak(auStack_c8,auStack_98);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar5 = PTR_PTR_1126aed70;
  ppuVar3 = &PTR____CFConstantStringClassReference_110daf8b8;
  uVar10 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar6 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar2;
  puStack_88 = puVar4;
  puStack_80 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar6);
  _objc_release(puVar7);
  func_0x00010c211b40(puVar6);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(ppuVar1);
  _objc_release(puVar2);
  puVar8 = auStack_98;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  puVar9 = puVar8;
  __Unwind_Resume();
  pcStack_f8 = FUN_10700642c;
  puStack_120 = puVar4;
  ppuStack_118 = ppuVar1;
  puStack_110 = puVar2;
  puStack_108 = puVar8;
  puStack_100 = &stack0xfffffffffffffff0;
  _objc_retain(uVar10);
  puVar8 = puVar9 + 0x20;
  _objc_loadWeakRetained();
  if (puVar8 != (undefined1 *)0x0) {
    _objc_copyWeak(auStack_128,puVar9 + 0x20);
    func_0x00010bf84b00(uVar10);
    _objc_destroyWeak(auStack_128);
  }
  _objc_release(puVar8);
  _objc_release(uVar10);
  return;
}



/* Entry: 10700642c; end: 1070064eb;  */

void FUN_10700642c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    func_0x00010bf84b00(param_2);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1070064ec; end: 10700651f;  */

void FUN_1070064ec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be0c1a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107006520; end: 1070065df;  */

void FUN_107006520(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    func_0x00010bf84b00(param_2);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1070065e0; end: 107006613;  */

void FUN_1070065e0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be0c1a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107006614; end: 107006623;  */

void FUN_107006614(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 107006624; end: 1070066fb; -[SCCameraViewController _captureBitrateLadderConfig] */

void FUN_107006624(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_1;
  func_0x00010be40d40();
  func_0x00010bf2a5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf291c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c29a400();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  if ((int)uVar1 == 0) {
    func_0x00010bf1c880();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf1c8a0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1070066fc; end: 107006783; -[SCCameraViewController presentViewController:animated:completion:] */

void FUN_1070066fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bfeb400(param_1);
  puStack_38 = PTR_PTR_1126f8378;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_presentViewController_animated_c_112621588,param_3,param_4,
                      param_5);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107006784; end: 10700678b; -[SCCameraViewController isMainCameraBeingOverlaid] */

undefined8 FUN_107006784(void)

{
  return 0;
}



/* Entry: 10700678c; end: 107006d3b; -[SCCameraViewController featureDirectorMode:didCaptureVideo:withError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700678c(ulong param_1)

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
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long in_x4;
  long lVar36;
  
  if (in_x4 == 0) {
    uVar1 = param_1;
    func_0x00010c1119e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c07b0a0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c1119e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a2040();
      _objc_release(uVar1);
    }
    uVar1 = param_1;
    func_0x00010c1119e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0c45a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0b7e80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf300a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c242c40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010c129540();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010c096000();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar22;
    func_0x00010c0d1c40();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar23;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar25;
    func_0x00010bfce220();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar26;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar28;
    func_0x00010c2bf380();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = uVar29;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar31 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar31;
    func_0x00010c150e80();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar32;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar36 = (long)_DAT_1127624f4;
    uVar34 = *(undefined8 *)(param_1 + lVar36);
    func_0x00010bf299a0();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = *(undefined8 *)(param_1 + lVar36);
    func_0x00010bf30c00();
    _objc_retainAutoreleasedReturnValue();
    lVar36 = param_1 + (long)_DAT_112762528;
    _objc_loadWeakRetained();
    func_0x00010c10a060(uVar2);
    _objc_release(lVar36);
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
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c243320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205640(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar6 = param_1;
    func_0x00010c1119e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c243320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5020(uVar5);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be94470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetViewForContinuousCapture_112582ab8);
  return;
}



/* Entry: 107006d3c; end: 107006d3f; -[SCCameraViewController featureDirectorModeDidAbortRecording:] */

void FUN_107006d3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be94470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetViewForContinuousCapture_112582ab8);
  return;
}



/* Entry: 107006d40; end: 107006e0b; -[SCCameraViewController featureDirectorModeDidRecoverFromPreviousSession:] */

void FUN_107006d40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf088e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c243320(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c205640(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107006e0c; end: 107006f4f; -[SCCameraViewController featureDirectorModeDidRequestPresentPreview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107006e0c(ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar1 = param_1 + (long)_DAT_1127625f8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e060();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = param_1;
  func_0x00010beb3100();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_1;
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0b7e80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010bef0520(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10dac0(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  uVar3 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b7e80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0982a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  if ((int)uVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c27d4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_turnLensesOff_11267cf58);
    return;
  }
  return;
}



/* Entry: 107006f50; end: 107006f53; -[SCCameraViewController featureDirectorModeExitMode:] */

void FUN_107006f50(void)

{
  return;
}



/* Entry: 107006f54; end: 107006fbf; -[SCCameraViewController featureDirectorModeDidTapMusicButton:] */

void FUN_107006f54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d1e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107006fc0; end: 107007077; -[SCCameraViewController featureDirectorModeWillPresentMemoriesPicker:] */

void FUN_107006fc0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf291c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0ce100();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c8f00();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((uVar5 & 1) == 0) {
    func_0x00010bec2e80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107007078; end: 10700712f; -[SCCameraViewController featureDirectorModeDidDismissMemoriesPicker:] */

void FUN_107007078(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  func_0x00010bf2a5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf291c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0ce100();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c8f00();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((uVar5 & 1) == 0) {
    func_0x00010bebf9c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107007130; end: 107007133; -[SCCameraViewController featureDirectorModeWillPresentDraftsGrid:] */

void FUN_107007130(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec2e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopCameraForModalPresentation_11258e548);
  return;
}



/* Entry: 107007134; end: 107007137; -[SCCameraViewController featureDirectorModeDidDismissDraftsGrid:] */

void FUN_107007134(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebf9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startCameraForModalDismissal_11258d818);
  return;
}



/* Entry: 107007138; end: 10700713b; -[SCCameraViewController previewWorkflowDelegateForDirectorMode:] */

void FUN_107007138(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c112550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_previewWorkflowDelegate_112622370);
  return;
}



/* Entry: 10700713c; end: 10700754f; -[SCCameraViewController cameraViewInitialFrameForDirectorModePresenting:] */

double FUN_10700713c(double param_1,double param_2,double param_3,double param_4,long param_5,
                    undefined8 param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  lVar3 = param_5;
  func_0x00010be98320();
  if ((int)lVar3 == 0) {
    func_0x00010c0c2600(PTR_PTR_1126b9e78);
    dVar13 = *(double *)PTR__CGPointZero_110347540;
    uVar14 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    _CGRectGetMaxY();
    dVar15 = param_1;
    func_0x00010c22dee0();
    if ((int)param_5 != 0) {
      func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _CGRectInset(dVar13,uVar14,param_3,param_1,0,dVar15 * -0.5);
      _CGRectOffset();
    }
  }
  else {
    lVar3 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar3);
    lVar3 = param_5;
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf2bb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar4;
    func_0x00010c0f0780();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      param_1 = *(double *)PTR__CGRectZero_110347608;
      param_2 = *(double *)(PTR__CGRectZero_110347608 + 8);
      param_3 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
      param_4 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
      iVar1 = 0;
    }
    else {
      lVar5 = param_5;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08cd20(lVar4);
      func_0x00010bf513e0(lVar5,param_6,lVar3);
      _objc_release();
      iVar1 = (int)lVar5;
    }
    dVar15 = param_1;
    dVar13 = param_2;
    dVar16 = param_3;
    dVar10 = param_4;
    _CGRectIsEmpty(param_1,param_2,param_3,param_4);
    iVar2 = 0;
    if (iVar1 != 0) {
      lVar5 = param_5;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_5;
      func_0x00010c252440(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf2b940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      lVar8 = param_5;
      func_0x00010c252440(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf2b940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf513e0(dVar15,dVar13,dVar16,dVar10,lVar5,param_6,lVar9);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release();
      iVar2 = (int)lVar5;
      param_1 = dVar15;
      param_2 = dVar13;
      param_3 = dVar16;
      param_4 = dVar10;
    }
    dVar15 = param_1;
    dVar10 = param_2;
    dVar11 = param_3;
    dVar12 = param_4;
    _CGRectIsEmpty(param_1,param_2,param_3,param_4);
    dVar16 = dVar15;
    dVar17 = dVar10;
    dVar18 = dVar11;
    dVar19 = dVar12;
    dVar13 = param_1;
    if (iVar2 != 0) {
      lVar5 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      dVar16 = dVar15;
      dVar17 = dVar10;
      dVar18 = dVar11;
      dVar19 = dVar12;
      _objc_release(lVar5);
      dVar13 = dVar15;
      param_2 = dVar10;
      param_3 = dVar11;
      param_4 = dVar12;
    }
    lVar5 = param_5;
    func_0x00010c22dee0();
    dVar15 = 0.0;
    if ((int)lVar5 != 0) {
      lVar6 = param_5;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      if (lVar7 != 0) {
        func_0x00010bf20c00(lVar7);
        dVar15 = dVar16;
        dVar10 = dVar17;
        dVar11 = dVar18;
        dVar12 = dVar19;
        func_0x00010c148fc0(lVar7);
        dVar16 = dVar16 + dVar10;
        dVar17 = dVar17 + dVar15;
        dVar18 = dVar18 - (dVar10 + dVar12);
        dVar19 = dVar19 - (dVar15 + dVar11);
        lVar6 = param_5;
        func_0x00010c29bf00(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf513e0(dVar16,dVar17,dVar18,dVar19);
        _objc_release(lVar6);
        _CGRectGetMinY(dVar16,dVar17,dVar18,dVar19);
        dVar15 = dVar16;
        func_0x00010c29bf00(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        _CGRectGetMinY();
        dVar15 = dVar16 - dVar15;
        _objc_release(param_5);
        if (dVar15 <= 0.0) {
          dVar15 = 0.0;
        }
      }
      _objc_release(lVar7);
    }
    FUN_106fee210(dVar13,param_2,param_3,param_4,dVar15,lVar5);
    _objc_release(lVar3);
    _objc_release(lVar4);
  }
  return dVar13;
}



/* Entry: 107007550; end: 1070075b7; -[SCCameraViewController featureDirectorMode:didUpdateTotalContentDuration:] */

void FUN_107007550(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7200();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070075b8; end: 10700765b; -[SCCameraViewController _resetViewForContinuousCapture] */

void FUN_1070075b8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c252400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139ca0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c272680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10700765c; end: 107007713; -[SCCameraViewController featureContextShortcut:didBecomeActiveWithId:snapSource:] */

void FUN_10700765c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1770c0();
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204fa0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107007714; end: 10700776b; -[SCCameraViewController featureBatchCapture:didBecomeActive:] */

void FUN_107007714(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1119e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f680();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10700776c; end: 1070077eb; -[SCCameraViewController featureBatchCapture:didCaptureImage:withError:] */

void FUN_10700776c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c1e9000(param_1,param_2,0);
  func_0x00010c2726e0(param_1,param_2,1,0);
  func_0x00010be94460(param_1);
  func_0x00010beaa760(param_1,param_2,param_3,0,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070077ec; end: 10700784f; -[SCCameraViewController featureBatchCapture:didCaptureVideo:withError:] */

void FUN_1070077ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010be94460(param_1);
  func_0x00010beaa760(param_1,param_2,param_3,1,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107007850; end: 10700798f; -[SCCameraViewController featureBatchCaptureDidPressReviewAndEdit:] */

void FUN_107007850(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010bf52280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e060();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010beb3100();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c252440(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b7e80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bef0520(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10da60(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b7e80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0982a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c27d4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_turnLensesOff_11267cf58);
    return;
  }
  return;
}



/* Entry: 107007990; end: 107007a8b; -[SCCameraViewController featureBatchCapture:previewButtonDidBecomeVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107007990(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0926e0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_4 & 1) == 0) {
    lVar2 = lVar1;
    func_0x00010bf099a0();
    _objc_release(lVar1);
    if ((int)lVar2 == 0) goto LAB_107007a5c;
    lVar1 = param_1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf2bbc0();
    if (lVar2 != 8) {
      lVar2 = param_1 + _DAT_112762530;
      _objc_loadWeakRetained();
      _objc_release();
      _objc_release(lVar1);
      if (lVar2 != 0) goto LAB_107007a5c;
      func_0x00010c0926e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      goto LAB_1070079d0;
    }
  }
  else {
LAB_1070079d0:
    lVar2 = lVar1;
    func_0x00010c098880(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d500();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
LAB_107007a5c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107007a8c; end: 107007acb; -[SCCameraViewController featureBatchCaptureUnsavedSegmentCount:] */

undefined8 FUN_107007a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf167e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c282500();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107007acc; end: 107008063; -[SCCameraViewController _setupAfterCaptureInBatchMode:mediaType:withError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107007acc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
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
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long lVar36;
  
  if (param_5 != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010c1119e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0b7e80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf300a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c242c40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c129540();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c096000();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c0d1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010bfce220();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  func_0x00010c2bf380();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar29;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = lVar31;
  func_0x00010c150e80();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar32;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = (long)_DAT_1127624f4;
  uVar34 = *(undefined8 *)(param_1 + lVar36);
  func_0x00010bf299a0();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)(param_1 + lVar36);
  func_0x00010bf30c00();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1 + _DAT_112762528;
  _objc_loadWeakRetained();
  func_0x00010c109000(lVar2,param_2,lVar6,lVar8,lVar12,lVar15,lVar18,lVar21,lVar24,lVar27,lVar30,
                      lVar33,uVar34,uVar35,lVar36);
  _objc_release(lVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
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
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar36 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar36;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf16c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205640(lVar1,param_2,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar36);
  lVar5 = param_1;
  func_0x00010c1119e0();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar5;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf16c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a4fe0(lVar36,param_2,lVar4,param_4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(lVar36);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 107008064; end: 107008067; -[SCCameraViewController featureMemoriesWillScrollToGallery:withExitEvent:] */

void FUN_107008064(void)

{
  return;
}



/* Entry: 107008068; end: 10700806b; -[SCCameraViewController featureMemoriesWillScrollToCamera:withExitEvent:] */

void FUN_107008068(void)

{
  return;
}



/* Entry: 10700806c; end: 10700806f; -[SCCameraViewController featureMemoriesDidScrollToGallery:] */

void FUN_10700806c(void)

{
  return;
}



/* Entry: 107008070; end: 107008073; -[SCCameraViewController featureMemoriesDidScrollToCamera:] */

void FUN_107008070(void)

{
  return;
}



/* Entry: 107008074; end: 1070080b3; -[SCCameraViewController _isMainCamera] */

bool FUN_107008074(long param_1)

{
  long lVar1;
  
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf2bbc0();
  _objc_release(param_1);
  return lVar1 == 0;
}



/* Entry: 1070080b4; end: 107008113; -[SCCameraViewController _isFrontCamera] */

bool FUN_1070080b4(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0b7e80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf70d80();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 == 0;
}



/* Entry: 107008114; end: 10700817b; -[SCCameraViewController _stopCameraForModalPresentation] */

void FUN_107008114(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c252400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1388e0();
  _objc_release(uVar1);
  func_0x00010c255c00(param_1);
  func_0x00010c0e36c0(param_1);
  func_0x00010c255e20(param_1);
  func_0x00010c2560c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c29c890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_viewDidDisappear__112684c48,0);
  return;
}



/* Entry: 10700817c; end: 10700828f; -[SCCameraViewController _startCameraForModalDismissal] */

void FUN_10700817c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c29e720(param_2,param_3,0);
  func_0x00010c29c6a0(param_2,param_3,0);
  func_0x00010c0e36c0(param_2,param_3,1);
  uVar1 = param_2;
  func_0x00010c252400(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24eec0();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c252400(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24e920();
  _objc_release(uVar1);
  _CACurrentMediaTime();
  uVar1 = param_2;
  func_0x00010c252440(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1771e0(param_1);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0926e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c096e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13c480();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf61c60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107008290; end: 107008293; -[SCCameraViewController featureMemoriesPresentMemoriesAddSnapsPicker:] */

void FUN_107008290(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec2e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopCameraForModalPresentation_11258e548);
  return;
}



/* Entry: 107008294; end: 10700831b; -[SCCameraViewController featureMemoriesPreloadCameraScreenForPresentation] */

void FUN_107008294(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010c252400();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db92b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24e240(uVar1,param_2,param_1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10700831c; end: 1070083e7; -[SCCameraViewController didScreenshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700831c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127624bc);
  func_0x00010c0b7e80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70d80();
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010bdc5260(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c1519c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aeda0();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1070083e8; end: 10700846b; -[SCCameraViewController previewPresenterDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070083e8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_1127625fc;
  lVar2 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c176520();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c176c40();
  _objc_release(lVar2);
  _objc_loadWeakRetained(param_1 + lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10700846c; end: 1070084e3; -[SCCameraViewController isPresentingPreview] */

long FUN_10700846c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c123ee0();
  if (lVar2 == 6) {
    lVar2 = 1;
  }
  else {
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c07ac80();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 1070084e4; end: 1070084eb; -[SCCameraViewController defaultCustomStatusBarStyle] */

undefined8 FUN_1070084e4(void)

{
  return 2;
}



/* Entry: 1070084ec; end: 107008523; -[SCCameraViewController customStatusBarStyleForViewController] */

ulong FUN_1070084ec(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c123d40();
  if ((uVar1 & 1) != 0) {
    return 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf691f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_defaultCustomStatusBarStyle_1125b7e20);
  return param_1;
}



/* Entry: 107008524; end: 10700862f; -[SCCameraViewController _mediaServicesWereReset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107008524(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010be5eb60();
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127624f4);
  func_0x00010bf29960(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107008630; end: 1070087f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107008630(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar9 = (long)_DAT_1127624f4;
    uVar1 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010bf093c0();
    _objc_release(uVar8);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126b6fe8;
    if ((int)uVar3 != 0) {
      uVar1 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010bf29960(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b7ec0(puVar4,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c2a8740();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010bf29960(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c209fc0();
      _objc_release(uVar3);
      _objc_release(uVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(uVar8);
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar8 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010bf299a0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27d2e0();
      _objc_release(uVar2);
      _objc_release(uVar8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070087f8; end: 1070088ff; -[SCCameraViewController _mediaServicesWereLost] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070087f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127624f4);
  func_0x00010bf29960(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107008900; end: 107008a23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107008900(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar8 = (long)_DAT_1127624f4;
    uVar1 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf093c0();
    if ((int)uVar4 == 0) {
      uVar5 = *(ulong *)(param_1 + lVar8);
      func_0x00010c0b7e00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c07cd60();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar7 & 1) != 0) goto LAB_107008a08;
      uVar1 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010bf299a0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c128e60();
    }
    else {
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
LAB_107008a08:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107008a24; end: 107008b5b; -[SCCameraViewController _checkRestrictedCamera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107008a24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127624f4);
  func_0x00010bf29960(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107008b5c; end: 107008cab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107008b5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 uStack_48;
  undefined1 uStack_47;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_1127624f4);
    func_0x00010bf30c00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010bf2fa00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c070820();
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010bf2fa00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c070820();
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126b7018;
    func_0x00010bf11000();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107008cac;
    puStack_60 = &UNK_110988770;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uStack_48 = (undefined1)uVar4;
    uStack_47 = (undefined1)uVar5;
    uStack_58 = uVar2;
    puStack_50 = puVar6;
    func_0x0001000d76cc("APPSTORE",&puStack_78);
    _objc_release(uStack_58);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 107008cac; end: 107008cc3;  */

void FUN_107008cac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107008cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x30),
             *(undefined1 *)(param_1 + 0x31),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107008cc4; end: 107008ccb; -[SCCameraViewController shouldAddBottomCardCorners] */

undefined8 FUN_107008cc4(void)

{
  return 1;
}



/* Entry: 107008ccc; end: 107008ce3; -[SCCameraViewController shouldAddTopCardCorners] */

uint FUN_107008ccc(uint param_1)

{
  func_0x00010c22dee0();
  return param_1 ^ 1;
}



/* Entry: 107008ce4; end: 107008ee3; -[SCCameraViewController _shouldCaptureFromVideoWithDevicePosition:lightingCondition:nightModeEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107008ce4(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = (long)_DAT_1127624bc;
  lVar1 = *(long *)(param_1 + lVar10);
  func_0x00010c0b7e80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar1;
  func_0x00010bf70d80();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126d4050;
  if (lVar11 == 0) {
    lVar11 = (long)_DAT_112762578;
    uVar2 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb1a0(puVar4,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126d4050;
    if ((int)puVar4 == 0) {
      if (0 < param_4) {
        return;
      }
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfbb1a0(puVar5,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((long)((ulong)puVar5 & 0xffffffff) <= param_4) {
        return;
      }
    }
  }
  else {
    lVar1 = *(long *)(param_1 + lVar10);
    func_0x00010c0b7e80();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar1;
    func_0x00010bf70d80();
    _objc_release(lVar1);
    if ((param_4 != 0) && (lVar11 == 1)) {
      return;
    }
  }
  uVar6 = param_1;
  func_0x00010be41b40();
  if ((((uVar6 & 1) == 0) && (uVar6 = param_1, func_0x00010beb2800(), (uVar6 & 1) == 0)) &&
     (param_5 != 0)) {
    func_0x00010bf2a5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010bf291c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c090500();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c095840();
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 107008ee4; end: 107008eeb; -[SCCameraViewController _shouldPreventSnapIfGalleryPresent] */

undefined8 FUN_107008ee4(void)

{
  return 1;
}



/* Entry: 107008eec; end: 107008fcf; -[SCCameraViewController _shouldApplySuperResolution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107008eec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010be40ac0();
  lVar1 = param_1;
  func_0x00010bdc5220();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127624bc);
    func_0x00010c0b7e80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb24e0();
    _objc_release(uVar2);
  }
  func_0x00010be41b40(param_1);
  func_0x00010c266ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf29d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c22df80();
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar4;
}



/* Entry: 107008fd0; end: 107009013; -[SCCameraViewController _isReplyCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107008fd0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127624bc;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010bf2bbc0();
  if (lVar1 != 1) {
    func_0x00010bf2bbc0(*(undefined8 *)(param_1 + lVar2));
  }
  return;
}



/* Entry: 107009014; end: 107009087; -[SCCameraViewController _isHDModeActive] */

undefined8 FUN_107009014(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfdee60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06dea0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}


