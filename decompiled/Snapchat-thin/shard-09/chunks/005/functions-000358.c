/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e780f4; end: 106e780ff; -[SCChatThreatsScanningServices .cxx_destruct] */

void FUN_106e780f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e78100; end: 106e78173; -[SCRecipientListServices initWithListsDataCoordinator:] */

undefined1 * FUN_106e78100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7900;
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



/* Entry: 106e78174; end: 106e7817b; -[SCRecipientListServices listsDataCoordinator] */

undefined8 FUN_106e78174(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e7817c; end: 106e78187; -[SCRecipientListServices .cxx_destruct] */

void FUN_106e7817c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e78188; end: 106e781ab; -[SCRecipientListsFetchAllListsDataRequest copyWithZone:] */

undefined8 FUN_106e78188(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e781ac; end: 106e7821b; -[SCRecipientListsFetchAllListsDataRequest isEqual:] */

uint FUN_106e781ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if ((param_1 != 0) && (param_3 != 0)) {
      _objc_opt_class(param_1);
      lVar1 = param_3;
      _objc_opt_isKindOfClass(param_3,param_1);
      uVar2 = (uint)lVar1;
    }
  }
  _objc_release(param_3);
  return uVar2 & 1;
}



/* Entry: 106e7821c; end: 106e78293; -[SCRecipientListsCreateListsDataRequest initWithPendingLists:] */

undefined1 * FUN_106e7821c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7908;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e78294; end: 106e782b7; -[SCRecipientListsCreateListsDataRequest copyWithZone:] */

undefined8 FUN_106e78294(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e782b8; end: 106e782bf; -[SCRecipientListsCreateListsDataRequest hash] */

void FUN_106e782b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 106e782c0; end: 106e7834f; -[SCRecipientListsCreateListsDataRequest isEqual:] */

long FUN_106e782c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e78334;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_106e78334;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_106e78334;
    }
  }
  lVar3 = 1;
LAB_106e78334:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e78350; end: 106e78357; -[SCRecipientListsCreateListsDataRequest pendingLists] */

undefined8 FUN_106e78350(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e78358; end: 106e78363; -[SCRecipientListsCreateListsDataRequest .cxx_destruct] */

void FUN_106e78358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e78364; end: 106e783db; -[SCRecipientListsDeleteListsDataRequest initWithListIdsToDelete:] */

undefined1 * FUN_106e78364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7910;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e783dc; end: 106e783ff; -[SCRecipientListsDeleteListsDataRequest copyWithZone:] */

undefined8 FUN_106e783dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e78400; end: 106e78407; -[SCRecipientListsDeleteListsDataRequest hash] */

void FUN_106e78400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 106e78408; end: 106e78497; -[SCRecipientListsDeleteListsDataRequest isEqual:] */

long FUN_106e78408(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e7847c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_106e7847c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_106e7847c;
    }
  }
  lVar3 = 1;
LAB_106e7847c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e78498; end: 106e7849f; -[SCRecipientListsDeleteListsDataRequest listIdsToDelete] */

