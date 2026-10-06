/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108600f6c; end: 1086010af; -[SCMissedCallsCache setReason:forCallUuid:] */

void FUN_108600f6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  if ((param_4 != 0) && (lVar1 = param_1, func_0x00010be86940(), (int)lVar1 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    uStack_40 = (undefined1)lVar1;
    _objc_copyWeak(auStack_48,auStack_38);
    func_0x00010c0f8500(uVar2);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1086010b0; end: 1086011b7;  */

void FUN_1086010b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126da7a8;
  FUN_1086029d4(PTR_PTR_1126da7a8,0);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    _objc_setProperty_nonatomic_copy(puVar1);
    puVar1[0x14] = *(undefined1 *)(param_2 + 0x30);
  }
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  if (puVar1 != (undefined *)0x0) {
    *(undefined8 *)(puVar1 + 0x20) = param_1;
  }
  _objc_release(puVar2);
  func_0x00010c25ed40(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained(param_2);
  func_0x00010bdf9fe0();
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1086011b8; end: 1086011cf; -[SCMissedCallsCache _reasonFromSCMissedCallReason:] */

undefined1 FUN_1086011b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 1086011d0; end: 1086011e7; -[SCMissedCallsCache _reasonFromSCTalkMissedCallReason:] */

undefined1 FUN_1086011d0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 1086011e8; end: 1086012c7; -[SCMissedCallsCache _getExpirationDate] */

void FUN_1086011e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
  _objc_alloc_init(PTR__OBJC_CLASS___NSDateComponents_1126aef68);
  func_0x00010c189d40();
  puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf64e20(puVar2,param_2,puVar1,puVar3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1086012c8; end: 10860165f; -[SCMissedCallsCache _deleteExpiredMissedCallsWithTransactionContext:] */

void FUN_1086012c8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined4 uStack_224;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar2 = param_2;
  func_0x00010be1ee80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126da7a0);
  if (lVar2 == 0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,lVar2);
  }
  puVar3 = &uStack_191;
  FUN_108602694();
  uStack_200 = 0xf;
  uStack_1f0 = 0x100;
  ppuStack_208 = &PTR_DAT_11086d7d0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1b8 = 0;
  lStack_1c0 = 0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_176 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_188 = 6;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_DAT_11089b010;
  pppuStack_150 = &ppuStack_208;
  lStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  lStack_220 = 0;
  lStack_218 = 0;
  uStack_210 = 0;
  uStack_224 = 0;
  puVar4 = &uStack_120;
  uStack_1d8 = param_1;
  puStack_158 = puVar3;
  func_0x000107c310cc(puVar4,&ppuStack_190,&lStack_220,&uStack_224);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_220 != 0) {
    lStack_218 = lStack_220;
    __ZdlPv();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_DAT_11089b010;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_148 != 0) {
    lStack_140 = lStack_148;
    __ZdlPv();
  }
  plVar1 = plStack_1a0;
  ppuStack_208 = &PTR_DAT_11086d7d0;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1c0 != 0) {
    lStack_1b8 = lStack_1c0;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_release(lVar2);
  _objc_retain(puVar4);
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar5 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar4);
      }
      puVar6 = PTR_PTR_1126da7a8;
      FUN_108602ea8(PTR_PTR_1126da7a8,*(undefined8 *)((long)puVar7 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar7 = (undefined8 *)((long)puVar7 + 1);
    } while (puVar5 != puVar7);
    puVar5 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  lVar2 = param_4;
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(param_4);
  __Unwind_Resume(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + 8,0);
  return;
}



/* Entry: 108601660; end: 1086016b3; -[SCMissedCallsCache .cxx_destruct] */

void FUN_108601660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1086016b4; end: 10860182f; -[SCTV3SessionWrapperListenerAnnouncer description] */

void FUN_1086016b4(long param_1)

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
  
  FUN_108601830(&plStack_60,param_1 + 0x48);
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



/* Entry: 108601830; end: 10860188f;  */

