/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00443b98; end: 00443c9f; -[SCFreeDiskSpaceMonitorListenerAnnouncer didReceiveUpdatedFreeDiskSpaceSpaceMode:] */

void FUN_00443b98(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = param_1 + 0x48;
  __ZNSt3__112__get_sp_mutEPKv(lVar8);
  __ZNSt3__18__sp_mut4lockEv();
  plVar2 = *(long **)(param_1 + 0x48);
  plVar3 = *(long **)(param_1 + 0x50);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  __ZNSt3__18__sp_mut6unlockEv(lVar8);
  if (plVar2 != (long *)0x0) {
    lVar4 = plVar2[1];
    for (lVar8 = *plVar2; lVar8 != lVar4; lVar8 = lVar8 + 8) {
      lVar7 = lVar8;
      _objc_loadWeakRetained(lVar8);
      func_0x00782180();
      _objc_release(lVar7);
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar3 + 1;
    do {
      lVar8 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00779e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_00998b98)(plVar3);
      return;
    }
  }
  return;
}



/* Entry: 00443ca0; end: 00443cc7; -[SCFreeDiskSpaceMonitorListenerAnnouncer .cxx_destruct] */

void FUN_00443ca0(long param_1)

{
  FUN_00443d98(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00779ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_00998be0)(param_1 + 8);
  return;
}



/* Entry: 00443cc8; end: 00443ce7; -[SCFreeDiskSpaceMonitorListenerAnnouncer .cxx_construct] */

void FUN_00443cc8(long param_1)

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



/* Entry: 00443ce8; end: 00443cfb;  */

void FUN_00443ce8(void)

{
  char *pcVar1;
  
  pcVar1 = "vector";
  FUN_0040d774();
  *(undefined ***)pcVar1 = &PTR_FUN_009e4560;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00443cfc; end: 00443d0b;  */

void FUN_00443cfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e4560;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00443d0c; end: 00443d2b;  */

void FUN_00443d0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e4560;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00443d2c; end: 00443d93;  */

void FUN_00443d2c(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1);
    return;
  }
  return;
}



/* Entry: 00443d94; end: 00443d97;  */

