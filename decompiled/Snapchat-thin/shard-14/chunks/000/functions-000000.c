/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aef617c; end: 10aef61c7; +[SCCameraViewControllerLensStateEvent didResetState] */

void FUN_10aef617c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ddbe0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aef61c8; end: 10aef6213; +[SCCameraViewControllerLensStateEvent didRestoreState] */

void FUN_10aef61c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ddbe0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aef6214; end: 10aef625f; +[SCCameraViewControllerLensStateEvent willRestoreState] */

void FUN_10aef6214(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ddbe0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aef6260; end: 10aef6283; -[SCCameraViewControllerLensStateEvent copyWithZone:] */

undefined8 FUN_10aef6260(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aef6284; end: 10aef62df; -[SCCameraViewControllerLensStateEvent hash] */

undefined8 * FUN_10aef6284(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 0x10);
  puVar1 = &uStack_28;
  func_0x000107c3191c(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (undefined8 *)0x1;
  }
  else {
    puVar3 = (undefined8 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || (puVar1[1] != param_3[1])) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        puVar3 = (undefined8 *)(ulong)(*(char *)(puVar1 + 2) == *(char *)(param_3 + 2));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10aef62e0; end: 10aef6377; -[SCCameraViewControllerLensStateEvent isEqual:] */

bool FUN_10aef62e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10aef6378; end: 10aef648b; -[SCCameraViewControllerLensStateEvent matchDidChangeStateExistence:willRestoreState:didRestoreState:didSkipRestoreState:didResetState:] */

void FUN_10aef6378(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(param_3,*(undefined1 *)(param_1 + 0x10));
      }
      goto LAB_10aef643c;
    }
    if ((lVar1 != 1) || (param_4 == 0)) goto LAB_10aef643c;
    pcVar2 = *(code **)(param_4 + 0x10);
    lVar1 = param_4;
  }
  else if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_10aef643c;
    pcVar2 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
  }
  else if (lVar1 == 3) {
    if (param_6 == 0) goto LAB_10aef643c;
    pcVar2 = *(code **)(param_6 + 0x10);
    lVar1 = param_6;
  }
  else {
    if ((lVar1 != 4) || (param_7 == 0)) goto LAB_10aef643c;
    pcVar2 = *(code **)(param_7 + 0x10);
    lVar1 = param_7;
  }
  (*pcVar2)(lVar1);
LAB_10aef643c:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aef648c; end: 10aef6607; -[SCBatchCaptureConfigurationListenerAnnouncer description] */

void FUN_10aef648c(long param_1)

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
  
  FUN_10aef6608(&plStack_60,param_1 + 0x48);
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



/* Entry: 10aef6608; end: 10aef6667;  */

void FUN_10aef6608(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10aef6668; end: 10aef6913; -[SCBatchCaptureConfigurationListenerAnnouncer addListener:] */

undefined8 FUN_10aef6668(long param_1,undefined8 param_2,long param_3)

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
  *plVar3 = (long)&PTR_FUN_110c90d10;
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
    FUN_10aef6914(plVar10,auStack_90);
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
    FUN_10aef6a54(puVar8,&plStack_a0);
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
LAB_10aef681c:
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
      goto LAB_10aef683c;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_10aef6914(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_10aef6914(plVar10,auStack_78);
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
    FUN_10aef6a54(puVar8,&plStack_88);
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
      goto LAB_10aef681c;
    }
  }
  uVar9 = 1;
LAB_10aef683c:
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



/* Entry: 10aef6914; end: 10aef6a53;  */

void FUN_10aef6914(long *param_1,long *param_2)

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
      FUN_10aef7330();
LAB_10aef6a50:
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
      if (uVar7 >> 0x3d != 0) goto LAB_10aef6a50;
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



/* Entry: 10aef6a54; end: 10aef6a9b;  */