void FUN_108601830(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 108601890; end: 108601b3b; -[SCTV3SessionWrapperListenerAnnouncer addListener:] */

undefined8 FUN_108601890(long param_1,undefined8 param_2,long param_3)

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
  *plVar3 = (long)&PTR_FUN_110a5b2b0;
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
    FUN_108601b3c(plVar10,auStack_90);
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
    FUN_108601c7c(puVar8,&plStack_a0);
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
LAB_108601a44:
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
      goto LAB_108601a64;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_108601b3c(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_108601b3c(plVar10,auStack_78);
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
    FUN_108601c7c(puVar8,&plStack_88);
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
      goto LAB_108601a44;
    }
  }
  uVar9 = 1;
LAB_108601a64:
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



/* Entry: 108601b3c; end: 108601c7b;  */

void FUN_108601b3c(long *param_1,long *param_2)

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
      FUN_108602170();
LAB_108601c78:
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
      if (uVar7 >> 0x3d != 0) goto LAB_108601c78;
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



/* Entry: 108601c7c; end: 108601cc3;  */

void FUN_108601c7c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 108601cc4; end: 108601ef3; -[SCTV3SessionWrapperListenerAnnouncer removeListener:] */

void FUN_108601cc4(long param_1,undefined8 param_2,long param_3)

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
  if (plVar6 == (long *)0x0) goto LAB_108601e78;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_108601d2c;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_108601c7c(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_108601e78;
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
LAB_108601d2c:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110a5b2b0;
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
          FUN_108601b3c(plVar9,lVar7);
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
    FUN_108601c7c(puVar8,&plStack_90);
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
    if (plStack_78 == (long *)0x0) goto LAB_108601e78;
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
LAB_108601e78:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108601ef4; end: 10860201b; -[SCTV3SessionWrapperListenerAnnouncer sessionWrapper:updatedUsersTalking:] */

void FUN_108601ef4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_108601830(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010c160720(uVar6);
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



/* Entry: 10860201c; end: 108602127; -[SCTV3SessionWrapperListenerAnnouncer sessionWrapper:updatedState:] */

void FUN_10860201c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_108601830(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c160700();
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



/* Entry: 108602128; end: 10860214f; -[SCTV3SessionWrapperListenerAnnouncer .cxx_destruct] */

void FUN_108602128(long param_1)

{
  FUN_108602184(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 108602150; end: 10860216f; -[SCTV3SessionWrapperListenerAnnouncer .cxx_construct] */

void FUN_108602150(long param_1)

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



/* Entry: 108602170; end: 108602183;  */

undefined * FUN_108602170(void)

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



/* Entry: 108602184; end: 1086021db;  */

long FUN_108602184(long param_1)

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



/* Entry: 1086021dc; end: 1086021eb;  */

void FUN_1086021dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5b2b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086021ec; end: 10860220b;  */

void FUN_1086021ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5b2b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10860220c; end: 108602273;  */

void FUN_10860220c(long param_1)

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



/* Entry: 108602274; end: 108602277;  */

void FUN_108602274(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108602278; end: 108602323; -[SCTalkMissedCall initWithCallUuid:reason:creationTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108602278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fd108;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127775d0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127775d0) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127775d4) = param_5;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127775d8) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108602324; end: 108602347; -[SCTalkMissedCall copyWithZone:] */

undefined8 FUN_108602324(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108602348; end: 1086023eb; -[SCTalkMissedCall hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108602348(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127775d0);
  func_0x00010bfde980();
  lStack_38 = (long)*(char *)(param_1 + _DAT_1127775d4);
  uVar5 = ~*(ulong *)(param_1 + _DAT_1127775d8) + *(ulong *)(param_1 + _DAT_1127775d8) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_40 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1086024b0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1086024bc;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (*(char *)((long)puVar3 + (long)_DAT_1127775d4) == param_3[_DAT_1127775d4])) {
      dVar8 = ABS(*(double *)((long)puVar3 + (long)_DAT_1127775d8) -
                  *(double *)(param_3 + _DAT_1127775d8));
      dVar7 = ABS(*(double *)((long)puVar3 + (long)_DAT_1127775d8) +
                  *(double *)(param_3 + _DAT_1127775d8)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_1127775d0);
        if (puVar6 != *(undefined1 **)(param_3 + _DAT_1127775d0)) {
          func_0x00010c071ae0();
          goto LAB_1086024bc;
        }
        goto LAB_1086024b0;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1086024bc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1086023ec; end: 1086024d7; -[SCTalkMissedCall isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1086023ec(ulong param_1,undefined8 param_2,ulong param_3)

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
LAB_1086024b0:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1086024bc;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (*(char *)(param_1 + (long)_DAT_1127775d4) == *(char *)(param_3 + (long)_DAT_1127775d4))) {
      dVar5 = *(double *)(param_1 + (long)_DAT_1127775d8);
      dVar6 = *(double *)(param_3 + (long)_DAT_1127775d8);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + (long)_DAT_1127775d0);
        if (lVar4 != *(long *)(param_3 + (long)_DAT_1127775d0)) {
          func_0x00010c071ae0();
          goto LAB_1086024bc;
        }
        goto LAB_1086024b0;
      }
    }
    lVar4 = 0;
  }
LAB_1086024bc:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1086024d8; end: 1086024e7; -[SCTalkMissedCall callUuid] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1086024d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127775d0);
}



/* Entry: 1086024e8; end: 1086024f7; -[SCTalkMissedCall reason] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1086024e8(long param_1)

{
  return (long)*(char *)(param_1 + _DAT_1127775d4);
}



/* Entry: 1086024f8; end: 108602507; -[SCTalkMissedCall creationTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1086024f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127775d8);
}



/* Entry: 108602508; end: 10860251b; -[SCTalkMissedCall .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108602508(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127775d0,0);
  return;
}



/* Entry: 10860251c; end: 10860257f;  */

undefined ** FUN_10860251c(void)

{
  int iVar1;
  
  if ((bRam0000000113827f90 & 1) == 0) {
    iVar1 = 0x13827f90;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113268070,0x100000000);
      ___cxa_guard_release(0x113827f90);
    }
  }
  return &PTR_PTR_113268070;
}



