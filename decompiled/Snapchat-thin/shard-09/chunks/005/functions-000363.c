/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e8d3d4; end: 106e8d513;  */

void FUN_106e8d3d4(long *param_1,long *param_2)

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
      FUN_106e8dc98();
LAB_106e8d510:
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
      if (uVar7 >> 0x3d != 0) goto LAB_106e8d510;
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



/* Entry: 106e8d514; end: 106e8d55b;  */

void FUN_106e8d514(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 106e8d55c; end: 106e8d78b; -[SCGalleryLagunaContentListenerAnnouncer removeListener:] */

void FUN_106e8d55c(long param_1,undefined8 param_2,long param_3)

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
  if (plVar6 == (long *)0x0) goto LAB_106e8d710;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_106e8d5c4;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_106e8d514(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_106e8d710;
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
LAB_106e8d5c4:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110981c90;
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
          FUN_106e8d3d4(plVar9,lVar7);
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
    FUN_106e8d514(puVar8,&plStack_90);
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
    if (plStack_78 == (long *)0x0) goto LAB_106e8d710;
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
LAB_106e8d710:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e8d78c; end: 106e8d87f; -[SCGalleryLagunaContentListenerAnnouncer didReceiveDataForContentComponent:forContent:] */

void FUN_106e8d78c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_4);
  FUN_106e8d0c8(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf790a0();
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
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106e8d880; end: 106e8d973; -[SCGalleryLagunaContentListenerAnnouncer didFinishDownloadForContentComponent:forContent:] */

void FUN_106e8d880(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_4);
  FUN_106e8d0c8(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf767e0();
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
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106e8d974; end: 106e8da67; -[SCGalleryLagunaContentListenerAnnouncer didPauseForContentComponent:forContent:] */

void FUN_106e8d974(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_4);
  FUN_106e8d0c8(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf782e0();
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
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106e8da68; end: 106e8db5b; -[SCGalleryLagunaContentListenerAnnouncer didInterruptDownloadForContentComponent:forContent:] */

void FUN_106e8da68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_4);
  FUN_106e8d0c8(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf776e0();
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
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106e8db5c; end: 106e8dc4f; -[SCGalleryLagunaContentListenerAnnouncer didCancelDownloadForContentComponent:forContent:] */

void FUN_106e8db5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_4);
  FUN_106e8d0c8(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf72c20();
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
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106e8dc50; end: 106e8dc77; -[SCGalleryLagunaContentListenerAnnouncer .cxx_destruct] */

void FUN_106e8dc50(long param_1)

{
  FUN_106e8dcac(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 106e8dc78; end: 106e8dc97; -[SCGalleryLagunaContentListenerAnnouncer .cxx_construct] */

void FUN_106e8dc78(long param_1)

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



/* Entry: 106e8dc98; end: 106e8dcab;  */

undefined * FUN_106e8dc98(void)

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



/* Entry: 106e8dcac; end: 106e8dd03;  */

long FUN_106e8dcac(long param_1)

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



/* Entry: 106e8dd04; end: 106e8dd13;  */

void FUN_106e8dd04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110981c90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106e8dd14; end: 106e8dd33;  */

void FUN_106e8dd14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110981c90;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e8dd34; end: 106e8dd9b;  */

void FUN_106e8dd34(long param_1)

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



/* Entry: 106e8dd9c; end: 106e8dd9f;  */

void FUN_106e8dd9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e8dda0; end: 106e8de93; -[SCSpectaclesContent initWithName:device:] */

undefined1 *
FUN_106e8dda0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f7a28;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    puVar3 = (undefined1 *)puVar1;
    _objc_opt_class();
    uVar2 = param_4;
    func_0x00010c15e740(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined1 **)((long)puVar1 + 0x68) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e8de94; end: 106e8debb; -[SCSpectaclesContent contentName] */

void FUN_106e8de94(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e8debc; end: 106e8df5f; -[SCSpectaclesContent isEqual:] */

undefined8 FUN_106e8debc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  _objc_opt_class(param_1);
  uVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bdc3540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bdc3540(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c071ae0(param_1);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106e8df60; end: 106e8df9b; -[SCSpectaclesContent hash] */

undefined8 FUN_106e8df60(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106e8df9c; end: 106e8dfe3; -[SCSpectaclesContent timeOfCapture] */

void FUN_106e8df9c(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e8dfe4; end: 106e8dfeb; -[SCSpectaclesContent isPausedForComponent:] */

undefined8 FUN_106e8dfe4(void)

{
  return 0;
}



/* Entry: 106e8dfec; end: 106e8e09b; -[SCSpectaclesContent _isFileDownloaded:] */

bool FUN_106e8dfec(ulong param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c074bc0();
  _objc_release(uVar3);
  _objc_release(param_1);
  lVar5 = param_3;
  func_0x00010c12a120(param_3);
  lVar6 = param_3;
  func_0x00010c09d900(param_3);
  bVar2 = lVar5 <= lVar6;
  if ((uVar4 & 1) == 0) {
    bVar2 = lVar5 == lVar6;
  }
  lVar5 = param_3;
  func_0x00010c12a120();
  _objc_release(param_3);
  bVar1 = false;
  if (0 < lVar5) {
    bVar1 = bVar2;
  }
  return bVar1;
}



/* Entry: 106e8e09c; end: 106e8e127; -[SCSpectaclesContent isDownloadCompleteForComponent:] */

undefined8 FUN_106e8e09c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = param_1;
  func_0x00010be15900(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be406e0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106e8e128; end: 106e8e273; -[SCSpectaclesContent isGenericAssetDownloadComplete] */

ulong FUN_106e8e128(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_sync_enter(param_1);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar5 = *(long *)(param_1 + 0xb8);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_100;
    do {
      lVar8 = 0;
      do {
        if (*plStack_100 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        puVar4 = *(undefined8 **)(lStack_108 + lVar8 * 8);
        uVar6 = param_1;
        func_0x00010c070de0(param_1,param_2,puVar4);
        if ((uVar6 & 1) == 0) {
          uVar6 = 0;
          goto LAB_106e8e200;
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar5;
      puVar4 = &uStack_110;
      func_0x00010bf52a60(lVar5,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  uVar6 = 1;
LAB_106e8e200:
  _objc_release(lVar5);
  _objc_sync_exit(param_1);
  uVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar6;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume(uVar2);
  _objc_retain(puVar4);
  _objc_retain(uVar2);
  _objc_sync_enter(uVar2);
  uVar6 = uVar2;
  func_0x00010be15920(uVar2,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010be406e0(uVar2,param_2,uVar6);
  _objc_release(uVar6);
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar4);
  return uVar3;
}



/* Entry: 106e8e274; end: 106e8e313; -[SCSpectaclesContent isDownloadCompleteForGenericAssetMetadata:] */

undefined8 FUN_106e8e274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = param_1;
  func_0x00010be15920(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be406e0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106e8e314; end: 106e8e36f; -[SCSpectaclesContent isSyncedForComponent:] */

undefined8 FUN_106e8e314(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = param_1;
  func_0x00010c266960(param_1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106e8e370; end: 106e8e3ab; -[SCSpectaclesContent isComponentApplicable:] */

uint FUN_106e8e370(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0x1d >> (ulong)((uint)param_3 & 0x1f);
  if (4 < param_3) {
    uVar2 = 0;
  }
  uVar3 = 0x1b >> (ulong)((uint)param_3 & 0x1f);
  if (4 < param_3) {
    uVar3 = 0;
  }
  uVar1 = 0;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = uVar3;
  }
  if (*(long *)(param_1 + 0x20) != 1) {
    uVar2 = uVar1;
  }
  return uVar2 & 1;
}



/* Entry: 106e8e3ac; end: 106e8e3bf; -[SCSpectaclesContent requiredContentComponentForTransferPersistence] */

undefined8 FUN_106e8e3ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 106e8e3c0; end: 106e8e43b; -[SCSpectaclesContent rawMetadata] */

void FUN_106e8e3c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c0cc2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cc2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c09d900();
  uVar3 = uVar1;
  func_0x00010bf63bc0(uVar1,param_2,0,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106e8e43c; end: 106e8e4a3; -[SCSpectaclesContent dataForComponent:] */

void FUN_106e8e43c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010be15900();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09d900();
  func_0x00010bf63a80(param_1,param_2,param_3,0,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106e8e4a4; end: 106e8e4ff; -[SCSpectaclesContent dataForComponent:range:] */

void FUN_106e8e4a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be15900();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf63bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e8e500; end: 106e8e53b; -[SCSpectaclesContent localSizeForComponent:] */

undefined8 FUN_106e8e500(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be15900();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c09d900();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106e8e53c; end: 106e8e577; -[SCSpectaclesContent remoteSizeForComponent:] */

undefined8 FUN_106e8e53c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be15900();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c12a120();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106e8e578; end: 106e8e5b3; -[SCSpectaclesContent localSizeForGenericAssetMetadata:] */

undefined8 FUN_106e8e578(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be15920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c09d900();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106e8e5b4; end: 106e8e5ef; -[SCSpectaclesContent remoteSizeForGenericAssetMetadata:] */

undefined8 FUN_106e8e5b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be15920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c12a120();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106e8e5f0; end: 106e8e643; -[SCSpectaclesContent _fileForGenericAssetMetadata:] */

void FUN_106e8e5f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010bf0b2c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e8e644; end: 106e8e74b; -[SCSpectaclesContent dataForGenericAssetMetadata:] */

void FUN_106e8e644(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be15920(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09d900();
  uVar2 = uVar1;
  func_0x00010bf63bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf0b760();
  _objc_release(param_3);
  if (lVar3 == 4) {
    func_0x00010bf6fd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    FUN_106eabea0(uVar2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(param_1);
  }
  else {
    uVar5 = 0;
    if (lVar3 == 3) {
      _objc_retain(uVar2);
      uVar5 = uVar2;
    }
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106e8e74c; end: 106e8e867; -[SCSpectaclesContent genericAssetMetadataWithAssetType:] */

void FUN_106e8e74c(ulong param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  ulong unaff_x21;
  undefined *puVar14;
  long lVar15;
  undefined1 *puVar16;
  long unaff_x23;
  ulong uVar17;
  ulong unaff_x24;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
  ulong uStack_160;
  long lStack_158;
  undefined *puStack_150;
  ulong uStack_148;
  undefined *puStack_140;
  ulong uStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
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
  
  puVar11 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010bfc0dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_d8;
  uVar1 = param_1;
  func_0x00010bf52a60();
  if (uVar1 != 0) {
    unaff_x23 = *plStack_110;
    unaff_x21 = uVar1;
    do {
      unaff_x24 = 0;
      do {
        if (*plStack_110 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        puVar14 = *(undefined **)(lStack_118 + unaff_x24 * 8);
        puVar2 = puVar14;
        func_0x00010bf0b760();
        if (puVar2 == param_3) {
          _objc_retain(puVar14);
          goto LAB_106e8e824;
        }
        unaff_x24 = unaff_x24 + 1;
      } while (unaff_x21 != unaff_x24);
      puVar5 = auStack_d8;
      unaff_x21 = param_1;
      puVar11 = &uStack_120;
      func_0x00010bf52a60(param_1,param_2,&uStack_120,puVar5,0x10);
    } while (unaff_x21 != 0);
  }
  puVar14 = (undefined *)0x0;
LAB_106e8e824:
  uVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar12 = &uStack_230;
    pcStack_128 = FUN_106e8e868;
    lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_160 = unaff_x24;
    lStack_158 = unaff_x23;
    puStack_150 = puVar14;
    uStack_148 = unaff_x21;
    puStack_140 = param_3;
    uStack_138 = param_1;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain(puVar5);
    func_0x00010c18c700(uVar1,param_2,puVar11);
    uVar3 = uVar1;
    func_0x00010c0c6c20();
    if ((int)uVar3 == 5) {
      uVar3 = uVar1;
      func_0x00010bf6fd20();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar3;
      func_0x00010bfd38e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar17;
      func_0x00010c0774a0();
      _objc_release(uVar17);
      _objc_release(uVar3);
      if ((uVar4 & 1) == 0) {
        func_0x00010c1c5440(uVar1,param_2,2);
      }
    }
    uVar3 = uVar1;
    func_0x00010c0cc2e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175020();
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010bfdef20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175020();
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c153040(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175020();
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c26db00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175020();
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c0fbc80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175020();
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010bfead00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175020();
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010bf038c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175020();
    _objc_release(uVar3);
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    func_0x00010bfc0d20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar13 = auStack_1e8;
    uVar1 = uVar3;
    func_0x00010bf52a60();
    if (uVar1 != 0) {
      lVar15 = *plStack_220;
      do {
        uVar17 = 0;
        do {
          if (*plStack_220 != lVar15) {
            _objc_enumerationMutation(uVar3);
          }
          func_0x00010c175020(*(undefined8 *)(lStack_228 + uVar17 * 8),param_2,puVar5);
          uVar17 = uVar17 + 1;
        } while (uVar1 != uVar17);
        puVar13 = auStack_1e8;
        uVar1 = uVar3;
        puVar12 = &uStack_230;
        func_0x00010bf52a60();
      } while (uVar1 != 0);
    }
    _objc_release(uVar3);
    _objc_release(puVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
      return;
    }
    ___stack_chk_fail();
    _objc_retain(puVar12);
    _objc_retain(puVar13);
    puVar14 = (undefined *)0x0;
    if ((puVar12 != (undefined8 *)0x0) && (puVar13 != (undefined1 *)0x0)) {
      puVar14 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                          &PTR____CFConstantStringClassReference_110e8a278);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar14;
      func_0x00010c06a520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      _objc_retain(puVar12);
      puVar6 = (undefined1 *)puVar12;
      func_0x00010c11f340(puVar12,param_2,puVar2);
      puVar16 = (undefined1 *)puVar12;
      if (puVar6 != (undefined1 *)0x7fffffffffffffff) {
        func_0x00010bfdec80(puVar5,param_2,puVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        puVar16 = puVar5;
      }
      puVar5 = puVar13;
      func_0x00010c25ce40(puVar13,param_2,puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c11f340();
      if (puVar6 == (undefined1 *)0x7fffffffffffffff) {
        func_0x00010c08fa60(puVar5);
        puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        puVar6 = puVar5;
        func_0x00010c260c80(puVar5,param_2,0,8);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c260c80(puVar5,param_2,8,4);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar5;
        func_0x00010c260c80(puVar5,param_2,0xc,4);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar5;
        func_0x00010c260c80(puVar5,param_2,0x10,4);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar5;
        func_0x00010c260c80(puVar5,param_2,0x14,0xc);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar14,param_2,&PTR____CFConstantStringClassReference_110e8a298);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
      }
      else {
        puVar14 = (undefined *)0x0;
      }
      _objc_release(puVar5);
      _objc_release(puVar16);
      _objc_release(puVar2);
    }
    _objc_release(puVar13);
    _objc_release(puVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 106e8e868; end: 106e8eafb; -[SCSpectaclesContent setupWithDevice:cache:] */

void FUN_106e8e868(ulong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar10 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c18c700(param_1,param_2,param_3);
  uVar1 = param_1;
  func_0x00010c0c6c20();
  if ((int)uVar1 == 5) {
    uVar1 = param_1;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar2;
    func_0x00010c0774a0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar14 & 1) == 0) {
      func_0x00010c1c5440(param_1,param_2,2);
    }
  }
  uVar1 = param_1;
  func_0x00010c0cc2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175020();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfdef20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175020();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c153040(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175020();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c26db00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175020();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0fbc80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175020();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfead00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175020();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf038c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175020();
  _objc_release(uVar1);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  func_0x00010bfc0d20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar11 = auStack_c8;
  uVar2 = uVar1;
  func_0x00010bf52a60();
  if (uVar2 != 0) {
    lVar12 = *plStack_100;
    do {
      uVar14 = 0;
      do {
        if (*plStack_100 != lVar12) {
          _objc_enumerationMutation(uVar1);
        }
        func_0x00010c175020(*(undefined8 *)(lStack_108 + uVar14 * 8),param_2,param_4);
        uVar14 = uVar14 + 1;
      } while (uVar2 != uVar14);
      puVar11 = auStack_c8;
      uVar2 = uVar1;
      puVar10 = &uStack_110;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  puVar15 = (undefined *)0x0;
  if ((puVar10 != (undefined8 *)0x0) && (puVar11 != (undefined1 *)0x0)) {
    puVar15 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                        &PTR____CFConstantStringClassReference_110e8a278);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar15;
    func_0x00010c06a520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_retain(puVar10);
    puVar4 = (undefined1 *)puVar10;
    func_0x00010c11f340(puVar10,param_2,puVar3);
    puVar13 = (undefined1 *)puVar10;
    if (puVar4 != (undefined1 *)0x7fffffffffffffff) {
      func_0x00010bfdec80(param_4,param_2,puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar13 = param_4;
    }
    puVar4 = puVar11;
    func_0x00010c25ce40(puVar11,param_2,puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c11f340();
    if (puVar5 == (undefined1 *)0x7fffffffffffffff) {
      func_0x00010c08fa60(puVar4);
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar5 = puVar4;
      func_0x00010c260c80(puVar4,param_2,0,8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c260c80(puVar4,param_2,8,4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010c260c80(puVar4,param_2,0xc,4);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar4;
      func_0x00010c260c80(puVar4,param_2,0x10,4);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar4;
      func_0x00010c260c80(puVar4,param_2,0x14,0xc);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar15,param_2,&PTR____CFConstantStringClassReference_110e8a298);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    else {
      puVar15 = (undefined *)0x0;
    }
    _objc_release(puVar4);
    _objc_release(puVar13);
    _objc_release(puVar3);
  }
  _objc_release(puVar11);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 106e8eafc; end: 106e8ed2f; +[SCSpectaclesContent UUIDForSerialNumber:contentName:] */

void FUN_106e8eafc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar9 = (undefined *)0x0;
  if ((param_3 != 0) && (param_4 != 0)) {
    puVar9 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                        &PTR____CFConstantStringClassReference_110e8a278);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar9;
    func_0x00010c06a520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010c11f340(param_3,param_2,puVar1);
    lVar8 = param_3;
    if (lVar2 != 0x7fffffffffffffff) {
      func_0x00010bfdec80(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      lVar8 = param_1;
    }
    lVar2 = param_4;
    func_0x00010c25ce40(param_4,param_2,lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c11f340();
    if (lVar3 == 0x7fffffffffffffff) {
      func_0x00010c08fa60(lVar2);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar3 = lVar2;
      func_0x00010c260c80(lVar2,param_2,0,8);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c260c80(lVar2,param_2,8,4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c260c80(lVar2,param_2,0xc,4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c260c80(lVar2,param_2,0x10,4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar2;
      func_0x00010c260c80(lVar2,param_2,0x14,0xc);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar9,param_2,&PTR____CFConstantStringClassReference_110e8a298);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    else {
      puVar9 = (undefined *)0x0;
    }
    _objc_release(lVar2);
    _objc_release(lVar8);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106e8ed30; end: 106e8ede7; -[SCSpectaclesContent downloadProgressForComponent:] */

float FUN_106e8ed30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar1 = param_1;
  func_0x00010be15900(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  fVar4 = 0.0;
  if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010c12a120(), lVar2 != 0)) {
    lVar2 = lVar1;
    func_0x00010c09d900(lVar1);
    lVar3 = lVar1;
    func_0x00010c12a120(lVar1);
    fVar4 = (float)lVar2 / (float)lVar3;
  }
  _objc_release(lVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return fVar4;
}



/* Entry: 106e8ede8; end: 106e8ef0f; -[SCSpectaclesContent _descriptionForComponent:] */

void FUN_106e8ede8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x00010be15900();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar2 = param_1;
    func_0x00010c06ee80(param_1,param_2,param_3);
    ppuVar4 = &PTR____CFConstantStringClassReference_110db8138;
    if ((int)lVar2 != 0) {
      func_0x00010c266960();
      ppuVar4 = &PTR____CFConstantStringClassReference_110db8118;
      if ((int)param_1 == 0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110db8138;
      }
    }
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_retain(ppuVar4);
    func_0x00010c12a120();
    func_0x00010c09d900();
    lVar2 = lVar1;
    func_0x00010c09d8e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c12a100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e8a2b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106e8ef10; end: 106e8f11f; -[SCSpectaclesContent longDescription] */

void FUN_106e8ef10(undefined8 param_1,undefined8 param_2)

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
  undefined8 uVar12;
  undefined *puVar13;
  
  puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010bf4cca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bdfaf40(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bdfaf40(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bdfaf40(param_1,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c26f500();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c299d80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x00010bdc1800();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010bf16f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar13,param_2,&PTR____CFConstantStringClassReference_110e8a2d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar12);
  _objc_release(uVar11);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106e8f120; end: 106e8f13f; +[SCSpectaclesContent componentForType:] */

undefined8 FUN_106e8f120(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0xe) {
    return *(undefined8 *)(&UNK_10ddf0ac8 + param_3 * 8);
  }
  return 1;
}



/* Entry: 106e8f140; end: 106e8f22f; +[SCSpectaclesContent hashedHexSerialNumber:] */

void FUN_106e8f140(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                      &PTR____CFConstantStringClassReference_110e8a278);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c06a520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010c11f340(param_3,param_2,puVar2);
  puVar4 = param_3;
  if (puVar1 != (undefined *)0x7fffffffffffffff) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c260c80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106e8f230; end: 106e8f66b; -[SCSpectaclesContent encodeWithCoder:] */

void FUN_106e8f230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c27dd80(param_1);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dad058);
  uVar1 = param_1;
  func_0x00010c0c5040(param_1);
  func_0x00010bf92f80(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e8a2f8);
  uVar1 = param_1;
  func_0x00010c0c6c20(param_1);
  func_0x00010bf92f80(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e8a318);
  uVar1 = param_1;
  func_0x00010c086560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dc1758);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bdc1800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e8a338);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf16f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e8a358);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf258e0(param_1);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e8a378);
  uVar1 = param_1;
  func_0x00010bfb2960(param_1);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e8a398);
  uVar1 = param_1;
  func_0x00010c0cc2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e8a3b8);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfdef20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e8a3d8);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c153040(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e8a3f8);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c26db00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e8a418);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf038c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e8a438);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfead00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e8a458);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0fbc80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e8a478);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf4cca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e8a498);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c26f500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e8a4b8);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c299d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e8a4d8);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c266960(param_1);
  func_0x00010bf92da0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e8a4f8);
  uVar1 = param_1;
  func_0x00010bdc3540(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e7e6d8);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0d2900(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e8a518);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c09ea00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dad538);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfc0dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e8a538);
  _objc_release(uVar1);
  func_0x00010bfc0d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110e8a558);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e8f66c; end: 106e8fa77; -[SCSpectaclesContent initWithCoder:] */

undefined1 * FUN_106e8f66c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 *puVar5;
  
  puVar3 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f7a28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010bf66f40();
    *(ulong *)((long)puVar3 + 0x20) = uVar4;
    puVar5 = (undefined1 *)puVar3;
    _objc_opt_class();
    uVar2 = SUB84(puVar5,0);
    func_0x00010bf66ee0(param_3);
    func_0x00010bdf8840();
    *(undefined4 *)((long)puVar3 + 0xc) = uVar2;
    uVar4 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar3 + 0x10) = (int)uVar4;
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar3 + 0x58);
    *(ulong *)((long)puVar3 + 0x58) = uVar4;
    _objc_release(uVar6);
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar3 + 0x60);
    *(ulong *)((long)puVar3 + 0x60) = uVar4;
    _objc_release(uVar6);
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar3 + 0x40);
    *(ulong *)((long)puVar3 + 0x40) = uVar4;
    _objc_release(uVar6);
    uVar4 = param_3;
    func_0x00010bf66f40();
    *(ulong *)((long)puVar3 + 0x48) = uVar4;
    uVar4 = param_3;
    func_0x00010bf66f40();
    *(ulong *)((long)puVar3 + 0x50) = uVar4;
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar3 + 0x80);
    *(ulong *)((long)puVar3 + 0x80) = uVar4;
    _objc_release(uVar6);
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar3 + 0x98);
    *(ulong *)((long)puVar3 + 0x98) = uVar4;
    _objc_release(uVar6);
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar3 + 0x90);
    *(ulong *)((long)puVar3 + 0x90) = uVar4;
    _objc_release(uVar6);
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar3 + 0x88);
    *(ulong *)((long)puVar3 + 0x88) = uVar4;
    _objc_release(uVar6);
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar3 + 0xb0);
    *(ulong *)((long)puVar3 + 0xb0) = uVar4;
    _objc_release(uVar6);
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar3 + 0xa0);
    *(ulong *)((long)puVar3 + 0xa0) = uVar4;
    _objc_release(uVar6);
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar3 + 0xa8);
    *(ulong *)((long)puVar3 + 0xa8) = uVar4;
    _objc_release(uVar6);
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar3 + 0x78);
    *(ulong *)((long)puVar3 + 0x78) = uVar4;
    _objc_release(uVar6);
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar3 + 0x28);
    *(ulong *)((long)puVar3 + 0x28) = uVar4;
    _objc_release(uVar6);
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar3 + 0x30);
    *(ulong *)((long)puVar3 + 0x30) = uVar4;
    _objc_release(uVar6);
    uVar4 = param_3;
    func_0x00010bf66ce0();
    if ((((uVar4 & 1) == 0) && (uVar4 = param_3, func_0x00010bf66ce0(), (uVar4 & 1) == 0)) &&
       (uVar4 = param_3, func_0x00010bf66ce0(), (uVar4 & 1) == 0)) {
      uVar4 = param_3;
      func_0x00010bf66ce0();
      uVar1 = (undefined1)uVar4;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)((long)puVar3 + 9) = uVar1;
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar3 + 0x68);
    *(ulong *)((long)puVar3 + 0x68) = uVar4;
    _objc_release(uVar6);
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar3 + 0x38);
    *(ulong *)((long)puVar3 + 0x38) = uVar4;
    _objc_release(uVar6);
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar3 + 0x70);
    *(ulong *)((long)puVar3 + 0x70) = uVar4;
    _objc_release(uVar6);
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar3 + 0xb8);
    *(ulong *)((long)puVar3 + 0xb8) = uVar4;
    _objc_release(uVar6);
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar3 + 0xc0);
    *(ulong *)((long)puVar3 + 0xc0) = uVar4;
    _objc_release(uVar6);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar3;
}



/* Entry: 106e8fa78; end: 106e8fac7; +[SCSpectaclesContent _decodeMediaFormat:] */

undefined8 FUN_106e8fa78(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 1) {
    if (param_3 == -0x6073f652) {
      return 3;
    }
    if (param_3 != -0x56036f34) {
      return 4;
    }
  }
  else if (param_3 != 1) {
    if (param_3 == 3) {
      return 3;
    }
    return 4;
  }
  return 1;
}



