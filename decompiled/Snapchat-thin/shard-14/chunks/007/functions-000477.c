/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5df6e4; end: 10b5df6f3;  */

void FUN_10b5df6e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d250b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b5df6f4; end: 10b5df713;  */

void FUN_10b5df6f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d250b8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5df714; end: 10b5df77b;  */

void FUN_10b5df714(long param_1)

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



/* Entry: 10b5df77c; end: 10b5df77f;  */

void FUN_10b5df77c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5df780; end: 10b5df8fb; -[SCBackgroundTaskResultsListenerAnnouncer description] */

void FUN_10b5df780(long param_1)

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
  
  FUN_10b5df8fc(&plStack_60,param_1 + 0x48);
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



/* Entry: 10b5df8fc; end: 10b5df95b;  */

void FUN_10b5df8fc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10b5df95c; end: 10b5dfc07; -[SCBackgroundTaskResultsListenerAnnouncer addListener:] */

undefined8 FUN_10b5df95c(long param_1,undefined8 param_2,long param_3)

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
  *plVar3 = (long)&PTR_FUN_110d25108;
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
    FUN_10b5dfc08(plVar10,auStack_90);
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
    FUN_10b5dfd48(puVar8,&plStack_a0);
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
LAB_10b5dfb10:
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
      goto LAB_10b5dfb30;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_10b5dfc08(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_10b5dfc08(plVar10,auStack_78);
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
    FUN_10b5dfd48(puVar8,&plStack_88);
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
      goto LAB_10b5dfb10;
    }
  }
  uVar9 = 1;
LAB_10b5dfb30:
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



/* Entry: 10b5dfc08; end: 10b5dfd47;  */

void FUN_10b5dfc08(long *param_1,long *param_2)

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
      FUN_10b5e00dc();
LAB_10b5dfd44:
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
      if (uVar7 >> 0x3d != 0) goto LAB_10b5dfd44;
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



/* Entry: 10b5dfd48; end: 10b5dfd8f;  */