undefined8 FUN_106e78498(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e784a0; end: 106e784ab; -[SCRecipientListsDeleteListsDataRequest .cxx_destruct] */

void FUN_106e784a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e784ac; end: 106e78523; -[SCRecipientListsUpdateListsDataRequest initWithUpdatedLists:] */

undefined1 * FUN_106e784ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7918;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e78524; end: 106e78547; -[SCRecipientListsUpdateListsDataRequest copyWithZone:] */

undefined8 FUN_106e78524(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e78548; end: 106e7854f; -[SCRecipientListsUpdateListsDataRequest hash] */

void FUN_106e78548(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 106e78550; end: 106e785df; -[SCRecipientListsUpdateListsDataRequest isEqual:] */

long FUN_106e78550(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e785c4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_106e785c4;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_106e785c4;
    }
  }
  lVar3 = 1;
LAB_106e785c4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e785e0; end: 106e785e7; -[SCRecipientListsUpdateListsDataRequest updatedLists] */

undefined8 FUN_106e785e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e785e8; end: 106e785f3; -[SCRecipientListsUpdateListsDataRequest .cxx_destruct] */

void FUN_106e785e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e785f4; end: 106e7876f; -[SCRecipientListsDataRequestListenerAnnouncer description] */

void FUN_106e785f4(long param_1)

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
  
  FUN_106e78770(&plStack_60,param_1 + 0x48);
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



/* Entry: 106e78770; end: 106e787cf;  */

void FUN_106e78770(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 106e787d0; end: 106e78a7b; -[SCRecipientListsDataRequestListenerAnnouncer addListener:] */

undefined8 FUN_106e787d0(long param_1,undefined8 param_2,long param_3)

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
  *plVar3 = (long)&PTR_FUN_110981688;
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
    FUN_106e78a7c(plVar10,auStack_90);
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
    FUN_106e78bbc(puVar8,&plStack_a0);
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
LAB_106e78984:
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
      goto LAB_106e789a4;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_106e78a7c(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_106e78a7c(plVar10,auStack_78);
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
    FUN_106e78bbc(puVar8,&plStack_88);
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
      goto LAB_106e78984;
    }
  }
  uVar9 = 1;
LAB_106e789a4:
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



/* Entry: 106e78a7c; end: 106e78bbb;  */

void FUN_106e78a7c(long *param_1,long *param_2)

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
      FUN_106e78f88();
LAB_106e78bb8:
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
      if (uVar7 >> 0x3d != 0) goto LAB_106e78bb8;
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



/* Entry: 106e78bbc; end: 106e78c03;  */

void FUN_106e78bbc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 106e78c04; end: 106e78e33; -[SCRecipientListsDataRequestListenerAnnouncer removeListener:] */

void FUN_106e78c04(long param_1,undefined8 param_2,long param_3)

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
  if (plVar6 == (long *)0x0) goto LAB_106e78db8;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_106e78c6c;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_106e78bbc(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_106e78db8;
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
LAB_106e78c6c:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110981688;
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
          FUN_106e78a7c(plVar9,lVar7);
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
    FUN_106e78bbc(puVar8,&plStack_90);
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
    if (plStack_78 == (long *)0x0) goto LAB_106e78db8;
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
LAB_106e78db8:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e78e34; end: 106e78f3f; -[SCRecipientListsDataRequestListenerAnnouncer didUpdateListsWithLists:deletedListIds:] */

void FUN_106e78e34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_106e78770(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf7e3c0();
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



/* Entry: 106e78f40; end: 106e78f67; -[SCRecipientListsDataRequestListenerAnnouncer .cxx_destruct] */

void FUN_106e78f40(long param_1)

{
  FUN_106e78f9c(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 106e78f68; end: 106e78f87; -[SCRecipientListsDataRequestListenerAnnouncer .cxx_construct] */

void FUN_106e78f68(long param_1)

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



/* Entry: 106e78f88; end: 106e78f9b;  */

undefined * FUN_106e78f88(void)

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



/* Entry: 106e78f9c; end: 106e78ff3;  */

long FUN_106e78f9c(long param_1)

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



/* Entry: 106e78ff4; end: 106e79003;  */

void FUN_106e78ff4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110981688;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106e79004; end: 106e79023;  */

void FUN_106e79004(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110981688;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e79024; end: 106e7908b;  */

void FUN_106e79024(long param_1)

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



/* Entry: 106e7908c; end: 106e7908f;  */

void FUN_106e7908c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e79090; end: 106e7921b;  */

void FUN_106e79090(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined ***pppuVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined4 uStack_514;
  undefined8 *puStack_510;
  undefined8 *puStack_508;
  undefined8 uStack_500;
  undefined **ppuStack_4f8;
  undefined4 uStack_4f0;
  undefined4 uStack_4e0;
  undefined ***pppuStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  long *plStack_498;
  long *plStack_490;
  undefined1 uStack_481;
  undefined **ppuStack_480;
  undefined4 uStack_478;
  undefined2 uStack_468;
  undefined2 uStack_466;
  undefined1 *puStack_448;
  undefined ***pppuStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long *plStack_420;
  long *plStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 uStack_311;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  ulong auStack_290 [17];
  undefined **appuStack_208 [9];
  undefined8 auStack_1c0 [3];
  long *plStack_1a8;
  long *plStack_1a0;
  long lStack_188;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_2);
      }
      uVar3 = *(undefined8 *)(lVar13 * 8);
      lVar9 = 0;
      FUN_106e7abbc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar3);
      lVar13 = lVar13 + 1;
    } while (lVar2 != lVar13);
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release(param_2);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar9);
  _objc_opt_class(PTR_PTR_1126c0b48);
  if (lVar2 == 0) {
    uStack_2e0 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_310,lVar2);
  }
  puVar4 = &uStack_311;
  FUN_106e7a060(puVar4);
  _objc_retain(lVar9);
  uStack_328 = 0;
  uStack_320 = 0;
  uStack_330 = 0;
  lVar5 = lVar9;
  func_0x00010bf529e0(lVar9);
  func_0x0001004c2bb4(&uStack_330,lVar5);
  puStack_2c8 = (undefined8 *)0x0;
  puStack_2d0 = (undefined8 *)0x0;
  uStack_2b8 = 0;
  plStack_2c0 = (long *)0x0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  _objc_retain(lVar9);
  lVar5 = lVar9;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar11 = *plStack_2c0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_2c0 != lVar11) {
          _objc_enumerationMutation(lVar9);
        }
        uVar12 = *(ulong *)((long)puStack_2c8 + lVar13 * 8);
        _objc_retain(uVar12);
        auStack_290[0] = uVar12;
        func_0x0001004c2d3c(&uStack_330,auStack_290);
        _objc_release(auStack_290[0]);
        lVar13 = lVar13 + 1;
      } while (lVar5 != lVar13);
      lVar5 = lVar9;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar9);
  _objc_release(lVar9);
  func_0x0001004c2e3c(appuStack_208,0xc,puVar4,&uStack_330);
  puStack_2d0 = (undefined8 *)0x0;
  puStack_2c8 = (undefined8 *)0x0;
  plStack_2c0 = (long *)0x0;
  auStack_290[0] = auStack_290[0] & 0xffffffff00000000;
  puVar6 = &uStack_310;
  pppuVar10 = appuStack_208;
  func_0x0001000e77a0(puVar6,pppuVar10,&puStack_2d0,auStack_290);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_2d0 != (undefined8 *)0x0) {
    puStack_2c8 = puStack_2d0;
    __ZdlPv();
  }
  plVar1 = plStack_1a0;
  appuStack_208[0] = &PTR_SUB_110862700;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_2d0 = auStack_1c0;
  func_0x000100105004(&puStack_2d0);
  puStack_2d0 = &uStack_330;
  func_0x000100105004(&puStack_2d0);
  func_0x0001000e76e0(&uStack_2e8);
  _objc_release(uStack_2f8);
  _objc_release(uStack_300);
  _objc_retain(puVar6);
  puVar7 = puVar6;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (puVar7 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(puVar6);
      }
      pppuVar10 = *(undefined ****)((long)puVar14 * 8);
      puVar8 = PTR_PTR_1126d2e90;
      FUN_106e7ab48();
      _objc_retainAutoreleasedReturnValue();
      if (puVar8 != (undefined *)0x0) {
        func_0x00010c25ed40(lVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      _objc_release(puVar8);
      puVar14 = (undefined8 *)((long)puVar14 + 1);
    } while (puVar7 != puVar14);
    puVar7 = puVar6;
    func_0x00010bf52a60();
  }
  _objc_release(puVar6);
  _objc_release(puVar6);
  _objc_release(lVar9);
  lVar5 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  _objc_release(lVar9);
  _objc_release(lVar2);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(pppuVar10);
  _objc_opt_class(PTR_PTR_1126c0b48);
  if (lVar5 == 0) {
    uStack_3e0 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_408 = 0;
    uStack_410 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_410,lVar5);
  }
  puVar4 = &uStack_481;
  FUN_106e7a060();
  uStack_4f0 = 0xf;
  uStack_4e0 = 0x100;
  _objc_retain(pppuVar10);
  ppuStack_4f8 = &PTR_DAT_110862760;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  plStack_498 = (long *)0x0;
  uStack_4a0 = 0;
  plStack_490 = (long *)0x0;
  uStack_466 = *(undefined2 *)(puVar4 + 0x1a);
  uStack_478 = 10;
  uStack_468 = 0x100;
  ppuStack_480 = &PTR_SUB_110862700;
  uStack_430 = 0;
  uStack_438 = 0;
  plStack_420 = (long *)0x0;
  uStack_428 = 0;
  plStack_418 = (long *)0x0;
  puStack_510 = (undefined8 *)0x0;
  puStack_508 = (undefined8 *)0x0;
  uStack_500 = 0;
  uStack_514 = 0;
  puVar7 = &uStack_410;
  pppuStack_4c8 = pppuVar10;
  puStack_448 = puVar4;
  pppuStack_440 = &ppuStack_4f8;
  func_0x0001000e77a0(puVar7,&ppuStack_480,&puStack_510,&uStack_514);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (puStack_510 != (undefined8 *)0x0) {
    puStack_508 = puStack_510;
    __ZdlPv();
  }
  plVar1 = plStack_418;
  ppuStack_480 = &PTR_SUB_110862700;
  plStack_418 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_420;
  plStack_420 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_510 = &uStack_438;
  func_0x000100105004(&puStack_510);
  plVar1 = plStack_490;
  ppuStack_4f8 = &PTR_DAT_110862760;
  plStack_490 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_498;
  plStack_498 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_510 = &uStack_4b0;
  func_0x000100105004(&puStack_510);
  _objc_release(pppuStack_4c8);
  func_0x0001000e76e0(&uStack_3e8);
  _objc_release(uStack_3f8);
  _objc_release(uStack_400);
  _objc_release(pppuVar10);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106e7921c; end: 106e795cf;  */

