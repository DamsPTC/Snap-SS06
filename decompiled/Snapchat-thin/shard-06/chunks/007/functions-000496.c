/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d763a4; end: 104d7640b; -[SCFeatureDirectorModeImpl detailedCameraModeLogInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d763a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127122a8);
  func_0x00010b9f8a78(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110db16f8);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d7640c; end: 104d7647b; -[SCFeatureDirectorModeImpl _logUserTrackedEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d7640c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112712244;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d7647c; end: 104d764f3; -[SCFeatureDirectorModeImpl _logUnifiedCameraActionWithItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d7647c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712294;
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



/* Entry: 104d764f4; end: 104d76643; -[SCFeatureDirectorModeImpl _spotlightMediaSourceWithImportedMediaSegment:] */

undefined8 FUN_104d764f4(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010be440e0();
  uVar1 = 0xffffffffffffffff;
  if (param_1 != 0) {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0xffffffffffffffff;
    uVar1 = param_3;
    func_0x00010c0c5900(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bcda0();
    _objc_release(uVar1);
    uVar1 = puStack_48[3];
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104d76644; end: 104d76693;  */

void FUN_104d76644(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104d76694; end: 104d766d3; -[SCFeatureDirectorModeImpl _spotlightPostingSegmentSource] */

undefined8 FUN_104d76694(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_1;
  func_0x00010be440e0();
  if (iVar1 == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    func_0x00010be44100();
    uVar2 = 5;
    if (param_1 != 0) {
      uVar2 = 6;
    }
  }
  return uVar2;
}



/* Entry: 104d766d4; end: 104d76713; -[SCFeatureDirectorModeImpl _spotlightPostingSnapSourceOrDefault:] */

undefined8 FUN_104d766d4(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = param_1;
  func_0x00010be440e0();
  if (iVar1 != 0) {
    func_0x00010be44100();
    param_3 = 0x5f;
    if (param_1 != 0) {
      param_3 = 0x60;
    }
  }
  return param_3;
}



/* Entry: 104d76714; end: 104d7678b; -[SCFeatureDirectorModeImpl _spotlightPostingMediaSource:] */

undefined8 FUN_104d76714(int param_1,undefined8 param_2,long param_3)

{
  func_0x00010be440e0();
  if (param_1 != 0) {
    if (param_3 < 0xb) {
      if (param_3 == 7) {
        return 4;
      }
      if (param_3 == 8) {
        return 0;
      }
    }
    else {
      if (param_3 == 0x3c) {
        return 4;
      }
      if (param_3 == 0xc) {
        return 2;
      }
      if (param_3 == 0xb) {
        return 1;
      }
    }
  }
  return 0xffffffffffffffff;
}



/* Entry: 104d7678c; end: 104d76793; -[SCFeatureDirectorModeImpl _presentPreview] */

void FUN_104d7678c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7da70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentPreviewWithSelectedSegme_11257d038,0)
  ;
  return;
}



/* Entry: 104d76794; end: 104d76823; -[SCFeatureDirectorModeImpl _presentPreviewWithSelectedSegment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d76794(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_11271231c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c070e60();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    param_1 = param_1 + _DAT_11271232c;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfa2020();
    _objc_release(param_1);
  }
  else {
    func_0x00010be98ee0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d76824; end: 104d768b3; -[SCFeatureDirectorModeImpl _exitDirectorMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d76824(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010be448a0();
  if ((int)lVar1 == 0) {
    lVar1 = param_1 + _DAT_11271231c;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c070e60();
    _objc_release(lVar1);
    if ((int)lVar2 == 0) {
      lVar1 = param_1;
      func_0x00010beb5e80();
      if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beb8b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showDiscardAlert_11258bc78);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010be0bf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exitAndResetFeaturesIfNeeded_112560978);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010be98ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__saveDraftAndExitDirectorModeWit_112583d58,0)
  ;
  return;
}



/* Entry: 104d768b4; end: 104d769b3; -[SCFeatureDirectorModeImpl _exitAndResetFeaturesIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d768b4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712224);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712220);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf65dc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104d769b4; end: 104d76a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d769b4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_11271232c;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfa2060();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d76a04; end: 104d770b7; -[SCFeatureDirectorModeImpl _restoreFromDraftMediaConfigurationIfPossible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d76a04(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [136];
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_112712308;
  lVar1 = *(long *)(param_1 + lVar13);
  puVar12 = (undefined1 *)0x0;
  if (lVar1 == 0) {
LAB_104d77010:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  else {
    func_0x00010c1581e0();
    if (lVar1 != 0) {
LAB_104d76a60:
      puVar12 = *(undefined1 **)(param_1 + lVar13);
      _objc_retain(puVar12);
      uVar2 = *(undefined8 *)(param_1 + lVar13);
      *(undefined8 *)(param_1 + lVar13) = 0;
      _objc_release(uVar2);
      puVar3 = puVar12;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar12;
      func_0x00010c28fca0();
      puVar14 = puVar12;
      func_0x00010c28fca0();
      func_0x00010c28fca0();
      puVar5 = PTR_PTR_1126aff48;
      _objc_alloc();
      puVar11 = param_1 + _DAT_112712244;
      _objc_loadWeakRetained(puVar11);
      func_0x00010c05a520();
      lVar1 = (long)_DAT_11271230c;
      uVar2 = *(undefined8 *)(param_1 + lVar1);
      *(undefined **)(param_1 + lVar1) = puVar5;
      _objc_release(uVar2);
      _objc_release(puVar11);
      func_0x00010c27a220(*(undefined8 *)(param_1 + lVar1));
      puVar11 = puVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined1 *)0x1 || puVar14 == (undefined1 *)0x3) {
        uVar2 = 0xb;
        func_0x00010baee46c();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_78 = uVar2;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c162560(puVar11);
        _objc_release(puVar5);
        _objc_release(uVar2);
        puVar6 = puVar11;
        func_0x00010bef0520(puVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = param_1;
        func_0x00010bdfb8c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar5 = PTR_PTR_1126afff8;
        puVar6 = puVar11;
        func_0x00010bef0520(puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6f7c0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18c600(puVar11);
        _objc_release(puVar5);
        _objc_release(puVar6);
        uVar2 = *(undefined8 *)(param_1 + lVar1);
        func_0x00010c2702a0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18e120(puVar11);
        _objc_release(uVar2);
        puVar5 = PTR_DAT_1126a4e48;
        _objc_retain(puVar11);
        puVar8 = puVar11;
        func_0x00010010fab4(puVar11,puVar5);
        puVar6 = puVar11;
        if ((int)puVar8 == 0) {
          puVar6 = (undefined1 *)0x0;
        }
        _objc_retain(puVar6);
        _objc_release(puVar11);
        _objc_initWeak(auStack_100,param_1);
        puVar9 = puVar6;
        func_0x00010c29a380(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = auStack_108;
        param_2 = auStack_100;
        _objc_copyWeak(puVar8,param_2);
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297260(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar9);
        _objc_destroyWeak(auStack_108);
        _objc_destroyWeak(auStack_100);
        _objc_release(puVar6);
        _objc_release(puVar7);
        if (puVar14 == (undefined1 *)0x3) {
          puVar14 = param_1 + _DAT_11271232c;
          _objc_loadWeakRetained(puVar14);
          func_0x00010bfa2000();
          _objc_release(puVar14);
        }
        puVar5 = PTR_PTR_1126afff8;
        if (puVar4 == (undefined1 *)0x1) {
          uVar2 = *(undefined8 *)(param_1 + lVar1);
          func_0x00010c2702a0(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c158220(puVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          func_0x00010c1faae0(puVar5);
          func_0x00010be5a680(param_1);
          func_0x00010be500c0(param_1);
          _objc_release(puVar5);
        }
      }
      puVar4 = param_1;
      func_0x00010c2458e0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar4;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar14;
      func_0x00010bf529e0();
      puVar7 = puVar3;
      func_0x00010bf529e0();
      _objc_release(puVar14);
      _objc_release(puVar4);
      if (puVar6 != puVar7) {
        uVar2 = *(undefined8 *)(param_1 + _DAT_112712320);
        *(undefined8 *)(param_1 + _DAT_112712320) = 0;
        _objc_release(uVar2);
        _objc_retain(puVar3);
        puVar4 = puVar3;
        func_0x00010bf52a60();
        lVar13 = lRam0000000000000000;
        while (puVar4 != (undefined1 *)0x0) {
          puVar14 = (undefined1 *)0x0;
          do {
            if (lRam0000000000000000 != lVar13) {
              _objc_enumerationMutation(puVar3);
            }
            func_0x00010be73480(param_1);
            puVar14 = puVar14 + 1;
          } while (puVar4 != puVar14);
          puVar4 = puVar3;
          func_0x00010bf52a60();
        }
        _objc_release(puVar3);
      }
      func_0x00010bef9980(*(undefined8 *)(param_1 + lVar1));
      puVar5 = PTR_PTR_1126b00e8;
      uVar2 = *(undefined8 *)(param_1 + lVar1);
      func_0x00010c110b40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c270220(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + lVar1);
      puVar10 = puVar5;
      func_0x00010c2525e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9980(uVar2);
      _objc_release(puVar10);
      uVar2 = *(undefined8 *)(param_1 + lVar1);
      func_0x00010c0d32a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28b720(param_1);
      _objc_release(uVar2);
      func_0x00010bedf5c0(param_1);
      lVar1 = (long)_DAT_112712324;
      func_0x00010c1c4340(*(undefined8 *)(param_1 + lVar1));
      func_0x00010c214120(*(undefined8 *)(param_1 + lVar1));
      puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c203da0(param_1);
      _objc_release(puVar10);
      func_0x00010bec8360(param_1);
      func_0x00010bec8740(param_1);
      func_0x00010bec7d00(param_1);
      func_0x00010be784c0(param_1);
      _objc_release(puVar5);
      _objc_release(puVar11);
      _objc_release(puVar3);
      _objc_release();
      goto LAB_104d77010;
    }
    lVar1 = *(long *)(param_1 + lVar13);
    func_0x00010c28fca0();
    if (lVar1 == 4) goto LAB_104d76a60;
    puVar11 = *(undefined1 **)(param_1 + lVar13);
    *(undefined8 *)(param_1 + lVar13) = 0;
    puVar12 = puVar11;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto code_r0x00010bdbf3e4;
  }
  puVar11 = param_2;
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_100);
  __Unwind_Resume();
  _objc_retain(puVar11);
  puVar12 = puVar12 + 0x20;
  _objc_loadWeakRetained();
  if (puVar12 != (undefined1 *)0x0) {
    puVar3 = puVar12 + _DAT_11271232c;
    _objc_loadWeakRetained(puVar3);
    func_0x00010bfa1f00();
    _objc_release(puVar3);
  }
  _objc_release(puVar12);
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 104d770b8; end: 104d7712f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d770b8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_11271232c;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfa1f00();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d77130; end: 104d7733b; -[SCFeatureDirectorModeImpl _prepareForTemplatesRecordingIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d77130(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar8 = param_2;
  func_0x00010be448a0();
  if ((int)lVar8 != 0) {
    lVar8 = (long)_DAT_11271231c;
    uVar1 = param_2 + lVar8;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      lVar8 = param_2 + lVar8;
      _objc_loadWeakRetained(lVar8);
      func_0x00010c26b1e0();
      lVar9 = (long)_DAT_112712348;
      *(undefined8 *)(param_2 + lVar9) = param_1;
      _objc_release(lVar8);
      _objc_initWeak(auStack_78,param_2);
      lVar8 = (long)_DAT_112712228;
      uVar3 = *(undefined8 *)(param_2 + lVar8);
      func_0x00010bfa1820(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c270840();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
      func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c0e0e60(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_80,auStack_78);
      uVar6 = uVar5;
      func_0x00010c25ff60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_release(uVar7);
      _objc_release(uVar3);
      dVar10 = *(double *)(param_2 + lVar9);
      uVar7 = *(undefined8 *)(param_2 + lVar8);
      func_0x00010bfa1820(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27d6a0(dVar10 / 1000.0 + 0.5);
      _objc_release(uVar7);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
    }
  }
  return;
}



/* Entry: 104d7733c; end: 104d7739b;  */

void FUN_104d7733c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c067fc0(param_2);
  _objc_release(param_2);
  func_0x00010be6bfe0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d7739c; end: 104d773db; -[SCFeatureDirectorModeImpl _onTimerModeStateChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d7739c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  func_0x00010be448a0();
  if ((param_3 == 2) && (iVar1 != 0)) {
    *(undefined1 *)(param_1 + _DAT_112712208) = 1;
  }
  return;
}



/* Entry: 104d773dc; end: 104d77463; -[SCFeatureDirectorModeImpl _saveDraftAndExitDirectorModeWithSelectedSegment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d773dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_11271230c);
  func_0x00010c1581e0();
  if (lVar1 == 0) {
    func_0x00010beb8a40(param_1);
  }
  else {
    lVar1 = param_1 + _DAT_11271231c;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfa1f60();
    _objc_release(lVar1);
    func_0x00010be0bf60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d77464; end: 104d774bb; -[SCFeatureDirectorModeImpl _deleteDraftAndExitDirectorMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d77464(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_11271231c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfa1f20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be0bf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exitAndResetFeaturesIfNeeded_112560978);
  return;
}



/* Entry: 104d774bc; end: 104d77547; -[SCFeatureDirectorModeImpl _logAddSnapTapWithSegment:] */

void FUN_104d774bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfd3d80();
  if ((int)uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010bf311e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c243320(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0d60(param_3,param_2,0xb,uVar1,param_1);
    _objc_release(param_1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d77548; end: 104d7761b; -[SCFeatureDirectorModeImpl _updatePreviewButtonFromConfigurationStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d77548(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11271237c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  lVar4 = *(long *)(param_1 + _DAT_11271230c);
  func_0x00010c28fca0();
  if (lVar4 != 4) {
    lVar4 = param_1;
    func_0x00010c0c45a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c1581e0();
    _objc_release(lVar4);
    if (lVar2 == 0) {
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bde80;
    }
    else {
      lVar4 = param_3;
      func_0x00010c27dd80();
      if (lVar4 == 0) {
        ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bde98;
      }
      else {
        if (lVar4 != 1) goto LAB_104d77608;
        ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bdeb0;
      }
    }
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11271239c),param_2,ppuVar3);
  }
LAB_104d77608:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d7761c; end: 104d7769b; -[SCFeatureDirectorModeImpl temporaryVideoDatastore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d7761c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127123b4;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112712214);
    func_0x00010c26b240(uVar1,param_2,&PTR____CFConstantStringClassReference_110f31478,1,1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104d7769c; end: 104d7771b; -[SCFeatureDirectorModeImpl temporaryImageDataStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d7769c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127123b8;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112712214);
    func_0x00010c26b240(uVar1,param_2,&PTR____CFConstantStringClassReference_110e42778,1,1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104d7771c; end: 104d777c3; -[SCFeatureDirectorModeImpl setCameraBottomUIArbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d7771c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_storeWeak(param_1 + _DAT_1127123a0,param_3);
  lVar1 = param_1;
  func_0x00010c0c45a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1581e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104d777c4;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_58);
  }
  return;
}



/* Entry: 104d777c4; end: 104d7780b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d777c4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_1127123a0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c136e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d7780c; end: 104d77873; -[SCFeatureDirectorModeImpl setCameraUIVisible:animated:arbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d7780c(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11271230c);
  func_0x00010c28fca0();
  if (lVar1 == 4) {
    return;
  }
  func_0x00010c1677c0((double)param_3,*(undefined8 *)(param_1 + _DAT_112712374));
                    /* WARNING: Could not recover jumptable at 0x00010beddc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updatePreviewButtonFromConfigur_1125950b0,
             *(undefined8 *)(param_1 + _DAT_11271237c));
  return;
}



/* Entry: 104d77874; end: 104d778b3; -[SCFeatureDirectorModeImpl setMediaConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d77874(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271230c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d778b4; end: 104d778d3; -[SCFeatureDirectorModeImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d778b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271232c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d778d4; end: 104d778e7; -[SCFeatureDirectorModeImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d778d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271232c,param_3);
  return;
}



/* Entry: 104d778e8; end: 104d778f7; -[SCFeatureDirectorModeImpl isActivated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104d778e8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112712370);
}



/* Entry: 104d778f8; end: 104d77907; -[SCFeatureDirectorModeImpl thumbnailsFeature] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d778f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712324);
}



/* Entry: 104d77908; end: 104d77947; -[SCFeatureDirectorModeImpl setThumbnailsFeature:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d77908(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712324;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d77948; end: 104d77957; -[SCFeatureDirectorModeImpl draftMediaConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d77948(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712308);
}



/* Entry: 104d77958; end: 104d77977; -[SCFeatureDirectorModeImpl draftDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d77958(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271231c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d77978; end: 104d77987; -[SCFeatureDirectorModeImpl directorModeSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d77978(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127122a8);
}



/* Entry: 104d77988; end: 104d77997; -[SCFeatureDirectorModeImpl setDirectorModeSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d77988(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127122a8) = param_3;
  return;
}



/* Entry: 104d77998; end: 104d779b7; -[SCFeatureDirectorModeImpl cameraBottomUIArbitrator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d77998(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127123a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d779b8; end: 104d779c7; -[SCFeatureDirectorModeImpl isRecordingForTemplates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104d779b8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112712208);
}



/* Entry: 104d779c8; end: 104d779d7; -[SCFeatureDirectorModeImpl previewPagePreset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d779c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127122f4);
}



/* Entry: 104d779d8; end: 104d779e7; -[SCFeatureDirectorModeImpl segmentTimeRangesObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d779d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127122dc);
}



/* Entry: 104d779e8; end: 104d77a27; -[SCFeatureDirectorModeImpl setSnapsRecoveryData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d779e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712320;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d77a28; end: 104d77a37; -[SCFeatureDirectorModeImpl snapCreationTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d77a28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127123bc);
}



/* Entry: 104d77a38; end: 104d77a77; -[SCFeatureDirectorModeImpl setSnapCreationTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d77a38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127123bc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d77a78; end: 104d77a97; -[SCFeatureDirectorModeImpl cameraSnapCreationLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d77a78(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112712290);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d77a98; end: 104d77aab; -[SCFeatureDirectorModeImpl setCameraSnapCreationLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d77a98(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112712290,param_3);
  return;
}



/* Entry: 104d77aac; end: 104d7816f; -[SCFeatureDirectorModeImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d77aac(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112712290);
  _objc_storeStrong(param_1 + _DAT_1127123bc,0);
  _objc_storeStrong(param_1 + _DAT_112712320,0);
  _objc_storeStrong(param_1 + _DAT_1127122f4,0);
  _objc_destroyWeak(param_1 + _DAT_1127123a0);
  _objc_destroyWeak(param_1 + _DAT_11271231c);
  _objc_storeStrong(param_1 + _DAT_112712308,0);
  _objc_storeStrong(param_1 + _DAT_112712324,0);
  _objc_destroyWeak(param_1 + _DAT_11271232c);
  _objc_storeStrong(param_1 + _DAT_11271230c,0);
  _objc_storeStrong(param_1 + _DAT_11271235c,0);
  _objc_storeStrong(param_1 + _DAT_112712358,0);
  _objc_storeStrong(param_1 + _DAT_112712390,0);
  _objc_storeStrong(param_1 + _DAT_112712304,0);
  _objc_storeStrong(param_1 + _DAT_1127122f0,0);
  _objc_storeStrong(param_1 + _DAT_11271233c,0);
  _objc_storeStrong(param_1 + _DAT_112712300,0);
  _objc_storeStrong(param_1 + _DAT_1127122fc,0);
  _objc_storeStrong(param_1 + _DAT_1127122f8,0);
  _objc_storeStrong(param_1 + _DAT_1127122e0,0);
  _objc_storeStrong(param_1 + _DAT_1127122dc,0);
  _objc_storeStrong(param_1 + _DAT_1127122d8,0);
  _objc_storeStrong(param_1 + _DAT_1127122d4,0);
  _objc_storeStrong(param_1 + _DAT_1127122cc,0);
  _objc_storeStrong(param_1 + _DAT_1127122c8,0);
  _objc_destroyWeak(param_1 + _DAT_1127122c4);
  _objc_destroyWeak(param_1 + _DAT_1127122c0);
  _objc_storeStrong(param_1 + _DAT_1127122bc,0);
  _objc_storeStrong(param_1 + _DAT_11271237c,0);
  _objc_storeStrong(param_1 + _DAT_1127122b8,0);
  _objc_storeStrong(param_1 + _DAT_11271234c,0);
  _objc_storeStrong(param_1 + _DAT_1127123ac,0);
  _objc_storeStrong(param_1 + _DAT_1127122b4,0);
  _objc_storeStrong(param_1 + _DAT_11271227c,0);
  _objc_storeStrong(param_1 + _DAT_1127122a4,0);
  _objc_storeStrong(param_1 + _DAT_11271229c,0);
  _objc_storeStrong(param_1 + _DAT_112712298,0);
  _objc_storeStrong(param_1 + _DAT_112712294,0);
  _objc_storeStrong(param_1 + _DAT_11271228c,0);
  _objc_storeStrong(param_1 + _DAT_112712344,0);
  _objc_destroyWeak(param_1 + _DAT_112712288);
  _objc_destroyWeak(param_1 + _DAT_112712284);
  _objc_storeStrong(param_1 + _DAT_112712280,0);
  _objc_storeStrong(param_1 + _DAT_112712278,0);
  _objc_storeStrong(param_1 + _DAT_1127122a0,0);
  _objc_storeStrong(param_1 + _DAT_112712268,0);
  _objc_storeStrong(param_1 + _DAT_112712264,0);
  _objc_storeStrong(param_1 + _DAT_112712260,0);
  _objc_storeStrong(param_1 + _DAT_11271225c,0);
  _objc_storeStrong(param_1 + _DAT_112712258,0);
  _objc_storeStrong(param_1 + _DAT_112712254,0);
  _objc_storeStrong(param_1 + _DAT_1127123b8,0);
  _objc_storeStrong(param_1 + _DAT_1127123b4,0);
  _objc_storeStrong(param_1 + _DAT_112712328,0);
  _objc_storeStrong(param_1 + _DAT_11271224c,0);
  _objc_storeStrong(param_1 + _DAT_112712248,0);
  _objc_storeStrong(param_1 + _DAT_112712330,0);
  _objc_storeStrong(param_1 + _DAT_112712250,0);
  _objc_storeStrong(param_1 + _DAT_11271239c,0);
  _objc_storeStrong(param_1 + _DAT_112712338,0);
  _objc_storeStrong(param_1 + _DAT_11271236c,0);
  _objc_storeStrong(param_1 + _DAT_1127123c0,0);
  _objc_storeStrong(param_1 + _DAT_1127123c4,0);
  _objc_storeStrong(param_1 + _DAT_112712394,0);
  _objc_storeStrong(param_1 + _DAT_1127123a8,0);
  _objc_storeStrong(param_1 + _DAT_1127123c8,0);
  _objc_storeStrong(param_1 + _DAT_112712398,0);
  _objc_storeStrong(param_1 + _DAT_112712360,0);
  _objc_storeStrong(param_1 + _DAT_112712310,0);
  _objc_storeStrong(param_1 + _DAT_1127123cc,0);
  _objc_storeStrong(param_1 + _DAT_1127123d0,0);
  _objc_storeStrong(param_1 + _DAT_112712368,0);
  _objc_storeStrong(param_1 + _DAT_112712270,0);
  _objc_storeStrong(param_1 + _DAT_11271226c,0);
  _objc_storeStrong(param_1 + _DAT_112712274,0);
  _objc_storeStrong(param_1 + _DAT_11271238c,0);
  _objc_storeStrong(param_1 + _DAT_112712380,0);
  _objc_destroyWeak(param_1 + _DAT_112712234);
  _objc_storeStrong(param_1 + _DAT_112712388,0);
  _objc_storeStrong(param_1 + _DAT_112712334,0);
  _objc_storeStrong(param_1 + _DAT_112712384,0);
  _objc_storeStrong(param_1 + _DAT_112712378,0);
  _objc_storeStrong(param_1 + _DAT_112712374,0);
  _objc_storeStrong(param_1 + _DAT_112712314,0);
  _objc_storeStrong(param_1 + _DAT_112712240,0);
  _objc_storeStrong(param_1 + _DAT_11271223c,0);
  _objc_storeStrong(param_1 + _DAT_112712238,0);
  _objc_storeStrong(param_1 + _DAT_11271220c,0);
  _objc_destroyWeak(param_1 + _DAT_112712244);
  _objc_destroyWeak(param_1 + _DAT_112712340);
  _objc_storeStrong(param_1 + _DAT_112712230,0);
  _objc_storeStrong(param_1 + _DAT_11271222c,0);
  _objc_storeStrong(param_1 + _DAT_112712228,0);
  _objc_storeStrong(param_1 + _DAT_112712224,0);
  _objc_storeStrong(param_1 + _DAT_112712220,0);
  _objc_storeStrong(param_1 + _DAT_11271221c,0);
  _objc_storeStrong(param_1 + _DAT_112712218,0);
  _objc_storeStrong(param_1 + _DAT_112712214,0);
  _objc_storeStrong(param_1 + _DAT_112712350,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712210,0);
  return;
}



/* Entry: 104d78170; end: 104d781df;  */

void FUN_104d78170(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b00f0;
  func_0x00010c23fe00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c240560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d781e0; end: 104d782fb; -[SCFeatureDirectorModeLensExplorerImpl initWithLensExplorerNavigationServices:lensPickerServices:lensCarouselManager:cameraModeActivator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104d781e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126e4198;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127123d8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127123dc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127123e0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127123e4;
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



/* Entry: 104d782fc; end: 104d783bb; -[SCFeatureDirectorModeLensExplorerImpl dismissLensExplorerIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d782fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127123d8;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c092de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf9b3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c092de0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf83b20();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 104d783bc; end: 104d783c3; -[SCFeatureDirectorModeLensExplorerImpl modeEnabledStateChangedObservable] */

undefined8 FUN_104d783bc(void)

{
  return 0;
}



/* Entry: 104d783c4; end: 104d783c7; -[SCFeatureDirectorModeLensExplorerImpl disableMode] */

void FUN_104d783c4(void)

{
  return;
}



/* Entry: 104d783c8; end: 104d783cf; -[SCFeatureDirectorModeLensExplorerImpl isHidden] */

undefined8 FUN_104d783c8(void)

{
  return 0;
}



/* Entry: 104d783d0; end: 104d783db; -[SCFeatureDirectorModeLensExplorerImpl incompatibleModes] */

undefined * FUN_104d783d0(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 104d783dc; end: 104d783e3; -[SCFeatureDirectorModeLensExplorerImpl modeType] */

undefined8 FUN_104d783dc(void)

{
  return 0xe;
}



/* Entry: 104d783e4; end: 104d784cf; -[SCFeatureDirectorModeLensExplorerImpl onTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d783e4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010c0cfda0();
  if ((int)lVar1 == param_3) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127123d8);
    func_0x00010c092de0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_1127123e8;
    lVar1 = param_1 + lVar5;
    _objc_loadWeakRetained(lVar1);
    lVar4 = lVar1;
    func_0x00010c10fd60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10cb00(uVar3,param_2,lVar4,param_1);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    param_1 = param_1 + lVar5;
    _objc_loadWeakRetained(param_1);
    func_0x00010c093920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104d784d0; end: 104d784d3; -[SCFeatureDirectorModeLensExplorerImpl secondaryOnTap:] */

void FUN_104d784d0(void)

{
  return;
}



/* Entry: 104d784d4; end: 104d784e3; -[SCFeatureDirectorModeLensExplorerImpl state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104d784d4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127123d4);
}



/* Entry: 104d784e4; end: 104d784eb; -[SCFeatureDirectorModeLensExplorerImpl secondaryButtonState] */

undefined8 FUN_104d784e4(void)

{
  return 0;
}



/* Entry: 104d784ec; end: 104d784ef; -[SCFeatureDirectorModeLensExplorerImpl toolbarButtonPositionDidChange:] */

void FUN_104d784ec(void)

{
  return;
}



/* Entry: 104d784f0; end: 104d78557; -[SCFeatureDirectorModeLensExplorerImpl lensExplorerRouter:didPickItem:selectionTrigger:] */

void FUN_104d784f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x104d7855c;
  puStack_20 = &UNK_11084e730;
  uStack_18 = param_1;
  func_0x00010c0bf060(param_4,param_2,&PTR___NSConcreteGlobalBlock_11084e710,&puStack_38,
                      &PTR___NSConcreteGlobalBlock_11084e780);
  return;
}



/* Entry: 104d78558; end: 104d7856b;  */

void FUN_104d78558(void)

{
  return;
}



/* Entry: 104d7856c; end: 104d786df; -[SCFeatureDirectorModeLensExplorerImpl _hanldeDidPickLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d7856c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127123e4;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  _objc_retain(param_3);
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c06c220();
  _objc_release(uVar3);
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfa1820(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf65ba0();
    _objc_release(uVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127123dc);
  func_0x00010c095be0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fb8c0();
  _objc_release(uVar1);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b00f8;
  uVar1 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c158d00(puVar2,param_2,uVar1,0,0,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127123e0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf08620();
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_1127123e8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c092a40();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104d786e0; end: 104d786e3; -[SCFeatureDirectorModeLensExplorerImpl lensExplorerRouterDidToggleCamera:] */

void FUN_104d786e0(void)

{
  return;
}



/* Entry: 104d786e4; end: 104d7871f; -[SCFeatureDirectorModeLensExplorerImpl lensExplorerRouterDidDismissLensExplorer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d786e4(long param_1)

{
  param_1 = param_1 + _DAT_1127123e8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c092d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d78720; end: 104d7878b; -[SCFeatureDirectorModeLensExplorerImpl lensExplorerRouterDidPresentLensExplorer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d78720(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127123e0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65b20();
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_1127123e8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c092da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d7878c; end: 104d787c7; -[SCFeatureDirectorModeLensExplorerImpl lensExplorerRouterBeginDismissingLensExplorer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d7878c(long param_1)

{
  param_1 = param_1 + _DAT_1127123e8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c093900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d787c8; end: 104d7887b; -[SCFeatureDirectorModeLensExplorerImpl lensExplorerRouterReplyParameters:] */

void FUN_104d787c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x00010c03e5a0();
  puVar2 = PTR_PTR_1126ae6d8;
  _objc_alloc(PTR_PTR_1126ae6d8);
  func_0x00010c0460c0();
  puVar3 = PTR_PTR_1126b0100;
  _objc_alloc(PTR_PTR_1126b0100);
  func_0x00010bff7380();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d7887c; end: 104d7889b; -[SCFeatureDirectorModeLensExplorerImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d7887c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127123e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d7889c; end: 104d788af; -[SCFeatureDirectorModeLensExplorerImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d7889c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127123e8,param_3);
  return;
}



/* Entry: 104d788b0; end: 104d7891b; -[SCFeatureDirectorModeLensExplorerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d788b0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127123e8);
  _objc_storeStrong(param_1 + _DAT_1127123e4,0);
  _objc_storeStrong(param_1 + _DAT_1127123e0,0);
  _objc_storeStrong(param_1 + _DAT_1127123dc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127123d8,0);
  return;
}



/* Entry: 104d7891c; end: 104d7959b; -[SCDirectorModeFeatureProviderPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d7891c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
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
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  undefined8 uVar61;
  long lVar62;
  long lVar63;
  undefined8 uStack_2a0;
  undefined8 uStack_288;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_158;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_70;
  
  lVar1 = param_1;
  FUN_104d7959c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf2bbc0();
  _objc_release(lVar1);
  if (lVar2 == 9) {
    puVar3 = PTR_PTR_1126b0108;
    _objc_alloc();
    lVar1 = param_1;
    FUN_104d7959c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x000104d795c0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uStack_88 = 0;
    }
    else {
      uStack_88 = param_1 + _DAT_112712448;
      _objc_loadWeakRetained();
    }
    lVar4 = param_1;
    func_0x000104d795e4();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c1140e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uStack_98 = 0;
      lVar39 = 0;
    }
    else {
      uStack_98 = param_1 + _DAT_112712408;
      _objc_loadWeakRetained();
      lVar39 = param_1 + _DAT_1127123fc;
      _objc_loadWeakRetained();
    }
    lVar6 = lVar39;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar40 = 0;
    }
    else {
      lVar40 = param_1 + _DAT_11271240c;
      _objc_loadWeakRetained();
    }
    lVar7 = lVar40;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      _objc_retain(0);
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      lVar41 = 0;
    }
    else {
      uStack_b0 = param_1 + _DAT_112712410;
      _objc_loadWeakRetained();
      uStack_b8 = param_1 + _DAT_112712414;
      _objc_loadWeakRetained();
      uStack_c0 = param_1 + _DAT_112712418;
      _objc_loadWeakRetained();
      uStack_c8 = param_1 + _DAT_11271241c;
      _objc_loadWeakRetained();
      uStack_d0 = *(undefined8 *)(param_1 + _DAT_1127124b4);
      _objc_retain();
      uStack_d8 = param_1 + _DAT_1127124a0;
      _objc_loadWeakRetained();
      uStack_e0 = param_1 + _DAT_112712420;
      _objc_loadWeakRetained();
      lVar41 = param_1 + _DAT_112712424;
      _objc_loadWeakRetained();
    }
    lVar8 = lVar41;
    func_0x00010c1104a0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar42 = 0;
    }
    else {
      lVar42 = param_1 + _DAT_11271242c;
      _objc_loadWeakRetained();
    }
    lVar9 = lVar42;
    func_0x00010c0da2a0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      _objc_retain(0);
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_110 = 0;
    }
    else {
      uStack_f8 = param_1 + _DAT_112712428;
      _objc_loadWeakRetained();
      uStack_100 = *(undefined8 *)(param_1 + _DAT_1127124b8);
      _objc_retain();
      uStack_108 = param_1 + _DAT_112712430;
      _objc_loadWeakRetained();
      uStack_110 = param_1 + _DAT_112712434;
      _objc_loadWeakRetained();
    }
    lVar10 = param_1;
    func_0x000104d795e4();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bfa2fe0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar43 = 0;
    }
    else {
      lVar43 = param_1 + _DAT_1127123f8;
      _objc_loadWeakRetained();
    }
    lVar12 = lVar43;
    func_0x00010bf07a00();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uStack_140 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_138 = 0;
      lVar44 = 0;
    }
    else {
      uStack_128 = param_1 + _DAT_112712440;
      _objc_loadWeakRetained();
      uStack_130 = param_1 + _DAT_112712444;
      _objc_loadWeakRetained();
      uStack_138 = param_1 + _DAT_11271244c;
      _objc_loadWeakRetained();
      uStack_140 = param_1 + _DAT_112712450;
      _objc_loadWeakRetained();
      lVar44 = param_1 + _DAT_112712454;
      _objc_loadWeakRetained();
    }
    lVar13 = lVar44;
    func_0x00010c08eca0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar45 = 0;
    }
    else {
      lVar45 = param_1 + _DAT_112712458;
      _objc_loadWeakRetained();
    }
    lVar14 = lVar45;
    func_0x00010c23fba0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar46 = 0;
    }
    else {
      lVar46 = param_1 + _DAT_11271245c;
      _objc_loadWeakRetained();
    }
    lVar15 = lVar46;
    func_0x00010c26b280();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uStack_158 = 0;
      lVar47 = 0;
    }
    else {
      uStack_158 = param_1 + _DAT_1127124a4;
      _objc_loadWeakRetained();
      lVar47 = param_1 + _DAT_112712460;
      _objc_loadWeakRetained();
    }
    lVar16 = lVar47;
    func_0x00010c096200();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar48 = 0;
    }
    else {
      lVar48 = param_1 + _DAT_112712438;
      _objc_loadWeakRetained();
    }
    lVar17 = lVar48;
    func_0x00010c096100();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uStack_190 = 0;
      lVar49 = 0;
    }
    else {
      uStack_190 = param_1 + _DAT_11271243c;
      _objc_loadWeakRetained();
      lVar49 = param_1 + _DAT_112712464;
      _objc_loadWeakRetained();
    }
    lVar18 = lVar49;
    func_0x00010c0c8940();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar50 = 0;
    }
    else {
      lVar50 = param_1 + _DAT_112712468;
      _objc_loadWeakRetained();
    }
    lVar19 = lVar50;
    func_0x00010c0da300();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar51 = 0;
    }
    else {
      lVar51 = param_1 + _DAT_11271246c;
      _objc_loadWeakRetained();
    }
    lVar20 = lVar51;
    func_0x00010c2402c0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uStack_1b0 = 0;
    }
    else {
      uStack_1b0 = param_1 + _DAT_1127124a8;
      _objc_loadWeakRetained();
    }
    lVar21 = param_1;
    func_0x000104d795c0();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar21;
    func_0x00010bf296c0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uStack_70 = 0;
    }
    else {
      uStack_70 = *(undefined8 *)(param_1 + _DAT_1127124b0);
    }
    _objc_retain(uStack_70);
    lVar23 = param_1;
    func_0x000104d79608();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar23;
    func_0x00010c22d580();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar24;
    func_0x00010c243400();
    if (param_1 == 0) {
      lVar52 = 0;
    }
    else {
      lVar52 = param_1 + _DAT_112712470;
      _objc_loadWeakRetained();
    }
    lVar26 = lVar52;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar53 = 0;
    }
    else {
      lVar53 = param_1 + _DAT_112712474;
      _objc_loadWeakRetained();
    }
    lVar27 = lVar53;
    func_0x00010c0c8840();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uStack_1a0 = 0;
    }
    else {
      uStack_1a0 = param_1 + _DAT_112712478;
      _objc_loadWeakRetained();
    }
    lVar28 = param_1;
    func_0x000104d79608();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = lVar28;
    func_0x00010c0c6060();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      _objc_retain(0);
      uStack_288 = 0;
      uStack_2a0 = 0;
      lVar54 = 0;
    }
    else {
      uStack_2a0 = *(undefined8 *)(param_1 + _DAT_1127124bc);
      _objc_retain();
      uStack_288 = param_1 + _DAT_1127124ac;
      _objc_loadWeakRetained();
      lVar54 = param_1 + _DAT_11271247c;
      _objc_loadWeakRetained();
    }
    lVar30 = lVar54;
    func_0x00010bf70fc0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar63 = 0;
      lVar55 = 0;
    }
    else {
      lVar63 = param_1 + _DAT_112712484;
      _objc_loadWeakRetained();
      lVar55 = param_1 + _DAT_112712488;
      _objc_loadWeakRetained();
    }
    lVar31 = lVar55;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = param_1;
    func_0x000104d79608();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = lVar32;
    func_0x00010c24bba0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar56 = 0;
    }
    else {
      lVar56 = param_1 + _DAT_112712480;
      _objc_loadWeakRetained();
    }
    lVar34 = lVar56;
    func_0x00010bf9c6a0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar57 = 0;
    }
    else {
      lVar57 = param_1 + _DAT_11271248c;
      _objc_loadWeakRetained();
    }
    lVar35 = lVar57;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar58 = 0;
    }
    else {
      lVar58 = param_1 + _DAT_112712490;
      _objc_loadWeakRetained();
    }
    lVar36 = lVar58;
    func_0x00010bf4c500();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar59 = 0;
    }
    else {
      lVar59 = param_1 + _DAT_112712494;
      _objc_loadWeakRetained();
    }
    lVar37 = lVar59;
    func_0x00010c270e80();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar60 = 0;
    }
    else {
      lVar60 = param_1 + _DAT_112712498;
      _objc_loadWeakRetained();
    }
    lVar38 = lVar60;
    func_0x00010bf02100();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar62 = 0;
    }
    else {
      lVar62 = param_1 + _DAT_11271249c;
      _objc_loadWeakRetained();
    }
    func_0x00010bffbd00(puVar3,param_2,lVar1,lVar2,uStack_88,lVar5,uStack_98,lVar6,lVar7,uStack_b0,
                        uStack_b8,uStack_c0,uStack_c8,uStack_d0,uStack_d8,uStack_e0,lVar8,lVar9,
                        uStack_f8,uStack_100,uStack_108,uStack_110,lVar11,lVar12,uStack_128,
                        uStack_130,uStack_138,uStack_140,lVar13,lVar14,lVar15,uStack_158,lVar16,
                        lVar17,uStack_190,lVar18,lVar19,lVar20,uStack_1b0,lVar22,uStack_70,lVar25,
                        lVar26,lVar27,uStack_1a0,lVar29,uStack_2a0,uStack_288,lVar30,lVar63,lVar31,
                        lVar33,lVar34,lVar35,lVar36,lVar37,lVar38,lVar62);
    uVar61 = *(undefined8 *)(param_1 + _DAT_1127123ec);
    *(undefined **)(param_1 + _DAT_1127123ec) = puVar3;
    _objc_release(uVar61);
    _objc_release(uStack_2a0);
    _objc_release(lVar62);
    _objc_release(lVar38);
    _objc_release(lVar60);
    _objc_release(lVar37);
    _objc_release(lVar59);
    _objc_release(lVar36);
    _objc_release(lVar58);
    _objc_release(lVar35);
    _objc_release(lVar57);
    _objc_release(lVar34);
    _objc_release(lVar56);
    _objc_release(lVar33);
    _objc_release(lVar32);
    _objc_release(lVar31);
    _objc_release(lVar55);
    _objc_release(lVar63);
    _objc_release(lVar30);
    _objc_release(lVar54);
    _objc_release(uStack_288);
    _objc_release(uStack_70);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(uStack_1a0);
    _objc_release(lVar27);
    _objc_release(lVar53);
    _objc_release(lVar26);
    _objc_release(lVar52);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(uStack_1b0);
    _objc_release(lVar20);
    _objc_release(lVar51);
    _objc_release(lVar19);
    _objc_release(lVar50);
    _objc_release(lVar18);
    _objc_release(lVar49);
    _objc_release(uStack_190);
    _objc_release(lVar17);
    _objc_release(lVar48);
    _objc_release(lVar16);
    _objc_release(lVar47);
    _objc_release(uStack_158);
    _objc_release(lVar15);
    _objc_release(lVar46);
    _objc_release(lVar14);
    _objc_release(lVar45);
    _objc_release(lVar13);
    _objc_release(lVar44);
    _objc_release(uStack_140);
    _objc_release(uStack_138);
    _objc_release(uStack_130);
    _objc_release(uStack_128);
    _objc_release(lVar12);
    _objc_release(lVar43);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(uStack_110);
    _objc_release(uStack_108);
    _objc_release(uStack_100);
    _objc_release(uStack_f8);
    _objc_release(lVar9);
    _objc_release(lVar42);
    _objc_release(lVar8);
    _objc_release(lVar41);
    _objc_release(uStack_e0);
    _objc_release(uStack_d8);
    _objc_release(uStack_d0);
    _objc_release(uStack_c8);
    _objc_release(uStack_c0);
    _objc_release(uStack_b8);
    _objc_release(uStack_b0);
    _objc_release(lVar7);
    _objc_release(lVar40);
    _objc_release(lVar6);
    _objc_release(lVar39);
    _objc_release(uStack_98);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uStack_88);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x000104d795e4();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104d7959c; end: 104d7962b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d7959c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112712400);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d7962c; end: 104d798db; -[SCDirectorModeFeatureProviderPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d7962c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127124bc,0);
  _objc_storeStrong(param_1 + _DAT_1127124b8,0);
  _objc_storeStrong(param_1 + _DAT_1127124b4,0);
  _objc_storeStrong(param_1 + _DAT_1127124b0,0);
  _objc_destroyWeak(param_1 + _DAT_1127124ac);
  _objc_destroyWeak(param_1 + _DAT_1127124a8);
  _objc_destroyWeak(param_1 + _DAT_1127124a4);
  _objc_destroyWeak(param_1 + _DAT_1127124a0);
  _objc_destroyWeak(param_1 + _DAT_11271249c);
  _objc_destroyWeak(param_1 + _DAT_112712498);
  _objc_destroyWeak(param_1 + _DAT_112712494);
  _objc_destroyWeak(param_1 + _DAT_112712490);
  _objc_destroyWeak(param_1 + _DAT_11271248c);
  _objc_destroyWeak(param_1 + _DAT_112712488);
  _objc_destroyWeak(param_1 + _DAT_112712484);
  _objc_destroyWeak(param_1 + _DAT_112712480);
  _objc_destroyWeak(param_1 + _DAT_11271247c);
  _objc_destroyWeak(param_1 + _DAT_112712478);
  _objc_destroyWeak(param_1 + _DAT_112712474);
  _objc_destroyWeak(param_1 + _DAT_112712470);
  _objc_destroyWeak(param_1 + _DAT_11271246c);
  _objc_destroyWeak(param_1 + _DAT_112712468);
  _objc_destroyWeak(param_1 + _DAT_112712464);
  _objc_destroyWeak(param_1 + _DAT_112712460);
  _objc_destroyWeak(param_1 + _DAT_11271245c);
  _objc_destroyWeak(param_1 + _DAT_112712458);
  _objc_destroyWeak(param_1 + _DAT_112712454);
  _objc_destroyWeak(param_1 + _DAT_112712450);
  _objc_destroyWeak(param_1 + _DAT_11271244c);
  _objc_destroyWeak(param_1 + _DAT_112712448);
  _objc_destroyWeak(param_1 + _DAT_112712444);
  _objc_destroyWeak(param_1 + _DAT_112712440);
  _objc_destroyWeak(param_1 + _DAT_11271243c);
  _objc_destroyWeak(param_1 + _DAT_112712438);
  _objc_destroyWeak(param_1 + _DAT_112712434);
  _objc_destroyWeak(param_1 + _DAT_112712430);
  _objc_destroyWeak(param_1 + _DAT_11271242c);
  _objc_destroyWeak(param_1 + _DAT_112712428);
  _objc_destroyWeak(param_1 + _DAT_112712424);
  _objc_destroyWeak(param_1 + _DAT_112712420);
  _objc_destroyWeak(param_1 + _DAT_11271241c);
  _objc_destroyWeak(param_1 + _DAT_112712418);
  _objc_destroyWeak(param_1 + _DAT_112712414);
  _objc_destroyWeak(param_1 + _DAT_112712410);
  _objc_destroyWeak(param_1 + _DAT_11271240c);
  _objc_destroyWeak(param_1 + _DAT_112712408);
  _objc_destroyWeak(param_1 + _DAT_112712404);
  _objc_destroyWeak(param_1 + _DAT_112712400);
  _objc_destroyWeak(param_1 + _DAT_1127123fc);
  _objc_destroyWeak(param_1 + _DAT_1127123f8);
  _objc_destroyWeak(param_1 + _DAT_1127123f4);
  _objc_destroyWeak(param_1 + _DAT_1127123f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127123ec,0);
  return;
}



/* Entry: 104d798dc; end: 104d7a1a7; -[SCDirectorModeFeatureProviderPluginWorkflow initWithCameraUIScope:cameraUIServices:cameraSnapModelServices:privateFeatureContainer:cameraConfigurationServices:userSession:valdiRuntimeProvider:cameraHardwareServices:cameraRequestHandlerServices:cameraViewfinderServices:cameraUserLoggingServices:memoriesPickerV2ScopeExposer:memoriesPickerV2ScopeServices:snapVideoFilterServices:previewAssetVideoProviderFactory:ngsmePlayerFactory:videoImportServices:memoriesTrackingImageProcessCommandScopeExposer:lensExplorerNavigationServices:lensPickerServices:featureUpdateEventSubject:applicationLifecycleEvents:cameraActivePathServices:snapRecoveryServices:thumbnailGenerationServices:contentDeliveryServices:legacyCameraTooltipsService:cameraSnapCreationLogger:temporaryFileWriter:lensCarouselStudySettingsServices:lensProcessingLensModeServices:lensCarouselProcessingServices:lensCarouselFeatureServices:memoriesExperimentService:ngsmeSnapDocResolver:snapDocManager:snapEditorTweakServices:cameraFeaturePerformanceFeatureScopedLoggerFactory:memoriesDirectorModeDraftScopeExposer:snapPageSource:circumstanceEngine:memoriesDirectorModeDraftProvider:featureSettingsServices:directorModeMediaProvider:templateExplorerScopeExposer:templateServices:cameraDeviceSettingsResolver:userPreferenceTimeProviderServices:userPreferences:spotlightPostingConfiguration:musicExperiments:currentPageTracker:memoriesContentFetcher:tinsel:alwaysOnMediaPickerToggleContainerManager:memoriesPickerUtilServices:] */

undefined8 *
FUN_104d798dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_58);
  puStack_70 = PTR_PTR_1126e41a0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 4,param_7);
    _objc_storeWeak(puVar1 + 0x20,param_6);
    _objc_storeWeak(puVar1 + 5,param_8);
    _objc_storeWeak(puVar1 + 6,param_9);
    _objc_storeWeak(puVar1 + 7,param_10);
    _objc_storeWeak(puVar1 + 8,param_11);
    _objc_storeWeak(puVar1 + 9,param_12);
    _objc_storeWeak(puVar1 + 10,param_13);
    _objc_storeWeak(puVar1 + 0xb,param_14);
    _objc_storeWeak(puVar1 + 0xc,param_15);
    _objc_storeWeak(puVar1 + 0xd,param_16);
    _objc_storeWeak(puVar1 + 0xe,param_17);
    _objc_storeWeak(puVar1 + 0xf,param_18);
    _objc_storeWeak(puVar1 + 0x10,param_19);
    _objc_storeWeak(puVar1 + 0x11,param_20);
    _objc_storeWeak(puVar1 + 0x12,param_21);
    _objc_storeWeak(puVar1 + 0x13,param_22);
    _objc_storeWeak(puVar1 + 0x15,param_23);
    _objc_storeWeak(puVar1 + 0x14,param_24);
    _objc_storeWeak(puVar1 + 0x16,param_25);
    _objc_retain(param_26);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_26;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x1a,param_27);
    _objc_storeWeak(puVar1 + 0x1b,param_28);
    _objc_storeWeak(puVar1 + 0x1c,param_29);
    _objc_storeWeak(puVar1 + 0x1d,param_30);
    _objc_storeWeak(puVar1 + 0x1e,param_31);
    _objc_storeWeak(puVar1 + 0x1f,param_33);
    _objc_storeWeak(puVar1 + 0x18,param_34);
    _objc_storeWeak(puVar1 + 0x19,param_35);
    _objc_storeWeak(puVar1 + 0x21,param_32);
    _objc_storeWeak(puVar1 + 0x22,param_40);
    _objc_storeWeak(puVar1 + 0x23,param_36);
    _objc_storeWeak(puVar1 + 0x24,param_37);
    _objc_storeWeak(puVar1 + 0x25,param_38);
    _objc_retain(param_39);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_39;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x27,param_41);
    puVar1[0x28] = param_42;
    _objc_retain(param_43);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_43;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x2a,param_44);
    _objc_storeWeak(puVar1 + 0x2b,param_45);
    _objc_retain(param_46);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_46;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_47;
    _objc_release(uVar2);
    _objc_retain(param_48);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_48;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x2f,param_49);
    _objc_retain(param_50);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_50;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x31,param_51);
    _objc_storeWeak(puVar1 + 0x32,param_52);
    _objc_retain(param_53);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_53;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x34,param_54);
    _objc_storeWeak(puVar1 + 0x35,param_55);
    _objc_retain(param_56);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_56;
    _objc_release(uVar2);
    _objc_retain(param_57);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_57;
    _objc_release(uVar2);
    _objc_retain(param_58);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_58;
    _objc_release(uVar2);
  }
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
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