/* Entry: 108602580; end: 108602607;  */

void FUN_108602580(uint *param_1,undefined1 *param_2)

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



/* Entry: 108602608; end: 108602693;  */

void FUN_108602608(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf28560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bf28560(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108602694; end: 10860274b;  */

undefined8 FUN_108602694(void)

{
  int iVar1;
  
  if ((bRam0000000113828008 & 1) == 0) {
    iVar1 = 0x13828008;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113827fa0 = 0xe;
      puRam0000000113827fa8 = &UNK_10f4a99ea;
      uRam0000000113827fb0 = 0x100;
      pcRam0000000113827fb8 = FUN_10860274c;
      pcRam0000000113827fc0 = FUN_108602780;
      ppuRam0000000113827f98 = &PTR_DAT_11086d7d0;
      uRam0000000113827fd8 = 0;
      uRam0000000113827fd0 = 0;
      uRam0000000113827fe8 = 0;
      uRam0000000113827fe0 = 0;
      uRam0000000113827ff8 = 0;
      uRam0000000113827ff0 = 0;
      uRam0000000113828000 = 0;
      ___cxa_atexit(&DAT_105187b98,0x113827f98,0x100000000);
      ___cxa_guard_release(0x113828008);
    }
  }
  return 0x113827f98;
}



/* Entry: 10860274c; end: 10860277f;  */

undefined8 FUN_10860274c(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  uVar3 = 0;
  if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar2 != 0)) {
    uVar3 = *(undefined8 *)((long)piVar1 + uVar2);
  }
  return uVar3;
}



/* Entry: 108602780; end: 1086027db;  */