void FUN_106e7921c(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 uStack_3f4;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 uStack_3e0;
  undefined **ppuStack_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3c0;
  undefined ***pppuStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long *plStack_378;
  long *plStack_370;
  undefined1 uStack_361;
  undefined **ppuStack_360;
  undefined4 uStack_358;
  undefined2 uStack_348;
  undefined2 uStack_346;
  undefined1 *puStack_328;
  undefined ***pppuStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f1;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong auStack_170 [17];
  undefined **appuStack_e8 [9];
  undefined8 auStack_a0 [3];
  long *plStack_88;
  long *plStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126c0b48);
  if (param_1 == 0) {
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1f0,param_1);
  }
  puVar2 = &uStack_1f1;
  FUN_106e7a060(puVar2);
  _objc_retain(param_2);
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_210 = 0;
  lVar3 = param_2;
  func_0x00010bf529e0(param_2);
  func_0x0001004c2bb4(&uStack_210,lVar3);
  puStack_1a8 = (undefined8 *)0x0;
  puStack_1b0 = (undefined8 *)0x0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_1a0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1a0 != lVar9) {
          _objc_enumerationMutation(param_2);
        }
        uVar8 = *(ulong *)((long)puStack_1a8 + lVar10 * 8);
        _objc_retain(uVar8);
        auStack_170[0] = uVar8;
        func_0x0001004c2d3c(&uStack_210,auStack_170);
        _objc_release(auStack_170[0]);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = param_2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_2);
  _objc_release(param_2);
  func_0x0001004c2e3c(appuStack_e8,0xc,puVar2,&uStack_210);
  puStack_1b0 = (undefined8 *)0x0;
  puStack_1a8 = (undefined8 *)0x0;
  plStack_1a0 = (long *)0x0;
  auStack_170[0] = auStack_170[0] & 0xffffffff00000000;
  puVar4 = &uStack_1f0;
  pppuVar7 = appuStack_e8;
  func_0x0001000e77a0(puVar4,pppuVar7,&puStack_1b0,auStack_170);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1b0 != (undefined8 *)0x0) {
    puStack_1a8 = puStack_1b0;
    __ZdlPv();
  }
  plVar1 = plStack_80;
  appuStack_e8[0] = &PTR_SUB_110862700;
  plStack_80 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_88;
  plStack_88 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1b0 = auStack_a0;
  func_0x000100105004(&puStack_1b0);
  puStack_1b0 = &uStack_210;
  func_0x000100105004(&puStack_1b0);
  func_0x0001000e76e0(&uStack_1c8);
  _objc_release(uStack_1d8);
  _objc_release(uStack_1e0);
  _objc_retain(puVar4);
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar5 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar4);
      }
      pppuVar7 = *(undefined ****)((long)puVar11 * 8);
      puVar6 = PTR_PTR_1126d2e90;
      FUN_106e7ab48();
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 != (undefined *)0x0) {
        func_0x00010c25ed40(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      _objc_release(puVar6);
      puVar11 = (undefined8 *)((long)puVar11 + 1);
    } while (puVar5 != puVar11);
    puVar5 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(param_2);
  lVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(pppuVar7);
  _objc_opt_class(PTR_PTR_1126c0b48);
  if (lVar3 == 0) {
    uStack_2c0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_2f0,lVar3);
  }
  puVar2 = &uStack_361;
  FUN_106e7a060();
  uStack_3d0 = 0xf;
  uStack_3c0 = 0x100;
  _objc_retain(pppuVar7);
  ppuStack_3d8 = &PTR_DAT_110862760;
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  plStack_378 = (long *)0x0;
  uStack_380 = 0;
  plStack_370 = (long *)0x0;
  uStack_346 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_358 = 10;
  uStack_348 = 0x100;
  ppuStack_360 = &PTR_SUB_110862700;
  uStack_310 = 0;
  uStack_318 = 0;
  plStack_300 = (long *)0x0;
  uStack_308 = 0;
  plStack_2f8 = (long *)0x0;
  puStack_3f0 = (undefined8 *)0x0;
  puStack_3e8 = (undefined8 *)0x0;
  uStack_3e0 = 0;
  uStack_3f4 = 0;
  puVar5 = &uStack_2f0;
  pppuStack_3a8 = pppuVar7;
  puStack_328 = puVar2;
  pppuStack_320 = &ppuStack_3d8;
  func_0x0001000e77a0(puVar5,&ppuStack_360,&puStack_3f0,&uStack_3f4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puStack_3f0 != (undefined8 *)0x0) {
    puStack_3e8 = puStack_3f0;
    __ZdlPv();
  }
  plVar1 = plStack_2f8;
  ppuStack_360 = &PTR_SUB_110862700;
  plStack_2f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_300;
  plStack_300 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_3f0 = &uStack_318;
  func_0x000100105004(&puStack_3f0);
  plVar1 = plStack_370;
  ppuStack_3d8 = &PTR_DAT_110862760;
  plStack_370 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_378;
  plStack_378 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_3f0 = &uStack_390;
  func_0x000100105004(&puStack_3f0);
  _objc_release(pppuStack_3a8);
  func_0x0001000e76e0(&uStack_2c8);
  _objc_release(uStack_2d8);
  _objc_release(uStack_2e0);
  _objc_release(pppuVar7);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106e795d0; end: 106e79853;  */

void FUN_106e795d0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126c0b48);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_106e7a060();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_2);
  ppuStack_188 = &PTR_DAT_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_SUB_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_DAT_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106e79854; end: 106e7992b;  */

void FUN_106e79854(long param_1)

