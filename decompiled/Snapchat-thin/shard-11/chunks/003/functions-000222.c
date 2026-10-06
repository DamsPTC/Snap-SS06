/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10842c324; end: 10842c32b; -[SCSendToListDataModel snapchatterUserIds] */

undefined8 FUN_10842c324(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10842c32c; end: 10842c333; -[SCSendToListDataModel groupIds] */

undefined8 FUN_10842c32c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10842c334; end: 10842c33b; -[SCSendToListDataModel contactCount] */

undefined8 FUN_10842c334(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10842c33c; end: 10842c343; -[SCSendToListDataModel creationTimestamp] */

undefined8 FUN_10842c33c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10842c344; end: 10842c3a3; -[SCSendToListDataModel .cxx_destruct] */

void FUN_10842c344(long param_1)

{
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



/* Entry: 10842c3a4; end: 10842c51f; -[SCSendToListsDataRequestListenerAnnouncer description] */

void FUN_10842c3a4(long param_1)

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
  
  FUN_10842c520(&plStack_60,param_1 + 0x48);
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



/* Entry: 10842c520; end: 10842c57f;  */

void FUN_10842c520(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10842c580; end: 10842c82b; -[SCSendToListsDataRequestListenerAnnouncer addListener:] */

undefined8 FUN_10842c580(long param_1,undefined8 param_2,long param_3)

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
  *plVar3 = (long)&PTR_FUN_110a485b8;
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
    FUN_10842c82c(plVar10,auStack_90);
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
    FUN_10842c96c(puVar8,&plStack_a0);
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
LAB_10842c734:
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
      goto LAB_10842c754;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_10842c82c(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_10842c82c(plVar10,auStack_78);
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
    FUN_10842c96c(puVar8,&plStack_88);
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
      goto LAB_10842c734;
    }
  }
  uVar9 = 1;
LAB_10842c754:
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



/* Entry: 10842c82c; end: 10842c96b;  */

void FUN_10842c82c(long *param_1,long *param_2)

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
      FUN_10842cd38();
LAB_10842c968:
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
      if (uVar7 >> 0x3d != 0) goto LAB_10842c968;
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



/* Entry: 10842c96c; end: 10842c9b3;  */

void FUN_10842c96c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10842c9b4; end: 10842cbe3; -[SCSendToListsDataRequestListenerAnnouncer removeListener:] */

void FUN_10842c9b4(long param_1,undefined8 param_2,long param_3)

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
  if (plVar6 == (long *)0x0) goto LAB_10842cb68;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_10842ca1c;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_10842c96c(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10842cb68;
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
LAB_10842ca1c:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110a485b8;
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
          FUN_10842c82c(plVar9,lVar7);
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
    FUN_10842c96c(puVar8,&plStack_90);
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
    if (plStack_78 == (long *)0x0) goto LAB_10842cb68;
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
LAB_10842cb68:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10842cbe4; end: 10842ccef; -[SCSendToListsDataRequestListenerAnnouncer didUpdateListsWithListDataModels:deletedListDataModels:] */

void FUN_10842cbe4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  _objc_retain(param_4);
  FUN_10842c520(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf7e3a0();
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
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10842ccf0; end: 10842cd17; -[SCSendToListsDataRequestListenerAnnouncer .cxx_destruct] */

void FUN_10842ccf0(long param_1)

{
  FUN_10842cd4c(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 10842cd18; end: 10842cd37; -[SCSendToListsDataRequestListenerAnnouncer .cxx_construct] */

void FUN_10842cd18(long param_1)

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



/* Entry: 10842cd38; end: 10842cd4b;  */

undefined * FUN_10842cd38(void)

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



/* Entry: 10842cd4c; end: 10842cda3;  */

long FUN_10842cd4c(long param_1)

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



/* Entry: 10842cda4; end: 10842cdb3;  */

void FUN_10842cda4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a485b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10842cdb4; end: 10842cdd3;  */

void FUN_10842cdb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a485b8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10842cdd4; end: 10842ce3b;  */

void FUN_10842cdd4(long param_1)

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



/* Entry: 10842ce3c; end: 10842ce3f;  */

void FUN_10842ce3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10842ce40; end: 10842ceb3; -[SCExternalShareSheetScopedOffPlatformShareOnMainCameraPreviewService initWithOffPlatformShareOnMainCameraPreviewService:] */

undefined1 * FUN_10842ce40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc7d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10842ceb4; end: 10842cebb; -[SCExternalShareSheetScopedOffPlatformShareOnMainCameraPreviewService offPlatformShareOnMainCameraPreviewService] */

undefined8 FUN_10842ceb4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10842cebc; end: 10842cec7; -[SCExternalShareSheetScopedOffPlatformShareOnMainCameraPreviewService .cxx_destruct] */

void FUN_10842cebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10842cec8; end: 10842cf6b; -[SCOffPlatformShareOnMainCameraPreviewService initWithStateFetcher:stateMutator:] */

undefined1 *
FUN_10842cec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc7e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10842cf6c; end: 10842cf73; -[SCOffPlatformShareOnMainCameraPreviewService stateFetcher] */

undefined8 FUN_10842cf6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10842cf74; end: 10842cf7b; -[SCOffPlatformShareOnMainCameraPreviewService stateMutator] */

undefined8 FUN_10842cf74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10842cf7c; end: 10842cfab; -[SCOffPlatformShareOnMainCameraPreviewService .cxx_destruct] */

void FUN_10842cf7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10842cfac; end: 10842d01f; -[SCPreviewScopedOffPlatformShareOnMainCameraPreviewService initWithOffPlatformShareOnMainCameraPreviewService:] */

undefined1 * FUN_10842cfac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc7e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10842d020; end: 10842d027; -[SCPreviewScopedOffPlatformShareOnMainCameraPreviewService offPlatformShareOnMainCameraPreviewService] */

undefined8 FUN_10842d020(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10842d028; end: 10842d033; -[SCPreviewScopedOffPlatformShareOnMainCameraPreviewService .cxx_destruct] */

void FUN_10842d028(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10842d034; end: 10842d0a7; -[SCSendToInternalScopedOffPlatformShareOnMainCameraPreviewService initWithOffPlatformShareOnMainCameraPreviewService:] */

undefined1 * FUN_10842d034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc7f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10842d0a8; end: 10842d0af; -[SCSendToInternalScopedOffPlatformShareOnMainCameraPreviewService offPlatformShareOnMainCameraPreviewService] */

undefined8 FUN_10842d0a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10842d0b0; end: 10842d0bb; -[SCSendToInternalScopedOffPlatformShareOnMainCameraPreviewService .cxx_destruct] */

void FUN_10842d0b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10842d0bc; end: 10842d12f; -[SCSendToScopedOffPlatformShareOnMainCameraPreviewService initWithOffPlatformShareOnMainCameraPreviewService:] */

undefined1 * FUN_10842d0bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc7f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10842d130; end: 10842d137; -[SCSendToScopedOffPlatformShareOnMainCameraPreviewService offPlatformShareOnMainCameraPreviewService] */

undefined8 FUN_10842d130(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10842d138; end: 10842d143; -[SCSendToScopedOffPlatformShareOnMainCameraPreviewService .cxx_destruct] */

void FUN_10842d138(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10842d144; end: 10842d1b7; -[SCQuickPostTooltipsServices initWithQuickPostTooltipsService:] */

undefined1 * FUN_10842d144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc800;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10842d1b8; end: 10842d1bf; -[SCQuickPostTooltipsServices quickPostTooltipsService] */

undefined8 FUN_10842d1b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10842d1c0; end: 10842d1cb; -[SCQuickPostTooltipsServices .cxx_destruct] */

void FUN_10842d1c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10842d1cc; end: 10842d2ef;  */

void FUN_10842d1cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  _objc_retain();
  func_0x00010842d308();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c14de00(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10842d2f0; end: 10842d31f;  */

void FUN_10842d2f0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110daccf8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110daccf8,
                      &PTR____CFConstantStringClassReference_110ed8178,0);
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



/* Entry: 10842d320; end: 10842d34f; -[SCGenerativeAIDreamsServices .cxx_destruct] */

void FUN_10842d320(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10842d350; end: 10842d3ff; -[SCGenAIDreamPrompt initWithCoder:] */

undefined1 * FUN_10842d350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc810;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10842d400; end: 10842d4ab; -[SCGenAIDreamPrompt initWithIdentifier:prompt:] */

undefined1 *
FUN_10842d400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc810;
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



/* Entry: 10842d4ac; end: 10842d4cf; -[SCGenAIDreamPrompt copyWithZone:] */

undefined8 FUN_10842d4ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10842d4d0; end: 10842d52f; -[SCGenAIDreamPrompt encodeWithCoder:] */

void FUN_10842d4d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e02c58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ed81b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10842d530; end: 10842d5a3; -[SCGenAIDreamPrompt hash] */

undefined8 * FUN_10842d530(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10842d624:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10842d630;
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
          goto LAB_10842d630;
        }
        goto LAB_10842d624;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10842d630:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10842d5a4; end: 10842d64b; -[SCGenAIDreamPrompt isEqual:] */

long FUN_10842d5a4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10842d624:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10842d630;
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
          goto LAB_10842d630;
        }
        goto LAB_10842d624;
      }
    }
    lVar3 = 0;
  }
LAB_10842d630:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10842d64c; end: 10842d653; -[SCGenAIDreamPrompt identifier] */

undefined8 FUN_10842d64c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10842d654; end: 10842d65b; -[SCGenAIDreamPrompt prompt] */

undefined8 FUN_10842d654(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10842d65c; end: 10842d68b; -[SCGenAIDreamPrompt .cxx_destruct] */

void FUN_10842d65c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10842d68c; end: 10842d7b3; -[SCGenAIDream initWithCoder:] */

undefined1 * FUN_10842d68c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc818;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10842d7b4; end: 10842d8d7; -[SCGenAIDream initWithIdentifier:name:media:hasMedia:rarity:prompts:] */

undefined1 *
FUN_10842d7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fc818;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10842d8d8; end: 10842d8fb; -[SCGenAIDream copyWithZone:] */

undefined8 FUN_10842d8d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10842d8fc; end: 10842d9ab; -[SCGenAIDream encodeWithCoder:] */

void FUN_10842d8fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e02c58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e6c918);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110eb6cd8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110ed81d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ed81f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110ed8218);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10842d9ac; end: 10842da47; -[SCGenAIDream hash] */

undefined8 * FUN_10842d9ac(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uStack_48 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10842db18:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10842db24;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) && (puVar3[5] == param_3[5])))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[6];
            if (puVar6 != (undefined8 *)param_3[6]) {
              func_0x00010c071ae0();
              goto LAB_10842db24;
            }
            goto LAB_10842db18;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10842db24:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10842da48; end: 10842db3f; -[SCGenAIDream isEqual:] */

long FUN_10842da48(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10842db18:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10842db24;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if (lVar3 != *(long *)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_10842db24;
            }
            goto LAB_10842db18;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10842db24:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10842db40; end: 10842db47; -[SCGenAIDream identifier] */

undefined8 FUN_10842db40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10842db48; end: 10842db4f; -[SCGenAIDream name] */

undefined8 FUN_10842db48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10842db50; end: 10842db57; -[SCGenAIDream media] */

undefined8 FUN_10842db50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10842db58; end: 10842db5f; -[SCGenAIDream hasMedia] */

undefined1 FUN_10842db58(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10842db60; end: 10842db67; -[SCGenAIDream rarity] */

undefined8 FUN_10842db60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10842db68; end: 10842db6f; -[SCGenAIDream prompts] */

undefined8 FUN_10842db68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10842db70; end: 10842dbb7; -[SCGenAIDream .cxx_destruct] */

void FUN_10842db70(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10842dbb8; end: 10842dcb7; -[SCGenAIDreamPack initWithCoder:] */

undefined1 * FUN_10842dbb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc820;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10842dcb8; end: 10842ddc3; -[SCGenAIDreamPack initWithIdentifier:name:media:dreams:] */

undefined1 *
FUN_10842dcb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126fc820;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10842ddc4; end: 10842dde7; -[SCGenAIDreamPack copyWithZone:] */

undefined8 FUN_10842ddc4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10842dde8; end: 10842de6f; -[SCGenAIDreamPack encodeWithCoder:] */

void FUN_10842dde8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e02c58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e6c918);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110eb6cd8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110eb4a98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10842de70; end: 10842defb; -[SCGenAIDreamPack hash] */

undefined8 * FUN_10842de70(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10842dfac:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10842dfb8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_10842dfb8;
            }
            goto LAB_10842dfac;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10842dfb8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10842defc; end: 10842dfd3; -[SCGenAIDreamPack isEqual:] */

long FUN_10842defc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10842dfac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10842dfb8;
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
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10842dfb8;
            }
            goto LAB_10842dfac;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10842dfb8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10842dfd4; end: 10842dfdb; -[SCGenAIDreamPack identifier] */

undefined8 FUN_10842dfd4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10842dfdc; end: 10842dfe3; -[SCGenAIDreamPack name] */

undefined8 FUN_10842dfdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10842dfe4; end: 10842dfeb; -[SCGenAIDreamPack media] */

undefined8 FUN_10842dfe4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10842dfec; end: 10842dff3; -[SCGenAIDreamPack dreams] */

undefined8 FUN_10842dfec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10842dff4; end: 10842e03b; -[SCGenAIDreamPack .cxx_destruct] */

void FUN_10842dff4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10842e03c; end: 10842e043; -[SCADirectSnapCreate initWithSnapCommonLoggingParams:] */

void FUN_10842e03c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c047290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithSnapCommonLoggingParams__1125ef6a0,param_3,0);
  return;
}



/* Entry: 10842e044; end: 10842efc7; -[SCADirectSnapCreate initWithSnapCommonLoggingParams:notificationId:] */

long FUN_10842e044(float param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  float fVar9;
  double dVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bfee200();
  if (param_2 == 0) goto LAB_10842ef50;
  uVar1 = param_4;
  func_0x00010c247520(param_4);
  func_0x00010c206c40(param_2,param_3,uVar1);
  uVar1 = param_4;
  func_0x00010c247a00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206f80(param_2,param_3,uVar1);
  _objc_release(uVar1);
  uVar2 = param_4;
  func_0x00010c0c6c20();
  uVar1 = uVar2 + 1;
  if (uVar1 < 0x1c) {
    if ((1L << (uVar1 & 0x3f) & 0xd8de0fdU) == 0) {
      if (uVar1 == 8) {
        uVar8 = 5;
      }
      else {
        if (uVar1 != 10) goto LAB_10842efa0;
        uVar8 = 0xe;
      }
    }
    else {
      uVar8 = 1;
      if ((uVar2 + 1 < 0x1c) && ((1L << (uVar2 + 1 & 0x3f) & 0xb4b5dbbU) != 0)) {
        if (uVar2 + 1 < 0x1b) {
          uVar8 = *(undefined8 *)(&UNK_10df2f668 + (uVar2 + 1) * 8);
        }
        else {
          uVar8 = 0;
        }
      }
    }
  }
  else {
LAB_10842efa0:
    uVar8 = 2;
  }
  func_0x00010c1c5440(param_2,param_3,uVar8);
  uVar1 = param_4;
  func_0x00010c0d2140(param_4);
  func_0x00010c1c9740(param_2,param_3,uVar1);
  func_0x00010c0c4ba0(param_4);
  dVar10 = (double)(float)(int)(param_1 * 10.0) / 10.0;
  func_0x00010c205880(dVar10,param_2);
  fVar9 = SUB84(dVar10,0);
  uVar1 = param_4;
  func_0x00010bfb2540(param_4);
  func_0x00010c19daa0(param_2,param_3,uVar1);
  uVar1 = param_4;
  func_0x00010bfb2520(param_4);
  func_0x00010c19db40(param_2,param_3,uVar1);
  uVar1 = param_4;
  func_0x00010bfd3440(param_4);
  func_0x00010c1a5460(param_2,param_3,uVar1);
  uVar1 = param_4;
  func_0x00010bfd3460(param_4);
  func_0x00010c1a54a0(param_2,param_3,uVar1);
  uVar1 = param_4;
  func_0x00010bf31200(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(param_2,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c243340(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(param_2,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf29de0(param_4);
  func_0x00010c1769e0(param_2,param_3,uVar1);
  uVar1 = param_4;
  func_0x00010bef0520(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176a60(param_2,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf6f7a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c600(param_2,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bfce300(param_4);
  func_0x00010c1a4540(param_2,param_3,uVar1);
  uVar1 = param_4;
  func_0x00010bf52740(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1844c0(param_2,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf52700(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184460(param_2,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0ce9a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8600(param_2,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf5ad40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108441b08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185860(param_2,param_3,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c096ca0(param_4);
  func_0x00010c1bcca0(param_2,param_3,uVar1);
  uVar1 = param_4;
  func_0x00010c095a20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc480(param_2,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c096b60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcc00(param_2,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c095800(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc3e0(param_2,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf09180(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcf40(param_2,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c26a320(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212740(param_2,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  FUN_108441e7c(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee3c0(param_2,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c140fc0(param_4);
  func_0x00010c1ee440(param_2,param_3,uVar1);
  uVar1 = param_4;
  func_0x00010c140f80(param_4);
  func_0x00010c1ee340(param_2,param_3,uVar1);
  uVar1 = param_4;
  func_0x00010bf29800(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176640(param_2,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c06c6a0(param_4);
  func_0x00010c1af380(param_2,param_3,uVar1);
  uVar1 = param_4;
  FUN_108441ef0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    func_0x00010c216da0(param_2,param_3,uVar1);
  }
  uVar2 = param_4;
  func_0x0001084427bc();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    func_0x00010c227b80(param_2,param_3,uVar2);
  }
  uVar3 = param_4;
  FUN_108441fa8(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8fe0(param_2,param_3,uVar3);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c1412c0(param_4);
  func_0x00010c178da0(param_2,param_3,uVar3);
  uVar3 = param_4;
  FUN_10844258c(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9480(param_2,param_3,uVar3);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c29b480();
  if (uVar3 != 0) {
    uVar3 = param_4;
    func_0x00010c29b480(param_4);
    func_0x00010c222000(param_2,param_3,uVar3);
  }
  uVar3 = param_4;
  func_0x00010c1188c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 == 0) {
    uVar3 = param_4;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 != 0) {
      uVar3 = param_4;
      func_0x00010c094540(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19c240(param_2,param_3,uVar3);
      _objc_release(uVar3);
      uVar3 = param_4;
      func_0x00010c091c60(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010b06f648();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bbee0(param_2,param_3,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar3 = param_4;
      func_0x00010bf9f120(param_4);
      func_0x00010c199b20(param_2,param_3,uVar3);
      uVar3 = param_4;
      func_0x00010bf9f040(param_4);
      func_0x00010c199a40(param_2,param_3,uVar3);
      uVar3 = param_4;
      func_0x00010c0947c0(param_4);
      func_0x00010c1bbe80(param_2,param_3,uVar3);
      uVar3 = param_4;
      func_0x00010c094800(param_4);
      func_0x00010c1bbea0(param_2,param_3,uVar3);
      uVar3 = param_4;
      func_0x00010c090320(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1baba0(param_2,param_3,uVar3);
      _objc_release(uVar3);
      uVar3 = param_4;
      func_0x00010c0915a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bb200(param_2,param_3,uVar3);
      _objc_release(uVar3);
      uVar3 = param_4;
      func_0x00010c08fda0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c208000(param_2,param_3,uVar3);
      _objc_release(uVar3);
      uVar3 = param_4;
      func_0x00010c096da0(param_4);
      func_0x00010c208420(param_2,param_3,uVar3);
    }
  }
  uVar3 = param_4;
  func_0x00010c0c6c20();
  if (uVar3 - 5 < 2) {
    func_0x00010c176040(param_2,param_3,2);
    uVar3 = param_4;
    func_0x00010c087d20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b73e0(param_2,param_3,uVar3);
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010c087b00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b7380(param_2,param_3,uVar3);
    _objc_release(uVar3);
  }
  else {
    uVar3 = param_4;
    func_0x00010bfbb160(param_4);
    func_0x00010c176040(param_2,param_3,uVar3 & 0xffffffff);
  }
  uVar3 = param_4;
  func_0x00010bf31280(param_4);
  func_0x00010c1792c0(param_2,param_3,uVar3);
  uVar3 = param_4;
  func_0x00010c2bd260(param_4);
  func_0x00010c2271c0(param_2,param_3,uVar3);
  func_0x00010c2bf3e0(param_4);
  func_0x00010c227be0(param_2);
  uVar3 = param_4;
  func_0x00010bf9d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar3 = param_4;
    func_0x00010bf9d760(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar10 = (double)fVar9;
    func_0x00010c199000(dVar10,param_2);
    fVar9 = SUB84(dVar10,0);
    _objc_release(uVar3);
  }
  uVar3 = param_4;
  func_0x00010bfb25c0(param_4);
  func_0x00010c19dbc0(param_2,param_3,uVar3);
  puVar5 = PTR_PTR_1126c4738;
  _objc_opt_new(PTR_PTR_1126c4738);
  uVar3 = param_4;
  func_0x00010c070860(param_4);
  func_0x00010c1b06a0(puVar5,param_3,uVar3);
  func_0x00010c0d1300(param_4);
  dVar10 = (double)fVar9;
  func_0x00010c1c91e0(dVar10,puVar5);
  fVar9 = SUB84(dVar10,0);
  func_0x00010c1c9180(param_2,param_3,puVar5);
  uVar3 = param_4;
  func_0x00010c0b59a0(param_4);
  func_0x00010c1c1040(param_2,param_3,uVar3);
  func_0x00010bf212c0(param_4);
  dVar10 = (double)fVar9;
  func_0x00010c173cc0(dVar10,param_2);
  fVar9 = SUB84(dVar10,0);
  uVar3 = param_4;
  func_0x00010bf29800(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176660(param_2,param_3,uVar3);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c253a00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aae0(param_2,param_3,uVar3);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c0d3a20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca440(param_2,param_3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c0d37c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca220(param_2,param_3,uVar3);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010bef0cc0(param_4);
  func_0x00010c162940(param_2,param_3,uVar3);
  uVar3 = param_4;
  func_0x00010c106d60(param_4);
  func_0x00010c1e01a0(param_2,param_3,uVar3);
  uVar3 = param_4;
  func_0x00010c089b00(param_4);
  func_0x00010c1b85a0(param_2,param_3,uVar3);
  uVar3 = param_4;
  func_0x00010c1297e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c129a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea120(param_2,param_3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126c4728;
  _objc_opt_new(PTR_PTR_1126c4728);
  uVar3 = param_4;
  func_0x00010c1297e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c129aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea1a0(puVar6,param_3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c1e9e60(param_2,param_3,puVar6);
  uVar3 = param_4;
  func_0x00010c1343c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb7e0(param_2,param_3,uVar3);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010bf4f080(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(param_2,param_3,uVar3);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c07e0a0(param_4);
  func_0x00010c1b4600(param_2,param_3,uVar3);
  uVar3 = param_4;
  func_0x00010c2b95a0(param_4);
  func_0x00010c226da0(param_2,param_3,uVar3);
  uVar3 = param_4;
  func_0x00010c0d6260(param_4);
  func_0x00010c1cb6c0(param_2,param_3,uVar3);
  uVar3 = param_4;
  func_0x00010bfba2a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19fd00(param_2,param_3,uVar3);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010bf2ae80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ffc60(param_2,param_3,uVar3);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c14f140(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f64e0(param_2,param_3,uVar3);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010bf30120(param_4);
  func_0x00010c1abc80(param_2,param_3,uVar3);
  uVar3 = param_4;
  func_0x00010c2543a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b5c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9ee0(param_2,param_3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c11fae0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    uVar3 = param_4;
    func_0x00010bf09160();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) goto LAB_10842ebe8;
    uVar3 = param_4;
    func_0x00010c096520();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) goto LAB_10842ebe8;
    uVar3 = param_4;
    func_0x00010c0922a0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) goto LAB_10842ebe8;
    uVar3 = param_4;
    func_0x00010c1188c0();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar3 != 0) || (uVar3 = param_4, func_0x00010c095a80(), uVar3 != 0xffffffffffffffff))
    goto LAB_10842ebe8;
    uVar3 = param_4;
    func_0x00010c0972c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 != 0) goto LAB_10842ebec;
  }
  else {
LAB_10842ebe8:
    _objc_release();
LAB_10842ebec:
    puVar7 = PTR_PTR_1126c4718;
    _objc_opt_new(PTR_PTR_1126c4718);
    uVar3 = param_4;
    func_0x00010c11fae0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e74c0(puVar7,param_3,uVar3);
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010c11fa40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e74e0(puVar7,param_3,uVar3);
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010bf09160(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a100(puVar7,param_3,uVar3);
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010c096520(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4da0(puVar7,param_3,uVar3);
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010c0922a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189040(puVar7,param_3,uVar3);
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010c095a80(param_4);
    func_0x00010c1bc4a0(puVar7,param_3,uVar3);
    uVar3 = param_4;
    func_0x00010c1188c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4ea0(puVar7,param_3,uVar3);
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010c0972c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcec0(puVar7,param_3,uVar3);
    _objc_release(uVar3);
    func_0x00010c1ce180(puVar7,param_3,param_5);
    func_0x00010c1bb300(param_2,param_3,puVar7);
    _objc_release(puVar7);
  }
  uVar3 = param_4;
  func_0x00010c074480();
  if ((int)uVar3 != 0) {
    puVar7 = PTR_PTR_1126d95c8;
    _objc_opt_new(PTR_PTR_1126d95c8);
    uVar3 = param_4;
    func_0x00010c120a60(param_4);
    func_0x00010c1e7b80(puVar7,param_3,uVar3);
    func_0x00010c1a1fa0(param_2,param_3,puVar7);
    _objc_release(puVar7);
  }
  uVar3 = param_4;
  func_0x00010c07fe80(param_4);
  func_0x00010c1b4b80(param_2,param_3,uVar3);
  uVar3 = param_4;
  func_0x00010bf9ca80(param_4);
  func_0x00010c198d00(param_2,param_3,uVar3);
  func_0x00010c095f40(param_4);
  func_0x00010c1768c0((double)fVar9,param_2);
  uVar3 = param_4;
  func_0x00010bf13940(param_4);
  func_0x00010c16e1e0(param_2,param_3,uVar3);
  uVar3 = param_4;
  func_0x00010c06c6a0(param_4);
  func_0x00010c1af380(param_2,param_3,uVar3);
  uVar3 = param_4;
  func_0x00010c270280(param_4);
  func_0x00010c1faa60(param_2,param_3,uVar3);
  uVar3 = param_4;
  func_0x00010c0c6840(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c52e0(param_2,param_3,uVar3);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c0b5c60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c1160(param_2,param_3,uVar3);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c247400(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206b60(param_2,param_3,uVar3);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c2b3080(param_4);
  func_0x00010c1bf7e0(param_2,param_3,uVar3);
  uVar3 = param_4;
  func_0x00010c0765c0(param_4);
  func_0x00010c1b22e0(param_2,param_3,uVar3);
  uVar3 = param_4;
  func_0x00010c094de0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc180(param_2,param_3,uVar3);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010bfb75c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f820(param_2,param_3,uVar3);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c06f5c0(param_4);
  func_0x00010c1b0260(param_2,param_3,uVar3);
  uVar3 = param_4;
  func_0x00010c27c4a0(param_4);
  func_0x00010c21a480(param_2,param_3,uVar3);
  uVar3 = param_4;
  func_0x00010c07e5e0(param_4);
  func_0x00010c1b4700(param_2,param_3,uVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_10842ef50:
  _objc_release(param_5);
  _objc_release(param_4);
  return param_2;
}



/* Entry: 10842efc8; end: 10843075f; -[SCSnapCommonLoggingParamsBuilder updateWithLensLogger:configuration:locationPermissionsManager:] */

void FUN_10842efc8(double param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_5;
  func_0x00010c243320(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b9740(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf311e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa1c0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c096b40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2c80(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c074480(param_5);
  func_0x00010c2b0a00(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c120a60(param_5);
  func_0x00010c2b6880(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bf09180(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8720(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf09160(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8700(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c091b80(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1185e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2bc0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c091b80(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf62d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf62d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b27a0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0977c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (uVar1 != 0) {
    uVar1 = param_5;
    func_0x00010c0977c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06eda0();
    func_0x00010c0df6e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2be0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar1);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar1 = param_5;
    func_0x00010c0977c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27d4a0();
    func_0x00010c0df880(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2c00(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar1);
  }
  uVar1 = param_5;
  func_0x00010c0811c0();
  uVar2 = param_5;
  if (((uVar1 & 1) == 0) && (uVar1 = param_5, func_0x00010c070a20(), (int)uVar1 == 0)) {
    uVar1 = param_5;
    func_0x00010c06d080();
    if ((int)uVar1 != 0) {
      func_0x00010bf167e0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10842f2dc;
    }
    uVar1 = param_5;
    func_0x00010c243320();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c08fa60();
    if (uVar2 == 0) {
      uVar2 = param_4;
      func_0x00010c096b60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar1);
      if (uVar2 != 0) {
        uVar1 = param_4;
        func_0x00010c096b60(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b9740(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        goto LAB_10842f504;
      }
    }
    else {
LAB_10842f504:
      _objc_release(uVar1);
    }
    func_0x00010bf998a0(param_5);
    dVar10 = (double)(ulong)(uint)(float)param_1;
    func_0x00010c2b3780(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    func_0x00010c26fea0();
    _objc_retainAutoreleasedReturnValue();
LAB_10842f2dc:
    uVar1 = uVar2;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar2);
    if (uVar3 == 0) {
      pcStack_88 = (code *)0x0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      puStack_98 = (undefined8 *)0x0;
      uStack_a0 = 0;
    }
    else {
      func_0x00010bf4d840(&uStack_a0,uVar3);
    }
    uStack_b8 = uStack_80;
    dStack_c0 = (double)pcStack_88;
    uStack_b0 = uStack_78;
    pcVar9 = pcStack_88;
    _CMTimeGetSeconds(&dStack_c0);
    dVar10 = (double)(ulong)(uint)(float)(double)pcVar9;
    func_0x00010c2b3780(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  uVar1 = param_5;
  func_0x00010c075080();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_5;
    func_0x00010c06d080();
    if ((int)uVar1 != 0) {
      uVar1 = param_5;
      func_0x00010bf167e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c083320();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar5 == 0) goto LAB_10842f530;
    }
    uVar1 = param_5;
    func_0x00010bf291a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf29820();
    func_0x00010c2a9d60(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c0d2100(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c2b4160(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010bf0f7a0();
    if ((int)uVar1 != 0) {
      func_0x00010c083a80();
    }
  }
LAB_10842f530:
  func_0x00010c2b3b00(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c0811c0();
  if (((((uVar1 & 1) == 0) && (uVar1 = param_5, func_0x00010c070a20(), (uVar1 & 1) == 0)) &&
      (uVar1 = param_5, func_0x00010c06d080(), (uVar1 & 1) == 0)) &&
     ((uVar1 = param_5, func_0x00010c07e620(), (uVar1 & 1) != 0 ||
      (uVar1 = param_5, func_0x00010c07e940(), (int)uVar1 != 0)))) {
    uVar1 = param_5;
    func_0x00010bf311e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aa1c0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b5960();
  func_0x00010c2b33e0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c070860();
  func_0x00010c2b05e0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d1300();
  func_0x00010c2b4120(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b59a0();
  func_0x00010c2b3400(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf212c0();
  dVar10 = (double)(ulong)(uint)(float)dVar10;
  func_0x00010c2a9940(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c242400(param_5);
  func_0x00010c2b9b80(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c2440e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b160();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  dVar11 = 60.0;
  if (60.0 < dVar10) {
    uVar1 = param_5;
    func_0x00010c2440e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b160();
    func_0x00010c0df720(dVar11 * 1000.0,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b3c20(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = param_5;
  func_0x00010c131e40(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f1d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b9bc0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c116000(param_5);
  func_0x00010c2b61a0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bfbabe0(param_5);
  func_0x00010c2ae900(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2540();
  func_0x00010c2ae380(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2520();
  func_0x00010c2ae360(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf29de0();
  func_0x00010c2a9da0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfce300();
  func_0x00010c2aef20(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bfd3440(param_5);
  func_0x00010c2af040(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06c6a0();
  func_0x00010c2b01e0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c078020();
  if ((int)uVar1 == 0) {
    func_0x00010c2b0ee0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2b0ee0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = param_5;
    func_0x00010c0d1cc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaf040();
    func_0x00010c2ae200(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  uVar1 = param_5;
  func_0x00010c131e40(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1322e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c2b6e20(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c2872a0(param_2);
  uVar1 = param_5;
  func_0x00010bf5aac0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b9f40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c23faa0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b99a0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar6 = param_6;
  func_0x00010c269d40(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c076e40();
  func_0x00010c2bcfc0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar1 = param_5;
  func_0x00010bfbacc0();
  uVar2 = param_5;
  func_0x00010c131e40(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1322e0();
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar1 == 0) {
    func_0x00010c2ab280(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2b4060();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar1 = param_5;
  func_0x00010c131e40(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1322c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ab260(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c07e920();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar1 != 0) {
    uVar1 = param_5;
    func_0x00010c2440e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2917c0();
    func_0x00010b5f57a8();
    func_0x00010c0df780(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b3cc0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  func_0x00010c274940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  if (uVar2 != 0) {
    uVar2 = param_4;
    func_0x00010c274960();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08fa60();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (uVar3 == 0) goto LAB_10842fc4c;
    uVar1 = param_4;
    func_0x00010c274940(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bb6c0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_4;
    func_0x00010c274960(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bb6e0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
LAB_10842fc4c:
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf31280();
  func_0x00010c2aa1e0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd260();
  func_0x00010c2bd180(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bf3e0();
  func_0x00010c2bd280(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9d760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad8a0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07e0a0();
  func_0x00010c2b1580(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c073e40(param_5);
  func_0x00010c2bd0c0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010bf3f860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_5;
    func_0x00010bf3f860(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf3f880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba0e0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  lVar7 = param_2;
  func_0x00010be61840();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c277e80();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar8 != 0) {
    func_0x00010c277e80(lVar7);
    func_0x00010c0df880(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b43a0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  uVar1 = param_5;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c129a00();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    uVar3 = param_5;
    func_0x00010c129720();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c247b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  else {
    _objc_retain(uVar2);
    uVar5 = uVar2;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c129640();
  if (uVar2 == 0) {
    uVar3 = param_5;
    func_0x00010c129720(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c129640();
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  if (uVar5 != 0) {
    puVar4 = PTR_PTR_1126c4540;
    _objc_alloc(PTR_PTR_1126c4540);
    FUN_108431fe4(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03de80(puVar4);
    _objc_release(uVar2);
    func_0x00010c2b6be0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  uVar1 = param_5;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4f080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  if (uVar2 != 0) {
    uVar1 = param_5;
    func_0x00010c131e40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf4f080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ab080(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = param_5;
  func_0x00010bf4f080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  if (uVar2 != 0) {
    uVar1 = param_5;
    func_0x00010bf4f080(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ab080(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  uVar1 = param_5;
  func_0x00010c131e40(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfba2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ae7c0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c07eb40(param_5);
  func_0x00010c2bd120(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c070d40();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_5;
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c073a40();
    _objc_release(uVar1);
  }
  func_0x00010c2b44e0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010bf291a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb2540();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_5;
    func_0x00010bf291a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c140fe0();
    func_0x00010c2b75a0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010bf291a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c141100();
    func_0x00010c2b75c0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c140fc0();
  func_0x00010c2b7580(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c140f80();
  func_0x00010c2b7560(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf29800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a9d40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c273500();
  func_0x00010c2bb420(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c273520();
  func_0x00010c2bb440(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c273560();
  func_0x00010c2bb460(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c273580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bb480(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123e80();
  func_0x00010c2b6a60(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1412c0();
  func_0x00010c2b75e0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29b480();
  func_0x00010c2bc7a0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c095f40();
  func_0x00010c2b2b40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf13940();
  func_0x00010c2a9020(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2bf140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd220(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c105cc0();
  func_0x00010c2b5940(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bf240();
  func_0x00010c2bd240(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf316a0();
  func_0x00010c2aa280(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06f5c0();
  func_0x00010c2b0460(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef0cc0();
  func_0x00010c2a7720(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106d60();
  func_0x00010c2b5a60(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf291a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c089b00();
  func_0x00010c2b2220(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_108430760;
  uStack_80 = 0x108430770;
  uStack_78 = 0;
  uVar1 = param_5;
  func_0x00010c096a60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf660();
  _objc_release(uVar1);
  func_0x00010c2b6320(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c07b9c0();
  if ((int)uVar1 != 0) {
    func_0x00010c2b1260(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = param_5;
    func_0x00010c11e4a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c26b120();
    _objc_release(uVar1);
    if (uVar2 != 0xffffffffffffffff) {
      uVar1 = param_5;
      func_0x00010c11e4a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26b120();
      func_0x00010c2bae40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar1);
    }
  }
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(uVar5);
  _objc_release(lVar7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108430760; end: 108430777;  */

void FUN_108430760(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108430778; end: 1084307af;  */

void FUN_108430778(long param_1,undefined8 param_2)

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



/* Entry: 1084307b0; end: 108430ffb; -[SCSnapCommonLoggingParamsBuilder updateLensDataWithConfiguration:] */

void FUN_1084307b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined *puVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c2b2740(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2af2c0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c09a760(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4a200(param_1);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c070a20();
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010c09a760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 != 0) {
      uVar2 = param_3;
      func_0x00010c09a760(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      goto LAB_108430ae0;
    }
  }
  else {
    uVar4 = param_3;
    func_0x00010c26fea0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = uVar2;
    func_0x00010bf529e0();
    if (uVar4 != 0) {
      uVar4 = param_3;
      func_0x00010c09a760();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar4);
      puVar6 = PTR_PTR_1126b13a0;
      if (uVar5 == 0) {
        puVar6 = PTR_PTR_1126b0820;
        _objc_opt_new(PTR_PTR_1126b0820);
        uVar4 = uVar2;
        func_0x00010c089820(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b2880(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar4);
        puVar13 = PTR_PTR_1126b13a0;
        _objc_opt_new(PTR_PTR_1126b13a0);
        puVar7 = puVar6;
        func_0x00010bf21f60(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b2620(puVar13);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar7);
        func_0x00010c2b2ca0(puVar13);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c2bb2a0(puVar13);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar7 = puVar13;
        func_0x00010bf21f60(puVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(puVar7);
      }
      else {
        uVar4 = param_3;
        func_0x00010c09a760(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c091c20(puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        func_0x00010c2bb2a0(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar13 = puVar6;
        func_0x00010bf21f60(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
      }
      _objc_release(puVar13);
      _objc_release(puVar6);
      uVar4 = param_3;
      func_0x00010c26fea0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf4b980();
      _objc_release(uVar4);
      if ((int)uVar5 != 0) {
        uVar4 = uVar2;
        func_0x00010bfb1920(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b2880(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar4);
      }
    }
LAB_108430ae0:
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c1115c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c1115c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  puVar6 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar6 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      uVar8 = *(undefined8 *)((long)puVar13 * 8);
      func_0x00010c08fb40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bfd76a0();
      if ((uVar4 & 1) == 0) {
        func_0x00010c0745e0(uVar8);
      }
      func_0x00010c2af2c0(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar8);
      puVar13 = puVar13 + 1;
    } while (puVar6 != puVar13);
    puVar6 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  uVar4 = uVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) goto LAB_108430d94;
  uVar4 = param_3;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010b5f7abc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = uVar9;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 == 0) {
    uVar4 = param_3;
    func_0x00010c070a20();
    if ((uVar4 & 1) == 0) {
      uVar4 = param_3;
      func_0x00010c0b3a60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0b4ca0();
      if (0 < (long)uVar5) {
        uVar5 = param_3;
        func_0x00010c09a760();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar5;
        func_0x00010c08fb40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar5);
        _objc_release(uVar4);
        if (uVar10 != 0) goto LAB_108430d8c;
        uVar5 = param_3;
        func_0x00010c26fea0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar5;
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar10;
        func_0x00010c0b8620();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        _objc_release(uVar5);
        uVar5 = param_3;
        func_0x00010c0b3a60(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b2880(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar5);
        func_0x00010c2b2ca0(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar5 = param_3;
        func_0x00010c0b3a60(param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(uVar4);
        puVar6 = PTR_PTR_1126b0820;
        _objc_opt_new(PTR_PTR_1126b0820);
        func_0x00010c2b2880();
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c2bbd20(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar13 = PTR_PTR_1126b13a0;
        _objc_opt_new(PTR_PTR_1126b13a0);
        puVar7 = puVar6;
        func_0x00010bf21f60(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b2620(puVar13);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar7);
        func_0x00010c2b2ca0(puVar13);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c2b2680(puVar13);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c2b28e0(puVar13);
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar10 = uVar4;
        func_0x00010bf529e0();
        if (uVar10 != 0) {
          func_0x00010c2bb2a0(puVar13);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        puVar7 = puVar13;
        func_0x00010bf21f60(puVar13);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        _objc_release(puVar6);
        _objc_release(uVar4);
        func_0x00010befa120(puVar3);
        _objc_release(puVar7);
        _objc_release(uVar5);
      }
      goto LAB_108430d18;
    }
  }
  else {
    uVar4 = uVar9;
    func_0x00010bf8a7e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2acb00(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar9;
    func_0x00010bf8a400(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2acae0(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar9;
    func_0x00010c094540(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2880(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
LAB_108430d18:
    _objc_release(uVar4);
  }
LAB_108430d8c:
  _objc_release(uVar9);
LAB_108430d94:
  puVar6 = puVar3;
  func_0x00010bf51e00(puVar3);
  ppuVar11 = &PTR___NSConcreteGlobalBlock_110a48d80;
  puVar13 = puVar6;
  func_0x000100504554();
  _objc_release(puVar6);
  func_0x00010c2b2740(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bef0a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(ppuVar11,PTR_s_activeLensID_112599c40);
  return;
}



/* Entry: 108430ffc; end: 10843100b;  */

void FUN_108430ffc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef0a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_activeLensID_112599c40);
  return;
}



/* Entry: 10843100c; end: 108431103; -[SCSnapCommonLoggingParamsBuilder updateCameraShortcutInfoWithConfiguration:] */

void FUN_10843100c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c242400();
  if (lVar1 != 8) {
    lVar1 = param_3;
    func_0x00010c242400(param_3);
    func_0x00010c2b9b80(param_1,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = param_3;
  func_0x00010bf2ae60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf2ae60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a9ec0(param_1,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c14f120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c14f120(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b79a0(param_1,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108431104; end: 108431607; -[SCSnapCommonLoggingParamsBuilder _legacyUpdateLensDataWithConfiguration:] */

void FUN_108431104(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2880(param_1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c13b280(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5fe00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bdc3360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b26c0(param_1,param_2,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c07f200(lVar1);
  func_0x00010c2af500(param_1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0745e0(lVar1);
  func_0x00010c2af2c0(param_1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf93ae0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad240(param_1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c095a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2ac0(param_1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c095a80(param_3);
  func_0x00010c2b2ae0(param_1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf9f040(param_3);
  func_0x00010c2ad9e0(param_1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf9f120(param_3);
  func_0x00010c2ada00(param_1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c094800(param_3);
  func_0x00010c2b28e0(param_1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0947c0(param_3);
  func_0x00010c2b28c0(param_1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010be4bd80(param_1,param_2,param_3);
  func_0x00010c2b2ca0(param_1,param_2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae6a8;
  lVar2 = lVar1;
  func_0x00010c27dd80(lVar1);
  func_0x00010c097840(puVar6,param_2,lVar2);
  func_0x00010c2b2d60(param_1,param_2,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d53e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2aa0(param_1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c24a2a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2660(param_1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c24ab40(lVar1);
  func_0x00010c2b2cc0(param_1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c11fae0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar4 = param_3;
    func_0x00010c096600(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b6760(param_1,param_2,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  else {
    func_0x00010c2b6760(param_1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c2813a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c11fa40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b6740(param_1,param_2,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c092b80(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2820(param_1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c26a320(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bad80(param_1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0972c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2d20(param_1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bfb75c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ae680(param_1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c0915a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  _objc_release(lVar2);
  if (0 < lVar3) {
    lVar2 = lVar1;
    func_0x00010c0915a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2700(param_1,param_2,lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  lVar2 = lVar1;
  func_0x00010c096d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = lVar1;
    func_0x00010c096d00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9bc0(param_1,param_2,lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108431608; end: 1084316cb; -[SCSnapCommonLoggingParamsBuilder updateCameraModesWithConfiguration:] */

void FUN_108431608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bef0520(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a76a0(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf6f7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac340(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0c6840(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2b3a40(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084316cc; end: 1084317ff; -[SCSnapCommonLoggingParamsBuilder updateSnapCreateMetricsWithConfiguration:] */

void FUN_1084316cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c134300();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1343c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010c2b7060(param_1,param_2,lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = param_3;
  func_0x00010c0956e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c0956e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c277e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b3440(param_1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c0956e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c277e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9b00(param_1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108431800; end: 108431943; -[SCSnapCommonLoggingParamsBuilder updateStoryDestinationInfoWithDidSentToMyStory:isSentToSpotlight:isSentToSnapMap:isSentAsGroupCustomStory:isSentAsPublicStory:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:] */

void FUN_108431800(undefined8 param_1,undefined8 param_2,uint param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10)

{
  ulong uVar1;
  
  func_0x00010c2bd000(param_1,param_2,param_3 | param_7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bcfe0(param_1,param_2,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bd140(param_1,param_2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bcfa0(param_1,param_2,param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bd160(param_1,param_2,
                      param_7 | (uint)param_6 | (uint)param_4 | param_3 | (uint)param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bd080(param_1,param_2,param_8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bcf60(param_1,param_2,(undefined1)param_10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bd0a0(param_1,param_2,param_10._1_1_);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bd040(param_1,param_2,param_9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = 1;
  if ((uint)param_4 != 0) {
    uVar1 = 2;
  }
  if ((uint)param_5 == 0) {
    uVar1 = param_4 & 0xffffffff;
  }
  func_0x00010c2b8660(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 108431944; end: 1084319e3; -[SCSnapCommonLoggingParamsBuilder updateStreakRestoreInfoWithConfiguration:] */

void FUN_108431944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c131bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcaa0();
  _objc_release(param_3);
  return;
}



/* Entry: 1084319e4; end: 108431a57;  */

void FUN_1084319e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c2b1740(uVar2,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_3;
  func_0x00010c25be80(param_3);
  _objc_release(param_3);
  func_0x00010c2ad840(uVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 108431a58; end: 108431b7f; -[SCSnapCommonLoggingParamsBuilder updateReplyCtaWithConfiguration:] */

void FUN_108431a58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0xffffffffffffffff;
  uVar1 = param_3;
  func_0x00010c131bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcaa0();
  _objc_release(uVar1);
  func_0x00010c2b6e80(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return;
}



/* Entry: 108431b80; end: 108431bdf;  */

void FUN_108431b80(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c243400();
  if ((param_2 == 1) && (uVar1 = param_3, func_0x00010c07c4e0(), (int)uVar1 != 0)) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108431be0; end: 108431c1b;  */

void FUN_108431be0(long param_1,long param_2)

{
  func_0x00010c243400();
  if (param_2 == 1) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 108431c1c; end: 108431d43; -[SCSnapCommonLoggingParamsBuilder updateInChatSourceWithConfiguration:] */

void FUN_108431c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0xffffffffffffffff;
  uVar1 = param_3;
  func_0x00010c131bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcaa0();
  _objc_release(uVar1);
  func_0x00010c2afbc0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return;
}



/* Entry: 108431d44; end: 108431df7;  */

void FUN_108431d44(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c243400();
  if ((lVar1 == 3) && (lVar1 = param_2, func_0x00010c0d6ca0(), lVar1 == 5)) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108431df8; end: 108431f0f; -[SCSnapCommonLoggingParamsBuilder _lensSourceFromLensConfiguration:] */

undefined * FUN_108431df8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010c096ca0();
  if (puVar2 == (undefined *)0x20) {
    puVar2 = param_3;
    func_0x00010bf2a040();
    if (puVar2 == (undefined *)0x1d) {
      puVar2 = (undefined *)0x21;
    }
    else {
      puVar2 = param_3;
      func_0x00010bf2a040();
      if (puVar2 == (undefined *)0x1e) {
        puVar2 = (undefined *)0x22;
      }
      else {
        puVar2 = param_3;
        func_0x00010bf2a040();
        if (puVar2 == (undefined *)0x1f) {
          puVar2 = (undefined *)0x23;
        }
        else {
          puVar1 = param_3;
          func_0x00010bf2a040();
          puVar2 = (undefined *)0x28;
          if (puVar1 != (undefined *)0x21) {
            puVar2 = (undefined *)0xffffffffffffffff;
          }
        }
      }
    }
  }
  else {
    puVar2 = param_3;
    func_0x00010c096ca0();
    if (((puVar2 == (undefined *)0xffffffffffffffff) ||
        (puVar2 = param_3, func_0x00010c096ca0(), puVar2 == (undefined *)0x0)) ||
       (puVar2 = param_3, func_0x00010c096ca0(), puVar2 == (undefined *)0x1)) {
      puVar2 = PTR_PTR_1126ae6a8;
      puVar1 = param_3;
      func_0x00010c08fde0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c096ce0(puVar2,param_2,puVar1);
      _objc_release(puVar1);
    }
    else {
      puVar2 = param_3;
      func_0x00010c096ca0(param_3);
    }
  }
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 108431f10; end: 108431fe3; -[SCSnapCommonLoggingParamsBuilder _musicSelectionFromPreviewConfig:] */

void FUN_108431f10(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c0d32a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar3 = param_3;
    func_0x00010bf16100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      lVar3 = 0;
      goto LAB_108431fc0;
    }
  }
  else {
    _objc_release();
  }
  lVar1 = param_3;
  func_0x00010c0d32a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_3;
    func_0x00010bf16100(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    lVar3 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_108431fc0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108431fe4; end: 108432007;  */

undefined ** FUN_108431fe4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ed8238;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ed8258;
  if (param_1 != 2) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 108432008; end: 10843221f; -[SCContextMentionEducationDialog initWithOnUserTapBlock:accessoryView:] */

undefined8 * FUN_108432008(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aed70;
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x0001084352f8();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108432220;
  puStack_88 = &UNK_11084e500;
  _objc_retain(param_3);
  lStack_80 = param_3;
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000108435310();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar5;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x108432234;
  puStack_b0 = &UNK_11084e500;
  lStack_a8 = param_3;
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x0001084352c8();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x0001084352e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar2;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = PTR_PTR_1126fc828;
  puVar6 = &uStack_d8;
  puVar7 = PTR_s_initWithAccessoryView_title_dial_1125d9968;
  uStack_d8 = param_1;
  _objc_msgSendSuper2(puVar6,PTR_s_initWithAccessoryView_title_dial_1125d9968,param_4,uVar1,uVar4,0,
                      puVar5);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(lStack_a8);
  _objc_release(puVar2);
  _objc_release(lStack_80);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar6;
  }
  ___stack_chk_fail();
  puVar6 = *(undefined8 **)(param_3 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000108432230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)puVar6[2])(puVar6,1,puVar7);
  return puVar6;
}



/* Entry: 108432220; end: 108432247;  */

void FUN_108432220(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000108432230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,param_2);
  return;
}



/* Entry: 108432248; end: 108432313; -[SCContextMentionEducationDialogSimpleLauncher initWithUIContainer:featureSettingsService:onDemandResourceDownloader:] */

undefined1 *
FUN_108432248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fc830;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