undefined8 FUN_108602780(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  _objc_retain();
  _objc_retain(param_2);
  *param_3 = 0;
  func_0x00010bf5ab40(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1086027dc; end: 1086027e7; +[SCTalkMissedCall table] */

undefined * FUN_1086027dc(void)

{
  return &UNK_10f4a99fc;
}



/* Entry: 1086027e8; end: 1086028fb; +[SCTalkMissedCall immutableObjectParse:bufferSize:] */

void FUN_1086027e8(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126da7a0;
  _objc_alloc(PTR_PTR_1126da7a0);
  lVar6 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar6);
  if (uVar3 < 5) {
    puVar8 = (undefined *)0x0;
    cVar5 = '\0';
    uVar9 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar1 - lVar6))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - lVar6);
    }
    uVar9 = 0;
    if (uVar3 < 7) {
      cVar5 = '\0';
    }
    else {
      uVar7 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar6));
      cVar5 = '\0';
      if (uVar7 != 0) {
        cVar5 = *(char *)((long)piVar1 + uVar7);
      }
      if ((8 < uVar3) && (uVar7 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar6)), uVar7 != 0)) {
        uVar9 = *(undefined8 *)((long)piVar1 + uVar7);
      }
    }
  }
  func_0x00010bffad80(uVar9,puVar4,param_2,puVar8,(int)cVar5);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1086028fc; end: 10860290f; +[SCTalkMissedCall objectClassFunctionPointer] */

undefined1  [16] FUN_1086028fc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_108602938;
  auVar1._0_8_ = FUN_108602910;
  return auVar1;
}



/* Entry: 108602910; end: 108602937;  */

int FUN_108602910(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf2c61af;
  _strcmp(&DAT_10f2c61af,param_1);
  return -(uint)(iVar1 != 0);
}



/* Entry: 108602938; end: 1086029d3;  */

bool FUN_108602938(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    return false;
  }
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  func_0x000107c310d8(param_2,&UNK_10f4a9a0d);
  _sqlite3_bind_int64();
  uVar3 = 0;
  if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar2 != 0)) {
    uVar3 = *(undefined8 *)((long)piVar1 + uVar2);
  }
  _sqlite3_bind_double(uVar3,param_2,2);
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 1086029d4; end: 108602ab7;  */

void FUN_1086029d4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar3 = PTR_PTR_1126da7a8;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010bf28560(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c121ea0(param_2);
    func_0x00010bf5ab40(param_2);
    FUN_108602ab8(puVar3,0xffffffffffffffff,lVar1,lVar2);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar3 + 0x10) = 1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108602ab8; end: 108602b6b;  */

undefined1 *
FUN_108602ab8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_4);
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_48 = PTR_PTR_1126fd110;
    lStack_50 = param_2;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_3;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      _objc_release(uVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = param_5;
      *(undefined8 *)((long)plVar1 + 0x20) = param_1;
    }
  }
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 108602b6c; end: 108602ea7;  */

void FUN_108602b6c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar5 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar5 < 0) {
      puVar5 = param_1;
      func_0x00010bf28560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar5 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar5;
        func_0x00010bf636c0();
        _objc_release(puVar5);
        func_0x000107c310d8(puVar1,&UNK_10f4a9a6c);
        puVar5 = (undefined *)0x0;
        if (puVar1 == (undefined *)0x0) goto LAB_108602e14;
        puVar5 = param_1;
        func_0x00010bf28560(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        puVar2 = puVar5;
        _objc_retainAutorelease(puVar5);
        func_0x00010bdc3520();
        _sqlite3_bind_text(puVar1,1,puVar2,0xffffffff,0xffffffffffffffff);
        _objc_release(puVar5);
        _objc_release(puVar5);
        puVar5 = puVar1;
        _sqlite3_step();
        if ((int)puVar5 == 100) {
          puVar2 = puVar1;
          _sqlite3_column_int64(puVar1,0);
          puVar5 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126da7a0);
          _sqlite3_column_blob(puVar1,1);
          _sqlite3_column_bytes(puVar1,1);
          puVar3 = puVar5;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar5);
          _sqlite3_reset(puVar1);
          if (puVar3 == (undefined *)0x0) goto LAB_108602e0c;
          puVar5 = PTR_PTR_1126da7a8;
          _objc_alloc(PTR_PTR_1126da7a8);
          puVar1 = puVar3;
          func_0x00010bf28560(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c121ea0(puVar3);
          func_0x00010bf5ab40(puVar3);
          FUN_108602ab8(puVar5,puVar2,puVar1,puVar4);
          param_1 = puVar3;
          goto LAB_108602c54;
        }
      }
    }
    else {
      puVar2 = param_1;
      func_0x00010c1422e0(param_1);
      puVar5 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126da7a0);
      puVar3 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126da7a8;
        _objc_alloc(PTR_PTR_1126da7a8);
        puVar1 = puVar3;
        func_0x00010bf28560(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c121ea0(puVar3);
        func_0x00010bf5ab40(puVar3);
        FUN_108602ab8(puVar5,puVar2,puVar1,puVar4);
        param_1 = puVar3;
LAB_108602c54:
        _objc_release(puVar1);
        goto LAB_108602e14;
      }