{
  undefined8 *puVar1;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126c0b48);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e7992c; end: 106e79acb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106e7992c(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 **ppuVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 in_x5;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 *puStack_180;
  undefined *puStack_178;
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
  _objc_retain();
  puVar1 = param_1;
  FUN_106e79854();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain();
  puVar10 = auStack_d8;
  uVar6 = 0x10;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar9 = *plStack_110;
    do {
      puVar10 = (undefined1 *)0x0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(puVar1);
        }
        puVar3 = PTR_PTR_1126d2e90;
        FUN_106e7ab48(PTR_PTR_1126d2e90,*(undefined8 *)(lStack_118 + (long)puVar10 * 8));
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 != (undefined *)0x0) {
          func_0x00010c25ed40(param_1);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        _objc_release(puVar3);
        puVar10 = puVar10 + 1;
      } while (puVar2 != puVar10);
      puVar10 = auStack_d8;
      uVar6 = 0x10;
      puVar2 = puVar1;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  __Unwind_Resume();
  ppuVar4 = &puStack_180;
  _objc_retain(puVar5);
  _objc_retain(puVar10);
  _objc_retain(in_x5);
  puStack_178 = PTR_PTR_1126f7920;
  puStack_180 = puVar2;
  _objc_msgSendSuper2(&puStack_180,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    puVar1 = (undefined1 *)puVar5;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)ppuVar4 + (long)_DAT_1127603a0);
    *(undefined1 **)((long)ppuVar4 + (long)_DAT_1127603a0) = puVar1;
    _objc_release(uVar7);
    puVar1 = puVar10;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)ppuVar4 + (long)_DAT_1127603a4);
    *(undefined1 **)((long)ppuVar4 + (long)_DAT_1127603a4) = puVar1;
    _objc_release(uVar7);
    *(undefined4 *)((long)ppuVar4 + (long)_DAT_1127603a8) = uVar6;
    *(ulong *)((long)ppuVar4 + (long)_DAT_1127603ac) =
         CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,CONCAT12(
                                                  uVar13,CONCAT11(uVar12,uVar11)))))));
    uVar7 = in_x5;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)ppuVar4 + (long)_DAT_1127603b0);
    *(undefined8 *)((long)ppuVar4 + (long)_DAT_1127603b0) = uVar7;
    _objc_release(uVar8);
  }
  _objc_release(in_x5);
  _objc_release(puVar10);
  _objc_release(puVar5);
  return (undefined1 *)ppuVar4;
}



/* Entry: 106e79acc; end: 106e79bdf; -[SCRecipientList initWithListId:name:rank:creationTimestamp:listItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106e79acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f7920;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127603a0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127603a0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127603a4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127603a4) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127603a8) = param_6;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127603ac) = param_1;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127603b0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127603b0) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106e79be0; end: 106e79c03; -[SCRecipientList copyWithZone:] */

undefined8 FUN_106e79be0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e79c04; end: 106e79cc7; -[SCRecipientList hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106e79c04(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127603a0);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127603a4);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  lStack_40 = (long)*(int *)(param_1 + _DAT_1127603a8);
  uVar7 = ~*(ulong *)(param_1 + _DAT_1127603ac) + *(ulong *)(param_1 + _DAT_1127603ac) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127603b0);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_106e79dcc:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106e79dd8;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       (*(int *)((long)puVar4 + (long)_DAT_1127603a8) == *(int *)(param_3 + _DAT_1127603a8))) {
      dVar10 = ABS(*(double *)((long)puVar4 + (long)_DAT_1127603ac) -
                   *(double *)(param_3 + _DAT_1127603ac));
      dVar9 = ABS(*(double *)((long)puVar4 + (long)_DAT_1127603ac) +
                  *(double *)(param_3 + _DAT_1127603ac)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (((bVar1) &&
          ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_1127603a0),
           lVar6 == *(long *)(param_3 + _DAT_1127603a0) || (func_0x00010c071ae0(), (int)lVar6 != 0))
          )) && ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_1127603a4),
                 lVar6 == *(long *)(param_3 + _DAT_1127603a4) ||
                 (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + (long)_DAT_1127603b0);
        if (puVar8 != *(undefined1 **)(param_3 + _DAT_1127603b0)) {
          func_0x00010c071ae0();
          goto LAB_106e79dd8;
        }
        goto LAB_106e79dcc;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_106e79dd8:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 106e79cc8; end: 106e79df3; -[SCRecipientList isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106e79cc8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e79dcc:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e79dd8;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (*(int *)(param_1 + (long)_DAT_1127603a8) == *(int *)(param_3 + (long)_DAT_1127603a8))) {
      dVar5 = *(double *)(param_1 + (long)_DAT_1127603ac);
      dVar6 = *(double *)(param_3 + (long)_DAT_1127603ac);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (((bVar1) &&
          ((lVar4 = *(long *)(param_1 + (long)_DAT_1127603a0),
           lVar4 == *(long *)(param_3 + (long)_DAT_1127603a0) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + (long)_DAT_1127603a4),
          lVar4 == *(long *)(param_3 + (long)_DAT_1127603a4) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + (long)_DAT_1127603b0);
        if (lVar4 != *(long *)(param_3 + (long)_DAT_1127603b0)) {
          func_0x00010c071ae0();
          goto LAB_106e79dd8;
        }
        goto LAB_106e79dcc;
      }
    }
    lVar4 = 0;
  }
LAB_106e79dd8:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106e79df4; end: 106e79e03; -[SCRecipientList listId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e79df4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127603a0);
}



/* Entry: 106e79e04; end: 106e79e13; -[SCRecipientList name] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e79e04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127603a4);
}



/* Entry: 106e79e14; end: 106e79e23; -[SCRecipientList rank] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_106e79e14(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_1127603a8);
}



/* Entry: 106e79e24; end: 106e79e33; -[SCRecipientList creationTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e79e24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127603ac);
}



/* Entry: 106e79e34; end: 106e79e43; -[SCRecipientList listItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e79e34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127603b0);
}



/* Entry: 106e79e44; end: 106e79e93; -[SCRecipientList .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e79e44(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127603b0,0);
  _objc_storeStrong(param_1 + _DAT_1127603a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127603a0,0);
  return;
}



/* Entry: 106e79e94; end: 106e79f1b; -[SCRecipientListsItem initWithType:recipientId:] */