void FUN_00443d94(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00443d98; end: 00443def;  */

long FUN_00443d98(long param_1)

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



/* Entry: 00443df0; end: 00443e5b; -[SCGrapheneStorageMetric2 init] */

undefined1 * FUN_00443df0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3bd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    FUN_0044fadc();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00443e5c; end: 00443ff3;  */

void FUN_00443e5c(long param_1,char *param_2,char *param_3,char *param_4)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char acStack_420 [24];
  undefined1 *puStack_408;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  char *pcStack_3d8;
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  char *pcStack_3c0;
  char *pcStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  char acStack_3a0 [24];
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  char *pcStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  char *pcStack_340;
  char *pcStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  char acStack_320 [24];
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  char *pcStack_2d8;
  undefined8 *puStack_2d0;
  char *pcStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_298 [24];
  char *pcStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  char acStack_200 [24];
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar3 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar2 = param_2;
  pcVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    pcVar2 = "";
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x0077bcc0();
      }
      _objc_release(param_2);
      unaff_x23 = (char *)auStack_60;
      FUN_00425cb4(auStack_60,pcVar2);
      acStack_80[0] = '\0';
      acStack_80[1] = '\0';
      acStack_80[2] = '\0';
      acStack_80[3] = '\0';
      acStack_80[4] = '\0';
      acStack_80[5] = '\0';
      acStack_80[6] = '\0';
      acStack_80[7] = '\0';
      acStack_80[8] = '\0';
      acStack_80[9] = '\0';
      acStack_80[10] = '\0';
      acStack_80[0xb] = '\0';
      acStack_80[0xc] = '\0';
      acStack_80[0xd] = '\0';
      acStack_80[0xe] = '\0';
      acStack_80[0xf] = '\0';
      acStack_80[0x10] = '\0';
      acStack_80[0x11] = '\0';
      acStack_80[0x12] = '\0';
      acStack_80[0x13] = '\0';
      acStack_80[0x14] = '\0';
      acStack_80[0x15] = '\0';
      acStack_80[0x16] = '\0';
      acStack_80[0x17] = '\0';
      FUN_00444afc(acStack_80,auStack_60,&lStack_48,1);
      param_4 = (char *)((long)param_3 * 100);
      pcVar2 = "";
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_68 = acStack_80;
      func_0x00427b38(&puStack_68);
      pcVar4 = pcVar3;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        pcVar4 = pcVar3;
      }
    }
  }
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar9 = acStack_100;
  pcStack_88 = FUN_00443ff4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar6 = pcVar2;
  pcVar8 = pcVar4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  if (pcVar3 != (char *)0x0) {
    plVar1 = *(long **)(pcVar3 + 8);
    pcVar6 = "\x02";
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x0077bcc0();
      }
      _objc_release(pcVar2);
      unaff_x23 = (char *)auStack_e0;
      FUN_00425cb4(auStack_e0,pcVar3);
      acStack_100[0] = '\0';
      acStack_100[1] = '\0';
      acStack_100[2] = '\0';
      acStack_100[3] = '\0';
      acStack_100[4] = '\0';
      acStack_100[5] = '\0';
      acStack_100[6] = '\0';
      acStack_100[7] = '\0';
      acStack_100[8] = '\0';
      acStack_100[9] = '\0';
      acStack_100[10] = '\0';
      acStack_100[0xb] = '\0';
      acStack_100[0xc] = '\0';
      acStack_100[0xd] = '\0';
      acStack_100[0xe] = '\0';
      acStack_100[0xf] = '\0';
      acStack_100[0x10] = '\0';
      acStack_100[0x11] = '\0';
      acStack_100[0x12] = '\0';
      acStack_100[0x13] = '\0';
      acStack_100[0x14] = '\0';
      acStack_100[0x15] = '\0';
      acStack_100[0x16] = '\0';
      acStack_100[0x17] = '\0';
      FUN_00444afc(acStack_100,auStack_e0,&lStack_c8,1);
      pcVar6 = "\x02";
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_e8 = acStack_100;
      func_0x00427b38(&puStack_e8);
      pcVar8 = pcVar9;
      param_4 = pcVar4;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        pcVar8 = pcVar9;
        param_4 = pcVar4;
      }
    }
  }
  pcVar4 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  __Unwind_Resume();
  pcVar9 = acStack_180;
  pcStack_108 = FUN_00444188;
  lStack_148 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar2 = pcVar6;
  pcVar3 = pcVar8;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar6);
  if (pcVar4 != (char *)0x0) {
    plVar1 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x0077bcc0();
    }
    _objc_release(pcVar6);
    unaff_x23 = (char *)auStack_160;
    FUN_00425cb4(auStack_160,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    FUN_00444afc(acStack_180,auStack_160,&lStack_148,1);
    pcVar2 = "";
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_168 = acStack_180;
    func_0x00427b38(&puStack_168);
    pcVar3 = pcVar9;
    param_4 = pcVar8;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      pcVar3 = pcVar9;
      param_4 = pcVar8;
    }
  }
  pcVar4 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  __Unwind_Resume();
  pcVar9 = acStack_200;
  pcStack_188 = FUN_004442fc;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar6 = pcVar2;
  pcVar8 = pcVar3;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(pcVar2);
  if (pcVar4 != (char *)0x0) {
    plVar1 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x0077bcc0();
    }
    _objc_release(pcVar2);
    unaff_x23 = (char *)auStack_1e0;
    FUN_00425cb4(auStack_1e0,pcVar4);
    acStack_200[0] = '\0';
    acStack_200[1] = '\0';
    acStack_200[2] = '\0';
    acStack_200[3] = '\0';
    acStack_200[4] = '\0';
    acStack_200[5] = '\0';
    acStack_200[6] = '\0';
    acStack_200[7] = '\0';
    acStack_200[8] = '\0';
    acStack_200[9] = '\0';
    acStack_200[10] = '\0';
    acStack_200[0xb] = '\0';
    acStack_200[0xc] = '\0';
    acStack_200[0xd] = '\0';
    acStack_200[0xe] = '\0';
    acStack_200[0xf] = '\0';
    acStack_200[0x10] = '\0';
    acStack_200[0x11] = '\0';
    acStack_200[0x12] = '\0';
    acStack_200[0x13] = '\0';
    acStack_200[0x14] = '\0';
    acStack_200[0x15] = '\0';
    acStack_200[0x16] = '\0';
    acStack_200[0x17] = '\0';
    FUN_00444afc(acStack_200,auStack_1e0,&lStack_1c8,1);
    pcVar6 = "\x02";
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_1e8 = acStack_200;
    func_0x00427b38(&puStack_1e8);
    pcVar8 = pcVar9;
    param_4 = pcVar3;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      pcVar8 = pcVar9;
      param_4 = pcVar3;
    }
  }
  pcVar4 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  __Unwind_Resume();
  pcStack_208 = FUN_00444470;
  lStack_248 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar2 = pcVar6;
  pcVar3 = pcVar8;
  pcVar12 = param_4;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(pcVar6);
  _objc_retain(pcVar8);
  pcVar9 = (char *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar1 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x0077bcc0();
    }
    _objc_release(pcVar6);
    unaff_x24 = auStack_278;
    FUN_00425cb4(auStack_278,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x0077bcc0(pcVar8);
    }
    _objc_release(pcVar8);
    FUN_00425cb4(auStack_260,pcVar2);
    acStack_298[0] = '\0';
    acStack_298[1] = '\0';
    acStack_298[2] = '\0';
    acStack_298[3] = '\0';
    acStack_298[4] = '\0';
    acStack_298[5] = '\0';
    acStack_298[6] = '\0';
    acStack_298[7] = '\0';
    acStack_298[8] = '\0';
    acStack_298[9] = '\0';
    acStack_298[10] = '\0';
    acStack_298[0xb] = '\0';
    acStack_298[0xc] = '\0';
    acStack_298[0xd] = '\0';
    acStack_298[0xe] = '\0';
    acStack_298[0xf] = '\0';
    acStack_298[0x10] = '\0';
    acStack_298[0x11] = '\0';
    acStack_298[0x12] = '\0';
    acStack_298[0x13] = '\0';
    acStack_298[0x14] = '\0';
    acStack_298[0x15] = '\0';
    acStack_298[0x16] = '\0';
    acStack_298[0x17] = '\0';
    FUN_00444afc(acStack_298,auStack_278,&lStack_248,2);
    pcVar2 = "";
    unaff_x23 = acStack_298;
    pcVar3 = acStack_298;
    (**(code **)(*plVar1 + 0x18))(plVar1);
    pcStack_280 = unaff_x23;
    func_0x00427b38(&pcStack_280);
    lVar13 = 0;
    pcVar9 = (char *)auStack_278;
    pcVar12 = param_4;
    do {
      if ((&cStack_249)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar4 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar6);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcVar11 = acStack_320;
  pcStack_2a8 = FUN_004446a0;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar7 = pcVar2;
  pcVar10 = pcVar3;
  puStack_2e0 = unaff_x24;
  pcStack_2d8 = unaff_x23;
  puStack_2d0 = (undefined8 *)pcVar9;
  pcStack_2c8 = pcVar4;
  pcStack_2c0 = pcVar8;
  pcStack_2b8 = pcVar6;
  pppuStack_2b0 = &pppuStack_210;
  _objc_retain(pcVar2);
  plVar1 = (long *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar1 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x0077bcc0();
    }
    _objc_release(pcVar2);
    unaff_x23 = (char *)auStack_300;
    FUN_00425cb4(auStack_300,pcVar4);
    acStack_320[0] = '\0';
    acStack_320[1] = '\0';
    acStack_320[2] = '\0';
    acStack_320[3] = '\0';
    acStack_320[4] = '\0';
    acStack_320[5] = '\0';
    acStack_320[6] = '\0';
    acStack_320[7] = '\0';
    acStack_320[8] = '\0';
    acStack_320[9] = '\0';
    acStack_320[10] = '\0';
    acStack_320[0xb] = '\0';
    acStack_320[0xc] = '\0';
    acStack_320[0xd] = '\0';
    acStack_320[0xe] = '\0';
    acStack_320[0xf] = '\0';
    acStack_320[0x10] = '\0';
    acStack_320[0x11] = '\0';
    acStack_320[0x12] = '\0';
    acStack_320[0x13] = '\0';
    acStack_320[0x14] = '\0';
    acStack_320[0x15] = '\0';
    acStack_320[0x16] = '\0';
    acStack_320[0x17] = '\0';
    FUN_00444afc(acStack_320,auStack_300,&lStack_2e8,1);
    pcVar7 = "\x02";
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_308 = acStack_320;
    func_0x00427b38(&puStack_308);
    pcVar10 = pcVar11;
    pcVar12 = pcVar3;
    pcVar9 = acStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      pcVar10 = pcVar11;
      pcVar12 = pcVar3;
      pcVar9 = acStack_320;
    }
  }
  pcVar4 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  pcVar6 = pcVar4;
  __Unwind_Resume();
  pcVar5 = acStack_3a0;
  pcStack_328 = FUN_00444814;
  lStack_368 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar3 = pcVar7;
  pcVar8 = pcVar10;
  puStack_360 = unaff_x24;
  pcStack_358 = unaff_x23;
  puStack_350 = (undefined8 *)pcVar9;
  plStack_348 = plVar1;
  pcStack_340 = pcVar4;
  pcStack_338 = pcVar2;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(pcVar7);
  plVar1 = (long *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar1 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x0077bcc0();
    }
    _objc_release(pcVar7);
    unaff_x23 = (char *)auStack_380;
    FUN_00425cb4(auStack_380,pcVar2);
    acStack_3a0[0] = '\0';
    acStack_3a0[1] = '\0';
    acStack_3a0[2] = '\0';
    acStack_3a0[3] = '\0';
    acStack_3a0[4] = '\0';
    acStack_3a0[5] = '\0';
    acStack_3a0[6] = '\0';
    acStack_3a0[7] = '\0';
    acStack_3a0[8] = '\0';
    acStack_3a0[9] = '\0';
    acStack_3a0[10] = '\0';
    acStack_3a0[0xb] = '\0';
    acStack_3a0[0xc] = '\0';
    acStack_3a0[0xd] = '\0';
    acStack_3a0[0xe] = '\0';
    acStack_3a0[0xf] = '\0';
    acStack_3a0[0x10] = '\0';
    acStack_3a0[0x11] = '\0';
    acStack_3a0[0x12] = '\0';
    acStack_3a0[0x13] = '\0';
    acStack_3a0[0x14] = '\0';
    acStack_3a0[0x15] = '\0';
    acStack_3a0[0x16] = '\0';
    acStack_3a0[0x17] = '\0';
    FUN_00444afc(acStack_3a0,auStack_380,&lStack_368,1);
    pcVar3 = "";
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_388 = acStack_3a0;
    func_0x00427b38(&puStack_388);
    pcVar8 = pcVar5;
    pcVar12 = pcVar10;
    pcVar9 = acStack_3a0;
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
      pcVar8 = pcVar5;
      pcVar12 = pcVar10;
      pcVar9 = acStack_3a0;
    }
  }
  pcVar2 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  _objc_release(pcVar7);
  pcVar6 = pcVar2;
  __Unwind_Resume();
  pcVar10 = acStack_420;
  pcStack_3a8 = FUN_00444988;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar4 = pcVar3;
  pcVar5 = pcVar8;
  puStack_3e0 = unaff_x24;
  pcStack_3d8 = unaff_x23;
  puStack_3d0 = (undefined8 *)pcVar9;
  plStack_3c8 = plVar1;
  pcStack_3c0 = pcVar2;
  pcStack_3b8 = pcVar7;
  pppuStack_3b0 = &pppuStack_330;
  _objc_retain(pcVar3);
  if (pcVar6 != (char *)0x0) {
    plVar1 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x0077bcc0();
    }
    _objc_release(pcVar3);
    FUN_00425cb4(auStack_400,pcVar2);
    acStack_420[0] = '\0';
    acStack_420[1] = '\0';
    acStack_420[2] = '\0';
    acStack_420[3] = '\0';
    acStack_420[4] = '\0';
    acStack_420[5] = '\0';
    acStack_420[6] = '\0';
    acStack_420[7] = '\0';
    acStack_420[8] = '\0';
    acStack_420[9] = '\0';
    acStack_420[10] = '\0';
    acStack_420[0xb] = '\0';
    acStack_420[0xc] = '\0';
    acStack_420[0xd] = '\0';
    acStack_420[0xe] = '\0';
    acStack_420[0xf] = '\0';
    acStack_420[0x10] = '\0';
    acStack_420[0x11] = '\0';
    acStack_420[0x12] = '\0';
    acStack_420[0x13] = '\0';
    acStack_420[0x14] = '\0';
    acStack_420[0x15] = '\0';
    acStack_420[0x16] = '\0';
    acStack_420[0x17] = '\0';
    FUN_00444afc(acStack_420,auStack_400,&lStack_3e8,1);
    pcVar4 = "";
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_009e47d0,acStack_420);
    puStack_408 = acStack_420;
    func_0x00427b38(&puStack_408);
    pcVar5 = pcVar10;
    pcVar12 = pcVar8;
    if (cStack_3e9 < '\0') {
      __ZdlPv(auStack_400[0]);
      pcVar5 = pcVar10;
      pcVar12 = pcVar8;
    }
  }
  pcVar2 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  _objc_release(pcVar3);
  __Unwind_Resume();
  if (pcVar12 != (char *)0x0) {
    FUN_004279b8();
    pcVar3 = pcVar2 + 0x10;
    FUN_00444b80(pcVar3,pcVar4,pcVar5,*(undefined8 *)(pcVar2 + 8));
    *(char **)(pcVar2 + 8) = pcVar3;
  }
  return;
}



/* Entry: 00443ff4; end: 00444187;  */

