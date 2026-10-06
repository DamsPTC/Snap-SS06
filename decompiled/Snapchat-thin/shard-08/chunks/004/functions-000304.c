/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106140fc0; end: 106140fff; -[SCFeatureBatchCaptureImpl setBatchCaptureRecoveryData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106140fc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740454;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106141000; end: 10614100f; -[SCFeatureBatchCaptureImpl cameraViewType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106141000(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127403f8);
}



/* Entry: 106141010; end: 10614101f; -[SCFeatureBatchCaptureImpl setCameraViewType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106141010(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127403f8) = param_3;
  return;
}



/* Entry: 106141020; end: 10614103f; -[SCFeatureBatchCaptureImpl captureComponent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106141020(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127403d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106141040; end: 106141053; -[SCFeatureBatchCaptureImpl setCaptureComponent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106141040(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127403d0,param_3);
  return;
}



/* Entry: 106141054; end: 106141063; -[SCFeatureBatchCaptureImpl creationTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106141054(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740474);
}



/* Entry: 106141064; end: 1061410a3; -[SCFeatureBatchCaptureImpl setCreationTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106141064(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740474;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061410a4; end: 1061410b3; -[SCFeatureBatchCaptureImpl coreCameraLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061410a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127403e8);
}



/* Entry: 1061410b4; end: 1061410f3; -[SCFeatureBatchCaptureImpl setCoreCameraLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061410b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127403e8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061410f4; end: 106141103; -[SCFeatureBatchCaptureImpl managedCapturerState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061410f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740468);
}



/* Entry: 106141104; end: 106141143; -[SCFeatureBatchCaptureImpl setManagedCapturerState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106141104(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740468;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106141144; end: 10614138b; -[SCFeatureBatchCaptureImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106141144(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112740468,0);
  _objc_storeStrong(param_1 + _DAT_1127403e8,0);
  _objc_storeStrong(param_1 + _DAT_112740474,0);
  _objc_destroyWeak(param_1 + _DAT_1127403d0);
  _objc_storeStrong(param_1 + _DAT_112740454,0);
  _objc_storeStrong(param_1 + _DAT_112740434,0);
  _objc_storeStrong(param_1 + _DAT_1127403fc,0);
  _objc_storeStrong(param_1 + _DAT_112740424,0);
  _objc_destroyWeak(param_1 + _DAT_112740464);
  _objc_destroyWeak(param_1 + _DAT_112740460);
  _objc_storeStrong(param_1 + _DAT_11274041c,0);
  _objc_storeStrong(param_1 + _DAT_112740458,0);
  _objc_storeStrong(param_1 + _DAT_1127403d4,0);
  _objc_storeStrong(param_1 + _DAT_112740410,0);
  _objc_storeStrong(param_1 + _DAT_11274040c,0);
  _objc_storeStrong(param_1 + _DAT_112740404,0);
  _objc_storeStrong(param_1 + _DAT_1127403f4,0);
  _objc_destroyWeak(param_1 + _DAT_112740400);
  _objc_destroyWeak(param_1 + _DAT_112740418);
  _objc_storeStrong(param_1 + _DAT_11274045c,0);
  _objc_storeStrong(param_1 + _DAT_112740470,0);
  _objc_storeStrong(param_1 + _DAT_112740414,0);
  _objc_storeStrong(param_1 + _DAT_112740408,0);
  _objc_storeStrong(param_1 + _DAT_1127403f0,0);
  _objc_storeStrong(param_1 + _DAT_1127403ec,0);
  _objc_storeStrong(param_1 + _DAT_112740444,0);
  _objc_storeStrong(param_1 + _DAT_112740440,0);
  _objc_storeStrong(param_1 + _DAT_1127403e0,0);
  _objc_storeStrong(param_1 + _DAT_112740430,0);
  _objc_storeStrong(param_1 + _DAT_11274042c,0);
  _objc_storeStrong(param_1 + _DAT_11274043c,0);
  _objc_storeStrong(param_1 + _DAT_1127403e4,0);
  _objc_destroyWeak(param_1 + _DAT_11274046c);
  _objc_destroyWeak(param_1 + _DAT_1127403d8);
  _objc_destroyWeak(param_1 + _DAT_112740428);
  _objc_destroyWeak(param_1 + _DAT_1127403dc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112740438);
  return;
}



/* Entry: 10614138c; end: 106141547; -[SCFeatureBatchCaptureImpl batchCaptureConfiguration:didDeleteSegment:atIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614138c(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c083320();
  puVar2 = PTR_PTR_1126c4280;
  if ((int)uVar1 != 0) {
    _objc_retain(param_4);
    _objc_opt_class(puVar2);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    func_0x00010be8b380(param_1);
    _objc_release(uVar1);
  }
  func_0x00010beda560(param_1);
  uVar1 = param_4;
  func_0x00010c0819a0();
  if ((uVar1 & 1) == 0) {
    lVar4 = param_1;
    func_0x00010bf16ac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e2c0();
    _objc_release(lVar4);
  }
  func_0x00010c177320(*(undefined8 *)(param_1 + _DAT_112740424));
  uVar1 = param_4;
  func_0x00010bf81060();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    lVar4 = param_1;
    func_0x00010be01ae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18e100();
    if (*(long *)(param_1 + _DAT_112740440) != 0) {
      func_0x00010c1ffc60(lVar4);
    }
    lVar5 = param_3;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf529e0();
    _objc_release(lVar5);
    if (lVar6 == 0) {
      func_0x00010c1b5b40(lVar4);
    }
    func_0x00010be5a680(param_1);
    _objc_release(lVar4);
  }
  lVar4 = param_1;
  func_0x00010be9d520();
  if (lVar4 == 0) {
    func_0x00010c137fe0(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106141548; end: 10614154b; -[SCFeatureBatchCaptureImpl batchCaptureConfiguration:didDeleteSnapAtIndexPath:] */

void FUN_106141548(void)

{
  return;
}



/* Entry: 10614154c; end: 10614154f; -[SCFeatureBatchCaptureImpl batchCaptureConfiguration:didSplitSnapAtIndexPath:splitTime:] */

void FUN_10614154c(void)

{
  return;
}



/* Entry: 106141550; end: 1061416a7; -[SCFeatureBatchCaptureImpl batchCaptureConfiguration:didAddSegment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106141550(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c083320();
  puVar2 = PTR_PTR_1126c4280;
  if ((int)uVar1 != 0) {
    _objc_retain(param_4);
    _objc_opt_class(puVar2);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    lVar6 = (long)_DAT_1127403ec;
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf0b7e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0899c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc900(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c120480(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar3;
    func_0x00010c0899c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc900(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1061416a8; end: 1061418e7; -[SCFeatureBatchCaptureImpl batchCaptureConfigurationWillDeleteAllSegments:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061416a8(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        uVar9 = *(ulong *)(lStack_128 + lVar8 * 8);
        uVar2 = uVar9;
        func_0x00010bf81060();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar2 != 0) {
          uVar2 = uVar9;
          func_0x00010bf81060(uVar9);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = param_1;
          func_0x00010be01ae0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          if (*(long *)(param_1 + (long)_DAT_112740440) != 0) {
            func_0x00010c1ffc60(uVar3);
          }
          uVar2 = uVar3;
          func_0x00010bf0a640();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010baf6220();
          _objc_release(uVar4);
          _objc_release(uVar2);
          if (uVar5 < 5 && (1L << (uVar5 & 0x3f) & 0x15U) != 0) {
            func_0x00010c1b5b40(uVar3);
            func_0x00010be5a680(param_1);
          }
          _objc_release(uVar3);
        }
        puVar6 = PTR_PTR_1126c4280;
        _objc_retain(uVar9);
        _objc_opt_class(puVar6);
        uVar3 = uVar9;
        _objc_opt_isKindOfClass(uVar9,puVar6);
        uVar2 = uVar9;
        if ((uVar3 & 1) == 0) {
          uVar2 = 0;
        }
        _objc_retain(uVar2);
        _objc_release(uVar9);
        if (uVar2 != 0) {
          func_0x00010be8b380(param_1);
        }
        _objc_release(uVar2);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_3;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (*(undefined1 **)(param_3 + _DAT_112740434) == (undefined1 *)0x0 ||
      (undefined8 *)*(undefined1 **)(param_3 + _DAT_112740434) == puVar7) {
    lVar1 = param_3;
    func_0x00010bf16ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b020();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_reset_11262ba18);
    return;
  }
  return;
}



/* Entry: 1061418e8; end: 10614193f; -[SCFeatureBatchCaptureImpl batchCaptureConfigurationDidDeleteAllSegments:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061418e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_112740434) == 0 || *(long *)(param_1 + _DAT_112740434) == param_3) {
    lVar1 = param_1;
    func_0x00010bf16ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b020();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reset_11262ba18);
    return;
  }
  return;
}



/* Entry: 106141940; end: 106141ad3; -[SCFeatureBatchCaptureImpl _directSnapDiscardFromDiscardLoggingParams:] */

void FUN_106141940(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c4bf8;
    _objc_alloc_init(PTR_PTR_1126c4bf8);
    lVar1 = param_4;
    func_0x00010bfd65a0();
    if ((int)lVar1 != 0) {
      func_0x00010bf21200(param_4);
      func_0x00010c173c60(puVar2);
      func_0x00010c083ec0(param_4);
      func_0x00010c1a9600(puVar2,param_3,(long)param_1);
      func_0x00010bf04ae0(param_4);
      func_0x00010c168620(puVar2);
      lVar1 = param_4;
      func_0x00010befdac0(param_4);
      func_0x00010c225ba0(puVar2,param_3,lVar1);
      lVar1 = param_4;
      func_0x00010befdaa0(param_4);
      func_0x00010c225b80(puVar2,param_3,lVar1);
      func_0x00010c23b560(param_4);
      func_0x00010c2027a0(puVar2);
    }
    lVar1 = param_4;
    func_0x00010bf31200(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179280(puVar2,param_3,lVar1);
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c243340(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205660(puVar2,param_3,lVar1);
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010bf29fc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176a60(puVar2,param_3,lVar1);
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c094540(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c240(puVar2,param_3,lVar1);
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c083b40(param_4);
    func_0x00010c1b5b40(puVar2,param_3,lVar1);
    lVar1 = param_4;
    func_0x00010bf81080(param_4);
    func_0x00010c18e100(puVar2,param_3,lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106141ad4; end: 106141b43; -[SCFeatureBatchCaptureImpl _logUserTrackedEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106141ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112740400;
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



/* Entry: 106141b44; end: 106141d43; -[SCFeatureARSessionBlurLoadingViewImpl initWithApplicationLifecycleEvents:viewControllerLifecycleEvents:cameraHardwareResource:lensLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106141b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126efdc8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11274047c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740480,param_4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740484);
    *(undefined **)((long)puVar1 + (long)_DAT_112740484) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740488);
    *(undefined **)((long)puVar1 + (long)_DAT_112740488) = puVar3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11274048c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = param_3;
    func_0x00010bf75dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106141d44; end: 106141d6f;  */

void FUN_106141d44(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106141d70; end: 106141da7; -[SCFeatureARSessionBlurLoadingViewImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106141d70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740490);
  *(undefined8 *)(param_1 + _DAT_112740490) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106141da8; end: 106141fb3; -[SCFeatureARSessionBlurLoadingViewImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106141da8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if ((*(byte *)(param_1 + _DAT_112740494) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112740494) = 1;
    func_0x00010bdeb660();
    lVar8 = (long)_DAT_112740498;
    func_0x00010c066fc0(*(undefined8 *)(param_1 + _DAT_112740490));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8));
    lVar8 = (long)_DAT_11274047c;
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
    func_0x00010c24f8a0(param_1);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_initWeak(auStack_68,param_1);
    param_1 = param_1 + _DAT_112740480;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_70,auStack_68);
    lVar8 = param_1;
    func_0x00010c25ff60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar8);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 106141fb4; end: 106142077;  */

void FUN_106141fb4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c15c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106142078; end: 106142087;  */

void FUN_106142078(void)

{
  return;
}



/* Entry: 106142088; end: 1061420b3;  */

void FUN_106142088(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be33260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061420b4; end: 10614214b; -[SCFeatureARSessionBlurLoadingViewImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061420b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010c256420();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274047c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c256480(param_1);
  puStack_38 = PTR_PTR_1126efdc8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10614214c; end: 10614240f; -[SCFeatureARSessionBlurLoadingViewImpl _createBlurLoadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614214c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_112740490;
  if ((*(long *)(param_1 + lVar7) != 0) &&
     (lVar6 = (long)_DAT_112740498, unaff_x19 = param_1, *(long *)(param_1 + lVar6) == 0)) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c013de0();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6));
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x00010bf8cf60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_11274049c);
    *(undefined **)(param_1 + _DAT_11274049c) = puVar1;
    _objc_release(uVar5);
    puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_alloc();
    func_0x00010c00ee20();
    lVar8 = (long)_DAT_1127404a0;
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar1;
    _objc_release(uVar5);
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar6));
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar8));
    func_0x00010c16d4a0(*(undefined8 *)(param_1 + lVar8));
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar6));
    puVar1 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    lVar6 = (long)_DAT_1127404a4;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
    func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar6));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6));
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bf4dce0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(uVar5);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    unaff_x20 = *(long *)(param_1 + lVar6);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bf348e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = unaff_x20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    lStack_68 = lVar7;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = *(long *)(param_1 + lVar8);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_60 = uVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar4);
    _objc_release(uVar5);
    _objc_release(unaff_x19);
    _objc_release(uVar3);
    _objc_release(lVar7);
    _objc_release(uVar2);
    param_1 = unaff_x20;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_106142410;
  if (*(long *)(param_1 + _DAT_112740498) != 0) {
    lStack_90 = unaff_x20;
    lStack_88 = unaff_x19;
    puStack_80 = &stack0xfffffffffffffff0;
    _objc_initWeak(auStack_98,param_1);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1061424c8;
    puStack_a8 = &UNK_1108434b0;
    _objc_copyWeak(auStack_a0,auStack_98);
    func_0x0001000d76cc("APPSTORE",&puStack_c0);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
  }
  return;
}