undefined1 *
FUN_106e79e94(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7928;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106e79f1c; end: 106e79f3f; -[SCRecipientListsItem copyWithZone:] */

undefined8 FUN_106e79f1c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e79f40; end: 106e79fa3; -[SCRecipientListsItem hash] */

ulong * FUN_106e79f40(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(uint *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (ulong *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_106e7a028;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || ((int)puVar2[1] != (int)param_3[1])) {
      puVar4 = (ulong *)0x0;
      goto LAB_106e7a028;
    }
    puVar4 = (ulong *)puVar2[2];
    if (puVar4 != (ulong *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_106e7a028;
    }
  }
  puVar4 = (ulong *)0x1;
LAB_106e7a028:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 106e79fa4; end: 106e7a043; -[SCRecipientListsItem isEqual:] */

long FUN_106e79fa4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e7a028;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(int *)(param_1 + 8) != *(int *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_106e7a028;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106e7a028;
    }
  }
  lVar3 = 1;
LAB_106e7a028:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e7a044; end: 106e7a04b; -[SCRecipientListsItem type] */

undefined4 FUN_106e7a044(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 106e7a04c; end: 106e7a053; -[SCRecipientListsItem recipientId] */

undefined8 FUN_106e7a04c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e7a054; end: 106e7a05f; -[SCRecipientListsItem .cxx_destruct] */

void FUN_106e7a054(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e7a060; end: 106e7a0c3;  */

undefined ** FUN_106e7a060(void)

{
  int iVar1;
  
  if ((bRam000000011381e9c8 & 1) == 0) {
    iVar1 = 0x1381e9c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113188558,0x100000000);
      ___cxa_guard_release(0x11381e9c8);
    }
  }
  return &PTR_PTR_113188558;
}



/* Entry: 106e7a0c4; end: 106e7a14b;  */

void FUN_106e7a0c4(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e7a14c; end: 106e7a1d7;  */

void FUN_106e7a14c(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c09a080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c09a080(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106e7a1d8; end: 106e7a1e3; +[SCRecipientList table] */

undefined * FUN_106e7a1d8(void)

{
  return &UNK_10f3dcf4d;
}



/* Entry: 106e7a1e4; end: 106e7a543; +[SCRecipientList immutableObjectParse:bufferSize:] */

void FUN_106e7a1e4(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ushort uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined4 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  
  uVar3 = *param_3;
  piVar1 = (int *)((long)param_3 + (ulong)uVar3);
  puVar5 = PTR_PTR_1126c0b48;
  _objc_alloc(PTR_PTR_1126c0b48);
  lVar8 = (long)*piVar1;
  uVar7 = *(ushort *)((long)piVar1 - lVar8);
  if (uVar7 < 5) {
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar1 - lVar8))[2];
    if (uVar9 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar9);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = (long)*piVar1;
      uVar7 = *(ushort *)((long)piVar1 - lVar8);
    }
    lVar8 = -lVar8;
    if (6 < uVar7) {
      uVar9 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 6);
      if (uVar9 == 0) {
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar1 + uVar9);
        puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar2 + (ulong)*puVar2 + 4);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = -(long)*piVar1;
        uVar7 = *(ushort *)((long)piVar1 - (long)*piVar1);
      }
      uVar17 = 0;
      if (uVar7 < 9) {
        uVar12 = 0;
      }
      else {
        uVar9 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 8);
        if (uVar9 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(undefined4 *)((long)piVar1 + uVar9);
        }
        if (10 < uVar7) {
          uVar9 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 10);
          if (uVar9 != 0) {
            uVar17 = *(undefined8 *)((long)piVar1 + uVar9);
          }
          if ((0xc < uVar7) && (uVar9 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 0xc), uVar9 != 0))
          {
            uVar13 = (ulong)*(uint *)((long)piVar1 + uVar9);
            puVar2 = (uint *)((long)((long)piVar1 + uVar9) + uVar13);
            puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
            _objc_retainAutoreleasedReturnValue();
            if (*puVar2 != 0) {
              param_3 = (uint *)((long)param_3 + uVar13 + uVar9 + (ulong)uVar3 + 8);
              do {
                uVar9 = (ulong)param_3[-1];
                puVar14 = PTR_PTR_1126c0b60;
                _objc_alloc(PTR_PTR_1126c0b60);
                lVar8 = uVar9 - (long)*(int *)((long)param_3 + (uVar9 - 4));
                uVar7 = *(ushort *)((long)param_3 + lVar8 + -4);
                if (uVar7 < 5) {
                  uVar15 = 0;
LAB_106e7a41c:
                  puVar16 = (undefined *)0x0;
                }
                else {
                  if ((ulong)*(ushort *)((long)param_3 + lVar8) == 0) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = *(undefined4 *)
                              ((long)param_3 + uVar9 + *(ushort *)((long)param_3 + lVar8) + -4);
                  }
                  if ((uVar7 < 7) ||
                     (uVar13 = (ulong)*(ushort *)((long)param_3 + lVar8 + 2), uVar13 == 0))
                  goto LAB_106e7a41c;
                  lVar8 = uVar9 + uVar13;
                  puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                      (long)param_3 +
                                      (ulong)*(uint *)((long)param_3 + lVar8 + -4) + lVar8);
                  _objc_retainAutoreleasedReturnValue();
                }
                func_0x00010c055fc0(puVar14,param_2,uVar15,puVar16);
                _objc_release(puVar16);
                func_0x00010befa120(puVar6,param_2,puVar14);
                _objc_release(puVar14);
                bVar4 = param_3 != puVar2 + (ulong)*puVar2 + 1;
                param_3 = param_3 + 1;
              } while (bVar4);
            }
            puVar14 = puVar6;
            func_0x00010bf51e00(puVar6);
            _objc_release(puVar6);
            goto LAB_106e7a484;
          }
        }
      }
      puVar14 = (undefined *)0x0;
      goto LAB_106e7a484;
    }
  }
  puVar11 = (undefined *)0x0;
  uVar12 = 0;
  puVar14 = (undefined *)0x0;
  uVar17 = 0;
LAB_106e7a484:
  func_0x00010c026300(uVar17,puVar5,param_2,puVar10,puVar11,uVar12,puVar14);
  _objc_release(puVar14);
  _objc_release(puVar11);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106e7a544; end: 106e7a557; +[SCRecipientList objectClassFunctionPointer] */

undefined1  [16] FUN_106e7a544(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_106e7a580;
  auVar1._0_8_ = FUN_106e7a558;
  return auVar1;
}



/* Entry: 106e7a558; end: 106e7a57f;  */

int FUN_106e7a558(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf68f148;
  _strcmp(&DAT_10f68f148,param_1);
  return -(uint)(iVar1 != 0);
}



/* Entry: 106e7a580; end: 106e7a637;  */

