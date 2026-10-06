/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10adb4da0; end: 10adb4dcf;  */

void FUN_10adb4da0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10adb4dd0; end: 10adb4f4f; -[LSASerializationComponentListenerAnnouncer description] */

void FUN_10adb4dd0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plStack_60;
  long *plStack_58;
  
  FUN_10adb4f50(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar6 = *plStack_60;
  if (plStack_60[1] != lVar6) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      lVar6 = lVar6 + lVar7;
      _objc_loadWeakRetained();
      func_0x00010bf06ba0(puVar4);
      _objc_release(lVar6);
      lVar6 = *plStack_60;
      uVar5 = plStack_60[1] - lVar6 >> 3;
      if (uVar8 != uVar5 - 1) {
        func_0x00010bf070e0(puVar4);
        lVar6 = *plStack_60;
        uVar5 = plStack_60[1] - lVar6 >> 3;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while (uVar8 < uVar5);
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10adb4f50; end: 10adb4faf;  */

void FUN_10adb4f50(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10adb4fb0; end: 10adb524b; -[LSASerializationComponentListenerAnnouncer addListener:] */

void FUN_10adb4fb0(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
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
  plVar10 = plVar3 + 1;
  *plVar10 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110c74240;
  plVar8 = plVar3 + 3;
  *plVar8 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar7 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar7;
  plStack_70 = plVar8;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_10adb524c(plVar8,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar8;
    plStack_98 = plVar3;
    FUN_10adb538c(puVar7,&plStack_a0);
    if (plStack_98 == (long *)0x0) goto LAB_10adb5178;
    plVar3 = plStack_98 + 1;
    do {
      lVar9 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_98;
    } while (cVar1 != '\0');
  }
  else {
    lVar5 = *plVar6;
    lVar11 = plVar6[1];
    lVar9 = lVar5;
    if (lVar5 != lVar11) {
      do {
        lVar4 = lVar9;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar9;
        if (lVar4 == param_3) break;
        lVar9 = lVar9 + 8;
        lVar5 = lVar11;
      } while (lVar9 != lVar11);
      plVar6 = (long *)*puVar7;
      lVar11 = plVar6[1];
    }
    if (lVar5 != lVar11) goto LAB_10adb5178;
    for (lVar9 = *plVar6; lVar9 != lVar11; lVar9 = lVar9 + 8) {
      lVar5 = lVar9;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_10adb524c(plVar8,lVar9);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_10adb524c(plVar8,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar8;
    plStack_80 = plVar3;
    FUN_10adb538c(puVar7,&plStack_88);
    if (plStack_80 == (long *)0x0) goto LAB_10adb5178;
    plVar3 = plStack_80 + 1;
    do {
      lVar9 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_80;
    } while (cVar1 != '\0');
  }
  if (lVar9 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_10adb5178:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return;
}



/* Entry: 10adb524c; end: 10adb538b;  */

void FUN_10adb524c(long *param_1,long *param_2)

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
      FUN_10adb5788();
LAB_10adb5388:
      func_0x000104c4f740();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_1;
      *param_1 = *param_2;
      *param_2 = lVar9;
      lVar9 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = lVar9;
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
      if (uVar7 >> 0x3d != 0) goto LAB_10adb5388;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar10 = lVar8;
    lVar11 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar11,lVar10);
        lVar10 = lVar10 + 8;
        lVar11 = lVar11 + 8;
      } while (lVar10 != lVar3);
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



/* Entry: 10adb538c; end: 10adb53e3;  */

void FUN_10adb538c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 10adb53e4; end: 10adb5613; -[LSASerializationComponentListenerAnnouncer removeListener:] */

void FUN_10adb53e4(long param_1,undefined8 param_2,long param_3)

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
  if (plVar6 == (long *)0x0) goto LAB_10adb5598;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_10adb544c;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_10adb538c(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10adb5598;
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
LAB_10adb544c:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110c74240;
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
          FUN_10adb524c(plVar9,lVar7);
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
    FUN_10adb538c(puVar8,&plStack_90);
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
    if (plStack_78 == (long *)0x0) goto LAB_10adb5598;
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
LAB_10adb5598:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10adb5614; end: 10adb573f; -[LSASerializationComponentListenerAnnouncer serializationComponent:didUpdateSerializationData:lensId:] */

void FUN_10adb5614(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  _objc_retain(param_5);
  FUN_10adb4f50(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c15e7c0();
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
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10adb5740; end: 10adb5767; -[LSASerializationComponentListenerAnnouncer .cxx_destruct] */

void FUN_10adb5740(long param_1)

{
  FUN_10adb579c(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 10adb5768; end: 10adb5787; -[LSASerializationComponentListenerAnnouncer .cxx_construct] */

void FUN_10adb5768(long param_1)

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



/* Entry: 10adb5788; end: 10adb579b;  */

undefined * FUN_10adb5788(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
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



/* Entry: 10adb579c; end: 10adb57f3;  */

long FUN_10adb579c(long param_1)

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



/* Entry: 10adb57f4; end: 10adb5803;  */

void FUN_10adb57f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c74240;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10adb5804; end: 10adb5823;  */

void FUN_10adb5804(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c74240;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adb5824; end: 10adb588b;  */

void FUN_10adb5824(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
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



/* Entry: 10adb588c; end: 10adb588f;  */

void FUN_10adb588c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adb5890; end: 10adb59d3; +[LSACompressedSerializedMLModel setErrorWithCode:description:error:] */

void FUN_10adb5890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *unaff_x24;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_5 != (undefined8 *)0x0) {
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_5 = puVar1;
    _objc_release(unaff_x24);
    _objc_release(param_1);
  }
  uVar2 = param_4;
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x24);
  _objc_release(param_1);
  _objc_release(param_4);
  __Unwind_Resume(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c012dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10adb59d4; end: 10adb59db; -[LSACompressedSerializedMLModel initWithFilePath:] */

void FUN_10adb59d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithFilePath_options__1125e2540,param_3,0);
  return;
}



/* Entry: 10adb59dc; end: 10adb5c2b; -[LSACompressedSerializedMLModel initWithFilePath:options:] */

undefined8 * FUN_10adb59dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *****pppppuVar4;
  undefined *puVar5;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 ****ppppuStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
    func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd11c0();
    _objc_release(puVar5);
  }
  puStack_48 = PTR_PTR_112701410;
  puVar3 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    lVar2 = param_3;
    _objc_retainAutorelease(param_3);
    func_0x00010bdc3520();
    func_0x000107c31940(auStack_68,lVar2);
    func_0x00010c165fa0(puVar3);
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    func_0x00010befdda0(&ppppuStack_80,puVar3);
    uVar1 = uStack_78;
    pppppuVar4 = (undefined8 *****)ppppuStack_80;
    if (-1 < (char)bStack_69) {
      uVar1 = (ulong)bStack_69;
      pppppuVar4 = &ppppuStack_80;
    }
    func_0x00010a1512bc(pppppuVar4,uVar1);
    if ((char)bStack_69 < '\0') {
      __ZdlPv(ppppuStack_80);
    }
    if (((ulong)pppppuVar4 & 1) == 0) {
      func_0x00010befdda0(&ppppuStack_80,puVar3);
      pppppuVar4 = (undefined8 *****)ppppuStack_80;
      if (-1 < (char)bStack_69) {
        uStack_78 = (ulong)bStack_69;
        pppppuVar4 = &ppppuStack_80;
      }
      FUN_10a151324(auStack_98,pppppuVar4,uStack_78);
      func_0x00010c165fa0(puVar3);
      if (cStack_81 < '\0') {
        __ZdlPv(auStack_98[0]);
      }
      if ((char)bStack_69 < '\0') {
        __ZdlPv(ppppuStack_80);
      }
    }
    func_0x00010c1d5fe0(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10adb5c2c; end: 10adb5fab; -[LSACompressedSerializedMLModel serializedModelHandle:] */

void FUN_10adb5c2c(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_78;
  long *plStack_70;
  long lStack_68;
  long *plStack_60;
  char cStack_51;
  
  func_0x00010c15eb60(&lStack_68);
  lVar7 = lStack_68;
  if (plStack_60 != (long *)0x0) {
    plVar4 = plStack_60 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_60);
    }
  }
  if (lVar7 == 0) {
    func_0x00010befdda0(&lStack_68,param_2);
    uVar3 = 0;
    FUN_10ad76578();
    if (cStack_51 < '\0') {
      __ZdlPv(lStack_68);
    }
    if ((uVar3 & 1) == 0) {
      func_0x00010c197400(PTR_PTR_1126bff30);
    }
    else {
      func_0x00010befdda0(&lStack_68,param_2);
      lVar7 = param_2;
      func_0x00010c0ec860();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      if (lVar7 == 0) {
        bVar2 = false;
      }
      else {
        lVar6 = lVar7;
        func_0x00010c2befa0(lVar7);
        bVar2 = lVar6 == 1;
      }
      _objc_release(lVar7);
      plVar4 = (long *)0x60;
      __Znwm();
      plVar4[1] = 0;
      plVar4[2] = 0;
      plVar5 = plVar4 + 3;
      *plVar4 = (long)&PTR_FUN_110b9f108;
      FUN_10ad76790(plVar5,&lStack_68,bVar2);
      plStack_78 = plVar5;
      plStack_70 = plVar4;
      _objc_release(lVar7);
      if (cStack_51 < '\0') {
        __ZdlPv(lStack_68);
      }
      plVar4 = (long *)0xe0;
      __Znwm();
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = (long)&PTR_FUN_110b9d530;
      FUN_109d2e134(plVar4 + 3,&plStack_78);
      func_0x00010c1fd0a0(param_2);
      if (plVar4 != (long *)0x0) {
        plVar5 = plVar4 + 1;
        do {
          lVar7 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      plVar4 = plStack_70;
      if (plStack_70 != (long *)0x0) {
        plVar5 = plStack_70 + 1;
        do {
          lVar7 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
  }
  func_0x00010c15eb60(param_1,param_2);
  return;
}



/* Entry: 10adb5fac; end: 10adb5fd3;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10adb5fac(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    lVar3 = param_2[1];
    lVar2 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = lVar3;
    *param_1 = lVar2;
    return;
  }
  lVar2 = *param_2;
  uVar1 = param_2[1];
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 10adb5fd4; end: 10adb5feb; -[LSACompressedSerializedMLModel adoptedPath] */

void FUN_10adb5fd4(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyCppObjectAtomic_11034d200)(param_1,param_2 + 0x20,FUN_10adb5fac);
  return;
}



/* Entry: 10adb5fec; end: 10adb6027; -[LSACompressedSerializedMLModel setAdoptedPath:] */

void FUN_10adb5fec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyCppObjectAtomic_11034d200)(param_1 + 0x20,param_3,0x10adb5fe8);
  return;
}



/* Entry: 10adb6028; end: 10adb603b; -[LSACompressedSerializedMLModel serializedModel] */

void FUN_10adb6028(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyCppObjectAtomic_11034d200)(param_1,param_2 + 0x10,0x10adb6000);
  return;
}



/* Entry: 10adb603c; end: 10adb60b7;  */

void FUN_10adb603c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10adb60b8; end: 10adb60cb; -[LSACompressedSerializedMLModel setSerializedModel:] */

void FUN_10adb60b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyCppObjectAtomic_11034d200)(param_1 + 0x10,param_3,FUN_10adb603c);
  return;
}



/* Entry: 10adb60cc; end: 10adb60d3; -[LSACompressedSerializedMLModel options] */

undefined8 FUN_10adb60cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10adb60d4; end: 10adb6103; -[LSACompressedSerializedMLModel setOptions:] */

void FUN_10adb60d4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10adb6104; end: 10adb613f; -[LSACompressedSerializedMLModel .cxx_destruct] */

void FUN_10adb6104(long param_1)

{
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  FUN_10adb6150(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10adb6140; end: 10adb614f; -[LSACompressedSerializedMLModel .cxx_construct] */

void FUN_10adb6140(long param_1)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10adb6150; end: 10adb61a7;  */

long FUN_10adb6150(long param_1)

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



/* Entry: 10adb61a8; end: 10adb62eb; +[LSASnapMLModel setErrorWithCode:description:error:] */

ulong FUN_10adb61a8(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 *param_5
                   )

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *unaff_x24;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_5 != (undefined8 *)0x0) {
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    unaff_x24 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_50 = param_4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_50,&uStack_58,1);
    _objc_retainAutoreleasedReturnValue();
    param_3 = param_1;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_5 = puVar2;
    _objc_release(unaff_x24);
    _objc_release(param_1);
  }
  uVar3 = param_4;
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar3;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x24);
  _objc_release(param_1);
  _objc_release(param_4);
  __Unwind_Resume(uVar3);
  uVar1 = 0x5030100 >> (ulong)(((uint)param_3 & 3) << 3);
  if (3 < param_3) {
    uVar1 = 0;
  }
  return (ulong)(uVar1 & 7);
}



/* Entry: 10adb62ec; end: 10adb630b; +[LSASnapMLModel convertToComputeUnits:] */

uint FUN_10adb62ec(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  
  uVar1 = 0x5030100 >> (ulong)(((uint)param_3 & 3) << 3);
  if (3 < param_3) {
    uVar1 = 0;
  }
  return uVar1 & 7;
}



/* Entry: 10adb630c; end: 10adb63cf; -[LSASnapMLModel initWithCoreMLModel:runSynchronizer:] */

undefined1 *
FUN_10adb630c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701418;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1c8ce0(puVar1);
    func_0x00010c1eef00(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10adb63d0; end: 10adb6a4f; +[LSASnapMLModel loadFrom:cacheDirectory:inferenceMode:error:] */

void FUN_10adb63d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lStack_188;
  long *plStack_180;
  char cStack_171;
  long lStack_170;
  long *plStack_168;
  undefined1 auStack_160 [8];
  long *plStack_158;
  undefined8 *apuStack_148 [8];
  long *plStack_108;
  undefined1 uStack_ff;
  undefined8 *apuStack_f0 [8];
  undefined8 *apuStack_b0 [8];
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar7 = param_1;
  func_0x00010bf51520(param_1);
  if (param_3 == 0) {
    puVar12 = (undefined *)0x0;
    lStack_170 = 0;
    plStack_168 = (long *)0x0;
  }
  else {
    func_0x00010c15eb80(&lStack_170,param_3);
    lVar10 = lStack_170;
    if (lStack_170 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      _objc_retainAutorelease(param_4);
      uVar8 = param_4;
      func_0x00010bdc3520(param_4);
      plVar9 = &lStack_188;
      func_0x000107c31940(plVar9,uVar8);
      FUN_109d22500();
      FUN_109d2beec(auStack_160,lVar10,uVar7,&lStack_188,1,plVar9);
      if (cStack_171 < '\0') {
        __ZdlPv(lStack_188);
      }
      uStack_ff = 0;
      FUN_109d23f70(&lStack_188,auStack_160);
      if ((lStack_188 == 0) || (*(long *)(lStack_188 + 0x10) == 0)) {
        func_0x00010c197400(param_1);
        puVar12 = (undefined *)0x0;
      }
      else {
        FUN_109d1a244();
        lVar10 = lStack_188;
        if (lStack_188 == 0) goto LAB_10adb6848;
        func_0x0001092af8bc(lStack_188 + 0x10);
        plVar9 = *(long **)(*(long *)(lVar10 + 0x10) + 0x98);
        plVar3 = *(long **)(*(long *)(lVar10 + 0x10) + 0xa0);
        if (plVar3 != (long *)0x0) {
          plVar1 = plVar3 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (plVar9 == (long *)0x0) {
          func_0x00010c197400(param_1);
          puVar12 = (undefined *)0x0;
        }
        else {
          lVar10 = *(long *)(*plVar9 + 0x88);
          if ((lVar10 == 0) ||
             (___dynamic_cast(lVar10,&PTR_DAT_110b3cbe8,&PTR_DAT_110b3cf08,0), lVar10 == 0)) {
LAB_10adb660c:
            func_0x00010c197400(param_1);
            lVar10 = 0;
            puVar12 = (undefined *)0x0;
          }
          else {
            FUN_109ce3bc4();
            _objc_retainAutoreleasedReturnValue();
            if (lVar10 == 0) goto LAB_10adb660c;
            puVar12 = PTR_PTR_1126bff38;
            _objc_alloc(PTR_PTR_1126bff38);
            if (plVar3 != (long *)0x0) {
              plVar9 = plVar3 + 1;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar5) {
                  *plVar9 = *plVar9 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            func_0x00010c005d00();
            if (plVar3 != (long *)0x0) {
              plVar9 = plVar3 + 1;
              do {
                lVar11 = *plVar9;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar5) {
                  *plVar9 = lVar11 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar11 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
              }
            }
          }
          _objc_release(lVar10);
        }
        if (plVar3 != (long *)0x0) {
          plVar9 = plVar3 + 1;
          do {
            lVar10 = *plVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
          }
        }
      }
      if (lStack_188 != 0) {
        piVar2 = (int *)(lStack_188 + 0x18);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (plStack_180 != (long *)0x0) {
        plVar9 = plStack_180 + 1;
        do {
          lVar10 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_180 + 0x10))(plStack_180);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_180);
        }
      }
      if (plStack_70 != (long *)0x0) {
        plVar9 = plStack_70 + 1;
        do {
          lVar10 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
        }
      }
      (*(code *)*apuStack_b0[0])(apuStack_b0);
      (*(code *)*apuStack_f0[0])(apuStack_f0);
      if (plStack_108 != (long *)0x0) {
        plVar9 = plStack_108 + 1;
        do {
          lVar10 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_108 + 0x10))(plStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_108);
        }
      }
      (*(code *)*apuStack_148[0])(apuStack_148);
      if (plStack_158 != (long *)0x0) {
        plVar9 = plStack_158 + 1;
        do {
          lVar10 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_158 + 0x10))(plStack_158);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_158);
        }
      }
    }
  }
  plVar9 = plStack_168;
  if (plStack_168 != (long *)0x0) {
    plVar3 = plStack_168 + 1;
    do {
      lVar10 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_168 + 0x10))(plStack_168);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return;
  }
  ___stack_chk_fail();