void FUN_00443ff4(long param_1,char *param_2,char *param_3,char *param_4)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char acStack_3a0 [24];
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  char *pcStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  char *pcStack_340;
  char *pcStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  char acStack_320 [24];
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  char *pcStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_2a0 [24];
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  char *pcStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_218 [24];
  char *pcStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar3 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar2 = param_2;
  pcVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    pcVar2 = "\x02";
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x0077bcc0();
      }
      _objc_release(param_2);
      unaff_x23 = (char *)auStack_60;
      FUN_00425cb4(auStack_60,pcVar2);
      acStack_80[0] = '\0';
      acStack_80[1] = '\0';
      acStack_80[2] = '\0';
      acStack_80[3] = '\0';
      acStack_80[4] = '\0';
      acStack_80[5] = '\0';
      acStack_80[6] = '\0';
      acStack_80[7] = '\0';
      acStack_80[8] = '\0';
      acStack_80[9] = '\0';
      acStack_80[10] = '\0';
      acStack_80[0xb] = '\0';
      acStack_80[0xc] = '\0';
      acStack_80[0xd] = '\0';
      acStack_80[0xe] = '\0';
      acStack_80[0xf] = '\0';
      acStack_80[0x10] = '\0';
      acStack_80[0x11] = '\0';
      acStack_80[0x12] = '\0';
      acStack_80[0x13] = '\0';
      acStack_80[0x14] = '\0';
      acStack_80[0x15] = '\0';
      acStack_80[0x16] = '\0';
      acStack_80[0x17] = '\0';
      FUN_00444afc(acStack_80,auStack_60,&lStack_48,1);
      pcVar2 = "\x02";
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_68 = acStack_80;
      func_0x00427b38(&puStack_68);
      pcVar4 = pcVar3;
      param_4 = param_3;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        pcVar4 = pcVar3;
        param_4 = param_3;
      }
    }
  }
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar9 = acStack_100;
  pcStack_88 = FUN_00444188;
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar6 = pcVar2;
  pcVar8 = pcVar4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  if (pcVar3 != (char *)0x0) {
    plVar1 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x0077bcc0();
    }
    _objc_release(pcVar2);
    unaff_x23 = (char *)auStack_e0;
    FUN_00425cb4(auStack_e0,pcVar3);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    FUN_00444afc(acStack_100,auStack_e0,&lStack_c8,1);
    pcVar6 = "";
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_e8 = acStack_100;
    func_0x00427b38(&puStack_e8);
    pcVar8 = pcVar9;
    param_4 = pcVar4;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar8 = pcVar9;
      param_4 = pcVar4;
    }
  }
  pcVar4 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  __Unwind_Resume();
  pcVar9 = acStack_180;
  pcStack_108 = FUN_004442fc;
  lStack_148 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar2 = pcVar6;
  pcVar3 = pcVar8;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar6);
  if (pcVar4 != (char *)0x0) {
    plVar1 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x0077bcc0();
    }
    _objc_release(pcVar6);
    unaff_x23 = (char *)auStack_160;
    FUN_00425cb4(auStack_160,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    FUN_00444afc(acStack_180,auStack_160,&lStack_148,1);
    pcVar2 = "\x02";
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_168 = acStack_180;
    func_0x00427b38(&puStack_168);
    pcVar3 = pcVar9;
    param_4 = pcVar8;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      pcVar3 = pcVar9;
      param_4 = pcVar8;
    }
  }
  pcVar4 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  __Unwind_Resume();
  pcStack_188 = FUN_00444470;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar6 = pcVar2;
  pcVar8 = pcVar3;
  pcVar12 = param_4;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(pcVar2);
  _objc_retain(pcVar3);
  pcVar9 = (char *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar1 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x0077bcc0();
    }
    _objc_release(pcVar2);
    unaff_x24 = auStack_1f8;
    FUN_00425cb4(auStack_1f8,pcVar4);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar4 = pcVar3;
      func_0x0077bcc0(pcVar3);
    }
    _objc_release(pcVar3);
    FUN_00425cb4(auStack_1e0,pcVar4);
    acStack_218[0] = '\0';
    acStack_218[1] = '\0';
    acStack_218[2] = '\0';
    acStack_218[3] = '\0';
    acStack_218[4] = '\0';
    acStack_218[5] = '\0';
    acStack_218[6] = '\0';
    acStack_218[7] = '\0';
    acStack_218[8] = '\0';
    acStack_218[9] = '\0';
    acStack_218[10] = '\0';
    acStack_218[0xb] = '\0';
    acStack_218[0xc] = '\0';
    acStack_218[0xd] = '\0';
    acStack_218[0xe] = '\0';
    acStack_218[0xf] = '\0';
    acStack_218[0x10] = '\0';
    acStack_218[0x11] = '\0';
    acStack_218[0x12] = '\0';
    acStack_218[0x13] = '\0';
    acStack_218[0x14] = '\0';
    acStack_218[0x15] = '\0';
    acStack_218[0x16] = '\0';
    acStack_218[0x17] = '\0';
    FUN_00444afc(acStack_218,auStack_1f8,&lStack_1c8,2);
    pcVar6 = "";
    unaff_x23 = acStack_218;
    pcVar8 = acStack_218;
    (**(code **)(*plVar1 + 0x18))(plVar1);
    pcStack_200 = unaff_x23;
    func_0x00427b38(&pcStack_200);
    lVar13 = 0;
    pcVar9 = (char *)auStack_1f8;
    pcVar12 = param_4;
    do {
      if ((&cStack_1c9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar4 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar2);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcVar11 = acStack_2a0;
  pcStack_228 = FUN_004446a0;
  lStack_268 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar7 = pcVar6;
  pcVar10 = pcVar8;
  puStack_260 = unaff_x24;
  pcStack_258 = unaff_x23;
  puStack_250 = (undefined8 *)pcVar9;
  pcStack_248 = pcVar4;
  pcStack_240 = pcVar3;
  pcStack_238 = pcVar2;
  pppuStack_230 = &pppuStack_190;
  _objc_retain(pcVar6);
  plVar1 = (long *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar1 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x0077bcc0();
    }
    _objc_release(pcVar6);
    unaff_x23 = (char *)auStack_280;
    FUN_00425cb4(auStack_280,pcVar2);
    acStack_2a0[0] = '\0';
    acStack_2a0[1] = '\0';
    acStack_2a0[2] = '\0';
    acStack_2a0[3] = '\0';
    acStack_2a0[4] = '\0';
    acStack_2a0[5] = '\0';
    acStack_2a0[6] = '\0';
    acStack_2a0[7] = '\0';
    acStack_2a0[8] = '\0';
    acStack_2a0[9] = '\0';
    acStack_2a0[10] = '\0';
    acStack_2a0[0xb] = '\0';
    acStack_2a0[0xc] = '\0';
    acStack_2a0[0xd] = '\0';
    acStack_2a0[0xe] = '\0';
    acStack_2a0[0xf] = '\0';
    acStack_2a0[0x10] = '\0';
    acStack_2a0[0x11] = '\0';
    acStack_2a0[0x12] = '\0';
    acStack_2a0[0x13] = '\0';
    acStack_2a0[0x14] = '\0';
    acStack_2a0[0x15] = '\0';
    acStack_2a0[0x16] = '\0';
    acStack_2a0[0x17] = '\0';
    FUN_00444afc(acStack_2a0,auStack_280,&lStack_268,1);
    pcVar7 = "\x02";
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_288 = acStack_2a0;
    func_0x00427b38(&puStack_288);
    pcVar10 = pcVar11;
    pcVar12 = pcVar8;
    pcVar9 = acStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      pcVar10 = pcVar11;
      pcVar12 = pcVar8;
      pcVar9 = acStack_2a0;
    }
  }
  pcVar2 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar5 = acStack_320;
  pcStack_2a8 = FUN_00444814;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar4 = pcVar7;
  pcVar8 = pcVar10;
  puStack_2e0 = unaff_x24;
  pcStack_2d8 = unaff_x23;
  puStack_2d0 = (undefined8 *)pcVar9;
  plStack_2c8 = plVar1;
  pcStack_2c0 = pcVar2;
  pcStack_2b8 = pcVar6;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(pcVar7);
  plVar1 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar1 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x0077bcc0();
    }
    _objc_release(pcVar7);
    unaff_x23 = (char *)auStack_300;
    FUN_00425cb4(auStack_300,pcVar2);
    acStack_320[0] = '\0';
    acStack_320[1] = '\0';
    acStack_320[2] = '\0';
    acStack_320[3] = '\0';
    acStack_320[4] = '\0';
    acStack_320[5] = '\0';
    acStack_320[6] = '\0';
    acStack_320[7] = '\0';
    acStack_320[8] = '\0';
    acStack_320[9] = '\0';
    acStack_320[10] = '\0';
    acStack_320[0xb] = '\0';
    acStack_320[0xc] = '\0';
    acStack_320[0xd] = '\0';
    acStack_320[0xe] = '\0';
    acStack_320[0xf] = '\0';
    acStack_320[0x10] = '\0';
    acStack_320[0x11] = '\0';
    acStack_320[0x12] = '\0';
    acStack_320[0x13] = '\0';
    acStack_320[0x14] = '\0';
    acStack_320[0x15] = '\0';
    acStack_320[0x16] = '\0';
    acStack_320[0x17] = '\0';
    FUN_00444afc(acStack_320,auStack_300,&lStack_2e8,1);
    pcVar4 = "";
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_308 = acStack_320;
    func_0x00427b38(&puStack_308);
    pcVar8 = pcVar5;
    pcVar12 = pcVar10;
    pcVar9 = acStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      pcVar8 = pcVar5;
      pcVar12 = pcVar10;
      pcVar9 = acStack_320;
    }
  }
  pcVar2 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  _objc_release(pcVar7);
  pcVar6 = pcVar2;
  __Unwind_Resume();
  pcVar10 = acStack_3a0;
  pcStack_328 = FUN_00444988;
  lStack_368 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar3 = pcVar4;
  pcVar5 = pcVar8;
  puStack_360 = unaff_x24;
  pcStack_358 = unaff_x23;
  puStack_350 = (undefined8 *)pcVar9;
  plStack_348 = plVar1;
  pcStack_340 = pcVar2;
  pcStack_338 = pcVar7;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(pcVar4);
  if (pcVar6 != (char *)0x0) {
    plVar1 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x0077bcc0();
    }
    _objc_release(pcVar4);
    FUN_00425cb4(auStack_380,pcVar2);
    acStack_3a0[0] = '\0';
    acStack_3a0[1] = '\0';
    acStack_3a0[2] = '\0';
    acStack_3a0[3] = '\0';
    acStack_3a0[4] = '\0';
    acStack_3a0[5] = '\0';
    acStack_3a0[6] = '\0';
    acStack_3a0[7] = '\0';
    acStack_3a0[8] = '\0';
    acStack_3a0[9] = '\0';
    acStack_3a0[10] = '\0';
    acStack_3a0[0xb] = '\0';
    acStack_3a0[0xc] = '\0';
    acStack_3a0[0xd] = '\0';
    acStack_3a0[0xe] = '\0';
    acStack_3a0[0xf] = '\0';
    acStack_3a0[0x10] = '\0';
    acStack_3a0[0x11] = '\0';
    acStack_3a0[0x12] = '\0';
    acStack_3a0[0x13] = '\0';
    acStack_3a0[0x14] = '\0';
    acStack_3a0[0x15] = '\0';
    acStack_3a0[0x16] = '\0';
    acStack_3a0[0x17] = '\0';
    FUN_00444afc(acStack_3a0,auStack_380,&lStack_368,1);
    pcVar3 = "";
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_009e47d0,acStack_3a0);
    puStack_388 = acStack_3a0;
    func_0x00427b38(&puStack_388);
    pcVar5 = pcVar10;
    pcVar12 = pcVar8;
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
      pcVar5 = pcVar10;
      pcVar12 = pcVar8;
    }
  }
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  __Unwind_Resume();
  if (pcVar12 != (char *)0x0) {
    FUN_004279b8();
    pcVar4 = pcVar2 + 0x10;
    FUN_00444b80(pcVar4,pcVar3,pcVar5,*(undefined8 *)(pcVar2 + 8));
    *(char **)(pcVar2 + 8) = pcVar4;
  }
  return;
}