/* Entry: 104d7a1a8; end: 104d7a1ab; -[SCDirectorModeFeatureProviderPluginWorkflow configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

void FUN_104d7a1a8(void)

{
  return;
}



/* Entry: 104d7a1ac; end: 104d7a1b3; -[SCDirectorModeFeatureProviderPluginWorkflow cameraFeatureCategory] */

undefined8 FUN_104d7a1ac(void)

{
  return 0;
}



/* Entry: 104d7a1b4; end: 104d7a1bb; -[SCDirectorModeFeatureProviderPluginWorkflow pluginResolutionOrder] */

undefined8 FUN_104d7a1b4(void)

{
  return 2;
}



/* Entry: 104d7a1bc; end: 104d7a6e3; -[SCDirectorModeFeatureProviderPluginWorkflow setupCameraFeaturesWithPublicCameraFeatureCatalog:withActivationServices:publicCameraFeatureCatalogProvider:] */

void FUN_104d7a1bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  code *pcStack_2c0;
  undefined *puStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  ppuVar5 = &puStack_2d0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104d7a6e4;
  puStack_90 = &UNK_11084e830;
  lStack_88 = param_1;
  _objc_retain(param_4);
  uStack_80 = param_4;
  _objc_retain(param_5);
  uStack_78 = param_5;
  _objc_retain(param_3);
  ppuVar2 = &puStack_a8;
  FUN_104d7a6e4(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18e2c0(param_3);
  _objc_release(ppuVar2);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_104d7b034;
  puStack_c8 = &UNK_11084e830;
  lStack_c0 = param_1;
  _objc_retain(param_4);
  uStack_b8 = param_4;
  _objc_retain(param_5);
  ppuVar2 = &puStack_e0;
  uStack_b0 = param_5;
  FUN_104d7b034(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9de0(param_3);
  _objc_release(ppuVar2);
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_104d7b41c;
  puStack_100 = &UNK_11084e830;
  lStack_f8 = param_1;
  _objc_retain(param_4);
  uStack_f0 = param_4;
  _objc_retain(param_5);
  ppuVar2 = &puStack_118;
  uStack_e8 = param_5;
  FUN_104d7b41c(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ab040(param_3);
  _objc_release(ppuVar2);
  puStack_150 = puVar1;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_104d7b944;
  puStack_138 = &UNK_11084e830;
  lStack_130 = param_1;
  _objc_retain(param_4);
  uStack_128 = param_4;
  _objc_retain(param_5);
  ppuVar2 = &puStack_150;
  uStack_120 = param_5;
  FUN_104d7b944(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18e340(param_3);
  _objc_release(ppuVar2);
  puStack_188 = puVar1;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_104d7bd4c;
  puStack_170 = &UNK_11084e830;
  lStack_168 = param_1;
  _objc_retain(param_4);
  uStack_160 = param_4;
  _objc_retain(param_5);
  ppuVar2 = &puStack_188;
  uStack_158 = param_5;
  FUN_104d7bd4c(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18e3c0(param_3);
  _objc_release(ppuVar2);
  puStack_1c0 = puVar1;
  uStack_1b8 = 0xc2000000;
  pcStack_1b0 = FUN_104d7c18c;
  puStack_1a8 = &UNK_11084e830;
  lStack_1a0 = param_1;
  _objc_retain(param_4);
  uStack_198 = param_4;
  _objc_retain(param_5);
  ppuVar2 = &puStack_1c0;
  uStack_190 = param_5;
  FUN_104d7c18c(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x1d0,ppuVar2);
  func_0x00010c1a4420(param_3);
  puStack_1f8 = puVar1;
  uStack_1f0 = 0xc2000000;
  pcStack_1e8 = FUN_104d7cb0c;
  puStack_1e0 = &UNK_11084e830;
  lStack_1d8 = param_1;
  _objc_retain(param_4);
  uStack_1d0 = param_4;
  _objc_retain(param_5);
  ppuVar3 = &puStack_1f8;
  uStack_1c8 = param_5;
  FUN_104d7cb0c(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x1c8,ppuVar3);
  func_0x00010c207c80(param_3);
  puStack_230 = puVar1;
  uStack_228 = 0xc2000000;
  pcStack_220 = FUN_104d7d058;
  puStack_218 = &UNK_11084e830;
  lStack_210 = param_1;
  _objc_retain(param_4);
  uStack_208 = param_4;
  _objc_retain(param_5);
  ppuVar4 = &puStack_230;
  uStack_200 = param_5;
  FUN_104d7d058(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c208fe0(param_3);
  _objc_release(ppuVar4);
  puStack_268 = puVar1;
  uStack_260 = 0xc2000000;
  pcStack_258 = FUN_104d7d538;
  puStack_250 = &UNK_11084e830;
  lStack_248 = param_1;
  _objc_retain(param_4);
  uStack_240 = param_4;
  _objc_retain(param_5);
  ppuVar4 = &puStack_268;
  uStack_238 = param_5;
  FUN_104d7d538(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176280(param_3);
  _objc_release(ppuVar4);
  puStack_298 = puVar1;
  uStack_290 = 0xc2000000;
  pcStack_288 = FUN_104d7d744;
  puStack_280 = &UNK_11084ea10;
  lStack_278 = param_1;
  _objc_retain(param_4);
  ppuVar4 = &puStack_298;
  uStack_270 = param_4;
  FUN_104d7d744(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2168e0(param_3);
  _objc_release(ppuVar4);
  puStack_2d0 = puVar1;
  uStack_2c8 = 0xc2000000;
  pcStack_2c0 = FUN_104d7da94;
  puStack_2b8 = &UNK_11084e830;
  lStack_2b0 = param_1;
  uStack_2a8 = param_4;
  uStack_2a0 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  FUN_104d7da94(&puStack_2d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1773a0(param_3);
  func_0x00010c18e540(param_3);
  _objc_release(param_3);
  _objc_release(ppuVar5);
  _objc_release(uStack_2a0);
  _objc_release(uStack_2a8);
  _objc_release(uStack_270);
  _objc_release(uStack_238);
  _objc_release(uStack_240);
  _objc_release(uStack_200);
  _objc_release(uStack_208);
  _objc_release(ppuVar3);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1d0);
  _objc_release(ppuVar2);
  _objc_release(uStack_190);
  _objc_release(uStack_198);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_release(uStack_120);
  _objc_release(uStack_128);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104d7a6e4; end: 104d7a867;  */

void FUN_104d7a6e4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dabc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d7a868;
  puStack_70 = &UNK_11084e800;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d7a868; end: 104d7aeb7;  */

void FUN_104d7a868(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
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
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  undefined **ppuVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined *puVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar3 == 0) {
    puVar59 = (undefined *)0x0;
  }
  else {
    puVar59 = PTR_PTR_1126b0118;
    _objc_alloc();
    lVar4 = lVar3 + 0x20;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3 + 0x28;
    _objc_loadWeakRetained();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf30b20();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c0d20c0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar3 + 200;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010c08d660();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c249ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c270700();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010befe700();
    _objc_retainAutoreleasedReturnValue();
    uVar54 = *(undefined8 *)(lVar3 + 0x18);
    lVar19 = lVar3 + 0x30;
    _objc_loadWeakRetained();
    lVar20 = lVar3 + 0x38;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar3 + 0x38;
    _objc_loadWeakRetained();
    lVar23 = lVar22;
    func_0x00010bf299a0();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar3 + 0x40;
    _objc_loadWeakRetained();
    lVar25 = lVar24;
    func_0x00010c135640();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar3 + 0x50;
    _objc_loadWeakRetained();
    lVar27 = lVar26;
    func_0x00010bf1cf00();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = lVar3 + 0x58;
    _objc_loadWeakRetained();
    lVar29 = lVar3 + 0x60;
    _objc_loadWeakRetained();
    lVar30 = lVar3 + 0x68;
    _objc_loadWeakRetained();
    lVar31 = lVar30;
    func_0x00010c243b20();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = lVar3 + 0x70;
    _objc_loadWeakRetained();
    lVar33 = lVar3 + 0x78;
    _objc_loadWeakRetained();
    lVar34 = lVar3 + 0x80;
    _objc_loadWeakRetained();
    lVar35 = lVar3 + 0x88;
    _objc_loadWeakRetained();
    lVar36 = lVar3 + 0xa0;
    _objc_loadWeakRetained();
    lVar37 = lVar3 + 8;
    _objc_loadWeakRetained();
    lVar38 = lVar37;
    func_0x00010c29c2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar39 = lVar3 + 0xb0;
    _objc_loadWeakRetained();
    uVar55 = *(undefined8 *)(lVar3 + 0xb8);
    lVar40 = lVar3 + 0xd0;
    _objc_loadWeakRetained();
    lVar41 = lVar3 + 0xd8;
    _objc_loadWeakRetained();
    lVar42 = lVar3 + 0xe0;
    _objc_loadWeakRetained();
    lVar43 = lVar3 + 0xe8;
    _objc_loadWeakRetained();
    lVar44 = lVar3 + 0xf0;
    _objc_loadWeakRetained();
    uVar45 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar46 = uVar45;
    func_0x00010bf2b840();
    _objc_retainAutoreleasedReturnValue();
    lVar47 = lVar3 + 0x118;
    _objc_loadWeakRetained();
    lVar48 = lVar3 + 0x120;
    _objc_loadWeakRetained();
    lVar49 = lVar3 + 0x128;
    _objc_loadWeakRetained();
    uVar56 = *(undefined8 *)(lVar3 + 0x130);
    lVar50 = lVar3 + 0x138;
    _objc_loadWeakRetained();
    uVar62 = *(undefined8 *)(lVar3 + 0x148);
    uVar61 = *(undefined8 *)(lVar3 + 0x140);
    uVar57 = *(undefined8 *)(lVar3 + 0x160);
    uVar58 = *(undefined8 *)(lVar3 + 0x180);
    lVar51 = lVar3 + 0x188;
    _objc_loadWeakRetained();
    lVar52 = lVar3 + 400;
    _objc_loadWeakRetained();
    uVar1 = *(undefined8 *)(lVar3 + 0x168);
    uVar2 = *(undefined8 *)(lVar3 + 0x170);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104d7aeb8;
    puStack_78 = &UNK_11084e7d0;
    uVar60 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar60);
    ppuVar53 = &puStack_90;
    uStack_70 = uVar60;
    FUN_104d7aeb8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffb140(puVar59,param_2,lVar5,lVar6,uVar8,uVar10,lVar12,uVar14,uVar16,uVar18,uVar54,
                        lVar19,lVar21,lVar23,lVar25,lVar27,lVar28,lVar29,lVar31,lVar32,lVar33,lVar34
                        ,lVar35,lVar36,lVar38,lVar39,uVar55,lVar40,lVar41,lVar42,lVar43,lVar44,
                        uVar46,lVar47,lVar48,lVar49,uVar56,lVar50,uVar61,uVar62,uVar57,uVar58,lVar51
                        ,lVar52,uVar1,uVar2,ppuVar53,*(undefined8 *)(lVar3 + 0x198),
                        *(undefined8 *)(lVar3 + 0x1b0),*(undefined8 *)(lVar3 + 0x1b8),
                        *(undefined8 *)(lVar3 + 0x1c0));
    _objc_release(ppuVar53);
    _objc_release(uStack_70);
    _objc_release(lVar52);
    _objc_release(lVar51);
    _objc_release(lVar50);
    _objc_release(lVar49);
    _objc_release(lVar48);
    _objc_release(lVar47);
    _objc_release(uVar46);
    _objc_release(uVar45);
    _objc_release(lVar44);
    _objc_release(lVar43);
    _objc_release(lVar42);
    _objc_release(lVar41);
    _objc_release(lVar40);
    _objc_release(lVar39);
    _objc_release(lVar38);
    _objc_release(lVar37);
    _objc_release(lVar36);
    _objc_release(lVar35);
    _objc_release(lVar34);
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
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar59);
  return;
}



/* Entry: 104d7aeb8; end: 104d7af93;  */

void FUN_104d7aeb8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d7af94; end: 104d7b003;  */

void FUN_104d7af94(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf2b3c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104d7b004; end: 104d7b033;  */

bool FUN_104d7b004(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 104d7b034; end: 104d7b1b7;  */

void FUN_104d7b034(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0daba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d7b1b8;
  puStack_70 = &UNK_11084e860;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d7b1b8; end: 104d7b287;  */

void FUN_104d7b1b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b0128;
    _objc_alloc(PTR_PTR_1126b0128);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104d7b288;
    puStack_40 = &UNK_11084e7d0;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    ppuVar2 = &puStack_58;
    uStack_38 = uVar3;
    FUN_104d7b288(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00c980(puVar4,param_2,ppuVar2);
    _objc_release(ppuVar2);
    _objc_release(uStack_38);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104d7b288; end: 104d7b363;  */

void FUN_104d7b288(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d7b364; end: 104d7b3d3;  */

void FUN_104d7b364(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf7f1c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104d7b3d4; end: 104d7b41b;  */

long FUN_104d7b3d4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010beb37a0(param_1);
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 104d7b41c; end: 104d7b637;  */

void FUN_104d7b41c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,*(undefined8 *)(param_1 + 0x20));
  puVar8 = PTR_PTR_1126b0110;
  lVar1 = *(long *)(param_1 + 0x20) + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c104920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf87280();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  if ((int)lVar5 == 0) {
    func_0x00010c0daba0(uVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf5c420();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104d7b638;
  puStack_90 = &UNK_11084e890;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar9);
  uStack_88 = uVar9;
  func_0x00010bf11fe0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_78);
  func_0x00010c124f00(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar7);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 104d7b638; end: 104d7b7c7;  */

void FUN_104d7b638(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR_PTR_1126b0130;
    _objc_alloc(PTR_PTR_1126b0130);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104d7b7c8;
    puStack_70 = &UNK_11084e7d0;
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar10);
    ppuVar2 = &puStack_88;
    uStack_68 = uVar10;
    FUN_104d7b7c8(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1 + 200;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c090c40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1 + 0x20;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c104920();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1 + 0x1a8;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar1 + 0xd8;
    _objc_loadWeakRetained(lVar9);
    func_0x00010c00c9c0(puVar11,param_2,ppuVar2,lVar4,lVar7,lVar8,lVar9);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(ppuVar2);
    _objc_release(uStack_68);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 104d7b7c8; end: 104d7b8a3;  */

void FUN_104d7b7c8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d7b8a4; end: 104d7b913;  */

void FUN_104d7b8a4(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf7f1c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104d7b914; end: 104d7b943;  */

bool FUN_104d7b914(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 104d7b944; end: 104d7bac7;  */

void FUN_104d7b944(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0daba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d7bac8;
  puStack_70 = &UNK_11084e8c0;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d7bac8; end: 104d7bbcf;  */

void FUN_104d7bac8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126b0138;
    _objc_alloc(PTR_PTR_1126b0138);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104d7bbd0;
    puStack_50 = &UNK_11084e7d0;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    ppuVar2 = &puStack_68;
    uStack_48 = uVar5;
    FUN_104d7bbd0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1 + 0xa8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar1 + 0x150;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c00c9a0(puVar6,param_2,ppuVar2,lVar3,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(ppuVar2);
    _objc_release(uStack_48);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104d7bbd0; end: 104d7bcab;  */

void FUN_104d7bbd0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d7bcac; end: 104d7bd1b;  */

void FUN_104d7bcac(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf7f1c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104d7bd1c; end: 104d7bd4b;  */

bool FUN_104d7bd1c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 104d7bd4c; end: 104d7becf;  */

void FUN_104d7bd4c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0daba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d7bed0;
  puStack_70 = &UNK_11084e8f0;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}