/* Entry: 106e8fac8; end: 106e8fc13; -[SCSpectaclesContent markSynced] */

void FUN_106e8fac8(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar2 = &puStack_60;
  _objc_retain();
  _objc_sync_enter(param_1);
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  *(undefined1 *)(param_1 + 9) = 1;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  lVar1 = param_1;
  func_0x00010bdd1b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106e8fc14;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock();
  lVar3 = lVar1;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  else {
    func_0x00010c12c640(PTR_PTR_1126d2f50);
  }
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar1);
  return;
}



/* Entry: 106e8fc14; end: 106e8fc9b;  */

void FUN_106e8fc14(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6ff00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf6fd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf703e0(lVar2,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e8fc9c; end: 106e8fce7; -[SCSpectaclesContent deleteContentForExport] */

void FUN_106e8fc9c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010c137620();
  func_0x00010be15900(param_1,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e8fce8; end: 106e8fd27; -[SCSpectaclesContent markCorrupted] */

void FUN_106e8fce8(undefined8 param_1)

{
  func_0x00010c0bbc00();
  func_0x00010bf6fd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12bb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e8fd28; end: 106e8fe7b; -[SCSpectaclesContent extraDiskSpaceInBytesNeededForTransferPersistence] */

undefined * FUN_106e8fd28(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
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
  
  puVar10 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010c137620();
  puVar2 = param_1;
  func_0x00010be15900(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010bf9e880();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar11 = *(long *)(param_1 + 0xb8);
  _objc_retain(lVar11);
  lVar3 = lVar11;
  func_0x00010bf52a60(lVar11,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar3 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar11);
        }
        puVar4 = param_1;
        func_0x00010be15920(param_1,param_2,*(undefined8 *)(lStack_128 + lVar13 * 8));
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf9e880();
        puVar1 = puVar5 + (long)puVar1;
        _objc_release(puVar4);
        lVar13 = lVar13 + 1;
      } while (lVar3 != lVar13);
      lVar3 = lVar11;
      puVar10 = &uStack_130;
      func_0x00010bf52a60(lVar11,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_sync_enter(puVar2);
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c070dc0(puVar2,param_2,puVar10);
  if ((int)puVar1 != 0) {
    func_0x00010befa120(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110ddf598);
  }
  puVar1 = puVar2;
  func_0x00010c06ee80(puVar2,param_2,puVar10);
  if (((int)puVar1 != 0) &&
     (puVar1 = puVar2, func_0x00010c080760(puVar2,param_2,puVar10), (int)puVar1 != 0)) {
    func_0x00010befa120(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110e53058);
  }
  ppuVar7 = ppuVar6;
  func_0x00010bf529e0();
  if (ppuVar7 == (undefined **)0x0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e8a5d8;
  }
  else {
    ppuVar7 = ppuVar6;
    func_0x00010bf446e0(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = puVar2;
  func_0x00010be15900(puVar2,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c06ef80();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)puVar5 == 0) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110e8a5f8;
  }
  else {
    puVar5 = puVar4;
    func_0x00010c09d900(puVar4);
    func_0x00010c0df780(puVar1,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar8 = puVar4;
    func_0x00010c12a120(puVar4);
    func_0x00010c0df780(puVar5,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar9,param_2,&PTR____CFConstantStringClassReference_110db2d78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dc0f98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar9);
  _objc_release(puVar4);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_sync_exit(puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 106e8fe7c; end: 106e90087; -[SCSpectaclesContent _syncedStatus:] */

void FUN_106e8fe7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c070dc0(param_1,param_2,param_3);
  if ((int)uVar2 != 0) {
    func_0x00010befa120(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110ddf598);
  }
  uVar2 = param_1;
  func_0x00010c06ee80(param_1,param_2,param_3);
  if (((int)uVar2 != 0) &&
     (uVar2 = param_1, func_0x00010c080760(param_1,param_2,param_3), (int)uVar2 != 0)) {
    func_0x00010befa120(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e53058);
  }
  ppuVar3 = ppuVar1;
  func_0x00010bf529e0();
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e8a5d8;
  }
  else {
    ppuVar3 = ppuVar1;
    func_0x00010bf446e0(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = param_1;
  func_0x00010be15900(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c06ef80();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar4 == 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e8a5f8;
  }
  else {
    uVar4 = uVar2;
    func_0x00010c09d900(uVar2);
    func_0x00010c0df780(puVar5,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar4 = uVar2;
    func_0x00010c12a120(uVar2);
    func_0x00010c0df780(puVar6,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar7,param_2,&PTR____CFConstantStringClassReference_110db2d78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dc0f98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  _objc_release(uVar2);
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106e90088; end: 106e90343; -[SCSpectaclesContent _availableFiles] */

void FUN_106e90088(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0cc2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010c0cc2e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010bfdef20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bfdef20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010c153040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010c153040(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010c0fbc80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010c0fbc80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010c26db00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010c26db00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010bf038c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bf038c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010bfead00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bfead00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010bfc0d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bfc0d20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106e90344; end: 106e90433; -[SCSpectaclesContent _fileForComponent:] */

void FUN_106e90344(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = 0;
  if (param_3 < 2) {
    if (param_3 == 0) {
      uVar1 = param_1;
      func_0x00010c26db00(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == 1) {
      uVar1 = param_1;
      func_0x00010bfdef20(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_3 == 2) {
    uVar1 = param_1;
    func_0x00010c0fbc80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 3) {
    uVar1 = param_1;
    func_0x00010bfead00(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 4) {
    uVar1 = param_1;
    func_0x00010bf038c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e90434; end: 106e9044b; -[SCSpectaclesContent device] */

void FUN_106e90434(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e9044c; end: 106e90457; -[SCSpectaclesContent setDevice:] */

void FUN_106e9044c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 106e90458; end: 106e9045f; -[SCSpectaclesContent type] */

undefined8 FUN_106e90458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e90460; end: 106e90467; -[SCSpectaclesContent setType:] */

void FUN_106e90460(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 106e90468; end: 106e9046f; -[SCSpectaclesContent mediaFormat] */

undefined4 FUN_106e90468(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 106e90470; end: 106e90477; -[SCSpectaclesContent setMediaFormat:] */

void FUN_106e90470(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 106e90478; end: 106e9047f; -[SCSpectaclesContent mediaType] */

undefined4 FUN_106e90478(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 106e90480; end: 106e90487; -[SCSpectaclesContent setMediaType:] */

void FUN_106e90480(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 106e90488; end: 106e904b7; -[SCSpectaclesContent setTimeOfCapture:] */

void FUN_106e90488(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e904b8; end: 106e904bf; -[SCSpectaclesContent videoDuration] */

undefined8 FUN_106e904b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106e904c0; end: 106e904ef; -[SCSpectaclesContent setVideoDuration:] */

void FUN_106e904c0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106e904f0; end: 106e904f7; -[SCSpectaclesContent multisnapGroupID] */

undefined8 FUN_106e904f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106e904f8; end: 106e90527; -[SCSpectaclesContent setMultisnapGroupID:] */

void FUN_106e904f8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106e90528; end: 106e9052f; -[SCSpectaclesContent batchID] */

undefined8 FUN_106e90528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106e90530; end: 106e9055f; -[SCSpectaclesContent setBatchID:] */

void FUN_106e90530(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106e90560; end: 106e90567; -[SCSpectaclesContent buttonSide] */

undefined8 FUN_106e90560(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106e90568; end: 106e9056f; -[SCSpectaclesContent setButtonSide:] */

void FUN_106e90568(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 106e90570; end: 106e90577; -[SCSpectaclesContent flightMode] */

undefined8 FUN_106e90570(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106e90578; end: 106e9057f; -[SCSpectaclesContent setFlightMode:] */

void FUN_106e90578(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 106e90580; end: 106e90587; -[SCSpectaclesContent key] */

undefined8 FUN_106e90580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106e90588; end: 106e905b7; -[SCSpectaclesContent setKey:] */

void FUN_106e90588(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e905b8; end: 106e905bf; -[SCSpectaclesContent IV] */

undefined8 FUN_106e905b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106e905c0; end: 106e905ef; -[SCSpectaclesContent setIV:] */

void FUN_106e905c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e905f0; end: 106e905f7; -[SCSpectaclesContent UUID] */

undefined8 FUN_106e905f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106e905f8; end: 106e905ff; -[SCSpectaclesContent setUUID:] */

void FUN_106e905f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106e90600; end: 106e90607; -[SCSpectaclesContent location] */

undefined8 FUN_106e90600(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106e90608; end: 106e90637; -[SCSpectaclesContent setLocation:] */

void FUN_106e90608(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e90638; end: 106e9063f; -[SCSpectaclesContent skipPersistToMemories] */

undefined1 FUN_106e90638(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e90640; end: 106e90647; -[SCSpectaclesContent setSkipPersistToMemories:] */

void FUN_106e90640(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106e90648; end: 106e9064f; -[SCSpectaclesContent internalContentName] */

undefined8 FUN_106e90648(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106e90650; end: 106e90657; -[SCSpectaclesContent setInternalContentName:] */

void FUN_106e90650(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106e90658; end: 106e9065f; -[SCSpectaclesContent metadataFile] */

undefined8 FUN_106e90658(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106e90660; end: 106e9068f; -[SCSpectaclesContent setMetadataFile:] */

void FUN_106e90660(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106e90690; end: 106e90697; -[SCSpectaclesContent thumbnailFile] */

undefined8 FUN_106e90690(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106e90698; end: 106e906c7; -[SCSpectaclesContent setThumbnailFile:] */

void FUN_106e90698(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e906c8; end: 106e906cf; -[SCSpectaclesContent sdVideoFile] */

undefined8 FUN_106e906c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 106e906d0; end: 106e906ff; -[SCSpectaclesContent setSdVideoFile:] */

void FUN_106e906d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e90700; end: 106e90707; -[SCSpectaclesContent hdVideoFile] */

undefined8 FUN_106e90700(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 106e90708; end: 106e90737; -[SCSpectaclesContent setHdVideoFile:] */

void FUN_106e90708(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e90738; end: 106e9073f; -[SCSpectaclesContent imuDataFile] */

undefined8 FUN_106e90738(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 106e90740; end: 106e9076f; -[SCSpectaclesContent setImuDataFile:] */

void FUN_106e90740(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e90770; end: 106e90777; -[SCSpectaclesContent pictureFile] */

undefined8 FUN_106e90770(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 106e90778; end: 106e907a7; -[SCSpectaclesContent setPictureFile:] */

void FUN_106e90778(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


