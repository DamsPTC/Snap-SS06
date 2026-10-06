/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e01f5c; end: 108e01fbb;  */

void FUN_108e01f5c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 108e01fbc; end: 108e02267; -[SCMemoriesSaveLoggingListenerAnnouncer addListener:] */

undefined8 FUN_108e01fbc(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110ac5c10;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_108e02268(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_108e023a8(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_108e02170:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_108e02190;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_108e02268(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_108e02268(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_108e023a8(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_108e02170;
    }
  }
  uVar9 = 1;
LAB_108e02190:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 108e02268; end: 108e023a7;  */

void FUN_108e02268(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_108e02830();
LAB_108e023a4:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_108e023a4;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 108e023a8; end: 108e023ef;  */

void FUN_108e023a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 108e023f0; end: 108e0261f; -[SCMemoriesSaveLoggingListenerAnnouncer removeListener:] */

void FUN_108e023f0(long param_1,undefined8 param_2,long param_3)

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
  if (plVar6 == (long *)0x0) goto LAB_108e025a4;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_108e02458;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_108e023a8(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_108e025a4;
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
LAB_108e02458:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110ac5c10;
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
          FUN_108e02268(plVar9,lVar7);
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
    FUN_108e023a8(puVar8,&plStack_90);
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
    if (plStack_78 == (long *)0x0) goto LAB_108e025a4;
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
LAB_108e025a4:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e02620; end: 108e02703; -[SCMemoriesSaveLoggingListenerAnnouncer didLogDirectSnapSaveEventWithLoggingParams:] */

void FUN_108e02620(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  _objc_retain(param_3);
  FUN_108e01f5c(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf77c80();
      _objc_release(lVar5);
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e02704; end: 108e027e7; -[SCMemoriesSaveLoggingListenerAnnouncer didLogGeofilterDirectSnapSaveEventWithLoggingParams:] */

void FUN_108e02704(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  _objc_retain(param_3);
  FUN_108e01f5c(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf77cc0();
      _objc_release(lVar5);
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e027e8; end: 108e0280f; -[SCMemoriesSaveLoggingListenerAnnouncer .cxx_destruct] */

void FUN_108e027e8(long param_1)

{
  FUN_108e02844(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 108e02810; end: 108e0282f; -[SCMemoriesSaveLoggingListenerAnnouncer .cxx_construct] */

void FUN_108e02810(long param_1)

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



/* Entry: 108e02830; end: 108e02843;  */

undefined * FUN_108e02830(void)

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



/* Entry: 108e02844; end: 108e0289b;  */

long FUN_108e02844(long param_1)

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



/* Entry: 108e0289c; end: 108e028ab;  */

void FUN_108e0289c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ac5c10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108e028ac; end: 108e028cb;  */

void FUN_108e028ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ac5c10;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108e028cc; end: 108e02933;  */

void FUN_108e028cc(long param_1)

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



/* Entry: 108e02934; end: 108e02937;  */

void FUN_108e02934(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108e02938; end: 108e02a0f; -[SCMemoriesSavingSessionParams initWithSessionId:savingToGallerySessionId:captureSessionId:] */

undefined1 *
FUN_108e02938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fe9c0;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e02a10; end: 108e02a33; -[SCMemoriesSavingSessionParams copyWithZone:] */

undefined8 FUN_108e02a10(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e02a34; end: 108e02ab3; -[SCMemoriesSavingSessionParams hash] */

undefined8 * FUN_108e02a34(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108e02b4c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108e02b58;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_108e02b58;
          }
          goto LAB_108e02b4c;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108e02b58:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108e02ab4; end: 108e02b73; -[SCMemoriesSavingSessionParams isEqual:] */

long FUN_108e02ab4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108e02b4c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e02b58;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_108e02b58;
          }
          goto LAB_108e02b4c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108e02b58:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e02b74; end: 108e02b7b; -[SCMemoriesSavingSessionParams sessionId] */

undefined8 FUN_108e02b74(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e02b7c; end: 108e02b83; -[SCMemoriesSavingSessionParams savingToGallerySessionId] */

undefined8 FUN_108e02b7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e02b84; end: 108e02b8b; -[SCMemoriesSavingSessionParams captureSessionId] */

undefined8 FUN_108e02b84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e02b8c; end: 108e02bc7; -[SCMemoriesSavingSessionParams .cxx_destruct] */

void FUN_108e02b8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e02bc8; end: 108e02f1f; -[SCMemoriesSavingSessionStatus initWithCoder:] */

undefined1 *
FUN_108e02bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1126fe9c8;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xc) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0x14) = (int)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xd) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xe) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xf) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x10) = (char)uVar2;
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x80) = param_1;
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x88) = param_1;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x11) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x12) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined8 *)((long)puVar1 + 0x90) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108e02f20; end: 108e0321b; -[SCMemoriesSavingSessionStatus initWithSavingToGallerySessionId:savingToCameraRollSessionId:savingSource:snapCount:savingStartTime:isPreviewSave:previewLogParams:hasCameraSaveError:hasGallerySaveError:cameraSaveError:gallerySaveError:isManualSave:hasCameos:galleryType:gallerySnapId:galleryCaptureSessionId:galleryMediaId:galleryEntryId:didSaveToCameraRollSuccess:totalMediaSize:saveToGallery:saveToCameraRoll:saveToDraft:transcodingStartTime:transcodingEndTime:hasTranscodingForPreviewBlob:hasTranscodingForCameraRoll:transcodingError:] */

undefined8 *
FUN_108e02f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16,
             undefined4 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined1 param_22,undefined4 param_23,undefined8 param_24,
             undefined4 param_25,undefined1 param_26,undefined8 param_27)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_98;
  undefined *puStack_90;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_27);
  puStack_90 = PTR_PTR_1126fe9c8;
  puVar1 = &uStack_98;
  uStack_98 = param_4;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    puVar1[5] = param_8;
    puVar1[6] = param_9;
    puVar1[7] = param_1;
    *(undefined1 *)(puVar1 + 1) = param_10;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_12;
    *(undefined1 *)((long)puVar1 + 10) = param_12._1_1_;
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = (undefined1)param_16;
    *(undefined1 *)((long)puVar1 + 0xc) = param_16._1_1_;
    *(undefined4 *)((long)puVar1 + 0x14) = param_17;
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xd) = param_22;
    puVar1[0xf] = param_24;
    *(undefined1 *)((long)puVar1 + 0xe) = (undefined1)param_25;
    *(undefined1 *)((long)puVar1 + 0xf) = param_25._1_1_;
    *(undefined1 *)(puVar1 + 2) = param_25._2_1_;
    puVar1[0x10] = param_2;
    puVar1[0x11] = param_3;
    *(undefined1 *)((long)puVar1 + 0x11) = param_25._3_1_;
    *(undefined1 *)((long)puVar1 + 0x12) = param_26;
    uVar2 = param_27;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_27);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  return puVar1;
}



