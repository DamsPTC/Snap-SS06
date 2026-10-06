/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7407e0; end: 10b7407e3;  */

void FUN_10b7407e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b7407e4; end: 10b74081f; -[SCAudioSessionServices .cxx_destruct] */

void FUN_10b7407e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b740820; end: 10b74099b; -[SCAudioSessionListenerAnnouncer description] */

void FUN_10b740820(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_10b74099c(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b74099c; end: 10b7409fb;  */

void FUN_10b74099c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 10b7409fc; end: 10b740c2b; -[SCAudioSessionListenerAnnouncer removeListener:] */

void FUN_10b7409fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_10b740bb0;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_10b740a64;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    func_0x000107c30960(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10b740bb0;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_10b740a64:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110d5b3b0;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          func_0x000107c3095c(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    func_0x000107c30960(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10b740bb0;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_10b740bb0:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b740c2c; end: 10b740d43; -[SCAudioSessionListenerAnnouncer audioSession:didChangeVolume:] */

void FUN_10b740c2c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_60;
  long *plStack_58;
  
  _objc_retain(param_4);
  FUN_10b74099c(&puStack_60,param_2 + 0x48);
  if (puStack_60 != (ulong *)0x0) {
    uVar3 = puStack_60[1];
    for (uVar2 = *puStack_60; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bf0fba0(param_1,uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b740d44; end: 10b740e4b; -[SCAudioSessionListenerAnnouncer audioSessionDidBeginInterruption:] */

void FUN_10b740d44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_10b74099c(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bf0fc80(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b740e4c; end: 10b740f5b; -[SCAudioSessionListenerAnnouncer audioSession:didEndInterruption:] */

void FUN_10b740e4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_10b74099c(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bf0fbe0(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b740f5c; end: 10b741063; -[SCAudioSessionListenerAnnouncer audioSessionRouteDidChangeReasonNewDeviceAvailable:] */

void FUN_10b740f5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_10b74099c(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bf0fe60(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b741064; end: 10b74116b; -[SCAudioSessionListenerAnnouncer audioSessionRouteDidChangeReasonOldDeviceUnavailable:] */

void FUN_10b741064(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_10b74099c(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bf0fe80(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b74116c; end: 10b741273; -[SCAudioSessionListenerAnnouncer audioSessionRouteDidChangeReasonCategoryChange:] */

void FUN_10b74116c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_10b74099c(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bf0fe40(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b741274; end: 10b74137b; -[SCAudioSessionListenerAnnouncer audioSessionRouteDidChangeReasonOverride:] */

void FUN_10b741274(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_10b74099c(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bf0fea0(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b74137c; end: 10b741483; -[SCAudioSessionListenerAnnouncer audioSessionMediaServicesWereLost:] */

void FUN_10b74137c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_10b74099c(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bf0fdc0(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b741484; end: 10b74158b; -[SCAudioSessionListenerAnnouncer audioSessionMediaServicesWereReset:] */

void FUN_10b741484(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_10b74099c(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bf0fde0(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b74158c; end: 10b74169b; -[SCAudioSessionListenerAnnouncer audioSession:didChangeProximityMonitoring:] */

void FUN_10b74158c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_10b74099c(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bf0fb80(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b74169c; end: 10b7417a3; -[SCAudioSessionListenerAnnouncer audioSessionSilenceSecondaryAudioHintTypeDidChangeToStart:] */

void FUN_10b74169c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_10b74099c(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bf0ff00(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7417a4; end: 10b7418ab; -[SCAudioSessionListenerAnnouncer audioSessionSilenceSecondaryAudioHintTypeDidChangeToEnd:] */

void FUN_10b7417a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_10b74099c(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bf0fee0(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7418ac; end: 10b7418d3; -[SCAudioSessionListenerAnnouncer .cxx_destruct] */

void FUN_10b7418ac(long param_1)

{
  FUN_10b7418e8(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 10b7418d4; end: 10b7418e7;  */

undefined * FUN_10b7418d4(void)

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



/* Entry: 10b7418e8; end: 10b74193f;  */

long FUN_10b7418e8(long param_1)

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



/* Entry: 10b741940; end: 10b74194f;  */

void FUN_10b741940(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d5b3b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b741950; end: 10b74196f;  */

void FUN_10b741950(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d5b3b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b741970; end: 10b7419d7;  */

void FUN_10b741970(long param_1)

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



/* Entry: 10b7419d8; end: 10b7419db;  */

void FUN_10b7419d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b7419dc; end: 10b741ab3; -[SCAudioConfiguration initWithCategory:isVideoRecord:shouldUseVideoRecordingMode:shouldEnableProximity:label:shouldDisableRetry:shouldDeactivate:shouldInterruptCall:shouldMixWithOthers:] */

undefined1 *
FUN_10b7419dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
             undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_11270a600;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined1 *)((long)puVar1 + 10) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = param_8;
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0xd) = param_9._1_1_;
    *(undefined1 *)((long)puVar1 + 0xe) = param_9._2_1_;
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10b741ab4; end: 10b741ad7; -[SCAudioConfiguration copyWithZone:] */

undefined8 FUN_10b741ab4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b741ad8; end: 10b741b87; -[SCAudioConfiguration hash] */

long * FUN_10b741ad8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ushort uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  ulong uVar10;
  
  plVar4 = &lStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  lStack_70 = -lVar1;
  if (-1 < lVar1) {
    lStack_70 = lVar1;
  }
  uStack_68 = (ulong)*(byte *)(param_1 + 8);
  uStack_60 = (ulong)*(byte *)(param_1 + 9);
  uStack_58 = (ulong)*(byte *)(param_1 + 10);
  func_0x00010bfde980();
  uVar8 = *(undefined4 *)(param_1 + 0xb);
  uVar9 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar8 >> 0x18),
                                          (uint6)(byte)((uint)uVar8 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar8) & 0xffffffffffffff01;
  uVar2 = (uint)CONCAT12((char)((uint)uVar8 >> 8),(short)uVar9);
  uVar10 = CONCAT44((int)(uVar9 >> 0x20),uVar2) & 0xffffffffff01ffff;
  uVar9 = CONCAT26((short)(uVar10 >> 0x30),CONCAT24((short)(uVar9 >> 0x20),(int)uVar10)) &
          0xff01ff01ffffffff;
  uVar7 = (ushort)(uVar9 >> 0x30);
  uStack_48 = (ulong)uVar2 & 0xff;
  uStack_40 = uVar9 >> 0x10 & 0xff;
  uStack_38 = (ulong)CONCAT24(uVar7,(uint)(ushort)(uVar9 >> 0x20)) & 0xffffffff;
  uStack_30 = (ulong)uVar7;
  uStack_50 = uVar3;
  func_0x000107c3191c(&lStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar4 != (long *)param_3) {
    puVar6 = (undefined1 *)0x0;
    if ((plVar4 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b741c7c;
    puVar6 = (undefined1 *)plVar4;
    _objc_opt_class(plVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((((ulong)puVar5 & 1) == 0) ||
         ((((*(long *)((long)plVar4 + 0x10) != *(long *)(param_3 + 0x10) ||
            (*(char *)((long)plVar4 + 8) != param_3[8])) ||
           (*(char *)((long)plVar4 + 9) != param_3[9])) ||
          ((*(char *)((long)plVar4 + 10) != param_3[10] ||
           (*(char *)((long)plVar4 + 0xb) != param_3[0xb])))))) ||
        (*(char *)((long)plVar4 + 0xc) != param_3[0xc])) ||
       ((*(char *)((long)plVar4 + 0xd) != param_3[0xd] ||
        (*(char *)((long)plVar4 + 0xe) != param_3[0xe])))) {
      puVar6 = (undefined1 *)0x0;
      goto LAB_10b741c7c;
    }
    puVar6 = *(undefined1 **)((long)plVar4 + 0x18);
    if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_10b741c7c;
    }
  }
  puVar6 = (undefined1 *)0x1;
LAB_10b741c7c:
  _objc_release(param_3);
  return (long *)puVar6;
}



/* Entry: 10b741b88; end: 10b741c97; -[SCAudioConfiguration isEqual:] */

long FUN_10b741b88(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b741c7c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) == 0) ||
         ((((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
            (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) ||
           (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
          ((*(char *)(param_1 + 10) != *(char *)(param_3 + 10) ||
           (*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb))))))) ||
        (*(char *)(param_1 + 0xc) != *(char *)(param_3 + 0xc))) ||
       ((*(char *)(param_1 + 0xd) != *(char *)(param_3 + 0xd) ||
        (*(char *)(param_1 + 0xe) != *(char *)(param_3 + 0xe))))) {
      lVar3 = 0;
      goto LAB_10b741c7c;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_10b741c7c;
    }
  }
  lVar3 = 1;
LAB_10b741c7c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b741c98; end: 10b741c9f; -[SCAudioConfiguration category] */

undefined8 FUN_10b741c98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b741ca0; end: 10b741ca7; -[SCAudioConfiguration isVideoRecord] */

undefined1 FUN_10b741ca0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b741ca8; end: 10b741caf; -[SCAudioConfiguration shouldUseVideoRecordingMode] */

undefined1 FUN_10b741ca8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b741cb0; end: 10b741cb7; -[SCAudioConfiguration shouldEnableProximity] */

undefined1 FUN_10b741cb0(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b741cb8; end: 10b741cbf; -[SCAudioConfiguration label] */

undefined8 FUN_10b741cb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b741cc0; end: 10b741cc7; -[SCAudioConfiguration shouldDisableRetry] */

undefined1 FUN_10b741cc0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b741cc8; end: 10b741ccf; -[SCAudioConfiguration shouldDeactivate] */

undefined1 FUN_10b741cc8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10b741cd0; end: 10b741cd7; -[SCAudioConfiguration shouldInterruptCall] */

undefined1 FUN_10b741cd0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10b741cd8; end: 10b741cdf; -[SCAudioConfiguration shouldMixWithOthers] */

undefined1 FUN_10b741cd8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 10b741ce0; end: 10b741ceb; -[SCAudioConfiguration .cxx_destruct] */

void FUN_10b741ce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b741cec; end: 10b741d07; +[SCAudioConfigurationBuilder audioConfiguration] */

void FUN_10b741cec(void)

{
  _objc_alloc_init(PTR_PTR_1126b6dd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b741d08; end: 10b741f03; +[SCAudioConfigurationBuilder audioConfigurationFromExistingAudioConfiguration:] */

void FUN_10b741d08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  puVar1 = PTR_PTR_1126b6dd8;
  _objc_retain(param_3);
  func_0x00010bf0eee0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf33240(param_3);
  puVar3 = puVar1;
  func_0x00010c2aa3c0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0832e0(param_3);
  puVar4 = puVar3;
  func_0x00010c2b19a0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c235700(param_3);
  puVar5 = puVar4;
  func_0x00010c2b8d80(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c230180(param_3);
  puVar6 = puVar5;
  func_0x00010c2b88e0(puVar5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c087500(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2b1fc0(puVar6,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c22efa0(param_3);
  puVar9 = puVar7;
  func_0x00010c2b8860(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c22eb40(param_3);
  puVar10 = puVar9;
  func_0x00010c2b87a0(puVar9,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c231480(param_3);
  puVar11 = puVar10;
  func_0x00010c2b8a00(puVar10,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c231980(param_3);
  _objc_release(param_3);
  puVar12 = puVar11;
  func_0x00010c2b8a60(puVar11,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10b741f04; end: 10b741f5f; -[SCAudioConfigurationBuilder build] */

void FUN_10b741f04(void)

{
  _objc_alloc(PTR_PTR_1126b6dd0);
  func_0x00010bffcf80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b741f60; end: 10b741f67; -[SCAudioConfigurationBuilder withCategory:] */

void FUN_10b741f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b741f68; end: 10b741f6f; -[SCAudioConfigurationBuilder withIsVideoRecord:] */

void FUN_10b741f68(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b741f70; end: 10b741f77; -[SCAudioConfigurationBuilder withShouldUseVideoRecordingMode:] */

void FUN_10b741f70(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 10b741f78; end: 10b741f7f; -[SCAudioConfigurationBuilder withShouldEnableProximity:] */

void FUN_10b741f78(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x12) = param_3;
  return;
}



/* Entry: 10b741f80; end: 10b741fb7; -[SCAudioConfigurationBuilder withLabel:] */

long FUN_10b741f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b741fb8; end: 10b741fbf; -[SCAudioConfigurationBuilder withShouldDisableRetry:] */

void FUN_10b741fb8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b741fc0; end: 10b741fc7; -[SCAudioConfigurationBuilder withShouldDeactivate:] */

void FUN_10b741fc0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x21) = param_3;
  return;
}



/* Entry: 10b741fc8; end: 10b741fcf; -[SCAudioConfigurationBuilder withShouldInterruptCall:] */

void FUN_10b741fc8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x22) = param_3;
  return;
}



/* Entry: 10b741fd0; end: 10b741fd7; -[SCAudioConfigurationBuilder withShouldMixWithOthers:] */

void FUN_10b741fd0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x23) = param_3;
  return;
}



/* Entry: 10b741fd8; end: 10b741fe3; -[SCAudioConfigurationBuilder .cxx_destruct] */

void FUN_10b741fd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b741fe4; end: 10b74208f; -[SCAudioConfigurationToken initWithToken:configuration:] */

undefined1 *
FUN_10b741fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a608;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b742090; end: 10b7420b3; -[SCAudioConfigurationToken copyWithZone:] */

undefined8 FUN_10b742090(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7420b4; end: 10b742127; -[SCAudioConfigurationToken hash] */

undefined8 * FUN_10b7420b4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b7421a8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b7421b4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10b7421b4;
        }
        goto LAB_10b7421a8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b7421b4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b742128; end: 10b7421cf; -[SCAudioConfigurationToken isEqual:] */

long FUN_10b742128(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b7421a8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7421b4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b7421b4;
        }
        goto LAB_10b7421a8;
      }
    }
    lVar3 = 0;
  }
LAB_10b7421b4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7421d0; end: 10b7421d7; -[SCAudioConfigurationToken token] */

undefined8 FUN_10b7421d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7421d8; end: 10b7421df; -[SCAudioConfigurationToken configuration] */

undefined8 FUN_10b7421d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7421e0; end: 10b74228b; -[SCAudioConfigurationToken .cxx_destruct] */

void FUN_10b7421e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b74228c; end: 10b7422af; -[SCNGSMEMediaComposition copyWithZone:] */

undefined8 FUN_10b74228c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7422b0; end: 10b7422b7; -[SCNGSMEMediaComposition hash] */

void FUN_10b7422b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b7422b8; end: 10b742347; -[SCNGSMEMediaComposition isEqual:] */

long FUN_10b7422b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b74232c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b74232c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b74232c;
    }
  }
  lVar3 = 1;
LAB_10b74232c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b742348; end: 10b742353;  */

undefined8 FUN_10b742348(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  return uVar1;
}



/* Entry: 10b742354; end: 10b74235f; -[SCNGSMEMediaComposition .cxx_destruct] */

void FUN_10b742354(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b742360; end: 10b742423;  */

undefined1 *
FUN_10b742360(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_11270a618;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      *(undefined8 *)((long)plVar1 + 0x10) = param_3;
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_5;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar4;
}



/* Entry: 10b742424; end: 10b742447; -[SCNGSMEMediaCompositionTrack copyWithZone:] */

undefined8 FUN_10b742424(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b742448; end: 10b7424c3; -[SCNGSMEMediaCompositionTrack hash] */

undefined8 * FUN_10b742448(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_50,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b742564:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b742570;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10))))) {
      lVar5 = *(long *)((long)puVar3 + 0x18);
      if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
        if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b742570;
        }
        goto LAB_10b742564;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b742570:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b7424c4; end: 10b74258b; -[SCNGSMEMediaCompositionTrack isEqual:] */

long FUN_10b7424c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b742564:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b742570;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b742570;
        }
        goto LAB_10b742564;
      }
    }
    lVar3 = 0;
  }
LAB_10b742570:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b74258c; end: 10b7425af;  */

undefined8 FUN_10b74258c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  return uVar1;
}



/* Entry: 10b7425b0; end: 10b7425df; -[SCNGSMEMediaCompositionTrack .cxx_destruct] */

void FUN_10b7425b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b7425e0; end: 10b74279b;  */

undefined1 *
FUN_10b7425e0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_80;
  undefined *puStack_78;
  
  plVar1 = &lStack_80;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar4 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_78 = PTR_PTR_11270a620;
    lStack_80 = param_2;
    _objc_msgSendSuper2(&lStack_80,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x10) = param_4;
      uVar2 = param_5;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_6;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_7;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x30) = param_1;
      uVar2 = param_8;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x38);
      *(undefined8 *)((long)plVar1 + 0x38) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_9;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x40);
      *(undefined8 *)((long)plVar1 + 0x40) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_10;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x48);
      *(undefined8 *)((long)plVar1 + 0x48) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b74279c; end: 10b7427bf; -[SCNGSMEMediaCompositionTrackSegment copyWithZone:] */

undefined8 FUN_10b74279c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7427c0; end: 10b742897; -[SCNGSMEMediaCompositionTrackSegment hash] */

undefined8 * FUN_10b7427c0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_68 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar4;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar8 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar4;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_10b7429d4:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b7429e0;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) && (*(long *)((long)puVar5 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      dVar11 = ABS(*(double *)((long)puVar5 + 0x30) - *(double *)(param_3 + 0x30));
      dVar10 = ABS(*(double *)((long)puVar5 + 0x30) + *(double *)(param_3 + 0x30)) *
               2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar1 = dVar11 < dVar10;
      }
      if (((((bVar1) &&
            ((lVar7 = *(long *)((long)puVar5 + 8), lVar7 == *(long *)(param_3 + 8) ||
             (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
           ((lVar7 = *(long *)((long)puVar5 + 0x18), lVar7 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
          ((((lVar7 = *(long *)((long)puVar5 + 0x20), lVar7 == *(long *)(param_3 + 0x20) ||
             (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
            ((lVar7 = *(long *)((long)puVar5 + 0x28), lVar7 == *(long *)(param_3 + 0x28) ||
             (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
           ((lVar7 = *(long *)((long)puVar5 + 0x38), lVar7 == *(long *)(param_3 + 0x38) ||
            (func_0x00010c071ae0(), (int)lVar7 != 0)))))) &&
         ((lVar7 = *(long *)((long)puVar5 + 0x40), lVar7 == *(long *)(param_3 + 0x40) ||
          (func_0x00010c071ae0(), (int)lVar7 != 0)))) {
        puVar9 = *(undefined1 **)((long)puVar5 + 0x48);
        if (puVar9 != *(undefined1 **)(param_3 + 0x48)) {
          func_0x00010c071ae0();
          goto LAB_10b7429e0;
        }
        goto LAB_10b7429d4;
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_10b7429e0:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 10b742898; end: 10b7429fb; -[SCNGSMEMediaCompositionTrackSegment isEqual:] */

long FUN_10b742898(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b7429d4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7429e0;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      dVar6 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
      dVar5 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (((((bVar1) &&
            ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
            ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
         ((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x48);
        if (lVar4 != *(long *)(param_3 + 0x48)) {
          func_0x00010c071ae0();
          goto LAB_10b7429e0;
        }
        goto LAB_10b7429d4;
      }
    }
    lVar4 = 0;
  }
LAB_10b7429e0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b7429fc; end: 10b742a43;  */

undefined8 FUN_10b7429fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  return uVar1;
}



/* Entry: 10b742a44; end: 10b742aaf; -[SCNGSMEMediaCompositionTrackSegment .cxx_destruct] */

void FUN_10b742a44(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b742ab0; end: 10b742b3f;  */

undefined1 * FUN_10b742ab0(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_11270a628;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      *(undefined4 *)((long)plVar1 + 8) = param_3;
      *(undefined4 *)((long)plVar1 + 0xc) = param_4;
    }
  }
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10b742b40; end: 10b742b63; -[SCNGSMEMediaCompositionTrackSegmentTransform copyWithZone:] */

undefined8 FUN_10b742b40(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b742b64; end: 10b742bd7; -[SCNGSMEMediaCompositionTrackSegmentTransform hash] */

undefined8 * FUN_10b742b64(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = *(ulong *)(param_1 + 8) & 0xffffffff;
  uStack_30 = *(ulong *)(param_1 + 8) >> 0x20;
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b742c6c;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(int *)((long)puVar2 + 8) != *(int *)(param_3 + 8) ||
        (*(int *)((long)puVar2 + 0xc) != *(int *)(param_3 + 0xc))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10b742c6c;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b742c6c;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10b742c6c:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10b742bd8; end: 10b742c87; -[SCNGSMEMediaCompositionTrackSegmentTransform isEqual:] */

long FUN_10b742bd8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b742c6c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(int *)(param_1 + 8) != *(int *)(param_3 + 8) ||
        (*(int *)(param_1 + 0xc) != *(int *)(param_3 + 0xc))))) {
      lVar3 = 0;
      goto LAB_10b742c6c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b742c6c;
    }
  }
  lVar3 = 1;
LAB_10b742c6c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b742c88; end: 10b742cab;  */

undefined8 FUN_10b742c88(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* Entry: 10b742cac; end: 10b742cb7; -[SCNGSMEMediaCompositionTrackSegmentTransform .cxx_destruct] */

void FUN_10b742cac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b742cb8; end: 10b742d1b; +[SCNGSMEMediaCompositionTrackSegmentMedia assetUrlWithAssetUrl:] */

void FUN_10b742cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bf698;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b742d1c; end: 10b742d87; +[SCNGSMEMediaCompositionTrackSegmentMedia assetWithAsset:] */

void FUN_10b742d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bf698;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b742d88; end: 10b742df3; +[SCNGSMEMediaCompositionTrackSegmentMedia imageWithImage:] */

void FUN_10b742d88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bf698;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b742df4; end: 10b742faf; -[SCNGSMEMediaCompositionTrackSegmentMedia initWithCoder:] */

undefined8 * FUN_10b742df4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_60 = PTR_PTR_11270a630;
  puVar1 = &uStack_68;
  uStack_68 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) {
        uVar2 = unaff_x21;
        func_0x00010c0720c0();
        if ((uVar2 & 1) == 0) goto LAB_10b742f3c;
        uVar5 = 2;
        lVar6 = 0x20;
        goto LAB_10b742ed0;
      }
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
      lVar6 = 0x10;
LAB_10b742ed0:
      uVar2 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
      *(ulong *)((long)puVar1 + lVar6) = uVar2;
      _objc_release(uVar4);
    }
    puVar1[1] = uVar5;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_10b742f3c:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b742fb0; end: 10b742fd3; -[SCNGSMEMediaCompositionTrackSegmentMedia copyWithZone:] */

undefined8 FUN_10b742fb0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b742fd4; end: 10b743077; -[SCNGSMEMediaCompositionTrackSegmentMedia encodeWithCoder:] */

void FUN_10b742fd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f78d98;
    lVar2 = 0x10;
    ppuVar1 = &PTR____CFConstantStringClassReference_110f78db8;
LAB_10b743044:
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + lVar2),ppuVar1);
  }
  else {
    if (lVar2 != 1) {
      if (lVar2 != 2) goto LAB_10b743064;
      ppuVar3 = &PTR____CFConstantStringClassReference_110dc6f98;
      lVar2 = 0x20;
      ppuVar1 = &PTR____CFConstantStringClassReference_110e892b8;
      goto LAB_10b743044;
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_110f78dd8;
  }
  func_0x00010c14cb00(param_3,param_2,ppuVar3,&PTR____CFConstantStringClassReference_110db7018);
LAB_10b743064:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b743078; end: 10b7430fb; -[SCNGSMEMediaCompositionTrackSegmentMedia hash] */

void FUN_10b743078(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_11270a630;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7430fc; end: 10b74313f; -[SCNGSMEMediaCompositionTrackSegmentMedia internalInit] */

void FUN_10b7430fc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270a630;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b743140; end: 10b74320f; -[SCNGSMEMediaCompositionTrackSegmentMedia isEqual:] */

long FUN_10b743140(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b7431e8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7431f4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b7431f4;
          }
          goto LAB_10b7431e8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b7431f4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b743210; end: 10b7432bb; -[SCNGSMEMediaCompositionTrackSegmentMedia matchAssetUrl:asset:image:] */

void FUN_10b743210(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_10b743298;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else if (lVar1 == 1) {
    if (param_4 == 0) goto LAB_10b743298;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if ((lVar1 != 0) || (param_3 == 0)) goto LAB_10b743298;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10b743298:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7432bc; end: 10b7432f7; -[SCNGSMEMediaCompositionTrackSegmentMedia .cxx_destruct] */

void FUN_10b7432bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7432f8; end: 10b74347b;  */

undefined1 *
FUN_10b7432f8(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_2);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_11270a638;
    lStack_70 = param_1;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar4 = param_2;
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar4;
      _objc_release(uVar2);
      uVar2 = param_3[1];
      uVar4 = *param_3;
      uVar6 = param_3[3];
      uVar5 = param_3[2];
      uVar7 = param_3[4];
      *(undefined8 *)((long)plVar1 + 0x60) = param_3[5];
      *(undefined8 *)((long)plVar1 + 0x58) = uVar7;
      *(undefined8 *)((long)plVar1 + 0x50) = uVar6;
      *(undefined8 *)((long)plVar1 + 0x48) = uVar5;
      *(undefined8 *)((long)plVar1 + 0x40) = uVar2;
      *(undefined8 *)((long)plVar1 + 0x38) = uVar4;
      uVar2 = param_4[1];
      uVar4 = *param_4;
      uVar6 = param_4[3];
      uVar5 = param_4[2];
      uVar7 = param_4[4];
      *(undefined8 *)((long)plVar1 + 0x90) = param_4[5];
      *(undefined8 *)((long)plVar1 + 0x88) = uVar7;
      *(undefined8 *)((long)plVar1 + 0x80) = uVar6;
      *(undefined8 *)((long)plVar1 + 0x78) = uVar5;
      *(undefined8 *)((long)plVar1 + 0x70) = uVar2;
      *(undefined8 *)((long)plVar1 + 0x68) = uVar4;
      *(undefined8 *)((long)plVar1 + 0x10) = param_5;
      uVar4 = param_6;
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar4;
      _objc_release(uVar2);
      uVar4 = param_7;
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar4;
      _objc_release(uVar2);
      uVar4 = param_8;
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = uVar4;
      _objc_release(uVar2);
      uVar4 = param_9;
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = uVar4;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_2);
  return puVar3;
}



/* Entry: 10b74347c; end: 10b74349f; -[SCRenderEffectDAG copyWithZone:] */

undefined8 FUN_10b74347c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7434a0; end: 10b7436bb; -[SCRenderEffectDAG hash] */

undefined8 * FUN_10b7434a0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
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
  undefined8 uStack_f8;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_b0 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_b0 = uStack_b0 ^ uStack_b0 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_a8 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_a8 = uStack_a8 ^ uStack_a8 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_a0 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_a0 = uStack_a0 ^ uStack_a0 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_98 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_98 = uStack_98 ^ uStack_98 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_90 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_90 = uStack_90 ^ uStack_90 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_88 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_80 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x70) + *(ulong *)(param_1 + 0x70) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_78 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x78) + *(ulong *)(param_1 + 0x78) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_70 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x80) + *(ulong *)(param_1 + 0x80) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x88) + *(ulong *)(param_1 + 0x88) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_68 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_60 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x90) + *(ulong *)(param_1 + 0x90) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_50 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uStack_b8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar3;
  func_0x00010bfde980();
  puVar4 = &uStack_b8;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar4,0x12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b743808:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b743814;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (puVar4[2] == param_3[2])) {
      uStack_118 = puVar4[8];
      uStack_120 = puVar4[7];
      uStack_108 = puVar4[10];
      uStack_110 = puVar4[9];
      uStack_f8 = puVar4[0xc];
      uStack_100 = puVar4[0xb];
      uStack_148 = param_3[8];
      uStack_150 = param_3[7];
      uStack_138 = param_3[10];
      uStack_140 = param_3[9];
      uStack_128 = param_3[0xc];
      uStack_130 = param_3[0xb];
      puVar8 = &uStack_120;
      _CGAffineTransformEqualToTransform(puVar8,&uStack_150);
      if ((int)puVar8 != 0) {
        uStack_118 = puVar4[0xe];
        uStack_120 = puVar4[0xd];
        uStack_108 = puVar4[0x10];
        uStack_110 = puVar4[0xf];
        uStack_f8 = puVar4[0x12];
        uStack_100 = puVar4[0x11];
        uStack_148 = param_3[0xe];
        uStack_150 = param_3[0xd];
        uStack_138 = param_3[0x10];
        uStack_140 = param_3[0xf];
        uStack_128 = param_3[0x12];
        uStack_130 = param_3[0x11];
        puVar8 = &uStack_120;
        _CGAffineTransformEqualToTransform(puVar8,&uStack_150);
        if ((int)puVar8 != 0) {
          lVar6 = puVar4[1];
          if ((lVar6 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = puVar4[3];
            if ((lVar6 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              lVar6 = puVar4[4];
              if ((lVar6 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                lVar6 = puVar4[5];
                if ((lVar6 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                  puVar8 = (undefined8 *)puVar4[6];
                  if (puVar8 != (undefined8 *)param_3[6]) {
                    func_0x00010c071ae0();
                    goto LAB_10b743814;
                  }
                  goto LAB_10b743808;
                }
              }
            }
          }
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10b743814:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b7436bc; end: 10b743833; -[SCRenderEffectDAG isEqual:] */

long FUN_10b7436bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b743808:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b743814;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      uStack_58 = *(undefined8 *)(param_1 + 0x40);
      uStack_60 = *(undefined8 *)(param_1 + 0x38);
      uStack_48 = *(undefined8 *)(param_1 + 0x50);
      uStack_50 = *(undefined8 *)(param_1 + 0x48);
      uStack_38 = *(undefined8 *)(param_1 + 0x60);
      uStack_40 = *(undefined8 *)(param_1 + 0x58);
      uStack_88 = *(undefined8 *)(param_3 + 0x40);
      uStack_90 = *(undefined8 *)(param_3 + 0x38);
      uStack_78 = *(undefined8 *)(param_3 + 0x50);
      uStack_80 = *(undefined8 *)(param_3 + 0x48);
      uStack_68 = *(undefined8 *)(param_3 + 0x60);
      uStack_70 = *(undefined8 *)(param_3 + 0x58);
      puVar3 = &uStack_60;
      _CGAffineTransformEqualToTransform(puVar3,&uStack_90);
      if ((int)puVar3 != 0) {
        uStack_58 = *(undefined8 *)(param_1 + 0x70);
        uStack_60 = *(undefined8 *)(param_1 + 0x68);
        uStack_48 = *(undefined8 *)(param_1 + 0x80);
        uStack_50 = *(undefined8 *)(param_1 + 0x78);
        uStack_38 = *(undefined8 *)(param_1 + 0x90);
        uStack_40 = *(undefined8 *)(param_1 + 0x88);
        uStack_88 = *(undefined8 *)(param_3 + 0x70);
        uStack_90 = *(undefined8 *)(param_3 + 0x68);
        uStack_78 = *(undefined8 *)(param_3 + 0x80);
        uStack_80 = *(undefined8 *)(param_3 + 0x78);
        uStack_68 = *(undefined8 *)(param_3 + 0x90);
        uStack_70 = *(undefined8 *)(param_3 + 0x88);
        puVar3 = &uStack_60;
        _CGAffineTransformEqualToTransform(puVar3,&uStack_90);
        if ((int)puVar3 != 0) {
          lVar4 = *(long *)(param_1 + 8);
          if ((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
            lVar4 = *(long *)(param_1 + 0x18);
            if ((lVar4 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
              lVar4 = *(long *)(param_1 + 0x20);
              if ((lVar4 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar4 != 0))
              {
                lVar4 = *(long *)(param_1 + 0x28);
                if ((lVar4 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar4 != 0)
                   ) {
                  lVar4 = *(long *)(param_1 + 0x30);
                  if (lVar4 != *(long *)(param_3 + 0x30)) {
                    func_0x00010c071ae0();
                    goto LAB_10b743814;
                  }
                  goto LAB_10b743808;
                }
              }
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b743814:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b743834; end: 10b74383f;  */

undefined8 FUN_10b743834(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
  return uVar1;
}



/* Entry: 10b743840; end: 10b743893; -[SCRenderEffectDAG .cxx_destruct] */

void FUN_10b743840(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b743894; end: 10b74396f;  */

undefined1 * FUN_10b743894(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_11270a640;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10b743970; end: 10b743993; -[SCAudioRenderEffectDAG copyWithZone:] */

undefined8 FUN_10b743970(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


