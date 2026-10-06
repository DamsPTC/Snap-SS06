/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106eb33c4; end: 106eb347b; -[SCSpectaclesTransferProgressMonitor initWithDevice:announcer:analyticsLogger:] */

undefined1 *
FUN_106eb33c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f7ac0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bef9980(param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_5);
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106eb347c; end: 106eb3503; -[SCSpectaclesTransferProgressMonitor _kickUptimeWatchdog] */

void FUN_106eb347c(long param_1)

{
  long lVar1;
  
  func_0x00010c186da0(0);
  func_0x00010c199fe0(param_1);
  lVar1 = param_1;
  func_0x00010c28f260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c28f260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(lVar1);
    func_0x00010c21d320(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bec2070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startUptimeWatchdog_11258e1c0);
    return;
  }
  return;
}



/* Entry: 106eb3504; end: 106eb35bb; -[SCSpectaclesTransferProgressMonitor _startUptimeWatchdog] */

void FUN_106eb3504(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_2;
  func_0x00010c28f260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  func_0x00010bf5dde0(param_2);
  puVar2 = PTR_PTR_1126bc890;
  func_0x00010c150380(300.0 - param_1,PTR_PTR_1126bc890,param_3,param_2,
                      PTR_s__uptimeWatchdogTimedOut_112535b00,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21d320(param_2,param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215d20(param_2,param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106eb35bc; end: 106eb3667; -[SCSpectaclesTransferProgressMonitor _stopUptimeWatchdog] */

void FUN_106eb35bc(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  double dVar2;
  
  lVar1 = param_2;
  func_0x00010c28f260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010c28f260(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(lVar1);
    func_0x00010c21d320(param_2,param_3,0);
    lVar1 = param_2;
    func_0x00010c270820(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    dVar2 = param_1;
    func_0x00010bf5dde0(param_2);
    func_0x00010c186da0(dVar2 - param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106eb3668; end: 106eb37a7; -[SCSpectaclesTransferProgressMonitor _uptimeWatchdogTimedOut] */

void FUN_106eb3668(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010c21d320(param_1,param_2,0);
  func_0x00010bfa0020(param_1);
  func_0x00010c199fe0(param_1);
  func_0x00010c186da0(0,param_1);
  lVar1 = param_1;
  func_0x00010bf6fd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2197e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfa0020(param_1);
  func_0x00010bf6fd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  _objc_release(param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106eb37a8;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x000100c749e0((float)((double)lVar1 * 60.0),"APPSTORE",&puStack_70);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106eb37a8; end: 106eb37f3;  */

void FUN_106eb37a8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2197e0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eb37f4; end: 106eb386f; -[SCSpectaclesTransferProgressMonitor spectaclesDevice:onFirmwareUpdate:progress:] */

void FUN_106eb37f4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if ((param_4 == 5) && (param_3 == lVar1)) {
                    /* WARNING: Could not recover jumptable at 0x00010be469d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__kickUptimeWatchdog_11256f410);
    return;
  }
  return;
}



/* Entry: 106eb3870; end: 106eb38ef; -[SCSpectaclesTransferProgressMonitor spectaclesTransferSession:onTransferUpdate:] */

void FUN_106eb3870(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_3);
  if ((param_4 == 5) && (param_3 == lVar1)) {
                    /* WARNING: Could not recover jumptable at 0x00010be469d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__kickUptimeWatchdog_11256f410);
    return;
  }
  return;
}



/* Entry: 106eb38f0; end: 106eb39b7; -[SCSpectaclesTransferProgressMonitor spectaclesDeviceDidUpdateState:] */

void FUN_106eb38f0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 == lVar1) {
    lVar1 = param_3;
    func_0x00010bf48d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c27d020();
    if ((int)lVar2 == 0) {
      lVar2 = param_3;
      func_0x00010bf48d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf48960();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((int)lVar3 == 0) {
        func_0x00010bec3b20(param_1);
        goto LAB_106eb39a0;
      }
    }
    else {
      _objc_release(lVar1);
    }
    func_0x00010bec2060(param_1);
  }
LAB_106eb39a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb39b8; end: 106eb39bf; -[SCSpectaclesTransferProgressMonitor uptimeTimer] */

undefined8 FUN_106eb39b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106eb39c0; end: 106eb39ef; -[SCSpectaclesTransferProgressMonitor setUptimeTimer:] */

void FUN_106eb39c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eb39f0; end: 106eb39f7; -[SCSpectaclesTransferProgressMonitor timerStartDate] */

undefined8 FUN_106eb39f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106eb39f8; end: 106eb3a27; -[SCSpectaclesTransferProgressMonitor setTimerStartDate:] */

void FUN_106eb39f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eb3a28; end: 106eb3a2f; -[SCSpectaclesTransferProgressMonitor cumulativeWatchdogUptime] */

undefined8 FUN_106eb3a28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106eb3a30; end: 106eb3a37; -[SCSpectaclesTransferProgressMonitor setCumulativeWatchdogUptime:] */

void FUN_106eb3a30(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 106eb3a38; end: 106eb3a3f; -[SCSpectaclesTransferProgressMonitor failureCount] */

undefined8 FUN_106eb3a38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106eb3a40; end: 106eb3a47; -[SCSpectaclesTransferProgressMonitor setFailureCount:] */

void FUN_106eb3a40(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 106eb3a48; end: 106eb3a5f; -[SCSpectaclesTransferProgressMonitor device] */

void FUN_106eb3a48(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106eb3a60; end: 106eb3a6b; -[SCSpectaclesTransferProgressMonitor setDevice:] */

void FUN_106eb3a60(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 106eb3a6c; end: 106eb3a83; -[SCSpectaclesTransferProgressMonitor analyticsLogger] */

void FUN_106eb3a6c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106eb3a84; end: 106eb3a8f; -[SCSpectaclesTransferProgressMonitor setAnalyticsLogger:] */

void FUN_106eb3a84(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 106eb3a90; end: 106eb3acf; -[SCSpectaclesTransferProgressMonitor .cxx_destruct] */

void FUN_106eb3a90(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106eb3ad0; end: 106eb3d2f; -[SCSpectaclesDataFlowsManager initWithDevice:peripheralResponseHandler:connectionHub:centralManager:backgroundTaskWrapper:clientControllerScopeExposer:clientControllerScopeServices:] */

undefined1 *
FUN_106eb3ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = &uStack_70;
  _objc_initWeak(auStack_58,param_3);
  _objc_initWeak(auStack_60,param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f7ac8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x68) = 0;
    puVar2 = auStack_58;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x70),puVar2);
    _objc_release(puVar2);
    puVar2 = auStack_60;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x78),puVar2);
    _objc_release(puVar2);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_9);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126d30c8;
    _objc_alloc();
    puVar2 = auStack_58;
    _objc_loadWeakRetained(puVar2);
    func_0x00010c234b20();
    func_0x00010c04a440();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined **)((long)puVar1 + 0x80) = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar4;
    _objc_release(uVar3);
    func_0x00010bed5a20(puVar1);
    func_0x00010bec1980(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return (undefined1 *)puVar1;
}



/* Entry: 106eb3d30; end: 106eb3eef; -[SCSpectaclesDataFlowsManager dealloc] */

void FUN_106eb3d30(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 auStack_218 [16];
  long lStack_198;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 auStack_d8 [16];
  long lStack_58;
  
  plVar4 = &lStack_130;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010bf51e00();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    _objc_retain(lVar2);
    param_3 = &uStack_120;
    param_4 = auStack_d8;
    lVar1 = lVar2;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar12 = *plStack_110;
      do {
        lVar14 = 0;
        do {
          if (*plStack_110 != lVar12) {
            _objc_enumerationMutation(lVar2);
          }
          func_0x00010be5d400(param_1);
          lVar14 = lVar14 + 1;
        } while (lVar1 != lVar14);
        param_3 = &uStack_120;
        param_4 = auStack_d8;
        lVar1 = lVar2;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar2);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  func_0x00010be09740(param_1);
  puStack_128 = PTR_PTR_1126f7ac8;
  lStack_130 = param_1;
  _objc_msgSendSuper2(&lStack_130,PTR_s_dealloc_112525b20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  if (param_3 != (undefined8 *)0x0) {
    puVar5 = param_3;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined8 *)0x0) {
      puVar6 = plVar4 + 0xe;
      _objc_loadWeakRetained();
      if (puVar6 == (undefined8 *)0x0) {
        _objc_release(puVar5);
      }
      else {
        puVar7 = param_3;
        func_0x00010bf6fd20();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c15e740();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = plVar4 + 0xe;
        _objc_loadWeakRetained();
        puVar9 = puVar15;
        func_0x00010c15e740();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar8;
        func_0x00010c071ae0();
        _objc_release(puVar9);
        _objc_release(puVar15);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        if (((ulong)puVar10 & 1) != 0) {
          _objc_retain(plVar4);
          _objc_sync_enter(plVar4);
          puVar6 = param_3;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = plVar4;
          puVar5 = puVar6;
          func_0x00010be91900();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar6);
          if (puVar15 == (undefined8 *)0x0) {
            puVar6 = param_3;
            func_0x00010c064540();
            _objc_retainAutoreleasedReturnValue();
            param_4 = auStack_218;
            puVar5 = puVar6;
            func_0x00010bf52a60();
            lVar1 = lRam0000000000000000;
            while (puVar5 != (undefined8 *)0x0) {
              puVar15 = (undefined8 *)0x0;
              do {
                if (lRam0000000000000000 != lVar1) {
                  _objc_enumerationMutation(puVar6);
                }
                uVar13 = *(undefined8 *)((long)puVar15 * 8);
                func_0x00010c27a200(param_3);
                func_0x00010c2197c0(uVar13);
                puVar15 = (undefined8 *)((long)puVar15 + 1);
              } while (puVar5 != puVar15);
              param_4 = auStack_218;
              puVar5 = puVar6;
              func_0x00010bf52a60();
            }
            _objc_release(puVar6);
            puVar6 = (undefined8 *)PTR_PTR_1126d30d0;
            _objc_alloc();
            func_0x00010c008700();
            puVar5 = puVar6;
            func_0x00010bdc7880(plVar4);
            _objc_release(puVar6);
          }
          _objc_sync_exit(plVar4);
          _objc_release(plVar4);
          goto LAB_106eb4178;
        }
      }
    }
    plVar4 = param_3;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3;
    param_4 = puVar6;
    func_0x00010bf63920(plVar4);
    _objc_release(puVar6);
    _objc_release(plVar4);
  }
LAB_106eb4178:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(plVar4);
  __Unwind_Resume();
  _objc_retain(puVar5);
  _objc_retain(param_4);
  if ((param_4 == (undefined8 *)0x0) ||
     (puVar6 = puVar5, func_0x00010bf529e0(), puVar6 == (undefined8 *)0x0)) goto LAB_106eb43ac;
  puVar6 = param_4;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined8 *)0x0) {
LAB_106eb4350:
    param_3 = param_4;
    func_0x00010bf6b020(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf63920(param_3);
    _objc_release(puVar3);
  }
  else {
    puVar15 = param_3 + 0xe;
    _objc_loadWeakRetained();
    if (puVar15 == (undefined8 *)0x0) {
      _objc_release(puVar6);
      goto LAB_106eb4350;
    }
    puVar8 = param_4;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c15e740();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_3 + 0xe;
    _objc_loadWeakRetained(puVar7);
    puVar10 = puVar7;
    func_0x00010c15e740();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010c071ae0();
    _objc_release(puVar10);
    _objc_release(puVar7);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar15);
    _objc_release(puVar6);
    if (((ulong)puVar11 & 1) == 0) goto LAB_106eb4350;
    _objc_retain(param_3);
    _objc_sync_enter(param_3);
    puVar6 = param_4;
    func_0x00010bfe5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_3;
    func_0x00010be91900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    if (puVar15 != (undefined8 *)0x0) {
      func_0x00010bdc8940(param_3);
    }
    _objc_release(puVar15);
    _objc_sync_exit(param_3);
  }
  _objc_release(param_3);
LAB_106eb43ac:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 106eb3ef0; end: 106eb41e7; -[SCSpectaclesDataFlowsManager initiateDataFlowWithRequest:] */

void FUN_106eb3ef0(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      puVar2 = param_1 + 0x70;
      _objc_loadWeakRetained();
      if (puVar2 == (undefined *)0x0) {
        _objc_release(puVar1);
      }
      else {
        puVar3 = param_3;
        func_0x00010bf6fd20();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c15e740();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = param_1 + 0x70;
        _objc_loadWeakRetained();
        puVar5 = puVar10;
        func_0x00010c15e740();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010c071ae0(puVar4,param_2,puVar5);
        _objc_release(puVar5);
        _objc_release(puVar10);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar1);
        if (((ulong)puVar6 & 1) != 0) {
          _objc_retain(param_1);
          _objc_sync_enter(param_1);
          puVar2 = param_3;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = param_1;
          puVar1 = puVar2;
          func_0x00010be91900();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar2);
          if (puVar10 == (undefined *)0x0) {
            uStack_108 = 0;
            uStack_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            lStack_128 = 0;
            uStack_130 = 0;
            uStack_118 = 0;
            plStack_120 = (long *)0x0;
            puVar1 = param_3;
            func_0x00010c064540();
            _objc_retainAutoreleasedReturnValue();
            param_4 = auStack_e8;
            puVar2 = puVar1;
            func_0x00010bf52a60();
            if (puVar2 != (undefined *)0x0) {
              lVar9 = *plStack_120;
              do {
                puVar10 = (undefined *)0x0;
                do {
                  if (*plStack_120 != lVar9) {
                    _objc_enumerationMutation(puVar1);
                  }
                  uVar8 = *(undefined8 *)(lStack_128 + (long)puVar10 * 8);
                  puVar3 = param_3;
                  func_0x00010c27a200(param_3);
                  func_0x00010c2197c0(uVar8,param_2,puVar3);
                  puVar10 = puVar10 + 1;
                } while (puVar2 != puVar10);
                param_4 = auStack_e8;
                puVar2 = puVar1;
                func_0x00010bf52a60(puVar1,param_2,&uStack_130,param_4,0x10);
              } while (puVar2 != (undefined *)0x0);
            }
            _objc_release(puVar1);
            puVar2 = PTR_PTR_1126d30d0;
            _objc_alloc();
            func_0x00010c008700();
            puVar1 = puVar2;
            func_0x00010bdc7880(param_1);
            _objc_release(puVar2);
          }
          _objc_sync_exit(param_1);
          _objc_release(param_1);
          goto LAB_106eb4178;
        }
      }
    }
    param_1 = param_3;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e8ae58,3,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    param_4 = puVar2;
    func_0x00010bf63920(param_1);
    _objc_release(puVar2);
    _objc_release(param_1);
  }
LAB_106eb4178:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  _objc_retain(puVar1);
  _objc_retain(param_4);
  if ((param_4 == (undefined *)0x0) ||
     (puVar2 = puVar1, func_0x00010bf529e0(), puVar2 == (undefined *)0x0)) goto LAB_106eb43ac;
  puVar2 = param_4;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
LAB_106eb4350:
    param_3 = param_4;
    func_0x00010bf6b020(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e8ae58,3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf63920(param_3,param_2,param_4,puVar2);
    _objc_release(puVar2);
  }
  else {
    puVar10 = param_3 + 0x70;
    _objc_loadWeakRetained();
    if (puVar10 == (undefined *)0x0) {
      _objc_release(puVar2);
      goto LAB_106eb4350;
    }
    puVar4 = param_4;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c15e740();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3 + 0x70;
    _objc_loadWeakRetained(puVar3);
    puVar6 = puVar3;
    func_0x00010c15e740();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c071ae0(puVar5,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar10);
    _objc_release(puVar2);
    if (((ulong)puVar7 & 1) == 0) goto LAB_106eb4350;
    _objc_retain(param_3);
    _objc_sync_enter(param_3);
    puVar2 = param_4;
    func_0x00010bfe5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_3;
    func_0x00010be91900(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar10 != (undefined *)0x0) {
      func_0x00010bdc8940(param_3,param_2,puVar1,puVar10);
    }
    _objc_release(puVar10);
    _objc_sync_exit(param_3);
  }
  _objc_release(param_3);
LAB_106eb43ac:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106eb41e8; end: 106eb43e7; -[SCSpectaclesDataFlowsManager addTasks:forRequest:] */

void FUN_106eb41e8(ulong param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 == 0) || (lVar1 = param_3, func_0x00010bf529e0(), lVar1 == 0)) goto LAB_106eb43ac;
  uVar2 = param_4;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
LAB_106eb4350:
    param_1 = param_4;
    func_0x00010bf6b020(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e8ae58,3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf63920(param_1,param_2,param_4,puVar8);
    _objc_release(puVar8);
  }
  else {
    lVar1 = param_1 + 0x70;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      _objc_release(uVar2);
      goto LAB_106eb4350;
    }
    uVar3 = param_4;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c15e740();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c15e740();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c071ae0(uVar4,param_2,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
    if ((uVar7 & 1) == 0) goto LAB_106eb4350;
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    uVar2 = param_4;
    func_0x00010bfe5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010be91900(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar3 != 0) {
      func_0x00010bdc8940(param_1,param_2,param_3,uVar3);
    }
    _objc_release(uVar3);
    _objc_sync_exit(param_1);
  }
  _objc_release(param_1);
LAB_106eb43ac:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb43e8; end: 106eb43eb; -[SCSpectaclesDataFlowsManager moveTaskToTheFrontOfTheQueue:forRequest:] */

void FUN_106eb43e8(void)

{
  return;
}



/* Entry: 106eb43ec; end: 106eb4527; -[SCSpectaclesDataFlowsManager cancelDataFlowRequest:] */

void FUN_106eb43ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c15e740();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c15e740();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c071ae0(lVar2,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar5 != 0) {
      _objc_retain(param_1);
      _objc_sync_enter(param_1);
      lVar3 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010be91900(param_1,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      if (lVar1 != 0) {
        func_0x00010bddac60(param_1,param_2,lVar1);
      }
      _objc_release(lVar1);
      _objc_sync_exit(param_1);
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb4528; end: 106eb475b; -[SCSpectaclesDataFlowsManager clientControllerConnectedClient:withChannelConnectionTimeInMs:] */

undefined8 FUN_106eb4528(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = param_3;
  func_0x00010c27a200(param_3);
  lVar2 = param_1;
  func_0x00010be91940(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = param_3;
  func_0x00010c27a200(param_3);
  func_0x00010c0df780(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar7,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010bf4ab60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(puVar3);
  func_0x00010c26a6e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010c17ab00(uVar1,param_2,param_4);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar2);
  puVar6 = auStack_e8;
  lVar4 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_130,puVar6,0x10);
  if (lVar4 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010bebfe20(param_1,param_2,*(undefined8 *)(lStack_128 + lVar9 * 8));
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      puVar6 = auStack_e8;
      lVar4 = lVar2;
      puVar5 = &uStack_130;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,puVar6,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar2);
  func_0x00010bed5a20(param_1);
  _objc_release(uVar1);
  _objc_release(lVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume(param_3);
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  _objc_retain(param_3);
  _objc_sync_enter(param_3);
  uVar1 = param_3;
  func_0x00010beb5200(param_3,param_2,puVar5,puVar6);
  _objc_sync_exit(param_3);
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  return uVar1;
}



/* Entry: 106eb475c; end: 106eb47f3; -[SCSpectaclesDataFlowsManager clientController:didErrorShouldReTry:] */

undefined8
FUN_106eb475c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = param_1;
  func_0x00010beb5200(param_1,param_2,param_3,param_4);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106eb47f4; end: 106eb490b; -[SCSpectaclesDataFlowsManager clientControllerDisconnectingClient:disconnectReason:error:] */

void FUN_106eb47f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 != 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = param_3;
    func_0x00010c27a200(param_3);
    func_0x00010c0df780(puVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf4ab60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar2);
    func_0x00010be32780(param_1,param_2,uVar1,param_5);
    _objc_release(uVar1);
  }
  func_0x00010bed5a20(param_1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb490c; end: 106eb4acf; -[SCSpectaclesDataFlowsManager clientControllerDisconnectedClient:] */

void FUN_106eb490c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = *(long *)(param_1 + 0x38);
  uVar1 = param_3;
  func_0x00010c27a200(param_3);
  func_0x00010c0df780(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010bf4ab60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = param_3;
    func_0x00010c27a200(param_3);
    func_0x00010c0df780(puVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar6,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e1e0(uVar5,param_2,uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar6);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = param_3;
    func_0x00010c27a200(param_3);
    func_0x00010c0df780(puVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar6,param_2,0,puVar2);
    _objc_release(puVar2);
    uVar1 = param_3;
    func_0x00010c27a200(param_3);
    func_0x00010bdde060(param_1,param_2,uVar1);
  }
  func_0x00010bed5a20(param_1);
  _objc_release(lVar3);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb4ad0; end: 106eb4d13; -[SCSpectaclesDataFlowsManager taskExecutor:startedExecutingTask:] */

void FUN_106eb4ad0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = param_1;
  func_0x00010be918e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    _objc_sync_exit(param_1);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c187ca0(uVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c187cc0(uVar1);
    _objc_release(puVar2);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    uVar6 = uVar1;
    func_0x00010bf638c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((uVar4 & 1) == 0) goto LAB_106eb4cd4;
    uVar6 = *(ulong *)(param_1 + 0x38);
    func_0x00010c27a200(param_3);
    func_0x00010c0df780(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    param_1 = uVar6;
    func_0x00010bf4ab60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(puVar2);
    uVar6 = uVar1;
    func_0x00010bf638c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bf638c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010bf355a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf63940(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar6);
  }
  _objc_release(param_1);
LAB_106eb4cd4:
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb4d14; end: 106eb4e97; -[SCSpectaclesDataFlowsManager taskExecutor:updatedProgressForTask:] */

void FUN_106eb4d14(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = param_1;
  func_0x00010be918e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c187cc0(uVar1);
    _objc_release(puVar2);
    uVar3 = uVar1;
    func_0x00010bf638c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    _objc_opt_respondsToSelector();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((uVar5 & 1) != 0) {
      uVar3 = uVar1;
      func_0x00010bf638c0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010bf638c0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf63960(uVar4);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
  }
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb4e98; end: 106eb50d7; -[SCSpectaclesDataFlowsManager taskExecutor:didExecutedTask:] */

void FUN_106eb4e98(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = param_1;
  func_0x00010be918e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010bf638c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) {
      uVar2 = uVar1;
      func_0x00010bf638c0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010bf638c0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf638e0(uVar3);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c27a200(param_3);
    func_0x00010c0df780(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010bf4ab60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(puVar5);
    func_0x00010c17cc40(uVar6);
    func_0x00010c1a5e40(uVar6);
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c187cc0(uVar1);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8c40(uVar1);
    _objc_release(puVar5);
    func_0x00010be31ea0(param_1);
    _objc_release(uVar6);
  }
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb50d8; end: 106eb5257; -[SCSpectaclesDataFlowsManager taskExecutor:failedToExecuteTask:error:] */

void FUN_106eb50d8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = param_1;
  func_0x00010be918e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010bf638c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) {
      uVar2 = uVar1;
      func_0x00010bf638c0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010bf638c0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf63900(uVar3);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    func_0x00010be31ee0(param_1);
  }
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb5258; end: 106eb53ff; -[SCSpectaclesDataFlowsManager taskExecutor:failedWithError:] */

void FUN_106eb5258(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = *(long *)(param_1 + 0x38);
  lVar1 = param_3;
  func_0x00010c27a200(param_3);
  func_0x00010c0df780(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bf4ab60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(puVar2);
  if (lVar1 != 0) {
    lVar4 = lVar1;
    func_0x00010c26a6e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == param_3) {
      lVar4 = lVar1;
      func_0x00010bf3cbe0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010c252440();
      _objc_release(lVar4);
      if (lVar3 == 1) {
        lVar4 = lVar1;
        func_0x00010bf3cbe0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x00010beb5200(param_1,param_2,lVar4,param_4);
        _objc_release(lVar4);
        if ((int)lVar3 == 0) {
          func_0x00010be32780(param_1,param_2,lVar1,param_4);
        }
        else {
          lVar4 = lVar1;
          func_0x00010bf3cbe0(lVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1205a0();
          _objc_release(lVar4);
        }
      }
    }
  }
  _objc_release(lVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb5400; end: 106eb5473; -[SCSpectaclesDataFlowsManager taskExecutorDidExecutedAllTasks:] */

void FUN_106eb5400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = param_3;
  func_0x00010c27a200(param_3);
  func_0x00010bde15c0(param_1,param_2,uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb5474; end: 106eb56e7; -[SCSpectaclesDataFlowsManager _addNewRequestState:] */

void FUN_106eb5474(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar6 = param_3;
  func_0x00010bf638c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27a200();
  _objc_release(uVar6);
  lVar1 = param_1;
  func_0x00010be91940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010bdd9f60();
    uVar6 = 0;
    _objc_retain(0);
    if ((int)lVar2 == 0) {
      func_0x00010be5d400(param_1);
    }
    else {
      func_0x00010c285a60(param_3);
      uVar3 = param_3;
      func_0x00010bf638c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      _objc_opt_respondsToSelector();
      _objc_release(uVar4);
      _objc_release(uVar3);
      if ((uVar5 & 1) != 0) {
        uVar3 = param_3;
        func_0x00010bf638c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_3;
        func_0x00010bf638c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf639e0(uVar4);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
      func_0x00010beb0c20(param_1);
    }
  }
  else {
    lVar2 = param_1;
    func_0x00010be34ba0();
    if ((int)lVar2 != 0) {
      func_0x00010bebfe20(param_1);
      goto LAB_106eb56b4;
    }
    uVar6 = param_3;
    func_0x00010bf638c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    _objc_release(uVar6);
    if ((uVar4 & 1) == 0) goto LAB_106eb56b4;
    uVar6 = param_3;
    func_0x00010bf638c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bf638c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf639e0(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar6);
LAB_106eb56b4:
  func_0x00010bed3c00(param_1);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106eb56e8; end: 106eb581f; -[SCSpectaclesDataFlowsManager _cancelRequestState:] */

void FUN_106eb56e8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  func_0x00010c285a60(param_3);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x30));
  func_0x00010be8d9a0(param_1);
  uVar1 = param_3;
  func_0x00010bf638c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27a200();
  func_0x00010bde15c0(param_1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf638c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    uVar1 = param_3;
    func_0x00010bf638c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf638c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf63980(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  func_0x00010bed3c00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb5820; end: 106eb597b; -[SCSpectaclesDataFlowsManager _handleTaskDoneForRequestState:] */

void FUN_106eb5820(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf638c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c136d60();
  _objc_release(puVar2);
  if (puVar3 != (undefined1 *)0x1) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    puVar2 = param_3;
    func_0x00010c0edb60();
    _objc_retainAutoreleasedReturnValue();
    param_4 = auStack_d8;
    puVar3 = puVar2;
    func_0x00010bf52a60();
    if (puVar3 != (undefined1 *)0x0) {
      lVar6 = *plStack_110;
      do {
        puVar7 = (undefined1 *)0x0;
        puVar4 = (undefined1 *)puVar5;
        do {
          if (*plStack_110 != lVar6) {
            _objc_enumerationMutation(puVar2);
          }
          iVar1 = (int)*(undefined8 *)(lStack_118 + (long)puVar7 * 8);
          func_0x00010c072f20();
          if (iVar1 == 0) {
            _objc_release(puVar2);
            goto LAB_106eb593c;
          }
          puVar7 = puVar7 + 1;
        } while (puVar3 != puVar7);
        param_4 = auStack_d8;
        puVar3 = puVar2;
        puVar5 = &uStack_120;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined1 *)0x0);
    }
    _objc_release(puVar2);
    puVar4 = param_3;
    func_0x00010be5d2e0(param_1);
  }
LAB_106eb593c:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _objc_retain(param_4);
  puVar2 = puVar4;
  func_0x00010bf638c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c136d60();
  _objc_release(puVar2);
  if (puVar3 != (undefined1 *)0x1) {
    func_0x00010be5d400(param_3,param_2,puVar4,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106eb597c; end: 106eb5a07; -[SCSpectaclesDataFlowsManager _handleTaskFailedForRequestState:error:] */

void FUN_106eb597c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf638c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c136d60();
  _objc_release(lVar1);
  if (lVar2 != 1) {
    func_0x00010be5d400(param_1,param_2,param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb5a08; end: 106eb5b3f; -[SCSpectaclesDataFlowsManager _markCompletedRequestState:] */

void FUN_106eb5a08(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  func_0x00010c285a60(param_3);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x30));
  func_0x00010be8d9a0(param_1);
  uVar1 = param_3;
  func_0x00010bf638c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27a200();
  func_0x00010bde15c0(param_1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf638c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    uVar1 = param_3;
    func_0x00010bf638c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf638c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf639a0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  func_0x00010bed3c00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb5b40; end: 106eb5c8f; -[SCSpectaclesDataFlowsManager _markFailedRequestState:error:] */

void FUN_106eb5b40(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c285a60(param_3);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x30));
  func_0x00010be8d9a0(param_1);
  uVar1 = param_3;
  func_0x00010bf638c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27a200();
  func_0x00010bde15c0(param_1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf638c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    uVar1 = param_3;
    func_0x00010bf638c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf638c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf63920(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  func_0x00010bed3c00(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb5c90; end: 106eb5e67; -[SCSpectaclesDataFlowsManager _closeChannelIfNoLongerNeededForTransferChannel:] */

void FUN_106eb5c90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = param_1;
  func_0x00010be91940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) goto LAB_106eb5e48;
  puVar5 = *(undefined **)(param_1 + 0x38);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar5,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010bf4ab60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  if (puVar4 != (undefined *)0x0) {
    puVar3 = puVar4;
    func_0x00010c26a6e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2dba0();
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010bf3cbe0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c252440();
    _objc_release(puVar3);
    if (puVar5 < (undefined *)0x2) {
      puVar3 = puVar4;
      func_0x00010bf3cbe0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf81280();
    }
    else {
      if (puVar5 == (undefined *)0x2) goto LAB_106eb5e40;
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      uVar8 = *(undefined8 *)(param_1 + 0x38);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar8,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar8;
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12e1e0(uVar7,param_2,uVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar8);
      _objc_release(puVar3);
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar6,param_2,0,puVar3);
    }
    _objc_release(puVar3);
  }
LAB_106eb5e40:
  _objc_release(puVar4);
LAB_106eb5e48:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106eb5e68; end: 106eb5f1f; -[SCSpectaclesDataFlowsManager _haveOpenTransferChannel:] */

undefined8 FUN_106eb5e68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_1 + 0x38);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bf4ab60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf3cbe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(puVar1);
  if ((lVar3 == 0) || (lVar2 = lVar3, func_0x00010c252440(), lVar2 != 1)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  _objc_release(lVar3);
  return uVar5;
}



/* Entry: 106eb5f20; end: 106eb607f; -[SCSpectaclesDataFlowsManager _canSetupTransferChannel:error:] */

undefined * FUN_106eb5f20(ulong param_1,undefined8 param_2,undefined **param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long *unaff_x19;
  long lVar10;
  undefined *unaff_x21;
  undefined8 unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  bool bVar11;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined8 *puStack_210;
  undefined1 auStack_208 [8];
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  long *plStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined **ppuStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_d0;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  iVar1 = (int)param_1;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (undefined **)0x2) {
LAB_106eb5fcc:
    puVar4 = (undefined *)0x1;
  }
  else {
    unaff_x19 = param_4;
    if ((param_3 == (undefined **)0x0) &&
       (func_0x00010bf489a0(), puVar4 = PTR__OBJC_CLASS___NSError_1126ae858, iVar1 != 0)) {
      if (param_4 != (long *)0x0) {
        uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_40 = &PTR____CFConstantStringClassReference_110e8ae78;
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
LAB_106eb602c:
        param_3 = &PTR____CFConstantStringClassReference_110e8ae58;
        puVar3 = puVar4;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_4 = (long)puVar3;
        _objc_release(puVar2);
        unaff_x21 = puVar4;
      }
    }
    else {
      func_0x00010bf48920();
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      if ((param_1 & 1) != 0) goto LAB_106eb5fcc;
      if (param_4 != (long *)0x0) {
        uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_50 = &PTR____CFConstantStringClassReference_110e8ae98;
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106eb602c;
      }
    }
    puVar4 = (undefined *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar4;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_106eb6080;
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar4;
  ppuStack_1a8 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010be91940();
  _objc_retainAutoreleasedReturnValue();
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  puStack_180 = (undefined8 *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  puVar9 = &uStack_190;
  puStack_1a0 = puVar2;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    bVar11 = false;
    unaff_x19 = (long *)*puStack_180;
    do {
      unaff_x23 = PTR_s_dataFlowsRequestStartedPreparing_1125b6820;
      unaff_x21 = (undefined *)0x0;
      do {
        if ((long *)*puStack_180 != unaff_x19) {
          _objc_enumerationMutation(puStack_1a0);
        }
        unaff_x24 = *(undefined **)(lStack_188 + (long)unaff_x21 * 8);
        if (bVar11) {
          bVar11 = true;
          func_0x00010c285a60(unaff_x24);
          unaff_x25 = unaff_x24;
          func_0x00010bf638c0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010bf6b020();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = unaff_x26;
          _objc_opt_respondsToSelector();
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
          if (((ulong)puVar3 & 1) != 0) {
            unaff_x25 = unaff_x24;
            func_0x00010bf638c0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x25;
            func_0x00010bf6b020();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf638c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf639e0(unaff_x26);
            _objc_release(unaff_x24);
            _objc_release(unaff_x26);
LAB_106eb62bc:
            bVar11 = true;
            goto LAB_106eb62d8;
          }
        }
        else {
          puStack_198 = (undefined *)0x0;
          unaff_x26 = puVar4;
          func_0x00010bdd9f60();
          unaff_x25 = puStack_198;
          _objc_retain(puStack_198);
          if ((int)unaff_x26 != 0) {
            func_0x00010c285a60(unaff_x24);
            unaff_x26 = unaff_x24;
            func_0x00010bf638c0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = unaff_x26;
            func_0x00010bf6b020();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            _objc_opt_respondsToSelector();
            _objc_release(puVar3);
            _objc_release(unaff_x26);
            if (((ulong)puVar5 & 1) != 0) {
              unaff_x26 = unaff_x24;
              func_0x00010bf638c0();
              _objc_retainAutoreleasedReturnValue();
              puVar3 = unaff_x26;
              func_0x00010bf6b020();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = unaff_x24;
              func_0x00010bf638c0(unaff_x24);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf639e0(puVar3);
              _objc_release(puVar5);
              _objc_release(puVar3);
              _objc_release(unaff_x26);
            }
            puVar3 = puVar4;
            func_0x00010beb0c20();
            if (((ulong)puVar3 & 1) != 0) goto LAB_106eb62bc;
          }
          func_0x00010be5d400(puVar4);
          bVar11 = false;
LAB_106eb62d8:
          _objc_release(unaff_x25);
        }
        unaff_x21 = unaff_x21 + 1;
      } while (puVar2 != unaff_x21);
      puVar9 = &uStack_190;
      puVar2 = puStack_1a0;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (puVar2 != (undefined *)0x0);
  }
  puVar2 = puStack_1a0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_1b8 = FUN_106eb634c;
  puStack_200 = unaff_x26;
  puStack_1f8 = unaff_x25;
  puStack_1f0 = unaff_x24;
  puStack_1e8 = unaff_x23;
  uStack_1e0 = unaff_x22;
  puStack_1d8 = unaff_x21;
  puStack_1d0 = puVar4;
  plStack_1c8 = unaff_x19;
  ppuStack_1c0 = &puStack_70;
  _objc_retain(puVar9);
  puVar6 = puVar9;
  func_0x00010bf638c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c27a200();
  _objc_release(puVar6);
  lVar10 = *(long *)(puVar2 + 0x38);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar10;
  func_0x00010bf4ab60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(puVar4);
  if (lVar8 == 0) {
    lVar10 = *(long *)(puVar2 + 0x38);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar4);
    if (lVar10 == 0) {
      _objc_initWeak(auStack_208,puVar2);
      puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_230 = 0xc2000000;
      pcStack_228 = FUN_106eb6500;
      puStack_220 = &UNK_110846540;
      _objc_copyWeak(auStack_218,auStack_208);
      puStack_210 = puVar7;
      func_0x0001000d76cc("APPSTORE",&puStack_238);
      _objc_destroyWeak(auStack_218);
      _objc_destroyWeak(auStack_208);
      puVar4 = (undefined *)0x1;
      goto LAB_106eb6440;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_106eb6440:
  _objc_release(lVar8);
  _objc_release(puVar9);
  return puVar4;
}



/* Entry: 106eb6080; end: 106eb634b; -[SCSpectaclesDataFlowsManager _checkRequestsThatAreWaitingForChannelToFinishDisconnecting:] */

ulong FUN_106eb6080(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long lVar8;
  ulong unaff_x21;
  ulong uVar9;
  undefined8 unaff_x22;
  undefined *unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  bool bVar10;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined8 *puStack_1b0;
  undefined1 auStack_1a8 [8];
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_148;
  ulong uStack_140;
  ulong uStack_138;
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
  uVar9 = param_1;
  uStack_148 = param_3;
  func_0x00010be91940();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar7 = &uStack_130;
  uStack_140 = uVar9;
  func_0x00010bf52a60();
  if (uVar9 != 0) {
    bVar10 = false;
    unaff_x19 = *plStack_120;
    do {
      unaff_x23 = PTR_s_dataFlowsRequestStartedPreparing_1125b6820;
      unaff_x21 = 0;
      do {
        if (*plStack_120 != unaff_x19) {
          _objc_enumerationMutation(uStack_140);
        }
        unaff_x24 = *(ulong *)(lStack_128 + unaff_x21 * 8);
        if (bVar10) {
          bVar10 = true;
          func_0x00010c285a60(unaff_x24);
          unaff_x25 = unaff_x24;
          func_0x00010bf638c0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010bf6b020();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = unaff_x26;
          _objc_opt_respondsToSelector();
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
          if ((uVar1 & 1) != 0) {
            unaff_x25 = unaff_x24;
            func_0x00010bf638c0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x25;
            func_0x00010bf6b020();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf638c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf639e0(unaff_x26);
            _objc_release(unaff_x24);
            _objc_release(unaff_x26);
LAB_106eb62bc:
            bVar10 = true;
            goto LAB_106eb62d8;
          }
        }
        else {
          uStack_138 = 0;
          unaff_x26 = param_1;
          func_0x00010bdd9f60();
          unaff_x25 = uStack_138;
          _objc_retain(uStack_138);
          if ((int)unaff_x26 != 0) {
            func_0x00010c285a60(unaff_x24);
            unaff_x26 = unaff_x24;
            func_0x00010bf638c0();
            _objc_retainAutoreleasedReturnValue();
            uVar1 = unaff_x26;
            func_0x00010bf6b020();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            _objc_opt_respondsToSelector();
            _objc_release(uVar1);
            _objc_release(unaff_x26);
            if ((uVar2 & 1) != 0) {
              unaff_x26 = unaff_x24;
              func_0x00010bf638c0();
              _objc_retainAutoreleasedReturnValue();
              uVar1 = unaff_x26;
              func_0x00010bf6b020();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = unaff_x24;
              func_0x00010bf638c0(unaff_x24);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf639e0(uVar1);
              _objc_release(uVar2);
              _objc_release(uVar1);
              _objc_release(unaff_x26);
            }
            uVar1 = param_1;
            func_0x00010beb0c20();
            if ((uVar1 & 1) != 0) goto LAB_106eb62bc;
          }
          func_0x00010be5d400(param_1);
          bVar10 = false;
LAB_106eb62d8:
          _objc_release(unaff_x25);
        }
        unaff_x21 = unaff_x21 + 1;
      } while (uVar9 != unaff_x21);
      puVar7 = &uStack_130;
      uVar9 = uStack_140;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (uVar9 != 0);
  }
  uVar9 = uStack_140;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar9;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_106eb634c;
  uStack_1a0 = unaff_x26;
  uStack_198 = unaff_x25;
  uStack_190 = unaff_x24;
  puStack_188 = unaff_x23;
  uStack_180 = unaff_x22;
  uStack_178 = unaff_x21;
  uStack_170 = param_1;
  lStack_168 = unaff_x19;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  puVar3 = puVar7;
  func_0x00010bf638c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c27a200();
  _objc_release(puVar3);
  lVar8 = *(long *)(uVar9 + 0x38);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar8;
  func_0x00010bf4ab60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(puVar5);
  if (lVar6 == 0) {
    lVar8 = *(long *)(uVar9 + 0x38);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar5);
    if (lVar8 == 0) {
      _objc_initWeak(auStack_1a8,uVar9);
      puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1d0 = 0xc2000000;
      pcStack_1c8 = FUN_106eb6500;
      puStack_1c0 = &UNK_110846540;
      _objc_copyWeak(auStack_1b8,auStack_1a8);
      puStack_1b0 = puVar4;
      func_0x0001000d76cc("APPSTORE",&puStack_1d8);
      _objc_destroyWeak(auStack_1b8);
      _objc_destroyWeak(auStack_1a8);
      uVar9 = 1;
      goto LAB_106eb6440;
    }
  }
  uVar9 = 0;
LAB_106eb6440:
  _objc_release(lVar6);
  _objc_release(puVar7);
  return uVar9;
}



/* Entry: 106eb634c; end: 106eb64ff; -[SCSpectaclesDataFlowsManager _setupTransferChannelWithRequestState:] */

undefined8 FUN_106eb634c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar5 = param_3;
  func_0x00010bf638c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c27a200();
  _objc_release(uVar5);
  lVar4 = *(long *)(param_1 + 0x38);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010bf4ab60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(puVar2);
  if (lVar3 == 0) {
    lVar4 = *(long *)(param_1 + 0x38);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    if (lVar4 == 0) {
      _objc_initWeak(auStack_58,param_1);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_106eb6500;
      puStack_70 = &UNK_110846540;
      _objc_copyWeak(auStack_68,auStack_58);
      uStack_60 = uVar1;
      func_0x0001000d76cc("APPSTORE",&puStack_88);
      _objc_destroyWeak(auStack_68);
      _objc_destroyWeak(auStack_58);
      uVar5 = 1;
      goto LAB_106eb6440;
    }
  }
  uVar5 = 0;
LAB_106eb6440:
  _objc_release(lVar3);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 106eb6500; end: 106eb66cb;  */

void FUN_106eb6500(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_retain(lVar1);
    _objc_sync_enter(lVar1);
    lVar6 = *(long *)(lVar1 + 0x38);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    _objc_sync_exit(lVar1);
    _objc_release(lVar1);
    if (lVar6 == 0) {
      lVar6 = lVar1 + 0x28;
      _objc_loadWeakRetained();
      lVar3 = lVar1 + 0x70;
      _objc_loadWeakRetained();
      lVar4 = lVar1 + 0x78;
      _objc_loadWeakRetained();
      if (((lVar6 != 0) && (lVar3 != 0)) && (lVar4 != 0)) {
        _objc_copyWeak(auStack_70,param_1 + 0x20);
        uStack_68 = *(undefined8 *)(param_1 + 0x28);
        lVar5 = lVar6;
        func_0x00010bf23b40(lVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x20));
        _objc_release(lVar5);
        _objc_destroyWeak(auStack_70);
      }
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar6);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106eb66cc; end: 106eb67d3;  */

void FUN_106eb66cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    puVar1 = PTR_PTR_1126d30d8;
    _objc_alloc(PTR_PTR_1126d30d8);
    func_0x00010c055300();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010bde62e0(param_1);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106eb67d4; end: 106eb688f; -[SCSpectaclesDataFlowsManager _connectClientController:scope:] */

void FUN_106eb67d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d30e0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bffeea0();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = param_3;
  func_0x00010c27a200(param_3);
  func_0x00010c0df780(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1818e0();
  _objc_release(uVar4);
  _objc_release(puVar3);
  func_0x00010bf48260(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106eb6890; end: 106eb69d7; -[SCSpectaclesDataFlowsManager reConnectClients] */

long FUN_106eb6890(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar7 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf51e00();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        uVar3 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c0e00e0(uVar3,param_2,*(undefined8 *)(lStack_118 + lVar10 * 8));
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf4ab60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        uVar3 = uVar4;
        func_0x00010bf3cbe0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1205a0();
        _objc_release(uVar3);
        _objc_release(uVar4);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      puVar7 = &uStack_120;
      func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  func_0x00010bed5a20(lVar1);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(lVar1 + 0x38);
  puVar5 = (undefined1 *)puVar7;
  func_0x00010c27a200(puVar7);
  func_0x00010c0df780(puVar6,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4ab60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar6);
  lVar2 = lVar1;
  func_0x00010beb5220(lVar1,param_2,uVar4,0);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)lVar2 != 0) {
    uVar8 = *(undefined8 *)(lVar1 + 0x38);
    puVar5 = (undefined1 *)puVar7;
    func_0x00010c27a200(puVar7);
    func_0x00010c0df780(puVar6,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar8,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010bf4ab60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(puVar6);
    uVar8 = uVar3;
    func_0x00010c26a6e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2dba0();
    _objc_release(uVar8);
    func_0x00010c212820(uVar3,param_2,0);
    _objc_release(uVar3);
  }
  _objc_release(uVar4);
  _objc_release(puVar7);
  return lVar2;
}



/* Entry: 106eb69d8; end: 106eb6b3b; -[SCSpectaclesDataFlowsManager _shouldReTryClientController:error:] */

long FUN_106eb69d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  func_0x00010bed5a20(param_1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = param_3;
  func_0x00010c27a200(param_3);
  func_0x00010c0df780(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf4ab60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010beb5220(param_1,param_2,uVar1,0);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)lVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = param_3;
    func_0x00010c27a200(param_3);
    func_0x00010c0df780(puVar2,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar5,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf4ab60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(puVar2);
    uVar5 = uVar4;
    func_0x00010c26a6e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2dba0();
    _objc_release(uVar5);
    func_0x00010c212820(uVar4,param_2,0);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106eb6b3c; end: 106eb6bc3; -[SCSpectaclesDataFlowsManager _shouldReTryTransferChannelContainer:error:] */

bool FUN_106eb6b3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c27a200();
  if (lVar2 == 1) {
    lVar2 = param_3;
    func_0x00010bfd6dc0();
    uVar1 = 3;
    if ((int)lVar2 == 0) {
      uVar1 = 0x1e;
    }
    lVar2 = param_3;
    func_0x00010bf3ce00(param_3);
    func_0x00010c17cc40(param_3,param_2,lVar2 + 1U);
    bVar3 = lVar2 + 1U <= uVar1;
  }
  else {
    bVar3 = true;
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 106eb6bc4; end: 106eb6d57; -[SCSpectaclesDataFlowsManager _handleUnrecoverableErrorForTransferChannelContainer:error:] */

void FUN_106eb6bc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010bf3cbe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27a200();
  lVar3 = param_1;
  func_0x00010be91940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_retain(lVar3);
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      func_0x00010be5d400(param_1);
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  uVar2 = param_3;
  func_0x00010c26a6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dba0();
  _objc_release(uVar2);
  uVar8 = 0;
  func_0x00010c212820(param_3);
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar8);
  func_0x00010c285a60(uVar8);
  uVar5 = uVar8;
  func_0x00010bf638c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  _objc_opt_respondsToSelector();
  _objc_release(uVar6);
  _objc_release(uVar5);
  if ((uVar7 & 1) != 0) {
    uVar5 = uVar8;
    func_0x00010bf638c0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010bf638c0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf639c0(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  uVar5 = uVar8;
  func_0x00010bf638c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  _objc_opt_respondsToSelector();
  _objc_release(uVar5);
  if ((uVar6 & 1) != 0) {
    uVar5 = uVar8;
    func_0x00010bf638c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c064540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar6;
    func_0x00010bf529e0();
    if (uVar5 != 0) {
      func_0x00010bdc8940(param_3);
    }
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 106eb6d58; end: 106eb6ec3; -[SCSpectaclesDataFlowsManager _startExecutingTasksWithRequestState:] */

void FUN_106eb6d58(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  func_0x00010c285a60(param_3);
  uVar1 = param_3;
  func_0x00010bf638c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    uVar1 = param_3;
    func_0x00010bf638c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf638c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf639c0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010bf638c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_3;
    func_0x00010bf638c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c064540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010bf529e0();
    if (uVar1 != 0) {
      func_0x00010bdc8940(param_1);
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb6ec4; end: 106eb71bb; -[SCSpectaclesDataFlowsManager _addTasks:forRequestState:] */

void FUN_106eb6ec4(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long lVar8;
  long unaff_x27;
  undefined *puVar9;
  undefined *unaff_x28;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar6 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puVar1 == (undefined *)0x0) goto LAB_106eb7170;
  unaff_x25 = *(undefined **)(param_1 + 0x38);
  unaff_x24 = param_4;
  func_0x00010bf638c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = unaff_x24;
  func_0x00010c27a200();
  func_0x00010c0df780(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(unaff_x25,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  unaff_x22 = unaff_x25;
  func_0x00010bf4ab60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(unaff_x25);
  _objc_release(puVar2);
  _objc_release(unaff_x24);
  if (unaff_x22 == (undefined *)0x0) {
LAB_106eb7128:
    unaff_x23 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e8ae58,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined8 *)param_4;
    func_0x00010be5d400(param_1,param_2,param_4,unaff_x23);
    puVar2 = unaff_x23;
  }
  else {
    unaff_x23 = unaff_x22;
    func_0x00010c26a6e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (unaff_x23 == (undefined *)0x0) {
      unaff_x24 = unaff_x22;
      func_0x00010bf3cbe0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = unaff_x24;
      func_0x00010bf3ca40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x24);
      if (unaff_x23 == (undefined *)0x0) goto LAB_106eb7128;
      unaff_x24 = PTR_PTR_1126d30e8;
      _objc_alloc();
      unaff_x25 = *(undefined **)(param_1 + 0x80);
      unaff_x26 = param_4;
      func_0x00010bf638c0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = unaff_x26;
      func_0x00010c27a200();
      func_0x00010bffee60(unaff_x24,param_2,unaff_x23,unaff_x25,puVar2,param_1);
      func_0x00010c212820(unaff_x22,param_2,unaff_x24);
      _objc_release(unaff_x24);
      _objc_release(unaff_x26);
      _objc_release(unaff_x23);
    }
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    puVar1 = param_3;
    func_0x00010bf52a60();
    puVar2 = param_3;
    if (puVar1 != (undefined *)0x0) {
      unaff_x27 = *plStack_120;
      do {
        unaff_x28 = (undefined *)0x0;
        do {
          if (*plStack_120 != unaff_x27) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x24 = *(undefined **)(lStack_128 + (long)unaff_x28 * 8);
          unaff_x25 = param_4;
          func_0x00010c0edb60();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010bf4b900();
          _objc_release(unaff_x25);
          if (((ulong)unaff_x26 & 1) == 0) {
            uVar3 = *(undefined8 *)(param_1 + 0x80);
            func_0x00010befbda0(uVar3,param_2,unaff_x24);
            if ((int)uVar3 != 0) {
              func_0x00010befa460(param_4,param_2,unaff_x24);
            }
          }
          unaff_x28 = unaff_x28 + 1;
        } while (puVar1 != unaff_x28);
        puVar1 = param_3;
        puVar6 = &uStack_130;
        func_0x00010bf52a60();
        unaff_x23 = (undefined *)0x0;
      } while (puVar1 != (undefined *)0x0);
    }
  }
  _objc_release(puVar2);
  _objc_release(unaff_x22);
  puVar5 = (undefined *)puVar6;
LAB_106eb7170:
  _objc_release(param_4);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106eb71bc;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_190 = unaff_x28;
  lStack_188 = unaff_x27;
  puStack_180 = unaff_x26;
  puStack_178 = unaff_x25;
  puStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  lStack_158 = param_1;
  puStack_150 = param_4;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar7 = *(undefined8 *)(puVar2 + 0x38);
  puVar4 = puVar5;
  func_0x00010bf638c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x00010c27a200();
  func_0x00010c0df780(puVar1,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar7,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010bf4ab60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(puVar1);
  _objc_release(puVar4);
  puVar1 = puVar5;
  func_0x00010c0edb60();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar4 = puVar1;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar8 = *plStack_250;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_250 != lVar8) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c12e960(*(undefined8 *)(puVar2 + 0x80),param_2,
                            *(undefined8 *)(lStack_258 + (long)puVar9 * 8));
        uVar7 = uVar3;
        func_0x00010c26a6e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf2f200();
        _objc_release(uVar7);
        puVar9 = puVar9 + 1;
      } while (puVar4 != puVar9);
      puVar4 = puVar1;
      func_0x00010bf52a60(puVar1,param_2,&uStack_260,auStack_218,0x10);
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_sync_enter(puVar5);
    if (*(long *)(puVar5 + 0x40) == 0) {
      puVar2 = PTR_PTR_1126bc890;
      func_0x00010c150380(0x403e000000000000,PTR_PTR_1126bc890,param_2,puVar5,
                          PTR_s__handleStaleRequestTimer_112535b08,1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(puVar5 + 0x40);
      *(undefined **)(puVar5 + 0x40) = puVar2;
      _objc_release(uVar3);
    }
    _objc_sync_exit(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 106eb71bc; end: 106eb7387; -[SCSpectaclesDataFlowsManager _removeTasksForRequestState:] */

void FUN_106eb71bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  lVar1 = param_3;
  func_0x00010bf638c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27a200();
  func_0x00010c0df780(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar5,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf4ab60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0edb60();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010c12e960(*(undefined8 *)(param_1 + 0x80),param_2,
                            *(undefined8 *)(lStack_128 + lVar7 * 8));
        uVar5 = uVar4;
        func_0x00010c26a6e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf2f200();
        _objc_release(uVar5);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_sync_enter(param_3);
  if (*(long *)(param_3 + 0x40) == 0) {
    puVar3 = PTR_PTR_1126bc890;
    func_0x00010c150380(0x403e000000000000,PTR_PTR_1126bc890,param_2,param_3,
                        PTR_s__handleStaleRequestTimer_112535b08,1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + 0x40);
    *(undefined **)(param_3 + 0x40) = puVar3;
    _objc_release(uVar4);
  }
  _objc_sync_exit(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb7388; end: 106eb740f; -[SCSpectaclesDataFlowsManager _startStaleRequestTimer] */

void FUN_106eb7388(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(long *)(param_1 + 0x40) == 0) {
    puVar1 = PTR_PTR_1126bc890;
    func_0x00010c150380(0x403e000000000000,PTR_PTR_1126bc890,param_2,param_1,
                        PTR_s__handleStaleRequestTimer_112535b08,1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar1;
    _objc_release(uVar2);
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eb7410; end: 106eb746b; -[SCSpectaclesDataFlowsManager _stopStaleRequestTimer] */

void FUN_106eb7410(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x40));
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eb746c; end: 106eb76bf; -[SCSpectaclesDataFlowsManager _handleStaleRequestTimer] */

ulong FUN_106eb746c(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar7 = &uStack_1f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_sync_enter(param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  lVar9 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar9);
  lVar13 = lVar9;
  func_0x00010bf52a60(lVar9,param_2,&uStack_1b0,auStack_e8,0x10);
  if (lVar13 != 0) {
    lVar11 = *plStack_1a0;
    do {
      lVar12 = 0;
      do {
        if (*plStack_1a0 != lVar11) {
          _objc_enumerationMutation(lVar9);
        }
        uVar10 = *(undefined8 *)(lStack_1a8 + lVar12 * 8);
        uVar8 = param_1;
        func_0x00010be44180(param_1,param_2,uVar10);
        if ((int)uVar8 != 0) {
          func_0x00010befa120(puVar2,param_2,uVar10);
        }
        lVar12 = lVar12 + 1;
      } while (lVar13 != lVar12);
      lVar13 = lVar9;
      func_0x00010bf52a60(lVar9,param_2,&uStack_1b0,auStack_e8,0x10);
    } while (lVar13 != 0);
  }
  _objc_release(lVar9);
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(puVar2);
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar13 = *plStack_1e0;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_1e0 != lVar13) {
          _objc_enumerationMutation(puVar2);
        }
        uVar10 = *(undefined8 *)(lStack_1e8 + (long)puVar14 * 8);
        puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                            &PTR____CFConstantStringClassReference_110e8ae58,4,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be5d400(param_1,param_2,uVar10,puVar4);
        _objc_release(puVar4);
        puVar14 = puVar14 + 1;
      } while (puVar3 != puVar14);
      puVar3 = puVar2;
      puVar7 = &uStack_1f0;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_sync_exit(param_1);
  uVar8 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar8;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  _objc_retain(puVar7);
  puVar5 = (undefined1 *)puVar7;
  func_0x00010bf638c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c136d60();
  _objc_release(puVar5);
  if (puVar6 == (undefined1 *)0x1) {
    puVar5 = (undefined1 *)puVar7;
    func_0x00010bf638c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c27a200();
    func_0x00010be34ba0(uVar8,param_2,puVar6);
    _objc_release(puVar5);
    if ((uVar8 & 1) != 0) {
      uVar8 = 0;
      goto LAB_106eb77ac;
    }
  }
  puVar5 = (undefined1 *)puVar7;
  func_0x00010bf603e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined1 *)0x0) {
    puVar6 = (undefined1 *)puVar7;
    func_0x00010c088ac0(puVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar5);
    puVar6 = puVar5;
  }
  _objc_release(puVar5);
  func_0x00010c26f3a0(puVar6);
  bVar1 = false;
  if (!NAN((double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18,
                                                  CONCAT12(uVar17,CONCAT11(uVar16,uVar15))))))))) {
    bVar1 = (double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18,
                                                  CONCAT12(uVar17,CONCAT11(uVar16,uVar15))))))) <
            -60.0;
  }
  uVar8 = (ulong)bVar1;
  _objc_release(puVar6);
LAB_106eb77ac:
  _objc_release(puVar7);
  return uVar8;
}



/* Entry: 106eb76c0; end: 106eb77c7; -[SCSpectaclesDataFlowsManager _isStaleRequestState:] */

bool FUN_106eb76c0(double param_1,ulong param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf638c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c136d60();
  _objc_release(lVar2);
  if (lVar3 == 1) {
    lVar2 = param_4;
    func_0x00010bf638c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27a200();
    func_0x00010be34ba0(param_2,param_3,lVar3);
    _objc_release(lVar2);
    if ((param_2 & 1) != 0) {
      bVar1 = false;
      goto LAB_106eb77ac;
    }
  }
  lVar2 = param_4;
  func_0x00010bf603e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_4;
    func_0x00010c088ac0(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    lVar3 = lVar2;
  }
  _objc_release(lVar2);
  func_0x00010c26f3a0(lVar3);
  bVar1 = param_1 < -60.0;
  _objc_release(lVar3);
LAB_106eb77ac:
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 106eb77c8; end: 106eb7827; -[SCSpectaclesDataFlowsManager _updateBackgroundTask] */

void FUN_106eb77c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010be91920(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd3190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__beginBackgroundTask_112552600);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be09750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__endBackgroundTask_11255ff70);
  return;
}



/* Entry: 106eb7828; end: 106eb78af; -[SCSpectaclesDataFlowsManager _beginBackgroundTask] */

void FUN_106eb7828(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x50) == *(long *)PTR__UIBackgroundTaskInvalid_110345af0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf17d00(uVar1,param_2,lVar2);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106eb78b0; end: 106eb7913; -[SCSpectaclesDataFlowsManager _endBackgroundTask] */

void FUN_106eb78b0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR__UIBackgroundTaskInvalid_110345af0;
  if (*(long *)(param_1 + 0x50) != lVar2) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94260();
    _objc_release(uVar1);
    *(long *)(param_1 + 0x50) = lVar2;
  }
  return;
}



/* Entry: 106eb7914; end: 106eb7b17; -[SCSpectaclesDataFlowsManager _updateConnectionState] */

undefined * FUN_106eb7914(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf51e00();
  lVar4 = lVar1;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        uVar2 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c0e00e0(uVar2,param_2,*(undefined8 *)(lStack_128 + lVar6 * 8));
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010bf4ab60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        uVar2 = uVar5;
        func_0x00010bf3cbe0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c252440();
        _objc_release(uVar2);
        func_0x00010c27a200();
        _objc_release(uVar5);
        lVar6 = lVar6 + 1;
      } while (lVar4 != lVar6);
      lVar4 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126d30f0;
  _objc_alloc();
  func_0x00010bff84a0();
  _os_unfair_lock_lock(param_1 + 0x68);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar3;
  _objc_retain(puVar3);
  _objc_release(uVar5);
  _os_unfair_lock_unlock(param_1 + 0x68);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x58),param_2,puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _os_unfair_lock_lock(puVar3 + 0x68);
    lVar4 = *(long *)(puVar3 + 0x60);
    func_0x00010bf21aa0(lVar4);
    _os_unfair_lock_unlock(puVar3 + 0x68);
    return (undefined *)(ulong)(lVar4 == 2);
  }
  return puVar3;
}



/* Entry: 106eb7b18; end: 106eb7b6b; -[SCSpectaclesDataFlowsManager connectedOverBT] */

bool FUN_106eb7b18(long param_1)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x68);
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010bf21aa0(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x68);
  return lVar1 == 2;
}



/* Entry: 106eb7b6c; end: 106eb7bbf; -[SCSpectaclesDataFlowsManager tryingToConnectBT] */

bool FUN_106eb7b6c(long param_1)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x68);
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010bf21aa0(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x68);
  return lVar1 == 1;
}



/* Entry: 106eb7bc0; end: 106eb7c13; -[SCSpectaclesDataFlowsManager connectedOverBLE] */

bool FUN_106eb7bc0(long param_1)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x68);
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010bf1ca20(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x68);
  return lVar1 == 2;
}



/* Entry: 106eb7c14; end: 106eb7c67; -[SCSpectaclesDataFlowsManager tryingToConnectBLE] */

bool FUN_106eb7c14(long param_1)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x68);
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010bf1ca20(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x68);
  return lVar1 == 1;
}



/* Entry: 106eb7c68; end: 106eb7cbb; -[SCSpectaclesDataFlowsManager connectedOverWiFi] */

bool FUN_106eb7c68(long param_1)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x68);
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c2a51e0(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x68);
  return lVar1 == 2;
}



/* Entry: 106eb7cbc; end: 106eb7d0f; -[SCSpectaclesDataFlowsManager tryingToConnectWiFi] */

bool FUN_106eb7cbc(long param_1)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x68);
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c2a51e0(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x68);
  return lVar1 == 1;
}



/* Entry: 106eb7d10; end: 106eb7d47; -[SCSpectaclesDataFlowsManager connectedOverBLEOrWiFi] */

ulong FUN_106eb7d10(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010bf48920();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf489b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_connectedOverWiFi_1125afc10);
  return param_1;
}



/* Entry: 106eb7d48; end: 106eb7d7f; -[SCSpectaclesDataFlowsManager connectedOverBTOrWiFi] */

ulong FUN_106eb7d48(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010bf48960();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf489b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_connectedOverWiFi_1125afc10);
  return param_1;
}



/* Entry: 106eb7d80; end: 106eb7db3; -[SCSpectaclesDataFlowsManager tryingToConnectBTForContentTransfer] */

void FUN_106eb7d80(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c27d020();
  if ((int)lVar1 != 0) {
    func_0x00010c0df220(*(undefined8 *)(param_1 + 0x80));
  }
  return;
}



/* Entry: 106eb7db4; end: 106eb7f1f; -[SCSpectaclesDataFlowsManager _requestStateWithRequestIdentifier:] */

void FUN_106eb7db4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined1 *puStack_158;
  long lStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        uVar8 = *(ulong *)(lStack_128 + lVar10 * 8);
        uVar2 = uVar8;
        func_0x00010bf638c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        puVar6 = (undefined8 *)param_3;
        func_0x00010c071ae0();
        _objc_release(uVar3);
        _objc_release(uVar2);
        if ((uVar4 & 1) != 0) {
          _objc_retain(uVar8);
          goto LAB_106eb7ed0;
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar7;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  uVar8 = 0;
LAB_106eb7ed0:
  _objc_release(lVar7);
  puVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_106eb7f20;
    lStack_150 = lVar7;
    puStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar6);
    uVar8 = *(ulong *)(puVar5 + 0x30);
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    uStack_168 = 0x106eb7fb8;
    puStack_160 = &UNK_1109820d8;
    puStack_158 = (undefined1 *)puVar6;
    _objc_retain(puVar6);
    func_0x00010bfb2040(uVar8,param_2,&puStack_178);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_158);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 106eb7f20; end: 106eb7fff; -[SCSpectaclesDataFlowsManager _requestStateForTask:] */