void FUN_10b5dfd48(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10b5dfd90; end: 10b5dffbf; -[SCBackgroundTaskResultsListenerAnnouncer removeListener:] */

void FUN_10b5dfd90(long param_1,undefined8 param_2,long param_3)

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
  if (plVar6 == (long *)0x0) goto LAB_10b5dff44;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_10b5dfdf8;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_10b5dfd48(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10b5dff44;
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
LAB_10b5dfdf8:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110d25108;
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
          FUN_10b5dfc08(plVar9,lVar7);
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
    FUN_10b5dfd48(puVar8,&plStack_90);
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
    if (plStack_78 == (long *)0x0) goto LAB_10b5dff44;
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
LAB_10b5dff44:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b5dffc0; end: 10b5e00b3; -[SCBackgroundTaskResultsListenerAnnouncer didUpdateTaskResultForRequestKey:withTaskResult:] */

void FUN_10b5dffc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_10b5df8fc(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf7e820();
      _objc_release(lVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b5e00b4; end: 10b5e00db; -[SCBackgroundTaskResultsListenerAnnouncer .cxx_destruct] */

void FUN_10b5e00b4(long param_1)

{
  FUN_10b5e00f0(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 10b5e00dc; end: 10b5e00ef;  */

undefined * FUN_10b5e00dc(void)

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



/* Entry: 10b5e00f0; end: 10b5e0147;  */

long FUN_10b5e00f0(long param_1)

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



/* Entry: 10b5e0148; end: 10b5e0157;  */

void FUN_10b5e0148(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d25108;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b5e0158; end: 10b5e0177;  */

void FUN_10b5e0158(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d25108;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5e0178; end: 10b5e01df;  */

void FUN_10b5e0178(long param_1)

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



/* Entry: 10b5e01e0; end: 10b5e01e3;  */

void FUN_10b5e01e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5e01e4; end: 10b5e01ef; -[SCNetworkConnectivityAnnouncerServices .cxx_destruct] */

void FUN_10b5e01e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5e01f0; end: 10b5e036b; -[SCNetworkConnectivityListenerAnnouncer description] */

void FUN_10b5e01f0(long param_1)

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
  
  func_0x000107c30670(&plStack_60,param_1 + 0x48);
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



/* Entry: 10b5e036c; end: 10b5e0617; -[SCNetworkConnectivityListenerAnnouncer addListener:] */

undefined8 FUN_10b5e036c(long param_1,undefined8 param_2,long param_3)

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
  *plVar3 = (long)&PTR_FUN_110d25158;
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
    FUN_10b5e0618(plVar10,auStack_90);
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
    FUN_10b5e0758(puVar8,&plStack_a0);
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
LAB_10b5e0520:
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
      goto LAB_10b5e0540;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_10b5e0618(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_10b5e0618(plVar10,auStack_78);
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
    FUN_10b5e0758(puVar8,&plStack_88);
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
      goto LAB_10b5e0520;
    }
  }
  uVar9 = 1;
LAB_10b5e0540:
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



/* Entry: 10b5e0618; end: 10b5e0757;  */

void FUN_10b5e0618(long *param_1,long *param_2)

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
      FUN_10b5e09f8();
LAB_10b5e0754:
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
      if (uVar7 >> 0x3d != 0) goto LAB_10b5e0754;
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



/* Entry: 10b5e0758; end: 10b5e079f;  */

void FUN_10b5e0758(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10b5e07a0; end: 10b5e09cf; -[SCNetworkConnectivityListenerAnnouncer removeListener:] */

void FUN_10b5e07a0(long param_1,undefined8 param_2,long param_3)

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
  if (plVar6 == (long *)0x0) goto LAB_10b5e0954;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_10b5e0808;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_10b5e0758(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10b5e0954;
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
LAB_10b5e0808:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110d25158;
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
          FUN_10b5e0618(plVar9,lVar7);
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
    FUN_10b5e0758(puVar8,&plStack_90);
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
    if (plStack_78 == (long *)0x0) goto LAB_10b5e0954;
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
LAB_10b5e0954:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b5e09d0; end: 10b5e09f7; -[SCNetworkConnectivityListenerAnnouncer .cxx_destruct] */

void FUN_10b5e09d0(long param_1)

{
  FUN_10b5e0a0c(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 10b5e09f8; end: 10b5e0a0b;  */

undefined * FUN_10b5e09f8(void)

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



/* Entry: 10b5e0a0c; end: 10b5e0a63;  */

long FUN_10b5e0a0c(long param_1)

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



/* Entry: 10b5e0a64; end: 10b5e0a73;  */

void FUN_10b5e0a64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d25158;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b5e0a74; end: 10b5e0a93;  */

void FUN_10b5e0a74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d25158;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5e0a94; end: 10b5e0afb;  */

void FUN_10b5e0a94(long param_1)

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



/* Entry: 10b5e0afc; end: 10b5e0aff;  */

void FUN_10b5e0afc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5e0b00; end: 10b5e0d33; +[SCAPIAuth authenticationParametersForEndpoint:authToken:username:userId:parameters:deviceIdManager:] */

void FUN_10b5e0b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  iVar1 = 0x11183d88;
  func_0x00010bf4b900(&PTR__OBJC_CLASS___NSConstantArray_111183d88,param_2,param_3);
  if (iVar1 == 0) {
    ppuVar5 = &PTR__OBJC_CLASS___NSConstantArray_111183db8;
    func_0x00010bf4b900(&PTR__OBJC_CLASS___NSConstantArray_111183db8,param_2,param_3);
    puVar6 = PTR_PTR_1126b8238;
    func_0x00010bf10ca0(PTR_PTR_1126b8238,param_2,param_4,param_5,param_6,ppuVar5,param_8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dba0f8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c1d0560(puVar6,param_2,puVar3,&PTR____CFConstantStringClassReference_110dc1558);
    puVar2 = PTR_PTR_1126b8238;
    func_0x00010c136ca0(PTR_PTR_1126b8238,param_2,&PTR____CFConstantStringClassReference_110f632f8,
                        puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar6,param_2,puVar2,&PTR____CFConstantStringClassReference_110dd6978);
    _objc_release();
    func_0x000107c318f4();
    if (((ulong)puVar2 & 1) == 0) {
      iVar1 = 0x11183da0;
      func_0x00010bf4b900(&PTR__OBJC_CLASS___NSConstantArray_111183da0,param_2,param_3);
      if ((iVar1 != 0) && (func_0x00010bef7f60(puVar6,param_2,param_7), param_8 != 0)) {
        lVar4 = param_8;
        func_0x00010bf70680(param_8,param_2,puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f60(puVar6,param_2,lVar4);
        _objc_release(lVar4);
      }
    }
    _objc_release(puVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b5e0d34; end: 10b5e0efb; +[SCAPIAuth authenticationParametersForUserWithToken:username:userId:withDeviceInfo:deviceIdManager:] */

void FUN_10b5e0d34(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  int param_6,long param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110dba0f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c1d0560(puVar2,param_2,puVar4,&PTR____CFConstantStringClassReference_110dc1558);
  iVar1 = (int)puVar3;
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    puVar3 = PTR_PTR_1126b8238;
    func_0x00010c136ca0(PTR_PTR_1126b8238,param_2,param_3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110dd6978);
    _objc_release(puVar3);
    func_0x00010c1d0560(puVar2,param_2,param_4,&PTR____CFConstantStringClassReference_110daccd8);
    puVar3 = puVar2;
    func_0x00010c1d0560(puVar2,param_2,param_5,&PTR____CFConstantStringClassReference_110dd6a58);
    iVar1 = (int)puVar3;
  }
  func_0x000107c318f4();
  if (((param_7 != 0) && (param_6 != 0)) && (iVar1 == 0)) {
    lVar5 = param_7;
    func_0x00010bf70680(param_7,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar2,param_2,lVar5);
    _objc_release(lVar5);
  }
  _objc_release(puVar4);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b5e0efc; end: 10b5e108f; +[SCAPIAuth requestTokenForUserToken:timestamp:] */

void FUN_10b5e0efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110f635d8;
  func_0x00010c08fa60();
  if (ppuVar6 == (undefined **)0x0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar8 = (undefined **)0x0;
    ppuVar9 = &PTR____CFConstantStringClassReference_110daafd8;
    do {
      ppuVar7 = &PTR____CFConstantStringClassReference_110f635d8;
      func_0x00010bf35920(&PTR____CFConstantStringClassReference_110f635d8,param_2,ppuVar8);
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar1 = puVar4;
      if (((uint)ppuVar7 & 0xff) != 0x30) {
        puVar1 = puVar5;
      }
      func_0x00010bf35920(puVar1,param_2,ppuVar8);
      func_0x00010c14de00(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110f635f8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      ppuVar8 = (undefined **)((long)ppuVar8 + 1);
      ppuVar7 = &PTR____CFConstantStringClassReference_110f635d8;
      func_0x00010c08fa60();
      ppuVar9 = ppuVar6;
    } while (ppuVar8 < ppuVar7);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 10b5e1090; end: 10b5e109b; +[SCAPIAuth versionName] */

void FUN_10b5e1090(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c298c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0380,PTR_s_versionName_112683d48);
  return;
}



/* Entry: 10b5e109c; end: 10b5e10a7; +[SCAPIAuth appVersion] */

void FUN_10b5e109c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf066f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0380,PTR_s_appVersion_11259f360);
  return;
}



/* Entry: 10b5e10a8; end: 10b5e10b3; +[SCAPIAuth schemeName] */

void FUN_10b5e10a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1504f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0380,PTR_s_schemeName_112631b58);
  return;
}



/* Entry: 10b5e10b4; end: 10b5e10bf; +[SCAPIAuth appName] */

void FUN_10b5e10b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf05bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0380,PTR_s_appName_11259f090);
  return;
}



/* Entry: 10b5e10c0; end: 10b5e10d7; +[SCAPIUtil setEndpointURL:] */

void FUN_10b5e10c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1963b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b4968,PTR_s_setEndpointURL_key__112643308,param_3,
             &PTR____CFConstantStringClassReference_110f636b8);
  return;
}



/* Entry: 10b5e10d8; end: 10b5e10fb; +[SCAPIUtil snapConnectEndpointURL] */

void FUN_10b5e10d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf95e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b4968,PTR_s_endpointURLForKey_defaultURL__1125c3140,
             &PTR____CFConstantStringClassReference_110f636f8,
             &PTR____CFConstantStringClassReference_110f63698);
  return;
}



/* Entry: 10b5e10fc; end: 10b5e1113; +[SCAPIUtil setSnapConnectEndpointURL:] */

void FUN_10b5e10fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1963b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b4968,PTR_s_setEndpointURL_key__112643308,param_3,
             &PTR____CFConstantStringClassReference_110f636f8);
  return;
}



/* Entry: 10b5e1114; end: 10b5e1137; +[SCAPIUtil bitmojiDeepLinkEndpointURL] */

void FUN_10b5e1114(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf95e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b4968,PTR_s_endpointURLForKey_defaultURL__1125c3140,
             &PTR____CFConstantStringClassReference_110f636d8,
             &PTR____CFConstantStringClassReference_110f63658);
  return;
}



/* Entry: 10b5e1138; end: 10b5e114f; +[SCAPIUtil setBitmojiDeepLinkEndpointURL:] */

void FUN_10b5e1138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1963b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b4968,PTR_s_setEndpointURL_key__112643308,param_3,
             &PTR____CFConstantStringClassReference_110f636d8);
  return;
}



/* Entry: 10b5e1150; end: 10b5e1173; +[SCAPIUtil gatewayPersistenceEndpointURL] */

void FUN_10b5e1150(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf95e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b4968,PTR_s_endpointURLForKey_defaultURL__1125c3140,
             &PTR____CFConstantStringClassReference_110f63718,
             &PTR____CFConstantStringClassReference_110f620b8);
  return;
}