/* Entry: 108e0321c; end: 108e0323f; -[SCMemoriesSavingSessionStatus copyWithZone:] */

undefined8 FUN_108e0321c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e03240; end: 108e034a7; -[SCMemoriesSavingSessionStatus encodeWithCoder:] */

void FUN_108e03240(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110efabf8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110efac18);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110efac38);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110efac58);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x38),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110efac78);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110efac98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110efacb8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110efacd8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110efacf8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110efad18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110efad38);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                      &PTR____CFConstantStringClassReference_110efad58);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110efad78);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0x14),
                      &PTR____CFConstantStringClassReference_110efad98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110efadb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110efadd8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110efadf8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110efae18);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xd),
                      &PTR____CFConstantStringClassReference_110efae38);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110efae58);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xe),
                      &PTR____CFConstantStringClassReference_110efae78);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xf),
                      &PTR____CFConstantStringClassReference_110efab98);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110efae98);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x80),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110efaeb8);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x88),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110efaed8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x11),
                      &PTR____CFConstantStringClassReference_110efaef8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x12),
                      &PTR____CFConstantStringClassReference_110efaf18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x90),
                      &PTR____CFConstantStringClassReference_110efaf38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e034a8; end: 108e03637; -[SCMemoriesSavingSessionStatus hash] */

