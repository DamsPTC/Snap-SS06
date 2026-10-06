/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107009088; end: 107009833; -[SCCameraViewController _shouldKeepVideoSizeAsOutputSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107009088(ulong param_1)

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
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  
  uVar1 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c150aa0();
  _objc_release(uVar1);
  if (uVar2 == 0xb) {
    uVar1 = param_1;
    func_0x00010bf2a5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf291c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf7f840();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf8ef60();
    if ((uVar6 & 1) == 0) {
      uVar6 = param_1;
      func_0x00010bf2a5a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf291c0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf7f840();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010bf8ef80();
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
      if ((uVar11 & 1) == 0) goto LAB_107009218;
    }
    else {
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
LAB_107009808:
    uVar14 = 1;
  }
  else {
LAB_107009218:
    uVar1 = param_1;
    func_0x00010be43360();
    lVar15 = (long)_DAT_1127624bc;
    if ((int)uVar1 != 0) {
      lVar12 = *(long *)(param_1 + lVar15);
      func_0x00010c0b7e80();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010bf70d80();
      if (lVar13 == 1) {
        uVar1 = param_1;
        func_0x00010bf2a5a0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf291c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf45e20();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c13a4c0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf45e20();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c231520();
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        _objc_release(lVar12);
        if ((uVar8 & 1) != 0) goto LAB_107009808;
      }
      else {
        _objc_release(lVar12);
      }
      lVar12 = *(long *)(param_1 + lVar15);
      func_0x00010c0b7e80();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010bf70d80();
      if (lVar13 == 0) {
        uVar1 = param_1;
        func_0x00010bf2a5a0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf291c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf45e20();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c13a4c0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf45e20();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c231580();
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        _objc_release(lVar12);
        if ((uVar8 & 1) != 0) goto LAB_107009808;
      }
      else {
        _objc_release(lVar12);
      }
    }
    lVar13 = *(long *)(param_1 + lVar15);
    func_0x00010bf2bbc0();
    if (lVar13 == 0) {
      lVar12 = *(long *)(param_1 + lVar15);
      func_0x00010c0b7e80();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010bf70d80();
      if (lVar13 == 1) {
        uVar1 = param_1;
        func_0x00010bf2a5a0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf291c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf45e20();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c13a4c0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf45e20();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c2314e0();
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        _objc_release(lVar12);
        if ((uVar8 & 1) != 0) goto LAB_107009808;
      }
      else {
        _objc_release(lVar12);
      }
      lVar12 = *(long *)(param_1 + lVar15);
      func_0x00010c0b7e80();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010bf70d80();
      if (lVar13 == 0) {
        uVar1 = param_1;
        func_0x00010bf2a5a0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf291c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf45e20();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c13a4c0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf45e20();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c231540();
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        _objc_release(lVar12);
        if ((uVar8 & 1) != 0) goto LAB_107009808;
      }
      else {
        _objc_release(lVar12);
      }
    }
    uVar1 = param_1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c150aa0();
    _objc_release(uVar1);
    if (uVar2 == 7) {
      lVar12 = *(long *)(param_1 + lVar15);
      func_0x00010c0b7e80();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010bf70d80();
      if (lVar13 == 1) {
        uVar1 = param_1;
        func_0x00010bf2a5a0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf291c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf45e20();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c13a4c0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf45e20();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c231500();
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        _objc_release(lVar12);
        if ((uVar8 & 1) != 0) goto LAB_107009808;
      }
      else {
        _objc_release(lVar12);
      }
      lVar13 = *(long *)(param_1 + lVar15);
      func_0x00010c0b7e80();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar13;
      func_0x00010bf70d80();
      if (lVar15 == 0) {
        func_0x00010bf2a5a0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_1;
        func_0x00010bf291c0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf45e20();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c13a4c0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf45e20();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c231560();
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        _objc_release(param_1);
        _objc_release(lVar13);
        if ((uVar7 & 1) != 0) goto LAB_107009808;
      }
      else {
        _objc_release(lVar13);
      }
    }
    uVar14 = 0;
  }
  return uVar14;
}



/* Entry: 107009834; end: 1070098bf; -[SCCameraViewController _isCaptureButtonBlockedForLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107009834(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762558);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076600();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010be44dc0(param_1,param_2,param_3);
    uVar3 = (uint)param_1 ^ 1;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1070098c0; end: 107009963; -[SCCameraViewController _handleBlockedCaptureButtonTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070098c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if ((lVar1 == 4) || (lVar1 = param_3, func_0x00010c252440(), lVar1 == 3)) {
    puVar2 = PTR_PTR_1126d4008;
    func_0x00010bf5a2a0(PTR_PTR_1126d4008,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127624e4);
    func_0x00010bfc1900(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd1480();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107009964; end: 107009a5b; -[SCCameraViewController _isTurnBasedReplyForLens:] */

undefined8 FUN_107009964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c2720a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(param_1);
  uVar4 = param_3;
  func_0x00010c081a80();
  if (((int)uVar4 == 0) || (uVar4 = uVar1, func_0x00010c06b3e0(), (int)uVar4 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c118620(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0(uVar2,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107009a5c; end: 107009ae3; -[SCCameraViewController modularCallUIWillAppearOnCamera] */

void FUN_107009a5c(undefined8 param_1)

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



/* Entry: 107009ae4; end: 107009c93; -[SCCameraViewController presentPreviewAfterModularCallDismissalForRecordedVideo:captureConfiguration:managedCapturerState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107009ae4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127625f8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar4 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar4);
  lVar1 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e060();
  _objc_release(lVar1);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0fd9a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  func_0x00010c1c5240(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0fd9a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dcac0(lVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c10db60(param_1,param_2,puVar3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107009c94; end: 107009cef; -[SCCameraViewController _handleBlockedCaptureOnVolumeButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107009c94(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d4058;
  _objc_opt_new(PTR_PTR_1126d4058);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127624e4);
  func_0x00010bfc1900(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1480();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107009cf0; end: 107009d0f; -[SCCameraViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107009cf0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276259c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107009d10; end: 107009d2f; -[SCCameraViewController previewWorkflowDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107009d10(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762604);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107009d30; end: 107009d6f; -[SCCameraViewController setStartupWorkflow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107009d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127624cc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107009d70; end: 107009d8f; -[SCCameraViewController snapDocManagerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107009d70(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762608);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107009d90; end: 107009d9f; -[SCCameraViewController cameraSnapModelServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107009d90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276260c);
}



/* Entry: 107009da0; end: 107009daf; -[SCCameraViewController composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107009da0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127624ec);
}



/* Entry: 107009db0; end: 107009dbf; -[SCCameraViewController cameraRequestHandlerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107009db0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127624f8);
}



/* Entry: 107009dc0; end: 107009ddf; -[SCCameraViewController touchController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107009dc0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276254c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107009de0; end: 107009def; -[SCCameraViewController cameraStabilityServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107009de0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762508);
}



/* Entry: 107009df0; end: 107009e0f; -[SCCameraViewController navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107009df0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762610);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107009e10; end: 107009e2f; -[SCCameraViewController coreCameraLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107009e10(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127625f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107009e30; end: 107009e4f; -[SCCameraViewController cameraUserBlizzardLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107009e30(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762618);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107009e50; end: 107009e6f; -[SCCameraViewController nightModeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107009e50(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762528);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107009e70; end: 107009e83; -[SCCameraViewController setNightModeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107009e70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762528,param_3);
  return;
}



/* Entry: 107009e84; end: 107009e93; -[SCCameraViewController cameraGrapheneLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107009e84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276261c);
}



/* Entry: 107009e94; end: 107009eb3; -[SCCameraViewController permissionStateLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107009e94(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762620);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107009eb4; end: 107009ed3; -[SCCameraViewController soundEffects] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107009eb4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762628);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107009ed4; end: 107009ee3; -[SCCameraViewController screenshotLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107009ed4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762630);
}



/* Entry: 107009ee4; end: 107009f03; -[SCCameraViewController launchDataStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107009ee4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762634);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107009f04; end: 107009f13; -[SCCameraViewController legacyLensLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107009f04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276251c);
}



/* Entry: 107009f14; end: 107009f53; -[SCCameraViewController setLegacyLensLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107009f14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276251c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107009f54; end: 107009f93; -[SCCameraViewController setUserTrackedLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107009f54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762520;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107009f94; end: 107009fb3; -[SCCameraViewController timelineDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107009f94(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762638);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107009fb4; end: 107009fc7; -[SCCameraViewController setTimelineDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107009fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762638,param_3);
  return;
}



/* Entry: 107009fc8; end: 10700a007; -[SCCameraViewController setShortcutContextAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107009fc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762640;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10700a008; end: 10700a047; -[SCCameraViewController setApplicationLifecycleEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a008(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127624d0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10700a048; end: 10700a067; -[SCCameraViewController lensCarouselStudySettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a048(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276252c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10700a068; end: 10700a07b; -[SCCameraViewController setLensCarouselStudySettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a068(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276252c,param_3);
  return;
}



/* Entry: 10700a07c; end: 10700a09b; -[SCCameraViewController arBarAdapter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a07c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762530);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10700a09c; end: 10700a0af; -[SCCameraViewController setArBarAdapter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a09c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762530,param_3);
  return;
}



/* Entry: 10700a0b0; end: 10700a0cf; -[SCCameraViewController locationPermissionsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a0b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762534);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10700a0d0; end: 10700a0e3; -[SCCameraViewController setLocationPermissionsManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a0d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762534,param_3);
  return;
}



/* Entry: 10700a0e4; end: 10700a103; -[SCCameraViewController systemConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a0e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762538);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10700a104; end: 10700a117; -[SCCameraViewController setSystemConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a104(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762538,param_3);
  return;
}



/* Entry: 10700a118; end: 10700a137; -[SCCameraViewController customVolumeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a118(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762544);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10700a138; end: 10700a14b; -[SCCameraViewController setCustomVolumeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a138(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762544,param_3);
  return;
}



/* Entry: 10700a14c; end: 10700a16b; -[SCCameraViewController secretFeatureCheckingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a14c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762548);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10700a16c; end: 10700a17f; -[SCCameraViewController setSecretFeatureCheckingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a16c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762548,param_3);
  return;
}



/* Entry: 10700a180; end: 10700a19f; -[SCCameraViewController simpleSnapchatExperimentConfigProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a180(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127624d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10700a1a0; end: 10700a1b3; -[SCCameraViewController setSimpleSnapchatExperimentConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a1a0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127624d8,param_3);
  return;
}



/* Entry: 10700a1b4; end: 10700a1d3; -[SCCameraViewController permissionRequestService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a1b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762554);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10700a1d4; end: 10700a1e7; -[SCCameraViewController setPermissionRequestService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a1d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762554,param_3);
  return;
}



/* Entry: 10700a1e8; end: 10700a1f7; -[SCCameraViewController lensPlusTierService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10700a1e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762558);
}



/* Entry: 10700a1f8; end: 10700a237; -[SCCameraViewController setLensPlusTierService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a1f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762558;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10700a238; end: 10700a277; -[SCCameraViewController setSnapEditorTweakServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a238(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276256c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10700a278; end: 10700a297; -[SCCameraViewController cameraModeActivationController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a278(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762568);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10700a298; end: 10700a2ab; -[SCCameraViewController setCameraModeActivationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a298(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762568,param_3);
  return;
}



/* Entry: 10700a2ac; end: 10700a2bf; -[SCCameraViewController setPreviewPresenterDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a2ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127625fc,param_3);
  return;
}



/* Entry: 10700a2c0; end: 10700a2cf; -[SCCameraViewController previewFilterDataProviderFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10700a2c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762648);
}



/* Entry: 10700a2d0; end: 10700a2ef; -[SCCameraViewController snapchattersDataFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a2d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276264c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10700a2f0; end: 10700a303; -[SCCameraViewController setSnapchattersDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a2f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276264c,param_3);
  return;
}



/* Entry: 10700a304; end: 10700a323; -[SCCameraViewController cameraBIPAScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a304(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762510);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10700a324; end: 10700a337; -[SCCameraViewController setCameraBIPAScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a324(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762510,param_3);
  return;
}



/* Entry: 10700a338; end: 10700a357; -[SCCameraViewController cameraBIPAScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a338(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762514);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10700a358; end: 10700a36b; -[SCCameraViewController setCameraBIPAScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a358(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762514,param_3);
  return;
}



/* Entry: 10700a36c; end: 10700a37b; -[SCCameraViewController isCameraHardwareRequestHandlerActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10700a36c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127625e4);
}



/* Entry: 10700a37c; end: 10700a38b; -[SCCameraViewController lensCarouselManagerFuture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10700a37c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762550);
}



/* Entry: 10700a38c; end: 10700a39b; -[SCCameraViewController deeplinkUnlockDeferredBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10700a38c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762588);
}



/* Entry: 10700a39c; end: 10700a3a7; -[SCCameraViewController setDeeplinkUnlockDeferredBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a39c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10700a3a8; end: 10700a3b7; -[SCCameraViewController setPressingCameraButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a3a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127624a8) = param_3;
  return;
}



/* Entry: 10700a3b8; end: 10700a3c7; -[SCCameraViewController deepLinkBitmojiController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10700a3b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762650);
}



/* Entry: 10700a3c8; end: 10700a407; -[SCCameraViewController setDeepLinkBitmojiController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a3c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762650;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10700a408; end: 10700a417; -[SCCameraViewController longPressStartTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10700a408(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127625a8);
}



/* Entry: 10700a418; end: 10700a427; -[SCCameraViewController setLongPressStartTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a418(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127625a8) = param_1;
  return;
}



/* Entry: 10700a428; end: 10700a437; -[SCCameraViewController snapBackFasterDismissEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10700a428(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127624ac);
}



/* Entry: 10700a438; end: 10700a447; -[SCCameraViewController setSnapBackFasterDismissEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a438(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127624ac) = param_3;
  return;
}



/* Entry: 10700a448; end: 10700a457; -[SCCameraViewController isSnapBackReplyCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10700a448(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127625d0);
}



/* Entry: 10700a458; end: 10700a467; -[SCCameraViewController geofilterCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10700a458(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127624b0);
}



/* Entry: 10700a468; end: 10700a477; -[SCCameraViewController setGeofilterCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a468(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127624b0) = param_3;
  return;
}



/* Entry: 10700a478; end: 10700a487; -[SCCameraViewController geolensCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10700a478(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127624b4);
}



/* Entry: 10700a488; end: 10700a497; -[SCCameraViewController setGeolensCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a488(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127624b4) = param_3;
  return;
}



/* Entry: 10700a498; end: 10700a4a7; -[SCCameraViewController isPreviewWarmedUp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10700a498(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127624b8);
}



/* Entry: 10700a4a8; end: 10700a4b7; -[SCCameraViewController setIsPreviewWarmedUp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a4a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127624b8) = param_3;
  return;
}



/* Entry: 10700a4b8; end: 10700a9db; -[SCCameraViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700a4b8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112762650,0);
  _objc_storeStrong(param_1 + _DAT_112762588,0);
  _objc_storeStrong(param_1 + _DAT_112762550,0);
  _objc_storeStrong(param_1 + _DAT_1127624bc,0);
  _objc_destroyWeak(param_1 + _DAT_112762514);
  _objc_destroyWeak(param_1 + _DAT_112762510);
  _objc_destroyWeak(param_1 + _DAT_11276264c);
  _objc_storeStrong(param_1 + _DAT_112762648,0);
  _objc_destroyWeak(param_1 + _DAT_1127625fc);
  _objc_storeStrong(param_1 + _DAT_112762644,0);
  _objc_storeStrong(param_1 + _DAT_112762558,0);
  _objc_destroyWeak(param_1 + _DAT_112762554);
  _objc_destroyWeak(param_1 + _DAT_1127624d8);
  _objc_destroyWeak(param_1 + _DAT_112762548);
  _objc_destroyWeak(param_1 + _DAT_112762538);
  _objc_destroyWeak(param_1 + _DAT_112762534);
  _objc_destroyWeak(param_1 + _DAT_112762530);
  _objc_destroyWeak(param_1 + _DAT_11276252c);
  _objc_storeStrong(param_1 + _DAT_112762640,0);
  _objc_storeStrong(param_1 + _DAT_11276263c,0);
  _objc_destroyWeak(param_1 + _DAT_112762638);
  _objc_storeStrong(param_1 + _DAT_1127625f0,0);
  _objc_storeStrong(param_1 + _DAT_112762520,0);
  _objc_storeStrong(param_1 + _DAT_11276251c,0);
  _objc_destroyWeak(param_1 + _DAT_112762634);
  _objc_storeStrong(param_1 + _DAT_112762630,0);
  _objc_storeStrong(param_1 + _DAT_1127624e0,0);
  _objc_storeStrong(param_1 + _DAT_11276262c,0);
  _objc_destroyWeak(param_1 + _DAT_112762628);
  _objc_storeStrong(param_1 + _DAT_112762624,0);
  _objc_destroyWeak(param_1 + _DAT_112762620);
  _objc_storeStrong(param_1 + _DAT_11276261c,0);
  _objc_destroyWeak(param_1 + _DAT_112762528);
  _objc_destroyWeak(param_1 + _DAT_112762618);
  _objc_destroyWeak(param_1 + _DAT_112762614);
  _objc_destroyWeak(param_1 + _DAT_1127625f8);
  _objc_destroyWeak(param_1 + _DAT_112762610);
  _objc_storeStrong(param_1 + _DAT_112762508,0);
  _objc_destroyWeak(param_1 + _DAT_112762500);
  _objc_destroyWeak(param_1 + _DAT_112762504);
  _objc_destroyWeak(param_1 + _DAT_11276254c);
  _objc_storeStrong(param_1 + _DAT_1127624fc,0);
  _objc_storeStrong(param_1 + _DAT_1127624f8,0);
  _objc_storeStrong(param_1 + _DAT_1127624f4,0);
  _objc_storeStrong(param_1 + _DAT_1127624e4,0);
  _objc_storeStrong(param_1 + _DAT_1127624ec,0);
  _objc_storeStrong(param_1 + _DAT_11276260c,0);
  _objc_destroyWeak(param_1 + _DAT_112762608);
  _objc_storeStrong(param_1 + _DAT_1127624e8,0);
  _objc_storeStrong(param_1 + _DAT_1127624cc,0);
  _objc_destroyWeak(param_1 + _DAT_112762604);
  _objc_destroyWeak(param_1 + _DAT_11276259c);
  _objc_storeStrong(param_1 + _DAT_112762578,0);
  _objc_storeStrong(param_1 + _DAT_1127624f0,0);
  _objc_storeStrong(param_1 + _DAT_112762574,0);
  _objc_storeStrong(param_1 + _DAT_1127625d4,0);
  _objc_storeStrong(param_1 + _DAT_1127625cc,0);
  _objc_storeStrong(param_1 + _DAT_1127625c0,0);
  _objc_storeStrong(param_1 + _DAT_11276256c,0);
  _objc_storeStrong(param_1 + _DAT_112762600,0);
  _objc_storeStrong(param_1 + _DAT_112762598,0);
  _objc_storeStrong(param_1 + _DAT_112762570,0);
  _objc_destroyWeak(param_1 + _DAT_112762568);
  _objc_storeStrong(param_1 + _DAT_1127624dc,0);
  _objc_storeStrong(param_1 + _DAT_112762584,0);
  _objc_storeStrong(param_1 + _DAT_1127625a0,0);
  _objc_storeStrong(param_1 + _DAT_1127624d4,0);
  _objc_destroyWeak(param_1 + _DAT_112762544);
  _objc_destroyWeak(param_1 + _DAT_112762524);
  _objc_storeStrong(param_1 + _DAT_1127624d0,0);
  _objc_storeStrong(param_1 + _DAT_112762518,0);
  _objc_destroyWeak(param_1 + _DAT_11276250c);
  _objc_storeStrong(param_1 + _DAT_11276255c,0);
  _objc_destroyWeak(param_1 + _DAT_11276253c);
  _objc_storeStrong(param_1 + _DAT_1127625e0,0);
  _objc_storeStrong(param_1 + _DAT_1127625e8,0);
  _objc_storeStrong(param_1 + _DAT_1127625dc,0);
  _objc_storeStrong(param_1 + _DAT_1127625ec,0);
  _objc_storeStrong(param_1 + _DAT_1127625a4,0);
  _objc_storeStrong(param_1 + _DAT_112762654,0);
  _objc_storeStrong(param_1 + _DAT_1127625b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127625f4,0);
  return;
}



/* Entry: 10700a9dc; end: 10700aa0b; -[SCCameraViewfinderLayoutController initWithCameraView:containingView:] */

void FUN_10700a9dc(void)

{
  func_0x00010bffc000();
  return;
}



/* Entry: 10700aa0c; end: 10700aa7f; -[SCCameraViewfinderLayoutController _activateTierConstraintForPositionTier:] */

void FUN_10700aa0c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 < 3) {
    lVar2 = *(long *)(param_1 + param_3 * 8 + 0x28);
    _objc_retain(lVar2);
  }
  else {
    lVar2 = 0;
  }
  if (lVar2 != *(long *)(param_1 + 0x40)) {
    func_0x00010c162480(*(long *)(param_1 + 0x40),param_2,0);
    func_0x00010c162480(lVar2,param_2,1);
    _objc_retain(lVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10700aa80; end: 10700aa87; -[SCCameraViewfinderLayoutController systemSafeAreaGuide] */

undefined8 FUN_10700aa80(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10700aa88; end: 10700ab43; -[SCCameraViewfinderLayoutController .cxx_destruct] */

void FUN_10700aa88(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 10700ab44; end: 10700ab93; -[SCCameraViewControllerStartupWorkflow dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700ab44(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_1127626c8));
  puStack_28 = PTR_PTR_1126f8388;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10700ab94; end: 10700ac2f;  */

void FUN_10700ab94(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = (undefined *)0x0;
    if (lVar2 != 0) {
      puVar4 = PTR_PTR_1126b02d0;
      _objc_opt_new(PTR_PTR_1126b02d0);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9980(puVar4,param_2,uVar3);
      _objc_release(uVar3);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10700ac30; end: 10700ad93;  */

void FUN_10700ac30(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      param_1 = param_1 + 0x30;
      _objc_loadWeakRetained();
      if (param_1 != 0) {
        lVar3 = param_1;
        func_0x00010c293a80();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c082820();
        _objc_release(lVar3);
        if ((int)lVar4 != 0) {
          func_0x00010c24eec0(lVar1,param_2,lVar2);
          lVar3 = lVar2;
          func_0x00010c252440(lVar2);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bf2b940();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar1;
          func_0x00010beca2e0(lVar1,param_2,lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbb60(lVar4,param_2,lVar5);
          _objc_release(lVar5);
          _objc_release(lVar4);
          _objc_release(lVar3);
          lVar3 = lVar2;
          func_0x00010c252440(lVar2);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bf2b940();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar1;
          func_0x00010be620a0(lVar1,param_2,lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbb60(lVar4,param_2,lVar5);
          _objc_release(lVar5);
          _objc_release(lVar4);
          _objc_release(lVar3);
        }
      }
      _objc_release(param_1);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10700ad94; end: 10700ae13;  */

void FUN_10700ad94(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c0926e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c287280();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10700ae14; end: 10700af23; -[SCCameraViewControllerStartupWorkflow performViewWillTransitionToSize:size:withTransitionCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700ae14(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_6);
  func_0x00010c29e9a0(param_1,param_2,*(undefined8 *)(param_3 + _DAT_1127626e4),param_4,param_6);
  uVar1 = *(undefined8 *)(param_3 + _DAT_1127626d0);
  func_0x00010bf29960();
  _objc_retainAutoreleasedReturnValue();
  if (param_6 == 0) {
    uVar2 = uVar1;
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069dc0();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10700af24;
    puStack_50 = &UNK_110870710;
    uStack_48 = uVar1;
    func_0x00010bf02c20(param_6,param_4,0,&puStack_68);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  return;
}



/* Entry: 10700af24; end: 10700af6f;  */

void FUN_10700af24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069dc0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10700af70; end: 10700afff;  */

void FUN_10700af70(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10700b000;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10700b000; end: 10700b04b;  */

void FUN_10700b000(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a2040();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10700b04c; end: 10700b317;  */

void FUN_10700b04c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c1119e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a2040();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf29180();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf05fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf1f440();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    if ((int)lVar5 == 0) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      uStack_58 = 0x10700b1b8;
      puStack_50 = &UNK_110842e18;
      _objc_retain(param_1);
      lStack_48 = param_1;
      if (lRam00000001136c9f80 != -1) {
        func_0x00010002a2fc(0x1136c9f80,&puStack_68);
        lVar1 = lStack_48;
      }
    }
    else {
      func_0x00010c1119e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c108aa0();
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10700b318; end: 10700b437;  */

void FUN_10700b318(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  
  lVar1 = param_2;
  _objc_retain(param_2);
  if (param_2 != 0) {
    func_0x0001003a77d8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR____CFConstantStringClassReference_110e96dd8;
    _NSClassFromString();
    if (ppuVar2 != (undefined **)0x0) {
      func_0x00010bfb4d00(lVar1);
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110e96df8;
    _NSClassFromString();
    if (ppuVar2 != (undefined **)0x0) {
      func_0x00010bfb4d00(lVar1);
    }
    _objc_release(lVar1);
    if (lRam00000001136c9f98 != -1) {
      func_0x00010002a2fc(0x1136c9f98,&PTR___NSConcreteGlobalBlock_110988978);
    }
    func_0x00010c108920(param_2);
    _objc_retain(param_2);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e96dd8;
    _NSClassFromString();
    if (ppuVar2 != (undefined **)0x0) {
      _objc_alloc_init();
      func_0x00010c2a1ce0(param_2);
      _objc_release(ppuVar2);
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110e96df8;
    _NSClassFromString();
    if (ppuVar2 != (undefined **)0x0) {
      _objc_alloc_init();
      func_0x00010c2a1ce0(param_2);
      _objc_release(ppuVar2);
    }
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10700b438; end: 10700b43b; -[SCCameraViewControllerStartupWorkflow performApplicationWillEnterForeground:notification:] */

void FUN_10700b438(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe2670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hidePrivacyView__1125d6358);
  return;
}



/* Entry: 10700b43c; end: 10700b4f3; -[SCCameraViewControllerStartupWorkflow resetEffectiveScale:] */

void FUN_10700b43c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf29620(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c232b40();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c2bf380(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar3 == 0) {
    func_0x00010c139fe0();
  }
  else {
    func_0x00010c13c860();
  }
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10700b4f4; end: 10700b7fb; -[SCCameraViewControllerStartupWorkflow logPageViewAndStartCameraWhenViewAppears:] */

void FUN_10700b4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126afdd8;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_3;
  func_0x00010c0f2220(param_3);
  func_0x00010bfc8740(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e96d78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  uVar2 = param_3;
  func_0x00010c0b3a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0f2220(param_3);
  func_0x00010c0abd40(uVar2,param_2,uVar5);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b6b20;
  func_0x00010c22ba80(PTR_PTR_1126b6b20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ab40();
  _objc_release(puVar4);
  uVar2 = param_3;
  func_0x00010c0b3a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a22a0();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf29620(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c2722e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2bc80();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db92b8);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10700b724;
  puStack_50 = &UNK_110841f20;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c24e260(param_1,param_2,param_3,puVar4,&puStack_68);
  _objc_release(puVar4);
  func_0x00010c24e920(param_1,param_2,param_3);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10700b7fc; end: 10700b80f; -[SCCameraViewControllerStartupWorkflow prepareForCameraViewControllerDismissal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700b7fc(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_1127626ec) = 1;
  return;
}



/* Entry: 10700b810; end: 10700b82b; -[SCCameraViewControllerStartupWorkflow cameraViewWasDismissed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10700b810(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_1127626ec) = 0;
  return;
}