bool FUN_106e7a580(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  
  if (param_1 != 0) {
    return false;
  }
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  func_0x0001001b9e08(param_2,&UNK_10f3dcf61);
  _sqlite3_bind_int64();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
     (uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar4 == 0)) {
    _sqlite3_bind_null(param_2,2);
  }
  else {
    puVar2 = (uint *)((long)piVar1 + uVar4);
    puVar3 = (undefined4 *)((long)puVar2 + (ulong)*puVar2);
    _sqlite3_bind_text(param_2,2,puVar3 + 1,*puVar3,0);
  }
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 106e7a638; end: 106e7a753;  */

undefined1 *
FUN_106e7a638(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_58 = PTR_PTR_1126f7930;
    lStack_60 = param_2;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_3;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      _objc_release(uVar2);
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      _objc_release(uVar2);
      *(undefined4 *)((long)plVar1 + 0x14) = param_6;
      *(undefined8 *)((long)plVar1 + 0x28) = param_1;
      _objc_retain(param_7);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = param_7;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 106e7a754; end: 106e7ab47;  */

void FUN_106e7a754(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_2;
      func_0x00010c09a080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar7,&UNK_10f3dcfa9);
        if (puVar7 != (undefined *)0x0) {
          puVar1 = param_2;
          func_0x00010c09a080(param_2);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar7,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar7;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar7;
            _sqlite3_column_int64(puVar7,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126c0b48);
            _sqlite3_column_blob(puVar7,1);
            _sqlite3_column_bytes(puVar7,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_2);
            _objc_release(puVar2);
            _sqlite3_reset(puVar7);
            if (puVar3 == (undefined *)0x0) goto LAB_106e7aa7c;
            puVar7 = PTR_PTR_1126d2e90;
            _objc_alloc(PTR_PTR_1126d2e90);
            puVar2 = puVar3;
            func_0x00010c09a080(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c0d4f60(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010c11f520(puVar3);
            func_0x00010bf5ab40(puVar3);
            puVar6 = puVar3;
            func_0x00010c09a120(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_106e7a638(param_1,puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
            param_2 = puVar3;
            goto LAB_106e7a87c;
          }
        }
      }
    }
    else {
      puVar1 = param_2;
      func_0x00010c1422e0(param_2);
      puVar7 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126c0b48);
      puVar3 = puVar7;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar7);
      if (puVar3 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126d2e90;
        _objc_alloc(PTR_PTR_1126d2e90);
        puVar2 = puVar3;
        func_0x00010c09a080(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0d4f60(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c11f520(puVar3);
        func_0x00010bf5ab40(puVar3);
        puVar6 = puVar3;
        func_0x00010c09a120(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_106e7a638(param_1,puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
        param_2 = puVar3;
LAB_106e7a87c:
        _objc_release(puVar6);
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_106e7aa84;
      }
LAB_106e7aa7c:
      param_2 = (undefined *)0x0;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_106e7aa84:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106e7ab48; end: 106e7abbb;  */

void FUN_106e7ab48(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_106e7a754();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106e7abbc; end: 106e7ae77;  */

void FUN_106e7abbc(undefined8 param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d2e90;
  _objc_retain(param_2);
  _objc_opt_self(puVar1);
  puVar1 = param_2;
  FUN_106e7a754();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar6 = PTR_PTR_1126d2e90;
    _objc_retain(param_2);
    _objc_opt_self(puVar6);
    puVar6 = PTR_PTR_1126d2e90;
    if (param_2 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_2;
      func_0x00010c09a080(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x00010c0d4f60(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_2;
      func_0x00010c11f520(param_2);
      func_0x00010bf5ab40(param_2);
      puVar5 = param_2;
      func_0x00010c09a120(param_2);
      _objc_retainAutoreleasedReturnValue();
      FUN_106e7a638(param_1,puVar6,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar6 + 0x10) = 1;
    _objc_release(param_2);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    puVar6 = param_2;
    func_0x00010c09a080(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar6);
    puVar6 = param_2;
    func_0x00010c0d4f60(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar6);
    puVar6 = param_2;
    func_0x00010c11f520();
    *(int *)(puVar1 + 0x14) = (int)puVar6;
    func_0x00010bf5ab40(param_2);
    *(undefined8 *)(puVar1 + 0x28) = param_1;
    puVar6 = param_2;
    func_0x00010c09a120(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar6);
    _objc_retain(puVar1);
    puVar6 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106e7ae78; end: 106e7aee3;  */

void FUN_106e7ae78(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c0b48;
    _objc_alloc(PTR_PTR_1126c0b48);
    func_0x00010c026300(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e7aee4; end: 106e7af1f; -[SCRecipientListChangeRequest .cxx_destruct] */

void FUN_106e7aee4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106e7af20; end: 106e7af2b; -[SCRecipientListChangeRequest table] */

undefined * FUN_106e7af20(void)

{
  return &UNK_10f3dcf4d;
}



/* Entry: 106e7af2c; end: 106e7afdf; -[SCRecipientListChangeRequest createTableWithSQLite:] */

void FUN_106e7af2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddf0216,0x81,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddf0297,0x62,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10ddf02f9,0x6e,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 106e7afe0; end: 106e7b65f; -[SCRecipientListChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_106e7afe0(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar7 = param_1;
  if (iVar3 == 1) {
    FUN_106e7ae78(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_4;
    FUN_106e7b660(param_4,puVar7);
    func_0x0001001ce6fc(param_4,lVar8,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar11;
    func_0x00010bf636c0();
    func_0x00010507cae4();
    _objc_release(puVar11);
    lVar8 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f3dd052);
    if (lVar8 == 0) goto LAB_106e7b58c;
    _sqlite3_bind_blob(lVar8,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
    puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
    _sqlite3_bind_text(lVar8,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar8 != 0x65) goto LAB_106e7b58c;
    uVar12 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar9 & 1) != 0) {
      func_0x0001001b9e08(param_3,&UNK_10f3dcf61);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar10 == 0)) {
        _sqlite3_bind_null(param_3,2);
      }
      else {
        puVar13 = (uint *)((long)piVar1 + uVar10);
        puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
        _sqlite3_bind_text(param_3,2,puVar2 + 1,*puVar2,0);
      }
      _sqlite3_step();
      if ((int)param_3 != 0x65) goto LAB_106e7b58c;
    }
    *(undefined8 *)(param_1 + 8) = uVar12;
    func_0x00010c1eeb60(puVar7);
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126c0b48);
    func_0x00010c21c9a0(puVar11);
LAB_106e7b564:
    _objc_release(puVar11);
    _objc_retain(puVar7);
    puVar11 = puVar7;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar8 = param_3;
        func_0x0001001b9e08(param_3,&UNK_10f3dcfea);
        if (lVar8 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar8 == 0x65) {
            func_0x0001001b9e08(param_3,&UNK_10f3dd019);
            if (param_3 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_3 != 0x65) goto LAB_106e7b10c;
            }
            puVar7 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126c0b48);
            func_0x00010c21c9a0(puVar7);
            _objc_release(puVar11);
            _objc_release(puVar7);
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106e7b598;
          }
        }
      }
LAB_106e7b10c:
      puVar11 = (undefined *)0x0;
      goto LAB_106e7b598;
    }
    FUN_106e7ae78();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_4;
    FUN_106e7b660(param_4,puVar7);
    func_0x0001001ce6fc(param_4,lVar8,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    uVar12 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar7);
    lVar8 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f3dd08e);
    if (lVar8 != 0) {
      _sqlite3_bind_blob(lVar8,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(lVar8,2,uVar12);
      piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
      puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
      _sqlite3_bind_text(lVar8,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar8 == 0x65) {
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126c0b48);
        puVar9 = puVar11;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar11 = puVar9;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar7;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar11);
        _objc_retain(puVar5);
        if (puVar11 != (undefined *)0x0 || puVar5 != (undefined *)0x0) {
          if ((puVar11 == (undefined *)0x0) || (puVar5 == (undefined *)0x0)) {
            _objc_release(puVar5);
            _objc_release(puVar11);
            _objc_release(puVar5);
            _objc_release(puVar11);
          }
          else {
            puVar6 = puVar11;
            func_0x00010c0720c0();
            _objc_release(puVar5);
            _objc_release(puVar11);
            _objc_release(puVar5);
            _objc_release(puVar11);
            if (((ulong)puVar6 & 1) != 0) goto LAB_106e7b520;
          }
          func_0x0001001b9e08(param_3,&UNK_10f3dd0d4);
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
             (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar10 == 0)) {
            _sqlite3_bind_null(param_3,1);
          }
          else {
            puVar13 = (uint *)((long)piVar1 + uVar10);
            puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
            _sqlite3_bind_text(param_3,1,puVar2 + 1,*puVar2,0);
          }
          _sqlite3_bind_int64(param_3,2,uVar12);
          _sqlite3_step();
          if ((int)param_3 != 0x65) {
            _objc_release(puVar9);
            goto LAB_106e7b584;
          }
        }
LAB_106e7b520:
        _objc_release(puVar9);
        _objc_release(puVar7);
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126c0b48);
        func_0x00010c21c9a0(puVar11);
        goto LAB_106e7b564;
      }
    }
LAB_106e7b584:
    _objc_release(puVar7);
LAB_106e7b58c:
    puVar11 = (undefined *)0x0;
  }
  _objc_release(puVar7);
LAB_106e7b598:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106e7b660; end: 106e7bbb7;  */

ulong FUN_106e7b660(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  undefined4 *puStack_178;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  code *pcStack_118;
  undefined ***pppuStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuStack_120 = &PTR_FUN_1109816d8;
  pcStack_118 = FUN_106e7bbb8;
  pppuStack_108 = &ppuStack_120;
  uVar11 = param_2;
  func_0x00010c09a120();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar20 = 0;
  _objc_retain(uVar11);
  uVar5 = uVar11;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  if (uVar5 == 0) {
    puStack_178 = (undefined4 *)0x0;
    puVar19 = (undefined4 *)0x0;
  }
  else {
    puStack_178 = (undefined4 *)0x0;
    puVar19 = (undefined4 *)0x0;
    puVar15 = (undefined4 *)0x0;
    do {
      uVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(uVar11);
        }
        uVar16 = *(undefined8 *)(uVar14 * 8);
        _objc_retain(uVar16);
        _objc_retain(uVar16);
        uStack_128 = uVar16;
        if (pppuStack_108 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_106e7bac4;
        }
        pppuVar6 = pppuStack_108;
        (*(code *)(*pppuStack_108)[6])(pppuStack_108,param_1,&uStack_128);
        _objc_release(uStack_128);
        if (puVar19 < puVar15) {
          *puVar19 = (int)pppuVar6;
          puVar18 = puStack_178;
        }
        else {
          lVar17 = (long)puVar19 - (long)puStack_178;
          uVar8 = (lVar17 >> 2) + 1;
          if (uVar8 >> 0x3e != 0) {
            FUN_106e7bdd8();
LAB_106e7bac4:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x106e7bac8);
            (*pcVar4)();
          }
          uVar13 = (long)puVar15 - (long)puStack_178 >> 1;
          if (uVar13 <= uVar8) {
            uVar13 = uVar8;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar15 - (long)puStack_178)) {
            uVar13 = 0x3fffffffffffffff;
          }
          if (uVar13 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_106e7bac4;
          }
          lVar7 = uVar13 << 2;
          __Znwm();
          puVar19 = (undefined4 *)(lVar7 + lVar17);
          puVar15 = (undefined4 *)(lVar7 + uVar13 * 4);
          puVar18 = puVar19 + -(lVar17 >> 2);
          *puVar19 = (int)pppuVar6;
          _memcpy(puVar18,puStack_178,lVar17);
          if (puStack_178 != (undefined4 *)0x0) {
            __ZdlPv(puStack_178);
          }
        }
        puStack_178 = puVar18;
        puVar19 = puVar19 + 1;
        _objc_release(uVar16);
        uVar14 = uVar14 + 1;
      } while (uVar5 != uVar14);
      uVar5 = uVar11;
      func_0x00010bf52a60();
    } while (uVar5 != 0);
  }
  _objc_release(uVar11);
  _objc_release(uVar11);
  _objc_release(uVar11);
  if (pppuStack_108 == &ppuStack_120) {
    lVar12 = 0x20;
  }
  else {
    if (pppuStack_108 == (undefined ***)0x0) goto LAB_106e7b894;
    lVar12 = 0x28;
  }
  (**(code **)((long)*pppuStack_108 + lVar12))();