/* Entry: 106142410; end: 1061424c7; -[SCFeatureARSessionBlurLoadingViewImpl _hideBlurLoadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106142410(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + _DAT_112740498) != 0) {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1061424c8;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1061424c8; end: 10614258b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061424c8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(ulong *)(param_1 + _DAT_112740498);
    func_0x00010c074c20();
    if ((uVar1 & 1) == 0) {
      func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_1127404a4));
      puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_40 = 0xc2000000;
      pcStack_38 = FUN_10614258c;
      puStack_30 = &UNK_110842e18;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      uStack_60 = 0x1061425a4;
      puStack_58 = &UNK_110841f20;
      lStack_50 = param_1;
      lStack_28 = param_1;
      func_0x00010bf03420(0x3fb999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48,
                          &puStack_70);
    }
  }
  _objc_release(param_1);
  return;
}



/* Entry: 10614258c; end: 1061425bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614258c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c193d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127404a0),
             PTR_s_setEffect__112642968,0);
  return;
}



/* Entry: 1061425bc; end: 106142673; -[SCFeatureARSessionBlurLoadingViewImpl _showBlurLoadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061425bc(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + _DAT_112740498) != 0) {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_106142674;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 106142674; end: 10614275f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106142674(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_112740498;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
    func_0x00010c074c20();
    if (iVar1 != 0) {
      func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_1127404a4));
      func_0x00010c193d20(*(undefined8 *)(param_1 + _DAT_1127404a0),param_2,0);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,0);
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_106142760;
      puStack_40 = &UNK_110842e18;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      uStack_70 = 0x10614277c;
      puStack_68 = &UNK_110841f20;
      lStack_60 = param_1;
      lStack_38 = param_1;
      func_0x00010bf03420(0x3fb999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_58,
                          &puStack_80);
    }
  }
  _objc_release(param_1);
  return;
}



/* Entry: 106142760; end: 10614278f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106142760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c193d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127404a0),
             PTR_s_setEffect__112642968,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274049c));
  return;
}



/* Entry: 106142790; end: 1061428af; -[SCFeatureARSessionBlurLoadingViewImpl _didChangeARSessionActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106142790(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c1b0f40(param_1);
  uVar1 = param_3;
  func_0x00010bf093c0();
  _objc_release(param_3);
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274048c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09300();
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274047c);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa260();
    _objc_release(uVar1);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010beb8130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showBlurLoadingView_11258b9f0);
    return;
  }
  func_0x00010be35480(param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274047c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1061428b0; end: 106142917; -[SCFeatureARSessionBlurLoadingViewImpl _didReceiveManagedVideoDataSouceEvent:sampleTimestamp:devicePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061428b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c072f40();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274048c);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf092e0();
    _objc_release(uVar2);
    func_0x00010c1b0f40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be35490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideBlurLoadingView_11256aec0);
    return;
  }
  return;
}



/* Entry: 106142918; end: 10614291b; -[SCFeatureARSessionBlurLoadingViewImpl _handleApplicationDidEnterBackground] */