undefined8 * FUN_108e034a8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  double dVar10;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_118 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_f8 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_f8 = uStack_f8 ^ uStack_f8 >> 0x16;
  uStack_f0 = (ulong)*(byte *)(param_1 + 8);
  uStack_108 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_100 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_110 = uVar2;
  func_0x00010bfde980();
  uStack_e0 = (ulong)*(byte *)(param_1 + 9);
  uStack_d8 = (ulong)*(byte *)(param_1 + 10);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_e8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_d0 = uVar2;
  func_0x00010bfde980();
  uStack_c0 = (ulong)*(byte *)(param_1 + 0xb);
  uStack_b8 = (ulong)*(byte *)(param_1 + 0xc);
  lStack_b0 = (long)*(int *)(param_1 + 0x14);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_c8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uStack_88 = (ulong)*(byte *)(param_1 + 0xd);
  uStack_78 = (ulong)*(byte *)(param_1 + 0xe);
  uStack_80 = *(undefined8 *)(param_1 + 0x78);
  uStack_70 = (ulong)*(byte *)(param_1 + 0xf);
  uStack_68 = (ulong)*(byte *)(param_1 + 0x10);
  uVar7 = ~*(ulong *)(param_1 + 0x80) + *(ulong *)(param_1 + 0x80) * 0x40000;
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  uVar8 = ~*(ulong *)(param_1 + 0x88) + *(ulong *)(param_1 + 0x88) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_60 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uStack_58 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uStack_50 = (ulong)*(byte *)(param_1 + 0x11);
  uStack_48 = (ulong)*(byte *)(param_1 + 0x12);
  uStack_90 = uVar3;
  func_0x00010bfde980();
  puVar4 = &uStack_118;
  uStack_40 = uVar1;
  func_0x000107c3191c(puVar4,0x1c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_108e03910:
    puVar9 = (undefined8 *)0x1;
  }
  else {
    puVar9 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108e0391c;
    puVar9 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((puVar4[5] == param_3[5] && (puVar4[6] == param_3[6])) &&
           (*(char *)(puVar4 + 1) == *(char *)(param_3 + 1))) &&
          ((*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9) &&
           (*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10))))))) &&
        (*(char *)((long)puVar4 + 0xb) == *(char *)((long)param_3 + 0xb))) &&
       ((((*(char *)((long)puVar4 + 0xc) == *(char *)((long)param_3 + 0xc) &&
          (*(int *)((long)puVar4 + 0x14) == *(int *)((long)param_3 + 0x14))) &&
         ((*(char *)((long)puVar4 + 0xd) == *(char *)((long)param_3 + 0xd) &&
          (((puVar4[0xf] == param_3[0xf] &&
            (*(char *)((long)puVar4 + 0xe) == *(char *)((long)param_3 + 0xe))) &&
           (*(char *)((long)puVar4 + 0xf) == *(char *)((long)param_3 + 0xf))))))) &&
        (((*(char *)(puVar4 + 2) == *(char *)(param_3 + 2) &&
          (*(char *)((long)puVar4 + 0x11) == *(char *)((long)param_3 + 0x11))) &&
         (*(char *)((long)puVar4 + 0x12) == *(char *)((long)param_3 + 0x12))))))) {
      dVar10 = ABS((double)puVar4[7] - (double)param_3[7]);
      if ((dVar10 < 2.2250738585072014e-308) ||
         (dVar10 < ABS((double)puVar4[7] + (double)param_3[7]) * 2.220446049250313e-16)) {
        dVar10 = ABS((double)puVar4[0x10] - (double)param_3[0x10]);
        if ((dVar10 < 2.2250738585072014e-308) ||
           (dVar10 < ABS((double)puVar4[0x10] + (double)param_3[0x10]) * 2.220446049250313e-16)) {
          dVar10 = ABS((double)puVar4[0x11] - (double)param_3[0x11]);
          if ((((dVar10 < 2.2250738585072014e-308) ||
               (dVar10 < ABS((double)puVar4[0x11] + (double)param_3[0x11]) * 2.220446049250313e-16))
              && (((lVar6 = puVar4[3], lVar6 == param_3[3] ||
                   (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                  ((((lVar6 = puVar4[4], lVar6 == param_3[4] ||
                     (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                    ((lVar6 = puVar4[8], lVar6 == param_3[8] ||
                     (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                   ((lVar6 = puVar4[9], lVar6 == param_3[9] ||
                    (func_0x00010c071ae0(), (int)lVar6 != 0)))))))) &&
             (((lVar6 = puVar4[10], lVar6 == param_3[10] || (func_0x00010c071ae0(), (int)lVar6 != 0)
               ) && ((((lVar6 = puVar4[0xb], lVar6 == param_3[0xb] ||
                       (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                      ((lVar6 = puVar4[0xc], lVar6 == param_3[0xc] ||
                       (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                     (((lVar6 = puVar4[0xd], lVar6 == param_3[0xd] ||
                       (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                      ((lVar6 = puVar4[0xe], lVar6 == param_3[0xe] ||
                       (func_0x00010c071ae0(), (int)lVar6 != 0)))))))))) {
            puVar9 = (undefined8 *)puVar4[0x12];
            if (puVar9 != (undefined8 *)param_3[0x12]) {
              func_0x00010c071ae0();
              goto LAB_108e0391c;
            }
            goto LAB_108e03910;
          }
        }
      }
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_108e0391c:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 108e03638; end: 108e03937; -[SCMemoriesSavingSessionStatus isEqual:] */

long FUN_108e03638(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108e03910:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e0391c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
            (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
           (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
          ((*(char *)(param_1 + 9) == *(char *)(param_3 + 9) &&
           (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))))) &&
        (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))) &&
       ((((*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc) &&
          (*(int *)(param_1 + 0x14) == *(int *)(param_3 + 0x14))) &&
         ((*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd) &&
          (((*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78) &&
            (*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe))) &&
           (*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf))))))) &&
        (((*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10) &&
          (*(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11))) &&
         (*(char *)(param_1 + 0x12) == *(char *)(param_3 + 0x12))))))) {
      dVar4 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0x80) - *(double *)(param_3 + 0x80));
        if ((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0x80) + *(double *)(param_3 + 0x80)) *
                    2.220446049250313e-16)) {
          dVar4 = ABS(*(double *)(param_1 + 0x88) - *(double *)(param_3 + 0x88));
          if ((((dVar4 < 2.2250738585072014e-308) ||
               (dVar4 < ABS(*(double *)(param_1 + 0x88) + *(double *)(param_3 + 0x88)) *
                        2.220446049250313e-16)) &&
              (((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
               ((((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                 ((lVar3 = *(long *)(param_1 + 0x40), lVar3 == *(long *)(param_3 + 0x40) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                ((lVar3 = *(long *)(param_1 + 0x48), lVar3 == *(long *)(param_3 + 0x48) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))))))) &&
             (((lVar3 = *(long *)(param_1 + 0x50), lVar3 == *(long *)(param_3 + 0x50) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              ((((lVar3 = *(long *)(param_1 + 0x58), lVar3 == *(long *)(param_3 + 0x58) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                ((lVar3 = *(long *)(param_1 + 0x60), lVar3 == *(long *)(param_3 + 0x60) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
               (((lVar3 = *(long *)(param_1 + 0x68), lVar3 == *(long *)(param_3 + 0x68) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                ((lVar3 = *(long *)(param_1 + 0x70), lVar3 == *(long *)(param_3 + 0x70) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))))))))) {
            lVar3 = *(long *)(param_1 + 0x90);
            if (lVar3 != *(long *)(param_3 + 0x90)) {
              func_0x00010c071ae0();
              goto LAB_108e0391c;
            }
            goto LAB_108e03910;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108e0391c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e03938; end: 108e0393f; -[SCMemoriesSavingSessionStatus savingToGallerySessionId] */

undefined8 FUN_108e03938(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e03940; end: 108e03947; -[SCMemoriesSavingSessionStatus savingToCameraRollSessionId] */

undefined8 FUN_108e03940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108e03948; end: 108e0394f; -[SCMemoriesSavingSessionStatus savingSource] */

undefined8 FUN_108e03948(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108e03950; end: 108e03957; -[SCMemoriesSavingSessionStatus snapCount] */

undefined8 FUN_108e03950(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108e03958; end: 108e0395f; -[SCMemoriesSavingSessionStatus savingStartTime] */

undefined8 FUN_108e03958(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108e03960; end: 108e03967; -[SCMemoriesSavingSessionStatus isPreviewSave] */

undefined1 FUN_108e03960(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108e03968; end: 108e0396f; -[SCMemoriesSavingSessionStatus previewLogParams] */

undefined8 FUN_108e03968(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108e03970; end: 108e03977; -[SCMemoriesSavingSessionStatus hasCameraSaveError] */

undefined1 FUN_108e03970(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108e03978; end: 108e0397f; -[SCMemoriesSavingSessionStatus hasGallerySaveError] */

undefined1 FUN_108e03978(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108e03980; end: 108e03987; -[SCMemoriesSavingSessionStatus cameraSaveError] */

undefined8 FUN_108e03980(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108e03988; end: 108e0398f; -[SCMemoriesSavingSessionStatus gallerySaveError] */

undefined8 FUN_108e03988(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108e03990; end: 108e03997; -[SCMemoriesSavingSessionStatus isManualSave] */

undefined1 FUN_108e03990(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 108e03998; end: 108e0399f; -[SCMemoriesSavingSessionStatus hasCameos] */

undefined1 FUN_108e03998(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 108e039a0; end: 108e039a7; -[SCMemoriesSavingSessionStatus galleryType] */

undefined4 FUN_108e039a0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 108e039a8; end: 108e039af; -[SCMemoriesSavingSessionStatus gallerySnapId] */

undefined8 FUN_108e039a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108e039b0; end: 108e039b7; -[SCMemoriesSavingSessionStatus galleryCaptureSessionId] */

undefined8 FUN_108e039b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108e039b8; end: 108e039bf; -[SCMemoriesSavingSessionStatus galleryMediaId] */

undefined8 FUN_108e039b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108e039c0; end: 108e039c7; -[SCMemoriesSavingSessionStatus galleryEntryId] */

undefined8 FUN_108e039c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108e039c8; end: 108e039cf; -[SCMemoriesSavingSessionStatus didSaveToCameraRollSuccess] */

undefined1 FUN_108e039c8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 108e039d0; end: 108e039d7; -[SCMemoriesSavingSessionStatus totalMediaSize] */

undefined8 FUN_108e039d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108e039d8; end: 108e039df; -[SCMemoriesSavingSessionStatus saveToGallery] */

undefined1 FUN_108e039d8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 108e039e0; end: 108e039e7; -[SCMemoriesSavingSessionStatus saveToCameraRoll] */

undefined1 FUN_108e039e0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 108e039e8; end: 108e039ef; -[SCMemoriesSavingSessionStatus saveToDraft] */

undefined1 FUN_108e039e8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 108e039f0; end: 108e039f7; -[SCMemoriesSavingSessionStatus transcodingStartTime] */

undefined8 FUN_108e039f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 108e039f8; end: 108e039ff; -[SCMemoriesSavingSessionStatus transcodingEndTime] */

undefined8 FUN_108e039f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 108e03a00; end: 108e03a07; -[SCMemoriesSavingSessionStatus hasTranscodingForPreviewBlob] */

undefined1 FUN_108e03a00(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 108e03a08; end: 108e03a0f; -[SCMemoriesSavingSessionStatus hasTranscodingForCameraRoll] */

undefined1 FUN_108e03a08(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 108e03a10; end: 108e03a17; -[SCMemoriesSavingSessionStatus transcodingError] */

undefined8 FUN_108e03a10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 108e03a18; end: 108e03aa7; -[SCMemoriesSavingSessionStatus .cxx_destruct] */

void FUN_108e03a18(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108e03aa8; end: 108e03ac3; +[SCMemoriesSavingSessionStatusBuilder memoriesSavingSessionStatus] */

void FUN_108e03aa8(void)

{
  _objc_alloc_init(PTR_PTR_1126c46e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e03ac4; end: 108e040a3; +[SCMemoriesSavingSessionStatusBuilder memoriesSavingSessionStatusFromExistingMemoriesSavingSessionStatus:] */

void FUN_108e03ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  
  puVar1 = PTR_PTR_1126c46e0;
  _objc_retain(param_3);
  func_0x00010c0c96c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c14c0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b78a0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c14c080();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b7880(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c14c020(param_3);
  puVar7 = puVar5;
  func_0x00010c2b7840(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c23fa00(param_3);
  puVar8 = puVar7;
  func_0x00010c2b9220(puVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c040(param_3);
  puVar9 = puVar8;
  func_0x00010c2b7860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c07b020(param_3);
  puVar10 = puVar9;
  func_0x00010c2b1200(puVar9,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c111680();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c2b5de0(puVar10,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010bfd50e0(param_3);
  puVar13 = puVar11;
  func_0x00010c2af160(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010bfd7600(param_3);
  puVar14 = puVar13;
  func_0x00010c2af2a0(puVar13,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010bf2ab80();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c2a9ea0(puVar14,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010bfbd500();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010c2aeb80(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c077540(param_3);
  puVar19 = puVar17;
  func_0x00010c2b0e00(puVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010bfd5060(param_3);
  puVar20 = puVar19;
  func_0x00010c2af120(puVar19,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010bfbdda0(param_3);
  puVar21 = puVar20;
  func_0x00010c2aec80(puVar20,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010bfbd7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar21;
  func_0x00010c2aec20(puVar21,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = param_3;
  func_0x00010bfbcb40();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar22;
  func_0x00010c2aea80(puVar22,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = param_3;
  func_0x00010bfbd1c0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar24;
  func_0x00010c2aeb00(puVar24,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_3;
  func_0x00010bfbcd20();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar26;
  func_0x00010c2aeae0(puVar26,param_2,uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_3;
  func_0x00010bf7a3a0(param_3);
  puVar30 = puVar28;
  func_0x00010c2ac440(puVar28,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_3;
  func_0x00010c276860(param_3);
  puVar31 = puVar30;
  func_0x00010c2bb8e0(puVar30,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_3;
  func_0x00010c14b500(param_3);
  puVar32 = puVar31;
  func_0x00010c2b7760(puVar31,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_3;
  func_0x00010c14b420(param_3);
  puVar33 = puVar32;
  func_0x00010c2b7720(puVar32,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_3;
  func_0x00010c14b4e0(param_3);
  puVar34 = puVar33;
  func_0x00010c2b7740(puVar33,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27a0a0(param_3);
  puVar35 = puVar34;
  func_0x00010c2bbbc0(puVar34);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c279f60(param_3);
  puVar36 = puVar35;
  func_0x00010c2bbb80(puVar35);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_3;
  func_0x00010bfdd920(param_3);
  puVar37 = puVar36;
  func_0x00010c2af5a0(puVar36,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_3;
  func_0x00010bfdd900(param_3);
  puVar38 = puVar37;
  func_0x00010c2af580(puVar37,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_3;
  func_0x00010c279f80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar39 = puVar38;
  func_0x00010c2bbba0(puVar38,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar29);
  _objc_release(puVar38);
  _objc_release(puVar37);
  _objc_release(puVar36);
  _objc_release(puVar35);
  _objc_release(puVar34);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar28);
  _objc_release(uVar27);
  _objc_release(puVar26);
  _objc_release(uVar25);
  _objc_release(puVar24);
  _objc_release(uVar23);
  _objc_release(puVar22);
  _objc_release(uVar18);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(uVar12);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(uVar6);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar39);
  return;
}



/* Entry: 108e040a4; end: 108e0415f; -[SCMemoriesSavingSessionStatusBuilder build] */

void FUN_108e040a4(long param_1)

{
  _objc_alloc(PTR_PTR_1126c46f0);
  func_0x00010c041680(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x98),
                      *(undefined8 *)(param_1 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e04160; end: 108e04197; -[SCMemoriesSavingSessionStatusBuilder withSavingToGallerySessionId:] */

long FUN_108e04160(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108e04198; end: 108e041cf; -[SCMemoriesSavingSessionStatusBuilder withSavingToCameraRollSessionId:] */

long FUN_108e04198(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108e041d0; end: 108e041d7; -[SCMemoriesSavingSessionStatusBuilder withSavingSource:] */

void FUN_108e041d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 108e041d8; end: 108e041df; -[SCMemoriesSavingSessionStatusBuilder withSnapCount:] */

void FUN_108e041d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 108e041e0; end: 108e041e7; -[SCMemoriesSavingSessionStatusBuilder withSavingStartTime:] */

void FUN_108e041e0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 108e041e8; end: 108e041ef; -[SCMemoriesSavingSessionStatusBuilder withIsPreviewSave:] */

void FUN_108e041e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 108e041f0; end: 108e04227; -[SCMemoriesSavingSessionStatusBuilder withPreviewLogParams:] */

long FUN_108e041f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108e04228; end: 108e0422f; -[SCMemoriesSavingSessionStatusBuilder withHasCameraSaveError:] */

void FUN_108e04228(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 108e04230; end: 108e04237; -[SCMemoriesSavingSessionStatusBuilder withHasGallerySaveError:] */

void FUN_108e04230(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x41) = param_3;
  return;
}



/* Entry: 108e04238; end: 108e0426f; -[SCMemoriesSavingSessionStatusBuilder withCameraSaveError:] */

long FUN_108e04238(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108e04270; end: 108e042a7; -[SCMemoriesSavingSessionStatusBuilder withGallerySaveError:] */

long FUN_108e04270(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108e042a8; end: 108e042af; -[SCMemoriesSavingSessionStatusBuilder withIsManualSave:] */

void FUN_108e042a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 108e042b0; end: 108e042b7; -[SCMemoriesSavingSessionStatusBuilder withHasCameos:] */

void FUN_108e042b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x59) = param_3;
  return;
}



/* Entry: 108e042b8; end: 108e042bf; -[SCMemoriesSavingSessionStatusBuilder withGalleryType:] */

void FUN_108e042b8(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x5c) = param_3;
  return;
}



/* Entry: 108e042c0; end: 108e042f7; -[SCMemoriesSavingSessionStatusBuilder withGallerySnapId:] */

long FUN_108e042c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108e042f8; end: 108e0432f; -[SCMemoriesSavingSessionStatusBuilder withGalleryCaptureSessionId:] */

long FUN_108e042f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108e04330; end: 108e04367; -[SCMemoriesSavingSessionStatusBuilder withGalleryMediaId:] */

long FUN_108e04330(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108e04368; end: 108e0439f; -[SCMemoriesSavingSessionStatusBuilder withGalleryEntryId:] */

long FUN_108e04368(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108e043a0; end: 108e043a7; -[SCMemoriesSavingSessionStatusBuilder withDidSaveToCameraRollSuccess:] */

void FUN_108e043a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 108e043a8; end: 108e043af; -[SCMemoriesSavingSessionStatusBuilder withTotalMediaSize:] */

void FUN_108e043a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 108e043b0; end: 108e043b7; -[SCMemoriesSavingSessionStatusBuilder withSaveToGallery:] */

void FUN_108e043b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 108e043b8; end: 108e043bf; -[SCMemoriesSavingSessionStatusBuilder withSaveToCameraRoll:] */

void FUN_108e043b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x91) = param_3;
  return;
}



/* Entry: 108e043c0; end: 108e043c7; -[SCMemoriesSavingSessionStatusBuilder withSaveToDraft:] */

void FUN_108e043c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x92) = param_3;
  return;
}



/* Entry: 108e043c8; end: 108e043cf; -[SCMemoriesSavingSessionStatusBuilder withTranscodingStartTime:] */

void FUN_108e043c8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x98) = param_1;
  return;
}



/* Entry: 108e043d0; end: 108e043d7; -[SCMemoriesSavingSessionStatusBuilder withTranscodingEndTime:] */

void FUN_108e043d0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0xa0) = param_1;
  return;
}



/* Entry: 108e043d8; end: 108e043df; -[SCMemoriesSavingSessionStatusBuilder withHasTranscodingForPreviewBlob:] */

void FUN_108e043d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa8) = param_3;
  return;
}



/* Entry: 108e043e0; end: 108e043e7; -[SCMemoriesSavingSessionStatusBuilder withHasTranscodingForCameraRoll:] */

void FUN_108e043e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa9) = param_3;
  return;
}



/* Entry: 108e043e8; end: 108e0441f; -[SCMemoriesSavingSessionStatusBuilder withTranscodingError:] */

long FUN_108e043e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108e04420; end: 108e044af; -[SCMemoriesSavingSessionStatusBuilder .cxx_destruct] */

void FUN_108e04420(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e044b0; end: 108e0483b;  */

void FUN_108e044b0(undefined *param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110efaf98;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110efafb8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110efafd8;
  if (param_4 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110efaff8;
  }
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar2);
  if (param_4 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bfedc40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    ppuVar4 = ppuVar6;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
  }
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0d3c80();
  _objc_release(puVar7);
  if (param_4 != 0) {
    func_0x00010c1d0640(puVar8);
  }
  if (param_3 != 0) {
    func_0x00010bef7f60(puVar8);
  }
  puVar9 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar8;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010c246d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_retain(puVar10);
  puVar7 = puVar10;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar7 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar10);
      }
      puVar11 = puVar8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ba0(puVar9);
      _objc_release(puVar11);
      puVar14 = puVar14 + 1;
    } while (puVar7 != puVar14);
    puVar7 = puVar10;
    func_0x00010bf52a60();
  }
  _objc_release(puVar10);
  puVar7 = puVar9;
  func_0x00010c08fa60();
  if (puVar7 != (undefined *)0x0) {
    func_0x00010c08fa60(puVar9);
    func_0x00010bf6b860(puVar9);
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110efb058;
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(ppuVar5);
    _objc_retain(uVar12);
    _objc_retain(param_1);
    func_0x00010bf72080(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(uVar12);
    puVar7 = param_1;
    FUN_108e044b0(param_1,0,puVar8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
      ___stack_chk_fail();
      func_0x00010bddde80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108e0483c; end: 108e04937;  */

void FUN_108e0483c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf72080(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  uVar2 = param_1;
  FUN_108e044b0(param_1,0,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bddde80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e04938; end: 108e0496f;  */

void FUN_108e04938(undefined8 param_1)

{
  func_0x00010bddde80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e04970; end: 108e04d9b;  */

void FUN_108e04970(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  else {
    puVar10 = (undefined *)0x0;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(puVar2);
        }
        puVar11 = *(undefined **)((long)puVar12 * 8);
        puVar3 = puVar11;
        func_0x00010c268120();
        if (puVar3 == (undefined *)0x14) {
          _objc_retain(puVar11);
          _objc_release(puVar10);
          puVar10 = puVar11;
        }
        puVar12 = puVar12 + 1;
      } while (puVar1 != puVar12);
      puVar1 = puVar2;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined *)0x0);
    _objc_release();
    if (puVar10 != (undefined *)0x0) goto LAB_108e04b84;
  }
  puVar10 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60();
  _objc_release(puVar1);
  func_0x00010c182220(puVar10);
  func_0x00010c211780(puVar10);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar10);
  _objc_release(puVar1);
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
  puVar2 = puVar10;
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
LAB_108e04b84:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    lVar4 = param_2;
    func_0x00010c2a5040();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar4;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(puVar2 + 0x28),PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar9 + 0x10))(lVar9,puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(lVar9);
    _objc_release(lVar4);
    lVar4 = param_2;
    func_0x00010c279240();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar4;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar2 + 0x20);
    func_0x00010bf4dce0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar9;
    (**(code **)(lVar9 + 0x10))(lVar9,uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c2a7440();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar8 + 0x10))(-*(double *)(puVar2 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(lVar9);
    _objc_release(lVar4);
    lVar4 = param_2;
    func_0x00010bf348c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar9 = lVar4;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar2 + 0x20);
    func_0x00010bf4dce0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar9 + 0x10))(lVar9,uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 108e04d9c; end: 108e04deb;  */

void FUN_108e04d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bddde80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e04dec; end: 108e04dff;  */

void FUN_108e04dec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_imageNamed__1125d7a50,
             &PTR____CFConstantStringClassReference_110efb078);
  return;
}



/* Entry: 108e04e00; end: 108e04edb; -[SCAutoCaptionsTextView initWithIsEditable:] */

undefined1 * FUN_108e04e00(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fe9d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08ce80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(puVar2);
    func_0x00010c1fada0(puVar1);
    func_0x00010c193a00(puVar1);
    func_0x00010c1f7b20(puVar1);
    func_0x00010c1edbe0(puVar1);
    func_0x00010c16e440(puVar1);
    func_0x00010c2131e0(0x4000000000000000,0,0x4000000000000000,0,puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e04edc; end: 108e04eff; +[SCAutoCaptionsTextView editableTextView] */

void FUN_108e04edc(void)

{
  _objc_alloc(PTR_PTR_1126b36f0);
  func_0x00010c01ef00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e04f00; end: 108e04f23; +[SCAutoCaptionsTextView uneditableTextView] */

void FUN_108e04f00(void)

{
  _objc_alloc(PTR_PTR_1126b36f0);
  func_0x00010c01ef00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e04f24; end: 108e04f63; -[SCAutoCaptionsTextView setText:] */

void FUN_108e04f24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_108e05548(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