LAB_106e7b894:
  uVar5 = param_2;
  func_0x00010c09a080();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  FUN_106e7bca8(param_1,uVar5);
  uVar8 = param_2;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  FUN_106e7bca8(param_1,uVar8);
  uVar9 = param_2;
  func_0x00010c11f520();
  func_0x00010bf5ab40(param_2);
  uVar11 = (long)puVar19 - (long)puStack_178;
  puVar15 = (undefined4 *)&UNK_10ddf052c;
  if (uVar11 != 0) {
    puVar15 = puStack_178;
  }
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x0001001cddd0(param_1,uVar11,4);
  func_0x0001001cddd0(param_1,uVar11,4);
  if (puStack_178 != puVar19) {
    lVar12 = (long)uVar11 >> 2;
    do {
      iVar3 = puVar15[lVar12 + -1];
      func_0x0001001ce088(param_1,4);
      func_0x0001001ce0bc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                   *(int *)(param_1 + 0x28)) - iVar3) + 4);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar10 = param_1;
  func_0x0001001ce0bc(param_1,uVar11 >> 2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x28);
  func_0x0001001ce11c(uVar20,0,param_1,10);
  if ((int)uVar10 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0xc,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uVar10) + 4,0);
  }
  func_0x000100c3b024(param_1,8,uVar9,0);
  func_0x0001001ce2e4(param_1,6,uVar13 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar14 & 0xffffffff);
  uVar11 = (ulong)(uint)((iVar3 - iVar1) + iVar2);
  func_0x0001001ce548(param_1,uVar11);
  _objc_release(uVar8);
  _objc_release(uVar5);
  if (puStack_178 != (undefined4 *)0x0) {
    __ZdlPv();
  }
  uVar5 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    if (puStack_178 != (undefined4 *)0x0) {
      __ZdlPv(puStack_178);
    }
    _objc_release(param_2);
    __Unwind_Resume();
    _objc_retain(uVar11);
    uVar14 = uVar11;
    func_0x00010c27dd80(uVar11);
    uVar8 = uVar11;
    func_0x00010c122b80(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar5;
    FUN_106e7bca8(uVar5,uVar8);
    *(undefined1 *)(uVar5 + 0x46) = 1;
    iVar3 = *(int *)(uVar5 + 0x20);
    iVar1 = *(int *)(uVar5 + 0x30);
    iVar2 = *(int *)(uVar5 + 0x28);
    func_0x0001001ce2e4(uVar5,6,uVar13 & 0xffffffff);
    func_0x0001001ce354(uVar5,4,uVar14,0);
    func_0x0001001ce548(uVar5,(iVar3 - iVar1) + iVar2);
    _objc_release(uVar8);
    _objc_release(uVar11);
    return uVar5;
  }
  return param_1;
}