/* Entry: 00444188; end: 004442fb;  */

void FUN_00444188(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  long lVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char acStack_320 [24];
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  char *pcStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_2a0 [24];
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  char *pcStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_198 [24];
  char *pcStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar1 = param_2;
  pcVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x0077bcc0();
    }
    _objc_release(param_2);
    unaff_x23 = (char *)auStack_60;
    FUN_00425cb4(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    FUN_00444afc(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_68 = acStack_80;
    func_0x00427b38(&puStack_68);
    pcVar3 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar8 = acStack_100;
  pcStack_88 = FUN_004442fc;
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar5 = pcVar1;
  pcVar7 = pcVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar12 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x0077bcc0();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_e0;
    FUN_00425cb4(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    FUN_00444afc(acStack_100,auStack_e0,&lStack_c8,1);
    pcVar5 = "\x02";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_e8 = acStack_100;
    func_0x00427b38(&puStack_e8);
    pcVar7 = pcVar8;
    param_4 = pcVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar7 = pcVar8;
      param_4 = pcVar3;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_00444470;
  lStack_148 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar1 = pcVar5;
  pcVar2 = pcVar7;
  pcVar11 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar5);
  _objc_retain(pcVar7);
  pcVar8 = (char *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x0077bcc0();
    }
    _objc_release(pcVar5);
    unaff_x24 = auStack_178;
    FUN_00425cb4(auStack_178,pcVar1);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar1 = pcVar7;
      func_0x0077bcc0(pcVar7);
    }
    _objc_release(pcVar7);
    FUN_00425cb4(auStack_160,pcVar1);
    acStack_198[0] = '\0';
    acStack_198[1] = '\0';
    acStack_198[2] = '\0';
    acStack_198[3] = '\0';
    acStack_198[4] = '\0';
    acStack_198[5] = '\0';
    acStack_198[6] = '\0';
    acStack_198[7] = '\0';
    acStack_198[8] = '\0';
    acStack_198[9] = '\0';
    acStack_198[10] = '\0';
    acStack_198[0xb] = '\0';
    acStack_198[0xc] = '\0';
    acStack_198[0xd] = '\0';
    acStack_198[0xe] = '\0';
    acStack_198[0xf] = '\0';
    acStack_198[0x10] = '\0';
    acStack_198[0x11] = '\0';
    acStack_198[0x12] = '\0';
    acStack_198[0x13] = '\0';
    acStack_198[0x14] = '\0';
    acStack_198[0x15] = '\0';
    acStack_198[0x16] = '\0';
    acStack_198[0x17] = '\0';
    FUN_00444afc(acStack_198,auStack_178,&lStack_148,2);
    pcVar1 = "";
    unaff_x23 = acStack_198;
    pcVar2 = acStack_198;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    pcStack_180 = unaff_x23;
    func_0x00427b38(&pcStack_180);
    lVar13 = 0;
    pcVar8 = (char *)auStack_178;
    pcVar11 = param_4;
    do {
      if ((&cStack_149)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar3 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar5);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcVar10 = acStack_220;
  pcStack_1a8 = FUN_004446a0;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar6 = pcVar1;
  pcVar9 = pcVar2;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = (undefined8 *)pcVar8;
  pcStack_1c8 = pcVar3;
  pcStack_1c0 = pcVar7;
  pcStack_1b8 = pcVar5;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(pcVar1);
  plVar12 = (long *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar12 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x0077bcc0();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_200;
    FUN_00425cb4(auStack_200,pcVar3);
    acStack_220[0] = '\0';
    acStack_220[1] = '\0';
    acStack_220[2] = '\0';
    acStack_220[3] = '\0';
    acStack_220[4] = '\0';
    acStack_220[5] = '\0';
    acStack_220[6] = '\0';
    acStack_220[7] = '\0';
    acStack_220[8] = '\0';
    acStack_220[9] = '\0';
    acStack_220[10] = '\0';
    acStack_220[0xb] = '\0';
    acStack_220[0xc] = '\0';
    acStack_220[0xd] = '\0';
    acStack_220[0xe] = '\0';
    acStack_220[0xf] = '\0';
    acStack_220[0x10] = '\0';
    acStack_220[0x11] = '\0';
    acStack_220[0x12] = '\0';
    acStack_220[0x13] = '\0';
    acStack_220[0x14] = '\0';
    acStack_220[0x15] = '\0';
    acStack_220[0x16] = '\0';
    acStack_220[0x17] = '\0';
    FUN_00444afc(acStack_220,auStack_200,&lStack_1e8,1);
    pcVar6 = "\x02";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_208 = acStack_220;
    func_0x00427b38(&puStack_208);
    pcVar9 = pcVar10;
    pcVar11 = pcVar2;
    pcVar8 = acStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      pcVar9 = pcVar10;
      pcVar11 = pcVar2;
      pcVar8 = acStack_220;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar5 = pcVar3;
  __Unwind_Resume();
  pcVar4 = acStack_2a0;
  pcStack_228 = FUN_00444814;
  lStack_268 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar2 = pcVar6;
  pcVar7 = pcVar9;
  puStack_260 = unaff_x24;
  pcStack_258 = unaff_x23;
  puStack_250 = (undefined8 *)pcVar8;
  plStack_248 = plVar12;
  pcStack_240 = pcVar3;
  pcStack_238 = pcVar1;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(pcVar6);
  plVar12 = (long *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar12 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x0077bcc0();
    }
    _objc_release(pcVar6);
    unaff_x23 = (char *)auStack_280;
    FUN_00425cb4(auStack_280,pcVar1);
    acStack_2a0[0] = '\0';
    acStack_2a0[1] = '\0';
    acStack_2a0[2] = '\0';
    acStack_2a0[3] = '\0';
    acStack_2a0[4] = '\0';
    acStack_2a0[5] = '\0';
    acStack_2a0[6] = '\0';
    acStack_2a0[7] = '\0';
    acStack_2a0[8] = '\0';
    acStack_2a0[9] = '\0';
    acStack_2a0[10] = '\0';
    acStack_2a0[0xb] = '\0';
    acStack_2a0[0xc] = '\0';
    acStack_2a0[0xd] = '\0';
    acStack_2a0[0xe] = '\0';
    acStack_2a0[0xf] = '\0';
    acStack_2a0[0x10] = '\0';
    acStack_2a0[0x11] = '\0';
    acStack_2a0[0x12] = '\0';
    acStack_2a0[0x13] = '\0';
    acStack_2a0[0x14] = '\0';
    acStack_2a0[0x15] = '\0';
    acStack_2a0[0x16] = '\0';
    acStack_2a0[0x17] = '\0';
    FUN_00444afc(acStack_2a0,auStack_280,&lStack_268,1);
    pcVar2 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_288 = acStack_2a0;
    func_0x00427b38(&puStack_288);
    pcVar7 = pcVar4;
    pcVar11 = pcVar9;
    pcVar8 = acStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      pcVar7 = pcVar4;
      pcVar11 = pcVar9;
      pcVar8 = acStack_2a0;
    }
  }
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  pcVar9 = acStack_320;
  pcStack_2a8 = FUN_00444988;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar3 = pcVar2;
  pcVar4 = pcVar7;
  puStack_2e0 = unaff_x24;
  pcStack_2d8 = unaff_x23;
  puStack_2d0 = (undefined8 *)pcVar8;
  plStack_2c8 = plVar12;
  pcStack_2c0 = pcVar1;
  pcStack_2b8 = pcVar6;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(pcVar2);
  if (pcVar5 != (char *)0x0) {
    plVar12 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x0077bcc0();
    }
    _objc_release(pcVar2);
    FUN_00425cb4(auStack_300,pcVar1);
    acStack_320[0] = '\0';
    acStack_320[1] = '\0';
    acStack_320[2] = '\0';
    acStack_320[3] = '\0';
    acStack_320[4] = '\0';
    acStack_320[5] = '\0';
    acStack_320[6] = '\0';
    acStack_320[7] = '\0';
    acStack_320[8] = '\0';
    acStack_320[9] = '\0';
    acStack_320[10] = '\0';
    acStack_320[0xb] = '\0';
    acStack_320[0xc] = '\0';
    acStack_320[0xd] = '\0';
    acStack_320[0xe] = '\0';
    acStack_320[0xf] = '\0';
    acStack_320[0x10] = '\0';
    acStack_320[0x11] = '\0';
    acStack_320[0x12] = '\0';
    acStack_320[0x13] = '\0';
    acStack_320[0x14] = '\0';
    acStack_320[0x15] = '\0';
    acStack_320[0x16] = '\0';
    acStack_320[0x17] = '\0';
    FUN_00444afc(acStack_320,auStack_300,&lStack_2e8,1);
    pcVar3 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_009e47d0,acStack_320);
    puStack_308 = acStack_320;
    func_0x00427b38(&puStack_308);
    pcVar4 = pcVar9;
    pcVar11 = pcVar7;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      pcVar4 = pcVar9;
      pcVar11 = pcVar7;
    }
  }
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  __Unwind_Resume();
  if (pcVar11 != (char *)0x0) {
    FUN_004279b8();
    pcVar2 = pcVar1 + 0x10;
    FUN_00444b80(pcVar2,pcVar3,pcVar4,*(undefined8 *)(pcVar1 + 8));
    *(char **)(pcVar1 + 8) = pcVar2;
  }
  return;
}