LAB_108602e0c:
      param_1 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_108602e14:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108602ea8; end: 108602f1b;  */

void FUN_108602ea8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108602b6c();
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



/* Entry: 108602f1c; end: 108602f83;  */

void FUN_108602f1c(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126da7a0;
    _objc_alloc(PTR_PTR_1126da7a0);
    func_0x00010bffad80(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108602f84; end: 108602f8f; -[SCTalkMissedCallChangeRequest .cxx_destruct] */

void FUN_108602f84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108602f90; end: 108602f9b; -[SCTalkMissedCallChangeRequest table] */

undefined * FUN_108602f90(void)

{
  return &UNK_10f4a99fc;
}



/* Entry: 108602f9c; end: 10860304f; -[SCTalkMissedCallChangeRequest createTableWithSQLite:] */

void FUN_108602f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10df3630f,0x82,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10df36391,0x77,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10df36408,0x8f,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 108603050; end: 1086035e7; -[SCTalkMissedCallChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108603050(double param_1,undefined *param_2,undefined8 param_3,long param_4,long param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  double dVar12;
  undefined8 uVar13;
  
  iVar3 = *(int *)(param_2 + 0x10);
  puVar5 = param_2;
  if (iVar3 == 1) {
    FUN_108602f1c(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_5;
    FUN_1086035e8(param_5,puVar5);
    func_0x000107c27dc4(param_5,lVar6,0,0);
    puVar11 = *(uint **)(param_5 + 0x30);
    uVar4 = *puVar11;
    puVar9 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar9;
    func_0x00010bf636c0();
    func_0x00010507cae4();
    _objc_release(puVar9);
    lVar6 = param_4;
    func_0x000107c310d8(param_4,&UNK_10f4a9b1b);
    if (lVar6 == 0) goto LAB_108603540;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_5 + 0x30),
                       (*(int *)(param_5 + 0x20) - (int)*(undefined8 *)(param_5 + 0x30)) +
                       *(int *)(param_5 + 0x28),0);
    piVar1 = (int *)((long)puVar11 + (ulong)uVar4);
    puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar11 + (ulong)*puVar11);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_108603540;
    uVar10 = *(undefined8 *)(param_4 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar7 & 1) != 0) {
      func_0x000107c310d8(param_4,&UNK_10f4a9a0d);
      _sqlite3_bind_int64();
      uVar13 = 0;
      if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
         (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar8 != 0)) {
        uVar13 = *(undefined8 *)((long)piVar1 + uVar8);
      }
      _sqlite3_bind_double(uVar13,param_4,2);
      _sqlite3_step();
      if ((int)param_4 != 0x65) goto LAB_108603540;
    }
    *(undefined8 *)(param_2 + 8) = uVar10;
    func_0x00010c1eeb60(puVar5);
    puVar9 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126da7a0);
    func_0x00010c21c9a0(puVar9);
LAB_108603518:
    _objc_release(puVar9);
    _objc_retain(puVar5);
    puVar9 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        lVar6 = param_4;
        func_0x000107c310d8(param_4,&UNK_10f4a9aac);
        if (lVar6 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar6 == 0x65) {
            func_0x000107c310d8(param_4,&UNK_10f4a9ad8);
            if (param_4 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_4 != 0x65) goto LAB_108603180;
            }
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126da7a0);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar9);
            _objc_release(puVar5);
            puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10860354c;
          }
        }
      }