void FUN_106142918(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be35490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideBlurLoadingView_11256aec0);
  return;
}



/* Entry: 10614291c; end: 10614291f; -[SCFeatureARSessionBlurLoadingViewImpl _handleViewDidDisappear] */

void FUN_10614291c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be35490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideBlurLoadingView_11256aec0);
  return;
}



/* Entry: 106142920; end: 106142abb; -[SCFeatureARSessionBlurLoadingViewImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106142920(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_initWeak(auStack_68,param_1);
  lVar6 = (long)_DAT_1127404a8;
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
    func_0x00010c0987a0();
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
  }
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106142abc; end: 106142b5f;  */

void FUN_106142abc(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e3880(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106142b60; end: 106142ba7;  */

void FUN_106142b60(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc760();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106142ba8; end: 106142bdb; -[SCFeatureARSessionBlurLoadingViewImpl stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106142ba8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127404a8;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106142bdc; end: 106142cc3; -[SCFeatureARSessionBlurLoadingViewImpl startObservingManagedVideoDataSourceOutputEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106142bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_1127404ac;
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



/* Entry: 106142cc4; end: 106142d6f;  */

void FUN_106142cc4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd5e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106142d70; end: 106142e03;  */

void FUN_106142d70(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1494c0(param_2);
  _objc_release(param_2);
  func_0x00010bdff520(param_1);
  _objc_release(param_1);
  return;
}



/* Entry: 106142e04; end: 106142e37; -[SCFeatureARSessionBlurLoadingViewImpl stopObservingManagedVideoDataSourceOutputEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106142e04(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127404ac;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106142e38; end: 106142e4b; -[SCFeatureARSessionBlurLoadingViewImpl isFirstARSampleBuffer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_106142e38(long param_1)

{
  return *(byte *)(param_1 + _DAT_112740478) & 1;
}



/* Entry: 106142e4c; end: 106142e5b; -[SCFeatureARSessionBlurLoadingViewImpl setIsFirstARSampleBuffer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106142e4c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112740478) = param_3;
  return;
}



/* Entry: 106142e5c; end: 106142f37; -[SCFeatureARSessionBlurLoadingViewImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106142e5c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127404ac,0);
  _objc_storeStrong(param_1 + _DAT_1127404a8,0);
  _objc_storeStrong(param_1 + _DAT_112740484,0);
  _objc_storeStrong(param_1 + _DAT_112740488,0);
  _objc_destroyWeak(param_1 + _DAT_112740480);
  _objc_storeStrong(param_1 + _DAT_11274048c,0);
  _objc_storeStrong(param_1 + _DAT_11274047c,0);
  _objc_storeStrong(param_1 + _DAT_1127404a4,0);
  _objc_storeStrong(param_1 + _DAT_11274049c,0);
  _objc_storeStrong(param_1 + _DAT_1127404a0,0);
  _objc_storeStrong(param_1 + _DAT_112740498,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740490,0);
  return;
}



/* Entry: 106142f38; end: 106143033; -[SCFeatureCameraCreationDelayLogger initWithCoreCameraLogger:cameraViewType:cameraHardwareResource:captureDeviceManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106142f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126efdd0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127404b0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127404b4) = param_4;
    lVar3 = (long)_DAT_1127404b8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127404bc;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106143034; end: 106143083; -[SCFeatureCameraCreationDelayLogger beginObservingVideoCaptureEvents:imageCaptureEvents:] */

void FUN_106143034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010be65d40(param_1,param_2,param_3);
  func_0x00010be65d00(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106143084; end: 1061431f3; -[SCFeatureCameraCreationDelayLogger _observeCaptureVideoStrategyEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106143084(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + _DAT_1127404b0));
  _objc_initWeak(auStack_40,*(undefined8 *)(param_1 + _DAT_1127404b8));
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + _DAT_1127404bc));
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127404b4);
  _objc_copyWeak(auStack_68,auStack_48);
  _objc_copyWeak(auStack_60,auStack_40);
  _objc_copyWeak(auStack_58,auStack_38);
  uVar1 = param_3;
  uStack_50 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127404c0);
  *(undefined8 *)(param_1 + _DAT_1127404c0) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1061431f4; end: 10614343f;  */

void FUN_1061431f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106143440;
  puStack_98 = &UNK_110910998;
  _objc_copyWeak(auStack_90,param_1 + 0x20);
  _objc_copyWeak(auStack_88,param_1 + 0x28);
  _objc_copyWeak(auStack_80,param_1 + 0x30);
  uStack_78 = *(undefined8 *)(param_1 + 0x38);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106143814;
  puStack_c0 = &UNK_11084ec30;
  _objc_copyWeak(auStack_b8,param_1 + 0x30);
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x106143858;
  puStack_e8 = &UNK_11084ec30;
  _objc_copyWeak(auStack_e0,param_1 + 0x30);
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  uStack_118 = 0x1061438a8;
  puStack_110 = &UNK_11084ec30;
  _objc_copyWeak(auStack_108,param_1 + 0x30);
  puStack_150 = puVar1;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_1061438ec;
  puStack_138 = &UNK_11090d2a0;
  _objc_copyWeak(auStack_130,param_1 + 0x30);
  _objc_copyWeak(auStack_158,param_1 + 0x30);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_158);
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_90);
  _objc_release(param_2);
  return;
}