/* Entry: 10b5e1174; end: 10b5e118b; +[SCAPIUtil setGatewayPersistenceEndpointURL:] */

void FUN_10b5e1174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1963b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b4968,PTR_s_setEndpointURL_key__112643308,param_3,
             &PTR____CFConstantStringClassReference_110f63718);
  return;
}



/* Entry: 10b5e118c; end: 10b5e123f; +[SCAPIUtil setEndpointURL:key:] */

void FUN_10b5e118c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0b6660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14ce20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  _objc_alloc(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  func_0x00010c04f740();
  func_0x00010c1d0560();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c266b80(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b5e1240; end: 10b5e12cb; +[ContentFeatureMetadata descriptor] */

undefined * FUN_10b5e1240(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7180 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c76860,
                        &PTR____CFConstantStringClassReference_110f63738,&PTR_DAT_1133b6f28,
                        &PTR_DAT_1133b6f40,9,0x48,0x1c);
    func_0x00010c229040();
    puRam00000001137f7180 = puVar1;
  }
  return puRam00000001137f7180;
}



/* Entry: 10b5e12cc; end: 10b5e135b;  */

undefined * FUN_10b5e12cc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f7188 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f63758,
                        &UNK_10e5d15f4,&UNK_10e5d1940,0x2e,FUN_10b5e135c,0,&UNK_10e5d19f8);
    do {
      if (puRam00000001137f7188 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f7188;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f7188,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f7188 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f7188;
}



/* Entry: 10b5e135c; end: 10b5e1367;  */

bool FUN_10b5e135c(uint param_1)

{
  return param_1 < 0x2e;
}



/* Entry: 10b5e1368; end: 10b5e13cf; +[LegacyBoltResolutionMetadata descriptor] */

void FUN_10b5e1368(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7190 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c76950,
                        &PTR____CFConstantStringClassReference_110f63778,&PTR_DAT_1133b7060,
                        &PTR_s_contentId_1133b7078,3,0x18,0x1c);
    puRam00000001137f7190 = puVar1;
  }
  return;
}