/* Entry: 106e7bbb8; end: 106e7bca7;  */

ulong FUN_106e7bbb8(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c27dd80(param_2);
  uVar5 = param_2;
  func_0x00010c122b80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_106e7bca8(param_1,uVar5);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce2e4(param_1,6,uVar6 & 0xffffffff);
  func_0x0001001ce354(param_1,4,uVar4,0);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar5);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106e7bca8; end: 106e7bdd7;  */

undefined8 FUN_106e7bca8(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_106e7bd88;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_106e7bd88;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_106e7bd48;
    param_1 = 0;
  }
  else {
LAB_106e7bd48:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x0001001cde08(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_106e7bd88:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106e7bdd8; end: 106e7bdeb;  */

void FUN_106e7bdd8(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  return;
}



/* Entry: 106e7bdec; end: 106e7bdf3;  */

void FUN_106e7bdec(void)

{
  return;
}



/* Entry: 106e7bdf4; end: 106e7be27;  */

void FUN_106e7bdf4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1109816d8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 106e7be28; end: 106e7be67;  */

void FUN_106e7be28(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109816d8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 106e7be68; end: 106e7bea3;  */

long FUN_106e7be68(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110981748);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 106e7bea4; end: 106e7beaf;  */

undefined ** FUN_106e7bea4(void)

{
  return &PTR_DAT_110981748;
}



/* Entry: 106e7beb0; end: 106e7bf2b;  */

undefined * FUN_106e7beb0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c7e38 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e89838,
                        &UNK_10ddf0530,&UNK_10ddf05cc,6,FUN_106e7bf2c,0);
    do {
      if (puRam00000001136c7e38 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c7e38;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c7e38,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c7e38 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c7e38;
}



/* Entry: 106e7bf2c; end: 106e7bf37;  */

bool FUN_106e7bf2c(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 106e7bf38; end: 106e7bfb3;  */

undefined * FUN_106e7bf38(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c7e40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e89858,
                        &UNK_10ddf05e4,&UNK_10ddf0624,3,FUN_106e7bfb4,0);
    do {
      if (puRam00000001136c7e40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c7e40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c7e40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c7e40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c7e40;
}



/* Entry: 106e7bfb4; end: 106e7bfbf;  */

bool FUN_106e7bfb4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106e7bfc0; end: 106e7c027; +[SCListsRecipientListItem descriptor] */

void FUN_106e7bfc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7e48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b41710,
                        &PTR____CFConstantStringClassReference_110e89878,&PTR_DAT_1131885c8,
                        &PTR_DAT_1131885e0,2,0x10,0x1c);
    puRam00000001136c7e48 = puVar1;
  }
  return;
}



/* Entry: 106e7c028; end: 106e7c10b; +[SCListsRecipientList descriptor] */

void FUN_106e7c028(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7e50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b41760,
                        &PTR____CFConstantStringClassReference_110e89898,&PTR_DAT_1131885c8,
                        &PTR_DAT_113188620,7,0x38,0x1c);
    puRam00000001136c7e50 = puVar1;
  }
  return;
}



/* Entry: 106e7c10c; end: 106e7c117;  */

bool FUN_106e7c10c(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 106e7c118; end: 106e7c193;  */

undefined * FUN_106e7c118(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c7e60 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e898d8,
                        &UNK_10ddf06d8,&UNK_10ddf0734,5,FUN_106e7c194,0);
    do {
      if (puRam00000001136c7e60 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c7e60;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c7e60,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c7e60 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c7e60;
}



/* Entry: 106e7c194; end: 106e7c19f;  */

bool FUN_106e7c194(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106e7c1a0; end: 106e7c22f;  */

undefined * FUN_106e7c1a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c7e68 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e898f8,
                        &UNK_10ddf0748,&UNK_10ddf0850,0x1d,FUN_106e7c230,0,&UNK_10ddf08c4);
    do {
      if (puRam00000001136c7e68 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c7e68;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c7e68,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c7e68 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c7e68;
}



/* Entry: 106e7c230; end: 106e7c23b;  */

bool FUN_106e7c230(uint param_1)

{
  return param_1 < 0x1d;
}



/* Entry: 106e7c23c; end: 106e7c2b7;  */

undefined * FUN_106e7c23c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c7e70 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e89918,
                        &UNK_10ddf08cd,&UNK_10ddf08f8,4,FUN_106e7c2b8,0);
    do {
      if (puRam00000001136c7e70 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c7e70;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c7e70,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c7e70 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c7e70;
}



/* Entry: 106e7c2b8; end: 106e7c2c3;  */

bool FUN_106e7c2b8(uint param_1)

{
  return param_1 < 4;
}