/* Entry: 106143440; end: 10614374b;  */

void FUN_106143440(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf2fa00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2 + 0x28;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70d80();
  lVar7 = lVar3;
  func_0x00010bf71200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bef0a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b5980();
  func_0x00010c098f60();
  func_0x00010c078b80();
  func_0x00010bf70d80();
  func_0x00010bfb24e0();
  uVar10 = param_4;
  func_0x00010bf9d760();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010bef0520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1412c0();
  func_0x00010bf2b540();
  FUN_10614374c();
  _objc_release(param_4);
  func_0x00010c0a1f40(lVar4);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar4);
  _objc_release(lVar1);
  param_2 = param_2 + 0x30;
  _objc_loadWeakRetained(param_2);
  lVar1 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c270720(param_3);
  func_0x00010bf16740(param_3);
  func_0x00010c2701a0(param_3);
  func_0x00010c0d3100(param_3);
  func_0x00010c249d00(param_3);
  func_0x00010c123ea0(param_3);
  _objc_release(param_3);
  func_0x00010c0a2140(param_1,lVar1);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 10614374c; end: 106143813;  */

long FUN_10614374c(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c1410c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c141120();
  _objc_release(lVar2);
  if (lVar1 == 2) {
    lVar2 = 2;
  }
  else {
    lVar2 = param_1;
    func_0x00010c1410c0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c141120();
    _objc_release(lVar2);
    if (lVar1 == 1) {
      lVar2 = 1;
    }
    else {
      lVar1 = param_1;
      func_0x00010c1410c0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c141120();
      _objc_release(lVar1);
      if (lVar2 != 3) {
        lVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 106143814; end: 1061438eb;  */

void FUN_106143814(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2040();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061438ec; end: 106143a0f;  */

void FUN_1061438ec(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c0a2040();
  }
  else {
    func_0x00010bf2e060();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106143a10; end: 106143b7f; -[SCFeatureCameraCreationDelayLogger _observeCaptureImageStrategyEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106143a10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + _DAT_1127404b0));
  _objc_initWeak(auStack_40,*(undefined8 *)(param_1 + _DAT_1127404b8));
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + _DAT_1127404bc));
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127404b4);
  _objc_copyWeak(auStack_68,auStack_48);
  _objc_copyWeak(auStack_60,auStack_40);
  _objc_copyWeak(auStack_58,auStack_38);
  uVar1 = param_3;
  uStack_50 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127404c4);
  *(undefined8 *)(param_1 + _DAT_1127404c4) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106143b80; end: 106143c6b;  */

void FUN_106143b80(long param_1,undefined8 param_2)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_50,param_1 + 0x20);
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  _objc_copyWeak(auStack_40,param_1 + 0x30);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0c17a0(param_2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 106143c6c; end: 106143ec7;  */

void FUN_106143c6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf2fa00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70d80();
  lVar7 = lVar3;
  func_0x00010bf71200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  func_0x00010bef0a60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b5980();
  func_0x00010c098f60();
  func_0x00010c078b80();
  func_0x00010bf70d80(param_3);
  func_0x00010bfb24e0();
  uVar10 = param_3;
  func_0x00010bf9d760();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_2;
  func_0x00010bef0520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1412c0();
  func_0x00010bf2b540();
  _objc_release(param_2);
  FUN_10614374c();
  _objc_release(param_3);
  func_0x00010c0a1f40(lVar1);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 106143ec8; end: 106143f47; -[SCFeatureCameraCreationDelayLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106143ec8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127404c8,0);
  _objc_storeStrong(param_1 + _DAT_1127404c0,0);
  _objc_storeStrong(param_1 + _DAT_1127404c4,0);
  _objc_storeStrong(param_1 + _DAT_1127404bc,0);
  _objc_storeStrong(param_1 + _DAT_1127404b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127404b0,0);
  return;
}