LAB_108603180:
      puVar9 = (undefined *)0x0;
      goto LAB_10860354c;
    }
    FUN_108602f1c(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_5;
    FUN_1086035e8(param_5,puVar5);
    func_0x000107c27dc4(param_5,lVar6,0,0);
    puVar11 = *(uint **)(param_5 + 0x30);
    uVar4 = *puVar11;
    uVar10 = *(undefined8 *)(param_2 + 8);
    _objc_retain(puVar5);
    lVar6 = param_4;
    func_0x000107c310d8(param_4,&UNK_10f4a9b56);
    if (lVar6 != 0) {
      _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_5 + 0x30),
                         (*(int *)(param_5 + 0x20) - (int)*(undefined8 *)(param_5 + 0x30)) +
                         *(int *)(param_5 + 0x28),0);
      _sqlite3_bind_int64(lVar6,2,uVar10);
      piVar1 = (int *)((long)puVar11 + (ulong)uVar4);
      puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar11 + (ulong)*puVar11);
      _sqlite3_bind_text(lVar6,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar6 == 0x65) {
        puVar9 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126da7a0);
        puVar7 = puVar9;
        func_0x00010c0dfea0(puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        func_0x00010bf5ab40(puVar7);
        dVar12 = param_1;
        func_0x00010bf5ab40(puVar5);
        if (param_1 != dVar12) {
          func_0x000107c310d8(param_4,&UNK_10f4a9b9b);
          uVar13 = 0;
          if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
             (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar8 != 0)) {
            uVar13 = *(undefined8 *)((long)piVar1 + uVar8);
          }
          _sqlite3_bind_double(uVar13,param_4,1);
          _sqlite3_bind_int64(param_4,2,uVar10);
          _sqlite3_step();
          if ((int)param_4 != 0x65) {
            _objc_release(puVar7);
            goto LAB_108603538;
          }
        }
        _objc_release(puVar7);
        _objc_release(puVar5);
        puVar9 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126da7a0);
        func_0x00010c21c9a0(puVar9);
        goto LAB_108603518;
      }
    }
LAB_108603538:
    _objc_release(puVar5);
LAB_108603540:
    puVar9 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_10860354c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1086035e8; end: 1086037df;  */

ulong FUN_1086035e8(undefined8 param_1,ulong param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  pcVar4 = param_3;
  func_0x00010bf28560();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_1086036e8;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_2;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x000107c27df0(param_2,pcVar5,pcVar6);
    goto LAB_1086036e8;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_1086036a8;
    uVar9 = 0;
  }
  else {
LAB_1086036a8:
    pcVar7 = pcVar5;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar8 = pcVar5;
    func_0x00010c08fa60(pcVar5);
    pcVar6 = "";
    if (pcVar7 != (char *)0x0) {
      pcVar6 = pcVar7;
    }
    func_0x000107c27df0(param_2,pcVar6,pcVar8);
  }
  _objc_release(pcVar5);
LAB_1086036e8:
  _objc_release(pcVar4);
  pcVar5 = param_3;
  func_0x00010c121ea0(param_3);
  func_0x00010bf5ab40(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000107c27db8(param_1,0,param_2,8);
  func_0x000107c27ddc(param_2,4,uVar9 & 0xffffffff);
  func_0x000107c27e1c(param_2,6,pcVar5,0);
  func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 1086037e0; end: 10860380b; +[SCGraphenePresenceRenderMetric bitmojiFetchFailed] */

void FUN_1086037e0(void)

{
  _objc_alloc(PTR_PTR_1126da530);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10860380c; end: 1086038ab; -[SCGraphenePresenceRenderMetric description] */

void FUN_10860380c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ee57f8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ee57f8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fd118;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1086038ac; end: 1086039ef; -[SCGrapheneRegistry presenceRenderGraphene] */

void FUN_1086038ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108603934;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372c498 != -1) {
    func_0x000107c27d9c(0x11372c498,&puStack_48);
  }
  uVar1 = uRam000000011372c490;
  _objc_retain(uRam000000011372c490);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1086039f0; end: 108603a1b; +[SCTNotificationPresenter valdiMarshallableObjectDescriptor] */

void FUN_1086039f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a5b320;
  param_1[1] = &PTR_DAT_110a5b350;
  param_1[2] = &PTR_DAT_110a5b2f0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 108603a1c; end: 108603a47;  */

undefined8 FUN_108603a1c(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],param_2[2],*(undefined4 *)(param_2 + 3));
  return 0;
}