/* Entry: 10b5e13d0; end: 10b5e14c7; +[LensContentArchiveMetadata descriptor] */

void FUN_10b5e13d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7198 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c769f0,
                        &PTR____CFConstantStringClassReference_110f63798,&PTR_DAT_1133b70d8,
                        &PTR_s_lensId_1133b70f0,2,0x18,0x1c);
    puRam00000001137f7198 = puVar1;
  }
  return;
}



/* Entry: 10b5e14c8; end: 10b5e14d3;  */

bool FUN_10b5e14c8(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10b5e14d4; end: 10b5e153b; +[LensStaticRemoteAssetsMetadata descriptor] */

void FUN_10b5e14d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f71a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c76a90,
                        &PTR____CFConstantStringClassReference_110f637d8,&PTR_DAT_1133b7130,
                        &PTR_DAT_1133b7148,3,0x18,0x1c);
    puRam00000001137f71a8 = puVar1;
  }
  return;
}



/* Entry: 10b5e153c; end: 10b5e1633; +[LensIconMetadata descriptor] */

undefined * FUN_10b5e153c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f71b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c76b30,
                        &PTR____CFConstantStringClassReference_110f637f8,&PTR_DAT_1133b71a8,
                        &PTR_DAT_1133b71c0,1,8,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f71b0 = puVar1;
  }
  return puRam00000001137f71b0;
}