/* Entry: 106143f48; end: 106144173; -[SCFeatureStackingCameraModeActivationCoordinator initWithLensCarouselManager:cameraModes:cameraViewType:cameraHardwareResource:lensCarouselApplicator:lensCarouselSettingsServices:lensStackingConfiguration:viewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:applicationLifecycleEvents:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106143f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126efdd8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127404cc,param_3);
    lVar4 = (long)_DAT_1127404d0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127404d4,param_7);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127404d8,param_8);
    lVar4 = (long)_DAT_1127404dc;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127404e0) = param_5;
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127404e4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127404e4) = puVar3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127404e8;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
    func_0x00010be78080(puVar1);
    func_0x00010be89b80(puVar1);
    func_0x00010be670a0(puVar1);
    func_0x00010be65d20(puVar1);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106144174; end: 1061441c3; -[SCFeatureStackingCameraModeActivationCoordinator performer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106144174(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127404d0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1061441c4; end: 10614431f; -[SCFeatureStackingCameraModeActivationCoordinator _prepareCameraModes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061441c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c124d20(param_3,param_2,&PTR___NSConcreteGlobalBlock_110910a78,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  uVar3 = uVar1;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127404ec);
  *(undefined8 *)(param_1 + _DAT_1127404ec) = uVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106144320; end: 106144493; -[SCFeatureStackingCameraModeActivationCoordinator _cameraModesToRestore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106144320(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106144494;
  puStack_60 = &UNK_110910a98;
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_1111800e0;
  lStack_58 = param_1;
  func_0x00010bf43280(&PTR__OBJC_CLASS___NSConstantArray_1111800e0,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bf529e0();
  ppuVar5 = ppuVar3;
  if ((undefined **)0x1 < ppuVar4) {
    func_0x00010bfaea20(ppuVar3,param_2,&PTR___NSConcreteGlobalBlock_110910ae8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
  }
  ppuVar3 = ppuVar5;
  func_0x00010bf529e0();
  ppuVar4 = ppuVar5;
  if (((undefined **)0x1 < ppuVar3) || (*(char *)(param_1 + _DAT_1127404f0) == '\x01')) {
    puStack_a0 = puVar1;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106144510;
    puStack_88 = &UNK_110910b08;
    lStack_80 = param_1;
    func_0x00010bfaea20(ppuVar5,param_2,&puStack_a0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    if (*(char *)(param_1 + _DAT_1127404f0) == '\x01') {
      iVar2 = (int)*(undefined8 *)(param_1 + _DAT_1127404f4);
      func_0x00010c0f0620();
      if (iVar2 != 0) {
        ppuVar3 = ppuVar4;
        func_0x00010bfaea20(ppuVar4,param_2,&PTR___NSConcreteGlobalBlock_110910b38);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar4);
        ppuVar4 = ppuVar3;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 106144494; end: 1061444ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106144494(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127404ec);
  func_0x00010c0dff20(uVar2,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c232b20();
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061444f0; end: 10614450f;  */

bool FUN_1061444f0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf29fa0(param_2);
  return (int)param_2 != 0x15;
}



/* Entry: 106144510; end: 10614458b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106144510(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf29fa0(param_2);
  FUN_10614458c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127404dc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf927c0();
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 10614458c; end: 10614468b;  */

void FUN_10614458c(int param_1)