/* Entry: 108603a48; end: 108603ac3;  */

void FUN_108603a48(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108603d7c;
  puStack_30 = &UNK_1108d15e0;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  func_0x000108603dec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108603ac4; end: 108603b1b;  */

undefined8 FUN_108603ac4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da7b0;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  func_0x000108603dd4();
  return param_1;
}



/* Entry: 108603b1c; end: 108603b27; +[SCSnapDialerView componentPath] */

undefined ** FUN_108603b1c(void)

{
  return &PTR____CFConstantStringClassReference_110ee5838;
}



/* Entry: 108603b28; end: 108603b47; -[SCSnapDialerView initWithViewModel:componentContext:runtime:] */

void FUN_108603b28(void)

{
  FUN_108603db0(PTR_PTR_1126fd120);
  return;
}



/* Entry: 108603b48; end: 108603b7b; -[SCSnapDialerView setViewModel:] */

void FUN_108603b48(void)

{
  func_0x000108603dc4();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108603de0();
  func_0x000108603dec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108603b7c; end: 108603bb3; -[SCSnapDialerView viewModel] */

void FUN_108603b7c(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108603dd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108603bb4; end: 108603bbf; +[SCTCallButtonsView componentPath] */

undefined ** FUN_108603bb4(void)

{
  return &PTR____CFConstantStringClassReference_110ee5858;
}



/* Entry: 108603bc0; end: 108603bdf; -[SCTCallButtonsView initWithViewModel:componentContext:runtime:] */

void FUN_108603bc0(void)

{
  FUN_108603db0(PTR_PTR_1126fd128);
  return;
}



/* Entry: 108603be0; end: 108603c13; -[SCTCallButtonsView setViewModel:] */

void FUN_108603be0(void)

{
  func_0x000108603dc4();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108603de0();
  func_0x000108603dec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108603c14; end: 108603c4b; -[SCTCallButtonsView viewModel] */

void FUN_108603c14(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108603dd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108603c4c; end: 108603c57; +[SCTCallViewWrapper componentPath] */

undefined ** FUN_108603c4c(void)

{
  return &PTR____CFConstantStringClassReference_110ee5878;
}



/* Entry: 108603c58; end: 108603c77; -[SCTCallViewWrapper initWithViewModel:componentContext:runtime:] */

void FUN_108603c58(void)

{
  FUN_108603db0(PTR_PTR_1126fd130);
  return;
}



/* Entry: 108603c78; end: 108603cab; -[SCTCallViewWrapper setViewModel:] */

void FUN_108603c78(void)

{
  func_0x000108603dc4();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108603de0();
  func_0x000108603dec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108603cac; end: 108603ce3; -[SCTCallViewWrapper viewModel] */

void FUN_108603cac(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108603dd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108603ce4; end: 108603cef; +[SCTPipView componentPath] */

undefined ** FUN_108603ce4(void)

{
  return &PTR____CFConstantStringClassReference_110ee5898;
}



/* Entry: 108603cf0; end: 108603d0f; -[SCTPipView initWithViewModel:componentContext:runtime:] */

void FUN_108603cf0(void)

{
  FUN_108603db0(PTR_PTR_1126fd138);
  return;
}



/* Entry: 108603d10; end: 108603d43; -[SCTPipView setViewModel:] */

void FUN_108603d10(void)

{
  func_0x000108603dc4();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108603de0();
  func_0x000108603dec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108603d44; end: 108603d7b; -[SCTPipView viewModel] */

void FUN_108603d44(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108603dd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108603d7c; end: 108603daf;  */

void FUN_108603d7c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108603db0; end: 108603e0b;  */

void FUN_108603db0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 108603e0c; end: 108603e17; +[SCTCallFeedbackTray componentPath] */

undefined ** FUN_108603e0c(void)

{
  return &PTR____CFConstantStringClassReference_110ee58b8;
}



/* Entry: 108603e18; end: 108603e4b; -[SCTCallFeedbackTray initWithViewModel:componentContext:runtime:] */

void FUN_108603e18(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fd140;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 108603e4c; end: 108603e9b; -[SCTCallFeedbackTray setViewModel:] */

void FUN_108603e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108603e9c; end: 108603edf; -[SCTCallFeedbackTray viewModel] */

void FUN_108603e9c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108603ee0; end: 108603f0b; +[SCGrapheneFriendsFeedMetric firstRenderLatency] */

void FUN_108603ee0(void)

{
  _objc_alloc(PTR_PTR_1126b2cb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108603f0c; end: 108603f37; +[SCGrapheneFriendsFeedMetric ffVcInitLatency] */

void FUN_108603f0c(void)

{
  _objc_alloc(PTR_PTR_1126b2cb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108603f38; end: 108603f63; +[SCGrapheneFriendsFeedMetric ffVcInitToEnterLatency] */

void FUN_108603f38(void)

{
  _objc_alloc(PTR_PTR_1126b2cb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108603f64; end: 108603f8f; +[SCGrapheneFriendsFeedMetric ffVcInitToRenderLatency] */

void FUN_108603f64(void)

{
  _objc_alloc(PTR_PTR_1126b2cb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108603f90; end: 108603fbb; +[SCGrapheneFriendsFeedMetric ffInitialRenderVmGen] */

void FUN_108603f90(void)

{
  _objc_alloc(PTR_PTR_1126b2cb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108603fbc; end: 108603fe7; +[SCGrapheneFriendsFeedMetric ffInitialWarmupCount] */

void FUN_108603fbc(void)

{
  _objc_alloc(PTR_PTR_1126b2cb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108603fe8; end: 108604013; +[SCGrapheneFriendsFeedMetric nativeInitialFetchFeedTime] */

void FUN_108603fe8(void)

{
  _objc_alloc(PTR_PTR_1126b2cb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108604014; end: 10860403f; +[SCGrapheneFriendsFeedMetric ffReady] */

void FUN_108604014(void)

{
  _objc_alloc(PTR_PTR_1126b2cb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108604040; end: 10860406b; +[SCGrapheneFriendsFeedMetric ffReadySyncTime] */

void FUN_108604040(void)

{
  _objc_alloc(PTR_PTR_1126b2cb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10860406c; end: 108604097; +[SCGrapheneFriendsFeedMetric ffReadyNegativeRender] */

void FUN_10860406c(void)

{
  _objc_alloc(PTR_PTR_1126b2cb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108604098; end: 1086040c3; +[SCGrapheneFriendsFeedMetric ffReadyBailed] */

void FUN_108604098(void)

{
  _objc_alloc(PTR_PTR_1126b2cb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1086040c4; end: 1086040ef; +[SCGrapheneFriendsFeedMetric ffReadySyncCount] */

void FUN_1086040c4(void)

{
  _objc_alloc(PTR_PTR_1126b2cb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1086040f0; end: 10860411b; +[SCGrapheneFriendsFeedMetric ffReadyFeedEntryCount] */

void FUN_1086040f0(void)

{
  _objc_alloc(PTR_PTR_1126b2cb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10860411c; end: 108604147; +[SCGrapheneFriendsFeedMetric ffReadyUnviewedSnapCount] */

void FUN_10860411c(void)

{
  _objc_alloc(PTR_PTR_1126b2cb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108604148; end: 108604173; +[SCGrapheneFriendsFeedMetric ffReadyUnviewedChatCount] */

void FUN_108604148(void)

{
  _objc_alloc(PTR_PTR_1126b2cb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108604174; end: 10860419f; +[SCGrapheneFriendsFeedMetric ffReadyStoryCount] */

void FUN_108604174(void)

{
  _objc_alloc(PTR_PTR_1126b2cb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1086041a0; end: 1086041cb; +[SCGrapheneFriendsFeedMetric ffReadyRender] */

void FUN_1086041a0(void)

{
  _objc_alloc(PTR_PTR_1126b2cb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1086041cc; end: 1086041f7; +[SCGrapheneFriendsFeedMetric ffUnreadItemImpression] */

void FUN_1086041cc(void)

{
  _objc_alloc(PTR_PTR_1126b2cb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1086041f8; end: 108604223; +[SCGrapheneFriendsFeedMetric snapPushContent] */

void FUN_1086041f8(void)

{
  _objc_alloc(PTR_PTR_1126b2cb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


