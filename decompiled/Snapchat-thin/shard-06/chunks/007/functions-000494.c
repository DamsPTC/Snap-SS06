/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d69a0c; end: 104d69ab3; -[SCFeatureDirectorModeImpl _viewWillDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d69a0c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11271230c;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c1581e0();
  lVar2 = param_1 + _DAT_11271231c;
  _objc_loadWeakRetained(lVar2);
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + lVar5);
  }
  func_0x00010c14a3e0(lVar2,param_2,uVar4);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271220c);
  func_0x00010bf7f280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18dd80();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104d69ab4; end: 104d69ab7; -[SCFeatureDirectorModeImpl configureWithCameraToolbar:] */

void FUN_104d69ab4(void)

{
  return;
}



/* Entry: 104d69ab8; end: 104d69abf; -[SCFeatureDirectorModeImpl isCameraModeActivated] */

undefined8 FUN_104d69ab8(void)

{
  return 1;
}



/* Entry: 104d69ac0; end: 104d69ac7; -[SCFeatureDirectorModeImpl cameraModeType] */

undefined8 FUN_104d69ac0(void)

{
  return 0x11;
}



/* Entry: 104d69ac8; end: 104d69b0b; -[SCFeatureDirectorModeImpl snapSessionID] */

void FUN_104d69ac8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0c45a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2702a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d69b0c; end: 104d69b87; -[SCFeatureDirectorModeImpl remainingCaptureDuration] */

double FUN_104d69b0c(double param_1,long param_2)

{
  double dVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010c0c2ac0();
  dVar1 = param_1;
  func_0x00010c0c45a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010c276460(&uStack_48,param_2);
  }
  _CMTimeGetSeconds(&uStack_48);
  _objc_release(param_2);
  return param_1 - dVar1;
}



/* Entry: 104d69b88; end: 104d69c07; -[SCFeatureDirectorModeImpl snapSessionContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d69b88(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11271231c;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c243300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104d69c08; end: 104d69c6f; -[SCFeatureDirectorModeImpl maxRecordingDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d69c08(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11271220c);
  func_0x00010bf7f280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c2420();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104d69c70; end: 104d69c8f; -[SCFeatureDirectorModeImpl didReachMaxDuration] */

bool FUN_104d69c70(double param_1)

{
  func_0x00010c1291e0();
  return param_1 < 0.5;
}



/* Entry: 104d69c90; end: 104d69d73; -[SCFeatureDirectorModeImpl mediaConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d69c90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11271230c;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126aff48;
    _objc_alloc();
    lVar3 = param_1 + _DAT_112712244;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bff8b60(puVar1,param_2,lVar3,*(undefined8 *)(param_1 + _DAT_1127122f8));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    _objc_release(lVar3);
    func_0x00010bef9980(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
    puVar1 = PTR_PTR_1126aff10;
    func_0x00010bfea420(PTR_PTR_1126aff10,param_2,*(undefined8 *)(param_1 + _DAT_1127122b4));
    func_0x00010c200bc0(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    func_0x00010bec8360(param_1);
    func_0x00010bec8740(param_1);
    func_0x00010bec7d00(param_1);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104d69d74; end: 104d6a263; -[SCFeatureDirectorModeImpl setDraftDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d69d74(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar11 = (long)_DAT_11271231c;
  _objc_retain(param_4);
  _objc_storeWeak(param_2 + lVar11,param_4);
  _objc_retain();
  uVar9 = param_4;
  func_0x00010bf895c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar13 = (long)_DAT_112712308;
  uVar1 = *(undefined8 *)(param_2 + lVar13);
  *(undefined8 *)(param_2 + lVar13) = uVar9;
  _objc_release(uVar1);
  uVar2 = param_2 + lVar11;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    lVar4 = param_2 + lVar11;
    _objc_loadWeakRetained();
    lVar6 = lVar4;
    func_0x00010c1241e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_2 + _DAT_112712320);
    *(long *)(param_2 + _DAT_112712320) = lVar6;
    _objc_release(uVar9);
    _objc_release(lVar4);
  }
  lVar4 = param_2;
  func_0x00010c243300();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c2407e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar6;
  func_0x00010bfdc2e0();
  _objc_release(lVar6);
  _objc_release(lVar4);
  if ((int)lVar10 == 0) {
    lVar6 = *(long *)(param_2 + lVar13);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      lVar7 = *(long *)(param_2 + _DAT_112712230);
      func_0x00010c0cfdc0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar4;
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar10;
      func_0x00010c09dea0();
      _objc_release(lVar10);
      _objc_release(lVar4);
      _objc_release(lVar7);
      _objc_release(lVar6);
      if (lVar12 != 0) goto LAB_104d6a0d0;
      lVar6 = *(long *)(param_2 + lVar13);
      func_0x00010c1585e0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdcfc80(param_2);
    }
  }
  else {
    lVar10 = (long)_DAT_112712230;
    uVar5 = *(undefined8 *)(param_2 + lVar10);
    func_0x00010c0cfdc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar9;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_2;
    func_0x00010c243300(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar13;
    func_0x00010c2407e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c139ee0(uVar1);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar13);
    _objc_release(uVar1);
    _objc_release(uVar9);
    _objc_release(uVar5);
    lVar13 = param_2;
    func_0x00010c243300(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar13;
    func_0x00010c2407e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf51e00();
    uVar1 = *(undefined8 *)(param_2 + lVar10);
    func_0x00010c0cfdc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2042c0();
    _objc_release(uVar9);
    _objc_release(uVar1);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar13);
    lVar6 = *(long *)(param_2 + lVar10);
    func_0x00010c0cfdc0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar13;
    func_0x00010c2407e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203f00();
    _objc_release(lVar4);
    _objc_release(lVar13);
  }
  _objc_release(lVar6);
LAB_104d6a0d0:
  puVar8 = PTR_PTR_1126aff50;
  _objc_alloc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112712230);
  func_0x00010c0cfdc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_2;
  func_0x00010c0c45a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c2ac0(param_2);
  lVar4 = param_2;
  func_0x00010c240d60();
  if ((int)lVar4 != 0) {
    func_0x00010be44880();
  }
  lVar4 = param_2 + _DAT_112712234;
  _objc_loadWeakRetained();
  lVar6 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar6;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0476c0(param_1);
  lVar12 = (long)_DAT_112712324;
  uVar5 = *(undefined8 *)(param_2 + lVar12);
  *(undefined **)(param_2 + lVar12) = puVar8;
  _objc_release(uVar5);
  _objc_release(lVar10);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar13);
  _objc_release(uVar9);
  _objc_release(uVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_2 + lVar12));
  param_2 = param_2 + lVar11;
  _objc_loadWeakRetained(param_2);
  func_0x00010bfa1f40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104d6a264; end: 104d6a267;  */

void FUN_104d6a264(void)

{
  return;
}



/* Entry: 104d6a268; end: 104d6a27f; -[SCFeatureDirectorModeImpl shouldRestoreFromDraft] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104d6a268(long param_1)

{
  return *(long *)(param_1 + _DAT_112712308) != 0;
}



/* Entry: 104d6a280; end: 104d6a3b3; -[SCFeatureDirectorModeImpl reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6a280(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + _DAT_11271230c) != 0) {
    *(undefined8 *)(param_1 + _DAT_11271230c) = 0;
    _objc_release();
    func_0x00010c1c4340(*(undefined8 *)(param_1 + _DAT_112712324));
    lVar6 = (long)_DAT_11271231c;
    lVar5 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c14a3e0();
    _objc_release(lVar5);
    uVar1 = param_1 + lVar6;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      lVar6 = param_1 + lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c205620();
      _objc_release(lVar6);
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_112712230);
    func_0x00010c0cfdc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137fe0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112712320;
    if (*(long *)(param_1 + lVar5) != 0) {
      func_0x00010c12b020();
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(undefined8 *)(param_1 + lVar5) = 0;
      _objc_release(uVar4);
    }
    func_0x00010bedf5c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be0bf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exitAndResetFeaturesIfNeeded_112560978);
    return;
  }
  return;
}



/* Entry: 104d6a3b4; end: 104d6a7b7; -[SCFeatureDirectorModeImpl presentMemoriesPickerWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6a3b4(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_90;
  
  _objc_retainBlock();
  uVar13 = *(undefined8 *)(param_2 + _DAT_112712328);
  *(undefined8 *)(param_2 + _DAT_112712328) = param_4;
  _objc_release(uVar13);
  lVar15 = (long)_DAT_112712210;
  uVar2 = *(ulong *)(param_2 + lVar15);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf049e0();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be97f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__runMemoriesPickerCompletion_112583970);
    return;
  }
  lVar14 = (long)_DAT_11271232c;
  lVar16 = param_2 + lVar14;
  _objc_loadWeakRetained(lVar16);
  func_0x00010bfa22c0();
  _objc_release(lVar16);
  lVar16 = (long)_DAT_112712248;
  iVar1 = (int)*(undefined8 *)(param_2 + lVar16);
  func_0x00010c071800();
  if (iVar1 == 0) {
    return;
  }
  puVar4 = PTR_PTR_1126aff58;
  _objc_alloc();
  lVar14 = param_2 + lVar14;
  _objc_loadWeakRetained(lVar14);
  lVar5 = lVar14;
  func_0x00010c0f3d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f60();
  _objc_release(lVar5);
  _objc_release(lVar14);
  func_0x00010c1291e0(param_2);
  puVar6 = PTR_PTR_1126aff60;
  _objc_alloc();
  puVar7 = puVar6;
  func_0x00010703ce90();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c062a00();
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3840(puVar6);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126aff68;
  _objc_alloc();
  func_0x00010c03b420();
  puVar8 = PTR_PTR_1126aff70;
  _objc_alloc(PTR_PTR_1126aff70);
  puVar9 = puVar8;
  FUN_104d7e4c4();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + lVar15);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2a8e0();
  uVar11 = *(undefined8 *)(param_2 + lVar15);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf2a8e0();
  if ((int)uVar13 != 0) {
    uStack_90 = *(undefined8 *)(param_2 + lVar15);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uStack_90;
    func_0x00010bf2a8c0();
    if ((int)uVar12 != 0) {
      func_0x00010be440e0();
    }
  }
  func_0x00010bfea420();
  func_0x00010c053560(puVar8);
  if ((int)uVar13 != 0) {
    _objc_release(uStack_90);
  }
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  uVar13 = *(undefined8 *)(param_2 + _DAT_11271224c);
  puVar9 = PTR_PTR_1126aff78;
  func_0x00010bf68ba0(PTR_PTR_1126aff78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf24140(uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  lVar15 = *(long *)(param_2 + lVar16);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar15 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_2 + lVar16));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_2 + lVar16));
  _objc_release(uVar13);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 104d6a7b8; end: 104d6a8c3; -[SCFeatureDirectorModeImpl presentDraftsPickerWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6a7b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11271232c;
  _objc_retain(param_3);
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfa22a0();
  _objc_release(lVar1);
  uVar2 = param_3;
  _objc_retainBlock();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112712330);
  *(undefined8 *)(param_1 + _DAT_112712330) = uVar2;
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar6 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar6);
  lVar1 = lVar6;
  func_0x00010c0f3d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar4,param_2,lVar1,1);
  _objc_release(lVar1);
  _objc_release(lVar6);
  puVar5 = PTR_PTR_1126aff80;
  _objc_alloc(PTR_PTR_1126aff80);
  func_0x00010c0582c0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112712250),param_2,puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 104d6a8c4; end: 104d6ab1b; -[SCFeatureDirectorModeImpl updateUIWithMusicSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6a8c4(long param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  _objc_retain(param_3);
  func_0x00010c1c9fc0(*(undefined8 *)(param_1 + _DAT_11271230c),param_2,param_3);
  lVar9 = (long)_DAT_112712334;
  lVar1 = *(long *)(param_1 + lVar9);
  if (lVar1 != 0) {
    if (param_3 == (undefined **)0x0) {
      func_0x00010c2226c0(lVar1,param_2,0);
    }
    else {
      puVar2 = PTR_PTR_1126aff88;
      _objc_alloc(PTR_PTR_1126aff88);
      ppuVar3 = param_3;
      func_0x00010c277f60(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010c278a00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c054de0(puVar2,param_2,ppuVar4);
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      ppuVar4 = param_3;
      func_0x00010beff2a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar6 != (undefined **)0x0) {
        ppuVar3 = ppuVar6;
      }
      _objc_retain(ppuVar3);
      _objc_release(ppuVar6);
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      puVar7 = PTR_PTR_1126aff90;
      _objc_alloc(PTR_PTR_1126aff90);
      func_0x00010c05a0e0();
      ppuVar4 = ppuVar3;
      func_0x00010c08fa60();
      _objc_release(ppuVar3);
      if (ppuVar4 != (undefined **)0x0) {
        puVar8 = PTR_PTR_1126aff98;
        _objc_alloc(PTR_PTR_1126aff98);
        ppuVar3 = param_3;
        func_0x00010beff2a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar3;
        func_0x00010bf93ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c020da0(puVar8,param_2,ppuVar4,1);
        _objc_release(ppuVar4);
        _objc_release(ppuVar3);
        ppuVar3 = param_3;
        func_0x00010beff2a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar3;
        func_0x00010bf93e80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b64a0(puVar8,param_2,ppuVar4);
        _objc_release(ppuVar4);
        _objc_release(ppuVar3);
        func_0x00010c195c60(puVar7,param_2,puVar8);
        _objc_release(puVar8);
      }
      func_0x00010c1c9f00(puVar2,param_2,puVar7);
      puVar8 = PTR_PTR_1126affa0;
      _objc_alloc_init(PTR_PTR_1126affa0);
      func_0x00010c1ca160();
      func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar9),param_2,puVar8);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d6ab1c; end: 104d6ab2b; -[SCFeatureDirectorModeImpl setMusicSelectionButtonHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6ab1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112712334),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 104d6ab2c; end: 104d6ab3b; -[SCFeatureDirectorModeImpl setThumbnailHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6ab2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c214130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112712324),PTR_s_setThumbnailHidden__112662a70);
  return;
}



/* Entry: 104d6ab3c; end: 104d6ab63; -[SCFeatureDirectorModeImpl onExitButtonClicked] */