/* Entry: 004442fc; end: 0044446f;  */

void FUN_004442fc(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  char *pcVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char acStack_2a0 [24];
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar1 = param_2;
  pcVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x0077bcc0();
    }
    _objc_release(param_2);
    unaff_x23 = (char *)auStack_60;
    FUN_00425cb4(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    FUN_00444afc(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x02";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_68 = acStack_80;
    func_0x00427b38(&puStack_68);
    pcVar5 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar5 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_00444470;
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar4 = pcVar1;
  pcVar7 = pcVar5;
  pcVar10 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  pcVar13 = (char *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x0077bcc0();
    }
    _objc_release(pcVar1);
    unaff_x24 = auStack_f8;
    FUN_00425cb4(auStack_f8,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x0077bcc0(pcVar5);
    }
    _objc_release(pcVar5);
    FUN_00425cb4(auStack_e0,pcVar2);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    FUN_00444afc(acStack_118,auStack_f8,&lStack_c8,2);
    pcVar4 = "";
    unaff_x23 = acStack_118;
    pcVar7 = acStack_118;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcStack_100 = unaff_x23;
    func_0x00427b38(&pcStack_100);
    lVar12 = 0;
    pcVar13 = (char *)auStack_f8;
    pcVar10 = param_4;
    do {
      if ((&cStack_c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar9 = acStack_1a0;
  pcStack_128 = FUN_004446a0;
  lStack_168 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar6 = pcVar4;
  pcVar8 = pcVar7;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar13;
  pcStack_148 = pcVar2;
  pcStack_140 = pcVar5;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(pcVar4);
  plVar11 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x0077bcc0();
    }
    _objc_release(pcVar4);
    unaff_x23 = (char *)auStack_180;
    FUN_00425cb4(auStack_180,pcVar1);
    acStack_1a0[0] = '\0';
    acStack_1a0[1] = '\0';
    acStack_1a0[2] = '\0';
    acStack_1a0[3] = '\0';
    acStack_1a0[4] = '\0';
    acStack_1a0[5] = '\0';
    acStack_1a0[6] = '\0';
    acStack_1a0[7] = '\0';
    acStack_1a0[8] = '\0';
    acStack_1a0[9] = '\0';
    acStack_1a0[10] = '\0';
    acStack_1a0[0xb] = '\0';
    acStack_1a0[0xc] = '\0';
    acStack_1a0[0xd] = '\0';
    acStack_1a0[0xe] = '\0';
    acStack_1a0[0xf] = '\0';
    acStack_1a0[0x10] = '\0';
    acStack_1a0[0x11] = '\0';
    acStack_1a0[0x12] = '\0';
    acStack_1a0[0x13] = '\0';
    acStack_1a0[0x14] = '\0';
    acStack_1a0[0x15] = '\0';
    acStack_1a0[0x16] = '\0';
    acStack_1a0[0x17] = '\0';
    FUN_00444afc(acStack_1a0,auStack_180,&lStack_168,1);
    pcVar6 = "\x02";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_188 = acStack_1a0;
    func_0x00427b38(&puStack_188);
    pcVar8 = pcVar9;
    pcVar10 = pcVar7;
    pcVar13 = acStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      pcVar8 = pcVar9;
      pcVar10 = pcVar7;
      pcVar13 = acStack_1a0;
    }
  }
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcVar3 = acStack_220;
  pcStack_1a8 = FUN_00444814;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar5 = pcVar6;
  pcVar7 = pcVar8;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = (undefined8 *)pcVar13;
  plStack_1c8 = plVar11;
  pcStack_1c0 = pcVar1;
  pcStack_1b8 = pcVar4;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(pcVar6);
  plVar11 = (long *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x0077bcc0();
    }
    _objc_release(pcVar6);
    unaff_x23 = (char *)auStack_200;
    FUN_00425cb4(auStack_200,pcVar1);
    acStack_220[0] = '\0';
    acStack_220[1] = '\0';
    acStack_220[2] = '\0';
    acStack_220[3] = '\0';
    acStack_220[4] = '\0';
    acStack_220[5] = '\0';
    acStack_220[6] = '\0';
    acStack_220[7] = '\0';
    acStack_220[8] = '\0';
    acStack_220[9] = '\0';
    acStack_220[10] = '\0';
    acStack_220[0xb] = '\0';
    acStack_220[0xc] = '\0';
    acStack_220[0xd] = '\0';
    acStack_220[0xe] = '\0';
    acStack_220[0xf] = '\0';
    acStack_220[0x10] = '\0';
    acStack_220[0x11] = '\0';
    acStack_220[0x12] = '\0';
    acStack_220[0x13] = '\0';
    acStack_220[0x14] = '\0';
    acStack_220[0x15] = '\0';
    acStack_220[0x16] = '\0';
    acStack_220[0x17] = '\0';
    FUN_00444afc(acStack_220,auStack_200,&lStack_1e8,1);
    pcVar5 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_208 = acStack_220;
    func_0x00427b38(&puStack_208);
    pcVar7 = pcVar3;
    pcVar10 = pcVar8;
    pcVar13 = acStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      pcVar7 = pcVar3;
      pcVar10 = pcVar8;
      pcVar13 = acStack_220;
    }
  }
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  pcVar8 = acStack_2a0;
  pcStack_228 = FUN_00444988;
  lStack_268 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar2 = pcVar5;
  pcVar3 = pcVar7;
  puStack_260 = unaff_x24;
  pcStack_258 = unaff_x23;
  puStack_250 = (undefined8 *)pcVar13;
  plStack_248 = plVar11;
  pcStack_240 = pcVar1;
  pcStack_238 = pcVar6;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(pcVar5);
  if (pcVar4 != (char *)0x0) {
    plVar11 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x0077bcc0();
    }
    _objc_release(pcVar5);
    FUN_00425cb4(auStack_280,pcVar1);
    acStack_2a0[0] = '\0';
    acStack_2a0[1] = '\0';
    acStack_2a0[2] = '\0';
    acStack_2a0[3] = '\0';
    acStack_2a0[4] = '\0';
    acStack_2a0[5] = '\0';
    acStack_2a0[6] = '\0';
    acStack_2a0[7] = '\0';
    acStack_2a0[8] = '\0';
    acStack_2a0[9] = '\0';
    acStack_2a0[10] = '\0';
    acStack_2a0[0xb] = '\0';
    acStack_2a0[0xc] = '\0';
    acStack_2a0[0xd] = '\0';
    acStack_2a0[0xe] = '\0';
    acStack_2a0[0xf] = '\0';
    acStack_2a0[0x10] = '\0';
    acStack_2a0[0x11] = '\0';
    acStack_2a0[0x12] = '\0';
    acStack_2a0[0x13] = '\0';
    acStack_2a0[0x14] = '\0';
    acStack_2a0[0x15] = '\0';
    acStack_2a0[0x16] = '\0';
    acStack_2a0[0x17] = '\0';
    FUN_00444afc(acStack_2a0,auStack_280,&lStack_268,1);
    pcVar2 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_009e47d0,acStack_2a0);
    puStack_288 = acStack_2a0;
    func_0x00427b38(&puStack_288);
    pcVar3 = pcVar8;
    pcVar10 = pcVar7;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      pcVar3 = pcVar8;
      pcVar10 = pcVar7;
    }
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  __Unwind_Resume();
  if (pcVar10 != (char *)0x0) {
    FUN_004279b8();
    pcVar5 = pcVar1 + 0x10;
    FUN_00444b80(pcVar5,pcVar2,pcVar3,*(undefined8 *)(pcVar1 + 8));
    *(char **)(pcVar1 + 8) = pcVar5;
  }
  return;
}



/* Entry: 00444470; end: 0044469f;  */