void FUN_106eb7f20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106eb7fb8;
  puStack_30 = &UNK_1109820d8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb2040(uVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106eb8000; end: 106eb8177; -[SCSpectaclesDataFlowsManager _requestStatesWithTransferChannel:] */

undefined * FUN_106eb8000(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar10 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar10);
  lVar2 = lVar10;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar10);
        }
        lVar11 = *(long *)(lStack_128 + lVar14 * 8);
        lVar3 = lVar11;
        func_0x00010bf638c0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c27a200();
        _objc_release(lVar3);
        if (lVar4 == param_3) {
          func_0x00010befa120(puVar1,param_2,lVar11);
        }
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      lVar2 = lVar10;
      puVar8 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar10);
  puVar9 = puVar1;
  func_0x00010bf529e0();
  if (puVar9 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = puVar1;
    func_0x00010bf51e00();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lVar10 = *(long *)(puVar1 + 0x30);
    _objc_retain(lVar10);
    lVar2 = lVar10;
    func_0x00010bf52a60(lVar10,param_2,&uStack_260,auStack_218,0x10);
    if (lVar2 != 0) {
      lVar13 = *plStack_250;
      do {
        lVar14 = 0;
        do {
          if (*plStack_250 != lVar13) {
            _objc_enumerationMutation(lVar10);
          }
          puVar12 = *(undefined1 **)(lStack_258 + lVar14 * 8);
          puVar6 = puVar12;
          func_0x00010bf638c0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bf13f40();
          _objc_release(puVar6);
          if ((undefined8 *)puVar7 == puVar8) {
            func_0x00010befa120(puVar5,param_2,puVar12);
          }
          lVar14 = lVar14 + 1;
        } while (lVar2 != lVar14);
        lVar2 = lVar10;
        func_0x00010bf52a60(lVar10,param_2,&uStack_260,auStack_218,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar10);
    puVar1 = puVar5;
    func_0x00010bf529e0();
    if (puVar1 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = puVar5;
      func_0x00010bf51e00(puVar5);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      return *(undefined **)(puVar5 + 0x58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return puVar9;
}



/* Entry: 106eb8178; end: 106eb82ef; -[SCSpectaclesDataFlowsManager _requestStatesWithBackgroundExecutionMode:] */

undefined * FUN_106eb8178(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar6);
        }
        lVar7 = *(long *)(lStack_128 + lVar9 * 8);
        lVar3 = lVar7;
        func_0x00010bf638c0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf13f40();
        _objc_release(lVar3);
        if (lVar4 == param_3) {
          func_0x00010befa120(puVar1,param_2,lVar7);
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar6);
  puVar5 = puVar1;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar1;
    func_0x00010bf51e00(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar1 + 0x58);
}



/* Entry: 106eb82f0; end: 106eb82f7; -[SCSpectaclesDataFlowsManager stateObservable] */

undefined8 FUN_106eb82f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106eb82f8; end: 106eb82ff; -[SCSpectaclesDataFlowsManager taskQueue] */

undefined8 FUN_106eb82f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106eb8300; end: 106eb832f; -[SCSpectaclesDataFlowsManager setTaskQueue:] */

void FUN_106eb8300(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eb8330; end: 106eb83e3; -[SCSpectaclesDataFlowsManager .cxx_destruct] */

void FUN_106eb8330(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106eb83e4; end: 106eb84bf; -[SCSpectaclesDataFlowsRequestState initWithDataFlowsRequest:] */

undefined1 * FUN_106eb83e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f7ad0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106eb84c0; end: 106eb851b; -[SCSpectaclesDataFlowsRequestState originatedTasks] */

void FUN_106eb84c0(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf51e00(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106eb851c; end: 106eb8587; -[SCSpectaclesDataFlowsRequestState addOriginatedTask:] */

void FUN_106eb851c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eb8588; end: 106eb8607; -[SCSpectaclesDataFlowsRequestState updateExecutionState:] */

void FUN_106eb8588(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(long *)(param_1 + 0x18) != param_3) {
    *(long *)(param_1 + 0x18) = param_3;
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar1;
    _objc_release(uVar2);
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eb8608; end: 106eb860f; -[SCSpectaclesDataFlowsRequestState dataFlowsRequest] */

undefined8 FUN_106eb8608(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106eb8610; end: 106eb8617; -[SCSpectaclesDataFlowsRequestState executionState] */

undefined8 FUN_106eb8610(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106eb8618; end: 106eb861f; -[SCSpectaclesDataFlowsRequestState startDate] */

undefined8 FUN_106eb8618(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106eb8620; end: 106eb8627; -[SCSpectaclesDataFlowsRequestState lastExecutionStateUpdateDate] */

undefined8 FUN_106eb8620(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106eb8628; end: 106eb862f; -[SCSpectaclesDataFlowsRequestState currentTaskExecutionStartDate] */

undefined8 FUN_106eb8628(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106eb8630; end: 106eb865f; -[SCSpectaclesDataFlowsRequestState setCurrentTaskExecutionStartDate:] */

void FUN_106eb8630(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eb8660; end: 106eb8667; -[SCSpectaclesDataFlowsRequestState currentTaskLastUpdateDate] */

undefined8 FUN_106eb8660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106eb8668; end: 106eb8697; -[SCSpectaclesDataFlowsRequestState setCurrentTaskLastUpdateDate:] */

void FUN_106eb8668(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eb8698; end: 106eb869f; -[SCSpectaclesDataFlowsRequestState lastTaskCompletionDate] */

undefined8 FUN_106eb8698(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106eb86a0; end: 106eb86cf; -[SCSpectaclesDataFlowsRequestState setLastTaskCompletionDate:] */

void FUN_106eb86a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eb86d0; end: 106eb873b; -[SCSpectaclesDataFlowsRequestState .cxx_destruct] */

void FUN_106eb86d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106eb873c; end: 106eb88ff; -[SCSpectaclesMediaListReconciler initWithMediaList:contentList:] */

undefined1 *
FUN_106eb873c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126f7ad8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0b8600(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72060();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010c246ca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bfce6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72060();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar7);
    uVar7 = param_3;
    func_0x00010c0ba200();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar7;
    _objc_release(uVar8);
    func_0x00010be98900(puVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


