/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105843264; end: 10584328f; -[SCMapPersonLocationsProviderObserver .cxx_destruct] */

void FUN_105843264(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105843290; end: 1058436ff;  */

void FUN_105843290(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(param_1);
      }
      lVar4 = *(long *)(lVar17 * 8);
      func_0x00010c0fa5e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar5 != 0) {
        lVar15 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar4);
          }
          lVar14 = *(long *)(lVar15 * 8);
          lVar6 = lVar14;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c08fa60();
          _objc_release(lVar6);
          if (lVar7 != 0) {
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar2);
            _objc_release(lVar14);
          }
          lVar15 = lVar15 + 1;
        } while (lVar5 != lVar15);
        lVar5 = lVar4;
        func_0x00010bf52a60();
      }
      _objc_release(lVar4);
      lVar17 = lVar17 + 1;
    } while (lVar17 != lVar3);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar8 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(param_2);
    puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retain(param_2);
    uVar9 = param_2;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (uVar9 != 0) {
      uVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(param_2);
        }
        uVar10 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = param_1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if ((lVar12 == 0) || (uVar11 = uVar10, func_0x00010c071ae0(), (uVar11 & 1) == 0)) {
          func_0x00010befa120(puVar8);
        }
        _objc_release(lVar12);
        _objc_release(uVar10);
        uVar16 = uVar16 + 1;
      } while (uVar9 != uVar16);
      uVar9 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    _objc_retain(param_1);
    lVar3 = param_1;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(param_1);
        }
        uVar9 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar9 == 0) {
          func_0x00010befa120(puVar8);
        }
        _objc_release(uVar9);
        lVar17 = lVar17 + 1;
      } while (lVar3 != lVar17);
      lVar3 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
    _objc_release(param_2);
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
      ___stack_chk_fail();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105843700; end: 105843703;  */

void FUN_105843700(void)

{
  return;
}



/* Entry: 105843704; end: 10584387f; -[SCFriendLocationsListenerAnnouncer description] */

void FUN_105843704(long param_1)

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
  
  FUN_105843880(&plStack_60,param_1 + 0x48);
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



/* Entry: 105843880; end: 1058438df;  */

void FUN_105843880(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1058438e0; end: 105843b8b; -[SCFriendLocationsListenerAnnouncer addListener:] */

undefined8 FUN_1058438e0(long param_1,undefined8 param_2,long param_3)

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
  *plVar3 = (long)&PTR_FUN_1108b7500;
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
    FUN_105843b8c(plVar10,auStack_90);
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
    FUN_105843ccc(puVar8,&plStack_a0);
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
LAB_105843a94:
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
      goto LAB_105843ab4;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_105843b8c(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_105843b8c(plVar10,auStack_78);
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
    FUN_105843ccc(puVar8,&plStack_88);
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
      goto LAB_105843a94;
    }
  }
  uVar9 = 1;
LAB_105843ab4:
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



/* Entry: 105843b8c; end: 105843ccb;  */

void FUN_105843b8c(long *param_1,long *param_2)

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
      FUN_1058443ec();
LAB_105843cc8:
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
      if (uVar7 >> 0x3d != 0) goto LAB_105843cc8;
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



/* Entry: 105843ccc; end: 105843d13;  */

void FUN_105843ccc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 105843d14; end: 105843f43; -[SCFriendLocationsListenerAnnouncer removeListener:] */