{
  if (param_1 < 0xf) {
    if (param_1 == 3) {
      func_0x00010c0da400(PTR_PTR_1126b9b28);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_1 == 4) {
      func_0x00010c0d1d00(PTR_PTR_1126b9b28);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_1 == 9) {
      func_0x00010c2734e0(PTR_PTR_1126b9b28);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_1 == 0xf) {
    func_0x00010bfce220(PTR_PTR_1126b9b28);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 0x16) {
    func_0x00010c129620(PTR_PTR_1126b9b28);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 0x15) {
    func_0x00010c15b0c0(PTR_PTR_1126b9b28);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10614468c; end: 10614484b; -[SCFeatureStackingCameraModeActivationCoordinator _restoreModeIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614468c(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_240;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [128];
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar15 = &uStack_1d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(char *)(param_1 + _DAT_1127404f8) == '\x01') &&
     ((*(byte *)(param_1 + _DAT_1127404fc) & 1) == 0)) {
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    lStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    plStack_180 = (long *)0x0;
    lVar5 = *(long *)(param_1 + _DAT_1127404ec);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    param_3 = &uStack_190;
    param_4 = auStack_c8;
    lVar19 = lVar5;
    func_0x00010bf52a60();
    if (lVar19 != 0) {
      lVar17 = *plStack_180;
      do {
        lVar18 = 0;
        do {
          if (*plStack_180 != lVar17) {
            _objc_enumerationMutation(lVar5);
          }
          uVar6 = *(ulong *)(lStack_188 + lVar18 * 8);
          func_0x00010c06dec0();
          if ((uVar6 & 1) != 0) goto LAB_106144810;
          lVar18 = lVar18 + 1;
        } while (lVar19 != lVar18);
        param_3 = &uStack_190;
        param_4 = auStack_c8;
        lVar19 = lVar5;
        func_0x00010bf52a60();
      } while (lVar19 != 0);
    }
    _objc_release(lVar5);
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    lStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    plStack_1c0 = (long *)0x0;
    func_0x00010bdd9320();
    _objc_retainAutoreleasedReturnValue();
    param_4 = auStack_148;
    lVar19 = param_1;
    func_0x00010bf52a60();
    param_3 = puVar15;
    lVar5 = param_1;
    if (lVar19 != 0) {
      lVar17 = *plStack_1c0;
      do {
        lVar18 = 0;
        do {
          if (*plStack_1c0 != lVar17) {
            _objc_enumerationMutation(param_1);
          }
          func_0x00010bf11680(*(undefined8 *)(lStack_1c8 + lVar18 * 8));
          lVar18 = lVar18 + 1;
        } while (lVar19 != lVar18);
        param_4 = auStack_148;
        lVar19 = param_1;
        param_3 = &uStack_1d0;
        func_0x00010bf52a60();
      } while (lVar19 != 0);
    }
LAB_106144810:
    param_1 = lVar5;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lStack_240 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = param_3;
  _objc_retain(param_4);
  puVar7 = param_4;
  func_0x00010c0f0620();
  bVar2 = *(byte *)(param_1 + _DAT_1127404f0);
  *(char *)(param_1 + _DAT_1127404f0) = (char)param_3;
  lVar19 = (long)_DAT_1127404f4;
  _objc_retain(param_4);
  uVar8 = *(undefined8 *)(param_1 + lVar19);
  *(undefined1 **)(param_1 + lVar19) = param_4;
  _objc_release(uVar8);
  if ((int)param_3 == 0) {
    if (bVar2 != 0) {
      func_0x00010be956e0(param_1);
    }
  }
  else {
    if ((bVar2 & 1) == 0) {
      uVar8 = *(undefined8 *)(param_1 + _DAT_112740500);
      *(undefined8 *)(param_1 + _DAT_112740500) = 0;
      _objc_release(uVar8);
    }
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    lStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    plStack_2f0 = (long *)0x0;
    lVar5 = *(long *)(param_1 + _DAT_1127404ec);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = &uStack_300;
    lVar19 = lVar5;
    func_0x00010bf52a60();
    if (lVar19 != 0) {
      lVar17 = *plStack_2f0;
      do {
        lVar18 = 0;
        do {
          if (*plStack_2f0 != lVar17) {
            _objc_enumerationMutation(lVar5);
          }
          uVar20 = *(undefined8 *)(lStack_2f8 + lVar18 * 8);
          uVar8 = uVar20;
          func_0x00010bf29fa0();
          FUN_10614458c();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = *(undefined8 *)(param_1 + _DAT_1127404dc);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar9;
          func_0x00010bf927c0();
          _objc_release(uVar9);
          if ((int)puVar7 == 0) {
            uVar16 = 0;
          }
          else {
            uVar9 = uVar20;
            func_0x00010bf29fa0();
            uVar16 = (uint)((int)uVar9 == 0x15);
          }
          uVar1 = (uint)uVar11 ^ 1;
          uVar3 = uVar1 | uVar16;
          uVar11 = uVar20;
          func_0x00010c06dec0();
          if (((int)uVar11 == 0) || ((uVar1 & 1) == 0 && uVar16 == 0)) {
            uVar11 = uVar20;
            func_0x00010c232b20();
            if (((int)uVar11 != 0) &&
               (uVar11 = uVar20, func_0x00010c06dec0(), (((uint)uVar11 | uVar3) & 1) == 0)) {
              func_0x00010bf11680(uVar20);
            }
          }
          else {
            func_0x00010bf7f9e0(uVar20);
          }
          uVar11 = uVar20;
          func_0x00010c06dee0();
          if (((uint)uVar11 & uVar3) == 1) {
            func_0x00010bf834a0(uVar20);
          }
          _objc_release(uVar8);
          lVar18 = lVar18 + 1;
        } while (lVar19 != lVar18);
        puVar15 = &uStack_300;
        lVar19 = lVar5;
        func_0x00010bf52a60();
      } while (lVar19 != 0);
    }
    _objc_release(lVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_240) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar15);
  func_0x00010befa120(*(undefined8 *)(param_4 + _DAT_1127404e4),param_2,puVar15);
  func_0x00010bf834a0(puVar15);
  if ((param_4[_DAT_1127404f0] == '\x01') && (*(long *)(param_4 + _DAT_112740504) == 0)) {
    puVar10 = puVar15;
    func_0x00010bf29fa0(puVar15);
    FUN_10614458c();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_4 + _DAT_1127404dc);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar11;
    func_0x00010bf927c0();
    _objc_release(uVar11);
    puVar12 = puVar15;
    func_0x00010bf29fa0();
    if ((int)puVar12 == 0x15) {
      iVar4 = (int)*(undefined8 *)(param_4 + _DAT_1127404f4);
      func_0x00010c0f0620();
    }
    else {
      iVar4 = 0;
    }
    if ((int)uVar8 == 0 || iVar4 != 0) {
      lVar19 = (long)_DAT_1127404d4;
      puVar7 = param_4 + lVar19;
      _objc_loadWeakRetained();
      puVar13 = puVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010bf07e60();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_4 + _DAT_112740500);
      *(undefined1 **)(param_4 + _DAT_112740500) = puVar14;
      _objc_release(uVar8);
      _objc_release(puVar13);
      _objc_release(puVar7);
      puVar13 = param_4;
      func_0x00010bdca5c0();
      puVar7 = param_4 + _DAT_112740508;
      _objc_loadWeakRetained(puVar7);
      if ((int)puVar13 == 0) {
        func_0x00010bf65b20(puVar7);
        _objc_release(puVar7);
        puVar7 = param_4 + lVar19;
        _objc_loadWeakRetained(puVar7);
        puVar13 = puVar7;
        func_0x00010bfe6360();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3b720();
        _objc_release(puVar13);
      }
      else {
        func_0x00010c158ca0(puVar7,param_2,&PTR____CFConstantStringClassReference_110e3d018);
      }
      _objc_release(puVar7);
    }
    _objc_release(puVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar15);
  return;
}



/* Entry: 10614484c; end: 106144aab; -[SCFeatureStackingCameraModeActivationCoordinator _onCarouselActivated:lens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614484c(long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_3;
  _objc_retain(param_4);
  lVar5 = param_4;
  func_0x00010c0f0620();
  bVar2 = *(byte *)(param_1 + _DAT_1127404f0);
  *(char *)(param_1 + _DAT_1127404f0) = (char)param_3;
  lVar15 = (long)_DAT_1127404f4;
  _objc_retain(param_4);
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  *(long *)(param_1 + lVar15) = param_4;
  _objc_release(uVar6);
  if ((int)param_3 == 0) {
    if (bVar2 != 0) {
      func_0x00010be956e0(param_1);
    }
  }
  else {
    if ((bVar2 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_1 + _DAT_112740500);
      *(undefined8 *)(param_1 + _DAT_112740500) = 0;
      _objc_release(uVar6);
    }
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar7 = *(long *)(param_1 + _DAT_1127404ec);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = &uStack_130;
    lVar15 = lVar7;
    func_0x00010bf52a60();
    if (lVar15 != 0) {
      lVar17 = *plStack_120;
      do {
        lVar14 = 0;
        do {
          if (*plStack_120 != lVar17) {
            _objc_enumerationMutation(lVar7);
          }
          uVar16 = *(undefined8 *)(lStack_128 + lVar14 * 8);
          uVar6 = uVar16;
          func_0x00010bf29fa0();
          FUN_10614458c();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(param_1 + _DAT_1127404dc);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar8;
          func_0x00010bf927c0();
          _objc_release(uVar8);
          if ((int)lVar5 == 0) {
            uVar13 = 0;
          }
          else {
            uVar8 = uVar16;
            func_0x00010bf29fa0();
            uVar13 = (uint)((int)uVar8 == 0x15);
          }
          uVar1 = (uint)uVar10 ^ 1;
          uVar3 = uVar1 | uVar13;
          uVar10 = uVar16;
          func_0x00010c06dec0();
          if (((int)uVar10 == 0) || ((uVar1 & 1) == 0 && uVar13 == 0)) {
            uVar10 = uVar16;
            func_0x00010c232b20();
            if (((int)uVar10 != 0) &&
               (uVar10 = uVar16, func_0x00010c06dec0(), (((uint)uVar10 | uVar3) & 1) == 0)) {
              func_0x00010bf11680(uVar16);
            }
          }
          else {
            func_0x00010bf7f9e0(uVar16);
          }
          uVar10 = uVar16;
          func_0x00010c06dee0();
          if (((uint)uVar10 & uVar3) == 1) {
            func_0x00010bf834a0(uVar16);
          }
          _objc_release(uVar6);
          lVar14 = lVar14 + 1;
        } while (lVar15 != lVar14);
        puVar12 = &uStack_130;
        lVar15 = lVar7;
        func_0x00010bf52a60();
      } while (lVar15 != 0);
    }
    _objc_release(lVar7);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar12);
  func_0x00010befa120(*(undefined8 *)(param_4 + _DAT_1127404e4),param_2,puVar12);
  func_0x00010bf834a0(puVar12);
  if ((*(char *)(param_4 + _DAT_1127404f0) == '\x01') && (*(long *)(param_4 + _DAT_112740504) == 0))
  {
    puVar9 = puVar12;
    func_0x00010bf29fa0(puVar12);
    FUN_10614458c();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_4 + _DAT_1127404dc);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar10;
    func_0x00010bf927c0();
    _objc_release(uVar10);
    puVar11 = puVar12;
    func_0x00010bf29fa0();
    if ((int)puVar11 == 0x15) {
      iVar4 = (int)*(undefined8 *)(param_4 + _DAT_1127404f4);
      func_0x00010c0f0620();
    }
    else {
      iVar4 = 0;
    }
    if ((int)uVar6 == 0 || iVar4 != 0) {
      lVar17 = (long)_DAT_1127404d4;
      lVar5 = param_4 + lVar17;
      _objc_loadWeakRetained();
      lVar15 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar15;
      func_0x00010bf07e60();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_4 + _DAT_112740500);
      *(long *)(param_4 + _DAT_112740500) = lVar7;
      _objc_release(uVar6);
      _objc_release(lVar15);
      _objc_release(lVar5);
      lVar15 = param_4;
      func_0x00010bdca5c0();
      lVar5 = param_4 + _DAT_112740508;
      _objc_loadWeakRetained(lVar5);
      if ((int)lVar15 == 0) {
        func_0x00010bf65b20(lVar5);
        _objc_release(lVar5);
        lVar5 = param_4 + lVar17;
        _objc_loadWeakRetained(lVar5);
        lVar15 = lVar5;
        func_0x00010bfe6360();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3b720();
        _objc_release(lVar15);
      }
      else {
        func_0x00010c158ca0(lVar5,param_2,&PTR____CFConstantStringClassReference_110e3d018);
      }
      _objc_release(lVar5);
    }
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 106144aac; end: 106144c83; -[SCFeatureStackingCameraModeActivationCoordinator _onWillEnableCameraMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106144aac(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_1127404e4),param_2,param_3);
  func_0x00010bf834a0(param_3);
  if ((*(char *)(param_1 + _DAT_1127404f0) == '\x01') && (*(long *)(param_1 + _DAT_112740504) == 0))
  {
    uVar2 = param_3;
    func_0x00010bf29fa0(param_3);
    FUN_10614458c();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127404dc);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf927c0();
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010bf29fa0();
    if ((int)uVar3 == 0x15) {
      iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127404f4);
      func_0x00010c0f0620();
    }
    else {
      iVar1 = 0;
    }
    if ((int)uVar7 == 0 || iVar1 != 0) {
      lVar8 = (long)_DAT_1127404d4;
      lVar4 = param_1 + lVar8;
      _objc_loadWeakRetained();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf07e60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + _DAT_112740500);
      *(long *)(param_1 + _DAT_112740500) = lVar6;
      _objc_release(uVar7);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar5 = param_1;
      func_0x00010bdca5c0();
      lVar4 = param_1 + _DAT_112740508;
      _objc_loadWeakRetained(lVar4);
      if ((int)lVar5 == 0) {
        func_0x00010bf65b20(lVar4);
        _objc_release(lVar4);
        lVar4 = param_1 + lVar8;
        _objc_loadWeakRetained(lVar4);
        lVar5 = lVar4;
        func_0x00010bfe6360();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3b720();
        _objc_release(lVar5);
      }
      else {
        func_0x00010c158ca0(lVar4,param_2,&PTR____CFConstantStringClassReference_110e3d018);
      }
      _objc_release(lVar4);
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106144c84; end: 106144e2b; -[SCFeatureStackingCameraModeActivationCoordinator _onWillDisableCameraMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106144c84(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_1127404e4;
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + lVar7),param_2,param_3);
    if (*(long *)(param_1 + _DAT_112740504) == 0) {
      uVar2 = param_3;
      func_0x00010bf29fa0(param_3);
      FUN_10614458c();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(ulong *)(param_1 + _DAT_1127404dc);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf927c0();
      _objc_release(uVar3);
      if ((((uVar4 & 1) == 0) && (uVar4 = param_3, func_0x00010c06dee0(), (uVar4 & 1) == 0)) &&
         ((*(byte *)(param_1 + _DAT_1127404f0) & 1) == 0)) {
        lVar8 = (long)_DAT_112740500;
        lVar7 = *(long *)(param_1 + lVar8);
        if (lVar7 == 0) {
          func_0x00010be956e0(param_1);
        }
        else {
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = param_1;
          func_0x00010bdca5c0();
          lVar6 = param_1 + _DAT_112740508;
          _objc_loadWeakRetained(lVar6);
          if ((int)lVar5 == 0) {
            func_0x00010beeffc0();
          }
          else {
            func_0x00010c158ca0();
          }
          _objc_release(lVar6);
          uVar1 = *(undefined8 *)(param_1 + lVar8);
          *(undefined8 *)(param_1 + lVar8) = 0;
          _objc_release(uVar1);
          _objc_release(lVar7);
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + _DAT_112740504) = 0;
      _objc_release();
      uVar1 = *(undefined8 *)(param_1 + _DAT_112740500);
      *(undefined8 *)(param_1 + _DAT_112740500) = 0;
      _objc_release(uVar1);
      uVar2 = param_1 + _DAT_112740508;
      _objc_loadWeakRetained(uVar2);
      func_0x00010c158ca0();
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106144e2c; end: 106144ea3; -[SCFeatureStackingCameraModeActivationCoordinator _alwaysOnCarouselEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106144e2c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_1127404d8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c091180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf02120();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 106144ea4; end: 106144fb7; -[SCFeatureStackingCameraModeActivationCoordinator _registerObserversIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106144ea4(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274050c);
  *(undefined **)(param_1 + _DAT_11274050c) = puVar1;
  _objc_release(uVar3);
  func_0x00010be89240(param_1);
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + _DAT_1127404cc;
  _objc_loadWeakRetained(param_1);
  puVar2 = auStack_40;
  _objc_copyWeak(puVar2,auStack_38);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(param_1);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106144fb8; end: 1061450e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106144fb8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (param_2 != 0)) && (param_3 == 0)) {
    lVar2 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(lVar1 + _DAT_112740508,lVar2);
    _objc_release(lVar2);
    lVar2 = lVar1 + _DAT_1127404d4;
    _objc_loadWeakRetained(lVar2);
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    func_0x00010c0e33e0(lVar2);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1061450e4; end: 10614512b;  */

void FUN_1061450e4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be89880();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10614512c; end: 10614534f; -[SCFeatureStackingCameraModeActivationCoordinator _registerCameraModesObservers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614512c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  lVar6 = (long)_DAT_1127404ec;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010c0cab40(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x106145454;
  puStack_88 = &UNK_110910be8;
  _objc_copyWeak(auStack_80,auStack_78);
  puVar4 = puVar3;
  func_0x00010c25ff60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf00d20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010c0cab40(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  puVar4 = puVar3;
  func_0x00010c25ff60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 106145350; end: 106145423;  */

void FUN_106145350(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2a5760(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  uVar3 = uVar2;
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106145424; end: 10614542b;  */

void FUN_106145424(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 10614542c; end: 10614549b;  */

void FUN_10614542c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10614549c; end: 10614556f;  */

void FUN_10614549c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2a5e00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  uVar3 = uVar2;
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106145570; end: 106145577;  */

void FUN_106145570(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 106145578; end: 1061455e7;  */

void FUN_106145578(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061455e8; end: 1061459cf; -[SCFeatureStackingCameraModeActivationCoordinator _registerLensObserversForNonLensesStackingWithLensCarouselApplicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061455e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
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
  _objc_initWeak(auStack_80,param_1);
  lVar1 = param_1;
  func_0x00010bdca5c0();
  lVar14 = (long)_DAT_112740508;
  lVar2 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar2);
  if ((int)lVar1 == 0) {
    lVar1 = lVar2;
    func_0x00010bef0b80(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar1;
    func_0x00010c0e0ec0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = auStack_d8;
    _objc_copyWeak(puVar13,auStack_80);
    lVar12 = lVar11;
    func_0x00010c25ff60(lVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar14);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  else {
    lVar1 = lVar2;
    func_0x00010bef0b80(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar1;
    func_0x00010c0e0ec0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1061459d0;
    puStack_90 = &UNK_11084eff0;
    puVar13 = auStack_88;
    _objc_copyWeak(puVar13,auStack_80);
    lVar3 = lVar12;
    func_0x00010c25ff60(lVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar3);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar1);
    _objc_release(lVar2);
    uVar4 = param_3;
    func_0x00010bf7dd80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0e0ec0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + lVar14;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010bef0b80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c2b2440(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c0e0ec0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_106145ae4;
    puStack_b8 = &UNK_110857828;
    _objc_copyWeak(auStack_b0,auStack_80);
    uVar10 = uVar9;
    func_0x00010c25ff60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(lVar2);
    _objc_release(param_1);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_b0);
  }
  _objc_destroyWeak(puVar13);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_3);
  return;
}



/* Entry: 1061459d0; end: 106145ae3;  */

void FUN_1061459d0(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    uVar1 = param_2;
    func_0x00010c079580();
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if ((uVar1 & 1) != 0) {
      lVar3 = lVar2;
      func_0x00010be42f40();
      _objc_release(lVar2);
      if ((int)lVar3 == 0) goto LAB_106145a54;
      lVar2 = param_1 + 0x20;
      _objc_loadWeakRetained(lVar2);
    }
    func_0x00010be68280();
    _objc_release(lVar2);
  }
LAB_106145a54:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106145ae4; end: 106145b1f;  */

void FUN_106145ae4(long param_1,long param_2)

{
  if (param_2 != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106145b20; end: 106145bc3;  */

void FUN_106145b20(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (lVar1 == 0) {
    func_0x00010be68280(param_1);
  }
  else {
    lVar1 = param_2;
    func_0x00010c0ec5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be68280(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106145bc4; end: 106145e8f; -[SCFeatureStackingCameraModeActivationCoordinator _observeViewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:applicationLifecycleEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106145bc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
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
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112740510);
  *(undefined **)(param_1 + _DAT_112740510) = puVar1;
  _objc_release(uVar3);
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (*(long *)(param_1 + _DAT_1127404e0) == 0) {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106145e90;
    puStack_90 = &UNK_11090b470;
    puVar4 = auStack_88;
    _objc_copyWeak(puVar4,auStack_80);
    uVar3 = param_4;
    func_0x00010c25ff60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
  }
  else {
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_106145fec;
    puStack_b8 = &UNK_11084e590;
    puVar4 = auStack_b0;
    _objc_copyWeak(puVar4,auStack_80);
    uVar3 = param_3;
    func_0x00010c25ff60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
  }
  _objc_release(uVar3);
  _objc_destroyWeak(puVar4);
  uVar3 = param_5;
  func_0x00010c2a6420(param_5);
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_106146154;
  puStack_e0 = &UNK_110846510;
  _objc_copyWeak(auStack_d8,auStack_80);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = param_5;
  func_0x00010bf75dc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_100,auStack_80);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106145e90; end: 106145f8b;  */

void FUN_106145e90(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106145f8c;
  puStack_60 = &UNK_1108434b0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0c1540(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 106145f8c; end: 106145fb7;  */

void FUN_106145f8c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e50a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106145fb8; end: 106145fbf;  */

void FUN_106145fb8(void)

{
  return;
}



/* Entry: 106145fc0; end: 106145feb;  */

void FUN_106145fc0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e50e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106145fec; end: 1061460ef;  */

void FUN_106145fec(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1061460f8;
  puStack_60 = &UNK_110849200;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0c15c0(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 1061460f0; end: 1061460f7;  */

void FUN_1061460f0(void)

{
  return;
}



/* Entry: 1061460f8; end: 10614614f;  */

void FUN_1061460f8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e78a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106146150; end: 106146153;  */

void FUN_106146150(void)

{
  return;
}



/* Entry: 106146154; end: 1061461ab;  */

void FUN_106146154(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e28c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061461ac; end: 1061461bf; -[SCFeatureStackingCameraModeActivationCoordinator onViewDidAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061461ac(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_1127404f8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be956f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__restoreModeIfNecessary_112582f58);
  return;
}


