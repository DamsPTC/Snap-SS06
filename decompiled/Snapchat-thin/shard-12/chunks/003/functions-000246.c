/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109030840; end: 109030867; -[SCUcoStateListenerAnnouncer .cxx_destruct] */

void FUN_109030840(long param_1)

{
  FUN_10903089c(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 109030868; end: 109030887; -[SCUcoStateListenerAnnouncer .cxx_construct] */

void FUN_109030868(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 109030888; end: 10903089b;  */

undefined * FUN_109030888(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 10903089c; end: 1090308f3;  */

long FUN_10903089c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1090308f4; end: 109030903;  */

void FUN_1090308f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad58e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109030904; end: 109030923;  */

void FUN_109030904(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad58e0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109030924; end: 10903098b;  */

void FUN_109030924(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10903098c; end: 10903098f;  */

void FUN_10903098c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109030990; end: 1090309bb; +[SCGrapheneUcoRemoteAssetsMetric ucoRemoteAssetAccessError] */

void FUN_109030990(void)

{
  _objc_alloc(PTR_PTR_1126dd000);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090309bc; end: 109030a5b; -[SCGrapheneUcoRemoteAssetsMetric description] */

void FUN_1090309bc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110f1c5b8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f1c5b8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fff48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 109030a5c; end: 109030b9f; -[SCGrapheneRegistry ucoRemoteAssetsGraphene] */

void FUN_109030a5c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x109030ae4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam0000000113730728 != -1) {
    func_0x000107c27d9c(0x113730728,&puStack_48);
  }
  uVar1 = uRam0000000113730720;
  _objc_retain(uRam0000000113730720);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109030ba0; end: 109030bcb; +[SCGrapheneUcoPerformanceMetric ucoProcessingTime] */

void FUN_109030ba0(void)

{
  _objc_alloc(PTR_PTR_1126dd008);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109030bcc; end: 109030bf7; +[SCGrapheneUcoPerformanceMetric ucoApplyDelay] */

void FUN_109030bcc(void)

{
  _objc_alloc(PTR_PTR_1126dd008);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109030bf8; end: 109030c23; +[SCGrapheneUcoPerformanceMetric ucoPreviewNotReady] */

void FUN_109030bf8(void)

{
  _objc_alloc(PTR_PTR_1126dd008);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109030c24; end: 109030cc3; -[SCGrapheneUcoPerformanceMetric description] */

void FUN_109030c24(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110f1c5f8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f1c5f8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fff50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 109030cc4; end: 109030e1b; -[SCGrapheneRegistry ucoPerformanceGraphene] */

void FUN_109030cc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x109030d4c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam0000000113730738 != -1) {
    func_0x000107c27d9c(0x113730738,&puStack_48);
  }
  uVar1 = uRam0000000113730730;
  _objc_retain(uRam0000000113730730);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109030e1c; end: 109030e3b; +[SCLensBlizzardHelpers blizzardLensSourceTypeFromLensSourceType:] */

undefined8 FUN_109030e1c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0x38) {
    return *(undefined8 *)(&UNK_10dfb2458 + param_3 * 8);
  }
  return 0;
}



/* Entry: 109030e3c; end: 109030e5b; +[SCLensBlizzardHelpers lensSourceTypeFromBlizzardLensSourceType:] */

undefined8 FUN_109030e3c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0x41) {
    return *(undefined8 *)(&UNK_10dfb2618 + param_3 * 8);
  }
  return 0;
}



/* Entry: 109030e5c; end: 109030e7b; +[SCLensBlizzardHelpers blizzardLensTypeFromLensType:] */

undefined8 FUN_109030e5c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0x1a) {
    return *(undefined8 *)(&UNK_10dfb2820 + param_3 * 8);
  }
  return 4;
}



/* Entry: 109030e7c; end: 109030e8b; +[SCLensBlizzardHelpers sponsoredUnlockableTypeFromLensType:] */

ulong FUN_109030e7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = param_3 - 1;
  if (10 < uVar1) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 109030e8c; end: 109030eaf; +[SCLensBlizzardHelpers blizzardLensFetchTypeFromLensFetchType:] */

undefined8 FUN_109030e8c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 5) {
    return *(undefined8 *)(&UNK_10dfb28f0 + (param_3 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 109030eb0; end: 109030f5f; -[LSATrackingComponentHandler initWithCaptureResource:cameraHardwareAPIImpl:] */

undefined1 *
FUN_109030eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fff58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109030f60; end: 1090310fb; -[LSATrackingComponentHandler restartTrackingAtPoint:] */

bool FUN_109030f60(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  puVar2 = &UNK_10f547fcf;
  func_0x000107c31820(&UNK_10f547fcf);
  lVar3 = param_3 + 0x10;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar4;
  func_0x000107c318f8(lVar4,PTR_DAT_1126a4f60);
  _objc_release(lVar4);
  iVar6 = 0;
  if (lVar4 != 0) {
    iVar6 = (int)lVar3;
  }
  if (iVar6 == 1) {
    lVar3 = param_3 + 0x10;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf5ec20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = lVar5;
    func_0x00010bfe3a20(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar4 != 0;
    if (lVar4 != 0) {
      func_0x00010bf86e80(lVar4);
      func_0x00010c2bd5a0(lVar4);
      func_0x00010be95400(param_3);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
    _objc_release(lVar5);
  }
  else {
    bVar1 = false;
  }
  func_0x000107c31828(puVar2);
  return bVar1;
}



/* Entry: 1090310fc; end: 109031203; -[LSATrackingComponentHandler _restartTrackingWithTransform:initialPlacementScale:] */

void FUN_1090310fc(long param_1)

{
  long lVar1;
  undefined8 in_d4;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = in_d4;
  func_0x00010c0f7fc0(lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 109031204; end: 1090313f7;  */

void FUN_109031204(long param_1,undefined *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x10;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    param_2 = PTR_DAT_1126a4f60;
    func_0x000107c318f8(lVar3,PTR_DAT_1126a4f60);
    _objc_release(lVar3);
    if ((int)lVar2 != 0 && lVar3 != 0) {
      lVar2 = lVar1 + 0x10;
      _objc_loadWeakRetained();
      lVar4 = lVar2;
      func_0x00010bf093a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar4;
      func_0x00010bf5ec20();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c0b5bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_retain(lVar5);
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(lVar5);
          }
          func_0x00010c12b1e0(lVar4);
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar8);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      puVar6 = PTR_PTR_1126dd010;
      _objc_alloc(PTR_PTR_1126dd010);
      func_0x00010c055380(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
                          *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x50),
                          *(undefined8 *)(param_1 + 0x68));
      func_0x00010bef6be0(lVar4);
      _objc_release(puVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(lVar1 + 0x60,param_2 + 0x60);
  return;
}



/* Entry: 1090313f8; end: 10903140b;  */

void FUN_1090313f8(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x60,param_2 + 0x60);
  return;
}



/* Entry: 10903140c; end: 109031573; -[LSATrackingComponentHandler beginTrackingWithParameters:] */

undefined8 FUN_10903140c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = &UNK_10f547ff3;
  func_0x000107c31820(&UNK_10f547ff3);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c2193e0();
  _objc_release(lVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18));
  _objc_initWeak(auStack_48,param_1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0f7fc0(lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  func_0x000107c31828(puVar1);
  return 1;
}



/* Entry: 109031574; end: 1090315b7;  */

void FUN_109031574(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c27d2e0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090315b8; end: 1090317d3; -[LSATrackingComponentHandler updateTrackingParameters:] */

long FUN_1090315b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  
  puVar1 = &UNK_10f548015;
  func_0x000107c31820(&UNK_10f548015);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar3;
  func_0x00010bf093c0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar4 = param_1 + 0x10;
  _objc_loadWeakRetained();
  if ((int)lVar10 == 0) {
    _objc_release(uVar4);
    if (uVar4 == 0) {
LAB_1090316b0:
      lVar10 = 0;
      goto LAB_109031788;
    }
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c2193e0();
  }
  else {
    uVar5 = uVar4;
    func_0x00010c278fc0();
    if ((((uint)uVar5 ^ ((uint)((ulong)param_3 >> 8) & 0x1010000 | (uint)param_3 & 0x101)) &
        0x1010101) == 0) {
      _objc_release(uVar4);
      if (((uint)((ulong)param_3 >> 0x28) & 1) != (uint)((uVar5 & 0x100000000) == 0))
      goto LAB_1090316b0;
    }
    else {
      _objc_release(uVar4);
    }
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c2193e0();
    _objc_release(lVar2);
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    lVar6 = lVar2;
    func_0x00010bf093a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___ARConfiguration_1126b7048;
    lVar3 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar3);
    lVar7 = lVar3;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf70d80();
    uVar4 = param_1 + 0x10;
    _objc_loadWeakRetained(uVar4);
    uVar5 = uVar4;
    func_0x00010c278fc0();
    func_0x00010c14c900(puVar9,param_2,lVar8,uVar5 & 0xffffffffff);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c142b60(lVar6,param_2,puVar9,0);
    _objc_release(puVar9);
    _objc_release(uVar4);
    _objc_release(lVar7);
    _objc_release(lVar3);
    _objc_release(lVar6);
  }
  _objc_release(lVar2);
LAB_109031788:
  func_0x000107c31828(puVar1);
  return lVar10;
}



/* Entry: 1090317d4; end: 109031917; -[LSATrackingComponentHandler trackingComponentResetTracking] */

undefined8 FUN_1090317d4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = &UNK_10f548036;
  func_0x000107c31820(&UNK_10f548036);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf2d480();
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c11dfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0f7fc0(lVar2);
    _objc_release(lVar2);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  func_0x000107c31828(puVar1);
  return 1;
}



/* Entry: 109031918; end: 109031a67;  */

void FUN_109031918(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf093c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    if ((int)lVar3 == 0) {
      func_0x00010c27d2e0();
    }
    else {
      func_0x00010bf3a6a0();
      _objc_release(lVar1);
      lVar1 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar1);
      lVar3 = lVar1;
      func_0x00010bf093a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___ARConfiguration_1126b7048;
      lVar2 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar2);
      lVar4 = lVar2;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf70d80();
      uVar6 = param_1 + 0x10;
      _objc_loadWeakRetained(uVar6);
      uVar7 = uVar6;
      func_0x00010c278fc0();
      func_0x00010c14c900(puVar8,param_2,lVar5,uVar7 & 0xffffffffff);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c142b60(lVar3,param_2,puVar8,0xb);
      _objc_release(puVar8);
      _objc_release(uVar6);
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109031a68; end: 109031b8b; -[LSATrackingComponentHandler trackingComponentEndTracking] */

undefined8 FUN_109031a68(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = &UNK_10f548058;
  func_0x000107c31820(&UNK_10f548058);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18));
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  func_0x000107c31828(puVar1);
  return 1;
}



/* Entry: 109031b8c; end: 109031bcf;  */

void FUN_109031b8c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c27d2c0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109031bd0; end: 109031d87; -[LSATrackingComponentHandler latestARFrame] */

void FUN_109031bd0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = &UNK_10f548078;
  func_0x000107c31820(&UNK_10f548078);
  _objc_initWeak(auStack_48,param_1);
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar3);
  lVar2 = lVar3;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0f7fc0(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar3);
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar3;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar2;
  func_0x000107c318f8(lVar2,PTR_DAT_1126a4f60);
  _objc_release(lVar2);
  iVar4 = 0;
  if (lVar2 != 0) {
    iVar4 = (int)lVar3;
  }
  if (iVar4 == 1) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf5ec20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  else {
    lVar3 = 0;
  }
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  func_0x000107c31828(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 109031d88; end: 109031dcb;  */

void FUN_109031d88(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c27d2e0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109031dcc; end: 109031eaf; -[LSATrackingComponentHandler latestDepthData] */

void FUN_109031dcc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  puVar1 = &UNK_10f54809b;
  func_0x000107c31820(&UNK_10f54809b);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_retain(lVar2);
  lVar4 = lVar2;
  func_0x000107c318f8(lVar2,PTR_DAT_1126a4f60);
  _objc_release(lVar2);
  iVar3 = 0;
  if (lVar2 != 0) {
    iVar3 = (int)lVar4;
  }
  if (iVar3 == 1) {
    lVar4 = lVar2;
    func_0x00010c0888c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = 0;
  }
  _objc_release(lVar2);
  func_0x000107c31828(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 109031eb0; end: 109031ed3; -[LSATrackingComponentHandler restartTrackingWithExistingTrackingData:] */

undefined8 FUN_109031eb0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  func_0x00010be95400(*param_3,param_3[2],param_3[4],param_3[6],param_3[8]);
  return 1;
}



/* Entry: 109031ed4; end: 109031fbb; -[LSATrackingComponentHandler trackingComponentFinishedTrackingProcessing] */

void FUN_109031ed4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  func_0x000107c31820(&UNK_10f5480c1);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x000107c318f8(lVar3,PTR_DAT_1126a4f60);
  _objc_release(lVar3);
  iVar4 = 0;
  if (lVar3 != 0) {
    iVar4 = (int)lVar2;
  }
  if (iVar4 == 1) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3b0e0();
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109031fbc; end: 109031fc7; -[LSATrackingComponentHandler trackingComponentIsNativeTrackingSupported] */

void FUN_109031fbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c080430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___ARWorldTrackingConfiguration_1126dd018,PTR_s_isSupported_1125fdb18);
  return;
}



/* Entry: 109031fc8; end: 109032093; -[LSATrackingComponentHandler createTrackedPoint:] */

void FUN_109031fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_10f5480e8;
  func_0x000107c31820(&UNK_10f5480e8);
  param_5 = param_5 + 0x10;
  _objc_loadWeakRetained(param_5);
  lVar2 = param_5;
  func_0x00010bf093a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar3 = PTR_PTR_1126dd020;
  _objc_alloc(PTR_PTR_1126dd020);
  func_0x00010c055360(param_1,param_2,param_3,param_4);
  func_0x00010bef6be0(lVar2,param_6,puVar3);
  _objc_release(lVar2);
  func_0x000107c31828(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 109032094; end: 10903213b; -[LSATrackingComponentHandler deleteTrackedPoint:] */

void FUN_109032094(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f548110;
  func_0x000107c31820(&UNK_10f548110);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf093a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c12b1e0(lVar2,param_2,param_3);
  _objc_release(lVar2);
  func_0x000107c31828(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10903213c; end: 1090321c3; -[LSATrackingComponentHandler getWorldTrackingCapabilities] */

uint FUN_10903213c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar1 = PTR__OBJC_CLASS___ARWorldTrackingConfiguration_1126dd018;
  func_0x00010c263bc0(PTR__OBJC_CLASS___ARWorldTrackingConfiguration_1126dd018,param_2,3);
  puVar2 = PTR__OBJC_CLASS___ARWorldTrackingConfiguration_1126dd018;
  func_0x00010c2637a0(PTR__OBJC_CLASS___ARWorldTrackingConfiguration_1126dd018,param_2,8);
  puVar3 = PTR__OBJC_CLASS___ARWorldTrackingConfiguration_1126dd018;
  func_0x00010c080420();
  puVar4 = PTR__OBJC_CLASS___ARWorldTrackingConfiguration_1126dd018;
  func_0x00010c080420();
  uVar5 = 0x1000000;
  if ((int)puVar4 == 0) {
    uVar5 = 0;
  }
  uVar6 = 0x10000;
  if ((int)puVar3 == 0) {
    uVar6 = 0;
  }
  uVar7 = 0x100;
  if ((int)puVar2 == 0) {
    uVar7 = 0;
  }
  return uVar7 | (uint)puVar1 | uVar6 | uVar5;
}



/* Entry: 1090321c4; end: 109032287; -[LSATrackingComponentHandler raycastARScene:allowingTarget:alignment:] */

void FUN_1090321c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_3 = param_3 + 0x10;
  _objc_loadWeakRetained(param_3);
  lVar1 = param_3;
  func_0x00010bf093a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf5ec20(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c120520(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c1204e0(lVar1,param_4,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 109032288; end: 109032327; -[LSATrackingComponentHandler didRequestResetWorldMeshes] */

void FUN_109032288(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf093a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf093a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c142b60(lVar1,param_2,lVar3,8);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 109032328; end: 10903232f; -[LSATrackingComponentHandler arKitObservable] */

undefined8 FUN_109032328(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109032330; end: 109032363; -[LSATrackingComponentHandler .cxx_destruct] */

void FUN_109032330(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 109032364; end: 10903236f; -[SCARImageCapturer setIsCapturingPhoto:] */

void FUN_109032364(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 109032370; end: 10903242b; -[SCARImageCapturer captureStillImageWithCaptureConfiguration:completionHandler:] */

void FUN_109032370(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_release(uVar2);
  lVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1;
  _objc_release(uVar2);
  _objc_release(param_3);
  func_0x00010c1afe20(param_1,param_2,param_4 != 0);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2001a0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10903242c; end: 1090325a7; -[SCARImageCapturer dealloc] */

void FUN_10903242c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar2);
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c11dfc0();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1090325a8;
    puStack_60 = &UNK_110848708;
    _objc_retain(lVar1);
    lStack_58 = lVar1;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0f7fc0(lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_50);
    _objc_release(lStack_58);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar1);
  }
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar2);
  puStack_80 = PTR_PTR_1126fff60;
  lStack_88 = param_1;
  _objc_msgSendSuper2(&lStack_88,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090325a8; end: 109032667;  */

void FUN_1090325a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110f1c678,0xfffffffffffffc18,0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,0,puVar1);
  _objc_release(puVar1);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf3b0e0();
    _objc_release(lVar2);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2001a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 109032668; end: 109032693; -[SCARImageCapturer stopObservingManagedVideoDataSourceOutputEvent] */

void FUN_109032668(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109032694; end: 109032813; -[SCARImageCapturer _orientationOfImageCreatedFromVideoSourceWithDevicePosition:] */

long FUN_109032694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ac0();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x1) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar3 = param_1;
    func_0x00010c076b60();
    if ((int)lVar3 == 0) {
      _objc_release(param_1);
      lVar3 = 3;
    }
    else {
      puVar1 = PTR_PTR_1126aff08;
      func_0x00010c06cea0();
      _objc_release(param_1);
      lVar3 = 3;
      if ((int)puVar1 == 0) {
        lVar3 = 6;
      }
    }
    return lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be6e550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__orientationForIpadWithPosition__1125792f0,param_3);
  return param_1;
}



/* Entry: 109032814; end: 10903286b; -[SCARImageCapturer _orientationForIpadWithPosition:] */

undefined8 FUN_109032814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar4 = 0;
  func_0x00010b816b5c();
  puVar5 = PTR_PTR_1126aff08;
  func_0x00010c06cea0(PTR_PTR_1126aff08,param_2,param_3);
  bVar3 = lVar4 - 3U < 2;
  uVar2 = 3;
  if (bVar3) {
    uVar2 = 1;
  }
  uVar1 = 5;
  if (!bVar3) {
    uVar1 = 6;
  }
  if ((int)puVar5 == 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 10903286c; end: 109032873; -[SCARImageCapturer isAsync] */

undefined8 FUN_10903286c(void)

{
  return 0;
}



/* Entry: 109032874; end: 109032947; -[SCARImageCapturer observeSampleBuffer:] */

void FUN_109032874(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d3350;
  _objc_opt_class(PTR_PTR_1126d3350);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70d80();
  func_0x00010bdff580(param_1);
  _objc_release(uVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 109032948; end: 10903294b; -[SCARImageCapturer observeSampleBufferAsynchronously:completion:] */

void FUN_109032948(void)

{
  return;
}



/* Entry: 10903294c; end: 1090329db; -[SCARImageCapturer willCaptureARImage] */

void FUN_10903294c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f88c0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 1090329dc; end: 109032b43;  */

void FUN_1090329dc(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *(long *)(param_2 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70d80();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2bf1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5e980();
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b9e18;
  _objc_alloc(PTR_PTR_1126b9e18);
  func_0x00010c0389e0((float)param_1);
  lVar1 = *(long *)(param_2 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0c42e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a5b80();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar5);
  return;
}



/* Entry: 109032b44; end: 109032c53; -[SCARImageCapturer didCaptureARImage] */

void FUN_109032b44(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f88c0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 109032c54; end: 109032ca3; -[SCARImageCapturer .cxx_destruct] */

void FUN_109032c54(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 109032ca4; end: 109032f73; -[SCLensEffectApplicator initWithLensComponent:effectApplicationStrategy:effectErrorHandler:configuration:performer:] */

undefined8 *
FUN_109032ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fff68;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126dd028;
    _objc_alloc();
    func_0x00010c054ac0();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,puVar1);
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c0e33e0(param_3);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 109032f74; end: 109032fd7;  */

void FUN_109032f74(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bef9980(param_2);
    FUN_109032fd8(param_2,0,0,*(undefined8 *)(param_1 + 0x70));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109032fd8; end: 109033073;  */

void FUN_109032fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dd050;
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c04a9e0();
  _objc_release(param_4);
  func_0x00010c1bd100(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109033074; end: 10903312f; -[SCLensEffectApplicator initWithLensComponent:effectApplicationStrategy:configuration:performer:] */

undefined8
FUN_109033074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dd030;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c023480(param_1,param_2,param_3,param_4,puVar1,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 109033130; end: 10903320b; -[SCLensEffectApplicator applyEffectLayer:completion:] */

void FUN_109033130(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,2,0);
    }
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf08400(param_1);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf083f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10903320c; end: 109033217; -[SCLensEffectApplicator applyEffectLayers:completion:] */

void FUN_10903320c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf083f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_applyEffectLayers_async_completi_11259faa0,param_3,1,param_4);
  return;
}



/* Entry: 109033218; end: 10903338b; -[SCLensEffectApplicator applyEffectLayers:async:completion:] */

void FUN_109033218(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar6 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x28));
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_retain(param_3);
    ppuStack_60 = &PTR____CFConstantStringClassReference_110f771d8;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110f771b8;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110f77198;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_60,3);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1090368bc;
    puStack_70 = &UNK_11089c520;
    lStack_68 = param_3;
    _objc_retain(param_3);
    puVar3 = puVar2;
    func_0x00010bfb2660(puVar2,param_2,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_68);
    _objc_release(param_3);
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010bf529e0();
    _objc_release(puVar3);
    if (puVar2 != (undefined *)0x0) {
      func_0x00010bdce0c0(param_1,param_2,param_3,param_4,param_5);
    }
  }
  _objc_release(param_5);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcVar7 = FUN_10903338c;
  func_0x00010bf0ae40(*(undefined8 *)(lVar1 + 0x28));
  lVar4 = lVar1;
  func_0x00010bf07da0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    func_0x00010bdce100(lVar1,param_2,lVar4,PTR____NSArray0__struct_11034ab48,
                        PTR____NSArray0__struct_11034ab48,0,0,param_8,param_5,param_3,puVar6,pcVar7)
    ;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 10903338c; end: 1090333ef; -[SCLensEffectApplicator forceReloadAppliedEffects] */

void FUN_10903338c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x28));
  lVar1 = param_1;
  func_0x00010bf07da0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010bdce100(param_1,param_2,lVar1,PTR____NSArray0__struct_11034ab48,
                        PTR____NSArray0__struct_11034ab48,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1090333f0; end: 109033423; -[SCLensEffectApplicator cancelAllEffects] */

void FUN_1090333f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dc80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109033424; end: 109033473; -[SCLensEffectApplicator cancelEffectWithId:] */

void FUN_109033424(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e600();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109033474; end: 109033553; -[SCLensEffectApplicator willLoadEffectConcurrentlyObservable] */

void FUN_109033474(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c2a7120(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_1;
  func_0x00010bf43280(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109033554; end: 1090336a7;  */

void FUN_109033554(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf5e060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0ba200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar4 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf07da0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0ba200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  uVar1 = uVar3;
  func_0x00010c069880(uVar3,param_2,lVar6);
  puVar7 = (undefined *)0x0;
  if ((uVar1 & 1) == 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010bf5e060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(param_1);
    puVar7 = PTR_PTR_1126dd038;
    _objc_alloc(PTR_PTR_1126dd038);
    func_0x00010c00f040(0);
  }
  _objc_release(lVar6);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1090336a8; end: 1090336bf;  */

void FUN_1090336a8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 1090336c0; end: 10903379f; -[SCLensEffectApplicator willLoadEffectsObservable] */

void FUN_1090336c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c2a7120(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_1;
  func_0x00010bf43280(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090337a0; end: 109033903;  */

void FUN_1090337a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf5e060(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf07da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0ba200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010c0ce860(puVar2,param_2,lVar3);
    puVar5 = puVar2;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR_PTR_1126db840;
      _objc_alloc(PTR_PTR_1126db840);
      puVar4 = puVar2;
      func_0x00010bf00560(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _CACurrentMediaTime();
      func_0x00010c00f120(puVar5,param_2,puVar4);
      _objc_release(puVar4);
    }
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 109033904; end: 10903397f;  */

void FUN_109033904(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf8ce60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb4e80();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    _objc_retain(param_2);
    uVar3 = param_2;
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 109033980; end: 109033bbb; -[SCLensEffectApplicator getEffectsTrace] */

void FUN_109033980(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010bf07da0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc7080();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x109033a58;
  puStack_40 = &UNK_110ad5a50;
  lStack_38 = lVar1;
  _objc_retain(lVar1);
  uVar4 = uVar3;
  func_0x00010bf43280(uVar3,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lStack_38);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 109033bbc; end: 109033c97; -[SCLensEffectApplicator clearEffectLayerWithType:completion:] */

void FUN_109033bbc(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  lVar4 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010c08fa60();
  if (puVar1 == (undefined *)0x0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_40 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    lVar4 = param_4;
    func_0x00010bf3b2a0(param_1,param_2,puVar1,param_4);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar4);
  uVar5 = *(undefined8 *)(param_3 + 0x28);
  _objc_retain(puVar3);
  func_0x00010bf0ae40(uVar5);
  puVar1 = puVar3;
  func_0x00010bf51e00(puVar3);
  puVar2 = puVar3;
  func_0x00010bf529e0();
  _objc_release(puVar3);
  if (puVar2 != (undefined *)0x0) {
    func_0x00010bde0340(param_3,param_2,puVar1,lVar4);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 109033c98; end: 109033d27; -[SCLensEffectApplicator clearEffectLayerWithTypes:completion:] */

void FUN_109033c98(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010bf0ae40(uVar3);
  lVar1 = param_3;
  func_0x00010bf51e00(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  if (lVar2 != 0) {
    func_0x00010bde0340(param_1,param_2,lVar1,param_4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 109033d28; end: 109033dcf; -[SCLensEffectApplicator clearAllEffects] */

void FUN_109033d28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x28));
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f771d8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f771b8;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110f77198;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_40,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde0340(param_1,param_2,puVar1,0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf0ae40(*(undefined8 *)(puVar1 + 0x28));
  uVar2 = *(undefined8 *)(puVar1 + 8);
  func_0x00010bfe6360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 109033dd0; end: 109033e13; -[SCLensEffectApplicator clearAllResources] */

void FUN_109033dd0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109033e14; end: 109033f5f; -[SCLensEffectApplicator memoryUsage] */

void FUN_109033e14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x109033ed0;
  puStack_30 = &UNK_110855e40;
  puStack_28 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c13e740(uVar2,param_2,&puStack_48);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_28);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 109033f60; end: 109034037; -[SCLensEffectApplicator effectsStatistics] */

void FUN_109033f60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010bf07da0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc7040();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_109034038;
  puStack_40 = &UNK_110ad5a80;
  lStack_38 = lVar1;
  _objc_retain(lVar1);
  uVar4 = uVar3;
  func_0x00010bf43280(uVar3,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lStack_38);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 109034038; end: 109034177;  */

void FUN_109034038(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  float fVar5;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  fVar5 = -32.0;
  _objc_retain(param_2);
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c8c88;
  if (lVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar1 = param_2;
    func_0x00010c0d5b00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f40e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126dd048;
    _objc_alloc(PTR_PTR_1126dd048);
    func_0x00010c08ebe0(puVar2);
    func_0x00010c00ee40((double)fVar5,puVar4);
    _objc_release(puVar2);
  }
  _objc_release(lVar3);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 109034178; end: 1090341e7;  */

undefined8 FUN_109034178(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1090341e8; end: 10903469b; -[SCLensEffectApplicator _applyEffectLayers:async:completion:] */

ulong FUN_1090341e8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 uVar15;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x28));
  puVar2 = &UNK_10f5482a0;
  func_0x000107c31820();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar15 = 0;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  if (uVar3 == 0) {
    _objc_release(param_3);
  }
  else {
    uVar14 = 0;
    uVar12 = 1;
    do {
      uVar13 = 0;
      puVar6 = puVar5;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        lVar4 = param_1;
        func_0x00010beb3de0();
        uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
        func_0x00010c06c580();
        puVar5 = *(undefined **)(param_1 + 0x10);
        func_0x00010c0988e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        uVar14 = uVar14 | (uint)lVar4;
        uVar12 = uVar12 & uVar1;
        uVar13 = uVar13 + 1;
        puVar6 = puVar5;
      } while (uVar3 != uVar13);
      uVar3 = param_3;
      func_0x00010bf52a60();
    } while (uVar3 != 0);
    _objc_release(param_3);
    if ((uVar12 != 1 || (uVar14 & 1) != 0) && (func_0x00010bf529e0(), puVar6 != (undefined *)0x0)) {
      puVar6 = &UNK_10f5482b2;
      func_0x000107c31820(&UNK_10f5482b2);
      lVar11 = param_1;
      func_0x00010bf07da0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar5);
      lVar4 = lVar11;
      func_0x00010bfaea20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      _CACurrentMediaTime();
      lVar11 = lVar4;
      func_0x00010bf529e0();
      if (lVar11 != 0) {
        puVar7 = PTR_PTR_1126db840;
        _objc_alloc(PTR_PTR_1126db840);
        func_0x00010c00f120(uVar15);
        func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
        _objc_release(puVar7);
      }
      _objc_release(puVar5);
      func_0x000107c31828(puVar6);
      puVar6 = &UNK_10f5482d9;
      func_0x000107c31820(&UNK_10f5482d9);
      func_0x00010c186fc0(param_1);
      puVar7 = PTR_PTR_1126db840;
      _objc_alloc(PTR_PTR_1126db840);
      _objc_retain(param_3);
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      puVar9 = puVar8;
      func_0x00010bfb2660(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      _objc_release(puVar8);
      _objc_release(param_3);
      func_0x00010c00f120(uVar15,puVar7);
      _objc_release(puVar9);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30));
      func_0x000107c31828(puVar6);
      func_0x00010bdce100(param_1);
      _objc_release(puVar7);
      _objc_release(lVar4);
      goto LAB_1090345c0;
    }
  }
  if (param_5 != 0) {
    param_2 = 1;
    (**(code **)(param_5 + 0x10))(param_5,1,0);
  }
LAB_1090345c0:
  _objc_release(puVar5);
  func_0x000107c31828(puVar2);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x000107c31828(puVar2);
  __Unwind_Resume();
  _objc_terminate();
  _objc_retain(param_2);
  lVar11 = *(long *)(param_3 + 0x20);
  _objc_retain(param_2);
  func_0x00010bfb2040(lVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_2);
  _objc_release(param_2);
  return (ulong)(lVar11 == 0);
}



/* Entry: 10903469c; end: 10903473b;  */

bool FUN_10903469c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bfb2040(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_2);
  _objc_release(param_2);
  return lVar1 == 0;
}



/* Entry: 10903473c; end: 1090347ab;  */

undefined8 FUN_10903473c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1090347ac; end: 109034d0b; -[SCLensEffectApplicator _applyEffects:effectLayers:removedEffects:async:completion:] */

void FUN_1090347ac(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar3 = &UNK_10f5482ff;
  func_0x000107c31820();
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x28));
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_109034d0c;
  puStack_150 = &UNK_110ad5ab0;
  lVar4 = param_3;
  lStack_148 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain();
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain();
  uVar19 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar19);
  uVar20 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar20);
  uVar16 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar16);
  uVar14 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar14);
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar15);
  _objc_retain(lVar4);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(lVar4);
  lVar7 = lVar4;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar13 = *plStack_130;
    do {
      lVar18 = 0;
      do {
        if (*plStack_130 != lVar13) {
          _objc_enumerationMutation(lVar4);
        }
        uVar1 = (uint)*(undefined8 *)(lStack_138 + lVar18 * 8);
        func_0x00010c096fe0();
        if ((uVar1 >> 2 & 1) != 0) {
          _objc_release(lVar4);
          _objc_release(lVar4);
          goto LAB_109034a3c;
        }
        lVar18 = lVar18 + 1;
      } while (lVar7 != lVar18);
      lVar7 = lVar4;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(lVar4);
  _objc_release(lVar4);
  if (lRam0000000113730748 != -1) {
    func_0x000107c27d9c(0x113730748,&PTR___NSConcreteGlobalBlock_110ad5bd0);
  }
  if ((bRam0000000113730740 & 1) != 0) {
    puVar8 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
    func_0x00010c114d40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf981e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    if (puVar10 != (undefined *)0x0) {
      puVar8 = puVar10;
      func_0x00010c0720c0();
      _objc_release(puVar10);
      if ((int)puVar8 != 0) {
LAB_109034a3c:
        uVar17 = 0xfffffff0;
        goto LAB_109034a44;
      }
    }
  }
  uVar17 = 0;
LAB_109034a44:
  uVar11 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  FUN_109032fd8();
  _objc_release(uVar11);
  puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e8 = 0xc2000000;
  pcStack_1e0 = FUN_109034d78;
  puStack_1d8 = &UNK_110ad5b10;
  _objc_retain(uVar5);
  uStack_170 = 0;
  uStack_1d0 = uVar5;
  lStack_1c8 = param_1;
  _objc_retain(param_3);
  lStack_1c0 = param_3;
  _objc_retain(param_4);
  uStack_1b8 = param_4;
  _objc_retain(param_7);
  uStack_178 = param_7;
  _objc_retain(uVar20);
  uStack_1b0 = uVar20;
  _objc_retain(uVar6);
  uStack_1a8 = uVar6;
  _objc_retain(param_5);
  uStack_1a0 = param_5;
  _objc_retain(uVar19);
  uStack_198 = uVar19;
  _objc_retain(uVar14);
  uStack_190 = uVar14;
  _objc_retain(uVar15);
  uStack_188 = uVar15;
  _objc_retain(uVar16);
  ppuVar12 = &puStack_1f0;
  uStack_180 = uVar16;
  _objc_retainBlock(ppuVar12);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c0863e0();
  uVar11 = *(undefined8 *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c000(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c180580(uVar11);
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c180560();
  }
  _objc_release(uVar11);
  _objc_release(ppuVar12);
  _objc_release(uStack_180);
  _objc_release(uStack_188);
  _objc_release(uStack_190);
  _objc_release(uStack_198);
  _objc_release(uStack_1a0);
  _objc_release(uStack_1a8);
  _objc_release(uStack_1b0);
  _objc_release(uStack_178);
  _objc_release(uStack_1b8);
  _objc_release(lStack_1c0);
  _objc_release(uStack_1d0);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar16);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  func_0x000107c31828(puVar3);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c31828(puVar3);
  __Unwind_Resume();
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar17);
  func_0x00010bf8ce60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bf8ce20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar17);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 109034d0c; end: 109034d77;  */

void FUN_109034d0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf8ce60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf8ce20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109034d78; end: 109034f23;  */

void FUN_109034d78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar10);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(param_3);
  return;
}



/* Entry: 109034f24; end: 1090354b3;  */

void FUN_109034f24(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  lVar9 = lVar2;
  func_0x00010bf07da0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed0860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  func_0x00010c169a40(*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09c900();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar11);
  uVar4 = uVar3;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c1be980(*(undefined8 *)(param_1 + 0x20));
  lVar9 = *(long *)(param_1 + 0x88);
  if (lVar9 == 2) {
    lVar10 = *(long *)(param_1 + 0x30);
    _objc_retain(lVar10);
    lVar9 = lVar10;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar9 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar10);
        }
        uVar3 = *(undefined8 *)(lVar14 * 8);
        uVar13 = *(undefined8 *)(param_1 + 0x68);
        func_0x00010bf8cea0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12c100();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        uVar12 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bf07da0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar12;
        func_0x00010c0d3c80();
        _objc_release(uVar12);
        func_0x00010c12d500(uVar3);
        uVar12 = uVar3;
        func_0x00010bf51e00(uVar3);
        func_0x00010c169a40(*(undefined8 *)(param_1 + 0x20));
        _objc_release(uVar12);
        uVar15 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c09c900(uVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar15;
        func_0x00010c0d3c80();
        _objc_release(uVar15);
        func_0x00010c12d500(uVar12);
        uVar15 = uVar12;
        func_0x00010bf51e00(uVar12);
        func_0x00010c1be980(*(undefined8 *)(param_1 + 0x20));
        _objc_release(uVar15);
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bf5e060(uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(uVar13);
        uVar15 = uVar6;
        func_0x00010bfaea20(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c186fc0(*(undefined8 *)(param_1 + 0x20));
        _objc_release(uVar15);
        _objc_release(uVar6);
        _objc_release(uVar13);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar3);
        lVar14 = lVar14 + 1;
      } while (lVar9 != lVar14);
      lVar9 = lVar10;
      func_0x00010bf52a60();
    }
    _objc_release(lVar10);
    puVar7 = PTR_PTR_1126db840;
    _objc_alloc(PTR_PTR_1126db840);
    func_0x00010c00f120(*(undefined8 *)(param_1 + 0x90));
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x70));
    lVar9 = *(long *)(param_1 + 0x78);
    if (lVar9 != 0) {
      param_2 = 2;
      (**(code **)(lVar9 + 0x10))(lVar9,2,*(undefined8 *)(param_1 + 0x38));
    }
    _objc_release(puVar7);
  }
  else if (lVar9 == 1) {
    lVar10 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar10);
    lVar9 = lVar10;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar9 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar10);
        }
        uVar12 = *(undefined8 *)(lVar14 * 8);
        puVar7 = PTR_PTR_1126dd038;
        _objc_alloc(PTR_PTR_1126dd038);
        uVar3 = uVar12;
        func_0x00010c094540(uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = *(undefined8 *)(param_1 + 0x90);
        func_0x00010c07f200(uVar12);
        func_0x00010c00f040(uVar15,puVar7);
        _objc_release(uVar3);
        func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x60));
        _objc_release(puVar7);
        lVar14 = lVar14 + 1;
      } while (lVar9 != lVar14);
      lVar9 = lVar10;
      func_0x00010bf52a60();
    }
    _objc_release(lVar10);
    lVar9 = *(long *)(param_1 + 0x78);
    if (lVar9 != 0) {
      param_2 = 1;
      (**(code **)(lVar9 + 0x10))(lVar9,1,*(undefined8 *)(param_1 + 0x38));
    }
  }
  else if (lVar9 == 0) {
    lVar9 = *(long *)(param_1 + 0x78);
    if (lVar9 != 0) {
      param_2 = 0;
      (**(code **)(lVar9 + 0x10))(lVar9,0,*(undefined8 *)(param_1 + 0x38));
    }
    puVar7 = PTR_PTR_1126db840;
    _objc_alloc(PTR_PTR_1126db840);
    func_0x00010c00f120(*(undefined8 *)(param_1 + 0x90));
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40));
    lVar9 = lVar2;
    func_0x00010bf529e0();
    if (lVar9 != 0) {
      puVar5 = PTR_PTR_1126db840;
      _objc_alloc(PTR_PTR_1126db840);
      func_0x00010c00f120(*(undefined8 *)(param_1 + 0x90));
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x48));
      _objc_release(puVar5);
    }
    lVar9 = *(long *)(param_1 + 0x50);
    func_0x00010bf529e0();
    if (lVar9 != 0) {
      puVar5 = PTR_PTR_1126db840;
      _objc_alloc(PTR_PTR_1126db840);
      func_0x00010c00f120(*(undefined8 *)(param_1 + 0x90));
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x58));
      _objc_release(puVar5);
    }
    _objc_release(puVar7);
  }
  _objc_release(uVar4);
  _objc_release(uVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar2 + 0x20),PTR_s_containsObject__1125b07e8,param_2);
  return;
}