void FUN_104d6ab3c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be5a0c0(param_1,param_2,0x3e);
                    /* WARNING: Could not recover jumptable at 0x00010be0c050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exitDirectorMode_1125609b0);
  return;
}



/* Entry: 104d6ab64; end: 104d6aba7; -[SCFeatureDirectorModeImpl showLimitReachedToast] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6ab64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712338);
  func_0x000104d7e524();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d6aba8; end: 104d6ac0b; -[SCFeatureDirectorModeImpl hidePreviewLoadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6aba8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271233c;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1762f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0,*(undefined8 *)(param_1 + _DAT_112712314),
               PTR_s_setCameraButtonHidden_backButton_11263b2d8,0,0,0);
    return;
  }
  return;
}



/* Entry: 104d6ac0c; end: 104d6ac63; -[SCFeatureDirectorModeImpl exposeCaptureServiceScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6ac0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112712340;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d500();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d6ac64; end: 104d6ac97; -[SCFeatureDirectorModeImpl removeCaptureServiceScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6ac64(long param_1)

{
  param_1 = param_1 + _DAT_112712340;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12b640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d6ac98; end: 104d6ac9b; -[SCFeatureDirectorModeImpl captureComponent:willCompleteWithStillImageData:discardRelatedData:captureConfiguration:] */

void FUN_104d6ac98(void)

{
  return;
}



/* Entry: 104d6ac9c; end: 104d6ac9f; -[SCFeatureDirectorModeImpl captureComponent:didCompleteWithError:] */

void FUN_104d6ac9c(void)

{
  return;
}



/* Entry: 104d6aca0; end: 104d6aca3; -[SCFeatureDirectorModeImpl captureComponent:didCompleteRecoveryWithImage:recoveryData:] */

void FUN_104d6aca0(void)

{
  return;
}



/* Entry: 104d6aca4; end: 104d6aca7; -[SCFeatureDirectorModeImpl imageCaptureDidComplete] */

void FUN_104d6aca4(void)

{
  return;
}



/* Entry: 104d6aca8; end: 104d6ad73; -[SCFeatureDirectorModeImpl videoCaptureWillStartRecordingWithCaptureConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6aca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_3);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203da0(param_1);
  _objc_release(puVar1);
  lVar2 = param_1 + _DAT_112712340;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c299640();
  _objc_release(param_3);
  _objc_release(lVar2);
  func_0x00010bea6b20(param_1);
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf82f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112712344),PTR_s_dismiss_1125be578);
  return;
}



/* Entry: 104d6ad74; end: 104d6ada7; -[SCFeatureDirectorModeImpl videoCaptureDidReachUnlimitedMovementThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6ad74(long param_1)

{
  param_1 = param_1 + _DAT_112712340;
  _objc_loadWeakRetained(param_1);
  func_0x00010c299500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d6ada8; end: 104d6ade3; -[SCFeatureDirectorModeImpl captureComponent:willFinishRecordingWithVideoSize:placeholderImage:videoFuture:] */

