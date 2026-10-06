/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10737e280; end: 10737e29f;  */

void FUN_10737e280(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109a76e8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10737e2a0; end: 10737e2cb;  */

undefined1 * FUN_10737e2a0(long param_1)

{
  undefined1 auStack_20 [16];
  
  func_0x000107268400(auStack_20,*(long *)(param_1 + 8) + 0x30);
  func_0x00010737f250();
  return auStack_20;
}



/* Entry: 10737e2cc; end: 10737e2f3;  */

void FUN_10737e2cc(undefined8 param_1)

{
  func_0x00010737f238();
  func_0x00010737f108(param_1,&PTR_DAT_1109a7748);
  func_0x00010737f034();
  return;
}



/* Entry: 10737e2f4; end: 10737e307;  */

undefined ** FUN_10737e2f4(void)

{
  return &PTR_DAT_1109a7748;
}



/* Entry: 10737e308; end: 10737e32f;  */

void FUN_10737e308(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010737f054();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109a7768;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10737e330; end: 10737e353;  */

void FUN_10737e330(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109a7768;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10737e354; end: 10737e37b;  */

void FUN_10737e354(undefined8 param_1)

{
  func_0x00010737f238();
  func_0x00010737f108(param_1,&PTR_DAT_1109a77c8);
  func_0x00010737f034();
  return;
}



/* Entry: 10737e37c; end: 10737e387;  */

undefined ** FUN_10737e37c(void)

{
  return &PTR_DAT_1109a77c8;
}



/* Entry: 10737e388; end: 10737e3e7;  */

long FUN_10737e388(void)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x00010737f004();
  uVar3 = 1;
  uStack_28 = extraout_x8;
  FUN_10737e3e8(auStack_40);
  FUN_10737e43c();
  func_0x00010737f374();
  func_0x00010737e894();
  func_0x00010737eff0(uStack_28);
  if ((bool)in_ZR) {
    return lStack_30;
  }
  ___stack_chk_fail();
  func_0x00010737f174();
  func_0x00010737e894();
  lVar1 = lStack_30;
  func_0x00010737f080();
  *(undefined8 *)(lVar1 + 8) = uVar3;
  lVar2 = lVar1;
  FUN_10737e410();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 10737e3e8; end: 10737e40f;  */

long FUN_10737e3e8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10737e410();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10737e410; end: 10737e43b;  */

undefined8 * FUN_10737e410(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x111111111111112) {
    puVar1 = (undefined8 *)(param_2 * 0xf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109a77e8;
  FUN_10737e4dc(param_1 + 3);
  return param_1;
}



/* Entry: 10737e43c; end: 10737e47b;  */

undefined8 * FUN_10737e43c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109a77e8;
  FUN_10737e4dc(param_1 + 3);
  return param_1;
}



/* Entry: 10737e47c; end: 10737e47f;  */

void FUN_10737e47c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a77e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10737e480; end: 10737e493;  */

void FUN_10737e480(void)

{
  func_0x00010737e7ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10737e494; end: 10737e4d7;  */

void FUN_10737e494(long param_1)

{
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    func_0x000107283194(param_1 + 0xd8);
  }
  func_0x00010737e8c8(param_1 + 0xd0);
  FUN_10737e7f8(param_1 + 0xc0);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x88);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 10737e4d8; end: 10737e4db;  */

void FUN_10737e4d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10737e4dc; end: 10737e503;  */

long FUN_10737e4dc(long param_1)

{
  long lVar1;
  
  _bzero(param_1,0xd8);
  lVar1 = param_1;
  __ZNSt3__119__shared_mutex_baseC1Ev();
  FUN_10737e548(lVar1 + 0xa8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  return param_1;
}



/* Entry: 10737e504; end: 10737e547;  */

long FUN_10737e504(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZNSt3__119__shared_mutex_baseC1Ev();
  FUN_10737e548(lVar1 + 0xa8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  return param_1;
}



/* Entry: 10737e548; end: 10737e56b;  */

undefined8 FUN_10737e548(undefined8 param_1)

{
  FUN_10737e56c(param_1);
  return param_1;
}



/* Entry: 10737e56c; end: 10737e5f7;  */

void FUN_10737e56c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int extraout_w10;
  
  if ((bRam00000001131ad418 & 1) == 0) {
    iVar3 = 0x131ad418;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      FUN_10737e5f8(0x1131ad408);
      ___cxa_guard_release(0x1131ad418);
    }
  }
  lVar2 = lRam00000001131ad410;
  uVar1 = uRam00000001131ad408;
  param_1[1] = lRam00000001131ad410;
  *param_1 = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x00010737f044();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10737e5f8; end: 10737e617;  */

void FUN_10737e5f8(void)

{
  undefined1 uStack_11;
  
  FUN_10737e618(&uStack_11);
  return;
}



/* Entry: 10737e618; end: 10737e68f;  */

undefined1 * FUN_10737e618(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x00010737f004();
  uVar3 = 1;
  uStack_28 = extraout_x8;
  FUN_10737e690();
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_1109a7838;
  puStack_30[1] = 0;
  puStack_30[8] = 0;
  puStack_30[7] = 0;
  puStack_30[4] = 0;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  *(undefined4 *)(puStack_30 + 7) = 0x3f800000;
  func_0x00010737f374();
  FUN_10737e7dc();
  func_0x00010737eff0(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar1 + 8) = uVar3;
  puVar2 = puVar1;
  FUN_10737e6b8();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 10737e690; end: 10737e6b7;  */

long FUN_10737e690(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10737e6b8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10737e6b8; end: 10737e6e7;  */

void FUN_10737e6b8(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x38e38e38e38e38f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1109a7838;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10737e6e8; end: 10737e6eb;  */

void FUN_10737e6e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a7838;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10737e6ec; end: 10737e6ff;  */

void FUN_10737e6ec(void)

{
  func_0x00010737e70c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10737e700; end: 10737e71b;  */

long FUN_10737e700(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x18;
  func_0x00010737e744(lVar1,*(undefined8 *)(param_1 + 0x28));
  FUN_10737e7a0(lVar1,0);
  return lVar1;
}



/* Entry: 10737e71c; end: 10737e79f;  */

long FUN_10737e71c(long param_1)

{
  func_0x00010737e744(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_10737e7a0(param_1,0);
  return param_1;
}



/* Entry: 10737e7a0; end: 10737e7b7;  */

void FUN_10737e7a0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10737e7b8; end: 10737e7db;  */

void FUN_10737e7b8(long param_1)

{
  func_0x00010737f2fc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10737e7dc; end: 10737e7f7;  */

void FUN_10737e7dc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10737e7f8; end: 10737e857;  */

void FUN_10737e7f8(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = param_1;
  FUN_10737e858();
  pcVar1 = pcRam00000001138369a8;
  if ((puVar2 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_28 = param_1[1];
    uStack_30 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(&uStack_30);
    func_0x0001000df524(&uStack_30);
  }
  FUN_10737e7b8(param_1);
  return;
}



/* Entry: 10737e858; end: 10737e8a3;  */

long FUN_10737e858(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 10737e8a4; end: 10737e8f3;  */

void FUN_10737e8a4(long param_1)

{
  func_0x00010737f2fc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10737e8f4; end: 10737e9b3;  */

long FUN_10737e8f4(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (param_1[3] != 0)) {
    plVar2 = param_1;
    func_0x00010737f2e8();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    plVar3 = plVar2;
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        func_0x00010737f438();
        if ((int)plVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10737e9b4; end: 10737e9b7;  */

void FUN_10737e9b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a7888;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10737e9b8; end: 10737e9cb;  */

void FUN_10737e9b8(void)

{
  func_0x00010737e9d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10737e9cc; end: 10737e9df;  */

void FUN_10737e9cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010737f494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10737e9e0; end: 10737ea03;  */

void FUN_10737e9e0(long param_1)

{
  func_0x00010737f2fc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10737ea04; end: 10737ea1b;  */

void FUN_10737ea04(void)

{
  FUN_10737eca4();
  return;
}



/* Entry: 10737ea1c; end: 10737ea57;  */

undefined8 * FUN_10737ea1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_10737e7b8(&uStack_30);
  return param_1;
}



/* Entry: 10737ea58; end: 10737eb03;  */

void FUN_10737ea58(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *extraout_x9;
  ulong uVar5;
  ulong extraout_x10;
  long *plVar6;
  long *plVar7;
  long *extraout_x11;
  long *plVar8;
  
  plVar2 = param_1;
  plVar3 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar2 = param_2;
  }
  plVar8 = (long *)param_1[1];
  if (param_2 <= plVar8) {
    if (param_2 < plVar8) {
      plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar8 < (long *)0x3) || (((ulong)plVar8 & (long)plVar8 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00010737f26c();
      }
      if (param_2 <= plVar2) {
        param_2 = plVar2;
      }
      if (param_2 < plVar8) goto LAB_10737eaa0;
    }
    return;
  }
LAB_10737eaa0:
  func_0x00010737f368();
  if (plVar3 == (long *)0x0) {
    FUN_10737ebf0(plVar2);
    plVar2[1] = 0;
  }
  else {
    plVar8 = plVar2 + 1;
    FUN_10737ec08(plVar8);
    FUN_10737ebf0(plVar2,plVar8);
    plVar2[1] = (long)plVar3;
    lVar4 = *plVar2;
    for (plVar8 = (long *)0x0; plVar3 != plVar8; plVar8 = (long *)((long)plVar8 + 1)) {
      *(undefined8 *)(lVar4 + (long)plVar8 * 8) = 0;
    }
    plVar8 = (long *)plVar2[2];
    if (plVar8 != (long *)0x0) {
      plVar6 = (long *)plVar8[1];
      uVar5 = (long)plVar3 - 1;
      uVar1 = 0;
      if (plVar3 != (long *)0x0) {
        uVar1 = (ulong)plVar6 / (ulong)plVar3;
      }
      plVar7 = plVar6;
      if (plVar3 <= plVar6) {
        plVar7 = (long *)((long)plVar6 - uVar1 * (long)plVar3);
      }
      if (((ulong)plVar3 & uVar5) == 0) {
        plVar7 = (long *)((ulong)plVar6 & uVar5);
      }
      *(long **)(lVar4 + (long)plVar7 * 8) = plVar2 + 2;
      while (plVar2 = plVar8, plVar8 = (long *)*plVar2, plVar8 != (long *)0x0) {
        plVar6 = (long *)plVar8[1];
        if (((ulong)plVar3 & uVar5) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar5);
        }
        else if (plVar3 <= plVar6) {
          uVar1 = 0;
          if (plVar3 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)plVar3;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar3);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar4 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar6 * 8) = plVar2;
            plVar7 = plVar6;
          }
          else {
            *plVar2 = *plVar8;
            func_0x00010737f3a4();
            lVar4 = extraout_x8;
            plVar8 = extraout_x9;
            uVar5 = extraout_x10;
            plVar7 = extraout_x11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10737eb04; end: 10737ebef;  */

void FUN_10737eb04(long *param_1,ulong param_2)

{
  long lVar1;
  long extraout_x8;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *extraout_x9;
  ulong uVar5;
  ulong extraout_x10;
  ulong uVar6;
  ulong uVar7;
  ulong extraout_x11;
  
  if (param_2 == 0) {
    FUN_10737ebf0(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_10737ec08(plVar3);
    FUN_10737ebf0(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            func_0x00010737f3a4();
            lVar1 = extraout_x8;
            plVar3 = extraout_x9;
            uVar5 = extraout_x10;
            uVar7 = extraout_x11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10737ebf0; end: 10737ec07;  */

void FUN_10737ebf0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10737ec08; end: 10737ec23;  */

long FUN_10737ec08(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_10737ec48();
  return param_1;
}



/* Entry: 10737ec24; end: 10737ec47;  */

undefined8 FUN_10737ec24(undefined8 param_1)

{
  FUN_10737ec48(param_1,0);
  return param_1;
}



/* Entry: 10737ec48; end: 10737ec5f;  */

void FUN_10737ec48(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    FUN_10737dff0(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10737ec60; end: 10737eca3;  */

void FUN_10737ec60(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10737dff0(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10737eca4; end: 10737ecef;  */

void FUN_10737eca4(void)

{
  func_0x00010737ecbc();
  return;
}



/* Entry: 10737ecf0; end: 10737eeff;  */

undefined1  [16] FUN_10737ecf0(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined8 extraout_x9;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x25;
  ulong uVar10;
  undefined1 auVar11 [16];
  long *aplStack_68 [3];
  
  plVar7 = param_1;
  func_0x00010737f2e8();
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    uVar10 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar10) == 0) {
      unaff_x25 = (long *)(uVar10 & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar9 <= plVar7) {
        uVar1 = 0;
        if (plVar9 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar1 * (long)plVar9);
      }
    }
    plVar8 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_10737edb0;
          plVar5 = (long *)plVar8[1];
          if (plVar5 != plVar7) break;
          plVar5 = plVar8 + 2;
          func_0x000104c32db4(plVar5,param_2);
          if (((ulong)plVar5 & 1) != 0) {
            uVar4 = 0;
            goto LAB_10737eed0;
          }
        }
        if (((ulong)plVar9 & uVar10) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar10);
        }
        else if (plVar9 <= plVar5) {
          uVar1 = 0;
          if (plVar9 != (long *)0x0) {
            uVar1 = (ulong)plVar5 / (ulong)plVar9;
          }
          plVar5 = (long *)((long)plVar5 - uVar1 * (long)plVar9);
        }
      } while (plVar5 == unaff_x25);
    }
  }
LAB_10737edb0:
  func_0x00010737f368(aplStack_68);
  FUN_10737ef00();
  if ((plVar9 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar9 < (float)(param_1[3] + 1))
     ) {
    bVar2 = (long *)0x2 < plVar9;
    bVar3 = plVar9 == (long *)0x3;
    func_0x00010737f200((long)plVar9 << 1);
    uVar4 = extraout_x8;
    if (!bVar2 || bVar3) {
      uVar4 = extraout_x9;
    }
    FUN_10737ea58(param_1,uVar4);
    plVar9 = (long *)param_1[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar9 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar9 <= plVar7) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar10 * (long)plVar9);
      }
    }
  }
  plVar8 = aplStack_68[0];
  lVar6 = *param_1;
  plVar7 = *(long **)(lVar6 + (long)unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *aplStack_68[0] = *plVar7;
    *plVar7 = (long)aplStack_68[0];
    *(long **)(lVar6 + (long)unaff_x25 * 8) = plVar7;
    if (*aplStack_68[0] != 0) {
      plVar7 = *(long **)(*aplStack_68[0] + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar7) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar7 / (ulong)plVar9;
        }
        plVar7 = (long *)((long)plVar7 - uVar10 * (long)plVar9);
      }
      *(long **)(lVar6 + (long)plVar7 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar7;
    *plVar7 = (long)aplStack_68[0];
  }
  aplStack_68[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10737ec24(aplStack_68);
  uVar4 = 1;
LAB_10737eed0:
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 10737ef00; end: 10737ef4f;  */

void FUN_10737ef00(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_2 + 2;
  func_0x00010737f3c4();
  *param_1 = param_2;
  param_1[1] = puVar1;
  param_1[2] = 1;
  puVar1 = param_2 + 2;
  *param_2 = 0;
  param_2[1] = param_3;
  func_0x000104c2fe00();
  uVar2 = *(undefined8 *)(param_4 + 0x38);
  puVar1[8] = *(undefined8 *)(param_4 + 0x40);
  puVar1[7] = uVar2;
  *(undefined8 *)(param_4 + 0x38) = 0;
  *(undefined8 *)(param_4 + 0x40) = 0;
  return;
}



/* Entry: 10737ef50; end: 10737ef77;  */

void FUN_10737ef50(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000104c2fe00();
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  return;
}



/* Entry: 10737ef78; end: 10737efb3;  */

void FUN_10737ef78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != param_2) {
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    func_0x000107299438(param_1,&uStack_20);
    func_0x000107283230(&uStack_20);
  }
  return;
}



/* Entry: 10737efb4; end: 10737efc7;  */

void FUN_10737efb4(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long extraout_x8_01;
  ulong uVar4;
  ulong extraout_x9;
  long *extraout_x9_00;
  long *plVar5;
  long *extraout_x9_01;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar6;
  ulong extraout_x11_00;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = (ulong)((float)param_2 / *(float *)(param_1 + 0x20));
  func_0x00010729ef90();
  if ((!(bool)in_ZR) && (func_0x00010729eef4(), !(bool)in_ZR)) {
    func_0x00010729ebe8();
  }
  func_0x00010729eed0();
  if ((bool)in_CY && !(bool)in_ZR) {
code_r0x000107298690:
    func_0x00010729eb1c();
    if (uVar2 == 0) {
      func_0x00010729f0b8();
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      func_0x000107270d08(param_1 + 8);
      func_0x00010729f0b8();
      uVar4 = 0;
      *(ulong *)(param_1 + 8) = uVar2;
      while (uVar2 != uVar4) {
        func_0x00010729eeb8();
        uVar4 = extraout_x9;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        func_0x00010729f134();
        func_0x00010729f114();
        lVar3 = extraout_x8_00;
        plVar7 = extraout_x9_00;
        uVar4 = extraout_x10;
        uVar6 = extraout_x11;
        while (plVar5 = plVar7, plVar7 = (long *)*plVar5, plVar7 != (long *)0x0) {
          uVar8 = plVar7[1];
          if ((uVar2 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (uVar2 <= uVar8) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar8 / uVar2;
            }
            uVar8 = uVar8 - uVar1 * uVar2;
          }
          if (uVar8 != uVar6) {
            if (*(long *)(lVar3 + uVar8 * 8) == 0) {
              *(long **)(lVar3 + uVar8 * 8) = plVar5;
              uVar6 = uVar8;
            }
            else {
              func_0x00010729ec8c();
              lVar3 = extraout_x8_01;
              plVar7 = extraout_x9_01;
              uVar4 = extraout_x10_00;
              uVar6 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (!(bool)in_CY) {
    func_0x00010729e330();
    if (((bool)in_CY) && (func_0x00010729eec4(), extraout_x8 == 0)) {
      func_0x00010729e2b0();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x00010729e884();
    if (!(bool)in_CY) goto code_r0x000107298690;
  }
  return;
}



/* Entry: 10737efc8; end: 10737efef;  */

undefined8 FUN_10737efc8(undefined8 param_1)

{
  func_0x0001072cda08(param_1);
  return param_1;
}



/* Entry: 10737eff0; end: 10737f4b7;  */

void FUN_10737eff0(void)

{
  return;
}



/* Entry: 10737f4b8; end: 10737f8c7;  */

void FUN_10737f4b8(long *param_1,float param_2,long param_3,ulong param_4)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long extraout_x8;
  ulong uVar7;
  float *pfVar8;
  ulong uVar9;
  long extraout_x10;
  ulong uVar10;
  ulong ****ppppuVar11;
  long lVar12;
  ulong uVar13;
  ulong ****ppppuVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  ulong ***pppuStack_190;
  ulong ***pppuStack_188;
  long lStack_180;
  long alStack_178 [3];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined4 uStack_120;
  float afStack_118 [4];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long lStack_b8;
  ulong uStack_b0;
  ulong ***pppuStack_a8;
  ulong ***pppuStack_a0;
  ulong ***pppuStack_98;
  long lStack_90;
  long *plStack_88;
  
  uStack_158 = 0;
  uStack_160 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  plStack_e0 = &lStack_b8;
  uStack_e8 = 0;
  uStack_d8 = 10;
  uStack_d0 = 0x100000000;
  uStack_120 = 2;
  uStack_138 = 1;
  uStack_140 = 10;
  uStack_130 = param_4;
  uStack_128 = param_4;
  plStack_c8 = plStack_e0;
  lStack_b8 = param_3;
  uStack_b0 = param_4;
  FUN_10737f8c8(&uStack_160);
  FUN_10737f8c8(&uStack_160);
  uVar2 = uStack_b0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10737fadc(alStack_178,uStack_b0);
  lVar12 = 0;
  uVar13 = 0;
  plVar1 = param_1 + 2;
  do {
    if (uVar13 == uVar2) {
      func_0x000104be7d74(alStack_178);
      func_0x00010737ff08(&uStack_160);
      return;
    }
    if ((*(ulong *)(alStack_178[0] + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) == 0) {
      pppuStack_190 = (ulong ***)0x0;
      pppuStack_188 = (ulong ***)0x0;
      lStack_180 = 0;
      if (uVar2 >> 0x3c != 0) {
        FUN_10737fbb4();
LAB_10737f854:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10737f858);
        (*pcVar3)();
      }
      func_0x00010737fc40(&pppuStack_a8,uVar2,0,&lStack_180);
      ppppuVar11 = (ulong ****)((long)pppuStack_a0 - ((long)pppuStack_188 - (long)pppuStack_190));
      _memcpy(ppppuVar11);
      lVar6 = lStack_180;
      lStack_180 = lStack_90;
      pppuStack_188 = pppuStack_98;
      pppuStack_98 = pppuStack_190;
      lStack_90 = lVar6;
      pppuStack_a8 = pppuStack_190;
      pppuStack_a0 = pppuStack_190;
      pppuStack_190 = (ulong ***)ppppuVar11;
      FUN_10737fca0(&pppuStack_a8);
      pppuStack_a8 = (ulong ***)CONCAT44(pppuStack_a8._4_4_,param_2 * param_2);
      pppuStack_a0 = (ulong ***)&pppuStack_190;
      pppuStack_188 = pppuStack_190;
      if (uStack_130 != 0) {
        if (lStack_148 == 0) {
          uVar5 = 0x10;
          ___cxa_allocate_exception(0x10);
          __ZNSt13runtime_errorC1EPKc();
          func_0x000107381004();
          ___cxa_throw(uVar5);
          goto LAB_10737f854;
        }
        lStack_1b0 = 0;
        fVar15 = 0.0;
        pfVar8 = afStack_118;
        for (lVar6 = 0; lVar6 != 8; lVar6 = lVar6 + 4) {
          fVar16 = *(float *)(lStack_b8 + lVar12 + lVar6);
          if (fVar16 < pfVar8[-1]) {
            fVar17 = fVar16 - pfVar8[-1];
            fVar17 = fVar17 * fVar17;
            *(float *)((long)&lStack_1b0 + lVar6) = fVar17;
            fVar15 = fVar15 + fVar17;
          }
          if (*pfVar8 < fVar16) {
            fVar16 = fVar16 - *pfVar8;
            fVar16 = fVar16 * fVar16;
            *(float *)((long)&lStack_1b0 + lVar6) = fVar16;
            fVar15 = fVar15 + fVar16;
          }
          pfVar8 = pfVar8 + 2;
        }
        FUN_107380d44(fVar15,&uStack_160,&pppuStack_a8,lStack_b8 + uVar13 * 8,lStack_148,&lStack_1b0
                     );
      }
      ppppuVar14 = (ulong ****)pppuStack_188;
      lStack_1b0 = 0;
      lStack_1a8 = 0;
      uStack_1a0 = 0;
      for (ppppuVar11 = (ulong ****)pppuStack_190; ppppuVar11 != ppppuVar14;
          ppppuVar11 = ppppuVar11 + 2) {
        uVar7 = (ulong)*ppppuVar11 >> 6;
        uVar9 = 1L << ((ulong)*ppppuVar11 & 0x3f);
        uVar10 = *(ulong *)(alStack_178[0] + uVar7 * 8);
        if ((uVar9 & uVar10) == 0) {
          *(ulong *)(alStack_178[0] + uVar7 * 8) = uVar10 | uVar9;
          func_0x00010737fce0(&lStack_1b0,ppppuVar11);
        }
      }
      if (8 < (ulong)(lStack_1a8 - lStack_1b0)) {
        if ((ulong)param_1[1] < (ulong)param_1[2]) {
          FUN_107380f48();
        }
        else {
          ppppuVar14 = (ulong ****)(param_1[1] - *param_1);
          uVar7 = (long)ppppuVar14 / 0x18 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar7) {
            func_0x00010737fdbc();
            goto LAB_10737f854;
          }
          uVar10 = (param_1[2] - *param_1) / 0x18;
          uVar9 = uVar10 * 2;
          if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
            uVar9 = uVar7;
          }
          if (0x555555555555554 < uVar10) {
            uVar9 = 0xaaaaaaaaaaaaaaa;
          }
          plStack_88 = plVar1;
          if (uVar9 == 0) {
            plVar4 = (long *)0x0;
          }
          else {
            plVar4 = plVar1;
            func_0x00010737fdc8(plVar1,uVar9);
          }
          FUN_107380f48((long)plVar4 + (long)ppppuVar14);
          lVar6 = extraout_x8 + ((param_1[1] - *param_1) / -0x18) * extraout_x10;
          _memcpy(lVar6);
          pppuStack_a8 = (ulong ***)*param_1;
          *param_1 = lVar6;
          param_1[1] = (long)ppppuVar14;
          lStack_90 = param_1[2];
          param_1[2] = (long)(plVar4 + uVar9 * 3);
          pppuStack_a0 = pppuStack_a8;
          pppuStack_98 = pppuStack_a8;
          func_0x00010737fdf4(&pppuStack_a8);
        }
        param_1[1] = (long)ppppuVar14;
      }
      func_0x0001057f951c(&lStack_1b0);
      func_0x00010737fe3c(&pppuStack_190);
    }
    uVar13 = uVar13 + 1;
    lVar12 = lVar12 + 8;
  } while( true );
}



/* Entry: 10737f8c8; end: 10737fadb;  */

long * FUN_10737f8c8(long *param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined4 uVar5;
  float fVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float *pfVar15;
  undefined4 uStack_6c;
  long alStack_68 [9];
  
  alStack_68[8] = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(param_1[0x10] + 8);
  param_1[6] = lVar7;
  param_1[7] = lVar7;
  if (lVar7 != param_1[1] - *param_1 >> 3) {
    FUN_107380640(param_1);
  }
  for (uVar9 = 0; uVar9 < (ulong)param_1[6]; uVar9 = uVar9 + 1) {
    *(ulong *)(*param_1 + uVar9 * 8) = uVar9;
  }
  plVar11 = param_1 + 0xb;
  func_0x00010737ff30(plVar11);
  param_1[3] = 0;
  lVar7 = param_1[6];
  param_1[7] = lVar7;
  if (lVar7 != 0) {
    lVar10 = ((long *)param_1[0x10])[1];
    if (lVar10 == 0) goto LAB_10737fa94;
    plVar11 = (long *)*param_1;
    lVar12 = *(long *)param_1[0x10];
    puVar1 = (undefined4 *)(lVar12 + *plVar11 * 8);
    for (lVar13 = 0x44; lVar13 != 0x54; lVar13 = lVar13 + 8) {
      puVar3 = puVar1;
      if (lVar13 != 0x44) {
        puVar3 = puVar1 + 1;
      }
      uVar5 = *puVar3;
      *(ulong *)((long)param_1 + lVar13) =
           CONCAT17((char)((uint)uVar5 >> 0x18),
                    CONCAT16((char)((uint)uVar5 >> 0x10),
                             CONCAT15((char)((uint)uVar5 >> 8),CONCAT14((char)uVar5,uVar5))));
    }
    for (lVar13 = 1; lVar13 != lVar10; lVar13 = lVar13 + 1) {
      pfVar2 = (float *)(lVar12 + plVar11[lVar13] * 8);
      pfVar15 = (float *)(param_1 + 9);
      for (lVar14 = 0; lVar14 != 2; lVar14 = lVar14 + 1) {
        pfVar4 = pfVar2;
        if (lVar14 != 0) {
          pfVar4 = pfVar2 + 1;
        }
        fVar6 = *pfVar4;
        if (fVar6 < pfVar15[-1]) {
          pfVar15[-1] = fVar6;
        }
        if (*pfVar15 < fVar6) {
          *pfVar15 = fVar6;
        }
        pfVar15 = pfVar15 + 2;
      }
    }
    if (param_1[5] == 1) {
      plVar11 = param_1;
      FUN_10737ff6c(param_1,param_1,0,lVar7,(long)param_1 + 0x44);
      param_1[3] = (long)plVar11;
    }
    else {
      uStack_6c = 0;
      alStack_68[0] = 0x32aaaba7;
      alStack_68[2] = 0;
      alStack_68[1] = 0;
      alStack_68[4] = 0;
      alStack_68[3] = 0;
      alStack_68[6] = 0;
      alStack_68[5] = 0;
      alStack_68[7] = 0;
      plVar11 = param_1;
      FUN_107380148(param_1,param_1,0,lVar7,(long)param_1 + 0x44,&uStack_6c,alStack_68);
      param_1[3] = (long)plVar11;
      plVar11 = alStack_68;
      __ZNSt3__15mutexD1Ev(plVar11);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_68[8]) {
    return plVar11;
  }
  ___stack_chk_fail();
LAB_10737fa94:
  plVar11 = (long *)0x10;
  ___cxa_allocate_exception();
  puVar8 = &UNK_10f40af16;
  __ZNSt13runtime_errorC1EPKc();
  func_0x000107381004();
  ___cxa_throw();
  __ZNSt3__15mutexD1Ev(alStack_68);
  __Unwind_Resume();
  *plVar11 = 0;
  plVar11[1] = 0;
  plVar11[2] = 0;
  if (puVar8 != (undefined *)0x0) {
    func_0x000104becc68(plVar11);
    func_0x00010737fb20(plVar11,puVar8,0);
  }
  return plVar11;
}



/* Entry: 10737fadc; end: 10737fbb3;  */

undefined8 * FUN_10737fadc(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    func_0x000104becc68(param_1);
    func_0x00010737fb20(param_1,param_2,0);
  }
  return param_1;
}



/* Entry: 10737fbb4; end: 10737fbbf;  */

void FUN_10737fbb4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  func_0x000107380fcc();
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10737fbc0; end: 10737fc9f;  */

void FUN_10737fbc0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10737fca0; end: 10737fd23;  */

long * FUN_10737fca0(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x10;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10737fd24; end: 10737fdbb;  */

long FUN_10737fd24(long param_1)

{
  long lVar1;
  long *plVar2;
  long *unaff_x19;
  long lVar3;
  undefined8 *unaff_x20;
  
  func_0x000107381018();
  func_0x0001057f9354();
  lVar3 = *unaff_x19;
  lVar1 = unaff_x19[1];
  plVar2 = unaff_x19 + 2;
  if (param_1 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    func_0x000104becd60();
  }
  *(undefined8 *)((long)plVar2 + (lVar1 - lVar3)) = *unaff_x20;
  func_0x000107380fc0();
  lVar3 = unaff_x19[1];
  func_0x000107380f78();
  return lVar3;
}



/* Entry: 10737fdbc; end: 10737fdf3;  */

long * FUN_10737fdbc(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  
  func_0x000107380fcc();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar1 = (long *)(param_2 * 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  lVar2 = param_1[1];
  while (lVar2 != param_1[2]) {
    param_1[2] = param_1[2] + -0x18;
    func_0x0001057f951c();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10737fdf4; end: 10737fec7;  */

long * FUN_10737fdf4(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x18;
    func_0x0001057f951c();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10737fec8; end: 10737fecf;  */

void FUN_10737fec8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    func_0x0001057f951c();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10737fed0; end: 10737ff6b;  */

void FUN_10737fed0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x18;
    func_0x0001057f951c();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10737ff6c; end: 107380147;  */

/* WARNING: Type propagation algorithm not settling */

ulong * FUN_10737ff6c(undefined8 param_1,ulong param_2,long *param_3,ulong param_4,ulong param_5,
                     undefined8 *param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x11;
  long extraout_x11_00;
  float *extraout_x14;
  float fVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 auStack_a0 [2];
  undefined8 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  int iStack_7c;
  long lStack_78;
  
  puVar6 = (ulong *)(param_3 + 0xb);
  FUN_107380a2c();
  if ((ulong)param_3[4] < param_5 - param_4) {
    FUN_107380740(param_2,param_3,param_4,param_5 - param_4,&lStack_78,&iStack_7c,&uStack_80,param_6
                 );
    lVar8 = (long)iStack_7c;
    *(int *)puVar6 = iStack_7c;
    uStack_88 = param_6[1];
    uStack_90 = *param_6;
    (&uStack_8c)[lVar8 * 2] = uStack_80;
    uVar7 = param_2;
    FUN_10737ff6c(param_2,param_3,param_4,lStack_78 + param_4,&stack0xffffffffffffff70);
    puVar6[2] = uVar7;
    auStack_a0[1] = param_6[1];
    auStack_a0[0] = *param_6;
    *(undefined4 *)(auStack_a0 + lVar8) = uStack_80;
    FUN_10737ff6c(param_2,param_3,lStack_78 + param_4,param_5,auStack_a0);
    puVar6[3] = param_2;
    uVar11 = *(undefined4 *)(auStack_a0 + lVar8);
    *(undefined4 *)((long)puVar6 + 4) = (&uStack_8c)[lVar8 * 2];
    *(undefined4 *)(puVar6 + 1) = uVar11;
    lVar8 = 0;
    while (lVar8 != 0x10) {
      uVar10 = *(undefined8 *)((long)&stack0xffffffffffffff70 + lVar8);
      func_0x000107380f80(uVar10,*(undefined8 *)((long)auStack_a0 + lVar8));
      *(undefined8 *)((long)param_6 + extraout_x8) = uVar10;
      lVar8 = extraout_x8 + 8;
    }
  }
  else {
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = param_4;
    puVar6[1] = param_5;
    puVar1 = (undefined4 *)(*(long *)param_3[0x10] + *(long *)(*param_3 + param_4 * 8) * 8);
    for (lVar8 = 0; lVar8 != 0x10; lVar8 = lVar8 + 8) {
      puVar2 = puVar1;
      if (lVar8 != 0) {
        puVar2 = puVar1 + 1;
      }
      param_1 = CONCAT44(*puVar2,*puVar2);
      *(undefined8 *)((long)param_6 + lVar8) = param_1;
    }
    while (param_4 = param_4 + 1, param_4 < param_5) {
      func_0x000107381024();
      lVar8 = extraout_x11;
      while( true ) {
        cVar3 = SBORROW8(lVar8,2);
        cVar4 = lVar8 + -2 < 0;
        bVar5 = lVar8 == 2;
        if (bVar5) break;
        func_0x000107380fa8();
        fVar9 = (float)param_1;
        if (!bVar5 && cVar4 == cVar3) {
          extraout_x14[-1] = fVar9;
        }
        if (*extraout_x14 < fVar9) {
          *extraout_x14 = fVar9;
        }
        lVar8 = extraout_x11_00 + 1;
      }
    }
  }
  return puVar6;
}



/* Entry: 107380148; end: 10738063f;  */

ulong * FUN_107380148(undefined8 param_1,ulong param_2,long *param_3,ulong param_4,ulong param_5,
                     undefined8 *param_6,uint *param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  code *pcVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 **ppuVar12;
  long extraout_x8;
  undefined8 *extraout_x9;
  undefined8 **extraout_x10;
  long extraout_x11;
  long extraout_x11_00;
  float *extraout_x14;
  ulong uVar13;
  long lVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 *apuStack_c0 [4];
  undefined4 uStack_a0;
  int iStack_9c;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined1 uStack_68;
  
  uStack_88 = 1;
  uStack_90 = param_8;
  __ZNSt3__15mutex4lockEv(param_8);
  puVar8 = (ulong *)(param_3 + 0xb);
  FUN_107380a2c();
  func_0x00010054bf64(&uStack_90);
  if ((ulong)param_3[4] < param_5 - param_4) {
    FUN_107380740(param_2,param_3,param_4,param_5 - param_4,&lStack_98,&iStack_9c,&uStack_a0,param_6
                 );
    *(int *)puVar8 = iStack_9c;
    apuStack_c0[3] = (undefined8 *)0x0;
    apuStack_c0[1] = (undefined8 *)param_6[1];
    apuStack_c0[0] = (undefined8 *)*param_6;
    *(undefined4 *)(apuStack_c0 + iStack_9c) = uStack_a0;
    do {
      uVar3 = *param_7;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(param_7,0x10);
      if (bVar7) {
        *param_7 = uVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((ulong)(uVar3 + 1) < *(ulong *)(param_2 + 0x28)) {
      puVar9 = (undefined8 *)0xe0;
      __Znwm();
      puVar9[2] = 0;
      puVar9[3] = 0x32aaaba7;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[9] = 0;
      puVar9[8] = 0;
      puVar9[10] = 0;
      puVar9[0xb] = 0x3cb0b1bb;
      puVar9[0xd] = 0;
      puVar9[0xc] = 0;
      puVar9[0xf] = 0;
      puVar9[0xe] = 0;
      *puVar9 = &PTR_FUN_1109a7ae8;
      puVar9[1] = 0;
      *(undefined8 *)((long)puVar9 + 0x84) = 0;
      *(undefined8 *)((long)puVar9 + 0x7c) = 0;
      puVar9[0x13] = FUN_107380148;
      puVar9[0x14] = 0;
      puVar9[0x15] = param_2;
      puVar9[0x16] = param_3;
      puVar9[0x17] = lStack_98 + param_4;
      puVar9[0x18] = param_5;
      puVar9[0x19] = apuStack_c0;
      puVar9[0x1a] = param_7;
      puVar9[0x1b] = param_8;
      puVar10 = (undefined8 *)0x8;
      puStack_78 = puVar9;
      __Znwm();
      __ZNSt3__115__thread_structC1Ev();
      puVar11 = (undefined8 *)0x20;
      puStack_70 = puVar10;
      __Znwm();
      puStack_70 = (undefined8 *)0x0;
      *puVar11 = puVar10;
      puVar11[2] = 1;
      puVar11[1] = 0x18;
      puVar11[3] = puVar9;
      ppuVar12 = &puStack_80;
      uStack_e0 = puVar11;
      func_0x000100489040(ppuVar12,FUN_107380c94,puVar11);
      if ((int)ppuVar12 != 0) {
        __ZNSt3__120__throw_system_errorEiPKc();
        goto LAB_107380610;
      }
      uStack_e0 = (undefined8 *)0x0;
      FUN_107380cfc(&uStack_e0);
      func_0x0001004895c8(&puStack_70);
      __ZNSt3__16thread6detachEv(&puStack_80);
      __ZNSt3__16threadD1Ev(&puStack_80);
      func_0x0001003b79d8(puVar9);
      func_0x000107380b14(&puStack_78);
      uStack_c8 = 0;
      puStack_70 = apuStack_c0[3];
      apuStack_c0[3] = puVar9;
      func_0x000107380ad8(&puStack_70);
      func_0x000107380ad8(&uStack_c8);
    }
    else {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(param_7,0x10);
        if (bVar7) {
          *param_7 = *param_7 - 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    uStack_d8 = param_6[1];
    uStack_e0 = (undefined8 *)*param_6;
    lVar14 = (long)iStack_9c;
    *(undefined4 *)((long)&uStack_e0 + lVar14 * 8 + 4) = uStack_a0;
    uVar13 = param_2;
    func_0x000107380fe4(param_2,param_3,param_4,lStack_98 + param_4,&uStack_e0);
    puVar9 = apuStack_c0[3];
    puVar8[2] = uVar13;
    if (apuStack_c0[3] == (undefined8 *)0x0) {
      func_0x000107380fe4(param_2,param_3,lStack_98 + param_4,param_5,apuStack_c0);
      puVar8[3] = param_2;
    }
    else {
      puStack_80 = apuStack_c0[3];
      apuStack_c0[3] = (undefined8 *)0x0;
      puStack_70 = puVar9 + 3;
      uStack_68 = 1;
      __ZNSt3__15mutex4lockEv();
      __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(puVar9,&puStack_70);
      lVar14 = puVar9[2];
      puStack_78 = (undefined8 *)0x0;
      __ZNSt13exception_ptrD1Ev(&puStack_78);
      if (lVar14 != 0) {
        __ZNSt13exception_ptrC1ERKS_();
        __ZSt17rethrow_exceptionSt13exception_ptr();
LAB_107380610:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x107380614);
        (*pcVar4)();
      }
      uVar13 = puVar9[0x12];
      func_0x0001000df5a0(&puStack_70);
      func_0x00010538d0f8(&puStack_80);
      puVar8[3] = uVar13;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(param_7,0x10);
        if (bVar7) {
          *param_7 = *param_7 - 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      lVar14 = (long)iStack_9c;
    }
    puVar9 = &uStack_e0;
    *(undefined4 *)((long)puVar8 + 4) = *(undefined4 *)((long)&uStack_e0 + lVar14 * 8 + 4);
    ppuVar12 = apuStack_c0;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(ppuVar12 + lVar14);
    lVar14 = 0;
    while (lVar14 != 0x10) {
      uVar16 = *(undefined8 *)((long)puVar9 + lVar14);
      func_0x000107380f80(uVar16,*(undefined8 *)((long)ppuVar12 + lVar14));
      *(undefined8 *)((long)param_6 + extraout_x8) = uVar16;
      puVar9 = extraout_x9;
      ppuVar12 = extraout_x10;
      lVar14 = extraout_x8 + 8;
    }
    func_0x000107380ad8(apuStack_c0 + 3);
  }
  else {
    puVar8[2] = 0;
    puVar8[3] = 0;
    *puVar8 = param_4;
    puVar8[1] = param_5;
    puVar1 = (undefined4 *)(*(long *)param_3[0x10] + *(long *)(*param_3 + param_4 * 8) * 8);
    for (lVar14 = 0; lVar14 != 0x10; lVar14 = lVar14 + 8) {
      puVar2 = puVar1;
      if (lVar14 != 0) {
        puVar2 = puVar1 + 1;
      }
      param_1 = CONCAT44(*puVar2,*puVar2);
      *(undefined8 *)((long)param_6 + lVar14) = param_1;
    }
    while (param_4 = param_4 + 1, param_4 < param_5) {
      func_0x000107381024();
      lVar14 = extraout_x11;
      while( true ) {
        cVar5 = SBORROW8(lVar14,2);
        cVar6 = lVar14 + -2 < 0;
        bVar7 = lVar14 == 2;
        if (bVar7) break;
        func_0x000107380fa8();
        fVar15 = (float)param_1;
        if (!bVar7 && cVar6 == cVar5) {
          extraout_x14[-1] = fVar15;
        }
        if (*extraout_x14 < fVar15) {
          *extraout_x14 = fVar15;
        }
        lVar14 = extraout_x11_00 + 1;
      }
    }
  }
  func_0x0001000df5a0(&uStack_90);
  return puVar8;
}



/* Entry: 107380640; end: 10738066f;  */

void FUN_107380640(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  long unaff_x20;
  
  uVar7 = param_1[1] - *param_1 >> 3;
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      param_1[1] = *param_1 + param_2 * 8;
    }
    return;
  }
  param_2 = param_2 - uVar7;
  func_0x000107381018();
  plVar4 = param_1 + 2;
  if (param_2 <= (ulong)(*plVar4 - param_1[1] >> 3)) {
    puVar6 = (undefined8 *)unaff_x19[1];
    puVar2 = puVar6;
    for (lVar8 = unaff_x20 << 3; lVar8 != 0; lVar8 = lVar8 + -8) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    unaff_x19[1] = (long)(puVar6 + unaff_x20);
    return;
  }
  plVar3 = unaff_x19;
  func_0x0001057f9354();
  lVar8 = *unaff_x19;
  lVar1 = unaff_x19[1];
  plVar5 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    func_0x000104becd60();
    plVar5 = plVar4;
  }
  puVar2 = (undefined8 *)((long)plVar5 + (lVar1 - lVar8));
  for (lVar9 = unaff_x20 << 3; lVar9 != 0; lVar9 = lVar9 + -8) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  func_0x000107380fc0();
  func_0x000107380f78();
  return;
}



/* Entry: 107380670; end: 10738073f;  */

void FUN_107380670(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *unaff_x19;
  long unaff_x20;
  long *plVar8;
  
  func_0x000107381018();
  plVar8 = (long *)(param_1 + 0x10);
  if (param_2 <= (ulong)(*plVar8 - *(long *)(param_1 + 8) >> 3)) {
    puVar5 = (undefined8 *)unaff_x19[1];
    puVar2 = puVar5;
    for (lVar6 = unaff_x20 << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    unaff_x19[1] = (long)(puVar5 + unaff_x20);
    return;
  }
  plVar3 = unaff_x19;
  func_0x0001057f9354();
  lVar6 = *unaff_x19;
  lVar1 = unaff_x19[1];
  plVar4 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    func_0x000104becd60();
    plVar4 = plVar8;
  }
  puVar2 = (undefined8 *)((long)plVar4 + (lVar1 - lVar6));
  for (lVar7 = unaff_x20 << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  func_0x000107380fc0();
  func_0x000107380f78();
  return;
}



/* Entry: 107380740; end: 107380a2b;  */

void FUN_107380740(long *param_1,long param_2,long param_3,ulong param_4,ulong *param_5,
                  undefined4 *param_6,float *param_7,float *param_8)

{
  bool bVar1;
  long *plVar2;
  float *pfVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  uVar7 = 0;
  uVar8 = 0;
  fVar19 = param_8[3] - param_8[2];
  if (param_8[3] - param_8[2] <= param_8[1] - *param_8) {
    fVar19 = param_8[1] - *param_8;
  }
  *param_6 = 0;
  plVar9 = *(long **)(param_2 + 0x80);
  fVar21 = -1.0;
  fVar18 = 0.0;
  fVar20 = 0.0;
  for (; uVar8 != 2; uVar8 = uVar8 + 1) {
    if (fVar19 * 0.99999 <= (param_8 + uVar8 * 2)[1] - param_8[uVar8 * 2]) {
      plVar2 = (long *)(*param_1 + param_3 * 8);
      pfVar3 = (float *)(*plVar9 + *plVar2 * 8);
      if (uVar8 != 0) {
        pfVar3 = pfVar3 + 1;
      }
      fVar22 = *pfVar3;
      fVar23 = fVar22;
      fVar24 = fVar22;
      for (uVar13 = 1; uVar13 < param_4; uVar13 = uVar13 + 1) {
        pfVar3 = (float *)(*plVar9 + plVar2[uVar13] * 8);
        if (uVar8 != 0) {
          pfVar3 = pfVar3 + 1;
        }
        fVar26 = *pfVar3;
        fVar25 = fVar22;
        fVar4 = fVar26;
        if (fVar23 <= fVar26) {
          fVar25 = fVar24;
          fVar4 = fVar23;
        }
        fVar23 = fVar4;
        fVar24 = fVar26;
        if (fVar26 <= fVar25) {
          fVar24 = fVar25;
          fVar26 = fVar22;
        }
        fVar22 = fVar26;
      }
      if (fVar21 < fVar22 - fVar23) {
        *param_6 = (int)uVar8;
        uVar7 = uVar8;
        fVar21 = fVar22 - fVar23;
        fVar18 = fVar23;
        fVar20 = fVar22;
      }
    }
  }
  uVar8 = 0;
  fVar19 = (param_8[(uVar7 & 0xffffffff) * 2] + (param_8 + (uVar7 & 0xffffffff) * 2)[1]) * 0.5;
  if (fVar19 <= fVar20) {
    fVar20 = fVar19;
  }
  if (fVar18 <= fVar19) {
    fVar18 = fVar20;
  }
  *param_7 = fVar18;
  uVar10 = param_4 - 1;
  param_3 = param_3 * 8;
  uVar13 = uVar10;
  do {
    plVar9 = *(long **)(param_2 + 0x80);
    lVar16 = param_3 + uVar8 * 8;
    uVar14 = uVar8;
    while( true ) {
      uVar8 = uVar14 + 1;
      iVar6 = (int)uVar7;
      if (uVar13 < uVar14) break;
      pfVar3 = (float *)(*plVar9 + *(long *)(*param_1 + lVar16) * 8);
      if (iVar6 != 0) {
        pfVar3 = pfVar3 + 1;
      }
      if (fVar18 <= *pfVar3) break;
      lVar16 = lVar16 + 8;
      uVar14 = uVar8;
    }
    lVar17 = param_3 + uVar13 * 8;
    uVar15 = uVar13;
    while( true ) {
      uVar13 = uVar15 - 1;
      bVar5 = uVar13 != 0xffffffffffffffff;
      bVar1 = uVar14 <= uVar15;
      if (uVar15 < uVar14 || uVar13 == 0xffffffffffffffff) break;
      pfVar3 = (float *)(*plVar9 + *(long *)(*param_1 + lVar17) * 8);
      if (iVar6 != 0) {
        pfVar3 = pfVar3 + 1;
      }
      if (*pfVar3 < fVar18) {
        bVar1 = true;
        bVar5 = true;
        break;
      }
      lVar17 = lVar17 + -8;
      uVar15 = uVar13;
    }
    uVar15 = uVar14;
    if ((!bVar1) || (!bVar5)) {
      do {
        lVar16 = param_3 + uVar15 * 8;
        while (uVar15 <= uVar10) {
          pfVar3 = (float *)(*plVar9 + *(long *)(*param_1 + lVar16) * 8);
          if (iVar6 != 0) {
            pfVar3 = pfVar3 + 1;
          }
          if (fVar18 < *pfVar3) break;
          lVar16 = lVar16 + 8;
          uVar15 = uVar15 + 1;
        }
        lVar17 = param_3 + uVar10 * 8;
        uVar8 = uVar10;
        while( true ) {
          uVar10 = uVar8 - 1;
          bVar5 = uVar10 != 0xffffffffffffffff;
          bVar1 = uVar15 <= uVar8;
          if (uVar8 < uVar15 || uVar10 == 0xffffffffffffffff) break;
          pfVar3 = (float *)(*plVar9 + *(long *)(*param_1 + lVar17) * 8);
          if (iVar6 != 0) {
            pfVar3 = pfVar3 + 1;
          }
          if (*pfVar3 <= fVar18) {
            bVar1 = true;
            bVar5 = true;
            break;
          }
          lVar17 = lVar17 + -8;
          uVar8 = uVar10;
        }
        if ((!bVar1) || (!bVar5)) {
          if (param_4 >> 1 <= uVar15) {
            uVar15 = param_4 >> 1;
          }
          if (uVar14 <= param_4 >> 1) {
            uVar14 = uVar15;
          }
          *param_5 = uVar14;
          return;
        }
        lVar11 = *param_1;
        uVar12 = *(undefined8 *)(lVar11 + lVar16);
        *(undefined8 *)(lVar11 + lVar16) = *(undefined8 *)(lVar11 + lVar17);
        *(undefined8 *)(lVar11 + lVar17) = uVar12;
        plVar9 = *(long **)(param_2 + 0x80);
        fVar18 = *param_7;
        uVar15 = uVar15 + 1;
      } while( true );
    }
    lVar11 = *param_1;
    uVar12 = *(undefined8 *)(lVar11 + lVar16);
    *(undefined8 *)(lVar11 + lVar16) = *(undefined8 *)(lVar11 + lVar17);
    *(undefined8 *)(lVar11 + lVar17) = uVar12;
    fVar18 = *param_7;
  } while( true );
}



/* Entry: 107380a2c; end: 107380b53;  */

ulong * FUN_107380a2c(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar8 = *param_1;
  uVar7 = uVar8 - 0x20;
  if (uVar8 < 0x20) {
    param_1[4] = param_1[4] + uVar8;
    puVar4 = (ulong *)0x2010;
    _malloc();
    if (puVar4 == (ulong *)0x0) {
      _fwrite(&UNK_10f40af58,0x1b,1,*(undefined8 *)PTR____stderrp_11034bdc8);
      lVar6 = 8;
      ___cxa_allocate_exception();
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      func_0x000107380f9c();
      if (lVar6 == 0) {
        return param_1;
      }
      plVar1 = (long *)(lVar6 + 8);
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 != 0) {
        return param_1;
      }
      func_0x000107380fd8();
      return param_1;
    }
    puVar5 = puVar4 + 2;
    *puVar4 = param_1[1];
    param_1[1] = (ulong)puVar4;
    uVar7 = 0x1fe0;
  }
  else {
    puVar5 = (ulong *)param_1[2];
  }
  *param_1 = uVar7;
  param_1[2] = (ulong)(puVar5 + 4);
  param_1[3] = param_1[3] + 0x20;
  return puVar5;
}



/* Entry: 107380b54; end: 107380b57;  */

void FUN_107380b54(long *param_1)

{
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 107380b58; end: 107380b6b;  */

void FUN_107380b58(void)

{
  func_0x0001005f1a0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107380b6c; end: 107380b9b;  */

void FUN_107380b6c(long *param_1)

{
  __ZNSt3__117__assoc_sub_state4waitEv();
                    /* WARNING: Could not recover jumptable at 0x000107380b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 107380b9c; end: 107380c93;  */

void FUN_107380b9c(long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lStack_30;
  undefined1 uStack_28;
  
  pcVar3 = *(code **)(param_1 + 0x98);
  plVar1 = (long *)(*(long *)(param_1 + 0xa8) + ((long)*(ulong *)(param_1 + 0xa0) >> 1));
  if ((*(ulong *)(param_1 + 0xa0) & 1) != 0) {
    pcVar3 = *(code **)(*plVar1 + ((ulong)pcVar3 & 0xffffffff));
  }
  (*pcVar3)(plVar1,*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8),
            *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
            *(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8));
  lStack_30 = param_1 + 0x18;
  uStack_28 = 1;
  __ZNSt3__15mutex4lockEv();
  lVar2 = param_1;
  func_0x0001005ee0f0();
  if ((int)lVar2 == 0) {
    *(long **)(param_1 + 0x90) = plVar1;
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 5;
    __ZNSt3__118condition_variable10notify_allEv(param_1 + 0x58);
    func_0x0001000df5a0(&lStack_30);
    return;
  }
  func_0x00010538ceb0(2);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x107380c3c);
  (*pcVar3)();
}



/* Entry: 107380c94; end: 107380cfb;  */

undefined8 FUN_107380c94(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puStack_28;
  
  puStack_28 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  *param_1 = 0;
  func_0x000100491558();
  pcVar1 = (code *)param_1[1];
  if ((param_1[2] & 1) != 0) {
    pcVar1 = *(code **)(*(long *)(param_1[3] + ((long)param_1[2] >> 1)) +
                       ((ulong)pcVar1 & 0xffffffff));
  }
  (*pcVar1)();
  FUN_107380cfc(&puStack_28);
  return 0;
}



/* Entry: 107380cfc; end: 107380d27;  */

void FUN_107380cfc(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107380f9c();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    func_0x0001004895c8();
    __ZdlPv();
  }
  return;
}



/* Entry: 107380d28; end: 107380d43;  */

void FUN_107380d28(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    __ZNSt3__115__thread_structD1Ev(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107380d44; end: 107380f47;  */

void FUN_107380d44(undefined8 param_1,long *param_2,float *param_3,long param_4,ulong *param_5,
                  long param_6)

{
  float *pfVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *extraout_x8;
  ulong *puVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  ulong *puStack_98;
  undefined8 uStack_90;
  
  uVar10 = param_5[2];
  uVar9 = param_5[3];
  if (uVar10 == 0 && uVar9 == 0) {
    fVar12 = *param_3;
    for (uVar9 = *param_5; uVar9 < param_5[1]; uVar9 = uVar9 + 1) {
      uVar10 = *(ulong *)(*param_2 + uVar9 * 8);
      pfVar1 = (float *)(*(long *)param_2[0x13] + (uVar10 & 0xffffffff) * 8);
      fVar13 = 0.0;
      for (lVar4 = 0; lVar4 != 8; lVar4 = lVar4 + 4) {
        pfVar3 = pfVar1;
        if (lVar4 != 0) {
          pfVar3 = pfVar1 + 1;
        }
        fVar11 = *(float *)(param_4 + lVar4) - *pfVar3;
        fVar13 = fVar13 + fVar11 * fVar11;
      }
      if ((fVar13 < fVar12) && (fVar13 < *param_3)) {
        plVar8 = *(long **)(param_3 + 2);
        puVar6 = (ulong *)plVar8[1];
        if (puVar6 < (ulong *)plVar8[2]) {
          *puVar6 = uVar10;
          *(float *)(puVar6 + 1) = fVar13;
          puVar6 = puVar6 + 2;
        }
        else {
          uVar2 = ((long)puVar6 - *plVar8 >> 4) + 1;
          if (uVar2 >> 0x3c != 0) {
            FUN_10737fbb4();
            *extraout_x8 = 0;
            extraout_x8[1] = 0;
            extraout_x8[2] = 0;
            extraout_x8[1] = puStack_98;
            *extraout_x8 = uStack_a0;
            extraout_x8[2] = uStack_90;
            return;
          }
          uVar5 = plVar8[2] - *plVar8;
          uVar7 = (long)uVar5 >> 3;
          if (uVar7 <= uVar2) {
            uVar7 = uVar2;
          }
          if (0x7fffffffffffffef < uVar5) {
            uVar7 = 0xfffffffffffffff;
          }
          func_0x00010737fc40(auStack_a8,uVar7);
          *puStack_98 = uVar10;
          *(float *)(puStack_98 + 1) = fVar13;
          puStack_98 = puStack_98 + 2;
          func_0x00010737fbc0(plVar8,auStack_a8);
          puVar6 = (ulong *)plVar8[1];
          FUN_10737fca0(auStack_a8);
        }
        plVar8[1] = (long)puVar6;
      }
    }
  }
  else {
    lVar4 = (long)(int)*param_5;
    fVar12 = *(float *)(param_4 + lVar4 * 4);
    fVar13 = fVar12 - *(float *)((long)param_5 + 4);
    fVar12 = fVar12 - *(float *)(param_5 + 1);
    fVar11 = fVar13 + fVar12;
    uVar2 = uVar10;
    if (0.0 <= fVar11) {
      uVar2 = uVar9;
    }
    fVar12 = fVar12 * fVar12;
    if (0.0 <= fVar11) {
      fVar12 = fVar13 * fVar13;
    }
    FUN_107380d44(param_1,param_2,param_3,param_4,uVar2);
    fVar13 = *(float *)(param_6 + lVar4 * 4);
    *(float *)(param_6 + lVar4 * 4) = fVar12;
    if (((float)param_1 + fVar12) - fVar13 <= *param_3) {
      if (0.0 <= fVar11) {
        uVar9 = uVar10;
      }
      FUN_107380d44(param_2,param_3,param_4,uVar9,param_6);
    }
    *(float *)(param_6 + lVar4 * 4) = fVar13;
  }
  return;
}



/* Entry: 107380f48; end: 107381037;  */

void FUN_107380f48(undefined8 *param_1)

{
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = in_stack_00000018;
  *param_1 = in_stack_00000010;
  param_1[2] = in_stack_00000020;
  return;
}



/* Entry: 107381038; end: 107381b1b;  */

void FUN_107381038(undefined8 *param_1,undefined **param_2,long *param_3,ulong param_4,
                  undefined8 *param_5)

{
  bool bVar1;
  undefined **ppuVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 in_ZR;
  int iVar5;
  uint uVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined ***pppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 extraout_x8;
  uint uVar12;
  float fVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_948 [32];
  undefined1 auStack_928 [8];
  undefined4 uStack_920;
  undefined1 auStack_918 [8];
  undefined4 uStack_910;
  ulong uStack_908;
  undefined4 uStack_900;
  undefined1 auStack_8f8 [8];
  uint uStack_8f0;
  undefined4 auStack_8e8 [12];
  undefined4 uStack_8b8;
  undefined1 auStack_8b0 [8];
  undefined4 uStack_8a8;
  undefined1 auStack_8a0 [8];
  undefined4 uStack_898;
  byte abStack_890 [48];
  undefined4 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined1 auStack_848 [56];
  undefined1 auStack_810 [56];
  undefined1 auStack_7d8 [56];
  long lStack_7a0;
  ulong uStack_798;
  byte bStack_790;
  undefined1 auStack_788 [8];
  undefined1 auStack_780 [8];
  char cStack_778;
  undefined4 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined4 uStack_6f0;
  undefined1 auStack_6e8 [48];
  undefined4 uStack_6b8;
  ulong auStack_6b0 [2];
  char cStack_6a0;
  undefined1 auStack_698 [56];
  undefined1 auStack_660 [8];
  undefined1 auStack_658 [112];
  undefined1 auStack_5e8 [16];
  char cStack_5d8;
  undefined1 auStack_5d0 [16];
  char cStack_5c0;
  undefined1 auStack_5b8 [16];
  char cStack_5a8;
  undefined1 auStack_5a0 [16];
  byte bStack_590;
  undefined1 auStack_588 [56];
  undefined1 auStack_550 [8];
  undefined1 auStack_548 [112];
  undefined1 auStack_4d8 [16];
  char cStack_4c8;
  undefined1 auStack_4c0 [16];
  char cStack_4b0;
  undefined **ppuStack_4a8;
  undefined1 *puStack_4a0;
  ulong uStack_498;
  undefined1 uStack_488;
  uint uStack_3d0;
  uint uStack_3cc;
  undefined1 auStack_3c8 [8];
  byte bStack_3c0;
  undefined1 auStack_358 [8];
  undefined1 auStack_350 [8];
  char cStack_348;
  undefined8 uStack_2e0;
  undefined1 *puStack_2d8;
  ulong uStack_2d0;
  undefined8 *puStack_2c8;
  undefined4 uStack_2b0;
  undefined1 auStack_298 [112];
  undefined1 auStack_228 [64];
  undefined1 auStack_1e8 [112];
  undefined1 auStack_178 [216];
  ulong uStack_a0;
  undefined8 uStack_98;
  
  ppuVar14 = param_2;
  func_0x00010738a2c0();
  plVar7 = param_3 + 1;
  uStack_98 = extraout_x8;
  (**(code **)(*param_3 + 0x30))();
  if (((ulong)plVar7 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
LAB_107381894:
    func_0x00010738a280(uStack_98);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    func_0x00010738a768();
    func_0x00010738a5a0(auStack_4c0);
    fVar13 = SUB84(ppuVar14,0);
    if (cStack_4b0 == '\x01') {
      uStack_898 = 2;
      iVar5 = (int)auStack_4c0;
      func_0x000107766098();
      fVar13 = SUB84(ppuVar14,0);
      if (iVar5 == 0) {
        puStack_4a0 = (undefined1 *)0x0;
        ppuStack_4a8 = (undefined **)0x0;
        uStack_498 = 0;
        puVar8 = auStack_4c0;
        FUN_107324a00(puVar8,&ppuStack_4a8,param_4);
        ppuVar2 = ppuStack_4a8;
        uVar6 = (uint)puVar8;
        bVar1 = (uVar6 >> 8 & 1) != 0;
        if (bVar1) {
          uStack_2e0 = (undefined **)CONCAT71(uStack_2e0._1_7_,(char)puVar8);
        }
        else {
          puStack_2d8 = puStack_4a0;
          uStack_2e0 = ppuStack_4a8;
          uStack_2d0 = uStack_498;
          uStack_498 = 0;
          ppuStack_4a8 = (undefined **)0x0;
          puStack_4a0 = (undefined1 *)0x0;
          uVar6 = 1;
          ppuVar14 = ppuVar2;
        }
        fVar13 = SUB84(ppuVar14,0);
        uVar12 = (uint)!bVar1;
        puStack_2c8 = (undefined8 *)CONCAT44(puStack_2c8._4_4_,uVar12);
        func_0x00010738a894();
        (*(code *)(&PTR_FUN_1109a7cb0)[uVar12])(&ppuStack_4a8,&uStack_2e0);
        abStack_890[0] = (byte)uVar6 & 1;
LAB_107381204:
        uStack_860 = 1;
      }
      else {
        func_0x0001072c9ff4(auStack_358,auStack_8a0);
        func_0x00010738a8ac(&uStack_2e0,auStack_358);
        func_0x0001072c9884(auStack_358);
        uStack_3d0 = uStack_3d0 & 0xffffff00;
        uStack_3cc = uStack_3cc & 0xffffff00;
        ppuStack_4a8 = (undefined **)((ulong)ppuStack_4a8 & 0xffffffffffffff00);
        uStack_488 = 0;
        func_0x00010738a89c(auStack_788,&uStack_2e0,auStack_4c0);
        func_0x0001072c94e0(&ppuStack_4a8);
        if (cStack_778 != '\x01') {
          func_0x00010738aaa8();
          func_0x00010738aadc();
          abStack_890[0] = 1;
          goto LAB_107381204;
        }
        FUN_1073863b0(&ppuStack_4a8,auStack_788,0);
        FUN_1073863ec(abStack_890,&ppuStack_4a8);
        func_0x000107266a84(&ppuStack_4a8);
        func_0x00010738aaa8();
        func_0x00010738aadc();
      }
      func_0x0001072c9884(auStack_8a0);
    }
    else {
      abStack_890[0] = 1;
      uStack_860 = 1;
    }
    func_0x00010738a768();
    func_0x00010738a5a0(auStack_4d8);
    if (cStack_4c8 == '\x01') {
      uStack_8a8 = 3;
      func_0x00010738aa8c(auStack_550,auStack_8b0,auStack_4d8);
      func_0x0001072c9884(auStack_8b0);
    }
    else {
      func_0x000104c2f64c(auStack_588);
      FUN_107339874(auStack_550,auStack_588);
      func_0x000104c2f714(auStack_588);
    }
    func_0x00010738a768();
    func_0x00010738a5a0(auStack_5a0);
    if (bStack_590 == 1) {
      uStack_8f0 = (uint)bStack_590;
      FUN_107381d58(auStack_8e8,auStack_8f8,auStack_5a0,param_4,&UNK_10de5bd9c);
      func_0x0001072c9884(auStack_8f8);
    }
    else {
      auStack_8e8[0] = 0x41700000;
      uStack_8b8 = 1;
    }
    func_0x00010738a768();
    func_0x00010738a5a0(auStack_5b8);
    fVar16 = 0.0;
    if (cStack_5a8 == '\x01') {
      uStack_2e0 = (undefined **)((ulong)uStack_2e0 & 0xffffffff00000000);
      fVar16 = fVar13;
      func_0x00010738a6ec(auStack_5b8);
      fVar13 = fVar16;
    }
    func_0x00010738a768();
    func_0x00010738a5a0(auStack_5d0);
    fVar17 = 16.0;
    if (cStack_5c0 == '\x01') {
      uStack_2e0 = (undefined **)CONCAT44(uStack_2e0._4_4_,0x41800000);
      fVar17 = fVar13;
      func_0x00010738a6ec(auStack_5d0);
      fVar13 = fVar17;
    }
    func_0x00010738a768();
    func_0x00010738a5a0(auStack_5e8);
    if (cStack_5d8 == '\x01') {
      uStack_900 = 3;
      func_0x00010738aba4();
      func_0x000100060b18(&ppuStack_4a8);
      func_0x0001072625b4(&uStack_2e0,&ppuStack_4a8);
      func_0x00010738aa8c(auStack_660,&uStack_908,auStack_5e8);
      func_0x000104c2f714(&uStack_2e0);
      func_0x00010738a894();
      pppuVar9 = (undefined ***)&uStack_908;
      func_0x0001072c9884();
    }
    else {
      func_0x00010738aba4();
      func_0x000100060b18(&uStack_2e0);
      func_0x0001072625b4(auStack_698,&uStack_2e0);
      FUN_107339874(auStack_660,auStack_698);
      func_0x000104c2f714(auStack_698);
      pppuVar9 = (undefined ***)&uStack_2e0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    func_0x00010738a768();
    func_0x00010738a5a0(auStack_6b0);
    fVar18 = 0.0;
    if (cStack_6a0 == '\x01') {
      uStack_2e0 = (undefined **)((ulong)uStack_2e0 & 0xffffffff00000000);
      pppuVar9 = (undefined ***)auStack_6b0;
      fVar18 = fVar13;
      func_0x00010738a6ec();
    }
    uStack_708 = 0;
    uStack_710 = 0;
    uStack_6f8 = 0;
    uStack_700 = 0;
    uStack_718 = 0;
    uStack_6f0 = 0x3f800000;
    uStack_6b8 = 0;
    func_0x00010738a768();
    func_0x00010738a5a0(&lStack_7a0);
    in_ZR = bStack_790 == 1;
    if (!(bool)in_ZR) {
LAB_107381630:
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      puVar10 = (undefined8 *)0x70;
      __Znwm();
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_FUN_1109a7d98;
      func_0x000107310b20(auStack_810,abStack_890);
      FUN_1073244ec(auStack_350,auStack_548);
      func_0x00010727d9cc(auStack_848,auStack_8e8);
      FUN_1073244ec(auStack_3c8,auStack_658);
      FUN_1073833b4(&ppuStack_4a8,auStack_788);
      uVar15 = *param_5;
      puVar10[5] = param_5[1];
      puVar10[4] = uVar15;
      puVar10[3] = &PTR_FUN_1109a7b48;
      *param_5 = 0;
      param_5[1] = 0;
      uStack_858 = 0;
      uStack_850 = 0;
      *(ushort *)(puVar10 + 6) = (ushort)(int)fVar16 | (ushort)((int)fVar17 << 8);
      uStack_2e0._0_4_ = (int)param_2;
      func_0x000107310b20(&puStack_2d8,auStack_810);
      FUN_1073244ec(auStack_298,auStack_350);
      func_0x00010727d9cc(auStack_228,auStack_848);
      FUN_1073244ec(auStack_1e8,auStack_3c8);
      FUN_1073833b4(auStack_178,&ppuStack_4a8);
      puVar11 = (undefined8 *)0x260;
      uStack_a0 = (ulong)(uint)(int)fVar18;
      __Znwm();
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = &PTR_FUN_1109a7c70;
      *(undefined4 *)(puVar11 + 3) = (undefined4)uStack_2e0;
      func_0x000107310b20(puVar11 + 4,&puStack_2d8);
      FUN_1073244ec(puVar11 + 0xc,auStack_298);
      func_0x00010727d9cc(puVar11 + 0x1a,auStack_228);
      FUN_1073244ec(puVar11 + 0x22,auStack_1e8);
      FUN_1073833b4(puVar11 + 0x30,auStack_178);
      puVar11[0x4b] = uStack_a0;
      puVar10[7] = puVar11 + 3;
      puVar10[8] = puVar11;
      func_0x000107383454(&uStack_2e0);
      puVar10[9] = pppuVar9 + 1;
      __ZNSt3__19to_stringEy(&uStack_2e0,lRam00000001136ca2d8);
      func_0x0001004c3cd0(puVar10 + 0xb,&UNK_10f40b05f,&uStack_2e0);
      puVar11 = &uStack_2e0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      lRam00000001136ca2d8 = lRam00000001136ca2d8 + 1;
      func_0x00010785f1f4();
      uStack_2e0 = (undefined **)((ulong)uStack_2e0._4_4_ << 0x20);
      puVar11 = puVar11 + 0x3e;
      func_0x0001072b86c8(puVar11,&uStack_2e0);
      *(int *)(puVar10 + 10) = (int)puVar11;
      func_0x00010724b8b8(&uStack_858);
      FUN_10738374c(&ppuStack_4a8);
      FUN_10732442c(auStack_3c8);
      func_0x000107266a30(auStack_848);
      FUN_10732442c(auStack_350);
      func_0x00010727fc1c(auStack_810);
      *param_1 = puVar10 + 3;
      param_1[1] = puVar10;
      func_0x0001072f5f4c(&lStack_7a0);
      FUN_10738374c(auStack_788);
      func_0x0001072f5f4c(auStack_6b0);
      func_0x00010738a87c(auStack_660);
      func_0x0001072f5f4c(auStack_5e8);
      func_0x0001072f5f4c(auStack_5d0);
      func_0x0001072f5f4c(auStack_5b8);
      func_0x000107266a30(auStack_8e8);
      func_0x0001072f5f4c(auStack_5a0);
      func_0x00010738a87c(auStack_550);
      func_0x0001072f5f4c(auStack_4d8);
      func_0x00010727fc1c(abStack_890);
      func_0x0001072f5f4c(auStack_4c0);
      goto LAB_107381894;
    }
    pppuVar9 = (undefined ***)&uStack_798;
    (**(code **)(lStack_7a0 + 0x30))();
    if ((int)pppuVar9 == 0) goto LAB_107381630;
    if ((bStack_790 & 1) != 0) {
      func_0x00010738aa5c(&ppuStack_4a8);
      uVar3 = uStack_498;
      if ((char)uStack_498 == '\x01') {
        uStack_910 = 3;
        func_0x00010738aa8c(&uStack_2e0,auStack_918,&ppuStack_4a8);
      }
      else {
        func_0x000104c2f64c(auStack_7d8);
        FUN_107339874(&uStack_2e0,auStack_7d8);
      }
      FUN_107383540(auStack_780,&puStack_2d8);
      FUN_10732442c(&puStack_2d8);
      if ((uVar3 & 1) == 0) {
        func_0x000104c2f714(auStack_7d8);
      }
      else {
        func_0x0001072c9884(auStack_918);
      }
      if ((bStack_790 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_1073818cc;
      }
      func_0x00010738aa5c(auStack_358);
      if (cStack_348 == '\x01') {
        uStack_920 = 1;
        uStack_3d0 = 0;
        FUN_107381d58(&uStack_2e0,auStack_928,auStack_358,param_4,&uStack_3d0);
      }
      else {
        uStack_2e0 = (undefined **)((ulong)uStack_2e0 & 0xffffffff00000000);
        uStack_2b0 = 1;
      }
      func_0x00010727df88(auStack_6e8,&uStack_2e0);
      func_0x000107266a30(&uStack_2e0);
      if (cStack_348 != '\0') {
        func_0x0001072c9884(auStack_928);
      }
      if ((bStack_790 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_1073818cc;
      }
      func_0x00010738aa5c(&uStack_3d0);
      in_ZR = bStack_3c0 == 1;
      if ((bool)in_ZR) {
        iVar5 = (int)auStack_3c8;
        (**(code **)(CONCAT44(uStack_3cc,uStack_3d0) + 0x30))();
        if (iVar5 != 0) {
          if ((bStack_3c0 & 1) == 0) {
            func_0x000104bdc2c8();
            goto LAB_1073818cc;
          }
          puStack_2d8 = auStack_788;
          uStack_2e0 = &PTR_DAT_1109a7cf0;
          puStack_2c8 = &uStack_2e0;
          uStack_2d0 = param_4;
          (**(code **)(CONCAT44(uStack_3cc,uStack_3d0) + 0x40))(auStack_948,auStack_3c8,&uStack_2e0)
          ;
          FUN_1073249ac(auStack_948);
          FUN_1073249cc(&uStack_2e0);
        }
      }
      func_0x0001072f5f4c(&uStack_3d0);
      func_0x0001072f5f4c(auStack_358);
      pppuVar9 = &ppuStack_4a8;
      func_0x0001072f5f4c();
      goto LAB_107381630;
    }
  }
  func_0x000104bdc2c8();
LAB_1073818cc:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1073818d0);
  (*pcVar4)();
}



/* Entry: 107381b1c; end: 107381d57;  */

void FUN_107381b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 auStack_350 [48];
  undefined1 auStack_320 [32];
  undefined1 uStack_300;
  undefined1 uStack_2f8;
  undefined1 uStack_2f4;
  undefined1 auStack_2f0 [16];
  char cStack_2e0;
  undefined1 auStack_2d8 [16];
  undefined1 auStack_2c8 [88];
  undefined1 auStack_228 [4];
  undefined1 uStack_224;
  undefined1 auStack_220 [16];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [56];
  undefined1 auStack_1c0 [56];
  undefined4 auStack_188 [14];
  undefined1 uStack_150;
  undefined1 auStack_148 [104];
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  uint uStack_a0;
  undefined1 auStack_88 [32];
  undefined1 uStack_68;
  char cStack_50;
  undefined8 uStack_48;
  
  puVar3 = param_4;
  puVar7 = param_5;
  func_0x00010738a2c0();
  puVar6 = puVar3;
  uStack_48 = extraout_x8;
  func_0x000107766098();
  uVar8 = (undefined4)param_1;
  if ((int)puVar3 == 0) {
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    FUN_1073238e4(auStack_88,param_4,&uStack_210,param_5);
    uVar9 = uStack_210;
    if (cStack_50 != '\x01') {
      uStack_d0 = uStack_208;
      uStack_d8 = uStack_210;
      uStack_c8 = uStack_200;
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_210 = 0;
      puVar6 = param_5;
    }
    else {
      func_0x000104c2fe00(&uStack_d8,auStack_88);
      puVar6 = param_5;
      uVar9 = param_1;
    }
    uVar8 = (undefined4)uVar9;
    uStack_a0 = (uint)(cStack_50 != '\x01');
    func_0x00010724b3d8(auStack_88);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_210);
    puVar1 = &uStack_d8;
    if (uStack_a0 != 0) {
      puVar1 = param_6;
    }
    func_0x000104c2fe00(auStack_1c0,puVar1);
    uVar2 = uStack_a0 == 0xffffffff;
    if (!(bool)uVar2) {
      (*(code *)(&PTR_FUN_1109a7cc0)[uStack_a0])(auStack_88,&uStack_d8);
    }
    puVar5 = auStack_1c0;
    FUN_107339874(param_2);
  }
  else {
    func_0x0001072c9ff4(auStack_220,param_3);
    func_0x00010738a8ac(auStack_e0,auStack_220);
    func_0x0001072c9884(auStack_220);
    auStack_228[0] = 0;
    uStack_224 = 0;
    auStack_88[0] = 0;
    uStack_68 = 0;
    puVar7 = (undefined4 *)auStack_228;
    func_0x00010738a89c(&uStack_210,auStack_e0,param_4);
    func_0x0001072c94e0(auStack_88);
    uVar2 = (char)uStack_200 == '\x01';
    if ((bool)uVar2) {
      auStack_188[0]._0_1_ = 0;
      uStack_150 = 0;
      puVar6 = auStack_188;
      FUN_107386428(auStack_148,&uStack_210,puVar6);
      puVar5 = auStack_148;
      FUN_10738646c(param_2);
      FUN_107324484(auStack_148);
      func_0x00010724b3d8();
      func_0x00010738a988();
      func_0x00010738a998();
      goto LAB_107381ce0;
    }
    func_0x00010738a988();
    func_0x00010738a998();
    func_0x000104c2fe00(auStack_1f8,param_6);
    puVar5 = auStack_1f8;
    FUN_107339874(param_2);
  }
  func_0x000104c2f714();
LAB_107381ce0:
  func_0x00010738a280(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = auStack_188;
  func_0x00010724b3d8(puVar3);
  func_0x00010738a988();
  func_0x00010738a998();
  func_0x00010738a3dc();
  puVar4 = puVar5;
  func_0x000107766098();
  if ((int)puVar4 == 0) {
    FUN_107381e90(puVar5,puVar6,puVar7);
  }
  else {
    func_0x0001072c9ff4(auStack_2d8,puVar3);
    func_0x00010738a8ac(auStack_2c8,auStack_2d8);
    func_0x0001072c9884(auStack_2d8);
    uStack_2f8 = 0;
    uStack_2f4 = 0;
    auStack_320[0] = 0;
    uStack_300 = 0;
    func_0x00010738a89c(auStack_2f0,auStack_2c8,puVar5);
    func_0x0001072c94e0(auStack_320);
    if (cStack_2e0 == '\x01') {
      func_0x0001072ca4a8(auStack_350,auStack_2f0,0);
      func_0x0001072ca4f0(extraout_x8_00,auStack_350);
      func_0x000107266a84(auStack_350);
      func_0x00010738aaf0();
      func_0x00010738ab24();
      return;
    }
    func_0x00010738aaf0();
    func_0x00010738ab24();
    uVar8 = *puVar7;
  }
  *extraout_x8_00 = uVar8;
  extraout_x8_00[0xc] = 1;
  return;
}



/* Entry: 107381d58; end: 107381e8f;  */

void FUN_107381d58(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  undefined8 uVar1;
  undefined1 auStack_120 [48];
  undefined1 auStack_f0 [32];
  undefined1 uStack_d0;
  undefined1 uStack_c8;
  undefined1 uStack_c4;
  undefined1 auStack_c0 [16];
  char cStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [88];
  
  uVar1 = param_4;
  func_0x000107766098();
  if ((int)uVar1 == 0) {
    FUN_107381e90(param_4,param_5,param_6);
  }
  else {
    func_0x0001072c9ff4(auStack_a8,param_3);
    func_0x00010738a8ac(auStack_98,auStack_a8);
    func_0x0001072c9884(auStack_a8);
    uStack_c8 = 0;
    uStack_c4 = 0;
    auStack_f0[0] = 0;
    uStack_d0 = 0;
    func_0x00010738a89c(auStack_c0,auStack_98,param_4);
    func_0x0001072c94e0(auStack_f0);
    if (cStack_b0 == '\x01') {
      func_0x0001072ca4a8(auStack_120,auStack_c0,0);
      func_0x0001072ca4f0(param_1,auStack_120);
      func_0x000107266a84(auStack_120);
      func_0x00010738aaf0();
      func_0x00010738ab24();
      return;
    }
    func_0x00010738aaf0();
    func_0x00010738ab24();
    param_2 = *param_6;
  }
  *param_1 = param_2;
  param_1[0xc] = 1;
  return;
}



/* Entry: 107381e90; end: 107381ee3;  */

undefined4 FUN_107381e90(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 auStack_50 [6];
  int iStack_38;
  
  FUN_1073864bc(auStack_50);
  puVar1 = auStack_50;
  if (iStack_38 != 0) {
    puVar1 = param_3;
  }
  uVar2 = *puVar1;
  FUN_107386530(auStack_50);
  return uVar2;
}



/* Entry: 107381ee4; end: 107381f27;  */

undefined8 * FUN_107381ee4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a7b48;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  func_0x000107386354(param_1 + 4);
  func_0x00010724b8b8(param_1 + 1);
  return param_1;
}



/* Entry: 107381f28; end: 107381f2b;  */

undefined8 * FUN_107381f28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a7b48;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  func_0x000107386354(param_1 + 4);
  func_0x00010724b8b8(param_1 + 1);
  return param_1;
}



/* Entry: 107381f2c; end: 107381f3f;  */

void FUN_107381f2c(void)

{
  FUN_107381ee4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107381f40; end: 10738235b;  */

void FUN_107381f40(double param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  long lVar8;
  undefined1 uVar9;
  long lVar10;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x8_01;
  char cVar11;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  char *pcVar12;
  undefined8 *puVar13;
  uint uVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  long *plVar18;
  double dVar19;
  undefined8 *in_register_00005008;
  char acStack_480 [8];
  undefined8 *puStack_478;
  long lStack_470;
  char acStack_468 [8];
  undefined8 *puStack_460;
  long lStack_458;
  double dStack_450;
  undefined8 *puStack_448;
  long lStack_440;
  undefined8 *puStack_430;
  long lStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined4 uStack_408;
  undefined **ppuStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3d8;
  undefined1 uStack_3d4;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 auStack_3a0 [32];
  undefined1 auStack_380 [32];
  undefined1 auStack_360 [208];
  char *pcStack_290;
  char *pcStack_288;
  long lStack_280;
  undefined1 auStack_188 [264];
  undefined8 uStack_80;
  
  func_0x00010738a8c4();
  dVar19 = param_1;
  func_0x00010738a2c0();
  uStack_420 = CONCAT44(uStack_420._4_4_,0x15e);
  uStack_408 = 0;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  ppuStack_400 = &PTR_DAT_110996720;
  uStack_3f8 = 0;
  uStack_3e0 = 0x15e;
  uStack_3d8 = 0;
  uStack_3d4 = 1;
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3d0 = 0;
  uStack_80 = extraout_x8;
  func_0x00010738a88c(&pcStack_290,&uStack_420);
  FUN_10743d7bc(auStack_188,&pcStack_290);
  func_0x000107288cd8(&pcStack_290);
  func_0x000107262330(&uStack_420);
  FUN_10738235c(*(undefined8 *)(param_2 + 0x30),0x15e);
  uStack_420 = 0;
  uStack_418 = 0;
  uStack_410 = 0;
  puVar16 = (undefined8 *)param_3[1];
  for (puVar13 = (undefined8 *)*param_3; puVar13 != puVar16; puVar13 = puVar13 + 2) {
    if (((int *)*puVar13 != (int *)0x0) && (*(int *)*puVar13 == 6)) {
      FUN_1073823b4(puVar13,param_2 + 0x20,&uStack_420);
    }
  }
  uVar2 = (uint)*(byte *)(param_2 + 0x18);
  if ((uint)*(byte *)(param_2 + 0x18) <= ((uint)param_4 & 0xff)) {
    uVar2 = (uint)param_4 & 0xff;
  }
  uVar14 = (uint)((ulong)param_4 >> 8);
  uVar3 = (uint)*(byte *)(param_2 + 0x19);
  if ((uVar14 & 0xff) <= (uint)*(byte *)(param_2 + 0x19)) {
    uVar3 = uVar14 & 0xff;
  }
  pcStack_288 = (char *)0x1;
  lVar10 = 0x160;
  __Znwm();
  plVar18 = (long *)(lVar10 + 8);
  *plVar18 = 0;
  *(undefined8 *)(lVar10 + 0x10) = 0;
  lStack_280 = lVar10;
  func_0x00010738ab7c(&PTR_FUN_1109a7de8);
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010738a4c4();
    } while (extraout_w10 != 0);
  }
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  dStack_450 = dVar19;
  puStack_448 = in_register_00005008;
  FUN_107386f50(puVar13);
  func_0x00010738a884();
  *(undefined8 *)(lVar10 + 0x138) = uStack_418;
  *(undefined8 *)(lVar10 + 0x130) = uStack_420;
  *(undefined8 *)(lVar10 + 0x140) = uStack_410;
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_420 = 0;
  FUN_10735ca10(lVar10 + 0x148,param_3);
  func_0x000107386354(&uStack_3b0);
  lStack_280 = 0;
  puStack_430 = puVar13;
  lStack_428 = lVar10;
  FUN_107386ed4(&pcStack_290);
  iVar6 = uVar2 - uVar3;
  iVar1 = -iVar6;
  if (-1 < iVar6) {
    iVar1 = iVar6;
  }
  func_0x000100291d50(&pcStack_290,iVar1);
  cVar11 = '\0';
  for (pcVar12 = pcStack_290; pcVar12 != pcStack_288; pcVar12 = pcVar12 + 1) {
    *pcVar12 = cVar11;
    cVar11 = cVar11 + '\x01';
  }
  dStack_450 = (double)CONCAT71(dStack_450._1_7_,(char)(int)param_1);
  pcVar12 = pcStack_290;
  if (pcStack_290 != pcStack_288) {
    FUN_107383d5c(pcStack_290,pcStack_288,&dStack_450,
                  LZCOUNT((long)pcStack_288 - (long)pcStack_290) << 1 ^ 0x7e,1);
    pcVar12 = pcStack_290;
  }
  pcVar7 = pcStack_288;
  func_0x00010738ab90();
  for (; uVar9 = pcVar12 == pcVar7, !(bool)uVar9; pcVar12 = pcVar12 + 1) {
    cVar11 = *pcVar12;
    dStack_450 = (double)CONCAT71(dStack_450._1_7_,cVar11);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar15 = *(long **)(param_2 + 8);
    puVar16 = puVar13;
    lVar8 = lVar10;
    puStack_448 = puVar13;
    lStack_440 = lVar10;
    if (*(int *)(param_2 + 0x38) == 0) {
      do {
        lStack_470 = lVar8;
        puStack_478 = puVar16;
        acStack_480[0] = cVar11;
        func_0x00010738a6c4();
        cVar11 = acStack_480[0];
        puVar16 = puStack_478;
        lVar8 = lStack_470;
      } while (extraout_w9_00 != 0);
      FUN_1073825f0(auStack_3a0,acStack_480);
      puVar17 = auStack_3a0;
      (**(code **)(*plVar15 + 0x10))(plVar15,auStack_3a0);
      puVar16 = extraout_x8_01;
    }
    else {
      do {
        lStack_458 = lVar8;
        puStack_460 = puVar16;
        acStack_468[0] = cVar11;
        func_0x00010738a6c4();
        cVar11 = acStack_468[0];
        puVar16 = puStack_460;
        lVar8 = lStack_458;
      } while (extraout_w9 != 0);
      FUN_1073825f0(auStack_380,acStack_468);
      func_0x000107313224(auStack_360,auStack_380,*(undefined4 *)(param_2 + 0x38));
      (**(code **)(*plVar15 + 0x18))(plVar15,auStack_360);
      func_0x000107273efc(auStack_360);
      puVar17 = auStack_380;
      puVar16 = param_3;
    }
    func_0x0001006393ec(puVar17);
    func_0x000107382638(puVar16);
    func_0x000107382638(&puStack_448);
  }
  func_0x000100100fec(&pcStack_290);
  func_0x000107382638(&puStack_430);
  FUN_1073847cc(&uStack_420);
  FUN_10743d7e4();
  func_0x00010738a280(uStack_80);
  if (!(bool)uVar9) {
    ___stack_chk_fail();
    func_0x000107382638(&puStack_430);
    FUN_1073847cc(&uStack_420);
    FUN_10743d7e4();
    func_0x00010738a3dc();
    func_0x00010738a4fc();
    FUN_10743fa9c();
    func_0x00010738a828();
    return;
  }
  return;
}



/* Entry: 10738235c; end: 1073823b3;  */

void FUN_10738235c(void)

{
  func_0x00010738a4fc();
  FUN_10743fa9c();
  func_0x00010738a828();
  return;
}



/* Entry: 1073823b4; end: 1073825ef;  */

void FUN_1073823b4(undefined4 param_1,undefined4 param_2,long *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  int iVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar3;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  undefined4 uVar4;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  undefined1 auStack_358 [56];
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 auStack_310 [14];
  undefined1 auStack_2d8 [400];
  undefined1 auStack_148 [240];
  undefined8 uStack_58;
  
  plVar2 = param_3;
  func_0x00010738a2c0();
  uStack_58 = extraout_x8;
  func_0x0001072692d4(auStack_148,*plVar2);
  func_0x000107751284(auStack_2d8);
  func_0x0001077514d8(auStack_2d8,auStack_148);
  func_0x00010738a8fc(*param_4);
  auStack_310[0] = CONCAT31(auStack_310[0]._1_3_,1);
  lVar3 = extraout_x8_00 + 8;
  FUN_1073837ac(lVar3,auStack_2d8,&lStack_370,auStack_310);
  func_0x00010738a8b4();
  if ((int)lVar3 != 0) {
    func_0x00010738a8fc(*param_4);
    auStack_310[0] = 0;
    func_0x0001073837dc(extraout_x8_01 + 0x208,auStack_2d8,&lStack_370,auStack_310);
    uVar4 = param_1;
    func_0x00010738a8b4();
    func_0x00010738a8fc();
    FUN_10738380c(auStack_310,extraout_x9 + 0x40,auStack_2d8,&lStack_370,0x1138369c0);
    func_0x00010738a8b4();
    iVar1 = (int)auStack_310;
    func_0x000104c2d614();
    uStack_318 = param_1;
    if (iVar1 == 0) {
      lVar3 = *param_3;
      lStack_368 = param_3[1];
      lStack_370 = lVar3;
      if (lStack_368 != 0) {
        do {
          func_0x00010738a4c4();
        } while (extraout_w10_00 != 0);
        lVar3 = *param_3;
      }
      lVar3 = lVar3 + 0x30;
      FUN_10738386c();
      lStack_360 = lVar3;
      func_0x000104c2fe00(auStack_358,auStack_310);
      func_0x000107383898(*param_3);
      uStack_320 = uVar4;
      uStack_31c = param_2;
      func_0x00010738ab18();
    }
    else {
      lVar3 = *param_3;
      lStack_368 = param_3[1];
      lStack_370 = lVar3;
      if (lStack_368 != 0) {
        do {
          func_0x00010738a4c4();
        } while (extraout_w10 != 0);
        lVar3 = *param_3;
      }
      lVar3 = lVar3 + 0x30;
      FUN_10738386c();
      lStack_360 = lVar3;
      func_0x000104c2fe00(auStack_358,0x1138369c0);
      func_0x000107383898(*param_3);
      uStack_320 = uVar4;
      uStack_31c = param_2;
      func_0x00010738ab18();
    }
    func_0x000107383d34(&lStack_370);
    func_0x000104c2f714(auStack_310);
  }
  func_0x000107267da8(auStack_2d8);
  func_0x000107269e60(auStack_148);
  func_0x00010738a280(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107383d34(&lStack_370);
    func_0x000104c2f714(auStack_310);
    func_0x000107267da8(auStack_2d8);
    func_0x000107269e60(auStack_148);
    do {
      func_0x00010738a3dc();
    } while( true );
  }
  return;
}



/* Entry: 1073825f0; end: 10738265b;  */

void FUN_1073825f0(undefined8 *param_1)

{
  undefined1 *unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010738a440();
  param_1[3] = 0;
  func_0x00010738a4ec();
  *param_1 = &PTR_FUN_1109a7e38;
  *(undefined1 *)(param_1 + 1) = *unaff_x19;
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  param_1[3] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[2] = uVar1;
  *(undefined8 *)(unaff_x19 + 8) = 0;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *(undefined8 **)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 10738265c; end: 1073826e7;  */

void FUN_10738265c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [24];
  undefined1 *puStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(*param_2 + 0x20))(auStack_78);
  puVar1 = auStack_78;
  func_0x0001005d466c();
  uStack_50 = (ulong)*(byte *)(param_2 + 3);
  uStack_40 = (ulong)*(byte *)((long)param_2 + 0x19);
  uStack_30 = (ulong)*(uint *)(param_2 + 7);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  puStack_60 = puVar1;
  uStack_58 = param_3;
  func_0x0001003a91d4(&UNK_10f40b021);
  func_0x0001003a9204(param_1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  return;
}



/* Entry: 1073826e8; end: 107382bb3;  */

undefined8 *
FUN_1073826e8(double param_1,long param_2,long *param_3,undefined8 param_4,long *param_5,
             undefined8 param_6)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  double *pdVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  long lVar9;
  long extraout_x8_00;
  double *extraout_x8_01;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x9;
  int extraout_w10;
  long extraout_x10;
  long lVar10;
  double *pdVar11;
  long *plVar12;
  double *pdVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  double *pdVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 in_register_00005008;
  double dStack_4b0;
  undefined8 uStack_4a8;
  undefined8 *puStack_4a0;
  double dStack_498;
  undefined8 uStack_490;
  undefined8 *puStack_488;
  double dStack_480;
  undefined8 uStack_478;
  undefined8 *puStack_470;
  undefined8 uStack_460;
  undefined8 *puStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined4 auStack_438 [6];
  undefined4 uStack_420;
  undefined **ppuStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined4 uStack_3f0;
  undefined1 uStack_3ec;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 auStack_3b8 [32];
  undefined1 auStack_398 [32];
  undefined1 auStack_378 [208];
  undefined **ppuStack_2a8;
  double **ppdStack_2a0;
  undefined8 uStack_298;
  undefined ***pppuStack_290;
  undefined8 auStack_1a0 [33];
  double *pdStack_98;
  double *pdStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  
  func_0x00010738a8c4();
  dVar18 = param_1;
  func_0x00010738a2c0();
  auStack_438[0] = 0x15f;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_400 = 0;
  ppuStack_418 = &PTR_DAT_110996720;
  uStack_410 = 0;
  uStack_3f8 = 0x15f;
  uStack_3f0 = 0;
  uStack_3ec = 1;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_3e8 = 0;
  uStack_80 = extraout_x8;
  func_0x00010738a88c(&ppuStack_2a8,auStack_438);
  FUN_10743d7bc(auStack_1a0,&ppuStack_2a8);
  func_0x000107288cd8(&ppuStack_2a8);
  func_0x000107262330(auStack_438);
  FUN_10738235c(*(undefined8 *)(param_2 + 0x30),0x15f);
  lVar10 = *param_5;
  lVar1 = param_5[1];
  lVar9 = lVar1 - lVar10;
  if (lVar9 == 0x188) {
    lVar9 = 8;
  }
  else {
    lVar9 = lVar9 / 0x38;
    lVar9 = (lVar9 + -1) / 7 + lVar9;
  }
  func_0x00010726207c(auStack_438,lVar9,&pdStack_98,&uStack_450,&dStack_480);
  for (; lVar10 != lVar1; lVar10 = lVar10 + 0x38) {
    func_0x0001072628ec(&ppuStack_2a8,auStack_438,lVar10);
  }
  uStack_450 = 0;
  uStack_448 = 0;
  uStack_440 = 0;
  uVar19 = *(undefined8 *)(*param_3 + 8);
  uVar15 = *(undefined8 *)(param_2 + 0x30);
  pdStack_90 = (double *)0x1;
  puVar6 = (undefined8 *)0x170;
  __Znwm();
  plVar16 = puVar6 + 1;
  *plVar16 = 0;
  puVar6[2] = 0;
  puStack_88 = puVar6;
  func_0x00010738ab7c(&PTR_FUN_1109a7fd8);
  lVar10 = 0;
  if (extraout_x10 != 0) {
    lVar10 = extraout_x9 / extraout_x10;
  }
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010738a4c4();
    } while (extraout_w10 != 0);
  }
  FUN_10735f468(&ppuStack_2a8,param_6);
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  dStack_480 = dVar18;
  uStack_478 = in_register_00005008;
  FUN_107386f50(uVar19,lVar10,&dStack_480,&ppuStack_2a8,*(undefined2 *)(param_2 + 0x18),uVar15);
  func_0x00010738a884();
  FUN_10735abf0(puVar6 + 0x26,param_4);
  func_0x000107261fa8(puVar6 + 0x2a,auStack_438);
  FUN_10735eed0(&ppuStack_2a8);
  func_0x000107386354(&uStack_3c8);
  puStack_88 = (undefined8 *)0x0;
  uStack_460 = uVar19;
  puStack_458 = puVar6;
  FUN_107389a18(&pdStack_98);
  pdStack_90 = (double *)0x0;
  puStack_88 = (undefined8 *)0x0;
  pdStack_98 = (double *)0x0;
  ppuStack_2a8 = &PTR_FUN_1109a7bf0;
  ppdStack_2a0 = &pdStack_98;
  pppuStack_290 = &ppuStack_2a8;
  FUN_10736cb80(*param_3,&ppuStack_2a8);
  FUN_10735e63c(&ppuStack_2a8);
  ppuStack_2a8 = (undefined **)CONCAT71(ppuStack_2a8._1_7_,(char)(int)param_1);
  if (pdStack_98 != pdStack_90) {
    FUN_107384978(pdStack_98,pdStack_90,&ppuStack_2a8,
                  LZCOUNT((long)pdStack_90 - (long)pdStack_98 >> 3) << 1 ^ 0x7e,1);
  }
  pdVar13 = pdStack_90;
  ppdStack_2a0 = (double **)0x0;
  ppuStack_2a8 = (undefined **)0x0;
  uStack_298 = 0;
  for (pdVar11 = pdStack_98; pdVar4 = pdStack_90, pdVar17 = pdStack_98, pdVar11 != pdVar13;
      pdVar11 = pdVar11 + 1) {
    dStack_480 = (double)CONCAT71(dStack_480._1_7_,*(undefined1 *)*pdVar11);
    func_0x0001001e79f8(&ppuStack_2a8,&dStack_480);
  }
  func_0x00010738ab90();
  for (; uVar5 = pdVar17 == pdVar4, !(bool)uVar5; pdVar17 = pdVar17 + 1) {
    dStack_480 = *pdVar17;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = *plVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar12 = *(long **)(param_2 + 8);
    dVar18 = dStack_480;
    uVar15 = uVar19;
    puVar7 = puVar6;
    uStack_478 = uVar19;
    puStack_470 = puVar6;
    if (*(int *)(param_2 + 0x38) == 0) {
      do {
        puStack_4a0 = puVar7;
        uStack_4a8 = uVar15;
        dStack_4b0 = dVar18;
        func_0x00010738a6c4();
        dVar18 = dStack_4b0;
        uVar15 = uStack_4a8;
        puVar7 = puStack_4a0;
      } while (extraout_w9_00 != 0);
      FUN_107382bb4(auStack_3b8,&dStack_4b0);
      puVar14 = auStack_3b8;
      (**(code **)(*plVar12 + 0x10))(plVar12,auStack_3b8);
      pdVar13 = extraout_x8_01;
    }
    else {
      do {
        puStack_488 = puVar7;
        uStack_490 = uVar15;
        dStack_498 = dVar18;
        func_0x00010738a6c4();
        dVar18 = dStack_498;
        uVar15 = uStack_490;
        puVar7 = puStack_488;
      } while (extraout_w9 != 0);
      FUN_107382bb4(auStack_398,&dStack_498);
      func_0x000107313224(auStack_378,auStack_398,*(undefined4 *)(param_2 + 0x38));
      (**(code **)(*plVar12 + 0x18))(plVar12,auStack_378);
      func_0x000107273efc(auStack_378);
      puVar14 = auStack_398;
      pdVar13 = pdVar11;
    }
    func_0x0001006393ec(puVar14);
    func_0x000107382bfc(pdVar13);
    func_0x000107382bfc(&uStack_478);
  }
  func_0x000100100fec(&ppuStack_2a8);
  FUN_107385538(&pdStack_98);
  func_0x000107382bfc(&uStack_460);
  FUN_107385564(&uStack_450);
  func_0x000107261dac(auStack_438);
  puVar7 = auStack_1a0;
  FUN_10743d7e4();
  func_0x00010738a280(uStack_80);
  if ((bool)uVar5) {
    return puVar7;
  }
  ___stack_chk_fail();
  FUN_10735e63c(&ppuStack_2a8);
  FUN_107385538(&pdStack_98);
  func_0x000107382bfc(&uStack_460);
  FUN_107385564(&uStack_450);
  func_0x000107261dac(auStack_438);
  puVar8 = auStack_1a0;
  FUN_10743d7e4();
  func_0x00010738a3dc();
  func_0x00010738a440();
  puVar8[3] = 0;
  func_0x00010738a4ec();
  *puVar8 = &PTR_FUN_1109a8028;
  uVar19 = *puVar7;
  puVar8[2] = puVar7[1];
  puVar8[1] = uVar19;
  puVar8[3] = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar6[3] = puVar8;
  return puVar6;
}



/* Entry: 107382bb4; end: 107382c1f;  */

void FUN_107382bb4(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010738a440();
  param_1[3] = 0;
  func_0x00010738a4ec();
  *param_1 = &PTR_FUN_1109a8028;
  uVar1 = *unaff_x19;
  param_1[2] = unaff_x19[1];
  param_1[1] = uVar1;
  param_1[3] = unaff_x19[2];
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *(undefined8 **)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 107382c20; end: 1073833a7;  */

void FUN_107382c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  long *param_5)

{
  long *plVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  long **pplVar6;
  uint *puVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar8;
  long *unaff_x19;
  long *plVar9;
  long lVar10;
  long *in_stack_fffffffffffffa30;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined1 auStack_5b0 [24];
  long *plStack_598;
  long *plStack_590;
  undefined8 uStack_580;
  undefined8 uStack_578;
  int *apiStack_570 [2];
  ulong uStack_560;
  undefined8 uStack_558;
  double adStack_540 [2];
  undefined1 auStack_530 [64];
  uint auStack_4f0 [2];
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  ulong uStack_4b0;
  undefined8 uStack_4a8;
  undefined4 uStack_450;
  undefined1 auStack_448 [168];
  undefined1 auStack_3a0 [168];
  undefined1 auStack_2f8 [8];
  undefined1 auStack_2f0 [8];
  undefined8 *puStack_2e8;
  undefined1 auStack_1f0 [136];
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_100;
  undefined1 auStack_f8 [56];
  undefined4 auStack_c0 [16];
  undefined8 uStack_80;
  
  func_0x00010738a8c4();
  func_0x00010738ac0c();
  func_0x00010738a2c0();
  uStack_80 = extraout_x8;
  FUN_1073855cc(auStack_5b0);
  if (plStack_598 == plStack_590) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    uVar5 = 1;
  }
  else {
    FUN_10736c0f0();
    FUN_10735d6a4(auStack_2f8,1);
    puStack_2e8[2] = 0;
    *puStack_2e8 = &PTR_FUN_1109a4be8;
    puStack_2e8[1] = 0;
    auStack_4f0[0] = 6;
    uStack_4e8 = param_1;
    uStack_4e0 = param_2;
    FUN_107386104(puStack_2e8 + 3,auStack_4f0);
    func_0x000104c3365c(auStack_4f0);
    puVar4 = puStack_2e8;
    puStack_2e8 = (undefined8 *)0x0;
    *unaff_x19 = (long)(puVar4 + 3);
    unaff_x19[1] = (long)puVar4;
    func_0x00010735d768(auStack_2f8);
    uVar8 = (long)plStack_590 - (long)plStack_598 >> 5;
    uVar2 = *(ulong *)(*param_5 + 0x240);
    if (uVar8 <= *(ulong *)(*param_5 + 0x240) - 1) {
      uVar2 = uVar8;
    }
    plVar1 = plStack_598 + uVar2 * 4;
    uStack_5c8 = 0;
    uStack_5c0 = 0;
    uStack_5b8 = 0;
    for (plVar9 = plStack_598; plVar9 != plVar1; plVar9 = plVar9 + 4) {
      FUN_1073558a4(apiStack_570,plVar9 + 1);
      if (apiStack_570[0] == (int *)0x0) {
        uStack_100 = 0;
      }
      else {
        func_0x00010726acf0(&uStack_580);
        func_0x000100060964(auStack_c0,"id");
        func_0x00010726236c(auStack_2f8,apiStack_570[0] + 0xc);
        func_0x000107262398(auStack_530,auStack_2f8,0x1138369c0);
        func_0x0001072964ec(auStack_4f0,auStack_c0,auStack_530);
        func_0x00010738aaf8(auStack_f8);
        func_0x00010738a7dc();
        func_0x00010738a724();
        func_0x00010724b3d8(auStack_2f8);
        func_0x00010738a604();
        piVar3 = apiStack_570[0];
        if (*apiStack_570[0] == 6) {
          func_0x000100060964(auStack_c0,&DAT_10f3005c3);
          func_0x000100060964(auStack_530,"lat");
          FUN_107386144(auStack_4f0,auStack_530,piVar3 + 4);
          func_0x000100060964(auStack_f8,"lng");
          FUN_107386144(auStack_448,auStack_f8,piVar3 + 2);
          func_0x0001072965a0(adStack_540,auStack_4f0,2);
          func_0x000107296a74(auStack_2f8,auStack_c0,adStack_540);
          func_0x00010729601c(&uStack_560,&uStack_580,auStack_2f8);
          func_0x00010729651c(auStack_2f8);
          func_0x00010726b264(adStack_540);
          lVar10 = 0xa8;
          do {
            func_0x00010729651c((long)auStack_4f0 + lVar10);
            lVar10 = lVar10 + -0xa8;
          } while (lVar10 != -0xa8);
          func_0x000104c2f714(auStack_f8);
          func_0x00010738a724();
          func_0x00010738a604();
        }
        func_0x000100060964(auStack_c0,&DAT_10f2dd3dd);
        func_0x0001077772a8(auStack_2f8,apiStack_570[0] + 8,auStack_f8);
        func_0x0001072deec0(auStack_4f0,auStack_c0,auStack_2f8);
        func_0x00010738aaf8(auStack_530);
        func_0x00010738a7dc();
        func_0x00010726af18(auStack_2f0);
        func_0x00010738a604();
        uStack_158 = uStack_578;
        uStack_160 = uStack_580;
        uStack_580 = 0;
        uStack_578 = 0;
        uStack_100 = 9;
        func_0x00010726b264(&uStack_580);
      }
      func_0x00010735ce54(apiStack_570);
      func_0x000107277668(&uStack_5c8,auStack_168);
      func_0x00010726af18(&uStack_160);
    }
    func_0x00010738a710();
    uVar8 = uVar8 + extraout_x8_00;
    for (plVar9 = plStack_598; plVar9 != plStack_590; plVar9 = plVar9 + 4) {
      uVar8 = extraout_x8_00 + uVar8 * 0x1000 + (uVar8 >> 4) + *plVar9 ^ uVar8;
    }
    func_0x000107751284(auStack_2f8);
    func_0x000100060964(auStack_168,&DAT_10f2dd3d4);
    func_0x000107277aa4(&uStack_560,&uStack_5c8);
    func_0x000104c318bc(auStack_4f0,auStack_168);
    uStack_4a8 = uStack_558;
    uStack_4b0 = uStack_560;
    uStack_560 = 0;
    uStack_558 = 0;
    uStack_450 = 8;
    func_0x000100060964(auStack_c0,&UNK_10f40b087);
    adStack_540[0] = (double)(uVar8 & 0x1fffffffffffff);
    func_0x0001072ddad8(auStack_448,auStack_c0,adStack_540);
    func_0x000100060964(auStack_530,&UNK_10f40b098);
    apiStack_570[0] = (int *)(double)(ulong)((long)plStack_590 - (long)plStack_598 >> 5);
    func_0x0001072ddad8(auStack_3a0,auStack_530,apiStack_570);
    func_0x0001072965a0(auStack_f8,auStack_4f0,3);
    func_0x000107295f10(auStack_1f0,auStack_f8);
    func_0x00010726b264(auStack_f8);
    lVar10 = 0x150;
    do {
      func_0x00010729651c((long)auStack_4f0 + lVar10);
      lVar10 = lVar10 + -0xa8;
      uVar5 = lVar10 == -0xa8;
    } while (!(bool)uVar5);
    func_0x00010738a724();
    func_0x00010738a604();
    func_0x00010726b188(&uStack_560);
    func_0x000104c2f714(auStack_168);
    auStack_168[0] = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x000107383a64(auStack_530,*param_5 + 0x168,auStack_2f8,auStack_168);
    func_0x0001072e7640(auStack_c0,auStack_530,0x1138369c0);
    lVar10 = *unaff_x19;
    func_0x0001072d8a90(auStack_4f0,auStack_c0);
    puVar7 = auStack_4f0;
    func_0x000104c317ec(lVar10 + 0x30);
    func_0x000104c319e0(auStack_4f0);
    func_0x00010738a604();
    plVar9 = (long *)(*param_5 + 0x1f0);
    while( true ) {
      param_4 = (int)puVar7;
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) break;
      if (*(int *)(plVar9 + 0x13) == 1) {
        func_0x000107297b6c(auStack_4f0,plVar9 + 5);
      }
      else if (*(int *)(plVar9 + 0x13) == 0) {
        auStack_4f0[0] = auStack_4f0[0] & 0xffffff00;
        uStack_4b0 = uStack_4b0 & 0xffffffffffffff00;
      }
      else {
        FUN_107386204(auStack_4f0,plVar9 + 5,auStack_2f8,auStack_168);
      }
      uVar5 = (char)uStack_4b0 == '\x01';
      if ((bool)uVar5) {
        func_0x000107268350(auStack_c0,auStack_4f0);
      }
      else {
        auStack_c0[0] = 7;
      }
      puVar7 = (uint *)(plVar9 + 2);
      FUN_107386170(auStack_f8,lVar10 + 0x20,puVar7,auStack_c0);
      func_0x000104c3323c(auStack_c0);
      func_0x000107267ed0(auStack_4f0);
    }
    func_0x00010724b3d8(auStack_530);
    func_0x00010724b3d8(auStack_168);
    func_0x000107267da8(auStack_2f8);
    func_0x000107277d70(&uStack_5c8);
    in_stack_fffffffffffffa30 = unaff_x19;
  }
  pplVar6 = &plStack_598;
  func_0x00010735a1b8(pplVar6);
  func_0x00010738a280(uStack_80);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  if (param_4 != 0) {
    func_0x00010738a9b4();
    func_0x00010724b3d8(auStack_168);
    func_0x000107267da8(auStack_2f8);
    func_0x000107277d70(&uStack_5c8);
    func_0x00010735ce54(in_stack_fffffffffffffa30);
    pplVar6 = &plStack_598;
    func_0x00010735a1b8(pplVar6);
  }
  func_0x00010738a3dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (extraout_x8_01,pplVar6 + 8);
  return;
}



/* Entry: 1073833a8; end: 1073833b3;  */

void FUN_1073833a8(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1,param_2 + 0x40);
  return;
}



/* Entry: 1073833b4; end: 1073834bf;  */

void FUN_1073833b4(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  
  func_0x0001001e7a38();
  FUN_1073244ec(param_1 + 8,param_2 + 8);
  lVar4 = *(long *)(unaff_x20 + 0x88);
  lVar2 = *(long *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(long *)(unaff_x19 + 0x78) = lVar2;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x80) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  lVar3 = *(long *)(unaff_x20 + 0x90);
  *(long *)(unaff_x19 + 0x90) = lVar3;
  *(undefined4 *)(unaff_x19 + 0x98) = *(undefined4 *)(unaff_x20 + 0x98);
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = *(ulong *)(unaff_x19 + 0x80);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long *)(lVar2 + uVar5 * 8) = unaff_x19 + 0x88;
    *(long *)(unaff_x20 + 0x88) = 0;
    *(undefined8 *)(unaff_x20 + 0x90) = 0;
  }
  func_0x00010727d9cc(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  return;
}



/* Entry: 1073834c0; end: 107383503;  */

void FUN_1073834c0(long param_1)

{
  if (*(uint *)(param_1 + 0x70) != 0xffffffff) {
    func_0x00010738a694((&PTR_FUN_1109a7bb0)[*(uint *)(param_1 + 0x70)]);
  }
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  return;
}


