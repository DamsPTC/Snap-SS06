/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060c8b04; end: 1060c8d1b; -[SCFeatureVideoCaptureFailureMessageImpl _didFailRecordingWithError:] */

void FUN_1060c8b04(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf3ec40();
  if ((long)param_3 < -0x2e20) {
    if (param_3 == (undefined **)0xffffffffffffce82) {
LAB_1060c8ba0:
      param_3 = &PTR____CFConstantStringClassReference_110e3d898;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e3d898,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = param_3;
      func_0x0001060c8df0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1060c8bf8;
    }
    if (param_3 == (undefined **)0xffffffffffffd1d6) {
      param_3 = (undefined **)0x0;
      ppuVar7 = (undefined **)0x0;
      goto LAB_1060c8bf8;
    }
  }
  else {
    if (param_3 == (undefined **)0xffffffffffffd1e1) goto LAB_1060c8ba0;
    if (param_3 == (undefined **)0xffffffffffffd1e0) {
      func_0x0001060c8da8();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = param_3;
      func_0x0001060c8dc0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1060c8bf8;
    }
  }
  func_0x0001060c8dd8();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110dd8a38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dd8a38,0);
  _objc_retainAutoreleasedReturnValue();
LAB_1060c8bf8:
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  uVar5 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  if (param_3 != (undefined **)0x0) {
    puVar3 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar3);
    _objc_release(puVar4);
    func_0x00010beff5e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eda0();
    _objc_release(param_1);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(ppuVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar5,PTR_s_dismissViewControllerAnimated_co_1125bec68,0,0);
    return;
  }
  return;
}



/* Entry: 1060c8d1c; end: 1060c8d2b;  */

void FUN_1060c8d1c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,0,0);
  return;
}



/* Entry: 1060c8d2c; end: 1060c8d4b; -[SCFeatureVideoCaptureFailureMessageImpl alertMessagePresentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c8d2c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273ee50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060c8d4c; end: 1060c8d5f; -[SCFeatureVideoCaptureFailureMessageImpl setAlertMessagePresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c8d4c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273ee50,param_3);
  return;
}



/* Entry: 1060c8d60; end: 1060c8da7; -[SCFeatureVideoCaptureFailureMessageImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c8d60(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273ee50);
  _objc_storeStrong(param_1 + _DAT_11273ee48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273ee4c);
  return;
}



/* Entry: 1060c8da8; end: 1060c8e07;  */

void FUN_1060c8da8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3d8b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e3d8b8,
                      &PTR____CFConstantStringClassReference_110e3d8d8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1060c8e08; end: 1060c8e13; -[SCContextAwareLensesActiveThrottleRequest shouldThrottle:] */

bool FUN_1060c8e08(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 1;
}



/* Entry: 1060c8e14; end: 1060c8e1b; -[SCContextAwareLensesActiveThrottleRequest shouldSuspendGlobalConcurrentPerformer] */

undefined8 FUN_1060c8e14(void)

{
  return 1;
}



/* Entry: 1060c8e1c; end: 1060c8e27; -[SCContextAwareLensesActiveThrottleRequest requestID] */

undefined ** FUN_1060c8e1c(void)

{
  return &PTR____CFConstantStringClassReference_110e3d958;
}



/* Entry: 1060c8e28; end: 1060c8eef; -[SCContextAwareLensesActiveThrottleRequest isEqual:] */

ulong FUN_1060c8e28(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    uVar2 = 1;
  }
  else {
    if (param_3 != 0) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar1 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar1 & 1) != 0) {
        _objc_retain(param_3);
        func_0x00010c1356e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_3;
        func_0x00010c1356e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_3);
        uVar2 = param_1;
        func_0x00010c0720c0(param_1);
        _objc_release(uVar1);
        _objc_release(param_1);
        goto LAB_1060c8ed4;
      }
    }
    uVar2 = 0;
  }
LAB_1060c8ed4:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1060c8ef0; end: 1060c8f2b; -[SCContextAwareLensesActiveThrottleRequest hash] */