/* Entry: 10b5e1634; end: 10b5e163f;  */

bool FUN_10b5e1634(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b5e1640; end: 10b5e16a7; +[LensBlobTransformParams descriptor] */

void FUN_10b5e1640(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f71c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c76bd0,
                        &PTR____CFConstantStringClassReference_110f63838,&PTR_DAT_1133b71f0,
                        &PTR_s_encryptionKey_1133b72a8,3,0x18,0x1c);
    puRam00000001137f71c0 = puVar1;
  }
  return;
}



/* Entry: 10b5e16a8; end: 10b5e170f; +[LensContentSignatureValidationParams descriptor] */

void FUN_10b5e16a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f71c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c76c20,
                        &PTR____CFConstantStringClassReference_110f63858,&PTR_DAT_1133b71f0,
                        &PTR_DAT_1133b7228,2,0x18,0x1c);
    puRam00000001137f71c8 = puVar1;
  }
  return;
}



/* Entry: 10b5e1710; end: 10b5e1777; +[LensContentChecksumValidationParams descriptor] */

void FUN_10b5e1710(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f71d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c76c70,
                        &PTR____CFConstantStringClassReference_110f63878,&PTR_DAT_1133b71f0,
                        &PTR_s_checksum_1133b7208,1,0x10,0x1c);
    puRam00000001137f71d0 = puVar1;
  }
  return;
}



/* Entry: 10b5e1778; end: 10b5e1803; +[LensContentTransformParams descriptor] */

undefined * FUN_10b5e1778(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f71d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c76cc0,
                        &PTR____CFConstantStringClassReference_110f63898,&PTR_DAT_1133b71f0,
                        &PTR_DAT_1133b7308,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001137f71d8 = puVar1;
  }
  return puRam00000001137f71d8;
}



/* Entry: 10b5e1804; end: 10b5e188f; +[PostDownloadTransformParams descriptor] */

undefined * FUN_10b5e1804(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f71e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c76d10,
                        &PTR____CFConstantStringClassReference_110f638b8,&PTR_DAT_1133b71f0,
                        &PTR_DAT_1133b7268,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137f71e0 = puVar1;
  }
  return puRam00000001137f71e0;
}



/* Entry: 10b5e1890; end: 10b5e18f7; +[SCLensBlobMedia descriptor] */

void FUN_10b5e1890(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f71e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c76db0,
                        &PTR____CFConstantStringClassReference_110e133f8,&PTR_DAT_1133b7368,
                        &PTR_s_id_p_1133b74e0,5,0x20,0x1c);
    puRam00000001137f71e8 = puVar1;
  }
  return;
}



/* Entry: 10b5e18f8; end: 10b5e195f; +[SCLensBlobUploadRequest descriptor] */

void FUN_10b5e18f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f71f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c76e00,
                        &PTR____CFConstantStringClassReference_110de30f8,&PTR_DAT_1133b7368,
                        &PTR_s_media_1133b7400,2,0x10,0x1c);
    puRam00000001137f71f0 = puVar1;
  }
  return;
}



/* Entry: 10b5e1960; end: 10b5e19c7; +[SCLensBlobUploadResponse descriptor] */

void FUN_10b5e1960(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f71f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c76e50,
                        &PTR____CFConstantStringClassReference_110de3118,&PTR_DAT_1133b7368,
                        &PTR_s_mediaId_1133b7380,1,0x10,0x1c);
    puRam00000001137f71f8 = puVar1;
  }
  return;
}