LAB_10adb6848:
  func_0x000105688514(&UNK_10f5945e8);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10adb6858);
  (*pcVar6)();
}



/* Entry: 10adb6a50; end: 10adb6ac7;  */

void FUN_10adb6a50(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = **(long **)(param_1 + 0x20);
  __ZNSt3__15mutex4lockEv(lVar1 + 0xa0);
  (**(code **)(param_2 + 0x10))(param_2);
  __ZNSt3__15mutex6unlockEv(lVar1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10adb6ac8; end: 10adb6af7;  */

void FUN_10adb6ac8(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10adb6af8; end: 10adb6fcf; +[LSASnapMLModel prefetchFrom:cacheDirectory:inferenceMode:error:] */

void FUN_10adb6af8(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,long *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x24;
  long *plStack_198;
  long *plStack_190;
  char cStack_181;
  long lStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long *plStack_158;
  undefined8 *apuStack_148 [8];
  long *plStack_108;
  undefined8 *apuStack_f0 [8];
  undefined8 *apuStack_b0 [8];
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  plVar5 = param_1;
  func_0x00010bf51520(param_1);
  if (param_3 == 0) {
    lStack_180 = 0;
    plStack_178 = (long *)0x0;
    goto LAB_10adb6d54;
  }
  func_0x00010c15eb80(&lStack_180,param_3);
  unaff_x24 = lStack_180;
  param_5 = plVar5;
  if (lStack_180 == 0) goto LAB_10adb6d54;
  _objc_retainAutorelease(param_4);
  uVar6 = param_4;
  func_0x00010bdc3520(param_4);
  func_0x000107c31940(&plStack_198,uVar6);
  if ((bRam00000001137ed160 & 1) == 0) goto LAB_10adb6dd8;
  do {
    FUN_109d2c5a0(&lStack_160,unaff_x24,param_5,&plStack_198,1,0x1137ed170);
    if (cStack_181 < '\0') {
      __ZdlPv(plStack_198);
    }
    FUN_109d23f70(&plStack_198,&lStack_160);
    param_5 = plStack_198;
    if (plStack_198 == (long *)0x0) {
LAB_10adb6c0c:
      func_0x00010c197400(param_1);
    }
    else {
      param_5 = plStack_198 + 2;
      if (*param_5 == 0) goto LAB_10adb6c0c;
      FUN_109d1a244(param_5);
      func_0x0001092af8bc(param_5);
    }
    plVar5 = plStack_190;
    if (plStack_198 != (long *)0x0) {
      plVar1 = plStack_198 + 3;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (plStack_190 != (long *)0x0) {
      plVar1 = plStack_190 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_190 + 0x10))(plStack_190);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      plVar1 = plStack_70 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    param_1 = &lStack_160;
    (*(code *)*apuStack_b0[0])(apuStack_b0);
    (*(code *)*apuStack_f0[0])(apuStack_f0);
    plVar5 = plStack_108;
    if (plStack_108 != (long *)0x0) {
      plVar1 = plStack_108 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_108 + 0x10))(plStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    (*(code *)*apuStack_148[0])(apuStack_148);
    plVar5 = plStack_158;
    if (plStack_158 != (long *)0x0) {
      plVar1 = plStack_158 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_158 + 0x10))(plStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
LAB_10adb6d54:
    plVar5 = plStack_178;
    if (plStack_178 != (long *)0x0) {
      plVar1 = plStack_178 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_178 + 0x10))(plStack_178);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    _objc_release(param_4);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
LAB_10adb6dd8:
    iVar4 = 0x137ed160;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_10adb7560(&uStack_170);
      uRam00000001137ed178 = uStack_168;
      uRam00000001137ed170 = uStack_170;
      uStack_170 = 0;
      uStack_168 = 0;
      FUN_10adb76b8(&uStack_170);
      ___cxa_atexit(FUN_109d22768,0x1137ed170,0x100000000);
      ___cxa_guard_release(0x1137ed160);
    }
  } while( true );
}



/* Entry: 10adb6fd0; end: 10adb7177; -[LSASnapMLModel predictionFromFeatures:error:] */

void FUN_10adb6fd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_10adb7178;
  uStack_50 = 0x10adb7188;
  uStack_48 = 0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10adb7178;
  uStack_80 = 0x10adb7188;
  uStack_78 = 0;
  lVar1 = param_1;
  puStack_98 = &uStack_a0;
  puStack_68 = &uStack_70;
  func_0x00010c142a40();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_10adb7190;
  puStack_c8 = &UNK_110c742b0;
  lStack_c0 = param_1;
  puStack_b0 = &uStack_70;
  _objc_retain(param_3);
  uStack_b8 = param_3;
  puStack_a8 = &uStack_a0;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_e0);
  _objc_release(lVar1);
  if (param_4 != (undefined8 *)0x0) {
    uVar2 = puStack_98[5];
    _objc_retainAutorelease();
    *param_4 = uVar2;
  }
  uVar2 = puStack_68[5];
  _objc_retain(uVar2);
  _objc_release(uStack_b8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10adb7178; end: 10adb718f;  */

void FUN_10adb7178(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10adb7190; end: 10adb7247;  */

void FUN_10adb7190(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  uVar2 = uVar1;
  func_0x00010c106600();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  _objc_release(uVar3);
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 10adb7248; end: 10adb742f; -[LSASnapMLModel predictionFromFeatures:options:error:] */

void FUN_10adb7248(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10adb7178;
  uStack_60 = 0x10adb7188;
  uStack_58 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_10adb7178;
  uStack_90 = 0x10adb7188;
  uStack_88 = 0;
  lVar1 = param_1;
  puStack_a8 = &uStack_b0;
  puStack_78 = &uStack_80;
  func_0x00010c142a40();
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_10adb7430;
  puStack_e0 = &UNK_110c742e0;
  lStack_d8 = param_1;
  puStack_c0 = &uStack_80;
  _objc_retain(param_3);
  uStack_d0 = param_3;
  _objc_retain(param_4);
  uStack_c8 = param_4;
  puStack_b8 = &uStack_b0;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_f8);
  _objc_release(lVar1);
  if (param_5 != (undefined8 *)0x0) {
    uVar2 = puStack_a8[5];
    _objc_retainAutorelease();
    *param_5 = uVar2;
  }
  uVar2 = puStack_78[5];
  _objc_retain(uVar2);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10adb7430; end: 10adb74e7;  */

void FUN_10adb7430(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  uVar2 = uVar1;
  func_0x00010c106620();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  _objc_release(uVar3);
  lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 10adb74e8; end: 10adb74ef; -[LSASnapMLModel model] */

undefined8 FUN_10adb74e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10adb74f0; end: 10adb751f; -[LSASnapMLModel setModel:] */

void FUN_10adb74f0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10adb7520; end: 10adb7527; -[LSASnapMLModel runSynchronizer] */

undefined8 FUN_10adb7520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10adb7528; end: 10adb752f; -[LSASnapMLModel setRunSynchronizer:] */

void FUN_10adb7528(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10adb7530; end: 10adb755f; -[LSASnapMLModel .cxx_destruct] */

void FUN_10adb7530(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10adb7560; end: 10adb76b7;  */

undefined8 * FUN_10adb7560(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined2 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110c74320;
  puVar4[3] = &PTR_DAT_110c74370;
  *(undefined1 *)(puVar4 + 4) = 0;
  puVar5 = puVar4;
  FUN_109d1a80c();
  uVar10 = *puVar5;
  puVar6 = (undefined8 *)0xd0;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110ae90f0;
  puVar5 = puVar6 + 3;
  puStack_88 = &UNK_1053a6a3c;
  ppuStack_80 = &PTR_DAT_110ae9180;
  uStack_90 = uVar10;
  FUN_109d228cc(puVar5,&UNK_10f6ada53,0x15,1,&uStack_90);
  func_0x0001092ba41c(&uStack_90);
  uStack_98 = 0;
  puVar7 = (undefined8 *)0x30;
  puStack_a8 = puVar5;
  puStack_a0 = puVar6;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110b3f650;
  puVar7[3] = puVar5;
  puVar7[4] = puVar6;
  *(undefined2 *)(puVar7 + 5) = uStack_98;
  puVar4[5] = puVar7 + 3;
  puVar4[6] = puVar7;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar7;
  }
  ___stack_chk_fail();
  func_0x00010989671c(&puStack_a8);
  __ZNSt3__119__shared_weak_countD2Ev(puVar4);
  __ZdlPv();
  __Unwind_Resume();
  plVar9 = (long *)puVar7[1];
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return puVar7;
}



/* Entry: 10adb76b8; end: 10adb770f;  */

long FUN_10adb76b8(long param_1)

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



/* Entry: 10adb7710; end: 10adb771f;  */

void FUN_10adb7710(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c74320;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10adb7720; end: 10adb773f;  */

void FUN_10adb7720(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c74320;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adb7740; end: 10adb777f;  */

void FUN_10adb7740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010adb7748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 10adb7780; end: 10adb789f;  */

void FUN_10adb7780(undefined4 *param_1)

{
  *(undefined4 *)((long)param_1 + 3) = 0;
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 7) = 0x10001;
  *(undefined4 *)((long)param_1 + 0xb) = 0x1010101;
  *(undefined2 *)((long)param_1 + 0xf) = 0;
  *(undefined1 *)((long)param_1 + 0x11) = 0;
  func_0x000107c31940(param_1 + 6,"");
  func_0x000107c31940(param_1 + 0xc,"");
  func_0x000107c31940(param_1 + 0x12,&DAT_10f5aca3f);
  func_0x000107c31940(param_1 + 0x18,"Default");
  func_0x000107c31940(param_1 + 0x1e,"default");
  param_1[0x24] = 0xffffffff;
  func_0x000107c31940(param_1 + 0x26,"default");
  return;
}



/* Entry: 10adb78a0; end: 10adb78ff;  */

undefined8 * FUN_10adb78a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c74370;
  FUN_109d22db4(param_1 + 2);
  return param_1;
}



/* Entry: 10adb7900; end: 10adb793b; -[LSASnapMLModelOptions init] */

void FUN_10adb7900(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_112701420;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 0;
  }
  return;
}



/* Entry: 10adb793c; end: 10adb7943; -[LSASnapMLModelOptions zeroAllocMode] */

undefined8 FUN_10adb793c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10adb7944; end: 10adb794b; -[LSASnapMLModelOptions setZeroAllocMode:] */

void FUN_10adb7944(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10adb794c; end: 10adb7a1f; -[LSASnapRecordingComponent initWithPerformer:announcerQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10adb794c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701428;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithPerformer_announcerQueue_1125eac68,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126de1a0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112784508);
    *(undefined **)((long)puVar1 + (long)_DAT_112784508) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10adb7a20; end: 10adb7c27; -[LSASnapRecordingComponent setCoreManager:announcer:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb7a20(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  plStack_58 = (long *)param_3[1];
  uStack_60 = *param_3;
  if (param_3[1] != 0) {
    plVar8 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_68 = PTR_PTR_112701428;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_setCoreManager_announcer_configu_11263ea88,&uStack_60,param_4
                      ,param_5);
  plVar8 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  puVar4 = (undefined8 *)0x28;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110c743c0;
  puVar9 = puVar4 + 3;
  *puVar9 = &PTR_FUN_110c74460;
  _objc_initWeak(puVar4 + 4,param_1);
  puVar2 = (undefined8 *)(param_1 + _DAT_11278450c);
  plVar8 = (long *)puVar2[1];
  *puVar2 = puVar9;
  puVar2[1] = puVar4;
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)*param_3;
  }
  else {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
    plVar8 = (long *)*param_3;
    puVar9 = (undefined8 *)*puVar2;
    puVar4 = (undefined8 *)puVar2[1];
    if (puVar4 == (undefined8 *)0x0) {
      lVar6 = *(long *)(*plVar8 + 0x180);
      bVar7 = true;
      goto LAB_10adb7bb0;
    }
  }
  plVar1 = puVar4 + 2;
  do {
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar6 = *(long *)(*plVar8 + 0x180);
  do {
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar7 = false;
LAB_10adb7bb0:
  *(undefined8 **)(lVar6 + 0x450) = puVar9;
  lVar5 = *(long *)(lVar6 + 0x458);
  *(undefined8 **)(lVar6 + 0x458) = puVar4;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (!bVar7) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10adb7c28; end: 10adb7c37; -[LSASnapRecordingComponent addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb7c28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112784508),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10adb7c38; end: 10adb7c47; -[LSASnapRecordingComponent removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb7c38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112784508),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10adb7c48; end: 10adb7ccf; -[LSASnapRecordingComponent startSnapRecording] */

void FUN_10adb7c48(undefined8 param_1)

{
  func_0x00010bf047a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f88c0();
  _objc_release(param_1);
  return;
}



/* Entry: 10adb7cd0; end: 10adb7ce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb7cd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c250af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112784508),
             PTR_s_startSnapRecording_112671ce0);
  return;
}



/* Entry: 10adb7ce4; end: 10adb7d6b; -[LSASnapRecordingComponent stopSnapRecording] */

void FUN_10adb7ce4(undefined8 param_1)

{
  func_0x00010bf047a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f88c0();
  _objc_release(param_1);
  return;
}



/* Entry: 10adb7d6c; end: 10adb7d7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb7d6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112784508),
             PTR_s_stopSnapRecording_1126734f0);
  return;
}



/* Entry: 10adb7d80; end: 10adb7e07; -[LSASnapRecordingComponent captureSnapImage] */

void FUN_10adb7d80(undefined8 param_1)

{
  func_0x00010bf047a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f88c0();
  _objc_release(param_1);
  return;
}



/* Entry: 10adb7e08; end: 10adb7e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb7e08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf31270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112784508),
             PTR_s_captureSnapImage_1125a9e40);
  return;
}



/* Entry: 10adb7e1c; end: 10adb7e8b; -[LSASnapRecordingComponent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb7e1c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + _DAT_11278450c + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112784508,0);
  return;
}



/* Entry: 10adb7e8c; end: 10adb7eaf; -[LSASnapRecordingComponent .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb7e8c(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11278450c;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  return;
}



/* Entry: 10adb7eb0; end: 10adb7ecf;  */

void FUN_10adb7eb0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c743c0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adb7ed0; end: 10adb7edf;  */

void FUN_10adb7ed0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010adb7ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10adb7ee0; end: 10adb805f; -[LSASnapRecordingComponentListenerAnnouncer description] */

void FUN_10adb7ee0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plStack_60;
  long *plStack_58;
  
  FUN_10adb8060(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar6 = *plStack_60;
  if (plStack_60[1] != lVar6) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      lVar6 = lVar6 + lVar7;
      _objc_loadWeakRetained();
      func_0x00010bf06ba0(puVar4);
      _objc_release(lVar6);
      lVar6 = *plStack_60;
      uVar5 = plStack_60[1] - lVar6 >> 3;
      if (uVar8 != uVar5 - 1) {
        func_0x00010bf070e0(puVar4);
        lVar6 = *plStack_60;
        uVar5 = plStack_60[1] - lVar6 >> 3;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while (uVar8 < uVar5);
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10adb8060; end: 10adb80bf;  */

void FUN_10adb8060(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10adb80c0; end: 10adb835b; -[LSASnapRecordingComponentListenerAnnouncer addListener:] */

void FUN_10adb80c0(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
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
  plVar10 = plVar3 + 1;
  *plVar10 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110c74410;
  plVar8 = plVar3 + 3;
  *plVar8 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar7 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar7;
  plStack_70 = plVar8;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_10adb835c(plVar8,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar8;
    plStack_98 = plVar3;
    FUN_10adb849c(puVar7,&plStack_a0);
    if (plStack_98 == (long *)0x0) goto LAB_10adb8288;
    plVar3 = plStack_98 + 1;
    do {
      lVar9 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_98;
    } while (cVar1 != '\0');
  }
  else {
    lVar5 = *plVar6;
    lVar11 = plVar6[1];
    lVar9 = lVar5;
    if (lVar5 != lVar11) {
      do {
        lVar4 = lVar9;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar9;
        if (lVar4 == param_3) break;
        lVar9 = lVar9 + 8;
        lVar5 = lVar11;
      } while (lVar9 != lVar11);
      plVar6 = (long *)*puVar7;
      lVar11 = plVar6[1];
    }
    if (lVar5 != lVar11) goto LAB_10adb8288;
    for (lVar9 = *plVar6; lVar9 != lVar11; lVar9 = lVar9 + 8) {
      lVar5 = lVar9;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_10adb835c(plVar8,lVar9);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_10adb835c(plVar8,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar8;
    plStack_80 = plVar3;
    FUN_10adb849c(puVar7,&plStack_88);
    if (plStack_80 == (long *)0x0) goto LAB_10adb8288;
    plVar3 = plStack_80 + 1;
    do {
      lVar9 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_80;
    } while (cVar1 != '\0');
  }
  if (lVar9 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_10adb8288:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return;
}



/* Entry: 10adb835c; end: 10adb849b;  */

void FUN_10adb835c(long *param_1,long *param_2)

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
      FUN_10adb89dc();
LAB_10adb8498:
      func_0x000104c4f740();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_1;
      *param_1 = *param_2;
      *param_2 = lVar9;
      lVar9 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = lVar9;
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
      if (uVar7 >> 0x3d != 0) goto LAB_10adb8498;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar10 = lVar8;
    lVar11 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar11,lVar10);
        lVar10 = lVar10 + 8;
        lVar11 = lVar11 + 8;
      } while (lVar10 != lVar3);
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



/* Entry: 10adb849c; end: 10adb84f3;  */

void FUN_10adb849c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 10adb84f4; end: 10adb8723; -[LSASnapRecordingComponentListenerAnnouncer removeListener:] */

void FUN_10adb84f4(long param_1,undefined8 param_2,long param_3)

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
  if (plVar6 == (long *)0x0) goto LAB_10adb86a8;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_10adb855c;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_10adb849c(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10adb86a8;
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
LAB_10adb855c:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110c74410;
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
          FUN_10adb835c(plVar9,lVar7);
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
    FUN_10adb849c(puVar8,&plStack_90);
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
    if (plStack_78 == (long *)0x0) goto LAB_10adb86a8;
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
LAB_10adb86a8:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10adb8724; end: 10adb87f3; -[LSASnapRecordingComponentListenerAnnouncer startSnapRecording] */

void FUN_10adb8724(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  FUN_10adb8060(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c250ae0();
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_38);
      return;
    }
  }
  return;
}



/* Entry: 10adb87f4; end: 10adb88c3; -[LSASnapRecordingComponentListenerAnnouncer stopSnapRecording] */

void FUN_10adb87f4(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  FUN_10adb8060(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c256b20();
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_38);
      return;
    }
  }
  return;
}



/* Entry: 10adb88c4; end: 10adb8993; -[LSASnapRecordingComponentListenerAnnouncer captureSnapImage] */

void FUN_10adb88c4(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  FUN_10adb8060(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf31260();
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_38);
      return;
    }
  }
  return;
}



/* Entry: 10adb8994; end: 10adb89bb; -[LSASnapRecordingComponentListenerAnnouncer .cxx_destruct] */

void FUN_10adb8994(long param_1)

{
  FUN_10adb89f0(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 10adb89bc; end: 10adb89db; -[LSASnapRecordingComponentListenerAnnouncer .cxx_construct] */

void FUN_10adb89bc(long param_1)

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



/* Entry: 10adb89dc; end: 10adb89ef;  */

undefined * FUN_10adb89dc(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
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



/* Entry: 10adb89f0; end: 10adb8a47;  */

long FUN_10adb89f0(long param_1)

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



/* Entry: 10adb8a48; end: 10adb8a57;  */

void FUN_10adb8a48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c74410;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10adb8a58; end: 10adb8a77;  */

void FUN_10adb8a58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c74410;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adb8a78; end: 10adb8adf;  */

void FUN_10adb8a78(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
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



/* Entry: 10adb8ae0; end: 10adb8ae3;  */

void FUN_10adb8ae0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adb8ae4; end: 10adb8b6b;  */

undefined8 * FUN_10adb8ae4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c74460;
  _objc_storeWeak(param_1 + 1,0);
  _objc_destroyWeak(param_1 + 1);
  return param_1;
}



/* Entry: 10adb8b6c; end: 10adb8bab;  */

void FUN_10adb8b6c(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c250ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10adb8bac; end: 10adb8beb;  */

void FUN_10adb8bac(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c256b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10adb8bec; end: 10adb8c2b;  */

void FUN_10adb8bec(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf31260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10adb8c2c; end: 10adb8e4b; -[LSATouchHandlingDescriptor initWithTouchHandlingPromise:] */

undefined1 * FUN_10adb8c2c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar5 = &uStack_50;
  puStack_48 = PTR_PTR_112701430;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar5 != (undefined8 *)0x0 && (long *)((long)puVar5 + 8) != param_3) {
    puVar10 = (undefined8 *)*param_3;
    puVar2 = (undefined8 *)param_3[1];
    uVar13 = (long)puVar2 - (long)puVar10;
    lVar7 = *(long *)((long)puVar5 + 0x18);
    puVar6 = *(undefined8 **)((long)puVar5 + 8);
    if ((ulong)(lVar7 - (long)puVar6) < uVar13) {
      uVar11 = ((long)uVar13 >> 2) * -0x3333333333333333;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 **)((long)puVar5 + 0x10) = puVar6;
        __ZdlPv();
        lVar7 = 0;
        *(long *)((long)puVar5 + 8) = 0;
        *(undefined8 *)((long)puVar5 + 0x10) = 0;
        *(undefined8 *)((long)puVar5 + 0x18) = 0;
      }
      if (uVar11 < 0xccccccccccccccd) {
        uVar9 = (lVar7 >> 2) * -0x6666666666666666;
        if (uVar9 < uVar11 || uVar9 + ((long)uVar13 >> 2) * 0x3333333333333333 == 0) {
          uVar9 = uVar11;
        }
        if (0x666666666666665 < (ulong)((lVar7 >> 2) * -0x3333333333333333)) {
          uVar9 = 0xccccccccccccccc;
        }
        if (uVar9 < 0xccccccccccccccd) {
          lVar7 = uVar9 * 0x14;
          __Znwm();
          *(long *)((long)puVar5 + 8) = lVar7;
          *(long *)((long)puVar5 + 0x10) = lVar7;
          *(ulong *)((long)puVar5 + 0x18) = lVar7 + uVar9 * 0x14;
          if (puVar10 != puVar2) {
            lVar12 = ((uVar13 - 0x14) / 0x14) * 0x14 + 0x14;
            _memcpy(lVar7,puVar10,lVar12);
            lVar7 = lVar7 + lVar12;
          }
          *(long *)((long)puVar5 + 0x10) = lVar7;
          return (undefined1 *)puVar5;
        }
      }
      FUN_10adb8ea4();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10adb8e38);
      (*pcVar4)();
    }
    puVar8 = *(undefined8 **)((long)puVar5 + 0x10);
    if ((ulong)((long)puVar8 - (long)puVar6) < uVar13) {
      puVar1 = (undefined8 *)((long)puVar10 + ((long)puVar8 - (long)puVar6));
      puVar3 = puVar8;
      if (puVar8 != puVar6) {
        do {
          uVar14 = *puVar10;
          puVar6[1] = puVar10[1];
          *puVar6 = uVar14;
          *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar10 + 2);
          puVar10 = (undefined8 *)((long)puVar10 + 0x14);
          puVar6 = (undefined8 *)((long)puVar6 + 0x14);
        } while (puVar10 != puVar1);
        puVar8 = *(undefined8 **)((long)puVar5 + 0x10);
        puVar3 = puVar8;
      }
      for (; puVar1 != puVar2; puVar1 = (undefined8 *)((long)puVar1 + 0x14)) {
        uVar15 = puVar1[1];
        uVar14 = *puVar1;
        *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(puVar1 + 2);
        puVar8[1] = uVar15;
        *puVar8 = uVar14;
        puVar8 = (undefined8 *)((long)puVar8 + 0x14);
        puVar3 = (undefined8 *)((long)puVar3 + 0x14);
      }
      *(undefined8 **)((long)puVar5 + 0x10) = puVar3;
    }
    else {
      for (; puVar10 != puVar2; puVar10 = (undefined8 *)((long)puVar10 + 0x14)) {
        uVar14 = *puVar10;
        puVar6[1] = puVar10[1];
        *puVar6 = uVar14;
        *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar10 + 2);
        puVar6 = (undefined8 *)((long)puVar6 + 0x14);
      }
      *(undefined8 **)((long)puVar5 + 0x10) = puVar6;
    }
  }
  return (undefined1 *)puVar5;
}



/* Entry: 10adb8e4c; end: 10adb8e7f; -[LSATouchHandlingDescriptor shouldAllowTouchAtNormalizedPoint:touchTypeMask:] */

uint FUN_10adb8e4c(double param_1,double param_2,long param_3)

{
  float fStack_18;
  float fStack_14;
  
  fStack_18 = (float)param_1;
  fStack_14 = (float)param_2;
  param_3 = param_3 + 8;
  FUN_10ad48100(param_3,&fStack_18);
  return (uint)param_3 ^ 1;
}



/* Entry: 10adb8e80; end: 10adb8e97; -[LSATouchHandlingDescriptor .cxx_destruct] */

void FUN_10adb8e80(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10adb8e98; end: 10adb8ea3; -[LSATouchHandlingDescriptor .cxx_construct] */

void FUN_10adb8e98(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10adb8ea4; end: 10adb8eb7;  */

void FUN_10adb8ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  ppuVar2 = &puStack_50;
  puStack_48 = PTR_PTR_112701438;
  puStack_50 = puVar1;
  _objc_msgSendSuper2(&puStack_50,PTR_s_init_1125d9248);
  if (ppuVar2 != (undefined **)0x0) {
    *(undefined8 *)((long)ppuVar2 + 0x18) = param_1;
    *(undefined8 *)((long)ppuVar2 + 0x20) = param_2;
    *(undefined8 *)((long)ppuVar2 + 8) = param_5;
    *(undefined8 *)((long)ppuVar2 + 0x10) = param_6;
  }
  return;
}



/* Entry: 10adb8eb8; end: 10adb8f17; -[LSATouch initWithIdentifier:normalizedLocationInView:phase:] */

void FUN_10adb8eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112701438;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
  }
  return;
}



/* Entry: 10adb8f18; end: 10adb9087; -[LSATouch initWithTouch:inView:] */

undefined8
FUN_10adb8f18(undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010bf20c00(param_8);
  if ((param_3 == 0.0) || (func_0x00010bf20c00(param_8), param_4 == 0.0)) {
    uVar1 = 0;
  }
  else {
    func_0x00010bf20c00(param_8);
    func_0x00010bf20c00(param_8);
    param_3 = 1.0 / param_3;
    param_4 = 1.0 / param_4;
    _CGAffineTransformMakeScale(&dStack_a0,param_3,param_4);
    func_0x00010c09ef00(param_7,param_6,param_8);
    uVar1 = param_7;
    func_0x00010bfde980(param_7);
    uVar2 = param_7;
    func_0x00010c0fa9c0(param_7);
    func_0x00010c01b820(dStack_80 + param_4 * dStack_90 + param_3 * dStack_a0,
                        dStack_78 + param_4 * dStack_88 + param_3 * dStack_98,param_5,param_6,uVar1,
                        uVar2);
    _objc_retain();
    uVar1 = param_5;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  return uVar1;
}