void FUN_10aef6a54(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10aef6a9c; end: 10aef6ccb; -[SCBatchCaptureConfigurationListenerAnnouncer removeListener:] */

void FUN_10aef6a9c(long param_1,undefined8 param_2,long param_3)

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
  if (plVar6 == (long *)0x0) goto LAB_10aef6c50;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_10aef6b04;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_10aef6a54(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10aef6c50;
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
LAB_10aef6b04:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110c90d10;
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
          FUN_10aef6914(plVar9,lVar7);
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
    FUN_10aef6a54(puVar8,&plStack_90);
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
    if (plStack_78 == (long *)0x0) goto LAB_10aef6c50;
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
LAB_10aef6c50:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aef6ccc; end: 10aef6ddf; -[SCBatchCaptureConfigurationListenerAnnouncer batchCaptureConfiguration:didDeleteSegment:atIndex:] */

void FUN_10aef6ccc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10aef6608(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf16820();
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



/* Entry: 10aef6de0; end: 10aef6eeb; -[SCBatchCaptureConfigurationListenerAnnouncer batchCaptureConfiguration:didDeleteSnapAtIndexPath:] */

void FUN_10aef6de0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10aef6608(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf16840();
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



/* Entry: 10aef6eec; end: 10aef7013; -[SCBatchCaptureConfigurationListenerAnnouncer batchCaptureConfiguration:didSplitSnapAtIndexPath:splitTime:] */

void FUN_10aef6eec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10aef6608(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf16860();
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
  _objc_release(param_3);
  return;
}



/* Entry: 10aef7014; end: 10aef711f; -[SCBatchCaptureConfigurationListenerAnnouncer batchCaptureConfiguration:didAddSegment:] */

void FUN_10aef7014(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10aef6608(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf16800();
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



/* Entry: 10aef7120; end: 10aef7203; -[SCBatchCaptureConfigurationListenerAnnouncer batchCaptureConfigurationWillDeleteAllSegments:] */

void FUN_10aef7120(long param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_10aef6608(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf168a0();
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



/* Entry: 10aef7204; end: 10aef72e7; -[SCBatchCaptureConfigurationListenerAnnouncer batchCaptureConfigurationDidDeleteAllSegments:] */

void FUN_10aef7204(long param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_10aef6608(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf16880();
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



/* Entry: 10aef72e8; end: 10aef730f; -[SCBatchCaptureConfigurationListenerAnnouncer .cxx_destruct] */

void FUN_10aef72e8(long param_1)

{
  FUN_10aef7344(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 10aef7310; end: 10aef732f; -[SCBatchCaptureConfigurationListenerAnnouncer .cxx_construct] */

void FUN_10aef7310(long param_1)

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



/* Entry: 10aef7330; end: 10aef7343;  */

undefined * FUN_10aef7330(void)

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



/* Entry: 10aef7344; end: 10aef739b;  */

long FUN_10aef7344(long param_1)

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



/* Entry: 10aef739c; end: 10aef73ab;  */

void FUN_10aef739c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c90d10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aef73ac; end: 10aef73cb;  */

void FUN_10aef73ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c90d10;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aef73cc; end: 10aef7433;  */

void FUN_10aef73cc(long param_1)

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



/* Entry: 10aef7434; end: 10aef7437;  */

void FUN_10aef7434(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aef7438; end: 10aef754b; -[SCBatchCaptureSegmentMetadata initWithCoder:] */

undefined1 * FUN_10aef7438(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701d30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
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
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aef754c; end: 10aef764b; -[SCBatchCaptureSegmentMetadata initWithMediaOrientation:createTime:captureTime:location:fromFrontFacingCamera:lensesActive:] */

undefined1 *
FUN_10aef754c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_112701d30;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10aef764c; end: 10aef766f; -[SCBatchCaptureSegmentMetadata copyWithZone:] */

undefined8 FUN_10aef764c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aef7670; end: 10aef771f; -[SCBatchCaptureSegmentMetadata encodeWithCoder:] */

void FUN_10aef7670(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f313b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f313d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f313f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110e135f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f31418);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f31438);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aef7720; end: 10aef77b7; -[SCBatchCaptureSegmentMetadata hash] */

long * FUN_10aef7720(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  plVar3 = &lStack_58;
  uStack_40 = uVar2;
  func_0x000107c3191c(plVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
LAB_10aef7880:
    plVar6 = (long *)0x1;
  }
  else {
    plVar6 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10aef788c;
    plVar6 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar6);
    if ((((ulong)plVar4 & 1) != 0) &&
       (((plVar3[2] == param_3[2] && ((char)plVar3[1] == (char)param_3[1])) &&
        (*(char *)((long)plVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = plVar3[3];
      if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = plVar3[4];
        if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          plVar6 = (long *)plVar3[5];
          if (plVar6 != (long *)param_3[5]) {
            func_0x00010c071ae0();
            goto LAB_10aef788c;
          }
          goto LAB_10aef7880;
        }
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_10aef788c:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 10aef77b8; end: 10aef78a7; -[SCBatchCaptureSegmentMetadata isEqual:] */

long FUN_10aef77b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aef7880:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aef788c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_10aef788c;
          }
          goto LAB_10aef7880;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10aef788c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aef78a8; end: 10aef78af; -[SCBatchCaptureSegmentMetadata mediaOrientation] */

undefined8 FUN_10aef78a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aef78b0; end: 10aef78b7; -[SCBatchCaptureSegmentMetadata createTime] */

undefined8 FUN_10aef78b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aef78b8; end: 10aef78bf; -[SCBatchCaptureSegmentMetadata captureTime] */

undefined8 FUN_10aef78b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aef78c0; end: 10aef78c7; -[SCBatchCaptureSegmentMetadata location] */

undefined8 FUN_10aef78c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10aef78c8; end: 10aef78cf; -[SCBatchCaptureSegmentMetadata fromFrontFacingCamera] */

undefined1 FUN_10aef78c8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aef78d0; end: 10aef78d7; -[SCBatchCaptureSegmentMetadata lensesActive] */

undefined1 FUN_10aef78d0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10aef78d8; end: 10aef7913; -[SCBatchCaptureSegmentMetadata .cxx_destruct] */

void FUN_10aef78d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10aef7914; end: 10aef792f; +[SCBatchCaptureSegmentMetadataBuilder batchCaptureSegmentMetadata] */

void FUN_10aef7914(void)

{
  _objc_alloc_init(PTR_PTR_1126c84c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aef7930; end: 10aef7ad7; +[SCBatchCaptureSegmentMetadataBuilder batchCaptureSegmentMetadataFromExistingBatchCaptureSegmentMetadata:] */

void FUN_10aef7930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  puVar1 = PTR_PTR_1126c84c0;
  _objc_retain(param_3);
  func_0x00010bf16c00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0c5ae0(param_3);
  puVar3 = puVar1;
  func_0x00010c2b3980(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf59920(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ab340(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf31360(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c2aa200(puVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c09ea00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c2b3020(puVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bfbabe0(param_3);
  puVar10 = puVar8;
  func_0x00010c2ae800(puVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c0982a0(param_3);
  _objc_release(param_3);
  puVar11 = puVar10;
  func_0x00010c2b2dc0(puVar10,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10aef7ad8; end: 10aef7b13; -[SCBatchCaptureSegmentMetadataBuilder build] */

void FUN_10aef7ad8(void)

{
  _objc_alloc(PTR_PTR_1126de990);
  func_0x00010c029a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aef7b14; end: 10aef7b1b; -[SCBatchCaptureSegmentMetadataBuilder withMediaOrientation:] */

void FUN_10aef7b14(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10aef7b1c; end: 10aef7b53; -[SCBatchCaptureSegmentMetadataBuilder withCreateTime:] */

long FUN_10aef7b1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aef7b54; end: 10aef7b8b; -[SCBatchCaptureSegmentMetadataBuilder withCaptureTime:] */

long FUN_10aef7b54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aef7b8c; end: 10aef7bc3; -[SCBatchCaptureSegmentMetadataBuilder withLocation:] */

long FUN_10aef7b8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aef7bc4; end: 10aef7bcb; -[SCBatchCaptureSegmentMetadataBuilder withFromFrontFacingCamera:] */

void FUN_10aef7bc4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10aef7bcc; end: 10aef7bd3; -[SCBatchCaptureSegmentMetadataBuilder withLensesActive:] */

void FUN_10aef7bcc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x29) = param_3;
  return;
}



/* Entry: 10aef7bd4; end: 10aef7c0f; -[SCBatchCaptureSegmentMetadataBuilder .cxx_destruct] */

void FUN_10aef7bd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aef7c10; end: 10aef7c87; -[SCBatchCaptureTryOnSegmentMetadata initWithIsTryOnAppliedSuccess:] */

undefined1 * FUN_10aef7c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701d38;
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



/* Entry: 10aef7c88; end: 10aef7cab; -[SCBatchCaptureTryOnSegmentMetadata copyWithZone:] */

undefined8 FUN_10aef7c88(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aef7cac; end: 10aef7cb3; -[SCBatchCaptureTryOnSegmentMetadata isTryOnAppliedSuccess] */

undefined8 FUN_10aef7cac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aef7cb4; end: 10aef7cbf; -[SCBatchCaptureTryOnSegmentMetadata .cxx_destruct] */

void FUN_10aef7cb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aef7cc0; end: 10aef7cdb; +[SCBatchCaptureTryOnSegmentMetadataBuilder batchCaptureTryOnSegmentMetadata] */

void FUN_10aef7cc0(void)

{
  _objc_alloc_init(PTR_PTR_1126de998);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aef7cdc; end: 10aef7d6b; +[SCBatchCaptureTryOnSegmentMetadataBuilder batchCaptureTryOnSegmentMetadataFromExistingBatchCaptureTryOnSegmentMetadata:] */

void FUN_10aef7cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126de998;
  _objc_retain(param_3);
  func_0x00010bf16d20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0819c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010c2b18e0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aef7d6c; end: 10aef7d9b; -[SCBatchCaptureTryOnSegmentMetadataBuilder build] */

void FUN_10aef7d6c(void)

{
  _objc_alloc(PTR_PTR_1126de9a0);
  func_0x00010c01fa20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aef7d9c; end: 10aef7dd3; -[SCBatchCaptureTryOnSegmentMetadataBuilder withIsTryOnAppliedSuccess:] */

long FUN_10aef7d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aef7dd4; end: 10aef7ddf; -[SCBatchCaptureTryOnSegmentMetadataBuilder .cxx_destruct] */

void FUN_10aef7dd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aef7de0; end: 10aef7f7b; -[SCBatchCaptureSegmentDiscardLoggingParams initWithHasDiscardRelatedData:adjustingFocus:adjustingExposure:shutterSpeed:aperture:brightness:iso:cameraModes:lensId:targetingCampaignId:isWholeVideo:discardMethod:captureSessionId:snapSessionId:] */

undefined8 *
FUN_10aef7de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_88 = PTR_PTR_112701d40;
  puVar1 = &uStack_90;
  uStack_90 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    *(undefined1 *)((long)puVar1 + 10) = param_9;
    puVar1[2] = param_1;
    puVar1[3] = param_2;
    puVar1[4] = param_3;
    puVar1[5] = param_4;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = param_13;
    puVar1[9] = param_15;
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  return puVar1;
}



/* Entry: 10aef7f7c; end: 10aef7f9f; -[SCBatchCaptureSegmentDiscardLoggingParams copyWithZone:] */

undefined8 FUN_10aef7f7c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aef7fa0; end: 10aef80df; -[SCBatchCaptureSegmentDiscardLoggingParams hash] */

ulong * FUN_10aef7fa0(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  double dVar10;
  double dVar11;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = (ulong)*(byte *)(param_1 + 8);
  uStack_90 = (ulong)*(byte *)(param_1 + 9);
  uStack_88 = (ulong)*(byte *)(param_1 + 10);
  uVar8 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_80 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_78 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_70 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_68 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfde980();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar5;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 0xb);
  lVar2 = *(long *)(param_1 + 0x48);
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  lStack_40 = -lVar2;
  if (-1 < lVar2) {
    lStack_40 = lVar2;
  }
  uStack_50 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bfde980();
  puVar6 = &uStack_98;
  uStack_30 = uVar4;
  func_0x000107c3191c(puVar6,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar6 == param_3) {
LAB_10aef82d0:
    puVar9 = (ulong *)0x1;
  }
  else {
    puVar9 = (ulong *)0x0;
    if ((puVar6 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10aef82dc;
    puVar9 = puVar6;
    _objc_opt_class(puVar6);
    puVar7 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar7 & 1) != 0) &&
       (((((char)puVar6[1] == (char)param_3[1] &&
          (*(char *)((long)puVar6 + 9) == *(char *)((long)param_3 + 9))) &&
         (*(char *)((long)puVar6 + 10) == *(char *)((long)param_3 + 10))) &&
        ((*(char *)((long)puVar6 + 0xb) == *(char *)((long)param_3 + 0xb) &&
         (puVar6[9] == param_3[9])))))) {
      dVar11 = ABS((double)puVar6[2] - (double)param_3[2]);
      dVar10 = ABS((double)puVar6[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar3 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar3 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar3 = dVar11 < dVar10;
      }
      if (bVar3) {
        dVar10 = ABS((double)puVar6[3] - (double)param_3[3]);
        if ((dVar10 < 2.2250738585072014e-308) ||
           (dVar10 < ABS((double)puVar6[3] + (double)param_3[3]) * 2.220446049250313e-16)) {
          dVar10 = ABS((double)puVar6[4] - (double)param_3[4]);
          if ((dVar10 < 2.2250738585072014e-308) ||
             (dVar10 < ABS((double)puVar6[4] + (double)param_3[4]) * 2.220446049250313e-16)) {
            dVar10 = ABS((double)puVar6[5] - (double)param_3[5]);
            if ((((dVar10 < 2.2250738585072014e-308) ||
                 (dVar10 < ABS((double)puVar6[5] + (double)param_3[5]) * 2.220446049250313e-16)) &&
                ((uVar8 = puVar6[6], uVar8 == param_3[6] || (func_0x00010c071ae0(), (int)uVar8 != 0)
                 ))) && ((((uVar8 = puVar6[7], uVar8 == param_3[7] ||
                           (func_0x00010c071ae0(), (int)uVar8 != 0)) &&
                          ((uVar8 = puVar6[8], uVar8 == param_3[8] ||
                           (func_0x00010c071ae0(), (int)uVar8 != 0)))) &&
                         ((uVar8 = puVar6[10], uVar8 == param_3[10] ||
                          (func_0x00010c071ae0(), (int)uVar8 != 0)))))) {
              puVar9 = (ulong *)puVar6[0xb];
              if (puVar9 != (ulong *)param_3[0xb]) {
                func_0x00010c071ae0();
                goto LAB_10aef82dc;
              }
              goto LAB_10aef82d0;
            }
          }
        }
      }
    }
    puVar9 = (ulong *)0x0;
  }
LAB_10aef82dc:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 10aef80e0; end: 10aef82f7; -[SCBatchCaptureSegmentDiscardLoggingParams isEqual:] */

long FUN_10aef80e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aef82d0:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aef82dc;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
        ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
         (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar5 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        if ((dVar5 < 2.2250738585072014e-308) ||
           (dVar5 < ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                    2.220446049250313e-16)) {
          dVar5 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
          if ((dVar5 < 2.2250738585072014e-308) ||
             (dVar5 < ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                      2.220446049250313e-16)) {
            dVar5 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
            if ((((dVar5 < 2.2250738585072014e-308) ||
                 (dVar5 < ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                          2.220446049250313e-16)) &&
                ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
                 (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
               ((((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
                  (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                 ((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
                  (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                ((lVar4 = *(long *)(param_1 + 0x50), lVar4 == *(long *)(param_3 + 0x50) ||
                 (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
              lVar4 = *(long *)(param_1 + 0x58);
              if (lVar4 != *(long *)(param_3 + 0x58)) {
                func_0x00010c071ae0();
                goto LAB_10aef82dc;
              }
              goto LAB_10aef82d0;
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10aef82dc:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10aef82f8; end: 10aef82ff; -[SCBatchCaptureSegmentDiscardLoggingParams hasDiscardRelatedData] */

undefined1 FUN_10aef82f8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aef8300; end: 10aef8307; -[SCBatchCaptureSegmentDiscardLoggingParams adjustingFocus] */

undefined1 FUN_10aef8300(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10aef8308; end: 10aef830f; -[SCBatchCaptureSegmentDiscardLoggingParams adjustingExposure] */

undefined1 FUN_10aef8308(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10aef8310; end: 10aef8317; -[SCBatchCaptureSegmentDiscardLoggingParams shutterSpeed] */

undefined8 FUN_10aef8310(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aef8318; end: 10aef831f; -[SCBatchCaptureSegmentDiscardLoggingParams aperture] */

undefined8 FUN_10aef8318(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aef8320; end: 10aef8327; -[SCBatchCaptureSegmentDiscardLoggingParams brightness] */

undefined8 FUN_10aef8320(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aef8328; end: 10aef832f; -[SCBatchCaptureSegmentDiscardLoggingParams iso] */

undefined8 FUN_10aef8328(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10aef8330; end: 10aef8337; -[SCBatchCaptureSegmentDiscardLoggingParams cameraModes] */

undefined8 FUN_10aef8330(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10aef8338; end: 10aef833f; -[SCBatchCaptureSegmentDiscardLoggingParams lensId] */

undefined8 FUN_10aef8338(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10aef8340; end: 10aef8347; -[SCBatchCaptureSegmentDiscardLoggingParams targetingCampaignId] */

undefined8 FUN_10aef8340(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10aef8348; end: 10aef834f; -[SCBatchCaptureSegmentDiscardLoggingParams isWholeVideo] */

undefined1 FUN_10aef8348(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10aef8350; end: 10aef8357; -[SCBatchCaptureSegmentDiscardLoggingParams discardMethod] */

undefined8 FUN_10aef8350(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10aef8358; end: 10aef835f; -[SCBatchCaptureSegmentDiscardLoggingParams captureSessionId] */

undefined8 FUN_10aef8358(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10aef8360; end: 10aef8367; -[SCBatchCaptureSegmentDiscardLoggingParams snapSessionId] */

undefined8 FUN_10aef8360(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10aef8368; end: 10aef83bb; -[SCBatchCaptureSegmentDiscardLoggingParams .cxx_destruct] */

void FUN_10aef8368(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 10aef83bc; end: 10aef83d7; +[SCBatchCaptureSegmentDiscardLoggingParamsBuilder batchCaptureSegmentDiscardLoggingParams] */

void FUN_10aef83bc(void)

{
  _objc_alloc_init(PTR_PTR_1126c84c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aef83d8; end: 10aef86f3; +[SCBatchCaptureSegmentDiscardLoggingParamsBuilder batchCaptureSegmentDiscardLoggingParamsFromExistingBatchCaptureSegmentDiscardLoggingParams:] */

void FUN_10aef83d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  
  puVar1 = PTR_PTR_1126c84c8;
  _objc_retain(param_3);
  func_0x00010bf16b80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfd65a0(param_3);
  puVar3 = puVar1;
  func_0x00010c2af220(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010befdac0(param_3);
  puVar4 = puVar3;
  func_0x00010c2a8040(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010befdaa0(param_3);
  puVar5 = puVar4;
  func_0x00010c2a8000(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23b560(param_3);
  puVar6 = puVar5;
  func_0x00010c2b8fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04ae0(param_3);
  puVar7 = puVar6;
  func_0x00010c2a8460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21200(param_3);
  puVar8 = puVar7;
  func_0x00010c2a9920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c083ec0(param_3);
  puVar9 = puVar8;
  func_0x00010c2b1a20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf29fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c2a9de0(puVar9,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010c2b2880(puVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c26a320(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010c2bad80(puVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c083b40(param_3);
  puVar16 = puVar14;
  func_0x00010c2b19c0(puVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010bf81080(param_3);
  puVar17 = puVar16;
  func_0x00010c2ac620(puVar16,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010bf31200(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010c2aa1c0(puVar17,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010c243340(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar20 = puVar18;
  func_0x00010c2b9740(puVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar19);
  _objc_release(puVar18);
  _objc_release(uVar15);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(uVar2);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 10aef86f4; end: 10aef875b; -[SCBatchCaptureSegmentDiscardLoggingParamsBuilder build] */

void FUN_10aef86f4(long param_1)

{
  _objc_alloc(PTR_PTR_1126de9a8);
  func_0x00010c019c00(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aef875c; end: 10aef8763; -[SCBatchCaptureSegmentDiscardLoggingParamsBuilder withHasDiscardRelatedData:] */

void FUN_10aef875c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10aef8764; end: 10aef876b; -[SCBatchCaptureSegmentDiscardLoggingParamsBuilder withAdjustingFocus:] */

void FUN_10aef8764(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10aef876c; end: 10aef8773; -[SCBatchCaptureSegmentDiscardLoggingParamsBuilder withAdjustingExposure:] */

void FUN_10aef876c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 10aef8774; end: 10aef877b; -[SCBatchCaptureSegmentDiscardLoggingParamsBuilder withShutterSpeed:] */

void FUN_10aef8774(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 10aef877c; end: 10aef8783; -[SCBatchCaptureSegmentDiscardLoggingParamsBuilder withAperture:] */

void FUN_10aef877c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 10aef8784; end: 10aef878b; -[SCBatchCaptureSegmentDiscardLoggingParamsBuilder withBrightness:] */

void FUN_10aef8784(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 10aef878c; end: 10aef8793; -[SCBatchCaptureSegmentDiscardLoggingParamsBuilder withIso:] */

void FUN_10aef878c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 10aef8794; end: 10aef87cb; -[SCBatchCaptureSegmentDiscardLoggingParamsBuilder withCameraModes:] */

long FUN_10aef8794(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aef87cc; end: 10aef8803; -[SCBatchCaptureSegmentDiscardLoggingParamsBuilder withLensId:] */

long FUN_10aef87cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aef8804; end: 10aef883b; -[SCBatchCaptureSegmentDiscardLoggingParamsBuilder withTargetingCampaignId:] */

long FUN_10aef8804(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aef883c; end: 10aef8843; -[SCBatchCaptureSegmentDiscardLoggingParamsBuilder withIsWholeVideo:] */

void FUN_10aef883c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 10aef8844; end: 10aef884b; -[SCBatchCaptureSegmentDiscardLoggingParamsBuilder withDiscardMethod:] */

void FUN_10aef8844(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 10aef884c; end: 10aef8883; -[SCBatchCaptureSegmentDiscardLoggingParamsBuilder withCaptureSessionId:] */

long FUN_10aef884c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aef8884; end: 10aef88bb; -[SCBatchCaptureSegmentDiscardLoggingParamsBuilder withSnapSessionId:] */

long FUN_10aef8884(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aef88bc; end: 10aef890f; -[SCBatchCaptureSegmentDiscardLoggingParamsBuilder .cxx_destruct] */

void FUN_10aef88bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 10aef8910; end: 10aef8957; -[SCMultiCamModeLoggingParameters initWithFinalSelectedLayout:] */

void FUN_10aef8910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701d48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10aef8958; end: 10aef897b; -[SCMultiCamModeLoggingParameters copyWithZone:] */

undefined8 FUN_10aef8958(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aef897c; end: 10aef898b; -[SCMultiCamModeLoggingParameters hash] */

long FUN_10aef897c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 10aef898c; end: 10aef8a13; -[SCMultiCamModeLoggingParameters isEqual:] */

bool FUN_10aef898c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}