/* Entry: 10b5e19c8; end: 10b5e1a2f; +[SCLensBlobDownloadRequest descriptor] */

void FUN_10b5e19c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7200 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c76ea0,
                        &PTR____CFConstantStringClassReference_110f638d8,&PTR_DAT_1133b7368,
                        &PTR_s_mediaId_1133b7440,2,0x10,0x1c);
    puRam00000001137f7200 = puVar1;
  }
  return;
}



/* Entry: 10b5e1a30; end: 10b5e1a97; +[SCLensBlobDownloadResponse descriptor] */

void FUN_10b5e1a30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7208 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c76ef0,
                        &PTR____CFConstantStringClassReference_110f638f8,&PTR_DAT_1133b7368,
                        &PTR_s_mediaId_1133b7480,3,0x18,0x1c);
    puRam00000001137f7208 = puVar1;
  }
  return;
}



/* Entry: 10b5e1a98; end: 10b5e1aff; +[SCLensBlobDeleteRequest descriptor] */

void FUN_10b5e1a98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7210 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c76f40,
                        &PTR____CFConstantStringClassReference_110de31b8,&PTR_DAT_1133b7368,
                        &PTR_s_mediaId_1133b73a0,1,0x10,0x1c);
    puRam00000001137f7210 = puVar1;
  }
  return;
}



/* Entry: 10b5e1b00; end: 10b5e1b67; +[SCLensBlobDeleteResponse descriptor] */

void FUN_10b5e1b00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7218 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c76f90,
                        &PTR____CFConstantStringClassReference_110de31d8,&PTR_DAT_1133b7368,
                        &PTR_s_mediaId_1133b73c0,1,0x10,0x1c);
    puRam00000001137f7218 = puVar1;
  }
  return;
}



/* Entry: 10b5e1b68; end: 10b5e1c4b; +[SCLensBlobMediaList descriptor] */

void FUN_10b5e1b68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7220 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c76fe0,
                        &PTR____CFConstantStringClassReference_110e38438,&PTR_DAT_1133b7368,
                        &PTR_DAT_1133b73e0,1,0x10,0x1c);
    puRam00000001137f7220 = puVar1;
  }
  return;
}



/* Entry: 10b5e1c4c; end: 10b5e1c7f;  */

bool FUN_10b5e1c4c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b5e1c80; end: 10b5e1d1b; +[SCLensSelection_Criterion descriptor] */

undefined * FUN_10b5e1c80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7248 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c77120,
                        &PTR____CFConstantStringClassReference_110f63998,&PTR_DAT_1133b7588,
                        &PTR_DAT_1133b7640,0xb,0x30,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112c770d0);
    puRam00000001137f7248 = puVar1;
  }
  return puRam00000001137f7248;
}



/* Entry: 10b5e1d1c; end: 10b5e1dff; +[SCLensDataFetcherConfig descriptor] */

void FUN_10b5e1d1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7258 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c77210,
                        &PTR____CFConstantStringClassReference_110f639d8,&PTR_DAT_1133b77a0,
                        &PTR_DAT_1133b77b8,2,4,0x1c);
    puRam00000001137f7258 = puVar1;
  }
  return;
}



/* Entry: 10b5e1e00; end: 10b5e1e0b;  */