void FUN_105843d14(long param_1,undefined8 param_2,long param_3)

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
  if (plVar6 == (long *)0x0) goto LAB_105843ec8;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_105843d7c;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_105843ccc(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_105843ec8;
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
LAB_105843d7c:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_1108b7500;
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
          FUN_105843b8c(plVar9,lVar7);
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
    FUN_105843ccc(puVar8,&plStack_90);
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
    if (plStack_78 == (long *)0x0) goto LAB_105843ec8;
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
LAB_105843ec8:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105843f44; end: 10584406b; -[SCFriendLocationsListenerAnnouncer friendLocationsDidChange:affectedUserIds:] */

void FUN_105843f44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  _objc_retain(param_4);
  FUN_105843880(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bfb84e0(uVar6);
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
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10584406c; end: 105844173; -[SCFriendLocationsListenerAnnouncer friendLocationsDataStoreDidUpdateCurrentUserFriendLocation:] */

void FUN_10584406c(long param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_105843880(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bfb84c0(uVar6);
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



/* Entry: 105844174; end: 10584427b; -[SCFriendLocationsListenerAnnouncer friendLocationsDataStoreDidLoad:] */

void FUN_105844174(long param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_105843880(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bfb84a0(uVar6);
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



/* Entry: 10584427c; end: 1058443a3; -[SCFriendLocationsListenerAnnouncer friendLocationsDataStore:didFailToLoadWithError:] */

void FUN_10584427c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  _objc_retain(param_4);
  FUN_105843880(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bfb8480(uVar6);
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
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058443a4; end: 1058443cb; -[SCFriendLocationsListenerAnnouncer .cxx_destruct] */

void FUN_1058443a4(long param_1)

{
  FUN_105844400(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 1058443cc; end: 1058443eb; -[SCFriendLocationsListenerAnnouncer .cxx_construct] */

void FUN_1058443cc(long param_1)

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



/* Entry: 1058443ec; end: 1058443ff;  */

undefined * FUN_1058443ec(void)

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



/* Entry: 105844400; end: 105844457;  */

long FUN_105844400(long param_1)

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



/* Entry: 105844458; end: 105844467;  */

void FUN_105844458(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108b7500;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105844468; end: 105844487;  */

void FUN_105844468(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108b7500;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105844488; end: 1058444ef;  */

void FUN_105844488(long param_1)

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



/* Entry: 1058444f0; end: 1058444f3;  */

void FUN_1058444f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1058444f4; end: 105844567; -[SCGraphenePersonLocationProviderMetric2 init] */

undefined1 * FUN_1058444f4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea958;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105844568; end: 1058445df;  */

void FUN_105844568(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108b7540,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1058445e0; end: 105844657;  */

void FUN_1058445e0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108b7590,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105844658; end: 1058447b7; -[SCMapPlacesVenueEditorServiceProvider provide] */

void FUN_105844658(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1058447b8;
  puStack_68 = &UNK_1108b75e0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bf158;
  _objc_alloc(PTR_PTR_1126bf158);
  func_0x00010c040120();
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058447b8; end: 105844837;  */

void FUN_1058447b8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be74260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105844838; end: 10584490b; -[SCMapPlacesVenueEditorServiceProvider _placeRevGeoService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105844838(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126bf160;
  _objc_alloc(PTR_PTR_1126bf160);
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11272aaf4;
    _objc_loadWeakRetained(lVar5);
  }
  lVar2 = lVar5;
  func_0x00010c0ba3c0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = 0;
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_11272aaf8;
    _objc_loadWeakRetained(lVar3);
  }
  lVar4 = lVar3;
  func_0x00010bf398e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c028780(puVar1,param_2,lVar2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10584490c; end: 105844a37; -[SCMapPlacesVenueEditorServiceProvider _venueEditorAsyncRequestMaker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10584490c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1 + _DAT_11272aae0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf1ef20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x0001068316a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126bf168;
  _objc_alloc(PTR_PTR_1126bf168);
  lVar1 = param_1 + _DAT_11272aae4;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + _DAT_11272aae8;
  _objc_loadWeakRetained(lVar2);
  param_1 = param_1 + _DAT_11272aaec;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000800(puVar4,param_2,lVar1,lVar3,lVar2,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105844a38; end: 105844aab; -[SCMapPlacesVenueEditorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105844a38(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272aaec);
  _objc_destroyWeak(param_1 + _DAT_11272aae4);
  _objc_destroyWeak(param_1 + _DAT_11272aae0);
  _objc_destroyWeak(param_1 + _DAT_11272aae8);
  _objc_destroyWeak(param_1 + _DAT_11272aaf8);
  _objc_destroyWeak(param_1 + _DAT_11272aaf4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272aaf0);
  return;
}



/* Entry: 105844aac; end: 105844b1f; -[SCMapPlaceRevGeoService initWithMapUserNetworking:circumstanceEngine:] */

undefined1 * FUN_105844aac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea960;
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



/* Entry: 105844b20; end: 105844d37; -[SCMapPlaceRevGeoService fetchAddressForLat:lng:completion:] */

void FUN_105844b20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010be4f8e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf170;
  _objc_alloc_init(PTR_PTR_1126bf170);
  func_0x00010c1b9120(param_1);
  func_0x00010c1be5e0(param_2,puVar2);
  puVar3 = PTR_PTR_1126bf178;
  _objc_alloc_init(PTR_PTR_1126bf178);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bff20(puVar3);
  _objc_release(puVar4);
  func_0x00010c1a9be0(puVar3);
  func_0x00010c1d5fe0(puVar3);
  puVar4 = PTR_PTR_1126bf180;
  _objc_alloc(PTR_PTR_1126bf180);
  _objc_opt_class(PTR_PTR_1126bf188);
  func_0x00010c05a180(puVar4);
  _objc_initWeak(auStack_68,param_3);
  uVar5 = *(undefined8 *)(param_3 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_5);
  uStack_78 = param_1;
  uStack_70 = param_2;
  func_0x00010bf9b020(uVar5);
  _objc_release(uVar5);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 105844d38; end: 105844f83;  */

void FUN_105844d38(long param_1,undefined *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      puVar2 = param_2;
      func_0x00010c13cf40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      if (puVar3 == (undefined *)0x0) {
        lVar6 = *(long *)(param_1 + 0x20);
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        (**(code **)(lVar6 + 0x10))(lVar6,0,puVar5);
      }
      else {
        puVar5 = puVar3;
        func_0x00010befd580(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126b2190;
        _objc_alloc_init(PTR_PTR_1126b2190);
        puVar4 = puVar5;
        func_0x00010befdc20(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c165f60(puVar2);
        _objc_release(puVar4);
        puVar4 = puVar5;
        func_0x00010c09e300(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bf480(puVar2);
        _objc_release(puVar4);
        puVar4 = puVar5;
        func_0x00010bf53220(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c184920(puVar2);
        _objc_release(puVar4);
        puVar4 = puVar5;
        func_0x00010bf53280(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c184ba0(puVar2);
        _objc_release(puVar4);
        puVar4 = puVar5;
        func_0x00010c105600(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1df580(puVar2);
        _objc_release(puVar4);
        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar2,0);
        _objc_release(puVar2);
      }
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_3);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105844f84; end: 105845003; -[SCMapPlaceRevGeoService _locationUrlWithEndpoint:] */

void FUN_105844f84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e06c58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105845004; end: 10584500f; -[SCMapPlaceRevGeoService .cxx_destruct] */

void FUN_105845004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105845010; end: 10584513b; -[SCVenueEditorAsyncRequestMaker initWithComposerNetworkingBridgeServices:composerBoltUploader:composerServices:asyncQueueProvider:] */

undefined1 *
FUN_105845010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ea968;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    func_0x00010c11e0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10584513c; end: 105845147; -[SCVenueEditorAsyncRequestMaker pushToValdiMarshaller:] */

undefined8 FUN_10584513c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010afa3720(param_3,param_1);
  func_0x00010afa36fc();
  func_0x00010afa35fc();
  func_0x00010afa35c0();
  return param_3;
}



/* Entry: 105845148; end: 1058454ab; -[SCVenueEditorAsyncRequestMaker makeAsyncVenueEditRequestWithRequest:photoUrls:] */

void FUN_105845148(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010be5cd00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  _dispatch_group_create();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(param_4);
  lVar4 = param_4;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar9 = *plStack_140;
    do {
      lVar10 = 0;
      do {
        if (*plStack_140 != lVar9) {
          _objc_enumerationMutation(param_4);
        }
        uVar11 = *(undefined8 *)(lStack_148 + lVar10 * 8);
        puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bdc3460();
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 != (undefined *)0x0) {
          lStack_158 = 0;
          puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010bf64ae0();
          _objc_retainAutoreleasedReturnValue();
          lVar1 = lStack_158;
          _objc_retain(lStack_158);
          if (puVar6 != (undefined *)0x0 && lVar1 == 0) {
            lVar7 = lVar2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar7 != 0) {
              _dispatch_group_enter(lVar3);
              uVar8 = *(undefined8 *)(param_1 + 0x10);
              func_0x00010c269d40(uVar8);
              _objc_retainAutoreleasedReturnValue();
              puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_188 = 0xc2000000;
              pcStack_180 = FUN_1058454ac;
              puStack_178 = &UNK_1108b7670;
              _objc_retain(lVar7);
              lStack_170 = lVar7;
              uStack_168 = uVar11;
              _objc_retain(lVar3);
              lStack_160 = lVar3;
              func_0x00010c28eae0(uVar8);
              _objc_release(uVar8);
              _objc_release(lStack_160);
              _objc_release(lStack_170);
            }
            _objc_release(lVar7);
          }
          _objc_release(puVar6);
          _objc_release(lVar1);
        }
        _objc_release(puVar5);
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = param_4;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_4);
  _objc_initWeak(auStack_198,param_1);
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  pcStack_1c8 = FUN_1058454f4;
  puStack_1c0 = &UNK_110850cf8;
  lStack_1b8 = param_1;
  _objc_retain(param_3);
  lStack_1b0 = param_3;
  _objc_retain(lVar2);
  lStack_1a8 = lVar2;
  _objc_copyWeak(auStack_1a0,auStack_198);
  func_0x00010bcbe628(lVar3,uVar11,&puStack_1d8);
  _objc_destroyWeak(auStack_1a0);
  _objc_release(lStack_1a8);
  _objc_release(lStack_1b0);
  _objc_destroyWeak(auStack_198);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_198);
  __Unwind_Resume();
  func_0x00010bf4cce0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1db3c0(*(undefined8 *)(param_3 + 0x20));
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 1058454ac; end: 1058454f3;  */

void FUN_1058454ac(long param_1,undefined8 param_2)

{
  func_0x00010bf4cce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1db3c0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1058454f4; end: 1058455f3;  */

void FUN_1058454f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c295440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  func_0x00010bfc69a0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar3);
  _objc_release(uVar4);
  return;
}



/* Entry: 1058455f4; end: 10584576f;  */

void FUN_1058455f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bf190;
  func_0x00010bfbc0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c0d8300(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf00d20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_68;
  _objc_copyWeak(puVar5,param_1 + 0x38);
  func_0x000109021e0c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf8c4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x20) = puVar6;
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105845770; end: 10584579b;  */

void FUN_105845770(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfb380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10584579c; end: 1058457e7; -[SCVenueEditorAsyncRequestMaker _destroyPhotoRequest] */

void FUN_10584579c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = 0;
  if (lVar1 != 0) {
    func_0x00010bf6ef60();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1058457e8; end: 1058457ef; -[SCVenueEditorAsyncRequestMaker photoPickerUpdatedMetadata:forPhotoAtURL:] */

void FUN_1058457e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_setObject_forKeyedSubscript__112651bb8);
  return;
}



/* Entry: 1058457f0; end: 105845d37; -[SCVenueEditorAsyncRequestMaker _mapPhotoDataToPhotosAtURLs:] */

void FUN_1058457f0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  func_0x00010bf529e0(param_3);
  func_0x00010bffc4a0();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      _objc_release(param_3);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
        return;
      }
      ___stack_chk_fail();
      _objc_storeStrong(param_3 + 0x30,0);
      _objc_storeStrong(param_3 + 0x28,0);
      _objc_storeStrong(param_3 + 0x20,0);
      _objc_storeStrong(param_3 + 0x18,0);
      _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
      return;
    }
    lVar19 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(ulong *)(param_1 + 0x30);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_retain(puVar4);
      _objc_retain(uVar5);
      puVar6 = PTR_PTR_1126bf198;
      _objc_alloc_init(PTR_PTR_1126bf198);
      if (uVar5 == 0) {
LAB_105845a50:
        puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64ac0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar8 == (undefined *)0x0) {
          _objc_retain(puVar6);
        }
        else {
          puVar9 = puVar8;
          _CGImageSourceCreateWithData(puVar8,0);
          puVar10 = puVar9;
          _CGImageSourceCopyPropertiesAtIndex();
          puVar11 = puVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar11 != (undefined *)0x0) {
            puVar12 = puVar11;
            func_0x00010c0e00e0(puVar11);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar11;
            func_0x00010c0e00e0(puVar11);
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar11;
            func_0x00010c0e00e0(puVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1b9120(puVar6);
            func_0x00010c1be5e0(puVar6);
            func_0x00010c1679e0(puVar6);
            _objc_release(puVar14);
            _objc_release(puVar13);
            _objc_release(puVar12);
          }
          puVar12 = puVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar12;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar13 != (undefined *)0x0) {
            puVar14 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
            _objc_alloc_init();
            func_0x00010c189b60();
            puVar15 = puVar14;
            func_0x00010bf65160();
            _objc_retainAutoreleasedReturnValue();
            if (puVar15 != (undefined *)0x0) {
              func_0x00010c26f320(puVar15);
              puVar16 = puVar12;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0b4ca0();
              puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c215fe0(puVar6);
              _objc_release(puVar17);
              _objc_release(puVar16);
            }
            _objc_release(puVar15);
            _objc_release(puVar14);
          }
          _CFRelease(puVar9);
          _objc_retain(puVar6);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar10);
        }
        _objc_release(puVar8);
      }
      else {
        uVar7 = uVar5;
        func_0x00010c08b3c0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b9120(puVar6);
        _objc_release(uVar7);
        uVar7 = uVar5;
        func_0x00010c0b55a0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1be5e0(puVar6);
        _objc_release(uVar7);
        uVar7 = uVar5;
        func_0x00010bf01f00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1679e0(puVar6);
        _objc_release(uVar7);
        uVar7 = uVar5;
        func_0x00010c2709c0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c215fe0(puVar6);
        _objc_release(uVar7);
        uVar7 = uVar5;
        func_0x00010c121760();
        if ((uVar7 & 1) != 0) goto LAB_105845a50;
        _objc_retain(puVar6);
      }
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(puVar4);
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(uVar5);
      lVar19 = lVar19 + 1;
    } while (lVar3 != lVar19);
    lVar3 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105845d38; end: 105845d97; -[SCVenueEditorAsyncRequestMaker .cxx_destruct] */

void FUN_105845d38(long param_1)

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



/* Entry: 105845d98; end: 105845e0b; -[SCMapSDKAuthContextProvider initWithSnapTokenProvider:] */

undefined1 * FUN_105845d98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea970;
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



/* Entry: 105845e0c; end: 105845f0b; -[SCMapSDKAuthContextProvider fetchAuthContext:] */

void FUN_105845e0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105845f0c;
  puStack_50 = &UNK_1108450c8;
  _objc_retain(param_3);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105845fe8;
  puStack_78 = &UNK_110849810;
  uStack_70 = param_3;
  uStack_48 = param_3;
  _objc_retain(param_3);
  puVar1 = PTR___dispatch_main_q_11034be20;
  func_0x00010bfa48e0(uVar2,param_2,6,PTR___dispatch_main_q_11034be20,
                      PTR___dispatch_main_q_11034be20,&puStack_68,&puStack_90);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105845f0c; end: 105845fe7;  */

void FUN_105845f0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bf1a0;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = param_2;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01a220(puVar1);
  func_0x00010c0e2a00(uVar5);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c09e4e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7500(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105845fe8; end: 105846027;  */

void FUN_105845fe8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09e4e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7500(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105846028; end: 105846033; -[SCMapSDKAuthContextProvider .cxx_destruct] */

void FUN_105846028(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105846034; end: 1058460a7; -[SCMapSDKCofProvider initWithCircumstanceEngine:] */

undefined1 * FUN_105846034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea978;
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



/* Entry: 1058460a8; end: 1058460b3; -[SCMapSDKCofProvider getRealValue:] */

void FUN_1058460a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb2cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_floatValueForConfigKeySync_featu_1125ca4e0,param_3,0
            );
  return;
}



/* Entry: 1058460b4; end: 1058460bf; -[SCMapSDKCofProvider getStringValue:] */

void FUN_1058460b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_stringValueForConfigKeySync_feat_112675010,param_3,0
            );
  return;
}



/* Entry: 1058460c0; end: 1058460cb; -[SCMapSDKCofProvider getBooleanValue:] */

void FUN_1058460c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_featur_1125a56c0,param_3,0
            );
  return;
}



/* Entry: 1058460cc; end: 1058460d7; -[SCMapSDKCofProvider getIntegerValue:] */

void FUN_1058460cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_intValueForConfigKeySync_feature_1125f79d8,param_3,0
            );
  return;
}



/* Entry: 1058460d8; end: 105846137; -[SCMapSDKCofProvider getBinaryValue:] */

void FUN_1058460d8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c1195e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c296d80(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105846138; end: 1058461c3; -[SCMapSDKCofProvider getRealValueNoExposureLogging:] */

void FUN_105846138(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0b84a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc(PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar2 = lVar1;
    func_0x00010c296d80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    func_0x00010c0138c0(puVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058461c4; end: 10584623f; -[SCMapSDKCofProvider getStringValueNoExposureLogging:] */

void FUN_1058461c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0b84a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c296d80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105846240; end: 1058462cf; -[SCMapSDKCofProvider getBooleanValueNoExposureLogging:] */

void FUN_105846240(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0b84a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc(PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar2 = lVar1;
    func_0x00010c296d80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    func_0x00010bff91e0(puVar4,param_2,lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058462d0; end: 10584635f; -[SCMapSDKCofProvider getIntegerValueNoExposureLogging:] */

void FUN_1058462d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0b84a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc(PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar2 = lVar1;
    func_0x00010c296d80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067ec0();
    func_0x00010c01e520(puVar4,param_2,lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105846360; end: 1058463f3; -[SCMapSDKCofProvider getBinaryValueNoExposureLogging:] */

void FUN_105846360(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0b84a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c296d80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf04a80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1058463f4; end: 10584642b; -[SCMapSDKCofProvider logExposure:] */

void FUN_1058463f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b84a0(uVar1,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10584642c; end: 105846437; -[SCMapSDKCofProvider .cxx_destruct] */

void FUN_10584642c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105846438; end: 105846543; -[SCMapSDKContentObjectResolver initWithContentFetcher:mapMemoriesThumbnailProvider:useContentFetcherOffMainThread:asyncQueueProvider:] */

undefined1 *
FUN_105846438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ea980;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(char *)((long)puVar1 + 0x18) = (char)param_5;
    if (param_5 != 0) {
      uVar2 = param_6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c11e0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
      *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
      _objc_release(uVar4);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105846544; end: 1058466e7; -[SCMapSDKContentObjectResolver resolveContentObject:callback:] */

void FUN_105846544(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) goto LAB_1058466c8;
  lVar1 = param_3;
  func_0x00010bf63f80();
  lVar4 = param_3;
  if ((int)lVar1 == 1) {
    lVar1 = param_3;
    func_0x00010bf4cce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR_PTR_1126b08b0;
    if (lVar1 == 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110e06cb8;
LAB_105846660:
      func_0x00010bdd8f00(param_1,param_2,ppuVar6,param_4);
      goto LAB_1058466c8;
    }
    func_0x00010bf4cce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cd80(puVar5,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((int)lVar1 != 2) goto LAB_1058466c8;
    lVar1 = param_3;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110e06cd8;
      goto LAB_105846660;
    }
    lVar1 = param_3;
    func_0x00010c28f280(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010be41de0(param_1,param_2,lVar1);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126b08b0;
    if ((int)uVar3 != 0) {
      func_0x00010be96960(param_1,param_2,param_3,param_4);
      goto LAB_1058466c8;
    }
    func_0x00010c28f280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33760(puVar5,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar4);
  func_0x00010be96d60(param_1,param_2,puVar5,param_3,param_4);
  _objc_release(puVar5);
LAB_1058466c8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058466e8; end: 105846907; -[SCMapSDKContentObjectResolver _retrieveWithReference:contentObject:andCallback:] */

void FUN_1058466e8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b17d8;
  _objc_alloc();
  func_0x00010c003a80();
  lVar2 = param_4;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    lVar3 = param_4;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 == 0) goto LAB_1058467e8;
    lVar2 = param_4;
    func_0x00010c086560(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010c085300(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195d00(puVar1);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
LAB_1058467e8:
  if (*(char *)(param_1 + 0x18) == '\x01') {
    _objc_initWeak(auStack_58,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(puVar1);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar5);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  else {
    func_0x00010be96d40(param_1);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105846908; end: 10584693f;  */

void FUN_105846908(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be96d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105846940; end: 105846b5b; -[SCMapSDKContentObjectResolver _retrieveWithBuilder:contentObject:andCallback:] */

void FUN_105846940(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105846a2c;
  puStack_48 = &UNK_1108b76d0;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c13e600(uVar1,param_2,param_3,&puStack_60);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105846b5c; end: 105846b67;  */

void FUN_105846b5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e31b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onContentObjectResolved__112616680,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105846b68; end: 105846d03; -[SCMapSDKContentObjectResolver _retrieveMemoryWithContentObject:callback:] */

void FUN_105846b68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = param_3;
  func_0x00010c28f280(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be5f4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    func_0x00010bdd8f00(param_1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c26e680(0x4048000000000000,0x4056000000000000,uVar3);
    _objc_release(uVar3);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105846d04; end: 105846d57;  */

void FUN_105846d04(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be94b80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105846d58; end: 105846e87; -[SCMapSDKContentObjectResolver _resolveMemoryContentObject:withImage:callback:] */

void FUN_105846d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126bf1a8;
  _objc_retain(param_3);
  _objc_alloc_init();
  func_0x00010c1822a0();
  _objc_release(param_3);
  if (param_4 == 0) {
    func_0x00010c1971a0(puVar1);
  }
  else {
    lVar2 = param_4;
    _UIImageJPEGRepresentation(0x3fe999999999999a,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ecbc0(puVar1);
    _objc_release(lVar2);
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105846e88;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_5;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(param_5);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(puStack_38);
  _objc_release(uStack_40);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105846e88; end: 105846e93;  */

void FUN_105846e88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e31b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onContentObjectResolved__112616680,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105846e94; end: 105846f1f; -[SCMapSDKContentObjectResolver _isMemoryURI:] */

long FUN_105846e94(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110e06d58);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 3) {
    lVar1 = param_3;
    func_0x00010c0dfd40(param_3,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0720c0();
    _objc_release(lVar1);
  }
  else {
    lVar2 = 0;
  }
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 105846f20; end: 105846f8b; -[SCMapSDKContentObjectResolver _memoryIdFromURI:] */

void FUN_105846f20(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110e06d58);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 3) {
    lVar1 = param_3;
    func_0x00010c0dfd40(param_3,param_2,2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105846f8c; end: 10584705f; -[SCMapSDKContentObjectResolver _callbackWithErrorString:callback:] */

void FUN_105846f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bf1a8;
  _objc_retain(param_3);
  _objc_alloc_init();
  func_0x00010c1971a0();
  _objc_release(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105847060;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_4;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(param_4);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(puStack_38);
  _objc_release(uStack_40);
  _objc_release(puVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 105847060; end: 10584706b;  */

void FUN_105847060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e31b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onContentObjectResolved__112616680,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10584706c; end: 1058470a7; -[SCMapSDKContentObjectResolver .cxx_destruct] */

void FUN_10584706c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058470a8; end: 10584714b; -[SCMapSDKCrashLogger initWithCrashLogger:appInsightsMetadataStorage:] */

undefined1 *
FUN_1058470a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea988;
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



/* Entry: 10584714c; end: 1058471bb; -[SCMapSDKCrashLogger setValue:value:] */

void FUN_10584714c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d07a0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058471bc; end: 10584720b; -[SCMapSDKCrashLogger clearValue:] */

void FUN_1058471bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10584720c; end: 10584723b; -[SCMapSDKCrashLogger .cxx_destruct] */

void FUN_10584720c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10584723c; end: 105847347; -[SCMapSDKDateTimeFormatter getRelativeTimeString:] */

void FUN_10584723c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2709c0(param_3);
  func_0x00010bf655e0((double)(long)uVar1 / 1000.0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  func_0x00010c235b60(param_3);
  uVar3 = param_3;
  func_0x00010beec420(param_3);
  uVar4 = param_3;
  func_0x00010bf2faa0(param_3);
  uVar5 = param_3;
  func_0x00010c0860e0(param_3);
  uVar6 = param_3;
  func_0x00010c290240(param_3);
  _objc_release(param_3);
  func_0x00010bfb5a80((double)(uVar5 & 0xffffffff),puVar7,param_2,puVar2,uVar1,0x18,uVar3,uVar4,
                      uVar6,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105847348; end: 1058473d7; -[SCMapSDKMemoriesFetcher initWithMemoriesLocationDataProvider:] */

undefined1 * FUN_105847348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea990;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058473d8; end: 1058474a7; -[SCMapSDKMemoriesFetcher fetchMemoriesInArea:callback:] */

void FUN_1058473d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x00010be12860(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1058474a8;
  puStack_40 = &UNK_110850cc8;
  uStack_38 = param_4;
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c25ff60(param_1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_1);
  return;
}



/* Entry: 1058474a8; end: 1058474b3;  */

void FUN_1058474a8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e4430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onFetchedMemories__112616b20,param_2);
  return;
}



/* Entry: 1058474b4; end: 1058474bb; -[SCMapSDKMemoriesFetcher cancelPendingRequests] */

void FUN_1058474b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 1058474bc; end: 105847633; -[SCMapSDKMemoriesFetcher _fetchMemoriesInArea:callback:] */

void FUN_1058474bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105847634;
  puStack_68 = &UNK_1108b7700;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar1 = param_3;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_88,auStack_58);
  _objc_retain(param_4);
  func_0x00010bf41860(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105847634; end: 10584770b;  */

void FUN_105847634(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1fec0(param_3);
    uVar3 = param_1;
    func_0x00010c274140(param_3);
    uVar4 = uVar3;
    func_0x00010c08e360(param_3);
    uVar5 = uVar4;
    func_0x00010c140820(param_3);
    uVar2 = uVar1;
    func_0x00010bfa81a0(param_1,uVar3,uVar4,uVar5,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10584770c; end: 1058478fb;  */

void FUN_10584770c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **unaff_x25;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
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
  lVar4 = param_2;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar3 != 0) {
    lVar9 = *plStack_130;
    unaff_x25 = &puStack_170;
    do {
      lVar11 = 0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(param_2);
        }
        uVar7 = *(undefined8 *)(lStack_138 + lVar11 * 8);
        puStack_170 = puVar1;
        uStack_168 = 0xc2000000;
        pcStack_160 = FUN_1058478fc;
        puStack_158 = &UNK_1108b7730;
        _objc_retain(puVar2);
        lVar4 = param_1 + 0x28;
        puStack_150 = puVar2;
        _objc_copyWeak(auStack_148);
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar8);
        func_0x00010c0c0800(uVar7);
        _objc_release(uVar8);
        _objc_destroyWeak(auStack_148);
        _objc_release(puStack_150);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = param_2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x25 + 5);
    __Unwind_Resume();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010c09ed60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(lVar4);
        }
        uVar7 = *(undefined8 *)(param_2 + 0x20);
        lVar5 = param_2 + 0x28;
        _objc_loadWeakRetained(lVar5);
        lVar6 = lVar5;
        func_0x00010be0e8e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      return;
    }
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0e3ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(lVar4 + 0x20),PTR_s_onError_1126169d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058478fc; end: 105847a3f;  */

void FUN_1058478fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09ed60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      lVar3 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar3);
      lVar4 = lVar3;
      func_0x00010be0e8e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar6);
      _objc_release(lVar4);
      _objc_release(lVar3);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0e3ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_2 + 0x20),PTR_s_onError_1126169d0);
  return;
}



/* Entry: 105847a40; end: 105847a47;  */

void FUN_105847a40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e3ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_onError_1126169d0);
  return;
}



/* Entry: 105847a48; end: 105847dfb; -[SCMapSDKMemoriesFetcher _featureFromMemory:] */

void FUN_105847a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2050;
  _objc_alloc_init(PTR_PTR_1126b2050);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010c1e5040(puVar1);
  _objc_release(puVar2);
  lVar3 = param_5;
  func_0x00010c0c8ba0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar1);
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126bf1b0;
  _objc_alloc_init(PTR_PTR_1126bf1b0);
  func_0x00010c1a2e00(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bf1b8;
  _objc_alloc_init(PTR_PTR_1126bf1b8);
  puVar4 = puVar1;
  func_0x00010bfc1860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1de8e0();
  _objc_release(puVar4);
  _objc_release(puVar2);
  func_0x00010c09ea00(param_5);
  puVar2 = puVar1;
  func_0x00010bfc1860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c102a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9120(param_1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  func_0x00010c09ea00(param_5);
  puVar2 = puVar1;
  func_0x00010bfc1860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c102a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1be5e0(param_2);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010c0c8ba0(param_5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e06db8;
  func_0x00010676b02c(&PTR____CFConstantStringClassReference_110e06db8,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(ppuVar6);
  _objc_release(lVar3);
  _objc_release(puVar2);
  puVar4 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar3 = param_5;
  func_0x00010c0c8ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e06dd8;
  func_0x00010676b02c(&PTR____CFConstantStringClassReference_110e06dd8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4);
  _objc_release(ppuVar6);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(puVar4);
  puVar2 = PTR_PTR_1126bf1c0;
  _objc_alloc_init(PTR_PTR_1126bf1c0);
  func_0x00010c1b6b40();
  func_0x00010bf313a0(param_5);
  puVar4 = puVar2;
  func_0x00010c27e100(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1add00();
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar4);
  lVar3 = param_5;
  func_0x00010c0fd0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar5 != 0) {
    puVar4 = puVar1;
    func_0x00010c118b60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR____CFConstantStringClassReference_110e32618;
    lVar3 = param_5;
    func_0x00010c0fd0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010676b02c(&PTR____CFConstantStringClassReference_110e32618,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4);
    _objc_release(ppuVar6);
    _objc_release(lVar3);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105847dfc; end: 105847e2b; -[SCMapSDKMemoriesFetcher .cxx_destruct] */

void FUN_105847dfc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105847e2c; end: 105847fd3; -[SCMapSDKPublicUserInfoProvider initWithSnapchattersDataFetcher:snapchatterPublicInfoFetcher:currentUserID:usernameProvider:displayNameProvider:bitmojiAvatarIDProvider:bitmojiSelfieIDprovider:circumstanceEngine:] */

undefined1 *
FUN_105847e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ea998;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105847fd4; end: 105848243; -[SCMapSDKPublicUserInfoProvider fetchPublicUserInfo:callback:] */

void FUN_105847fd4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 != 0) && (lVar2 = param_3, func_0x00010bf529e0(), lVar2 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    puVar3 = PTR_PTR_1126bc330;
    func_0x00010c277860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17a60();
    iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
    func_0x00010bf1f440();
    if (iVar1 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 0;
      _dispatch_get_global_queue(0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar3);
      _objc_retain(param_4);
      _objc_copyWeak(auStack_88,auStack_48);
      func_0x00010c244e80(uVar4);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_88);
      _objc_release(param_4);
      puVar6 = puVar3;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 0;
      _dispatch_get_global_queue(0,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_105848244;
      puStack_68 = &UNK_11085a578;
      _objc_retain(puVar3);
      puStack_60 = puVar3;
      _objc_retain(param_4);
      lStack_58 = param_4;
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010c09d7c0(uVar4);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_50);
      _objc_release(lStack_58);
      puVar6 = puStack_60;
    }
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105848244; end: 105848323;  */

void FUN_105848244(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  func_0x00010bf940a0(*(undefined8 *)(param_1 + 0x20));
  if (param_3 == 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be823c0();
    _objc_release(param_1);
  }
  else {
    func_0x00010c0e3ee0(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105848324; end: 10584847f; -[SCMapSDKPublicUserInfoProvider _processSnapchatters:andCallback:] */

void FUN_105848324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126bc310;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_105848480;
  uStack_60 = 0x105848490;
  uStack_58 = 0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105848498;
  puStack_a0 = &UNK_11084fa08;
  puStack_88 = &uStack_80;
  puStack_78 = &uStack_80;
  _objc_retain(param_3);
  uStack_98 = param_3;
  uStack_90 = param_1;
  func_0x00010c2775c0(puVar2);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_1058489f0;
  puStack_d0 = &UNK_11084b9d0;
  _objc_retain(param_4);
  uStack_c8 = param_4;
  puStack_c0 = &uStack_80;
  func_0x000100162d98("APPSTORE",&puStack_e8);
  _objc_release(uStack_c8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105848480; end: 105848497;  */

void FUN_105848480(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105848498; end: 10584851b;  */

void FUN_105848498(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10584851c;
  puStack_30 = &UNK_1108b7790;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf43280(uVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  return;
}