void FUN_104d6ada8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d6ade4; end: 104d6b003; -[SCFeatureDirectorModeImpl videoCaptureDidFinishRecordingWithRecordedVideo:captureConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6ade4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [48];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010bf311e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
  func_0x00010bea6b20(param_1);
  lVar3 = param_1;
  func_0x00010be448a0();
  if ((int)lVar3 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    _CMTimeMakeWithSeconds(&uStack_80,*(double *)(param_1 + _DAT_112712348) / 1000.0,1000);
    puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uStack_c8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_d0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_c0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_e8 = uStack_78;
    uStack_f0 = uStack_80;
    uStack_e0 = uStack_70;
    _CMTimeRangeMake(auStack_b0,&uStack_d0,&uStack_f0);
    func_0x00010c297240();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = param_4;
  func_0x00010c096b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bef0a60(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010bef0b60(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010bef0520(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010bf6f7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c074840();
  func_0x00010bdc6940(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_112712340;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2994c0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(puVar8);
  _objc_release(uVar2);
  return;
}



/* Entry: 104d6b004; end: 104d6b52f; -[SCFeatureDirectorModeImpl _addDirectorModeSegmentWithRecordedVideo:captureSessionID:lensSessionID:activeLensID:activeLensMusicTrackMetadata:activeCameraModes:detailedCameraModes:trimmedTimeRange:isGreenScreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6b004(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010c299d80(param_3);
  _CMTimeMakeWithSeconds(&uStack_98,600);
  func_0x00010bebef00(param_1);
  lVar1 = param_1;
  func_0x00010c0c45a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c29bb40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0fd9a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = uStack_90;
  uStack_b0 = uStack_98;
  uStack_a0 = uStack_88;
  lVar4 = lVar1;
  func_0x00010c0d9540();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  func_0x00010bebeec0(param_1);
  func_0x00010c208820(lVar4);
  _objc_initWeak(auStack_b8,param_1);
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_104d6b530;
  puStack_118 = &UNK_11084df80;
  _objc_copyWeak(auStack_c8,auStack_b8);
  _objc_retain(lVar4);
  lStack_110 = lVar4;
  _objc_retain(param_4);
  uStack_108 = param_4;
  _objc_retain(param_5);
  uStack_100 = param_5;
  _objc_retain(param_6);
  uStack_f8 = param_6;
  _objc_retain(param_7);
  uStack_f0 = param_7;
  _objc_retain(param_8);
  uStack_e8 = param_8;
  _objc_retain(param_9);
  uStack_e0 = param_9;
  _objc_retain(param_10);
  uStack_d8 = param_10;
  uStack_c0 = param_11;
  _objc_retain(param_3);
  ppuVar5 = &puStack_130;
  uStack_d0 = param_3;
  _objc_retainBlock();
  puVar6 = *(undefined **)(param_1 + _DAT_11271221c);
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = uStack_90;
  uStack_b0 = uStack_98;
  uStack_a0 = uStack_88;
  puVar7 = puVar6;
  func_0x00010bf46940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (puVar7 == (undefined *)0x0) {
    puVar7 = PTR_PTR_1126affb0;
    _objc_alloc();
    func_0x00010bffe1e0();
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_104d6bb28;
    puStack_168 = &UNK_11084dfb0;
    uStack_140 = uStack_90;
    uStack_148 = uStack_98;
    uStack_138 = uStack_88;
    lStack_160 = param_1;
    _objc_retain(lVar4);
    lStack_158 = lVar4;
    _objc_retain(puVar7);
    ppuVar8 = &puStack_180;
    puStack_150 = puVar7;
    _objc_retainBlock();
    lVar1 = lVar4;
    func_0x00010bfb6cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      _objc_release(puVar6);
      _objc_retain(ppuVar8);
      _objc_retain(ppuVar5);
      _objc_retain(puVar7);
      func_0x00010c285d60(lVar4);
      _objc_release(puVar7);
      _objc_release(ppuVar5);
      _objc_release(ppuVar8);
    }
    else {
      puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      (*(code *)ppuVar8[2])(ppuVar8);
      _objc_release(puVar6);
      (*(code *)ppuVar5[2])(ppuVar5,puVar7);
    }
    _objc_release(ppuVar8);
    _objc_release(puStack_150);
    _objc_release(lStack_158);
  }
  else {
    (*(code *)ppuVar5[2])(ppuVar5,puVar7);
  }
  _objc_release(puVar7);
  _objc_release(ppuVar5);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(lStack_110);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_b8);
  _objc_release(lVar4);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d6b530; end: 104d6b99f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6b530(long param_1,undefined *param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x68;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = param_2;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      func_0x00010c26f620(&uStack_b0,puVar4);
    }
    uStack_c8 = uStack_90;
    uStack_d0 = uStack_98;
    uStack_c0 = uStack_88;
    func_0x00010c1faa00(uVar14);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar4 = param_2;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf8c620();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae558;
    puVar9 = param_2;
    if (puVar7 == (undefined *)0x0) {
      func_0x00010c1585e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c26db80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar11;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c1585e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010bf8c620();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar11;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9ca0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
    }
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010c19d080(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c179260(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1bcbe0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c162820(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c162880(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c162560(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c18c600(*(undefined8 *)(param_1 + 0x20));
    if (*(long *)(param_1 + 0x58) != 0) {
      func_0x00010bdc1120(&uStack_100);
      uStack_a8 = uStack_f8;
      uStack_b0 = uStack_100;
      uStack_98 = uStack_e8;
      uStack_a0 = uStack_f0;
      uStack_88 = uStack_d8;
      uStack_90 = uStack_e0;
      func_0x00010c21a5e0(*(undefined8 *)(param_1 + 0x20));
    }
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    lVar12 = lVar2;
    func_0x00010c243320(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18e120(uVar14);
    _objc_release(lVar12);
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    lVar12 = lVar2;
    func_0x00010c243320(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf311e0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c280560(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c215a80(uVar13);
    _objc_release(uVar14);
    _objc_release(lVar12);
    lVar12 = lVar2;
    func_0x00010bebeee0();
    if (lVar12 != -1) {
      func_0x00010c28b0c0(*(undefined8 *)(param_1 + 0x20));
    }
    uVar14 = *(undefined8 *)(lVar2 + _DAT_11271234c);
    *(undefined8 *)(lVar2 + _DAT_11271234c) = 0;
    _objc_release(uVar14);
    uStack_80 = *(undefined8 *)(param_1 + 0x20);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar13);
    uVar14 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(uVar14);
    func_0x00010bdcfc80(lVar2);
    _objc_release(puVar4);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  uVar14 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0c45a0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb2c0();
  _objc_release(uVar14);
  lVar2 = *(long *)(param_2 + 0x20) + (long)_DAT_11271232c;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bfa1f00();
  _objc_release(lVar2);
  func_0x00010be73480(*(undefined8 *)(param_2 + 0x20));
  iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
  func_0x00010be448a0();
  uVar14 = *(undefined8 *)(param_2 + 0x20);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be0c050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar14,PTR_s__exitDirectorMode_1125609b0);
    return;
  }
  func_0x00010bf78ec0();
  if ((int)uVar14 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + 0x20),PTR_s__presentPreview_11257cf60);
    return;
  }
  return;
}



/* Entry: 104d6b9a0; end: 104d6bb27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6b9a0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c45a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb2c0();
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x20) + (long)_DAT_11271232c;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bfa1f00();
  _objc_release(lVar3);
  func_0x00010be73480(*(undefined8 *)(param_1 + 0x20));
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be448a0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be0c050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s__exitDirectorMode_1125609b0);
    return;
  }
  func_0x00010bf78ec0();
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__presentPreview_11257cf60);
    return;
  }
  return;
}



/* Entry: 104d6bb28; end: 104d6bcaf;  */

void FUN_104d6bb28(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [48];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126affb8;
  _objc_alloc();
  uStack_108 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_110 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar4 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_a8 = *(undefined8 *)(param_2 + 0x40);
  uStack_b0 = *(undefined8 *)(param_2 + 0x38);
  uStack_a0 = *(undefined8 *)(param_2 + 0x48);
  uStack_e0 = uStack_110;
  uStack_d8 = uStack_108;
  uStack_d0 = uVar4;
  _CMTimeRangeMake(auStack_90,&uStack_e0,&uStack_b0);
  uStack_a8 = uStack_108;
  uStack_b0 = uStack_110;
  uStack_f8 = *(undefined8 *)(param_2 + 0x40);
  uStack_100 = *(undefined8 *)(param_2 + 0x38);
  uStack_f0 = *(undefined8 *)(param_2 + 0x48);
  uStack_a0 = uVar4;
  _CMTimeRangeMake(&uStack_e0,&uStack_b0,&uStack_100);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bfb6cc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be91fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0525a0();
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010bef9e40(*(undefined8 *)(param_2 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_104d6bcb0;
  puStack_130 = puVar1;
  lStack_128 = param_2;
  puStack_120 = &stack0xfffffffffffffff0;
  (**(code **)(*(long *)(puVar2 + 0x28) + 0x10))(*(undefined8 *)(puVar2 + 0x38));
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_104d6bd50;
  puStack_148 = &UNK_11084aaa8;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(puVar2 + 0x20);
  uStack_138 = uVar3;
  _objc_retain(uVar4);
  uStack_140 = uVar4;
  func_0x000100162d98("APPSTORE",&puStack_160);
  _objc_release(uStack_140);
  _objc_release(uStack_138);
  return;
}



/* Entry: 104d6bcb0; end: 104d6bd4f;  */

void FUN_104d6bcb0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(undefined8 *)(param_1 + 0x38));
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104d6bd50;
  puStack_38 = &UNK_11084aaa8;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = uVar2;
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(uStack_28);
  return;
}



/* Entry: 104d6bd50; end: 104d6bd5f;  */

void FUN_104d6bd50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104d6bd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104d6bd60; end: 104d6be7f; -[SCFeatureDirectorModeImpl _asyncAddPlaybackLayersWithTimelineMediaSegments:isCapturedFromCamera:isGreenScreen:completion:] */

void FUN_104d6bd60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126ae790;
  uVar1 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd0e0(puVar2,param_2,0x19,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104d6be80;
  puStack_78 = &UNK_11084e040;
  uStack_70 = param_3;
  uStack_68 = param_1;
  uStack_60 = param_6;
  uStack_58 = param_4;
  uStack_57 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(puVar2,param_2,&puStack_90);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_70);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 104d6be80; end: 104d6c037;  */

void FUN_104d6be80(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bdc7e00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 0;
      _dispatch_semaphore_create();
      _objc_retain();
      func_0x00010c297260(uVar3);
      _dispatch_semaphore_wait(uVar4,0xffffffffffffffff);
      _objc_release(uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release();
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(lVar6 + 0x20));
  return;
}



/* Entry: 104d6c038; end: 104d6c03f;  */

void FUN_104d6c038(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104d6c040; end: 104d6c54b; -[SCFeatureDirectorModeImpl _addPlaybackLayerWithTimelineMediaSegment:isCapturedFromCamera:isGreenScreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6c040(ulong param_1,long param_2,undefined8 param_3,undefined *param_4,int param_5,
                  int param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = param_4;
  puVar11 = PTR_DAT_1126a4e40;
  func_0x00010010fab4(param_4,PTR_DAT_1126a4e40);
  puVar8 = param_4;
  if ((int)puVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  _objc_retain(puVar8);
  lVar2 = *(long *)(param_2 + _DAT_112712230);
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar12;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar2);
  lVar12 = lVar3;
  func_0x00010c09dea0();
  if (lVar12 == 0) {
    uVar4 = *(undefined8 *)(param_2 + _DAT_1127122bc);
    func_0x00010c293220();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    param_1 = 0xc2000000;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_104d6c54c;
    puStack_98 = &UNK_11084e070;
    _objc_retain(puVar8);
    puStack_90 = puVar8;
    uStack_88 = uVar5;
    _objc_retain(uVar5);
    func_0x00010c28a040(lVar3);
    _objc_release(uStack_88);
    _objc_release(puStack_90);
    _objc_release(uVar5);
  }
  puVar1 = PTR_PTR_1126affc0;
  puVar13 = param_4;
  func_0x00010bf0b7e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 == (undefined *)0x0) {
    func_0x00010c29a0a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_4 == (undefined *)0x0) {
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
    }
    else {
      func_0x00010c27c900(&uStack_e0,param_4);
    }
    param_1 = uStack_c8;
    func_0x00010bfe77a0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar13);
  lVar12 = (long)_DAT_1127122f0;
  uVar4 = *(undefined8 *)(param_2 + lVar12);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb24e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + lVar12);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70d80();
  _objc_release(uVar5);
  _objc_release(uVar4);
  if (param_5 == 0) {
    puVar13 = param_4;
    func_0x00010c075240();
    if ((int)puVar13 == 0) {
      puVar13 = (undefined *)0x0;
      goto LAB_104d6c390;
    }
    puVar13 = param_4;
    func_0x00010c0ed6c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar13 != (undefined *)0x0) {
      puVar13 = param_4;
      func_0x00010c0ed6c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104d6c390;
    }
    puVar6 = PTR_PTR_1126affc8;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126affd0;
    func_0x00010c0cb140(PTR_PTR_1126affd0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9e3a0(param_4);
    func_0x00010c1c52c0(puVar7);
    func_0x00010bf9e2a0(param_4);
    func_0x00010c185740(puVar7);
    func_0x00010c1c4d40(puVar6);
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
  else {
    puVar6 = PTR_PTR_1126affc8;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    if (param_6 == 0) {
      puVar13 = PTR_PTR_1126affd8;
      func_0x00010c0cb140(PTR_PTR_1126affd8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4d00(puVar6);
    }
    else {
      puVar13 = PTR_PTR_1126affd0;
      func_0x00010c0cb140(PTR_PTR_1126affd0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4d40(puVar6);
    }
    _objc_release(puVar13);
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar6);
LAB_104d6c390:
  puVar6 = PTR_PTR_1126affe0;
  func_0x00010bef70e0(PTR_PTR_1126affe0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  if (puVar8 == (undefined *)0x0) {
    param_1 = 0xc2000000;
    _objc_retain(param_4);
    _objc_retain(lVar3);
    func_0x00010bfb2660(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(param_4);
  }
  else {
    _objc_retain(puVar6);
  }
  _objc_release(puVar6);
  _objc_release(puVar13);
  _objc_release(puVar1);
  _objc_release(lVar3);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  puVar8 = puVar11;
  func_0x00010c0fee00(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179060();
  _objc_release(puVar8);
  uVar9 = *(ulong *)(param_4 + 0x28);
  if (*(long *)(param_4 + 0x20) == 0) {
    func_0x00010c29b300(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    uVar10 = (ulong)((param_1 & 0x7fffffffffffffff) == 0x7ff0000000000000);
    func_0x000108068fc0(uVar10);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfe8c00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x000108069028();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar8 = puVar11;
  func_0x00010c0fee00(puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  func_0x00010c1dd500(puVar8);
  _objc_release(puVar8);
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 104d6c54c; end: 104d6c63b;  */

void FUN_104d6c54c(ulong param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0fee00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179060();
  _objc_release(uVar1);
  uVar2 = *(ulong *)(param_2 + 0x28);
  if (*(long *)(param_2 + 0x20) == 0) {
    func_0x00010c29b300(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    uVar3 = (ulong)((param_1 & 0x7fffffffffffffff) == 0x7ff0000000000000);
    func_0x000108068fc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfe8c00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000108069028();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = param_3;
  func_0x00010c0fee00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1dd500(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d6c63c; end: 104d6c7b3;  */

void FUN_104d6c63c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  double dStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x20) == 0) {
    dStack_78 = 0.0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    dStack_90 = 0.0;
  }
  else {
    func_0x00010c27c900(&dStack_90);
  }
  uStack_a8 = uStack_88;
  dStack_b0 = dStack_90;
  uStack_a0 = uStack_80;
  _CMTimeGetSeconds(&dStack_b0);
  uStack_a8 = uStack_70;
  dStack_b0 = dStack_78;
  uStack_a0 = uStack_68;
  dVar4 = dStack_78;
  _CMTimeGetSeconds(&dStack_b0);
  dVar4 = dVar4 * 1000.0;
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  if ((long)dVar4 != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c09dea0();
    if (lVar1 != 0) {
      func_0x00010c09dea0(*(undefined8 *)(param_1 + 0x28));
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      puVar2 = PTR_PTR_1126affe8;
      func_0x00010c09e180(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28b3e0(uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
  }
  puVar2 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d6c7b4; end: 104d6c823;  */

void FUN_104d6c7b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afff0;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c209a20();
  func_0x00010c192d40(puVar1);
  func_0x00010c21a4e0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d6c824; end: 104d6caf7; -[SCFeatureDirectorModeImpl _addMediaSegments:completion:] */

void FUN_104d6c824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104d6caf8;
  puStack_98 = &UNK_11084e150;
  _objc_copyWeak(auStack_88,auStack_80);
  ppuVar2 = &puStack_b0;
  uStack_90 = param_1;
  _objc_retainBlock();
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_104d6d544;
  puStack_d0 = &UNK_11084e1e0;
  _objc_copyWeak(auStack_b8,auStack_80);
  uStack_c8 = param_1;
  _objc_retain(ppuVar2);
  ppuVar3 = &puStack_e8;
  ppuStack_c0 = ppuVar2;
  _objc_retainBlock();
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_104d6db88;
  puStack_110 = &UNK_11084e2e0;
  _objc_copyWeak(auStack_f0,auStack_80);
  ppuStack_100 = &PTR___NSConcreteGlobalBlock_11084e230;
  uStack_108 = param_1;
  _objc_retain(ppuVar3);
  ppuVar4 = &puStack_128;
  ppuStack_f8 = ppuVar3;
  _objc_retainBlock();
  puStack_150 = puVar1;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_104d6f2e4;
  puStack_138 = &UNK_11084e310;
  ppuVar5 = ppuVar4;
  _objc_retain();
  ppuStack_130 = ppuVar4;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0b8780(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_copyWeak(auStack_158,auStack_80);
  uVar7 = param_4;
  _objc_retain(param_4);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar6);
  _objc_release(uVar7);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_158);
  _objc_release(uVar6);
  _objc_release(ppuStack_130);
  _objc_release(ppuVar4);
  _objc_release(ppuStack_f8);
  _objc_release(ppuStack_100);
  _objc_destroyWeak(auStack_f0);
  _objc_release(ppuVar3);
  _objc_release(ppuStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d6caf8; end: 104d6d323;  */

void FUN_104d6caf8(long param_1,undefined *param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined *puStack_180;
  long lStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_180 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lStack_178 = param_4;
  _objc_retain(param_4);
  lStack_190 = param_5;
  _objc_retain(param_5);
  lVar1 = param_1 + 0x28;
  lStack_188 = param_1;
  _objc_loadWeakRetained();
  lStack_170 = lVar1;
  if (lVar1 != 0) {
    puVar2 = puStack_180;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar16 == (undefined *)0x0) {
      pcStack_a8 = (code *)0x0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      puStack_b8 = (undefined8 *)0x0;
      uStack_c0 = 0;
    }
    else {
      func_0x00010c26f620(&uStack_c0,puVar16);
    }
    uStack_d8 = uStack_a0;
    pcStack_e0 = pcStack_a8;
    uStack_d0 = uStack_98;
    func_0x00010c1faa00(param_3);
    _objc_release(puVar16);
    _objc_release(puVar2);
    puVar16 = puStack_180;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar16;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf8c620();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae558;
    puVar7 = puStack_180;
    if (puVar5 == (undefined *)0x0) {
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c26db80();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar9;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puStack_1a0 = puVar2;
    }
    else {
      func_0x00010c1585e0(puStack_180);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf8c620();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar9;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9ca0();
      _objc_retainAutoreleasedReturnValue();
      puStack_1a0 = puVar2;
      _objc_release(puVar6);
    }
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar16);
    func_0x00010c19d080(param_3);
    lVar1 = lStack_178;
    func_0x00010bfea5e0(lStack_178);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179260(param_3);
    uVar10 = 0xb;
    func_0x00010baee46c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162560(param_3);
    _objc_release(puVar2);
    _objc_release(uVar10);
    uVar15 = *(undefined8 *)(lStack_188 + 0x20);
    uVar10 = param_3;
    func_0x00010bef0520(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfb8c0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1a8 = uVar15;
    _objc_release(uVar10);
    puVar2 = PTR_PTR_1126afff8;
    uVar10 = param_3;
    func_0x00010bef0520(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f7c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c600(param_3);
    _objc_release(puVar2);
    _objc_release(uVar10);
    lVar11 = lStack_170;
    func_0x00010c243320(lStack_170);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c280560(param_3);
    func_0x00010c215aa0(param_3);
    _objc_release(lVar11);
    lVar11 = lStack_178;
    func_0x00010bfea600();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    FUN_104d6d324();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    lVar11 = lVar12;
    func_0x000107034780();
    _objc_retainAutoreleasedReturnValue();
    lStack_198 = lVar11;
    if (lVar11 != 0) {
      lVar11 = lStack_170;
      func_0x00010c0c45a0(lStack_170);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c280560(param_3);
      func_0x00010befa740(lVar11);
      _objc_release(lVar11);
      lVar11 = lStack_178;
      func_0x00010c27c940();
      _objc_retainAutoreleasedReturnValue();
      if (lVar11 == 0) {
        pcStack_a8 = (code *)0x0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        puStack_b8 = (undefined8 *)0x0;
        uStack_c0 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_c0,lVar11);
      }
      func_0x00010c21a5e0(param_3);
      _objc_release(lVar11);
    }
    lVar11 = lStack_170;
    func_0x00010c243320(lStack_170);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18e120(param_3);
    _objc_release(lVar11);
    lVar11 = lStack_188 + 0x28;
    _objc_loadWeakRetained();
    lVar13 = lVar11;
    func_0x00010bebeee0();
    _objc_release(lVar11);
    lVar11 = lStack_188 + 0x28;
    _objc_loadWeakRetained(lVar11);
    func_0x00010bebedc0();
    _objc_release(lVar11);
    if (lVar13 != -1) {
      func_0x00010c28b0c0(param_3);
    }
    puStack_b8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b0 = 0x3032000000;
    pcStack_a8 = FUN_104d6956c;
    uStack_a0 = 0x104d6957c;
    uStack_98 = 0;
    lVar11 = lStack_178;
    func_0x00010c0c5900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar11 != 0) {
      lVar14 = lStack_178;
      func_0x00010c0c5900(lStack_178);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0xc2000000;
      pcStack_f8 = FUN_104d6d43c;
      puStack_f0 = &UNK_11084e0f0;
      puStack_e8 = &uStack_c0;
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      uStack_128 = 0x104d6d474;
      puStack_120 = &UNK_11084e120;
      _objc_retain(param_3);
      lVar11 = lStack_178;
      uStack_118 = param_3;
      _objc_retain(lStack_178);
      lStack_110 = lVar11;
      puStack_168 = puVar2;
      uStack_160 = 0xc2000000;
      uStack_158 = 0x104d6d4dc;
      puStack_150 = &UNK_110842070;
      _objc_retain(param_3);
      uStack_148 = param_3;
      _objc_retain(lVar11);
      lStack_140 = lVar11;
      func_0x00010c0bcda0(lVar14);
      _objc_release(lVar14);
      _objc_release(lStack_140);
      _objc_release(uStack_148);
      _objc_release(lStack_110);
      _objc_release(uStack_118);
    }
    puVar2 = PTR_PTR_1126afff8;
    lVar11 = lStack_170;
    func_0x00010c243320(lStack_170);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c270260(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    func_0x00010be5a680(*(undefined8 *)(lStack_188 + 0x20));
    if (lVar13 == -1) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar16 = PTR_PTR_1126b0000;
      _objc_alloc();
      func_0x00010c043a40();
    }
    puVar3 = PTR_PTR_1126afff8;
    lVar11 = lStack_170;
    func_0x00010c243320(lStack_170);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lStack_170;
    func_0x00010bf7f5c0();
    puStack_1c0 = puVar16;
    lStack_1b8 = lVar13;
    func_0x00010c158240(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    func_0x00010c1ab140(puVar3);
    func_0x00010be5a680(lStack_170);
    func_0x00010be73480(lStack_170);
    func_0x00010bedf5c0(lStack_170);
    func_0x00010be8f5c0(lStack_170);
    (**(code **)(lStack_190 + 0x10))();
    _objc_release(puVar3);
    _objc_release(puVar16);
    _objc_release(puVar2);
    __Block_object_dispose(&uStack_c0,8);
    _objc_release(uStack_98);
    _objc_release(lStack_198);
    _objc_release(lVar12);
    _objc_release(uStack_1a8);
    _objc_release(lVar1);
    _objc_release(puStack_1a0);
  }
  _objc_release(lStack_170);
  _objc_release(lStack_190);
  _objc_release(lStack_178);
  _objc_release(param_3);
  puVar2 = puStack_180;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_c0,8);
  puVar16 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_1c8 = FUN_104d6d324;
  uStack_1e0 = param_3;
  puStack_1d8 = puVar2;
  puStack_1d0 = &stack0xfffffffffffffff0;
  _objc_retain();
  puStack_208 = &uStack_210;
  uStack_210 = 0;
  uStack_200 = 0x3032000000;
  pcStack_1f8 = FUN_104d6956c;
  uStack_1f0 = 0x104d6957c;
  uStack_1e8 = 0;
  func_0x00010c0be500(puVar16);
  uVar10 = puStack_208[5];
  _objc_retain(uVar10);
  __Block_object_dispose(&uStack_210,8);
  _objc_release(uStack_1e8);
  _objc_release(puVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
  return;
}



/* Entry: 104d6d324; end: 104d6d43b;  */

void FUN_104d6d324(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104d6956c;
  uStack_30 = 0x104d6957c;
  uStack_28 = 0;
  func_0x00010c0be500(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d6d43c; end: 104d6d543;  */

void FUN_104d6d43c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d6d544; end: 104d6d87f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6d544(long param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    puVar3 = *(undefined **)(lVar2 + _DAT_11271221c);
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = param_3[1];
    uStack_a0 = *param_3;
    uStack_90 = param_3[2];
    puVar4 = puVar3;
    func_0x00010bf46940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126affb0;
      _objc_alloc();
      func_0x00010bffe1e0();
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_104d6d880;
      puStack_d8 = &UNK_11084dfb0;
      uStack_b0 = param_3[1];
      uVar8 = *param_3;
      uStack_a8 = param_3[2];
      lStack_d0 = lVar2;
      uStack_b8 = uVar8;
      _objc_retain(param_2);
      lStack_c8 = param_2;
      _objc_retain(puVar4);
      ppuVar5 = &puStack_f0;
      puStack_c0 = puVar4;
      _objc_retainBlock();
      puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      _objc_release(puVar3);
      puVar3 = PTR_DAT_1126a4e48;
      _objc_retain(param_2);
      lVar6 = param_2;
      func_0x00010010fab4(param_2,puVar3);
      lVar1 = param_2;
      if ((int)lVar6 == 0) {
        lVar1 = 0;
      }
      _objc_retain(lVar1);
      _objc_release(param_2);
      puVar3 = PTR_DAT_1126a4e40;
      _objc_retain(param_2);
      lVar7 = param_2;
      func_0x00010010fab4(param_2,puVar3);
      lVar6 = param_2;
      if ((int)lVar7 == 0) {
        lVar6 = 0;
      }
      _objc_retain(lVar6);
      _objc_release(param_2);
      if (lVar1 == 0) {
        if (lVar6 != 0) {
          (*(code *)ppuVar5[2])(uVar8,ppuVar5);
          (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
                    (*(long *)(param_1 + 0x28),puVar4,param_2,param_4,param_5);
        }
      }
      else {
        _objc_retain(ppuVar5);
        uVar8 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar8);
        _objc_retain(puVar4);
        _objc_retain(param_2);
        _objc_retain(param_4);
        _objc_retain(param_5);
        func_0x00010c285d60(param_2);
        _objc_release(param_5);
        _objc_release(param_4);
        _objc_release(param_2);
        _objc_release(puVar4);
        _objc_release(uVar8);
        _objc_release(ppuVar5);
      }
      _objc_release(lVar6);
      _objc_release(lVar1);
      _objc_release(ppuVar5);
      _objc_release(puStack_c0);
      _objc_release(lStack_c8);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
                (*(long *)(param_1 + 0x28),puVar4,param_2,param_4,param_5);
    }
    _objc_release(puVar4);
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 104d6d880; end: 104d6da07;  */

void FUN_104d6d880(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [48];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126affb8;
  _objc_alloc();
  uStack_108 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_110 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar4 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_a8 = *(undefined8 *)(param_2 + 0x40);
  uStack_b0 = *(undefined8 *)(param_2 + 0x38);
  uStack_a0 = *(undefined8 *)(param_2 + 0x48);
  uStack_e0 = uStack_110;
  uStack_d8 = uStack_108;
  uStack_d0 = uVar4;
  _CMTimeRangeMake(auStack_90,&uStack_e0,&uStack_b0);
  uStack_a8 = uStack_108;
  uStack_b0 = uStack_110;
  uStack_f8 = *(undefined8 *)(param_2 + 0x40);
  uStack_100 = *(undefined8 *)(param_2 + 0x38);
  uStack_f0 = *(undefined8 *)(param_2 + 0x48);
  uStack_a0 = uVar4;
  _CMTimeRangeMake(&uStack_e0,&uStack_b0,&uStack_100);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bfb6cc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be91fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0525a0();
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010bef9e40(*(undefined8 *)(param_2 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_104d6da08;
  puStack_130 = puVar1;
  lStack_128 = param_2;
  puStack_120 = &stack0xfffffffffffffff0;
  (**(code **)(*(long *)(puVar2 + 0x38) + 0x10))(*(undefined8 *)(puVar2 + 0x50));
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_104d6daf0;
  puStack_160 = &UNK_11084e180;
  uVar4 = *(undefined8 *)(puVar2 + 0x40);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  uStack_140 = uVar4;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(puVar2 + 0x28);
  uStack_158 = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  uStack_150 = uVar4;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(puVar2 + 0x48);
  uStack_148 = uVar3;
  _objc_retain(uVar4);
  uStack_138 = uVar4;
  func_0x000100162d98("APPSTORE",&puStack_178);
  _objc_release(uStack_138);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(uStack_158);
  _objc_release(uStack_140);
  return;
}



/* Entry: 104d6da08; end: 104d6daef;  */

void FUN_104d6da08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(undefined8 *)(param_1 + 0x50));
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104d6daf0;
  puStack_50 = &UNK_11084e180;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar2;
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_28);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_30);
  return;
}



/* Entry: 104d6daf0; end: 104d6db07;  */

void FUN_104d6daf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104d6db04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 104d6db08; end: 104d6db6b;  */

void FUN_104d6db08(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
  return;
}



/* Entry: 104d6db6c; end: 104d6db87;  */

void FUN_104d6db6c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_description_code_1125c3e40,
             &PTR____CFConstantStringClassReference_110db1758,param_2,0);
  return;
}



/* Entry: 104d6db88; end: 104d6e88f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6db88(long param_1,undefined *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined8 *puStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  code *pcStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  code *pcStack_2c0;
  undefined *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  code *pcStack_290;
  undefined *puStack_288;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  char *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  _objc_retain(param_2);
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar3 == 0) {
    lVar6 = *(long *)(param_1 + 0x28);
    (**(code **)(lVar6 + 0x10))(lVar6,&PTR____CFConstantStringClassReference_110db1778);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126ae558;
    func_0x00010bfe9c80(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_104d6e7b0;
  }
  puVar10 = param_2;
  func_0x00010bfea5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8f5c0(lVar3);
  _objc_release(puVar10);
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_104d6956c;
  uStack_90 = 0x104d6957c;
  lStack_88 = 0;
  puStack_e0 = &uStack_e8;
  uStack_e8 = 0;
  uStack_d8 = 0x3810000000;
  uStack_c0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_c8 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_b8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  pcStack_d0 = "";
  puVar4 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar10 = param_2;
  func_0x00010bfea600();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar10;
  FUN_104d6d324();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar10 = param_2;
  func_0x00010c0c5900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar10 == (undefined *)0x0) {
LAB_104d6e60c:
    puVar9 = puVar5;
    func_0x000107034780();
    _objc_retainAutoreleasedReturnValue();
    if (puVar9 == (undefined *)0x0) {
      puVar11 = *(undefined **)(param_1 + 0x28);
      (**(code **)(puVar11 + 0x10))(puVar11,&PTR____CFConstantStringClassReference_110db17f8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126ae558;
      func_0x00010bfe9c80(PTR_PTR_1126ae558);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar11 = PTR_PTR_1126b0018;
      _objc_alloc(PTR_PTR_1126b0018);
      uVar12 = *(undefined8 *)(lVar3 + _DAT_1127122a0);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c047840(puVar11);
      _objc_release(uVar12);
      _objc_retain(param_2);
      _objc_retain(puVar9);
      uVar12 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar12);
      _objc_retain(puVar4);
      func_0x00010c13e880(puVar11);
      puVar10 = puVar4;
      func_0x00010bfbc3e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(uVar12);
      _objc_release(puVar9);
      _objc_release(param_2);
    }
    _objc_release(puVar11);
    _objc_release(puVar9);
  }
  else {
    uStack_118 = 0;
    uStack_108 = 0x3032000000;
    pcStack_100 = FUN_104d6956c;
    uStack_f8 = 0x104d6957c;
    uStack_f0 = 0;
    uStack_148 = 0;
    uStack_138 = 0x3032000000;
    pcStack_130 = FUN_104d6956c;
    uStack_128 = 0x104d6957c;
    uStack_120 = 0;
    uStack_168 = 0;
    uStack_158 = 0x2020000000;
    uStack_150 = 0;
    uStack_198 = 0;
    uStack_188 = 0x3032000000;
    pcStack_180 = FUN_104d6956c;
    uStack_178 = 0x104d6957c;
    uStack_170 = 0;
    uStack_1c8 = 0;
    uStack_1b8 = 0x3032000000;
    pcStack_1b0 = FUN_104d6956c;
    uStack_1a8 = 0x104d6957c;
    uStack_1a0 = 0;
    uStack_1e8 = 0;
    uStack_1d8 = 0x2020000000;
    uStack_1d0 = 0;
    uStack_208 = 0;
    uStack_1f8 = 0x2020000000;
    uStack_1f0 = 0;
    puVar10 = param_2;
    puStack_200 = &uStack_208;
    puStack_1e0 = &uStack_1e8;
    puStack_1c0 = &uStack_1c8;
    puStack_190 = &uStack_198;
    puStack_160 = &uStack_168;
    puStack_140 = &uStack_148;
    puStack_110 = &uStack_118;
    func_0x00010c0c5900(param_2);
    _objc_retainAutoreleasedReturnValue();
    puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_240 = 0xc2000000;
    pcStack_238 = FUN_104d6e890;
    puStack_230 = &UNK_11084e250;
    puStack_278 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_270 = 0xc2000000;
    pcStack_268 = FUN_104d6e9f4;
    puStack_260 = &UNK_11084e280;
    puStack_2a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_298 = 0xc2000000;
    pcStack_290 = FUN_104d6ea68;
    puStack_288 = &UNK_110842b58;
    puStack_2d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2c8 = 0xc2000000;
    pcStack_2c0 = FUN_104d6ea7c;
    puStack_2b8 = &UNK_11084df30;
    puStack_2b0 = &uStack_148;
    puStack_2a8 = &uStack_208;
    puStack_280 = &uStack_1e8;
    puStack_258 = &uStack_1c8;
    puStack_250 = &uStack_148;
    puStack_228 = &uStack_118;
    puStack_220 = &uStack_148;
    puStack_218 = &uStack_168;
    puStack_210 = &uStack_198;
    func_0x00010c0bcda0();
    _objc_release(puVar10);
    if (puStack_110[5] == 0) {
      if (puStack_1c0[5] != 0) {
        puVar10 = param_2;
        func_0x00010c27c940();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar10 == (undefined *)0x0) {
          func_0x00010c299e20(PTR_PTR_1126b0010);
          _CMTimeMakeWithSeconds(&uStack_348,600);
          puVar2 = puStack_e0;
          puVar1 = puStack_e0 + 4;
          puStack_e0[5] = uStack_340;
          *puVar1 = uStack_348;
          puVar2[6] = uStack_338;
        }
        else {
          puVar10 = param_2;
          func_0x00010c27c940();
          _objc_retainAutoreleasedReturnValue();
          if (puVar10 == (undefined *)0x0) {
            uStack_2e8 = 0;
            uStack_2f0 = 0;
            uStack_2d8 = 0;
            uStack_2e0 = 0;
            uStack_2f8 = 0;
            uStack_300 = 0;
          }
          else {
            func_0x00010bdc1120(&uStack_300,puVar10);
          }
          puStack_e0[5] = uStack_2e0;
          puStack_e0[4] = uStack_2e8;
          puStack_e0[6] = uStack_2d8;
          _objc_release(puVar10);
        }
        lVar6 = lVar3;
        func_0x00010c0c45a0();
        _objc_retainAutoreleasedReturnValue();
        uStack_2f8 = puStack_e0[5];
        uStack_300 = puStack_e0[4];
        uStack_2f0 = puStack_e0[6];
        lVar7 = lVar6;
        func_0x00010c0d9540();
        uVar12 = puStack_a8[5];
        puStack_a8[5] = lVar7;
        _objc_release(uVar12);
        _objc_release(lVar6);
        func_0x00010bebeec0(*(undefined8 *)(param_1 + 0x20));
        func_0x00010c208820(puStack_a8[5]);
        func_0x00010c1ea000(puStack_a8[5]);
        puVar1 = puStack_e0;
        lVar6 = *(long *)(param_1 + 0x30);
        uVar12 = puStack_a8[5];
        puStack_378 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_370 = 0xc2000000;
        uStack_368 = 0x104d6eaf4;
        puStack_360 = &UNK_11084b9d0;
        _objc_retain(puVar4);
        puStack_350 = &uStack_b0;
        uStack_2f8 = puVar1[5];
        uStack_300 = puVar1[4];
        uStack_2f0 = puVar1[6];
        puStack_358 = puVar4;
        (**(code **)(lVar6 + 0x10))(lVar6,uVar12,&uStack_300,param_2,&puStack_378);
        puVar10 = puVar4;
        func_0x00010bfbc3e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puStack_358;
        goto LAB_104d6e58c;
      }
      if (*(char *)(puStack_200 + 3) == '\x01') {
        func_0x00010c299e20(PTR_PTR_1126b0010);
        _CMTimeMakeWithSeconds(&uStack_390,1000);
        puVar2 = puStack_e0;
        puVar1 = puStack_e0 + 4;
        puStack_e0[5] = uStack_388;
        *puVar1 = uStack_390;
        puVar2[6] = uStack_380;
        lVar6 = lVar3;
        func_0x00010c0c45a0();
        _objc_retainAutoreleasedReturnValue();
        uStack_2f8 = puStack_e0[5];
        uStack_300 = puStack_e0[4];
        uStack_2f0 = puStack_e0[6];
        lVar7 = lVar6;
        func_0x00010c0d9540();
        uVar12 = puStack_a8[5];
        puStack_a8[5] = lVar7;
        _objc_release(uVar12);
        _objc_release(lVar6);
        func_0x00010bebeec0(*(undefined8 *)(param_1 + 0x20));
        func_0x00010c208820(puStack_a8[5]);
        puVar1 = puStack_e0;
        lVar6 = *(long *)(param_1 + 0x30);
        uVar12 = puStack_a8[5];
        puStack_3c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_3b8 = 0xc2000000;
        uStack_3b0 = 0x104d6eb08;
        puStack_3a8 = &UNK_11084b9d0;
        _objc_retain(puVar4);
        puStack_398 = &uStack_b0;
        uStack_2f8 = puVar1[5];
        uStack_300 = puVar1[4];
        uStack_2f0 = puVar1[6];
        puStack_3a0 = puVar4;
        (**(code **)(lVar6 + 0x10))(lVar6,uVar12,&uStack_300,param_2,&puStack_3c0);
        puVar10 = puVar4;
        func_0x00010bfbc3e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puStack_3a0;
        goto LAB_104d6e58c;
      }
      bVar13 = true;
    }
    else {
      puVar10 = param_2;
      func_0x00010c27c940();
      _objc_retainAutoreleasedReturnValue();
      if (puVar10 == (undefined *)0x0) {
        uStack_2e8 = 0;
        uStack_2f0 = 0;
        uStack_2d8 = 0;
        uStack_2e0 = 0;
        uStack_2f8 = 0;
        uStack_300 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_300,puVar10);
      }
      puStack_e0[5] = uStack_2e0;
      puStack_e0[4] = uStack_2e8;
      puStack_e0[6] = uStack_2d8;
      _objc_release(puVar10);
      func_0x00010bebef00(lVar3);
      lVar6 = puStack_110[5];
      func_0x00010c0c6c20();
      if (lVar6 == 1) {
        puVar9 = puVar5;
        func_0x000107034520(puVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar3;
        func_0x00010c0c45a0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c0d8aa0();
        uVar12 = puStack_a8[5];
        puStack_a8[5] = lVar7;
        _objc_release(uVar12);
        _objc_release(lVar6);
        func_0x00010bebeec0(*(undefined8 *)(param_1 + 0x20));
        func_0x00010c208820(puStack_a8[5]);
        puVar10 = (undefined *)puStack_110[5];
        func_0x00010bf5a700(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        func_0x00010c199660(puStack_a8[5]);
LAB_104d6e200:
        _objc_release(puVar10);
        _objc_release(puVar9);
      }
      else if (lVar6 == 2) {
        lVar6 = lVar3;
        func_0x00010c0c45a0();
        _objc_retainAutoreleasedReturnValue();
        uStack_2f8 = puStack_e0[5];
        uStack_300 = puStack_e0[4];
        uStack_2f0 = puStack_e0[6];
        lVar7 = lVar6;
        func_0x00010c0d9540();
        uVar12 = puStack_a8[5];
        puStack_a8[5] = lVar7;
        _objc_release(uVar12);
        _objc_release(lVar6);
        uVar12 = puStack_110[5];
        func_0x00010bf5a700(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        func_0x00010c199660(puStack_a8[5]);
        _objc_release(uVar12);
        func_0x00010bebeec0(*(undefined8 *)(param_1 + 0x20));
        func_0x00010c208820(puStack_a8[5]);
        lVar7 = puStack_190[5];
        func_0x00010c0664c0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar7;
        func_0x00010c0946a0();
        _objc_release(lVar7);
        puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (lVar6 != 0) {
          uVar8 = puStack_190[5];
          func_0x00010c0664c0();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar8;
          func_0x00010c094680();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c296de0();
          func_0x00010c14de00(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c162820(puStack_a8[5]);
          _objc_release(puVar10);
          _objc_release(uVar12);
          _objc_release(uVar8);
        }
        lVar7 = puStack_190[5];
        func_0x00010c0664c0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar7;
        func_0x00010c0d3a20();
        _objc_release(lVar7);
        puVar10 = PTR_PTR_1126b0008;
        if (lVar6 != 0) {
          puVar9 = (undefined *)puStack_190[5];
          func_0x00010c0664c0(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d3a20();
          func_0x00010c0d3780(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16f3c0(puStack_a8[5]);
          goto LAB_104d6e200;
        }
      }
      puVar1 = puStack_e0;
      lVar6 = *(long *)(param_1 + 0x30);
      uVar12 = puStack_a8[5];
      puStack_330 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_328 = 0xc2000000;
      pcStack_320 = FUN_104d6eae0;
      puStack_318 = &UNK_11084b9d0;
      _objc_retain(puVar4);
      puStack_308 = &uStack_b0;
      uStack_2f8 = puVar1[5];
      uStack_300 = puVar1[4];
      uStack_2f0 = puVar1[6];
      puStack_310 = puVar4;
      (**(code **)(lVar6 + 0x10))(lVar6,uVar12,&uStack_300,param_2,&puStack_330);
      puVar10 = puVar4;
      func_0x00010bfbc3e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puStack_310;
LAB_104d6e58c:
      _objc_release(puVar9);
      bVar13 = false;
    }
    __Block_object_dispose(&uStack_208,8);
    __Block_object_dispose(&uStack_1e8,8);
    __Block_object_dispose(&uStack_1c8,8);
    _objc_release(uStack_1a0);
    __Block_object_dispose(&uStack_198,8);
    _objc_release(uStack_170);
    __Block_object_dispose(&uStack_168,8);
    __Block_object_dispose(&uStack_148,8);
    _objc_release(uStack_120);
    __Block_object_dispose(&uStack_118,8);
    _objc_release(uStack_f0);
    if (bVar13) goto LAB_104d6e60c;
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  __Block_object_dispose(&uStack_e8,8);
  __Block_object_dispose(&uStack_b0,8);
  lVar6 = lStack_88;
LAB_104d6e7b0:
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 104d6e890; end: 104d6e94f;  */

void FUN_104d6e890(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = param_4;
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d6e950; end: 104d6e9f3;  */

void FUN_104d6e950(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  return;
}



/* Entry: 104d6e9f4; end: 104d6ea67;  */

void FUN_104d6e9f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d6ea68; end: 104d6ea7b;  */

void FUN_104d6ea68(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104d6ea7c; end: 104d6eadf;  */

void FUN_104d6ea7c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d6eae0; end: 104d6eb1b;  */

void FUN_104d6eae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  return;
}



/* Entry: 104d6eb1c; end: 104d6f13f;  */

void FUN_104d6eb1c(long param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  dVar15 = (double)func_0x00010c1582c0(param_2);
  _CMTimeMakeWithSeconds(&uStack_110,dVar15 / 1000.0,1000);
  lVar8 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  *(undefined8 *)(lVar8 + 0x28) = uStack_108;
  *(undefined8 *)(lVar8 + 0x20) = uStack_110;
  *(undefined8 *)(lVar8 + 0x30) = uStack_100;
  lVar8 = param_2;
  func_0x00010c0c6c20();
  puVar10 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar3 = lVar8;
  func_0x0001000f73a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar3;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lStack_1f0 = lVar3;
  lStack_1e8 = lVar14;
  if ((int)lVar8 == 2) {
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(lVar14);
    _objc_release(lVar3);
    lVar8 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    uStack_140 = *(undefined8 *)(lVar8 + 0x20);
    uStack_138 = *(undefined8 *)(lVar8 + 0x28);
    uStack_130 = *(undefined8 *)(lVar8 + 0x30);
    dVar15 = (double)_CMTimeGetSeconds(&uStack_140);
    if (dVar15 <= 0.0) {
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x00010c27c940();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_140,lVar3);
      }
      lVar8 = *(long *)(*(long *)(param_1 + 0x50) + 8);
      *(undefined8 *)(lVar8 + 0x30) = uStack_118;
      *(undefined8 *)(lVar8 + 0x28) = uStack_120;
      *(undefined8 *)(lVar8 + 0x20) = uStack_128;
      goto LAB_104d6ecec;
    }
  }
  else {
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(lVar14);
LAB_104d6ecec:
    _objc_release(lVar3);
  }
  lVar8 = param_2;
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e060();
  _objc_release(lVar8);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bfd84e0();
  if (iVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar3;
    func_0x00010bfe5ea0();
    _objc_release(lVar3);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (0 < lVar8) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c08fb40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe5ea0();
      func_0x00010c0df7c0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar5;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(uVar4);
      goto LAB_104d6edb4;
    }
  }
  puVar12 = (undefined *)0x0;
LAB_104d6edb4:
  func_0x00010bebef00(*(undefined8 *)(param_1 + 0x30));
  lVar8 = param_2;
  func_0x00010c0c6c20();
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puStack_1d8 = puVar12;
  puStack_1d0 = puVar10;
  if ((int)lVar8 == 2) {
    puVar6 = puVar10;
    func_0x00010c0f5800(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d020(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0c45a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar4;
    func_0x00010c0d8aa0();
    lVar8 = *(long *)(*(long *)(param_1 + 0x58) + 8);
    uVar9 = *(undefined8 *)(lVar8 + 0x28);
    *(undefined8 *)(lVar8 + 0x28) = uVar13;
    _objc_release(uVar9);
  }
  else {
    puVar5 = *(undefined **)(param_1 + 0x30);
    func_0x00010c0c45a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    uStack_140 = *(undefined8 *)(lVar8 + 0x20);
    uStack_138 = *(undefined8 *)(lVar8 + 0x28);
    uStack_130 = *(undefined8 *)(lVar8 + 0x30);
    puVar6 = puVar5;
    func_0x00010c0d9540();
    lVar8 = *(long *)(*(long *)(param_1 + 0x58) + 8);
    uVar4 = *(undefined8 *)(lVar8 + 0x28);
    *(undefined **)(lVar8 + 0x28) = puVar6;
  }
  _objc_release(uVar4);
  _objc_release(puVar5);
  func_0x00010bebeec0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c208820(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28));
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  puStack_170 = (undefined8 *)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  puVar7 = *(undefined **)(param_1 + 0x28);
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar6;
  func_0x00010bf52a60();
  if (puVar7 != (undefined *)0x0) {
    puVar12 = (undefined *)*puStack_170;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_170 != puVar12) {
          _objc_enumerationMutation(puVar6);
        }
        lVar3 = *(long *)(lStack_178 + (long)puVar10 * 8);
        lVar8 = lVar3;
        func_0x00010c08c3a0();
        if ((int)lVar8 == 1) {
          lVar8 = lVar3;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar8;
          func_0x00010bf0b760();
          _objc_release(lVar8);
          if ((int)lVar14 == 5) {
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar3;
            func_0x00010853cd64();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar3);
            lVar3 = lVar8;
            func_0x00010bf529e0();
            if (lVar3 != 0) {
              func_0x00010befa160(puVar5);
            }
            _objc_release(lVar8);
          }
        }
        puVar10 = puVar10 + 1;
      } while (puVar7 != puVar10);
      puVar7 = puVar6;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined *)0x0);
  }
  _objc_release(puVar6);
  puVar6 = puVar5;
  func_0x00010bf529e0();
  if (puVar6 != (undefined *)0x0) {
    func_0x00010c1d6660(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28));
  }
  puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c0 = 0xc2000000;
  pcStack_1b8 = FUN_104d6f140;
  puStack_1b0 = &UNK_11084be40;
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar4);
  auVar16 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x50),*(undefined1 (*) [16])(param_1 + 0x50),8
                     ,1);
  uStack_188 = auVar16._8_8_;
  uStack_190 = auVar16._0_8_;
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  uStack_198 = uVar4;
  _objc_retain(uVar13);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_1a8 = uVar13;
  _objc_retain(uVar4);
  uStack_1a0 = uVar4;
  func_0x000100162d98("APPSTORE",&puStack_1c8);
  _objc_release(uStack_1a0);
  _objc_release(uStack_1a8);
  _objc_release(uStack_198);
  _objc_release(puVar5);
  _objc_release(puStack_1d8);
  _objc_release(puStack_1d0);
  lVar8 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_104d6f140;
  lVar3 = *(long *)(lVar8 + 0x30);
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x38) + 8) + 0x28);
  lVar14 = *(long *)(*(long *)(lVar8 + 0x40) + 8);
  puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_258 = 0xc2000000;
  pcStack_250 = FUN_104d6f1fc;
  puStack_248 = &UNK_11084b9d0;
  uVar9 = *(undefined8 *)(lVar8 + 0x20);
  uVar1 = *(undefined8 *)(lVar8 + 0x28);
  uStack_230 = uVar13;
  puStack_228 = puVar5;
  puStack_220 = puVar12;
  puStack_218 = puVar10;
  uStack_210 = uVar4;
  lStack_208 = param_2;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_retain(uVar1);
  uStack_238 = *(undefined8 *)(lVar8 + 0x38);
  uStack_280 = *(undefined8 *)(lVar14 + 0x20);
  uStack_278 = *(undefined8 *)(lVar14 + 0x28);
  uStack_270 = *(undefined8 *)(lVar14 + 0x30);
  uStack_240 = uVar1;
  (**(code **)(lVar3 + 0x10))(lVar3,uVar11,&uStack_280,uVar9,&puStack_260);
  _objc_release(uStack_240);
  return;
}



/* Entry: 104d6f140; end: 104d6f1fb;  */

void FUN_104d6f140(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104d6f1fc;
  puStack_58 = &UNK_11084b9d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uStack_48 = *(undefined8 *)(param_1 + 0x38);
  uStack_88 = *(undefined8 *)(lVar5 + 0x28);
  uStack_90 = *(undefined8 *)(lVar5 + 0x20);
  uStack_80 = *(undefined8 *)(lVar5 + 0x30);
  uStack_50 = uVar3;
  (**(code **)(lVar1 + 0x10))(lVar1,uVar4,&uStack_90,uVar2,&puStack_70);
  _objc_release(uStack_50);
  return;
}



/* Entry: 104d6f1fc; end: 104d6f20f;  */

void FUN_104d6f1fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  return;
}



/* Entry: 104d6f210; end: 104d6f2e3;  */

void FUN_104d6f210(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  return;
}



/* Entry: 104d6f2e4; end: 104d6f2ef;  */

void FUN_104d6f2e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104d6f2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104d6f2f0; end: 104d6f43f;  */

void FUN_104d6f2f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010bdcfc80(lVar1);
    _objc_release(uVar2);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 104d6f440; end: 104d6f527; -[SCFeatureDirectorModeImpl _detailedCameraModesInfoFromActiveCameraModes:] */

void FUN_104d6f440(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0xb;
    func_0x00010baee46c(0xb);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf4b900(param_3,param_2,uVar2);
    _objc_release(uVar2);
    if ((int)lVar1 != 0) {
      func_0x00010bf6f780(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = 0xb;
      func_0x00010baee46c(0xb);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_2,param_1,uVar2);
      _objc_release(uVar2);
      _objc_release(param_1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d6f528; end: 104d6f6b7; -[SCFeatureDirectorModeImpl _rescaledThumbnailFutureWithImage:scale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6f528(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ae558;
  if (param_4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_opt_new(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x00010bfe9ca0(puVar2,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = (long)_DAT_112712350;
    if (*(long *)(param_2 + lVar4) == 0) {
      puVar2 = PTR_PTR_1126ae790;
      _objc_alloc();
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                          "com.snapchat.camera.director-mode-image-rendering");
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c021520(puVar2,param_3,puVar1,0x19,0,2);
      uVar3 = *(undefined8 *)(param_2 + lVar4);
      *(undefined **)(param_2 + lVar4) = puVar2;
      _objc_release(uVar3);
      _objc_release(puVar1);
    }
    puVar1 = PTR_PTR_1126ae560;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104d6f6b8;
    puStack_70 = &UNK_110844b80;
    _objc_retain(param_4);
    lStack_68 = param_4;
    puStack_60 = puVar1;
    uStack_58 = param_1;
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar3,param_3,&puStack_88);
    puVar2 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_60);
    _objc_release(lStack_68);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d6f6b8; end: 104d6f73f;  */

void FUN_104d6f6b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010c14e6c0(0x4041800000000000,0x404f000000000000,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_opt_new(PTR__OBJC_CLASS___UIImage_1126aea68);
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104d6f740; end: 104d6f7b3; -[SCFeatureDirectorModeImpl videoCaptureDidAbortRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6f740(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bea6b20(param_1,param_2,0);
  lVar1 = param_1 + _DAT_11271232c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfa1fa0();
  _objc_release(lVar1);
  func_0x00010bedf5c0(param_1);
  param_1 = param_1 + _DAT_112712340;
  _objc_loadWeakRetained(param_1);
  func_0x00010c299440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d6f7b4; end: 104d6f7f3; -[SCFeatureDirectorModeImpl videoCaptureDidFailRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6f7b4(long param_1,undefined8 param_2)

{
  func_0x00010bea6b20(param_1,param_2,0);
  param_1 = param_1 + _DAT_112712340;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2994a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d6f7f4; end: 104d6f833; -[SCFeatureDirectorModeImpl videoCaptureDidCancelRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6f7f4(long param_1,undefined8 param_2)

{
  func_0x00010bea6b20(param_1,param_2,0);
  param_1 = param_1 + _DAT_112712340;
  _objc_loadWeakRetained(param_1);
  func_0x00010c299460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d6f834; end: 104d6f88b; -[SCFeatureDirectorModeImpl videoCaptureRecordingTooShort] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6f834(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bea6b20(param_1,param_2,0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712218);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beec5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d6f88c; end: 104d6f8bf; -[SCFeatureDirectorModeImpl videoCaptureDidReachEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6f88c(long param_1)

{
  param_1 = param_1 + _DAT_112712340;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2994e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d6f8c0; end: 104d6f8ff; -[SCFeatureDirectorModeImpl videoCaptureDidStopRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6f8c0(long param_1,undefined8 param_2)

{
  func_0x00010bea6b20(param_1,param_2,0);
  param_1 = param_1 + _DAT_112712340;
  _objc_loadWeakRetained(param_1);
  func_0x00010c299520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d6f900; end: 104d6f96f; -[SCFeatureDirectorModeImpl videoCaptureDidCompleteRecoveryWithRecoveryData:videoFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6f900(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112712340;
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c299480();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d6f970; end: 104d6f9af; -[SCFeatureDirectorModeImpl videoCaptureShouldPrepareRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104d6f970(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112712340;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2995e0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 104d6f9b0; end: 104d6f9ef; -[SCFeatureDirectorModeImpl videoCaptureShouldStartRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104d6f9b0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112712340;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c299600();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 104d6f9f0; end: 104d6fa2f; -[SCFeatureDirectorModeImpl videoCaptureShouldEndRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104d6f9f0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112712340;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2995c0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 104d6fa30; end: 104d6fa6f; -[SCFeatureDirectorModeImpl videoCaptureHasStartedRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104d6fa30(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112712340;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c299560();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 104d6fa70; end: 104d6faab; -[SCFeatureDirectorModeImpl setRecordingState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6fa70(long param_1)

{
  param_1 = param_1 + _DAT_112712340;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1e9000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d6faac; end: 104d6fb63; -[SCFeatureDirectorModeImpl featureDirectorModeThumbnails:didUpdateRuntimeOverlapContribution:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6faac(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  lVar3 = (long)_DAT_112712314;
  lVar1 = *(long *)(param_2 + lVar3);
  dVar4 = param_1;
  func_0x00010bf2b180();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c0f0780();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_2 + lVar3);
    _objc_release();
    if (lVar2 == lVar3) {
      *(double *)(param_2 + _DAT_112712354) = param_1;
      func_0x00010bdd54e0(param_2);
      dVar4 = -dVar4;
      func_0x00010c181140(dVar4,*(undefined8 *)(param_2 + _DAT_112712358));
      func_0x00010bdd54e0(param_2);
      func_0x00010c181140(-dVar4,*(undefined8 *)(param_2 + _DAT_11271235c));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d6fb64; end: 104d6fbab; -[SCFeatureDirectorModeImpl featureDirectorModeThumbnailsDidTapAddMore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6fb64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aff10;
  func_0x00010bfea420(PTR_PTR_1126aff10,param_2,*(undefined8 *)(param_1 + _DAT_1127122b4));
  if ((int)puVar1 != 0) {
    *(undefined1 *)(param_1 + _DAT_1127122ec) = 1;
  }
  return;
}



/* Entry: 104d6fbac; end: 104d6fbb3; -[SCFeatureDirectorModeImpl featureDirectorModeThumbnails:didSelectSegment:] */

void FUN_104d6fbac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7da70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentPreviewWithSelectedSegme_11257d038,param_4);
  return;
}



/* Entry: 104d6fbb4; end: 104d6fcb7; -[SCFeatureDirectorModeImpl featureDirectorModeThumbnailsDidTapTemplateExplorerButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6fbb4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_1127122c8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c071800();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126aff58;
      _objc_alloc(PTR_PTR_1126aff58);
      lVar2 = param_1 + _DAT_11271232c;
      _objc_loadWeakRetained(lVar2);
      lVar4 = lVar2;
      func_0x00010c0f3d20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c038f60(puVar3,param_2,lVar4,1,0);
      _objc_release(lVar4);
      _objc_release(lVar2);
      puVar5 = PTR_PTR_1126b0020;
      _objc_alloc(PTR_PTR_1126b0020);
      func_0x00010c056ac0();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar6),param_2,puVar5);
      _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
  }
  return;
}



/* Entry: 104d6fcb8; end: 104d6ff2f; -[SCFeatureDirectorModeImpl memoriesPickerV2DidSelectItemsWithMediaSegments:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6fcb8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aff10;
  func_0x00010bfea420();
  if ((int)puVar1 != 0) {
    *(undefined1 *)(param_1 + _DAT_1127122e4) = 1;
  }
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    _objc_initWeak(auStack_80,param_1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_104d6ff30;
    puStack_90 = &UNK_1108434b0;
    _objc_copyWeak(auStack_88,auStack_80);
    ppuVar3 = &puStack_a8;
    _objc_retainBlock();
    puStack_d8 = puVar1;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_104d6ff6c;
    puStack_c0 = &UNK_11084e370;
    _objc_copyWeak(auStack_b0,auStack_80);
    _objc_retain(ppuVar3);
    ppuVar4 = &puStack_d8;
    ppuStack_b8 = ppuVar3;
    _objc_retainBlock();
    puStack_100 = puVar1;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_104d6ffe8;
    puStack_e8 = &UNK_1108434b0;
    _objc_copyWeak(auStack_e0,auStack_80);
    func_0x000100162d98("APPSTORE",&puStack_100);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112712300);
    func_0x00010bfea620(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c279be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    ppuVar8 = ppuVar4;
    _objc_retain(ppuVar4);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar7);
    _objc_release(ppuVar8);
    _objc_release(ppuVar4);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_e0);
    _objc_release(ppuVar4);
    _objc_release(ppuStack_b8);
    _objc_destroyWeak(auStack_b0);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104d6ff30; end: 104d6ff6b;  */

void FUN_104d6ff30(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be358e0(param_1);
    func_0x00010c0c92a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d6ff6c; end: 104d6ffe7;  */

void FUN_104d6ff6c(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      func_0x00010be358e0(param_1);
      func_0x00010c0c92a0(param_1);
    }
    else {
      func_0x00010bdc7640(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d6ffe8; end: 104d70013;  */

void FUN_104d6ffe8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb99a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d70014; end: 104d7002b;  */

void FUN_104d70014(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000104d70024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104d7002c; end: 104d70097; -[SCFeatureDirectorModeImpl memoriesPickerV2DidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d7002c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712248;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010be97f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__runMemoriesPickerCompletion_112583970);
    return;
  }
  return;
}



/* Entry: 104d70098; end: 104d700f7; -[SCFeatureDirectorModeImpl onCameraIconClicked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d70098(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aff10;
  func_0x00010bfea420(PTR_PTR_1126aff10,param_2,*(undefined8 *)(param_1 + _DAT_1127122b4));
  if ((int)puVar1 != 0) {
    *(undefined1 *)(param_1 + _DAT_1127122e8) = 1;
    func_0x00010bfe2620(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0c92b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_memoriesPickerV2DidDismiss_11260fec0);
    return;
  }
  return;
}



/* Entry: 104d700f8; end: 104d701df; -[SCFeatureDirectorModeImpl memoriesDirectorModeDraftGridDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d700f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + _DAT_11271232c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfa1fc0();
  _objc_release(lVar1);
  lVar4 = (long)_DAT_112712250;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c150520(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = (long)_DAT_112712330;
    if (*(long *)(param_1 + lVar1) != 0) {
      (**(code **)(*(long *)(param_1 + lVar1) + 0x10))();
      uVar3 = *(undefined8 *)(param_1 + lVar1);
      *(undefined8 *)(param_1 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 104d701e0; end: 104d701e3; -[SCFeatureDirectorModeImpl templateExplorerDidComplete] */

void FUN_104d701e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissTemplateExplorer_11255e7a0);
  return;
}



/* Entry: 104d701e4; end: 104d701e7; -[SCFeatureDirectorModeImpl templateExplorerDidDismiss] */

void FUN_104d701e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissTemplateExplorer_11255e7a0);
  return;
}



/* Entry: 104d701e8; end: 104d7023f; -[SCFeatureDirectorModeImpl _dismissTemplateExplorer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d701e8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127122c8;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104d70240; end: 104d702ff; -[SCFeatureDirectorModeImpl timelineConfiguration:didAddSegment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d70240(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long unaff_x27;
  undefined *unaff_x28;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [128];
  long lStack_b0;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf0a140(puVar1,param_2,&uStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar9 = param_3;
  puVar11 = puVar1;
  func_0x00010c26fee0(param_1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_104d70300;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_178 = lVar9;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_retain(lVar9);
  _objc_retain(puVar11);
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  puVar12 = auStack_130;
  puVar2 = puVar11;
  func_0x00010bf52a60(puVar11,param_2,&uStack_170,puVar12,0x10);
  if (puVar2 != (undefined *)0x0) {
    unaff_x27 = *plStack_160;
    unaff_x28 = &DAT_112712000;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_160 != unaff_x27) {
          _objc_enumerationMutation(puVar11);
        }
        unaff_x23 = *(undefined8 *)(lStack_168 + (long)puVar13 * 8);
        unaff_x24 = *(undefined8 *)(puVar1 + _DAT_112712278);
        func_0x00010bef1320();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x24;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b7e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x23;
        func_0x00010c0899c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befc900(unaff_x25,param_2,unaff_x26);
        _objc_release(unaff_x26);
        _objc_release(unaff_x23);
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        puVar13 = puVar13 + 1;
      } while (puVar2 != puVar13);
      puVar12 = auStack_130;
      puVar2 = puVar11;
      func_0x00010bf52a60(puVar11,param_2,&uStack_170,puVar12,0x10);
    } while (puVar2 != (undefined *)0x0);
  }
  lVar9 = lStack_178;
  lVar3 = lStack_178;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar3;
  func_0x00010bee00c0(puVar1);
  _objc_release(lVar3);
  func_0x00010bedf5c0(puVar1);
  _objc_release(puVar11);
  lVar4 = lVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  lStack_198 = lVar9;
  pcStack_188 = FUN_104d704c4;
  puStack_1e0 = unaff_x28;
  lStack_1d8 = unaff_x27;
  uStack_1d0 = unaff_x26;
  uStack_1c8 = unaff_x25;
  uStack_1c0 = unaff_x24;
  uStack_1b8 = unaff_x23;
  lStack_1b0 = lVar3;
  puStack_1a8 = puVar1;
  puStack_1a0 = puVar11;
  ppuStack_190 = &puStack_50;
  _objc_retain(lVar10);
  _objc_retain(puVar12);
  uVar5 = *(undefined8 *)(lVar4 + _DAT_112712278);
  func_0x00010bef1320(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar12;
  func_0x00010bf0b7e0(puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12f0c0(uVar6,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  if (lVar10 != *(long *)(lVar4 + _DAT_11271230c)) goto LAB_104d706d8;
  lVar9 = lVar4;
  func_0x00010be43da0();
  if ((int)lVar9 != 0) {
    lVar9 = lVar4;
    func_0x00010c2458e0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e2c0();
    _objc_release(lVar9);
  }
  lVar9 = lVar10;
  func_0x00010c1585e0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee00c0(lVar4,param_2,lVar9);
  _objc_release(lVar9);
  func_0x00010bedf5c0(lVar4);
  puVar7 = puVar12;
  func_0x00010bfd6540();
  if ((int)puVar7 != 0) {
    lVar9 = lVar10;
    func_0x00010c1581e0();
    if (lVar9 == 0) {
      func_0x00010c1b5b40(puVar12,param_2,1);
      if (lVar10 == 0) goto LAB_104d70630;
LAB_104d70610:
      func_0x00010c276200(&uStack_1f8,lVar10);
    }
    else {
      if (lVar10 != 0) goto LAB_104d70610;
LAB_104d70630:
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
    }
    func_0x00010c218100(puVar12,param_2,&uStack_1f8);
    func_0x00010c0a50a0(puVar12);
  }
  puVar7 = puVar12;
  func_0x00010bfdd600();
  if ((int)puVar7 != 0) {
    func_0x00010bf2af60(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar12;
    func_0x00010bf311e0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a2440(lVar9,param_2,puVar7,&PTR____CFConstantStringClassReference_110f4c3b8,0,0,0,
                        0,0xd,0);
    _objc_release(puVar7);
    _objc_release(lVar9);
    _objc_release(lVar4);
  }
LAB_104d706d8:
  _objc_release(puVar12);
  _objc_release(lVar10);
  return;
}



/* Entry: 104d70300; end: 104d704c3; -[SCFeatureDirectorModeImpl timelineConfiguration:didAddSegments:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d70300(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long unaff_x27;
  undefined *unaff_x28;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
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
  lStack_138 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar8 = auStack_f0;
  lVar1 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_130,puVar8,0x10);
  if (lVar1 != 0) {
    unaff_x27 = *plStack_120;
    unaff_x28 = &DAT_112712000;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(param_4);
        }
        unaff_x23 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        unaff_x24 = *(undefined8 *)(param_1 + _DAT_112712278);
        func_0x00010bef1320();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x24;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b7e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x23;
        func_0x00010c0899c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befc900(unaff_x25,param_2,unaff_x26);
        _objc_release(unaff_x26);
        _objc_release(unaff_x23);
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      puVar8 = auStack_f0;
      lVar1 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_130,puVar8,0x10);
    } while (lVar1 != 0);
  }
  lVar1 = lStack_138;
  lVar9 = lStack_138;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar9;
  func_0x00010bee00c0(param_1);
  _objc_release(lVar9);
  func_0x00010bedf5c0(param_1);
  _objc_release(param_4);
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_158 = lVar1;
  pcStack_148 = FUN_104d704c4;
  puStack_1a0 = unaff_x28;
  lStack_198 = unaff_x27;
  uStack_190 = unaff_x26;
  uStack_188 = unaff_x25;
  uStack_180 = unaff_x24;
  uStack_178 = unaff_x23;
  lStack_170 = lVar9;
  lStack_168 = param_1;
  lStack_160 = param_4;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(lVar7);
  _objc_retain(puVar8);
  uVar3 = *(undefined8 *)(lVar2 + _DAT_112712278);
  func_0x00010bef1320(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar8;
  func_0x00010bf0b7e0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12f0c0(uVar4,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  if (lVar7 != *(long *)(lVar2 + _DAT_11271230c)) goto LAB_104d706d8;
  lVar1 = lVar2;
  func_0x00010be43da0();
  if ((int)lVar1 != 0) {
    lVar1 = lVar2;
    func_0x00010c2458e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e2c0();
    _objc_release(lVar1);
  }
  lVar1 = lVar7;
  func_0x00010c1585e0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee00c0(lVar2,param_2,lVar1);
  _objc_release(lVar1);
  func_0x00010bedf5c0(lVar2);
  puVar5 = puVar8;
  func_0x00010bfd6540();
  if ((int)puVar5 != 0) {
    lVar1 = lVar7;
    func_0x00010c1581e0();
    if (lVar1 == 0) {
      func_0x00010c1b5b40(puVar8,param_2,1);
      if (lVar7 == 0) goto LAB_104d70630;
LAB_104d70610:
      func_0x00010c276200(&uStack_1b8,lVar7);
    }
    else {
      if (lVar7 != 0) goto LAB_104d70610;
LAB_104d70630:
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
    }
    func_0x00010c218100(puVar8,param_2,&uStack_1b8);
    func_0x00010c0a50a0(puVar8);
  }
  puVar5 = puVar8;
  func_0x00010bfdd600();
  if ((int)puVar5 != 0) {
    func_0x00010bf2af60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010bf311e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a2440(lVar1,param_2,puVar5,&PTR____CFConstantStringClassReference_110f4c3b8,0,0,0,
                        0,0xd,0);
    _objc_release(puVar5);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
LAB_104d706d8:
  _objc_release(puVar8);
  _objc_release(lVar7);
  return;
}