bool FUN_10b5e1e00(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 10b5e1e0c; end: 10b5e1e87;  */

undefined * FUN_10b5e1e0c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f7268 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f63a18,
                        &UNK_10e5d1c60,&UNK_10e5d1cbc,5,FUN_10b5e1e88,0);
    do {
      if (puRam00000001137f7268 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f7268;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f7268,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f7268 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f7268;
}



/* Entry: 10b5e1e88; end: 10b5e1e93;  */

bool FUN_10b5e1e88(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b5e1e94; end: 10b5e1f0f;  */

undefined * FUN_10b5e1e94(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f7270 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f63a38,
                        &UNK_10e5d1cd0,&UNK_10e5d1d04,3,FUN_10b5e1f10,0);
    do {
      if (puRam00000001137f7270 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f7270;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f7270,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f7270 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f7270;
}



/* Entry: 10b5e1f10; end: 10b5e1f1b;  */

bool FUN_10b5e1f10(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b5e1f1c; end: 10b5e1f97;  */

undefined * FUN_10b5e1f1c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f7278 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f63a58,
                        &UNK_10e5d1d10,&UNK_10e5d1d6c,4,FUN_10b5e1f98,0);
    do {
      if (puRam00000001137f7278 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f7278;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f7278,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f7278 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f7278;
}



/* Entry: 10b5e1f98; end: 10b5e1fa3;  */

bool FUN_10b5e1f98(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b5e1fa4; end: 10b5e200b; +[SCSUPPublicUserStoryKey descriptor] */

void FUN_10b5e1fa4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7280 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c772b0,
                        &PTR____CFConstantStringClassReference_110f63a78,&PTR_DAT_1133b7800,
                        &PTR_s_userId_1133b7818,1,0x10,0x1c);
    puRam00000001137f7280 = puVar1;
  }
  return;
}



/* Entry: 10b5e200c; end: 10b5e2073; +[SCSUPPublisherStoryKey descriptor] */

void FUN_10b5e200c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7288 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c77300,
                        &PTR____CFConstantStringClassReference_110f63a98,&PTR_DAT_1133b7800,
                        &PTR_s_publisherId_1133b78d8,3,0x20,0x1c);
    puRam00000001137f7288 = puVar1;
  }
  return;
}



/* Entry: 10b5e2074; end: 10b5e20db; +[SCSUPOurStoryKey descriptor] */

void FUN_10b5e2074(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7290 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c77350,
                        &PTR____CFConstantStringClassReference_110f63ab8,&PTR_DAT_1133b7800,
                        &PTR_s_storyId_1133b7938,3,0x18,0x1c);
    puRam00000001137f7290 = puVar1;
  }
  return;
}



/* Entry: 10b5e20dc; end: 10b5e2143; +[SCSUPMapTileStoryKey descriptor] */

void FUN_10b5e20dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7298 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c773a0,
                        &PTR____CFConstantStringClassReference_110f63ad8,&PTR_DAT_1133b7800,
                        &PTR_s_storyId_1133b7858,2,0x18,0x1c);
    puRam00000001137f7298 = puVar1;
  }
  return;
}



/* Entry: 10b5e2144; end: 10b5e21ab; +[SCSUPLensObjectStoryKey descriptor] */

void FUN_10b5e2144(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f72a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c773f0,
                        &PTR____CFConstantStringClassReference_110f63af8,&PTR_DAT_1133b7800,
                        &PTR_s_lensId_1133b7898,2,0x18,0x1c);
    puRam00000001137f72a0 = puVar1;
  }
  return;
}



/* Entry: 10b5e21ac; end: 10b5e2213; +[SCSUPCategoryKey descriptor] */

void FUN_10b5e21ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f72a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c77440,
                        &PTR____CFConstantStringClassReference_110f63b18,&PTR_DAT_1133b7800,
                        &PTR_DAT_1133b7838,1,8,0x1c);
    puRam00000001137f72a8 = puVar1;
  }
  return;
}



/* Entry: 10b5e2214; end: 10b5e227b; +[SCSUPSingleSnapStoryKey descriptor] */

void FUN_10b5e2214(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f72b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c77490,
                        &PTR____CFConstantStringClassReference_110f63b38,&PTR_DAT_1133b7800,
                        &PTR_s_compositeStoryId_1133b7998,3,0x20,0x1c);
    puRam00000001137f72b0 = puVar1;
  }
  return;
}



/* Entry: 10b5e227c; end: 10b5e2307; +[SCSUPActionableStoryKey descriptor] */

undefined * FUN_10b5e227c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f72b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c774e0,
                        &PTR____CFConstantStringClassReference_110f63b58,&PTR_DAT_1133b7800,
                        &PTR_DAT_1133b7b58,7,0x40,0x1c);
    func_0x00010c229040();
    puRam00000001137f72b8 = puVar1;
  }
  return puRam00000001137f72b8;
}



/* Entry: 10b5e2308; end: 10b5e236f; +[SCSUPSubscribeStoryRequest descriptor] */

void FUN_10b5e2308(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f72c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c77530,
                        &PTR____CFConstantStringClassReference_110f63b78,&PTR_DAT_1133b7800,
                        &PTR_s_userId_1133b79f8,5,0x28,0x1c);
    puRam00000001137f72c0 = puVar1;
  }
  return;
}