void FUN_00444470(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar1 = param_2;
  pcVar5 = param_3;
  pcVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  pcVar4 = (char *)0x0;
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x0077bcc0();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    FUN_00425cb4(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x0077bcc0(param_3);
    }
    _objc_release(param_3);
    FUN_00425cb4(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    FUN_00444afc(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    pcStack_80 = unaff_x23;
    func_0x00427b38(&pcStack_80);
    lVar11 = 0;
    pcVar4 = (char *)auStack_78;
    pcVar10 = param_4;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar8 = acStack_120;
  pcStack_a8 = FUN_004446a0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar6 = pcVar1;
  pcVar7 = pcVar5;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = (undefined8 *)pcVar4;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  plVar12 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x0077bcc0();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_100;
    FUN_00425cb4(auStack_100,pcVar4);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    FUN_00444afc(acStack_120,auStack_100,&lStack_e8,1);
    pcVar6 = "\x02";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_108 = acStack_120;
    func_0x00427b38(&puStack_108);
    pcVar7 = pcVar8;
    pcVar10 = pcVar5;
    pcVar4 = acStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar7 = pcVar8;
      pcVar10 = pcVar5;
      pcVar4 = acStack_120;
    }
  }
  pcVar5 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar5;
  __Unwind_Resume();
  pcVar9 = acStack_1a0;
  pcStack_128 = FUN_00444814;
  lStack_168 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar2 = pcVar6;
  pcVar8 = pcVar7;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar4;
  plStack_148 = plVar12;
  pcStack_140 = pcVar5;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(pcVar6);
  plVar12 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x0077bcc0();
    }
    _objc_release(pcVar6);
    unaff_x23 = (char *)auStack_180;
    FUN_00425cb4(auStack_180,pcVar1);
    acStack_1a0[0] = '\0';
    acStack_1a0[1] = '\0';
    acStack_1a0[2] = '\0';
    acStack_1a0[3] = '\0';
    acStack_1a0[4] = '\0';
    acStack_1a0[5] = '\0';
    acStack_1a0[6] = '\0';
    acStack_1a0[7] = '\0';
    acStack_1a0[8] = '\0';
    acStack_1a0[9] = '\0';
    acStack_1a0[10] = '\0';
    acStack_1a0[0xb] = '\0';
    acStack_1a0[0xc] = '\0';
    acStack_1a0[0xd] = '\0';
    acStack_1a0[0xe] = '\0';
    acStack_1a0[0xf] = '\0';
    acStack_1a0[0x10] = '\0';
    acStack_1a0[0x11] = '\0';
    acStack_1a0[0x12] = '\0';
    acStack_1a0[0x13] = '\0';
    acStack_1a0[0x14] = '\0';
    acStack_1a0[0x15] = '\0';
    acStack_1a0[0x16] = '\0';
    acStack_1a0[0x17] = '\0';
    FUN_00444afc(acStack_1a0,auStack_180,&lStack_168,1);
    pcVar2 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_188 = acStack_1a0;
    func_0x00427b38(&puStack_188);
    pcVar8 = pcVar9;
    pcVar10 = pcVar7;
    pcVar4 = acStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      pcVar8 = pcVar9;
      pcVar10 = pcVar7;
      pcVar4 = acStack_1a0;
    }
  }
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  pcVar3 = pcVar1;
  __Unwind_Resume();
  pcVar9 = acStack_220;
  pcStack_1a8 = FUN_00444988;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar5 = pcVar2;
  pcVar7 = pcVar8;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = (undefined8 *)pcVar4;
  plStack_1c8 = plVar12;
  pcStack_1c0 = pcVar1;
  pcStack_1b8 = pcVar6;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(pcVar2);
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x0077bcc0();
    }
    _objc_release(pcVar2);
    FUN_00425cb4(auStack_200,pcVar1);
    acStack_220[0] = '\0';
    acStack_220[1] = '\0';
    acStack_220[2] = '\0';
    acStack_220[3] = '\0';
    acStack_220[4] = '\0';
    acStack_220[5] = '\0';
    acStack_220[6] = '\0';
    acStack_220[7] = '\0';
    acStack_220[8] = '\0';
    acStack_220[9] = '\0';
    acStack_220[10] = '\0';
    acStack_220[0xb] = '\0';
    acStack_220[0xc] = '\0';
    acStack_220[0xd] = '\0';
    acStack_220[0xe] = '\0';
    acStack_220[0xf] = '\0';
    acStack_220[0x10] = '\0';
    acStack_220[0x11] = '\0';
    acStack_220[0x12] = '\0';
    acStack_220[0x13] = '\0';
    acStack_220[0x14] = '\0';
    acStack_220[0x15] = '\0';
    acStack_220[0x16] = '\0';
    acStack_220[0x17] = '\0';
    FUN_00444afc(acStack_220,auStack_200,&lStack_1e8,1);
    pcVar5 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_009e47d0,acStack_220);
    puStack_208 = acStack_220;
    func_0x00427b38(&puStack_208);
    pcVar7 = pcVar9;
    pcVar10 = pcVar8;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      pcVar7 = pcVar9;
      pcVar10 = pcVar8;
    }
  }
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  __Unwind_Resume();
  if (pcVar10 != (char *)0x0) {
    FUN_004279b8();
    pcVar4 = pcVar1 + 0x10;
    FUN_00444b80(pcVar4,pcVar5,pcVar7,*(undefined8 *)(pcVar1 + 8));
    *(char **)(pcVar1 + 8) = pcVar4;
  }
  return;
}



/* Entry: 004446a0; end: 00444813;  */

void FUN_004446a0(long param_1,char *param_2,undefined1 *param_3,undefined1 *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar1 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x0077bcc0();
    }
    _objc_release(param_2);
    FUN_00425cb4(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    FUN_00444afc(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x02";
    (**(code **)(*plVar7 + 0x18))(plVar7);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00427b38(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar3 = pcVar1;
  puVar6 = puVar4;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar7 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x0077bcc0();
    }
    _objc_release(pcVar1);
    FUN_00425cb4(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    FUN_00444afc(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar3 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00427b38(&puStack_e8);
    puVar6 = (undefined1 *)puVar5;
    param_4 = puVar4;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined1 *)puVar5;
      param_4 = puVar4;
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  puVar5 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar1 = pcVar3;
  puVar4 = puVar6;
  _objc_retain(pcVar3);
  if (pcVar2 != (char *)0x0) {
    plVar7 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x0077bcc0();
    }
    _objc_release(pcVar3);
    FUN_00425cb4(auStack_160,pcVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    FUN_00444afc(&uStack_180,auStack_160,&lStack_148,1);
    pcVar1 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_009e47d0,&uStack_180);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00427b38(&puStack_168);
    puVar4 = (undefined1 *)puVar5;
    param_4 = puVar6;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar4 = (undefined1 *)puVar5;
      param_4 = puVar6;
    }
  }
  pcVar2 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  _objc_release(pcVar3);
  __Unwind_Resume();
  if (param_4 != (undefined1 *)0x0) {
    FUN_004279b8();
    pcVar3 = pcVar2 + 0x10;
    FUN_00444b80(pcVar3,pcVar1,puVar4,*(undefined8 *)(pcVar2 + 8));
    *(char **)(pcVar2 + 8) = pcVar3;
  }
  return;
}



/* Entry: 00444814; end: 00444987;  */