undefined8 FUN_1060c8ef0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1356e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1060c8f2c; end: 1060c9043; -[SCFeatureActiveLensViewFinderOptimizationsImpl initWithViewControllerLifecycleEvents:lensCarouselManager:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1060c8f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ef910;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11273ee54;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11273ee58),param_5);
    lVar4 = (long)_DAT_11273ee5c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273ee60);
    *(undefined **)((long)puVar1 + (long)_DAT_11273ee60) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273ee64) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273ee68) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273ee6c) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060c9044; end: 1060c91ff; -[SCFeatureActiveLensViewFinderOptimizationsImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c9044(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if ((*(byte *)(param_1 + _DAT_11273ee70) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_11273ee70) = 1;
    func_0x00010be3b860();
    _objc_initWeak(auStack_68,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273ee54);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1060c9200;
    puStack_78 = &UNK_11084e590;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11273ee5c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bef1060();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_98,auStack_68);
    uVar2 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 1060c9200; end: 1060c9303;  */

void FUN_1060c9200(long param_1,undefined8 param_2)

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
  pcStack_68 = FUN_1060c930c;
  puStack_60 = &UNK_110849200;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0c15c0(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 1060c9304; end: 1060c930b;  */

void FUN_1060c9304(void)

{
  return;
}



/* Entry: 1060c930c; end: 1060c93af;  */

void FUN_1060c930c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010be713a0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1060c93b0; end: 1060c93df;  */

void FUN_1060c93b0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed4bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c93e0; end: 1060c93e3;  */

void FUN_1060c93e0(void)

{
  return;
}



/* Entry: 1060c93e4; end: 1060c9487;  */

void FUN_1060c93e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010be713a0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1060c9488; end: 1060c94b7;  */

void FUN_1060c9488(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed4bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c94b8; end: 1060c9583;  */

void FUN_1060c94b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be713a0(lVar1);
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1060c9584; end: 1060c95c3;  */

void FUN_1060c9584(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f3c0(uVar2);
  func_0x00010bea5440(lVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060c95c4; end: 1060c965b; -[SCFeatureActiveLensViewFinderOptimizationsImpl _handleOptimizations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c95c4(long param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + _DAT_11273ee6c) == '\x01') {
    cVar1 = *(char *)(param_1 + _DAT_11273ee64);
    if (*(char *)(param_1 + _DAT_11273ee68) == cVar1) {
      return;
    }
    *(char *)(param_1 + _DAT_11273ee68) = cVar1;
    if (cVar1 != '\0') {
      func_0x00010bdd35c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdd3ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__beginQueueThrottlingOptimizatio_112552850);
      return;
    }
  }
  else {
    if (*(char *)(param_1 + _DAT_11273ee68) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + _DAT_11273ee68) = 0;
  }
  func_0x00010be09a60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be09c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__endQueueThrottlingOptimization_1125600c0);
  return;
}



/* Entry: 1060c965c; end: 1060c96af; -[SCFeatureActiveLensViewFinderOptimizationsImpl _initializePerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c965c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273ee74);
  *(undefined **)(param_1 + _DAT_11273ee74) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1060c96b0; end: 1060c96bf; -[SCFeatureActiveLensViewFinderOptimizationsImpl _perform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c96b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f7fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273ee74),PTR_s_perform__11261ba10);
  return;
}



/* Entry: 1060c96c0; end: 1060c96cf; -[SCFeatureActiveLensViewFinderOptimizationsImpl _setLensesActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c96c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11273ee64) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be2d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleOptimizations_112568f80);
  return;
}



/* Entry: 1060c96d0; end: 1060c96df; -[SCFeatureActiveLensViewFinderOptimizationsImpl _updateCameraViewVisiblity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c96d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11273ee6c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be2d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleOptimizations_112568f80);
  return;
}



/* Entry: 1060c96e0; end: 1060c9723; -[SCFeatureActiveLensViewFinderOptimizationsImpl _beginIdleMonitorOptimization] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c96e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7ad0;
  param_1 = param_1 + _DAT_11273ee58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c08fd20(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c9724; end: 1060c97bf; -[SCFeatureActiveLensViewFinderOptimizationsImpl _beginQueueThrottlingOptimization] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c9724(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c7ad0;
  param_1 = param_1 + _DAT_11273ee58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c08fce0(puVar1,param_2,param_1);
  _objc_release(param_1);
  if ((int)puVar1 != 0) {
    puVar1 = PTR_PTR_1126b6b18;
    func_0x00010c22b6a0(PTR_PTR_1126b6b18);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c7c28;
    _objc_opt_new(PTR_PTR_1126c7c28);
    func_0x00010bf96420(puVar1,param_2,puVar2);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1060c97c0; end: 1060c9803; -[SCFeatureActiveLensViewFinderOptimizationsImpl _endIdleMonitorOptimization] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c97c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7ad0;
  param_1 = param_1 + _DAT_11273ee58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c08fd20(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c9804; end: 1060c989f; -[SCFeatureActiveLensViewFinderOptimizationsImpl _endQueueThrottlingOptimization] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c9804(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c7ad0;
  param_1 = param_1 + _DAT_11273ee58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c08fce0(puVar1,param_2,param_1);
  _objc_release(param_1);
  if ((int)puVar1 != 0) {
    puVar1 = PTR_PTR_1126b6b18;
    func_0x00010c22b6a0(PTR_PTR_1126b6b18);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c7c28;
    _objc_opt_new(PTR_PTR_1126c7c28);
    func_0x00010bf96440(puVar1,param_2,puVar2);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1060c98a0; end: 1060c990b; -[SCFeatureActiveLensViewFinderOptimizationsImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c98a0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273ee58);
  _objc_storeStrong(param_1 + _DAT_11273ee54,0);
  _objc_storeStrong(param_1 + _DAT_11273ee5c,0);
  _objc_storeStrong(param_1 + _DAT_11273ee74,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273ee60,0);
  return;
}



/* Entry: 1060c990c; end: 1060c99c7; -[SCFeatureLens3DModeActivatorImpl initWithCameraHardwareServicesAPI:cameraToolbar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1060c990c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ef918;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273ee78;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273ee7c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060c99c8; end: 1060c9a73; -[SCFeatureLens3DModeActivatorImpl activate3DMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c99c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273ee78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afed0;
  func_0x00010c0db140(PTR_PTR_1126afed0);
  puVar4 = &UNK_10f365962;
  uVar5 = 0x39;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db92b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18cd00(uVar1,param_2,0,puVar2,&PTR___NSConcreteGlobalBlock_11090d430,puVar3,in_x6,
                      in_x7,puVar4,uVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060c9a74; end: 1060c9a77;  */

void FUN_1060c9a74(void)

{
  return;
}



/* Entry: 1060c9a78; end: 1060c9ab7; -[SCFeatureLens3DModeActivatorImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c9a78(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273ee7c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273ee78,0);
  return;
}



/* Entry: 1060c9ab8; end: 1060c9d1b; -[SCModularCameraBatchCaptureFeatureProviderPluginWorkflow initWithCameraUIScope:userSession:cameraUIServices:cameraSnapModelServices:userPreferenceTimeProviderServices:coreCameraLogger:applicationLifecycleEvents:cameraConfigurationServices:cameraActivePathServices:cameraHardwareServices:lazyUserTrackedLogger:locationProvider:cameraModeActivationController:lensPlusSnapDocRecordProvider:] */

undefined8 *
FUN_1060c9ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain();
  _objc_retain();
  puStack_68 = PTR_PTR_1126ef920;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_storeWeak(puVar1 + 3,param_5);
    _objc_retain(param_6);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_6;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 4,param_7);
    _objc_storeWeak(puVar1 + 5,param_8);
    _objc_storeWeak(puVar1 + 6,param_9);
    _objc_storeWeak(puVar1 + 7,param_10);
    _objc_storeWeak(puVar1 + 8,param_11);
    _objc_storeWeak(puVar1 + 9,param_12);
    _objc_storeWeak(puVar1 + 10,param_13);
    _objc_storeWeak(puVar1 + 0xb,param_14);
    _objc_storeWeak(puVar1 + 0xd,param_15);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
  }
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



/* Entry: 1060c9d1c; end: 1060c9d8b; -[SCModularCameraBatchCaptureFeatureProviderPluginWorkflow configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

void FUN_1060c9d1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c08d540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1274e0(param_3,param_2,lVar1,0);
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c9d8c; end: 1060c9d93; -[SCModularCameraBatchCaptureFeatureProviderPluginWorkflow cameraFeatureCategory] */

undefined8 FUN_1060c9d8c(void)

{
  return 0;
}



/* Entry: 1060c9d94; end: 1060c9d9b; -[SCModularCameraBatchCaptureFeatureProviderPluginWorkflow pluginResolutionOrder] */

undefined8 FUN_1060c9d94(void)

{
  return 2;
}



/* Entry: 1060c9d9c; end: 1060c9f17; -[SCModularCameraBatchCaptureFeatureProviderPluginWorkflow setupCameraFeaturesWithPublicCameraFeatureCatalog:withActivationServices:publicCameraFeatureCatalogProvider:] */

void FUN_1060c9d9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar4 = &puStack_d0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1060c9f18;
  puStack_80 = &UNK_11084e830;
  lStack_78 = param_1;
  _objc_retain(param_4);
  uStack_70 = param_4;
  _objc_retain(param_5);
  uStack_68 = param_5;
  _objc_retain(param_3);
  ppuVar2 = &puStack_98;
  FUN_1060c9f18(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x78;
  _objc_storeWeak(lVar3,ppuVar2);
  _objc_retain();
  _objc_release(ppuVar2);
  func_0x00010c16f600(param_3);
  _objc_release(lVar3);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1060ca7ec;
  puStack_b8 = &UNK_11084e830;
  lStack_b0 = param_1;
  uStack_a8 = param_4;
  uStack_a0 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  FUN_1060ca7ec(&puStack_d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176280(param_3);
  _objc_release(param_3);
  _objc_release(ppuVar4);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1060c9f18; end: 1060ca09b;  */

void FUN_1060c9f18(long param_1)

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
  pcStack_78 = FUN_1060ca09c;
  puStack_70 = &UNK_11084ee50;
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



/* Entry: 1060ca09c; end: 1060ca523;  */

void FUN_1060ca09c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
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
  undefined **ppuVar35;
  long lVar36;
  long lVar37;
  undefined8 uVar38;
  undefined *puVar39;
  undefined8 uVar40;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar39 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b0220;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf30b20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar38 = *(undefined8 *)(lVar1 + 0x60);
    lVar6 = lVar1 + 0x10;
    _objc_loadWeakRetained();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0d20c0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1 + 0x20;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010c293220();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar1 + 0x28;
    _objc_loadWeakRetained();
    lVar14 = lVar1 + 0x30;
    _objc_loadWeakRetained();
    puVar39 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1060ca524;
    puStack_88 = &UNK_11084e7d0;
    uVar40 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar40);
    ppuVar15 = &puStack_a0;
    uStack_80 = uVar40;
    FUN_1060ca524();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar1 + 8;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010bf2bbc0();
    lVar18 = lVar1 + 0x40;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010bef1320();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar1 + 0x48;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar21;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar22;
    func_0x00010bf70ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar1 + 0x50;
    _objc_loadWeakRetained();
    lVar25 = lVar1 + 0x48;
    _objc_loadWeakRetained();
    lVar26 = lVar25;
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = lVar1 + 0x38;
    _objc_loadWeakRetained();
    lVar28 = lVar27;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = lVar1 + 0x48;
    _objc_loadWeakRetained();
    lVar30 = lVar29;
    func_0x00010bf299a0();
    _objc_retainAutoreleasedReturnValue();
    lVar31 = lVar1 + 8;
    _objc_loadWeakRetained();
    lVar32 = lVar31;
    func_0x00010c29c2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = lVar1 + 0x18;
    _objc_loadWeakRetained();
    lVar34 = lVar33;
    func_0x00010c0b6900();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar39;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1060ca670;
    puStack_b0 = &UNK_11084e7d0;
    uVar40 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar40);
    ppuVar35 = &puStack_c8;
    uStack_a8 = uVar40;
    FUN_1060ca670();
    _objc_retainAutoreleasedReturnValue();
    lVar36 = lVar1 + 0x58;
    _objc_loadWeakRetained();
    lVar37 = lVar1 + 0x68;
    _objc_loadWeakRetained();
    func_0x00010bffc7a0(puVar2,param_2,uVar5,uVar38,lVar6,uVar9,lVar12,lVar13,lVar14,ppuVar15,lVar17
                        ,lVar19,lVar23,lVar24,lVar26,lVar28,lVar30,lVar32,lVar34,ppuVar35,0,lVar36,
                        lVar37,*(undefined8 *)(lVar1 + 0x70));
    puVar39 = puVar2;
    func_0x00010c09ac60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar37);
    _objc_release(lVar36);
    _objc_release(ppuVar35);
    _objc_release(uStack_a8);
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
    _objc_release(lVar18);
    _objc_release(lVar16);
    _objc_release(ppuVar15);
    _objc_release(uStack_80);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar39);
  return;
}