/* Entry: 10b5e2370; end: 10b5e23d7; +[SCSUPHideStoryRequest descriptor] */

void FUN_10b5e2370(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f72c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c77580,
                        &PTR____CFConstantStringClassReference_110f63b98,&PTR_DAT_1133b7800,
                        &PTR_s_userId_1133b7a98,6,0x28,0x1c);
    puRam00000001137f72c8 = puVar1;
  }
  return;
}



/* Entry: 10b5e23d8; end: 10b5e243f; +[SCSUPSubscribeStoryResponse descriptor] */

void FUN_10b5e23d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f72d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c775d0,
                        &PTR____CFConstantStringClassReference_110f63bb8,&PTR_DAT_1133b7800,0,0,4,
                        0x1c);
    puRam00000001137f72d0 = puVar1;
  }
  return;
}



/* Entry: 10b5e2440; end: 10b5e24a7; +[SCSUPHideStoryResponse descriptor] */

void FUN_10b5e2440(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f72d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c77620,
                        &PTR____CFConstantStringClassReference_110f63bd8,&PTR_DAT_1133b7800,0,0,4,
                        0x1c);
    puRam00000001137f72d8 = puVar1;
  }
  return;
}



/* Entry: 10b5e24a8; end: 10b5e2553; -[SCSQLitePreferencesFetcher initWithFilePath:] */

undefined1 * FUN_10b5e24a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112706550;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d5850;
    _objc_alloc();
    func_0x00010c034700();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c252980();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b5e2554; end: 10b5e26cf; -[SCSQLitePreferencesFetcher objectForKey:] */

void FUN_10b5e2554(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar5 = *(long *)(param_1 + 8);
    _objc_retain(lVar5);
    _objc_retain(lVar3);
    func_0x00010bf0a140(puVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010bf9b000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar5);
    _objc_release(puVar4);
    lVar3 = lVar1;
    func_0x00010bf529e0();
    if (lVar3 == 1) {
      lVar3 = lVar1;
      func_0x00010bfb1b60();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar3 = 0;
    }
    _objc_release(lVar1);
    lVar1 = lVar3;
    func_0x00010bf63a40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126bdbc0;
      func_0x00010c0e0260(PTR_PTR_1126bdbc0);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 10b5e26d0; end: 10b5e26ff; -[SCSQLitePreferencesFetcher .cxx_destruct] */

void FUN_10b5e26d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5e2700; end: 10b5e2743; -[SCPreferencesObservationContext dealloc] */

void FUN_10b5e2700(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c281a60();
  puStack_28 = PTR_PTR_112706558;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b5e2744; end: 10b5e277b; -[SCPreferencesObservationContext unobserve] */

void FUN_10b5e2744(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c281bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b5e277c; end: 10b5e27b3; -[SCPreferencesObservationContext .cxx_destruct] */

void FUN_10b5e277c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5e27b4; end: 10b5e2933; -[SCPreferencesObservationGraph unobserveWithKeys:observationToken:] */

void FUN_10b5e27b4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar3 = *(long *)(param_1 + 8);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          func_0x00010c12d3e0(lVar3);
          lVar5 = lVar3;
          func_0x00010bf529e0();
          if (lVar5 == 0) {
            func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8));
          }
        }
        _objc_release(lVar4);
      }
      _objc_release(lVar3);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 10b5e2934; end: 10b5e293f; -[SCPreferencesObservationGraph .cxx_destruct] */

void FUN_10b5e2934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5e2940; end: 10b5e29cf; -[SCPreferencesObserver observedKeysChanged:] */

void FUN_10b5e2940(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b5e29d0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x000107c27d8c(uVar1,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b5e29d0; end: 10b5e2b57;  */

void FUN_10b5e29d0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(lVar7);
  lVar5 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      lVar3 = *(long *)(param_1 + 0x28);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c0e00e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(uVar4);
      }
      lVar8 = lVar8 + 1;
    } while (lVar5 != lVar8);
    lVar5 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  (**(code **)(lVar5 + 0x10))(lVar5,puVar2);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x18,0);
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 8,0);
  return;
}