void FUN_00444814(long param_1,char *param_2,undefined1 *param_3,undefined1 *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar1 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x0077bcc0();
    }
    _objc_release(param_2);
    FUN_00425cb4(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    FUN_00444afc(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00427b38(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar3 = pcVar1;
  puVar6 = puVar4;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar7 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x0077bcc0();
    }
    _objc_release(pcVar1);
    FUN_00425cb4(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    FUN_00444afc(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar3 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_009e47d0,&uStack_100);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00427b38(&puStack_e8);
    puVar6 = (undefined1 *)puVar5;
    param_4 = puVar4;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined1 *)puVar5;
      param_4 = puVar4;
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  if (param_4 != (undefined1 *)0x0) {
    FUN_004279b8();
    pcVar1 = pcVar2 + 0x10;
    FUN_00444b80(pcVar1,pcVar3,puVar6,*(undefined8 *)(pcVar2 + 8));
    *(char **)(pcVar2 + 8) = pcVar1;
  }
  return;
}



/* Entry: 00444988; end: 00444afb;  */

void FUN_00444988(long param_1,char *param_2,undefined1 *param_3,undefined1 *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar1 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x0077bcc0();
    }
    _objc_release(param_2);
    FUN_00425cb4(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    FUN_00444afc(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_009e47d0,&uStack_80);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00427b38(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  if (param_4 != (undefined1 *)0x0) {
    FUN_004279b8();
    pcVar3 = pcVar2 + 0x10;
    FUN_00444b80(pcVar3,pcVar1,puVar4,*(undefined8 *)(pcVar2 + 8));
    *(char **)(pcVar2 + 8) = pcVar3;
  }
  return;
}



/* Entry: 00444afc; end: 00444b7f;  */

void FUN_00444afc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_004279b8(param_1,param_4);
    lVar1 = param_1 + 0x10;
    FUN_00444b80(lVar1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 00444b80; end: 00444c3b;  */

undefined8 *
FUN_00444b80(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_002971d4(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    param_4 = puStack_38 + 3;
  }
  uStack_48 = 1;
  FUN_00427ac0(&uStack_60);
  return param_4;
}



/* Entry: 00444c3c; end: 00444ce3; -[SCUserSessionScopedObjectFuture initWithInitializer:userSession:] */

undefined1 *
FUN_00444c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3bd8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00444ce4; end: 00444dc3; -[SCUserSessionScopedObjectFuture waitForObject] */

void FUN_00444ce4(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_00999f30;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x444d60;
  puStack_30 = &UNK_009e3fc0;
  lStack_28 = param_1;
  if (*(long *)(param_1 + 8) != -1) {
    _dispatch_once((long *)(param_1 + 8),&puStack_48);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00444dc4; end: 00444dff; -[SCUserSessionScopedObjectFuture .cxx_destruct] */

void FUN_00444dc4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 00444e00; end: 00444e83; -[SCUserSessionAssociatedStorage init] */

undefined1 * FUN_00444e00(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3be0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    func_0x00781fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    uVar3 = 1;
    _dispatch_semaphore_create();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00444e84; end: 00444e8b; -[SCUserSessionAssociatedStorage userSessionScopedObjects] */

undefined8 FUN_00444e84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00444e8c; end: 00444ebb; -[SCUserSessionAssociatedStorage setUserSessionScopedObjects:] */

void FUN_00444e8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00444ebc; end: 00444ec3; -[SCUserSessionAssociatedStorage invalidated] */

undefined1 FUN_00444ebc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 00444ec4; end: 00444ecb; -[SCUserSessionAssociatedStorage setInvalidated:] */

void FUN_00444ec4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 00444ecc; end: 00444ed3; -[SCUserSessionAssociatedStorage sema] */

undefined8 FUN_00444ecc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00444ed4; end: 00444f03; -[SCUserSessionAssociatedStorage .cxx_destruct] */

void FUN_00444ed4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 00444f04; end: 00444fcf; -[SCUserSession _associated_storage] */

void FUN_00444f04(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  puVar1 = param_1;
  _objc_getAssociatedObject(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_00ac2d98;
    _objc_opt_class(PTR_PTR_00ac2d98);
    puVar3 = puVar1;
    _objc_opt_isKindOfClass(puVar1,puVar2);
    if (((ulong)puVar3 & 1) != 0) {
      _objc_retain(puVar1);
      puVar2 = puVar1;
      goto LAB_00444f90;
    }
  }
  puVar2 = PTR_PTR_00ac2d98;
  _objc_opt_new(PTR_PTR_00ac2d98);
  _objc_setAssociatedObject(param_1,param_2,puVar2,1);
LAB_00444f90:
  _objc_release(puVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00444fd0; end: 00445143; -[SCUserSession objectForKey:initializer:] */

void FUN_00444fd0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x0077c0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x0078c5a0();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_semaphore_wait();
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00787360();
  if ((int)puVar2 == 0) {
    puVar2 = param_1;
    func_0x00793500();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_00ac2da0;
      _objc_alloc(PTR_PTR_00ac2da0);
      func_0x00785920();
      puVar2 = param_1;
      func_0x00793500(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078f4e0();
      _objc_release(puVar2);
    }
    puVar2 = param_1;
    func_0x0078c5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_semaphore_signal();
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x007939e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = param_1;
    func_0x0078c5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_semaphore_signal();
    puVar2 = (undefined *)0x0;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00445144; end: 004453a7; -[SCUserSession invalidate] */

/* WARNING: Removing unreachable block (ram,0x00445294) */

ulong FUN_00445144(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x0077c0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0078c5a0();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_semaphore_wait();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00787360();
  uVar8 = param_1;
  func_0x00787360();
  if ((uVar8 & 1) == 0) {
    func_0x0078e740(param_1);
    uVar8 = param_1;
    func_0x00793500();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x0077eb80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00780e20();
    _objc_release(uVar2);
    _objc_release(uVar8);
    func_0x00791120(param_1);
  }
  else {
    uVar7 = 0;
  }
  uVar8 = param_1;
  func_0x0078c5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _dispatch_semaphore_signal();
  _objc_release(uVar8);
  if ((uVar1 & 1) == 0) {
    _objc_retain(uVar7);
    uVar1 = uVar7;
    func_0x00780ea0();
    while (uVar1 != 0) {
      uVar8 = 0;
      do {
        lVar3 = *(long *)(uVar8 * 8);
        func_0x007939e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        FUN_0076f6e8();
        if (lVar3 != 0 && (int)lVar4 != 0) {
          func_0x00787320(lVar3);
        }
        puVar5 = PTR_DAT_00ac2798;
        _objc_retain(lVar3);
        lVar4 = lVar3;
        FUN_0076f6e8(lVar3,puVar5);
        _objc_release(lVar3);
        if (lVar3 != 0 && (int)lVar4 != 0) {
          puVar5 = PTR_PTR_00ac2d58;
          func_0x007915a0(PTR_PTR_00ac2d58);
          _objc_retainAutoreleasedReturnValue();
          func_0x00787340();
          _objc_release(puVar5);
        }
        _objc_release(lVar3);
        uVar8 = uVar8 + 1;
      } while (uVar1 != uVar8);
      uVar1 = uVar7;
      func_0x00780ea0();
    }
    _objc_release(uVar7);
  }
  _objc_release(uVar7);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar6) {
    ___stack_chk_fail();
    func_0x0077c0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00787360();
    _objc_release(param_1);
    return uVar1;
  }
  return param_1;
}



/* Entry: 004453a8; end: 004453e3; -[SCUserSession isInvalidated] */

undefined8 FUN_004453a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0077c0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00787360();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 004453e4; end: 0044546f; -[SCLogout initWithLogoutSource:optInToOneTapLogin:authSessionId:] */

undefined1 *
FUN_004453e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_00ac3be8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 00445470; end: 00445477; -[SCLogout initWithLogoutSource:] */

void FUN_00445470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00785b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithLogoutSource_optInToOneT_00abc3d0,param_3,0);
  return;
}



/* Entry: 00445478; end: 0044547f; -[SCLogout initWithLogoutSource:optInToOneTapLogin:] */

void FUN_00445478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00785b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithLogoutSource_optInToOneT_00abc3d8,param_3,param_4,0);
  return;
}



/* Entry: 00445480; end: 0044549b; -[SCLogout isForced] */

uint FUN_00445480(long param_1)

{
  return (uint)(*(ulong *)(param_1 + 0x18) < 0xd) &
         0x1feeU >> (ulong)((uint)*(ulong *)(param_1 + 0x18) & 0x1f);
}



/* Entry: 0044549c; end: 004454c3; -[SCLogout getAuthSessionId] */

void FUN_0044549c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 004454c4; end: 004454cb; -[SCLogout shouldUseOneTapLoginLogout] */

undefined1 FUN_004454c4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 004454cc; end: 004454fb; -[SCLogout setAuthSessionId:] */

void FUN_004454cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004454fc; end: 00445503; -[SCLogout logoutSource] */

undefined8 FUN_004454fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00445504; end: 0044550f; -[SCLogout .cxx_destruct] */

void FUN_00445504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 00445510; end: 00445547; +[SCUserSessionContext resumedWithDidLaunchWithDataUnavailable:] */

void FUN_00445510(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00786c60(param_1,param_2,0,param_3,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00445548; end: 004455bb; +[SCUserSessionContext fromRegistrationWithJanusBootstrapData:registrationInfo:] */

void FUN_00445548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00786c60();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 004455bc; end: 0044562f; +[SCUserSessionContext fromLogInWithJanusBootstrapData:loginInfo:] */

void FUN_004455bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00786c60();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 00445630; end: 00445713; -[SCUserSessionContext initWithUnderlyingEnum:didLaunchWithDataUnavailable:loginInfo:registrationInfo:bootstrapData:] */

undefined1 *
FUN_00445630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_00ac3bf0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
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
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 00445714; end: 00445723; -[SCUserSessionContext isResumed] */

bool FUN_00445714(long param_1)

{
  return *(long *)(param_1 + 8) == 0;
}



/* Entry: 00445724; end: 0044576b; -[SCUserSessionContext matchResumed:] */

void FUN_00445724(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00787cc0();
  if ((int)lVar1 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined1 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0044576c; end: 0044577b; -[SCUserSessionContext isFromLogIn] */

bool FUN_0044576c(long param_1)

{
  return *(long *)(param_1 + 8) == 1;
}



/* Entry: 0044577c; end: 004457c7; -[SCUserSessionContext matchFromLogIn:] */

void FUN_0044577c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00787940();
  if ((int)lVar1 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 004457c8; end: 004457d7; -[SCUserSessionContext isFromRegistration] */

bool FUN_004457c8(long param_1)

{
  return *(long *)(param_1 + 8) == 2;
}



/* Entry: 004457d8; end: 0044581f; -[SCUserSessionContext matchFromRegistration:] */

void FUN_004457d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00787960();
  if ((int)lVar1 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00445820; end: 004458cb; -[SCUserSessionContext matchResumed:fromLogIn:fromRegistration:] */

void FUN_00445820(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 2) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    pcVar4 = *(code **)(param_5 + 0x10);
    lVar3 = param_5;
  }
  else {
    if (lVar3 != 1) {
      if (lVar3 == 0) {
        (**(code **)(param_3 + 0x10))(param_3,*(undefined1 *)(param_1 + 0x10));
      }
      goto LAB_004458a8;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    pcVar4 = *(code **)(param_4 + 0x10);
    lVar3 = param_4;
  }
  (*pcVar4)(lVar3,uVar1,uVar2);
LAB_004458a8:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 004458cc; end: 00445957; -[SCUserSessionContext isEqual:] */

long FUN_004458cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    param_1 = 1;
  }
  else {
    if (param_3 != 0) {
      lVar1 = param_3;
      _objc_opt_class();
      lVar2 = param_1;
      _objc_opt_class(param_1);
      func_0x007877e0(lVar1,param_2,lVar2);
      if ((int)lVar1 != 0) {
        func_0x00787840(param_1,param_2,param_3);
        goto LAB_0044593c;
      }
    }
    param_1 = 0;
  }
LAB_0044593c:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 00445958; end: 00445a0b; -[SCUserSessionContext isEqualToContext:] */

undefined8 FUN_00445958(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_004459e8:
    uVar2 = 1;
  }
  else {
    if (((param_3 != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) &&
       (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))) {
      lVar1 = *(long *)(param_1 + 0x28);
      if ((lVar1 == *(long *)(param_3 + 0x28)) || (func_0x007877e0(), (int)lVar1 != 0)) {
        lVar1 = *(long *)(param_1 + 0x20);
        if ((lVar1 == *(long *)(param_3 + 0x20)) || (func_0x007877e0(), (int)lVar1 != 0)) {
          lVar1 = *(long *)(param_1 + 0x18);
          if ((lVar1 == *(long *)(param_3 + 0x18)) || (func_0x007877e0(), (int)lVar1 != 0))
          goto LAB_004459e8;
        }
      }
    }
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 00445a0c; end: 00445a67; -[SCUserSessionContext hash] */

long FUN_00445a0c(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  bVar1 = *(byte *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x007843a0(lVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x007843a0(lVar3);
  lVar4 = *(long *)(param_1 + 0x28);
  func_0x007843a0(lVar4);
  return lVar4 + (lVar3 + (lVar2 + ((ulong)bVar1 + lVar5 * 0x1f) * 0x1f) * 0x1f) * 0x1f;
}



/* Entry: 00445a68; end: 00445aa3; -[SCUserSessionContext .cxx_destruct] */

void FUN_00445a68(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x18,0);
  return;
}



/* Entry: 00445aa4; end: 00445aef; +[SCLogoutReason ageVerification] */

void FUN_00445aa4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_00ac2da8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x007872c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00445af0; end: 00445b57; +[SCLogoutReason authenticationErrorWithRequestPath:] */

void FUN_00445af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_00ac2da8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x007872c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00445b58; end: 00445ba3; +[SCLogoutReason billboard] */

void FUN_00445b58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_00ac2da8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x007872c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00445ba4; end: 00445bef; +[SCLogoutReason noUsername] */

void FUN_00445ba4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_00ac2da8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x007872c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00445bf0; end: 00445c3b; +[SCLogoutReason termsOfUse] */

void FUN_00445bf0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_00ac2da8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x007872c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00445c3c; end: 00445c83; +[SCLogoutReason userInitiated] */

void FUN_00445c3c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_00ac2da8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x007872c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00445c84; end: 00445ca7; -[SCLogoutReason copyWithZone:] */

undefined8 FUN_00445c84(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 00445ca8; end: 00445d07; -[SCLogoutReason hash] */

void FUN_00445ca8(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x007843a0();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x0076fd30(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_00ac3bf8;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00445d08; end: 00445d4b; -[SCLogoutReason internalInit] */

void FUN_00445d08(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_00ac3bf8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00445d4c; end: 00445deb; -[SCLogoutReason isEqual:] */

long FUN_00445d4c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_00445dd0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_00445dd0;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x007877e0();
      goto LAB_00445dd0;
    }
  }
  lVar3 = 1;
LAB_00445dd0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 00445dec; end: 00445f33; -[SCLogoutReason matchUserInitiated:termsOfUse:authenticationError:noUsername:ageVerification:billboard:] */

void FUN_00445dec(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long param_6,long param_7,long param_8)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 3) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_00445ef0;
      pcVar2 = *(code **)(param_3 + 0x10);
      lVar1 = param_3;
    }
    else {
      if (lVar1 != 1) {
        if ((lVar1 == 2) && (param_5 != 0)) {
          (**(code **)(param_5 + 0x10))(param_5,*(undefined8 *)(param_1 + 0x10));
        }
        goto LAB_00445ef0;
      }
      if (param_4 == 0) goto LAB_00445ef0;
      pcVar2 = *(code **)(param_4 + 0x10);
      lVar1 = param_4;
    }
  }
  else if (lVar1 == 3) {
    if (param_6 == 0) goto LAB_00445ef0;
    pcVar2 = *(code **)(param_6 + 0x10);
    lVar1 = param_6;
  }
  else if (lVar1 == 4) {
    if (param_7 == 0) goto LAB_00445ef0;
    pcVar2 = *(code **)(param_7 + 0x10);
    lVar1 = param_7;
  }
  else {
    if ((lVar1 != 5) || (param_8 == 0)) goto LAB_00445ef0;
    pcVar2 = *(code **)(param_8 + 0x10);
    lVar1 = param_8;
  }
  (*pcVar2)(lVar1);
LAB_00445ef0:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00445f34; end: 00445f3f; -[SCLogoutReason .cxx_destruct] */

void FUN_00445f34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 00445f40; end: 0044604b; -[SCUserSession initWithUserId:username:authToken:lagunaId:] */

undefined1 *
FUN_00445f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_00ac3c00;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00780e20();
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



/* Entry: 0044604c; end: 0044606f; -[SCUserSession copyWithZone:] */

undefined8 FUN_0044604c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 00446070; end: 004460fb; -[SCUserSession hash] */

undefined8 * FUN_00446070(long param_1,undefined8 param_2,undefined8 *param_3)

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
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x007843a0();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x007843a0();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x0076fd30(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_004461ac:
    puVar6 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_004461b8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x007877e0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x007877e0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x007877e0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x007877e0();
              goto LAB_004461b8;
            }
            goto LAB_004461ac;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_004461b8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 004460fc; end: 004461d3; -[SCUserSession isEqual:] */

long FUN_004460fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_004461ac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_004461b8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x007877e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x007877e0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x007877e0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x007877e0();
              goto LAB_004461b8;
            }
            goto LAB_004461ac;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_004461b8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 004461d4; end: 004461db; -[SCUserSession userId] */

undefined8 FUN_004461d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004461dc; end: 004461e3; -[SCUserSession username] */

undefined8 FUN_004461dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 004461e4; end: 004461eb; -[SCUserSession authToken] */

undefined8 FUN_004461e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 004461ec; end: 004461f3; -[SCUserSession lagunaId] */

undefined8 FUN_004461ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 004461f4; end: 0044623b; -[SCUserSession .cxx_destruct] */

void FUN_004461f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0044623c; end: 0044628b; -[SCLoginInfo initWithLoginType:wasPasswordAutofilled:] */

void FUN_0044623c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3c08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  return;
}



/* Entry: 0044628c; end: 004462af; -[SCLoginInfo copyWithZone:] */

undefined8 FUN_0044628c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 004462b0; end: 0044630b; -[SCLoginInfo hash] */

undefined8 * FUN_004462b0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_20 = (ulong)*(byte *)(param_1 + 8);
  puVar1 = &uStack_28;
  func_0x0076fd30(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    puVar3 = (undefined8 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || (puVar1[2] != param_3[2])) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        puVar3 = (undefined8 *)(ulong)(*(char *)(puVar1 + 1) == *(char *)(param_3 + 1));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 0044630c; end: 004463a3; -[SCLoginInfo isEqual:] */

bool FUN_0044630c(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 8) == *(char *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 004463a4; end: 004463ab; -[SCLoginInfo loginType] */

undefined8 FUN_004463a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 004463ac; end: 004463b3; -[SCLoginInfo wasPasswordAutofilled] */

undefined1 FUN_004463ac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 004463b4; end: 0044642b; -[SCRegistrationInfo initWithVerificationResult:] */

undefined1 * FUN_004463b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3c10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0044642c; end: 0044644f; -[SCRegistrationInfo copyWithZone:] */

undefined8 FUN_0044642c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 00446450; end: 00446457; -[SCRegistrationInfo hash] */

void FUN_00446450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007843b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_hash_00abbdf0);
  return;
}



/* Entry: 00446458; end: 004464e7; -[SCRegistrationInfo isEqual:] */

long FUN_00446458(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_004464cc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_004464cc;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x007877e0();
      goto LAB_004464cc;
    }
  }
  lVar3 = 1;
LAB_004464cc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 004464e8; end: 004464ef; -[SCRegistrationInfo verificationResult] */

undefined8 FUN_004464e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004464f0; end: 004464fb; -[SCRegistrationInfo .cxx_destruct] */

void FUN_004464f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004464fc; end: 00446577;  */

undefined * FUN_004464fc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5fe00 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a25360,&UNK_00800298,&UNK_008002e0,5,
                    FUN_00446578,0);
    do {
      if (puRam0000000000b5fe00 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5fe00;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5fe00,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5fe00 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5fe00;
}



/* Entry: 00446578; end: 00446583;  */

bool FUN_00446578(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 00446584; end: 004465ff;  */

undefined * FUN_00446584(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5fe08 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a25380,&UNK_008002f4,&UNK_00800364,7,
                    FUN_00446600,0);
    do {
      if (puRam0000000000b5fe08 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5fe08;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5fe08,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5fe08 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5fe08;
}



/* Entry: 00446600; end: 0044660b;  */

bool FUN_00446600(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 0044660c; end: 00446687;  */

undefined * FUN_0044660c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5fe10 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a253a0,&UNK_00800380,&UNK_008003a8,4,
                    FUN_00446688,0);
    do {
      if (puRam0000000000b5fe10 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5fe10;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5fe10,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5fe10 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5fe10;
}



/* Entry: 00446688; end: 00446693;  */

bool FUN_00446688(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 00446694; end: 0044670f;  */

undefined * FUN_00446694(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5fe18 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a253c0,&UNK_008003b8,&UNK_008003d4,3,
                    FUN_00446710,0);
    do {
      if (puRam0000000000b5fe18 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5fe18;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5fe18,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5fe18 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5fe18;
}



/* Entry: 00446710; end: 0044671b;  */

bool FUN_00446710(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 0044671c; end: 00446797;  */

undefined * FUN_0044671c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5fe20 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a253e0,&UNK_008003e0,&UNK_00800448,3,
                    FUN_00446798,0);
    do {
      if (puRam0000000000b5fe20 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5fe20;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5fe20,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5fe20 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5fe20;
}