/* Entry: 1090354b4; end: 1090354bf;  */

void FUN_1090354b4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_containsObject__1125b07e8,param_2);
  return;
}



/* Entry: 1090354c0; end: 10903555f;  */

bool FUN_1090354c0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bfb2040(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_2);
  _objc_release(param_2);
  return lVar1 == 0;
}



/* Entry: 109035560; end: 1090355cf;  */

undefined8 FUN_109035560(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1090355d0; end: 109035b0b; -[SCLensEffectApplicator _clearEffectLayerWithTypes:completion:] */

void FUN_1090355d0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x28));
  puVar2 = &UNK_10f548336;
  func_0x000107c31820();
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_109035b0c;
  puStack_118 = &UNK_110ad5b40;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lStack_110 = param_1;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar4 = param_3;
  func_0x00010c124d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c071780();
  puVar3 = PTR_PTR_1126db840;
  _objc_alloc();
  _CACurrentMediaTime();
  func_0x00010c00f120();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
  uVar11 = *(undefined8 *)(param_1 + 0x88);
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_109035b74;
  puStack_140 = &UNK_110857a38;
  _objc_retain(lVar4);
  lStack_138 = lVar4;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c186fc0(param_1);
  _objc_release(uVar11);
  lVar5 = lVar4;
  func_0x00010bf529e0();
  if (lVar5 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))();
    }
    goto LAB_109035a4c;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain();
  if (iVar1 == 0) {
    uVar8 = *(ulong *)(param_1 + 8);
    func_0x00010c06f880();
    if ((uVar8 & 1) != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      uVar7 = uVar6;
      _objc_retain();
      _dispatch_group_create();
      _dispatch_group_enter();
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_1c8 = 0;
      plStack_1d0 = (long *)0x0;
      lStack_1d8 = 0;
      uStack_1e0 = 0;
      _objc_retain(lVar4);
      lVar5 = lVar4;
      func_0x00010bf52a60();
      if (lVar5 != 0) {
        lVar13 = *plStack_1d0;
        do {
          lVar14 = 0;
          do {
            if (*plStack_1d0 != lVar13) {
              _objc_enumerationMutation(lVar4);
            }
            uVar12 = *(undefined8 *)(lStack_1d8 + lVar14 * 8);
            _dispatch_group_enter(uVar7);
            uVar9 = *(undefined8 *)(param_1 + 8);
            func_0x00010c269d40(uVar9);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar12;
            func_0x00010c094540(uVar12);
            _objc_retainAutoreleasedReturnValue();
            puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_218 = 0xc2000000;
            pcStack_210 = FUN_109035dac;
            puStack_208 = &UNK_1108c0008;
            _objc_retain(uVar6);
            uStack_200 = uVar6;
            uStack_1f8 = uVar12;
            uStack_1e8 = param_2;
            _objc_retain(uVar7);
            uStack_1f0 = uVar7;
            func_0x00010c12cf00(uVar9);
            _objc_release(uVar10);
            _objc_release(uVar9);
            _objc_release(uStack_1f0);
            _objc_release(uStack_200);
            lVar14 = lVar14 + 1;
          } while (lVar5 != lVar14);
          lVar5 = lVar4;
          func_0x00010bf52a60();
        } while (lVar5 != 0);
      }
      _objc_release(lVar4);
      _dispatch_group_leave(uVar7);
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c11de00(uVar9);
      _objc_retainAutoreleasedReturnValue();
      puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_250 = 0xc2000000;
      pcStack_248 = FUN_109035e88;
      puStack_240 = &UNK_11084a9e8;
      _objc_retain(param_4);
      lStack_238 = param_1;
      lStack_228 = param_4;
      _objc_retain(lVar4);
      uVar10 = uVar9;
      lStack_230 = lVar4;
      func_0x000107c27d98(uVar7,uVar9,&puStack_258);
      _objc_release(uVar9);
      _objc_release(lStack_230);
      _objc_release(lStack_228);
      goto LAB_109035a34;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf98be0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfe6360(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_198 = 0xc2000000;
    uStack_190 = 0x109035c84;
    puStack_188 = &UNK_110ad5b70;
    _objc_retain(uVar11);
    uStack_180 = uVar11;
    _objc_retain(uVar6);
    uStack_168 = uVar6;
    _objc_retain(param_4);
    lStack_178 = param_1;
    lStack_160 = param_4;
    _objc_retain(lVar4);
    lStack_170 = lVar4;
    func_0x00010bf3b7c0(uVar7);
    _objc_release(uVar7);
    _objc_release(lStack_170);
    _objc_release(lStack_160);
    _objc_release(uStack_168);
    uVar7 = uStack_180;
LAB_109035a34:
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  _objc_release(uVar11);
LAB_109035a4c:
  _objc_release(lStack_138);
  _objc_release(puVar3);
  _objc_release(lVar4);
  func_0x000107c31828(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c31828(puVar2);
  __Unwind_Resume();
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x10);
  func_0x00010c12c100(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar10);
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
  return;
}



/* Entry: 109035b0c; end: 109035b73;  */

void FUN_109035b0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c12c100(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 109035b74; end: 109035c13;  */

bool FUN_109035b74(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bfb2040(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_2);
  _objc_release(param_2);
  return lVar1 == 0;
}



/* Entry: 109035c14; end: 109035d63;  */

undefined8 FUN_109035c14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 109035d64; end: 109035dab;  */

void FUN_109035d64(long param_1)

{
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x38) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010be64f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__notifyRemovedEffects__112576d78,
             *(undefined8 *)(param_1 + 0x30));
  return;
}