/* Entry: 1060ca524; end: 1060ca5ff;  */

void FUN_1060ca524(long param_1)

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



/* Entry: 1060ca600; end: 1060ca66f;  */

void FUN_1060ca600(long param_1)

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
    func_0x00010bf2b840(param_1);
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



/* Entry: 1060ca670; end: 1060ca74b;  */

void FUN_1060ca670(long param_1)

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



/* Entry: 1060ca74c; end: 1060ca7bb;  */

void FUN_1060ca74c(long param_1)

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
    func_0x00010bf51b20(param_1);
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



/* Entry: 1060ca7bc; end: 1060ca7eb;  */

bool FUN_1060ca7bc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1060ca7ec; end: 1060ca96f;  */

void FUN_1060ca7ec(long param_1)

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
  func_0x00010bf5c420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1060ca970;
  puStack_70 = &UNK_11084e9b0;
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



/* Entry: 1060ca970; end: 1060ca9f7;  */

void FUN_1060ca970(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bdd9120(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1060ca9f8; end: 1060cab0f; -[SCModularCameraBatchCaptureFeatureProviderPluginWorkflow _cameraBottomUIArbitrator:] */

void FUN_1060ca9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b0178;
  _objc_alloc();
  func_0x00010c002b00();
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(puVar4 + 0x78);
  _objc_storeStrong(puVar4 + 0x70,0);
  _objc_destroyWeak(puVar4 + 0x68);
  _objc_storeStrong(puVar4 + 0x60,0);
  _objc_destroyWeak(puVar4 + 0x58);
  _objc_destroyWeak(puVar4 + 0x50);
  _objc_destroyWeak(puVar4 + 0x48);
  _objc_destroyWeak(puVar4 + 0x40);
  _objc_destroyWeak(puVar4 + 0x38);
  _objc_destroyWeak(puVar4 + 0x30);
  _objc_destroyWeak(puVar4 + 0x28);
  _objc_destroyWeak(puVar4 + 0x20);
  _objc_destroyWeak(puVar4 + 0x18);
  _objc_destroyWeak(puVar4 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(puVar4 + 8);
  return;
}



/* Entry: 1060cab10; end: 1060caba7; -[SCModularCameraBatchCaptureFeatureProviderPluginWorkflow .cxx_destruct] */

void FUN_1060cab10(long param_1)

{
  _objc_destroyWeak(param_1 + 0x78);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1060caba8; end: 1060cb09f; -[SCSnapReplyQuotingFeatureProviderPluginWorkflow initWithUserSession:quickStickerImage:conversationId:conversationManager:conversationIdResolver:creativeToolsSnapReplyServices:circumstanceEngine:cameraConfigurationServices:lensCarouselStudySettingsServices:memoriesSideButtonStateProvidingServices:priveFeatureContainer:memoriesPickerScopeExposer:memoriesPickerV2ScopeServices:cameraUIServices:previewScopeExposer:pageLauncher:replyConfiguration:previewAssetVideoProvider:replyQuotingCameraScope:userTrackedLogger:pageType:pageTypeSpecific:featureSettingsService:snapDocEditorServices:temporaryFileWriter:previewFilterDataProviderServices:lensCarouselManager:lensCarouselOnCameraScopeDataProvider:] */

undefined8 *
FUN_1060caba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  puStack_70 = PTR_PTR_1126ef928;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_storeWeak(puVar1 + 3,param_5);
    _objc_storeWeak(puVar1 + 4,param_6);
    _objc_storeWeak(puVar1 + 5,param_7);
    _objc_storeWeak(puVar1 + 6,param_8);
    _objc_storeWeak(puVar1 + 7,param_9);
    _objc_storeWeak(puVar1 + 8,param_10);
    _objc_storeWeak(puVar1 + 9,param_11);
    _objc_storeWeak(puVar1 + 10,param_12);
    _objc_storeWeak(puVar1 + 0xb,param_13);
    _objc_storeWeak(puVar1 + 0xc,param_14);
    _objc_storeWeak(puVar1 + 0xd,param_15);
    _objc_storeWeak(puVar1 + 0xe,param_16);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_27;
    _objc_release(uVar2);
    uVar2 = param_28;
    func_0x00010c110fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[0x1a];
    puVar1[0x1a] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_30;
    _objc_release(uVar2);
  }
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



/* Entry: 1060cb0a0; end: 1060cb0a3; -[SCSnapReplyQuotingFeatureProviderPluginWorkflow configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

void FUN_1060cb0a0(void)

{
  return;
}



/* Entry: 1060cb0a4; end: 1060cb0ab; -[SCSnapReplyQuotingFeatureProviderPluginWorkflow cameraFeatureCategory] */

undefined8 FUN_1060cb0a4(void)

{
  return 0;
}



/* Entry: 1060cb0ac; end: 1060cb0b3; -[SCSnapReplyQuotingFeatureProviderPluginWorkflow pluginResolutionOrder] */

undefined8 FUN_1060cb0ac(void)

{
  return 2;
}



/* Entry: 1060cb0b4; end: 1060cb367; -[SCSnapReplyQuotingFeatureProviderPluginWorkflow setupCameraFeaturesWithPublicCameraFeatureCatalog:withActivationServices:publicCameraFeatureCatalogProvider:] */

void FUN_1060cb0b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b01f8;
  _objc_retain(param_3);
  _objc_alloc();
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar5);
  lVar6 = param_1 + 0x70;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf2bdc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c980();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1060cb368;
  puStack_98 = &UNK_11084e830;
  lStack_90 = param_1;
  _objc_retain(param_4);
  uStack_88 = param_4;
  puStack_80 = puVar2;
  _objc_retain(puVar2);
  ppuVar8 = &puStack_b0;
  FUN_1060cb368(ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205320(param_3);
  _objc_release(ppuVar8);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_1060cb5f8;
  puStack_d0 = &UNK_11084e830;
  lStack_c8 = param_1;
  _objc_retain(param_4);
  uStack_c0 = param_4;
  uStack_b8 = param_5;
  _objc_retain(param_5);
  ppuVar8 = &puStack_e8;
  FUN_1060cb5f8();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x00010bf46aa0();
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x1060cb99c;
  puStack_f8 = &UNK_11084ed60;
  lStack_f0 = param_1;
  (*(code *)ppuVar9[2])();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  puStack_140 = puVar1;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_1060cb9e4;
  puStack_128 = &UNK_11084ea10;
  lStack_120 = param_1;
  uStack_118 = param_4;
  _objc_retain(param_4);
  ppuVar8 = &puStack_140;
  FUN_1060cb9e4(ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c64a0(param_3);
  _objc_release(param_3);
  _objc_release(ppuVar8);
  _objc_release(uStack_118);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(puStack_80);
  _objc_release(uStack_88);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(puVar2);
  return;
}



/* Entry: 1060cb368; end: 1060cb4eb;  */

void FUN_1060cb368(long param_1)

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
  pcStack_78 = FUN_1060cb4ec;
  puStack_70 = &UNK_11090d450;
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



/* Entry: 1060cb4ec; end: 1060cb5c7;  */

void FUN_1060cb4ec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126b01f0;
    _objc_alloc(PTR_PTR_1126b01f0);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1 + 0x18;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar1 + 8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar1 + 0x20;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar1 + 0x28;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c03c9a0(puVar7,param_2,uVar6,lVar2,lVar3,lVar4,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1060cb5c8; end: 1060cb5f7;  */

bool FUN_1060cb5c8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1060cb5f8; end: 1060cb77b;  */

void FUN_1060cb5f8(long param_1)

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
  pcStack_78 = FUN_1060cb77c;
  puStack_70 = &UNK_11084ed30;
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



/* Entry: 1060cb77c; end: 1060cb96b;  */

void FUN_1060cb77c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  lVar5 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar5 == 0) {
    puVar20 = (undefined *)0x0;
  }
  else {
    puVar20 = PTR_PTR_1126b0200;
    _objc_alloc(PTR_PTR_1126b0200);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0c9880();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5 + 0x60;
    _objc_loadWeakRetained();
    lVar9 = lVar5 + 0x68;
    _objc_loadWeakRetained();
    lVar10 = lVar5 + 0x70;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010bf2b640();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar5 + 0x38;
    _objc_loadWeakRetained();
    uVar1 = *(undefined8 *)(lVar5 + 0x78);
    uVar3 = *(undefined8 *)(lVar5 + 0x80);
    uVar19 = *(undefined8 *)(lVar5 + 0x88);
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c242c40();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar5 + 8;
    _objc_loadWeakRetained();
    uVar2 = *(undefined8 *)(lVar5 + 0x90);
    uVar4 = *(undefined8 *)(lVar5 + 0x98);
    uVar24 = *(undefined8 *)(lVar5 + 0xa8);
    uVar23 = *(undefined8 *)(lVar5 + 0xa0);
    uVar22 = *(undefined8 *)(lVar5 + 0xb8);
    uVar21 = *(undefined8 *)(lVar5 + 0xb0);
    uVar18 = *(undefined8 *)(lVar5 + 0xc0);
    lVar16 = lVar5 + 0x38;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x000108f484ac();
    func_0x00010c02ae00(puVar20,param_2,uVar7,lVar8,lVar9,lVar11,lVar12,uVar1,uVar3,uVar19,uVar14,
                        lVar15,uVar2,uVar4,0,uVar23,uVar24,uVar21,uVar22,uVar18,(char)lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 1060cb96c; end: 1060cb9e3;  */

bool FUN_1060cb96c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1060cb9e4; end: 1060cbb4f;  */

void FUN_1060cb9e4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5c420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1060cbb50;
  puStack_68 = &UNK_11084eae0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1060cbb50; end: 1060cbc2b;  */

void FUN_1060cbb50(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b0188;
    _objc_alloc(PTR_PTR_1126b0188);
    lVar1 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0c9900();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c03d360(puVar4,param_2,0,lVar2,lVar3,0,0,0,1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1060cbc2c; end: 1060cbc5b;  */

bool FUN_1060cbc2c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1060cbc5c; end: 1060cbd8b; -[SCSnapReplyQuotingFeatureProviderPluginWorkflow .cxx_destruct] */

void FUN_1060cbc5c(long param_1)

{
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
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
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1060cbd8c; end: 1060cbedb; -[SCPreviewQuickStickerProvider initWithQuickStickerImage:quickStickerMetadata:userSession:creativeToolsSnapReplyServices:temporaryFileWriter:] */

undefined1 *
FUN_1060cbd8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ef930;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c2542a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf5d860();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060cbedc; end: 1060cc257; -[SCPreviewQuickStickerProvider attachQuickStickerViewToContainer:idProvider:] */

void FUN_1060cbedc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf345e0(param_3);
  func_0x00010bf51200(param_3);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1060cc258;
  uStack_70 = 0x1060cc268;
  uStack_68 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_1060cc258;
  uStack_a0 = 0x1060cc268;
  uStack_98 = 0;
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x2020000000;
  uStack_c8 = 0;
  func_0x00010c0bd380(*(undefined8 *)(param_1 + 0x30));
  if (puStack_88[5] == 0) {
    puVar1 = PTR_PTR_1126ba960;
    _objc_alloc();
    uVar2 = puStack_b8[5];
    func_0x00010c271a60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bc960;
    func_0x00010c290480(PTR_PTR_1126bc960);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffa440();
    uVar5 = puStack_88[5];
    puStack_88[5] = puVar1;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  func_0x00010c0c3100(param_4);
  func_0x00010c1c38a0(param_4);
  func_0x00010c21b740(puStack_88[5]);
  func_0x00010befbb60(param_3);
  func_0x00010c1ee7a0(((double)puStack_d8[3] * 3.141592653589793) / 180.0,puStack_88[5]);
  uVar4 = puStack_b8[5];
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  _objc_release(uVar2);
  uVar2 = puStack_88[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_e0,8);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060cc258; end: 1060cc26f;  */

void FUN_1060cc258(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1060cc270; end: 1060cc303;  */

void FUN_1060cc270(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be1c640(uVar1,param_2,param_2,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be85a80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 0xc014000000000000;
  return;
}



/* Entry: 1060cc304; end: 1060cc36b;  */

void FUN_1060cc304(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1060cc36c;
  puStack_30 = &UNK_11090d4b0;
  uStack_20 = *(undefined8 *)(param_1 + 0x28);
  lStack_28 = *(long *)(param_1 + 0x20);
  uStack_18 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0bd280(*(undefined8 *)(lStack_28 + 0x38),param_2,&puStack_48);
  return;
}



/* Entry: 1060cc36c; end: 1060cc4d7;  */

void FUN_1060cc36c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c06f700();
  _objc_release(uVar1);
  if ((int)uVar5 != 0) {
    puVar2 = PTR_PTR_1126bc960;
    func_0x00010c290480(PTR_PTR_1126bc960);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c253ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(lVar7 + 0x28) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126ba960;
    _objc_alloc();
    puVar4 = PTR_PTR_1126bc960;
    func_0x00010c290480(PTR_PTR_1126bc960);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffa440();
    lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar1 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar3;
    _objc_release(uVar1);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060cc4d8; end: 1060cc723;  */

void FUN_1060cc4d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be1c640(uVar1,param_2,param_2,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be85a80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 0xc014000000000000;
  return;
}



/* Entry: 1060cc724; end: 1060cc7c7; -[SCPreviewQuickStickerProvider triggeringSection] */

undefined8 FUN_1060cc724(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1060cc7c8;
  puStack_50 = &UNK_11090d570;
  puStack_38 = puStack_48;
  func_0x00010c0bd280(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_68);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1060cc7c8; end: 1060cc83f;  */

void FUN_1060cc7c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfedf40();
  _objc_release(uVar1);
  _objc_release(param_2);
  if ((int)uVar2 == 0x13) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x7a;
  }
  return;
}



/* Entry: 1060cc840; end: 1060cc84f; -[SCPreviewQuickStickerProvider canProvide] */

bool FUN_1060cc840(long param_1)

{
  return *(long *)(param_1 + 0x30) != 0;
}



/* Entry: 1060cc850; end: 1060cc853; -[SCPreviewQuickStickerProvider previewQuickStickerProvider] */

void FUN_1060cc850(void)

{
  return;
}



/* Entry: 1060cc854; end: 1060cc87b; -[SCPreviewQuickStickerProvider sticker] */

void FUN_1060cc854(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060cc87c; end: 1060cc9f3; -[SCPreviewQuickStickerProvider ctItemInstance] */

void FUN_1060cc87c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined8 *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_148 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1060cc258;
  uStack_30 = 0x1060cc268;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1060cc9f4;
  puStack_68 = &UNK_11088cc20;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1060cca44;
  puStack_98 = &UNK_11084b9d0;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x1060ccad4;
  puStack_c8 = &UNK_11090d5a0;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x1060ccb24;
  puStack_f8 = &UNK_11090d5d0;
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x1060ccb74;
  puStack_128 = &UNK_11090d600;
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x1060ccbc4;
  puStack_158 = &UNK_11090d600;
  lStack_150 = param_1;
  lStack_120 = param_1;
  puStack_118 = puStack_148;
  lStack_f0 = param_1;
  puStack_e8 = puStack_148;
  lStack_c0 = param_1;
  puStack_b8 = puStack_148;
  lStack_90 = param_1;
  puStack_88 = puStack_148;
  lStack_60 = param_1;
  puStack_58 = puStack_148;
  puStack_48 = puStack_148;
  func_0x00010c0bd380(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_80,&puStack_b0,&puStack_e0,
                      &puStack_110,&puStack_140,&puStack_170);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060cc9f4; end: 1060cca43;  */

void FUN_1060cc9f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be85980(uVar1,param_2,param_2,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1060cca44; end: 1060cca9b;  */

void FUN_1060cca44(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_1 + 0x28);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1060cca9c;
  puStack_20 = &UNK_11090d570;
  func_0x00010c0bd280(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),param_2,&puStack_38);
  return;
}



/* Entry: 1060cca9c; end: 1060ccc13;  */

void FUN_1060cca9c(long param_1,undefined8 param_2)

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



/* Entry: 1060ccc14; end: 1060ccdcf; -[SCPreviewQuickStickerProvider _quickImageStickerItemInstanceRendering:type:actionLinkUrl:quotedUserId:] */

void FUN_1060ccc14(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 0) {
    puVar6 = (undefined *)0x0;
    uVar4 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    _UIImagePNGRepresentation(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110dea4f8);
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = 0;
    uVar2 = uVar5;
    func_0x00010c2bda80(uVar5,param_2,lVar1,puVar6,0xc,&uStack_68);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uStack_68;
    _objc_retain(uStack_68);
    _objc_release(puVar6);
    _objc_release(param_3);
    _objc_release(lVar1);
    _objc_release(uVar5);
    puVar6 = PTR_PTR_1126c4970;
    func_0x00010c09e1c0(PTR_PTR_1126c4970,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  puVar3 = PTR_PTR_1126b13b0;
  func_0x00010bfc0f80(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),PTR_PTR_1126b13b0,param_2,
                      puVar6,0,param_5,0,param_4,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1060ccdd0; end: 1060cce9f; -[SCPreviewQuickStickerProvider _quickStickerViewWithSticker:] */

void FUN_1060ccdd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ba960;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c271a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bc960;
  func_0x00010c290480(PTR_PTR_1126bc960,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa440(puVar1,param_2,uVar2,puVar3,param_3,uVar4);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060ccea0; end: 1060cceeb; -[SCPreviewQuickStickerProvider _genericImageStickerWithImage:type:actionLinkUrl:quotedUserId:] */

void FUN_1060ccea0(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00010be85980();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126baa08;
  _objc_alloc(PTR_PTR_1126baa08);
  func_0x00010c020180();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060cceec; end: 1060ccef3; -[SCPreviewQuickStickerProvider quickStickerImage] */

undefined8 FUN_1060cceec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1060ccef4; end: 1060ccefb; -[SCPreviewQuickStickerProvider quickStickerMetadata] */

undefined8 FUN_1060ccef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1060ccefc; end: 1060ccf67; -[SCPreviewQuickStickerProvider .cxx_destruct] */

void FUN_1060ccefc(long param_1)

{
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



/* Entry: 1060ccf68; end: 1060cd10f; -[SCQuickStickerViewProvider initWithQuickStickerImage:quickStickerMetadata:userSession:creativeToolsSnapReplyServices:temporaryFileWriter:cameraZoomIndicatorVisibilityObservable:] */

undefined1 *
FUN_1060ccf68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ef938;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c2542a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_6;
    func_0x00010bf5d860();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060cd110; end: 1060cd4f7; -[SCQuickStickerViewProvider attachQuickStickerViewToContainer:idProvider:] */

void FUN_1060cd110(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_2a0 [48];
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  long lStack_220;
  ulong uStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  ulong uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  ulong uStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  long lStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_1060cd4f8;
  uStack_a0 = 0x1060cd508;
  uStack_98 = 0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_class(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_1060cd510;
  puStack_e8 = &UNK_1108bceb0;
  lStack_e0 = param_1;
  puStack_d0 = &uStack_c0;
  _objc_retain(uVar1);
  puStack_140 = puVar2;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_1060cd56c;
  puStack_128 = &UNK_1108501e8;
  lStack_120 = param_1;
  puStack_108 = &uStack_c0;
  uStack_d8 = uVar1;
  puStack_c8 = &uStack_90;
  _objc_retain(uVar1);
  uStack_118 = uVar1;
  _objc_retain(param_3);
  puStack_180 = puVar2;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_1060cd724;
  puStack_168 = &UNK_11090d660;
  lStack_160 = param_1;
  puStack_150 = &uStack_c0;
  uStack_110 = param_3;
  _objc_retain(uVar1);
  puStack_1c0 = puVar2;
  uStack_1b8 = 0xc2000000;
  uStack_1b0 = 0x1060cd780;
  puStack_1a8 = &UNK_11090d690;
  lStack_1a0 = param_1;
  puStack_190 = &uStack_c0;
  uStack_158 = uVar1;
  puStack_148 = &uStack_90;
  _objc_retain(uVar1);
  puStack_200 = puVar2;
  uStack_1f8 = 0xc2000000;
  uStack_1f0 = 0x1060cd7dc;
  puStack_1e8 = &UNK_110899a28;
  lStack_1e0 = param_1;
  puStack_1d0 = &uStack_c0;
  uStack_198 = uVar1;
  puStack_188 = &uStack_90;
  _objc_retain(uVar1);
  puStack_240 = puVar2;
  uStack_238 = 0xc2000000;
  uStack_230 = 0x1060cd838;
  puStack_228 = &UNK_110899a28;
  lStack_220 = param_1;
  puStack_210 = &uStack_c0;
  uStack_1d8 = uVar1;
  puStack_1c8 = &uStack_90;
  _objc_retain(uVar1);
  uStack_218 = uVar1;
  puStack_208 = &uStack_90;
  func_0x00010c0bd380(uVar5);
  _objc_initWeak(auStack_248,param_1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  puStack_270 = puVar2;
  uStack_268 = 0xc2000000;
  uStack_260 = 0x1060cd890;
  puStack_258 = &UNK_11090d6c0;
  _objc_copyWeak(auStack_250,auStack_248);
  lVar4 = param_1;
  func_0x00010c25ff60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar4);
  _objc_release(param_1);
  _CGAffineTransformMakeRotation(auStack_2a0,((double)puStack_88[3] * 3.141592653589793) / 180.0);
  func_0x00010c219960(puStack_b8[5]);
  uVar5 = puStack_b8[5];
  _objc_retain(uVar5);
  _objc_destroyWeak(auStack_250);
  _objc_destroyWeak(auStack_248);
  _objc_release(uStack_218);
  _objc_release(uStack_1d8);
  _objc_release(uStack_198);
  _objc_release(uStack_158);
  _objc_release(uStack_110);
  _objc_release(uStack_118);
  _objc_release(uStack_d8);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1060cd4f8; end: 1060cd50f;  */

void FUN_1060cd4f8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1060cd510; end: 1060cd56b;  */

void FUN_1060cd510(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bea6a40(uVar1,param_2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 0xc014000000000000;
  return;
}



/* Entry: 1060cd56c; end: 1060cd60f;  */

void FUN_1060cd56c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lStack_50 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(lStack_50 + 0x70);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1060cd610;
  puStack_58 = &UNK_11090d630;
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  func_0x00010c0bd280(uVar3,param_2,&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  return;
}



/* Entry: 1060cd610; end: 1060cd723;  */

void FUN_1060cd610(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06f700();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    puVar3 = PTR_PTR_1126bc960;
    func_0x00010c290480(PTR_PTR_1126bc960);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c253ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be85a60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar1;
    _objc_release(uVar4);
    func_0x00010be3c860(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060cd724; end: 1060cd8fb;  */

void FUN_1060cd724(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bea6a40(uVar1,param_2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 0xc014000000000000;
  return;
}



/* Entry: 1060cd8fc; end: 1060cd90b; -[SCQuickStickerViewProvider canProvide] */

bool FUN_1060cd8fc(long param_1)

{
  return *(long *)(param_1 + 0x68) != 0;
}



/* Entry: 1060cd90c; end: 1060cd9af; -[SCQuickStickerViewProvider triggeringSection] */

undefined8 FUN_1060cd90c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1060cd9b0;
  puStack_50 = &UNK_11090d570;
  puStack_38 = puStack_48;
  func_0x00010c0bd280(*(undefined8 *)(param_1 + 0x70),param_2,&puStack_68);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1060cd9b0; end: 1060cda27;  */

void FUN_1060cd9b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfedf40();
  _objc_release(uVar1);
  _objc_release(param_2);
  if ((int)uVar2 == 0x13) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x7a;
  }
  return;
}



/* Entry: 1060cda28; end: 1060cda5f; -[SCQuickStickerViewProvider previewQuickStickerProvider] */

void FUN_1060cda28(void)

{
  _objc_alloc(PTR_PTR_1126c7c30);
  func_0x00010c03c960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


