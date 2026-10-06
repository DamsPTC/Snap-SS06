/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b75ce50; end: 10b75cf8b;  */

void FUN_10b75ce50(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b75cf8c; end: 10b75cfcf; -[SCCGenerativeAiFriend initWithUserId:displayName:] */

void FUN_10b75cf8c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270a908;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b75cfd0; end: 10b75cfe7; +[SCCGenerativeAiFriend valdiMarshallableObjectDescriptor] */

void FUN_10b75cfd0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_userId_110d5c1a0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b75cfe8; end: 10b75d017; -[SCUnlockableDataStoreServices setUnlockableDataStore:] */

void FUN_10b75cfe8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b75d018; end: 10b75d01f; -[SCUnlockableDataStoreServices unlockableDataStoreFilterProvider] */

undefined8 FUN_10b75d018(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b75d020; end: 10b75d04f; -[SCUnlockableDataStoreServices setUnlockableDataStoreFilterProvider:] */

void FUN_10b75d020(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b75d050; end: 10b75d07f; -[SCUnlockableDataStoreServices setUnlockableFilteredDataStoreCreator:] */

void FUN_10b75d050(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b75d080; end: 10b75d087; -[SCUnlockableDataStoreServices unlockableFilteredKarmaDataStoreCreator] */

undefined8 FUN_10b75d080(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b75d088; end: 10b75d0b7; -[SCUnlockableDataStoreServices setUnlockableFilteredKarmaDataStoreCreator:] */

void FUN_10b75d088(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b75d0b8; end: 10b75d0ff; -[SCUnlockableDataStoreServices .cxx_destruct] */

void FUN_10b75d0b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b75d100; end: 10b75d10b; -[SCLensMetadataUpdatingServices .cxx_destruct] */

void FUN_10b75d100(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b75d10c; end: 10b75d117; -[SCLensPerformerServices .cxx_destruct] */

void FUN_10b75d10c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b75d118; end: 10b75d293; -[SCLensUIUpdateListenerAnnouncer description] */

void FUN_10b75d118(long param_1)

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
  
  FUN_10b75d294(&plStack_60,param_1 + 0x48);
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



/* Entry: 10b75d294; end: 10b75d2f3;  */

void FUN_10b75d294(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10b75d2f4; end: 10b75d523; -[SCLensUIUpdateListenerAnnouncer removeListener:] */

void FUN_10b75d2f4(long param_1,undefined8 param_2,long param_3)

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
  if (plVar6 == (long *)0x0) goto LAB_10b75d4a8;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_10b75d35c;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    func_0x000107c309cc(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10b75d4a8;
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
LAB_10b75d35c:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110d5c250;
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
          func_0x000107c309c8(plVar9,lVar7);
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
    func_0x000107c309cc(puVar8,&plStack_90);
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
    if (plStack_78 == (long *)0x0) goto LAB_10b75d4a8;
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
LAB_10b75d4a8:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b75d524; end: 10b75d5fb; -[SCLensUIUpdateListenerAnnouncer willShowLensesWithContext:] */

void FUN_10b75d524(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  FUN_10b75d294(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c2a6ba0();
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



/* Entry: 10b75d5fc; end: 10b75d6d3; -[SCLensUIUpdateListenerAnnouncer didHideLensesWithContext:] */

void FUN_10b75d5fc(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  FUN_10b75d294(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf77380();
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



/* Entry: 10b75d6d4; end: 10b75d7c7; -[SCLensUIUpdateListenerAnnouncer didUpdateActiveLensOrder:withContext:] */

void FUN_10b75d6d4(long param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_10b75d294(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf7df60();
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



/* Entry: 10b75d7c8; end: 10b75d8bb; -[SCLensUIUpdateListenerAnnouncer didActivateLens:withContext:] */

void FUN_10b75d7c8(long param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_10b75d294(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf72240();
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



/* Entry: 10b75d8bc; end: 10b75d9af; -[SCLensUIUpdateListenerAnnouncer didSelectLens:withContext:] */

void FUN_10b75d8bc(long param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_10b75d294(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf7ab80();
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



/* Entry: 10b75d9b0; end: 10b75daa3; -[SCLensUIUpdateListenerAnnouncer willDisplayLens:withContext:] */

void FUN_10b75d9b0(long param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_10b75d294(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c2a6160();
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



/* Entry: 10b75daa4; end: 10b75db97; -[SCLensUIUpdateListenerAnnouncer didUpdateDisplayedLens:withContext:] */

void FUN_10b75daa4(long param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_10b75d294(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf7e180();
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



/* Entry: 10b75db98; end: 10b75dc8b; -[SCLensUIUpdateListenerAnnouncer didEndDisplayingLens:withContext:] */

void FUN_10b75db98(long param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_10b75d294(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf75920();
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



/* Entry: 10b75dc8c; end: 10b75ddaf; -[SCLensUIUpdateListenerAnnouncer didDrawIcon:forLens:atIndex:withContext:] */

void FUN_10b75dc8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_60;
  long *plStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_10b75d294(&plStack_60,param_1 + 0x48);
  if (plStack_60 != (long *)0x0) {
    lVar2 = plStack_60[1];
    for (lVar6 = *plStack_60; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf75580();
      _objc_release(lVar5);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b75ddb0; end: 10b75ddd7; -[SCLensUIUpdateListenerAnnouncer .cxx_destruct] */

void FUN_10b75ddb0(long param_1)

{
  FUN_10b75ddec(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 10b75ddd8; end: 10b75ddeb;  */

undefined * FUN_10b75ddd8(void)

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



/* Entry: 10b75ddec; end: 10b75de43;  */

long FUN_10b75ddec(long param_1)

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



/* Entry: 10b75de44; end: 10b75de53;  */

void FUN_10b75de44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d5c250;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b75de54; end: 10b75de73;  */

void FUN_10b75de54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d5c250;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b75de74; end: 10b75dedb;  */

void FUN_10b75de74(long param_1)

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



/* Entry: 10b75dedc; end: 10b75dedf;  */

void FUN_10b75dedc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b75dee0; end: 10b75dee7; -[SCLensContentServices lensAssetsDataFetcher] */

undefined8 FUN_10b75dee0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b75dee8; end: 10b75deef; -[SCLensContentServices lensContentInfoProvider] */

undefined8 FUN_10b75dee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b75def0; end: 10b75df43; -[SCLensContentServices .cxx_destruct] */

void FUN_10b75def0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b75df44; end: 10b75df67; -[SCLensContentIconKey copyWithZone:] */

undefined8 FUN_10b75df44(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b75df68; end: 10b75e01f; -[SCLensContentIconKey hash] */

undefined8 * FUN_10b75df68(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  ulong uVar11;
  
  puVar4 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar9 = *(undefined4 *)(param_1 + 8);
  uVar10 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar9 >> 0x18),
                                           (uint6)(byte)((uint)uVar9 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar9) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar9 >> 8),(short)uVar10);
  uVar11 = CONCAT44((int)(uVar10 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar10 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
           0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar10 >> 0x30);
  uStack_58 = (ulong)uVar1 & 0xff;
  uStack_50 = uVar10 >> 0x10 & 0xff;
  uStack_48 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar10 >> 0x20)) & 0xffffffff;
  uStack_40 = (ulong)uVar8;
  uStack_38 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_30 = (ulong)*(byte *)(param_1 + 0xd);
  uStack_60 = uVar2;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10b75e118:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b75e124;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((((ulong)puVar5 & 1) != 0) &&
        ((((*(char *)((long)puVar4 + 8) == param_3[8] && (*(char *)((long)puVar4 + 9) == param_3[9])
           ) && (*(char *)((long)puVar4 + 10) == param_3[10])) &&
         ((*(char *)((long)puVar4 + 0xb) == param_3[0xb] &&
          (*(char *)((long)puVar4 + 0xc) == param_3[0xc])))))) &&
       (*(char *)((long)puVar4 + 0xd) == param_3[0xd])) {
      lVar6 = *(long *)((long)puVar4 + 0x10);
      if ((lVar6 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = *(long *)((long)puVar4 + 0x18);
        if ((lVar6 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          puVar7 = *(undefined1 **)((long)puVar4 + 0x20);
          if (puVar7 != *(undefined1 **)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b75e124;
          }
          goto LAB_10b75e118;
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10b75e124:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10b75e020; end: 10b75e13f; -[SCLensContentIconKey isEqual:] */

long FUN_10b75e020(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b75e118:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b75e124;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
          (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
         ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
          (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))))) &&
       (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b75e124;
          }
          goto LAB_10b75e118;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b75e124:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b75e140; end: 10b75e147; -[SCLensContentIconKey lensCode] */

undefined8 FUN_10b75e140(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b75e148; end: 10b75e14f; -[SCLensContentIconKey isOriginalLens] */

undefined1 FUN_10b75e148(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b75e150; end: 10b75e157; -[SCLensContentIconKey isVideoChatOriginalLens] */

undefined1 FUN_10b75e150(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b75e158; end: 10b75e15f; -[SCLensContentIconKey is3DBitmojiVideoChatLens] */

undefined1 FUN_10b75e158(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b75e160; end: 10b75e167; -[SCLensContentIconKey isBundledLens] */

undefined1 FUN_10b75e160(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b75e168; end: 10b75e16f; -[SCLensContentIconKey isDummyLens] */

undefined1 FUN_10b75e168(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10b75e170; end: 10b75e177; -[SCLensContentIconKey isUnavailableLens] */

undefined1 FUN_10b75e170(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10b75e178; end: 10b75e223; -[SCLensResourceId initWithIdentifier:checksum:] */

undefined1 *
FUN_10b75e178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a938;
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



/* Entry: 10b75e224; end: 10b75e247; -[SCLensResourceId copyWithZone:] */

undefined8 FUN_10b75e224(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b75e248; end: 10b75e2bb; -[SCLensResourceId hash] */

undefined8 * FUN_10b75e248(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b75e33c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b75e348;
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
          goto LAB_10b75e348;
        }
        goto LAB_10b75e33c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b75e348:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b75e2bc; end: 10b75e363; -[SCLensResourceId isEqual:] */

long FUN_10b75e2bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b75e33c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b75e348;
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
          goto LAB_10b75e348;
        }
        goto LAB_10b75e33c;
      }
    }
    lVar3 = 0;
  }
LAB_10b75e348:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b75e364; end: 10b75e36b; -[SCLensResourceId identifier] */

undefined8 FUN_10b75e364(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b75e36c; end: 10b75e373; -[SCLensResourceId checksum] */

undefined8 FUN_10b75e36c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b75e374; end: 10b75e3a3; -[SCLensResourceId .cxx_destruct] */

void FUN_10b75e374(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b75e3a4; end: 10b75e433;  */

void FUN_10b75e3a4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf898;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110daf898,
                      &PTR____CFConstantStringClassReference_110f7c3f8,0);
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



/* Entry: 10b75e434; end: 10b75e697; +[SCMachineReadableCodeResult machineReadableCodeResultFromSnapcodeDeepLinkURL:] */

void FUN_10b75e434(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar7 = (undefined *)0x0;
  if ((lVar2 == 0) || (lVar3 == 0)) goto LAB_10b75e65c;
  ppuVar5 = &PTR____CFConstantStringClassReference_110dbe6d8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbe6d8,param_2,lVar2);
  if (ppuVar5 == (undefined **)0x0) {
    if (lVar4 != 0) goto LAB_10b75e538;
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110f7c438;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7c438,param_2,lVar2);
    puVar7 = (undefined *)0x0;
    if ((ppuVar5 != (undefined **)0x0) || (lVar4 == 0)) goto LAB_10b75e65c;
LAB_10b75e538:
    puVar6 = PTR_PTR_1126df918;
    func_0x00010c242dc0(PTR_PTR_1126df918,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 != (undefined *)0x0) {
      func_0x00010c1a69e0();
      func_0x00010c17dc60(puVar6,param_2,0);
      lVar1 = lVar4;
      func_0x00010c067ec0(lVar4);
      func_0x00010c17dc80(puVar6,param_2,lVar1);
      func_0x00010c189480(puVar6,param_2,lVar3);
      lVar1 = param_3;
      func_0x00010c2475e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      if (lVar1 != 0) {
        lVar1 = param_3;
        func_0x00010c2475e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf72040(puVar7,param_2,lVar1,&PTR____CFConstantStringClassReference_110def0d8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        lVar1 = param_3;
        func_0x00010c11d6e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7,param_2,lVar1,&PTR____CFConstantStringClassReference_110def0f8);
        _objc_release(lVar1);
        func_0x00010c21bb00(puVar6,param_2,puVar7);
        _objc_release(puVar7);
      }
      puVar7 = PTR_PTR_1126cac80;
      func_0x00010c0b6140(PTR_PTR_1126cac80,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      goto LAB_10b75e65c;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_10b75e65c:
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10b75e698; end: 10b75e75f; +[SCMachineReadableCodeResult machineReadableCodeFromScanCodeId:codeTypeMeta:] */

void FUN_10b75e698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126df918;
  func_0x00010c242dc0(PTR_PTR_1126df918,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c1a69e0(puVar1,param_2,1);
    func_0x00010c17dc60(puVar1,param_2,0);
    uVar2 = param_4;
    func_0x00010c067ec0(param_4);
    func_0x00010c17dc80(puVar1,param_2,uVar2);
    func_0x00010c189480(puVar1,param_2,param_3);
  }
  puVar3 = PTR_PTR_1126cac80;
  func_0x00010c0b6140(PTR_PTR_1126cac80,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b75e760; end: 10b75e803; +[SCMachineReadableCodeResult machineReadableCodeFromDeeplinkUrlString:] */

void FUN_10b75e760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1068;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
  func_0x00010c04e820();
  _objc_release(param_3);
  func_0x00010c057c40(puVar1,param_2,puVar2,0);
  _objc_release(puVar2);
  func_0x00010c0b6120(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b75e804; end: 10b75e84f; +[SCMachineReadableCodeResult machineReadableCodeResultWithScannedData:] */

void FUN_10b75e804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cac80;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c041a40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b75e850; end: 10b75e9af; -[SCMachineReadableCodeResult initWithScannedData:] */

undefined1 * FUN_10b75e850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_11270a940;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    lVar3 = *(long *)((long)puVar1 + 8);
    func_0x00010c120080();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = *(long *)((long)puVar1 + 8);
      func_0x00010c120080();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c08fa60();
      _objc_release(lVar4);
      _objc_release(lVar3);
      if (lVar5 != 0) {
        puVar6 = PTR__OBJC_CLASS___NSUUID_1126b0270;
        _objc_alloc();
        uVar2 = *(undefined8 *)((long)puVar1 + 8);
        func_0x00010c120080(uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        func_0x00010bf25f00();
        func_0x00010c057e80();
        _objc_release(uVar2);
        puVar7 = puVar6;
        func_0x00010bdc3580();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c25cfc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
        *(undefined **)((long)puVar1 + 0x10) = puVar8;
        _objc_release(uVar2);
        _objc_release(puVar6);
      }
    }
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b75e9b0; end: 10b75eac7; -[SCMachineReadableCodeResult hasValidResult] */

undefined * FUN_10b75e9b0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar2 = *(long *)(param_1 + 8);
  if ((lVar2 == 0) || (func_0x00010bfdc560(), (int)lVar2 == 0)) {
    puVar4 = (undefined *)0x1;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010bf3ee00();
    if (iVar1 == 0) {
      puVar3 = PTR_PTR_1126e0720;
      func_0x00010bf9ef40(PTR_PTR_1126e0720,param_2,*(undefined8 *)(param_1 + 0x10));
      _objc_retainAutoreleasedReturnValue();
      puVar4 = (undefined *)(ulong)(puVar3 != (undefined *)0x0);
    }
    else {
      iVar1 = (int)*(undefined8 *)(param_1 + 8);
      func_0x00010bf3ee00();
      if (iVar1 == 1) {
        puVar3 = PTR_PTR_1126e0720;
        func_0x00010bf9ef40(PTR_PTR_1126e0720,param_2,*(undefined8 *)(param_1 + 0x10));
        _objc_retainAutoreleasedReturnValue();
        if ((puVar3 == (undefined *)0x0) ||
           (puVar4 = puVar3, func_0x00010c08fa60(), puVar4 < (undefined *)0xc)) {
          puVar4 = (undefined *)0x0;
        }
        else {
          puVar4 = puVar3;
          func_0x00010bf35920(puVar3,param_2,0xc);
          puVar4 = (undefined *)(ulong)((int)puVar4 == 0x34);
        }
      }
      else {
        iVar1 = (int)*(undefined8 *)(param_1 + 8);
        func_0x00010bf3ee00();
        puVar4 = PTR_PTR_1126e0720;
        if (iVar1 != 2) {
          return (undefined *)0x0;
        }
        puVar3 = *(undefined **)(param_1 + 8);
        func_0x00010c120080(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf385e0(puVar4,param_2,puVar3);
      }
    }
    _objc_release(puVar3);
  }
  return puVar4;
}



/* Entry: 10b75eac8; end: 10b75eacf; -[SCMachineReadableCodeResult scannedData] */

undefined8 FUN_10b75eac8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b75ead0; end: 10b75ead7; -[SCMachineReadableCodeResult setScannedData:] */

void FUN_10b75ead0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b75ead8; end: 10b75eadf; -[SCMachineReadableCodeResult scanSnapcodeData] */

undefined8 FUN_10b75ead8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b75eae0; end: 10b75eb0f; -[SCMachineReadableCodeResult .cxx_destruct] */

void FUN_10b75eae0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b75eb10; end: 10b75eb33; +[SCSnapScannedData stringFromCodeType:] */

undefined ** FUN_10b75eb10(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if (param_3 < 6) {
    return (undefined **)(&PTR_PTR_110d5c2a8)[param_3];
  }
  return &PTR____CFConstantStringClassReference_110db8b78;
}



/* Entry: 10b75eb34; end: 10b75eb57; +[SCSnapScannedData stringFromBarcodeType:] */

undefined ** FUN_10b75eb34(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if (param_3 < 4) {
    return (undefined **)(&PTR_PTR_110d5c2d8)[param_3];
  }
  return &PTR____CFConstantStringClassReference_110db8b78;
}



/* Entry: 10b75eb58; end: 10b75eb77; +[SCSnapScannedData sojuFromBarcodeType:] */

undefined8 FUN_10b75eb58(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if (param_3 < 4) {
    return *(undefined8 *)(&UNK_10e5db848 + (ulong)param_3 * 8);
  }
  return 0;
}



/* Entry: 10b75eb78; end: 10b75eb9b; -[SCSnapScannedData copyWithZone:] */

undefined8 FUN_10b75eb78(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b75eb9c; end: 10b75edb3; +[SCSnapScannedData snapScannedDataWithUUIDString:] */

undefined * FUN_10b75eb9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar7 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    _objc_alloc();
    func_0x00010c057ea0();
    if (puVar7 != (undefined *)0x0) {
LAB_10b75ebfc:
      puVar8 = PTR_PTR_1126df918;
      _objc_alloc_init(PTR_PTR_1126df918);
      func_0x00010bfcb980(puVar7,param_2,auStack_68);
      puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778,param_2,auStack_68,0x10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e77e0(puVar8,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar7);
      goto LAB_10b75ed70;
    }
    lVar1 = param_3;
    func_0x00010c08fa60();
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar1 == 0x20) {
      lVar1 = param_3;
      func_0x00010c260c80(param_3,param_2,0,8);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c260c80(param_3,param_2,8,4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010c260c80(param_3,param_2,0xc,4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010c260c80(param_3,param_2,0x10,4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010c260c80(param_3,param_2,0x14,0xc);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar8,param_2,&PTR____CFConstantStringClassReference_110e8a298);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar1);
      puVar7 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      _objc_alloc();
      func_0x00010c057ea0();
      _objc_release(puVar8);
      if (puVar7 != (undefined *)0x0) goto LAB_10b75ebfc;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_10b75ed70:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar1 = param_3;
    func_0x00010bf3ede0();
    if ((((int)lVar1 == 0) || (lVar1 = param_3, func_0x00010bf3ede0(), (int)lVar1 == 3)) ||
       (lVar1 = param_3, func_0x00010bf3ede0(), (int)lVar1 == 5)) {
      puVar7 = (undefined *)0x1;
    }
    else {
      func_0x00010bf3ede0(param_3);
      puVar7 = (undefined *)(ulong)((int)param_3 == 4);
    }
    return puVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return puVar8;
}



/* Entry: 10b75edb4; end: 10b75ee0f; -[SCSnapScannedData hasSnapcodeType] */

bool FUN_10b75edb4(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010bf3ede0();
  if ((((int)uVar2 == 0) || (uVar2 = param_1, func_0x00010bf3ede0(), (int)uVar2 == 3)) ||
     (uVar2 = param_1, func_0x00010bf3ede0(), (int)uVar2 == 5)) {
    bVar1 = true;
  }
  else {
    func_0x00010bf3ede0(param_1);
    bVar1 = (int)param_1 == 4;
  }
  return bVar1;
}



/* Entry: 10b75ee10; end: 10b75ee17; -[SCSnapScannedData hasScannedData] */

undefined1 FUN_10b75ee10(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b75ee18; end: 10b75ee1f; -[SCSnapScannedData setHasScannedData:] */

void FUN_10b75ee18(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b75ee20; end: 10b75ee27; -[SCSnapScannedData codeType] */

undefined4 FUN_10b75ee20(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b75ee28; end: 10b75ee2f; -[SCSnapScannedData setCodeType:] */

void FUN_10b75ee28(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10b75ee30; end: 10b75ee37; -[SCSnapScannedData codeTypeMeta] */

undefined4 FUN_10b75ee30(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10b75ee38; end: 10b75ee3f; -[SCSnapScannedData setCodeTypeMeta:] */

void FUN_10b75ee38(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b75ee40; end: 10b75ee47; -[SCSnapScannedData data] */

undefined8 FUN_10b75ee40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b75ee48; end: 10b75ee77; -[SCSnapScannedData setData:] */

void FUN_10b75ee48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b75ee78; end: 10b75ee7f; -[SCSnapScannedData rawData] */

undefined8 FUN_10b75ee78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b75ee80; end: 10b75eeaf; -[SCSnapScannedData setRawData:] */

void FUN_10b75ee80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b75eeb0; end: 10b75eeb7; -[SCSnapScannedData songInfo] */

undefined8 FUN_10b75eeb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b75eeb8; end: 10b75eee7; -[SCSnapScannedData setSongInfo:] */

void FUN_10b75eeb8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b75eee8; end: 10b75eeef; -[SCSnapScannedData unlockProperties] */

undefined8 FUN_10b75eee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b75eef0; end: 10b75ef1f; -[SCSnapScannedData setUnlockProperties:] */

void FUN_10b75eef0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b75ef20; end: 10b75ef27; -[SCSnapScannedData sceneIntelligenceRequestId] */

undefined8 FUN_10b75ef20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b75ef28; end: 10b75ef57; -[SCSnapScannedData setSceneIntelligenceRequestId:] */

void FUN_10b75ef28(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b75ef58; end: 10b75efab; -[SCSnapScannedData .cxx_destruct] */

void FUN_10b75ef58(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b75efac; end: 10b75f003; +[SCSnapcodeUtil extractUUIDStringFromScanData:] */

void FUN_10b75efac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfe11a0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c245280(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b75f004; end: 10b75f067; +[SCSnapcodeUtil snapcodeUUIDFromSnapcodeData:] */

void FUN_10b75f004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bf25f00();
  _objc_release(param_3);
  func_0x00010c057e80(puVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b75f068; end: 10b75f0db; +[SCSnapcodeUtil snapcodeUUIDStringFromSnapcodeData:] */

void FUN_10b75f068(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c245260();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b75f0dc; end: 10b75f17f; +[SCSnapcodeUtil checkStudioTokenValidity:] */

bool FUN_10b75f0dc(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  uint uVar1;
  bool bVar2;
  byte *pbVar3;
  short sVar4;
  uint uVar5;
  byte *pbVar6;
  
  _objc_retain(param_3);
  pbVar3 = param_3;
  func_0x00010c08fa60();
  if (pbVar3 == (byte *)0x10) {
    pbVar3 = param_3;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    sVar4 = 0xe;
    uVar5 = 0xffff;
    pbVar6 = pbVar3;
    do {
      sVar4 = sVar4 + -1;
      uVar1 = (uint)*pbVar6 ^ (uVar5 & 0xff00) >> 8;
      uVar1 = uVar1 ^ uVar1 >> 4;
      uVar5 = (uVar1 | uVar5 << 8) ^ uVar1 << 0xc ^ uVar1 << 5;
      pbVar6 = pbVar6 + 1;
    } while (sVar4 != 0);
    bVar2 = (uVar5 & 0xffff) ==
            ((uint)(*(ushort *)(pbVar3 + 0xe) >> 8) | (*(ushort *)(pbVar3 + 0xe) & 0xff00ff) << 8);
  }
  else {
    bVar2 = false;
  }
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 10b75f180; end: 10b75f1eb; -[SCUnlockDeepLinkProcessor initWithNavigationDelegate:] */

undefined1 * FUN_10b75f180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a948;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b75f1ec; end: 10b75f1f3; -[SCUnlockDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:] */

void FUN_10b75f1ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd1d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_handleOpenURL_sourceApplication__1125d20e8);
  return;
}



/* Entry: 10b75f1f4; end: 10b75f34b; -[SCUnlockDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:source:] */

undefined8
FUN_10b75f1f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf2d020();
  if ((int)lVar2 == 0) {
    lVar2 = param_5;
    func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110f83958);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 == 0) {
      uVar6 = 0;
      goto LAB_10b75f320;
    }
  }
  else {
    _objc_release(lVar1);
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (param_5 != 0) {
    func_0x00010bef7f60(puVar4,param_2,param_5);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4,param_2,puVar5,&PTR____CFConstantStringClassReference_110f83918);
  _objc_release(puVar5);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10d100();
  _objc_release(param_1);
  _objc_release(puVar4);
  uVar6 = 1;
LAB_10b75f320:
  _objc_release(param_5);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 10b75f34c; end: 10b75f3e7; +[SCUnlockDeepLinkProcessor unlockDeeplinkTypeFromURL:] */

undefined8 FUN_10b75f34c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  func_0x00010c11d6e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dbe6d8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbe6d8,param_2,uVar1);
  if (ppuVar2 == (undefined **)0x0) {
    uVar3 = 1;
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f7c438;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7c438,param_2,uVar1);
    uVar3 = 2;
    if (ppuVar2 != (undefined **)0x0) {
      uVar3 = 0;
    }
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10b75f3e8; end: 10b75f3f3; +[SCUnlockDeepLinkProcessor machineReadableCodeResultFromSnapcodeDeepLinkURL:] */

void FUN_10b75f3e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b6130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126cac80,PTR_s_machineReadableCodeResultFromSna_11260b260);
  return;
}



/* Entry: 10b75f3f4; end: 10b75f3fb; -[SCUnlockDeepLinkProcessor .cxx_destruct] */

void FUN_10b75f3f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b75f3fc; end: 10b75f493; -[SCScanSourceInformation initWithScanSource:deeplinkSource:page:openFromPreview:skipRecordInScanHistory:openFromCameraRoll:relaunchFromInformationIcon:openFromScanHistory:isLensPreview:publicProfileScanUserAction:] */

void FUN_10b75f3fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_11270a950;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
    *(undefined1 *)((long)puVar1 + 0xb) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0xc) = param_9._1_1_;
    *(undefined1 *)((long)puVar1 + 0xd) = param_9._2_1_;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined8 *)((long)puVar1 + 0x28) = param_11;
  }
  return;
}



/* Entry: 10b75f494; end: 10b75f4b7; -[SCScanSourceInformation copyWithZone:] */

undefined8 FUN_10b75f494(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b75f4b8; end: 10b75f5df; -[SCScanSourceInformation initWithCoder:] */

undefined1 * FUN_10b75f4b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a950;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xc) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xd) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b75f5e0; end: 10b75f6df; -[SCScanSourceInformation encodeWithCoder:] */

void FUN_10b75f5e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f7c538);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f7c558);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110daedd8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f7c578);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f7c598);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110f7c5b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                      &PTR____CFConstantStringClassReference_110f7c5d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110f7c5f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xd),
                      &PTR____CFConstantStringClassReference_110f7c618);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f7c638);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b75f6e0; end: 10b75f6e7; -[SCScanSourceInformation preferFasterCoding] */

undefined8 FUN_10b75f6e0(void)

{
  return 1;
}


